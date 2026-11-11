// TimeSplitters-specific runtime overrides.
#include "game_overrides.h"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "runtime/ps2_audio.h"
#include "runtime/ps2_music.h"
#include "runtime/ps2_vfs.h"
#include "runtime/ps2_host_settings.h"
#include "runtime/ps2_loading.h"
#include "runtime/ps2_pad_host.h"
#include "ps2_recompiled_functions.h"

#if defined(PLATFORM_XBOX)
#include "../../src/xbox/gs_nv2a_backend.h" // status counters
#include "../../src/xbox/xbox_perf.h"       // frame times, phase brackets
#include "../../src/xbox/xbox_sweep.h"      // the sweep's replacements
#include "runtime/ee_scheduler.h"
#include "ts_native_fp.h"
#include "ts_native_game.h"
#include "ts_native_game2.h"
#include "ts_native_game3.h"
#include "ts_native_math.h"
#endif

#include <algorithm>
#include <cctype>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <iterator>
#include <string>
#include <utility>
#include <vector>

namespace
{
    // stream_RPC(command, argument) is the game's single entry to the FRD
    // music stream driver on the IOP; it returns the first word of the
    // driver's reply. Commands (from musicOpen/Start/Stop/SetVol/...):
    //   0x7FF0, 0x8000  init          0x8020  open (argument: filename)
    //   0x80, 0x81      channel setup 0x8050  play    0x8060  resume
    //   0x8070          pause         0x80F0  stop    0x80E0  status
    //   0xB0, 0xC0      volume (left << 16 | right, 0..0x3FFF)
    //   0x30            close
    // Status 0x5000 means playing; 0 means stopped.
    constexpr uint32_t kStreamRpc = 0x205DE8u;
    constexpr uint32_t kStatusPlaying = 0x5000u;

    std::string readGuestString(uint8_t *rdram, uint32_t address)
    {
        std::string text;
        for (uint32_t i = 0; i < 256u; ++i)
        {
            const char c = static_cast<char>(rdram[(address + i) & 0x1FFFFFFu]);
            if (c == '\0')
                break;
            text.push_back(c);
        }
        return text;
    }

    bool resolveDiscPath(PS2Runtime &runtime, std::string guestPath, std::filesystem::path &hostPath)
    {
        const PS2Runtime::IoPaths &paths = PS2Runtime::getIoPaths();
        const PS2VfsMounts mounts{paths.hostRoot, paths.cdRoot, paths.mcRoot};
        if (guestPath.find(':') == std::string::npos)
            guestPath = "cdrom0:" + guestPath;
        if (runtime.vfs().resolveHostPath(guestPath, mounts, hostPath) && std::filesystem::exists(hostPath))
            return true;
        if (const size_t semicolon = guestPath.rfind(';'); semicolon != std::string::npos)
        {
            guestPath.erase(semicolon);
            if (runtime.vfs().resolveHostPath(guestPath, mounts, hostPath) && std::filesystem::exists(hostPath))
                return true;
        }
        return false;
    }

    void nativeStreamRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t command = GPR_U32(ctx, 4);
        const uint32_t argument = GPR_U32(ctx, 5);
        Ps2Music &music = runtime->audioBackend().music();
        uint32_t result = 0u;
        switch (command)
        {
        case 0x8020:
        {
            const std::string name = readGuestString(rdram, argument);
            std::filesystem::path hostPath;
            const bool opened = resolveDiscPath(*runtime, name, hostPath) && music.open(hostPath.string());
            std::fprintf(stderr, "[TS:music] open %s -> %s\n", name.c_str(), opened ? hostPath.string().c_str() : "failed");
            break;
        }
        case 0x8050: music.play(); break;
        case 0x8060: music.resume(); break;
        case 0x8070: music.pause(); break;
        case 0x80F0: music.stop(); break;
        case 0x80E0: result = music.playing() ? kStatusPlaying : 0u; break;
        case 0xB0:
        case 0xC0: music.setVolume(argument >> 16, argument & 0xFFFFu); break;
        case 0x30: music.close(); break;
        default: break; // init and channel setup need nothing here
        }
        SET_GPR_U32(ctx, 2, result);
        ctx->pc = GPR_U32(ctx, 31);
    }

    // TS_TRACE_DAMAGE=1: log every propDamage call (target, attacker, amount,
    // the target's health at +0x208 before and after).
    float readGuestFloat(uint8_t *rdram, uint32_t address)
    {
        float value = 0.0f;
        std::memcpy(&value, rdram + (address & 0x1FFFFFCu), sizeof(value));
        return value;
    }

    void tracedPropDamage(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t target = GPR_U32(ctx, 4), attacker = GPR_U32(ctx, 5), caller = GPR_U32(ctx, 31);
        float amount = 0.0f;
        std::memcpy(&amount, &ctx->f[12], sizeof(amount));
        const float before = target ? readGuestFloat(rdram, target + 0x208u) : 0.0f;
        propDamage_0x271998(rdram, ctx, runtime);
        const float after = target ? readGuestFloat(rdram, target + 0x208u) : 0.0f;
        auto word = [rdram](uint32_t address) {
            uint32_t value = 0;
            std::memcpy(&value, rdram + (address & 0x1FFFFFCu), sizeof(value));
            return value;
        };
        std::fprintf(stderr,
                     "[TS:damage] caller=%08x target=%08x (type %u flags %08x) attacker=%08x (type %u flags %08x) "
                     "amount=%g health %g -> %g a3=%08x\n",
                     caller, target, target ? word(target + 8u) : 0u, target ? word(target + 0x10u) : 0u, attacker,
                     attacker ? word(attacker + 8u) : 0u, attacker ? word(attacker + 0x10u) : 0u, amount, before, after,
                     GPR_U32(ctx, 7));
    }

    // TS_LIBM_SELFTEST=1: call the game's own (recompiled) math routines with
    // known inputs, compare with the host C library, print, and exit.
    void libmSelfTest(PS2Runtime &runtime)
    {
        uint8_t *rdram = runtime.memory().getRDRAM();
        // This opt-in diagnostic exits after completion. Reserve an owned stack
        // from the runtime, rather than borrowing active high-BSS game storage.
        constexpr uint32_t stackBytes = 0x4000u;
        const uint32_t stack = runtime.reserveKernelMemory(stackBytes);
        if (!stack) { std::fprintf(stderr, "[TS:libm] no test stack available\n"); std::exit(1); }
        std::memset(rdram + stack, 0, stackBytes);
        auto fresh = [stack] {
            R5900Context ctx{};
            R5900Context *ctxp = &ctx;
            SET_GPR_U32(ctxp, 29, stack + stackBytes - 16u);
            SET_GPR_U32(ctxp, 31, 0u);
            return ctx;
        };
        auto bitsOf = [](double d) { uint64_t b; std::memcpy(&b, &d, 8); return b; };
        auto asDouble = [](uint64_t b) { double d; std::memcpy(&d, &b, 8); return d; };
        using Fn = void (*)(uint8_t *, R5900Context *, PS2Runtime *);
        auto d1 = [&](const char *name, Fn fn, double a, double expected) {
            R5900Context ctx = fresh();
            R5900Context *ctxp = &ctx;
            SET_GPR_U64(ctxp, 4, bitsOf(a));
            fn(rdram, &ctx, &runtime);
            const double got = asDouble(GPR_U64(ctxp, 2));
            std::fprintf(stderr, "[TS:libm] %-8s(%g) = %.9g expected %.9g %s\n", name, a, got, expected,
                         std::fabs(got - expected) <= 1e-6 * (1.0 + std::fabs(expected)) ? "ok" : "WRONG");
        };
        auto d2 = [&](const char *name, Fn fn, double a, double b, double expected) {
            R5900Context ctx = fresh();
            R5900Context *ctxp = &ctx;
            SET_GPR_U64(ctxp, 4, bitsOf(a));
            SET_GPR_U64(ctxp, 5, bitsOf(b));
            fn(rdram, &ctx, &runtime);
            const double got = asDouble(GPR_U64(ctxp, 2));
            std::fprintf(stderr, "[TS:libm] %-8s(%g, %g) = %.9g expected %.9g %s\n", name, a, b, got, expected,
                         std::fabs(got - expected) <= 1e-6 * (1.0 + std::fabs(expected)) ? "ok" : "WRONG");
        };
        auto f1 = [&](const char *name, Fn fn, float a, float expected) {
            R5900Context ctx = fresh();
            R5900Context *ctxp = &ctx;
            ctx.f[12] = a;
            fn(rdram, &ctx, &runtime);
            const float got = ctx.f[0];
            std::fprintf(stderr, "[TS:libm] %-8s(%g) = %.7g expected %.7g %s\n", name, a, got, expected,
                         std::fabs(got - expected) <= 1e-5f * (1.0f + std::fabs(expected)) ? "ok" : "WRONG");
        };
        {
            R5900Context ctx = fresh();
            R5900Context *ctxp = &ctx;
            ctx.f[12] = 1.5f;
            fptodp_0x2e4608(rdram, &ctx, &runtime);
            std::fprintf(stderr, "[TS:libm] fptodp(1.5) = %.9g %s\n", asDouble(GPR_U64(ctxp, 2)),
                         asDouble(GPR_U64(ctxp, 2)) == 1.5 ? "ok" : "WRONG");
            ctx = fresh();
            SET_GPR_U64(ctxp, 4, bitsOf(2.25));
            dptofp_0x2e3a10(rdram, &ctx, &runtime);
            std::fprintf(stderr, "[TS:libm] dptofp(2.25) = %g %s\n", ctx.f[0], ctx.f[0] == 2.25f ? "ok" : "WRONG");
        }
        d2("dpadd", dpadd_0x2e3180, 1.5, 2.25, 3.75);
        d2("dpsub", dpsub_0x2e31d8, 1.5, 2.25, -0.75);
        d2("dpmul", dpmul_0x2e3240, 1.5, -2.25, -3.375);
        d2("dpdiv", dpdiv_0x2e34e8, 1.0, 3.0, 1.0 / 3.0);
        d1("sqrt", sqrt_0x2d7a58, 2.0, std::sqrt(2.0));
        d1("atan", atan_0x2d6ba8, 1.0, std::atan(1.0));
        d2("atan2", atan2_0x2d7510, 1.0, -1.0, std::atan2(1.0, -1.0));
        d2("atan2", atan2_0x2d7510, -0.5, 2.0, std::atan2(-0.5, 2.0));
        d2("pow", pow_0x2d7628, 2.0, 10.0, 1024.0);
        d2("pow", pow_0x2d7628, 9.0, 0.5, 3.0);
        d1("floor", floor_0x2d6ff0, 2.7, 2.0);
        d1("floor", floor_0x2d6ff0, -2.7, -3.0);
        d1("fabs", fabs_0x2d6fb8, -3.25, 3.25);
        f1("sinf", sinf_0x2d7398, 0.5f, std::sin(0.5f));
        f1("sinf", sinf_0x2d7398, 4.0f, std::sin(4.0f));
        f1("cosf", cosf_0x2d71c8, 0.5f, std::cos(0.5f));
        f1("cosf", cosf_0x2d71c8, 100.0f, std::cos(100.0f));
        f1("sqrtf", sqrtf_0x2d8398, 2.0f, std::sqrt(2.0f));
        f1("acosf", acosf_0x2d7b68, 0.25f, std::acos(0.25f));
        std::exit(0);
    }

    // Widescreen: matrixPerspective(m, aspect f12, fovy f13, near f14, far f15)
    // builds every 3D projection (camTick, SetWindow). Scaling the aspect by
    // 4/3 widens the horizontal view; the 640-wide frame is then shown at 16:9.
    // TS_SPLIT_WIDESCREEN_OFF 1: not with two or more local players (split
    // screen, REWRITE-PLAN.md M2.3): the views keep the game's own aspect, and
    // the GS front end leaves their HUDs as drawn (gsSetSplitScreen; its
    // narrowing anchors to the edges of one full-screen view). The count is
    // ilinkGetNumLocalPlayers' (gp-0x608C), which gameReset sets before a
    // match's cameras are built. 0: as before.
#ifndef TS_SPLIT_WIDESCREEN_OFF
#define TS_SPLIT_WIDESCREEN_OFF 1
#endif
    void widescreenMatrixPerspective(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
#if TS_SPLIT_WIDESCREEN_OFF
        constexpr uint32_t kLocalPlayers = 0x003AE764u;
        const bool split = READ32(kLocalPlayers) > 1u;
        gsSetSplitScreen(split);
        if (hostSettings().widescreen && !split)
#else
        if (hostSettings().widescreen)
#endif
            ctx->f[12] *= 4.0f / 3.0f;
        matrixPerspective_0x2b5258(rdram, ctx, runtime);
    }

    // The loading wheel (runtime/ps2_loading.h): cpuMain loads a level from
    // lvResetBefore to gameResetAfter (lvPreload, the textures, the level's
    // setup between), drawing no frame meanwhile. The start-up's loads (the
    // splash screen, before the front end's first menu: displayMenuTick
    // sets g_menusShown) show none.
    bool g_menusShown = false;
    void lvResetBeforeLoading(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (g_menusShown)
            ps2_loading::begin();
        if (std::getenv("TS_TRACE_LOADING"))
            std::fprintf(stderr, "[TS:loading] level load begins\n");
        lvResetBefore_0x225cd8(rdram, ctx, runtime);
    }

    void gameResetAfterLoaded(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        gameResetAfter_0x21ede8(rdram, ctx, runtime);
        if (std::getenv("TS_TRACE_LOADING"))
            std::fprintf(stderr, "[TS:loading] level load ends\n");
        ps2_loading::end();
    }


    // The game's Audio / Video Options page (audiovideo_pageTick) runs the
    // generic menutick and std_menumake on audiovideo_menu: a 16-byte header
    // and 32-byte items {text, 0, id, flags, gv*, up id, down id}, each item
    // editing a 40-byte "gv" value {value, min, max, flags, choices*, ...}.
    // Text below 0x4DE is a language-table id, anything else a string
    // pointer. The two calls are wrapped so the page uses an extended copy of
    // the menu with the PC display settings added after Screen Adjust; after
    // each tick the chosen values are applied and saved to timesplitters.ini.
    // Guest RAM for what the overrides add (menu copies, texts the game
    // points at): the runtime's host reserve (PS2Runtime::kHostReservedBase,
    // kept out of the game's and the kernel's use), laid out here and
    // nowhere else. Every write stays inside its own part.
    constexpr uint32_t kReserve = PS2Runtime::kHostReservedBase;
    constexpr uint32_t kDisplayMenuBlock = kReserve + 0x0000u, kDisplayMenuBlockSize = 0x800u; // the Audio / Video menu's copy
    constexpr uint32_t kGameModeBlock = kReserve + 0x0800u, kGameModeBlockSize = 0x400u;       // Select Game Type's copy
    constexpr uint32_t kSetupBlock = kReserve + 0x0C00u, kSetupBlockSize = 0x300u;             // the pause SETUP tab's copy (PC)
    constexpr uint32_t kExitAskText = kReserve + 0x0F00u, kExitAskTextSize = 0x100u;           // "Exit TimeSplitters?" (PC)
    constexpr uint32_t kTextBlock = kReserve + 0x1000u, kTextBlockEnd = kReserve + 0x3FF0u; // owned replacement strings
    constexpr uint32_t kMenuTraceWord = kReserve + 0x3FF0u;                                    // TS_TRACE_MENUS: the menu ticked
    static_assert(kTextBlockEnd <= kMenuTraceWord &&
                      kMenuTraceWord + 4u <= kReserve + PS2Runtime::kHostReservedSize,
                  "the overrides' guest RAM fits the host reserve");
    const PS2Runtime *g_reserveOwner = nullptr; // (set at registration; the reserve exists once the ELF is loaded)
    bool reserveReady()
    {
        return g_reserveOwner && g_reserveOwner->hostReservedActive();
    }

    constexpr uint32_t kMenuTick = 0x230238u;
    constexpr uint32_t kStdMenuMake = 0x22DAF8u;
    constexpr uint32_t kAudioVideoMenu = 0x353C08u;
    constexpr uint32_t kGvPlaySound = 0x353798u; // on/off template
    constexpr uint32_t kDispOnOff = 0x352D60u;
    constexpr uint32_t kOriginalItems = 5u;       // before the page-link item
    constexpr uint32_t kItemSize = 32u, kGvSize = 40u;
    constexpr uint32_t kMouseSpeedLevels = 10u;

    struct Resolution
    {
        int width, height;
    };

    struct DisplayMenu
    {
        uint32_t menu = 0;
        uint32_t gvWidescreen = 0, gvFxaa = 0, gvResolution = 0, gvFullscreen = 0, gvScale = 0;
        uint32_t gvVsync = 0, gvMouse = 0, gvMouseSpeed = 0, gvCrosshair = 0; // PC only (0 on the Xbox)
        uint32_t scaleLabel = 0; // notes when the change waits for a restart
        std::vector<Resolution> resolutions;
        int startupScale = 1;
    };
    DisplayMenu g_displayMenu;

    uint32_t &guestWord(uint8_t *rdram, uint32_t address)
    {
        return *reinterpret_cast<uint32_t *>(rdram + (address & 0x1FFFFFCu));
    }

    float &guestFloat(uint8_t *rdram, uint32_t address)
    {
        return *reinterpret_cast<float *>(rdram + (address & 0x1FFFFFCu));
    }

    uint16_t &guestHalf(uint8_t *rdram, uint32_t address)
    {
        return *reinterpret_cast<uint16_t *>(rdram + (address & 0x1FFFFFEu));
    }

    // Host overrides accept physical RAM and its documented cached/uncached aliases,
    // not arbitrary addresses silently folded into unrelated RAM.
    bool guestRange(uint32_t address, uint32_t bytes, uint32_t alignment = 1u)
    {
        const uint32_t segment = address & 0xE0000000u;
        if (segment != 0u && segment != 0x20000000u && segment != 0x80000000u && segment != 0xA0000000u)
            return false;
        const uint32_t physical = address & 0x1FFFFFFFu;
        return physical >= 0x1000u && physical < 0x2000000u &&
               bytes <= 0x2000000u - physical && (physical % alignment) == 0u;
    }
    uint32_t g_textCursor = kTextBlock;
    bool g_wordingApplied = false;
    int g_capsThen = 0;
    uint32_t copyReplacementText(uint8_t *rdram, const std::string &text)
    {
        if (!reserveReady() || text.size() >= kTextBlockEnd - kTextBlock)
            return 0;
        const uint32_t bytes = (static_cast<uint32_t>(text.size()) + 4u) & ~3u;
        if (g_textCursor > kTextBlockEnd || bytes > kTextBlockEnd - g_textCursor)
            return 0;
        const uint32_t at = g_textCursor;
        std::memcpy(rdram + at, text.c_str(), text.size() + 1u);
        g_textCursor += bytes;
        return at;
    }
    bool readGuestText(uint8_t *rdram, uint32_t address, std::string &out)
    {
        if (!guestRange(address, 1u)) return false;
        const uint32_t at = address & 0x1FFFFFFFu;
        // Strings in this interface must terminate inside RAM and within a
        // practical text limit. A damaged pointer must not scan the whole image.
        const size_t room = std::min<size_t>(4096u, 0x2000000u - at);
        const char *text = reinterpret_cast<const char *>(rdram + at);
        const char *end = static_cast<const char *>(std::memchr(text, 0, room));
        if (!end) return false;
        out.assign(text, end);
        return true;
    }

    void writeGuestString(uint8_t *rdram, uint32_t address, const std::string &text)
    {
        std::memcpy(rdram + address, text.c_str(), text.size() + 1);
    }

    // Returns 0 if guest memory could not be found.
    uint32_t buildDisplayMenu(uint8_t *rdram)
    {
        DisplayMenu &m = g_displayMenu;
        HostSettings &settings = hostSettings();
        m.startupScale = settings.renderScale;
        m.resolutions = {{1280, 720}, {1600, 900}, {1920, 1080}, {2560, 1440}, {3840, 2160}};
        if (std::none_of(m.resolutions.begin(), m.resolutions.end(), [&](const Resolution &r) {
                return r.width == settings.windowWidth && r.height == settings.windowHeight;
            }))
            m.resolutions.push_back({settings.windowWidth, settings.windowHeight});

        // The game's own allocator owns the heap it sets up, so the copy is
        // kept in the host reserve's part for it (kDisplayMenuBlock). A part
        // too small fails closed: callers never write after a failed take.
        if (!reserveReady())
            return 0;
        constexpr uint32_t block = kDisplayMenuBlock;
        uint32_t cursor = block;
        bool overflow = false;
        auto take = [&](uint32_t bytes) {
            const uint32_t size = (bytes + 15u) & ~15u;
            if (overflow || bytes > kDisplayMenuBlockSize || size > block + kDisplayMenuBlockSize - cursor)
            {
                overflow = true;
                return 0u;
            }
            const uint32_t at = cursor;
            cursor += size;
            return at;
        };
        auto text = [&](const std::string &value, uint32_t room = 0) {
            const uint32_t at = take(std::max<uint32_t>(room, static_cast<uint32_t>(value.size()) + 1u));
            if (at) writeGuestString(rdram, at, value);
            return at;
        };
        auto choices = [&](const std::vector<uint32_t> &texts) {
            const uint32_t at = take(static_cast<uint32_t>(texts.size() + 1u) * 8u);
            if (!at) return 0u;
            std::memset(rdram + at, 0, (texts.size() + 1u) * 8u);
            for (uint32_t i = 0; i < texts.size(); ++i)
            {
                guestWord(rdram, at + i * 8u) = i;
                guestWord(rdram, at + i * 8u + 4u) = texts[i];
            }
            return at;
        };
        auto gv = [&](uint32_t max, uint32_t list) {
            const uint32_t at = take(kGvSize);
            if (!at) return 0u;
            std::memcpy(rdram + at, rdram + kGvPlaySound, kGvSize);
            guestWord(rdram, at + 0u) = 0u;
            guestWord(rdram, at + 4u) = 0u;
            guestWord(rdram, at + 8u) = max;
            guestWord(rdram, at + 16u) = list;
            guestWord(rdram, at + 20u) = 0u; // no onchange: applied after the tick
            return at;
        };

        std::vector<uint32_t> resolutionTexts;
        for (const Resolution &r : m.resolutions)
            resolutionTexts.push_back(text(std::to_string(r.width) + "x" + std::to_string(r.height)));
        m.gvWidescreen = gv(1u, kDispOnOff);
        m.gvFxaa = gv(1u, kDispOnOff);
        m.gvResolution = gv(static_cast<uint32_t>(m.resolutions.size() - 1u), choices(resolutionTexts));
        m.gvFullscreen = gv(1u, kDispOnOff);
        m.gvScale = gv(3u, choices({text("Original"), text("2x"), text("3x"), text("4x")}));
#if !defined(PLATFORM_XBOX)
        m.gvVsync = gv(1u, kDispOnOff);
        m.gvMouse = gv(1u, kDispOnOff);
        std::vector<uint32_t> speedTexts;
        for (uint32_t level = 1; level <= kMouseSpeedLevels; ++level)
            speedTexts.push_back(text(std::to_string(level)));
        m.gvMouseSpeed = gv(kMouseSpeedLevels - 1u, choices(speedTexts));
        m.gvCrosshair = gv(1u, kDispOnOff);
#endif

        struct NewItem
        {
            const char *label;
            uint32_t gv;
        };
        const NewItem added[] = {
            {"Widescreen", m.gvWidescreen},
            {"Edge smoothing", m.gvFxaa},
            {"Resolution", m.gvResolution},
            {"Full screen", m.gvFullscreen},
            {"Render quality", m.gvScale},
#if !defined(PLATFORM_XBOX)
            {"V-Sync", m.gvVsync},
            {"Mouse", m.gvMouse},
            {"Mouse speed", m.gvMouseSpeed},
            {"Crosshair", m.gvCrosshair},
#endif
        };
        const uint32_t itemCount = kOriginalItems + static_cast<uint32_t>(std::size(added));
        uint32_t labels[std::size(added)];
        for (size_t i = 0; i < std::size(added); ++i)
            labels[i] = text(added[i].label, 48u);
        m.scaleLabel = labels[4]; // Render quality

        m.menu = take(16u + (itemCount + 1u) * kItemSize);
        if (!m.menu || overflow) { m = DisplayMenu{}; return 0u; }
        std::memcpy(rdram + m.menu, rdram + kAudioVideoMenu, 16u + kOriginalItems * kItemSize);
        guestWord(rdram, m.menu) = itemCount + 1u;
        const uint32_t items = m.menu + 16u;
        for (size_t i = 0; i < std::size(added); ++i)
        {
            const uint32_t item = items + (kOriginalItems + static_cast<uint32_t>(i)) * kItemSize;
            const uint16_t id = static_cast<uint16_t>(kOriginalItems + 1u + i);
            guestWord(rdram, item + 0u) = labels[i];
            guestHalf(rdram, item + 8u) = id;
            guestHalf(rdram, item + 10u) = 0x24u; // same as the Sound on/off item
            guestWord(rdram, item + 12u) = added[i].gv;
        }
        for (uint32_t i = 0; i < itemCount; ++i)
        {
            const uint32_t item = items + i * kItemSize;
            guestHalf(rdram, item + 16u) = static_cast<uint16_t>(i == 0u ? itemCount : i);          // up
            guestHalf(rdram, item + 18u) = static_cast<uint16_t>(i + 1u == itemCount ? 1u : i + 2u); // down
        }
        // The page-link item that ends the list.
        std::memcpy(rdram + items + itemCount * kItemSize, rdram + kAudioVideoMenu + 16u + kOriginalItems * kItemSize,
                    kItemSize);
        if (overflow)
        {
            std::fprintf(stderr, "[TS:menu] display options do not fit their block; not added\n");
            m.menu = 0;
        }
        return m.menu;
    }

#if !defined(PLATFORM_XBOX)
    // Mouse speed 1-10 in the menu is mouse_sensitivity 0.2-2.0 (5: 1.0).
    uint32_t mouseSpeedLevel(float sensitivity)
    {
        return static_cast<uint32_t>(std::clamp(static_cast<int>(std::lround(sensitivity * 5.0f)), 1,
                                                static_cast<int>(kMouseSpeedLevels)));
    }
#endif

    int resolutionIndex(const DisplayMenu &m, const HostSettings &settings)
    {
        for (size_t i = 0; i < m.resolutions.size(); ++i)
        {
            if (m.resolutions[i].width == settings.windowWidth && m.resolutions[i].height == settings.windowHeight)
                return static_cast<int>(i);
        }
        return static_cast<int>(m.resolutions.size()) - 1;
    }

    // Copies the settings into the menu's values and refreshes texts and the
    // original items' greyed-out flags (the page sets them on the original).
    void syncDisplayMenuFromSettings(uint8_t *rdram)
    {
        const DisplayMenu &m = g_displayMenu;
        const HostSettings &settings = hostSettings();
        guestWord(rdram, m.gvWidescreen) = settings.widescreen ? 1u : 0u;
        guestWord(rdram, m.gvFxaa) = settings.fxaa ? 1u : 0u;
        guestWord(rdram, m.gvResolution) = static_cast<uint32_t>(resolutionIndex(m, settings));
        guestWord(rdram, m.gvFullscreen) = settings.fullscreen ? 1u : 0u;
        guestWord(rdram, m.gvScale) = static_cast<uint32_t>(std::clamp(settings.renderScale.load(), 1, 4) - 1);
#if !defined(PLATFORM_XBOX)
        guestWord(rdram, m.gvVsync) = settings.vsync ? 1u : 0u;
        guestWord(rdram, m.gvMouse) = settings.mouse ? 1u : 0u;
        guestWord(rdram, m.gvMouseSpeed) = mouseSpeedLevel(settings.mouseSensitivity) - 1u;
        guestWord(rdram, m.gvCrosshair) = settings.crosshair ? 1u : 0u;
#endif
        writeGuestString(rdram, m.scaleLabel,
                         settings.renderScale == m.startupScale ? "Render quality" : "Render quality (on restart)");
        for (uint32_t i = 0; i < kOriginalItems; ++i)
            guestHalf(rdram, m.menu + 16u + i * kItemSize + 10u) =
                guestHalf(rdram, kAudioVideoMenu + 16u + i * kItemSize + 10u);
    }

    void applyDisplayMenuToSettings(uint8_t *rdram)
    {
        const DisplayMenu &m = g_displayMenu;
        HostSettings &settings = hostSettings();
        bool changed = false, windowChanged = false;
        const bool widescreen = guestWord(rdram, m.gvWidescreen) != 0u;
        const bool fxaa = guestWord(rdram, m.gvFxaa) != 0u;
        const bool fullscreen = guestWord(rdram, m.gvFullscreen) != 0u;
        const int scale = std::clamp(static_cast<int>(guestWord(rdram, m.gvScale)) + 1, 1, 4);
        const int resolution = std::clamp(static_cast<int>(guestWord(rdram, m.gvResolution)), 0,
                                          static_cast<int>(m.resolutions.size()) - 1);
        if (widescreen != settings.widescreen)
        {
            settings.widescreen = widescreen;
            changed = true;
        }
        if (fxaa != settings.fxaa)
        {
            settings.fxaa = fxaa;
            changed = true;
        }
        if (scale != settings.renderScale)
        {
            settings.renderScale = scale;
            changed = true;
        }
        if (fullscreen != settings.fullscreen)
        {
            settings.fullscreen = fullscreen;
            changed = windowChanged = true;
        }
        if (resolution != resolutionIndex(m, settings))
        {
            settings.windowWidth = m.resolutions[resolution].width;
            settings.windowHeight = m.resolutions[resolution].height;
            changed = windowChanged = true;
        }
#if !defined(PLATFORM_XBOX)
        const bool vsync = guestWord(rdram, m.gvVsync) != 0u;
        const bool mouse = guestWord(rdram, m.gvMouse) != 0u;
        const uint32_t speed = std::min(guestWord(rdram, m.gvMouseSpeed), kMouseSpeedLevels - 1u) + 1u;
        if (vsync != settings.vsync)
        {
            settings.vsync = vsync;
            changed = true;
        }
        if (mouse != settings.mouse)
        {
            settings.mouse = mouse;
            changed = true;
        }
        if (speed != mouseSpeedLevel(settings.mouseSensitivity))
        {
            settings.mouseSensitivity = static_cast<float>(speed) / 5.0f;
            changed = true;
        }
        if (const bool crosshair = guestWord(rdram, m.gvCrosshair) != 0u; crosshair != settings.crosshair)
        {
            settings.crosshair = crosshair;
            changed = true;
        }
#endif
        if (windowChanged)
            ++settings.windowChanges;
        if (changed)
            saveHostSettings();
    }

    bool useDisplayMenu(uint8_t *rdram, R5900Context *ctx)
    {
        if (!reserveReady() || GPR_U32(ctx, 5) != kAudioVideoMenu)
            return false;
        if (!g_displayMenu.menu && !buildDisplayMenu(rdram))
            return false;
        syncDisplayMenuFromSettings(rdram);
        SET_GPR_U32(ctx, 5, g_displayMenu.menu);
        return true;
    }


    // "Exit Game" on the Select Game Type page (gamemode_menu). The item is a
    // page link back to the same page, so the game itself never leaves it;
    // the menutick wrapper sees Cross pressed on it and stops the game.
    constexpr uint32_t kGameModeMenu = 0x354FE0u;
    constexpr uint32_t kGameTypePage = 0x3550F0u;
    constexpr uint32_t kGameModeLinks = 6u; // items before the two 0x8000 items
    constexpr uint32_t kGameModeTail = 2u;
    constexpr uint16_t kExitGameId = 7u;

    // The copy's layout in its part of the host reserve: the label (0x20
    // bytes), then the menu, its header and the link items, Exit Game and the
    // tail.
    static_assert(0x20u + 16u + (kGameModeLinks + 1u + kGameModeTail) * 32u <= kGameModeBlockSize,
                  "Select Game Type's copy fits its block");

    bool gameModeBlockFree(uint8_t *)
    {
        if (!reserveReady())
            std::fprintf(stderr, "[TS:menu] no host reserve; Exit Game not added\n");
        return reserveReady();
    }

    // The page's tick rewrites the original items every frame (positions,
    // links, which entries show), so the copy is rebuilt from it each time.
#if !defined(PLATFORM_XBOX)
    // PC: Exit Game asks once more before quitting. The first Cross on it
    // turns its text into "Press again to exit" for five seconds; a second
    // Cross then quits. Moving off it, or the five seconds passing, puts it
    // back.
    std::chrono::steady_clock::time_point g_exitArmedUntil{};
    bool exitArmed()
    {
        return std::chrono::steady_clock::now() < g_exitArmedUntil;
    }
#endif

    uint32_t layoutGameModeMenu(uint8_t *rdram)
    {
        const uint32_t label = kGameModeBlock;
#if !defined(PLATFORM_XBOX)
        writeGuestString(rdram, label, exitArmed() ? "Press again to exit" : "Exit Game");
#else
        writeGuestString(rdram, label, "Exit Game");
#endif
        const uint32_t menu = kGameModeBlock + 0x20u;
        const uint32_t items = menu + 16u;
        // Header and the six link items, then Exit Game, then the tail.
        std::memcpy(rdram + menu, rdram + kGameModeMenu, 16u + kGameModeLinks * kItemSize);
        std::memcpy(rdram + items + (kGameModeLinks + 1u) * kItemSize,
                    rdram + kGameModeMenu + 16u + kGameModeLinks * kItemSize, kGameModeTail * kItemSize);
        guestWord(rdram, menu) = kGameModeLinks + 1u + kGameModeTail;
        const uint32_t exitItem = items + kGameModeLinks * kItemSize;
        const uint32_t above = exitItem - kItemSize; // Audio / Video Options
        std::memset(rdram + exitItem, 0, kItemSize);
        guestWord(rdram, exitItem + 0u) = label;
        // Same column as the item above, one line (11 units) lower.
        guestHalf(rdram, exitItem + 4u) = guestHalf(rdram, above + 4u);
        guestHalf(rdram, exitItem + 6u) = static_cast<uint16_t>(guestHalf(rdram, above + 6u) + 11u);
        guestHalf(rdram, exitItem + 8u) = kExitGameId;
        guestHalf(rdram, exitItem + 10u) = guestHalf(rdram, above + 10u);
        guestWord(rdram, exitItem + 12u) = kGameTypePage;
        const uint16_t aboveId = guestHalf(rdram, above + 8u);
        guestHalf(rdram, exitItem + 16u) = aboveId;                          // up
        guestHalf(rdram, exitItem + 18u) = guestHalf(rdram, above + 18u);    // down: where the item above led
        guestHalf(rdram, above + 18u) = kExitGameId;
        // Whichever item pointed up at Audio / Video now points up at Exit Game.
        for (uint32_t i = 0; i < kGameModeLinks; ++i)
        {
            const uint32_t item = items + i * kItemSize;
            if (item != above && guestHalf(rdram, item + 16u) == aboveId)
                guestHalf(rdram, item + 16u) = kExitGameId;
        }
        return menu;
    }

    bool useGameModeMenu(uint8_t *rdram, R5900Context *ctx)
    {
        if (GPR_U32(ctx, 5) != kGameModeMenu)
            return false;
        if (!gameModeBlockFree(rdram))
            return false;
        const uint32_t menu = layoutGameModeMenu(rdram);
        if (!menu) return false;
        if (guestRange(GPR_U32(ctx, 4), 6u, 2u) && guestHalf(rdram, GPR_U32(ctx, 4) + 4u) == kExitGameId &&
            guestRange(GPR_U32(ctx, 28) - 0x6CACu, 4u, 4u))
        {
            const uint32_t language = guestWord(rdram, GPR_U32(ctx, 28) - 0x6CACu);
            if (language < 8u)
            {
                const uint32_t table = guestWord(rdram, 0x2F2C18u + language * 4u);
                if (guestRange(table, 0x204u, 4u))
                    guestWord(rdram, menu + 16u + (kGameModeLinks + 2u) * kItemSize) = guestWord(rdram, table + 0x200u);
            }
        }
        SET_GPR_U32(ctx, 5, menu);
        return true;
    }

    // True when Cross is newly pressed with Exit Game highlighted (the page
    // state in a0 holds the highlighted item id at +4). Like menutick, this
    // reads joyNewBut(pad) & 0x40, where pad is the first word of the menu
    // input struct *(gp - 0x5FFC): the pad slot is remapped through the
    // table at 0x31DF68 and each 0x180-byte pad record at 0x31C740 keeps
    // its newly pressed buttons at +0x124.
    bool exitGameChosen(uint8_t *rdram, R5900Context *ctx)
    {
        if (!guestRange(GPR_U32(ctx, 4), 6u, 2u) || guestHalf(rdram, GPR_U32(ctx, 4) + 4u) != kExitGameId)
            return false;
        const uint32_t inputAt = GPR_U32(ctx, 28) - 0x5FFCu;
        if (!guestRange(inputAt, 4u, 4u)) return false;
        const uint32_t input = guestWord(rdram, inputAt);
        if (!guestRange(input, 4u, 4u))
            return false;
        const uint32_t pad = guestWord(rdram, input);
        if (pad > 7u)
            return false;
        const uint32_t record = guestWord(rdram, 0x31DF68u + pad * 4u);
        if (record > 7u)
            return false;
        return (guestWord(rdram, 0x31C740u + record * 0x180u + 0x124u) & 0x40u) != 0u;
    }

#if !defined(PLATFORM_XBOX)
    // The PC has no PlayStation 2 memory cards: its two cards are save
    // folders. The game's save and controller texts (ELF data, English only)
    // are copied to owned storage; only exact language-table references to
    // verified originals are redirected. Original bytes remain untouched. The game
    // builds sentences from pieces ("TimeSplitters Sign Ons on" + "MEMORY
    // CARD slot" + " 1"), so the pieces are reworded to read together:
    // "TimeSplitters Sign Ons in SAVE SLOT 1". Applied once, at the first
    // menu tick (the ELF is loaded by then, and no save text has shown).
    struct Rewording
    {
        uint32_t address;
        const char *original, *text;
    };
    constexpr Rewording kGenericWording[] = {
        {0x384980u, "on Memory Card (PS2) in", "in"},
        {0x3849C0u, "There is no MEMORY CARD\n`^2 OK", "There is no save slot\n`^2 OK"},
        {0x387490u, "^4 Check Memory Card (PS2)(s)\n", "^4 Check save slots\n"},
        {0x3874B0u, "Insert Memory Card (PS2) and press ^4.", "Save slot not found. Press ^4."},
        {0x3875B8u, "DO NOT REMOVE MEMORY CARD (PS2)!", "Saving. Do not quit the game!"},
        {0x3875E0u, "No Memory Card (PS2) inserted\nPlease insert Memory Card (PS2)", "Save slot not available"},
        {0x387650u, "Select Memory Card (PS2)", "Select Save Slot"},
        {0x387670u, "No Memory Card (PS2) inserted", "Save slot not available"},
        {0x387690u, "MEMORY CARD (PS2)", "SAVE SLOT"},
        {0x387D40u, "free space on the Memory Card (PS2).", "free space in the save slot."},
        {0x387D88u, "Insufficient free space on", "Insufficient free space in"},
        {0x387E48u, "No Memory Card (PS2) inserted\n", "Save slot not available\n"},
        {0x387E68u, "No Memory Card (PS2) inserted.", "Save slot not available."},
        {0x387F10u, "MEMORY CARD slot", "SAVE SLOT"},
        {0x387F78u, "from Memory Card (PS2) in", "from"},
        {0x388360u, "Maps on MEMORY CARD slot", "Maps in SAVE SLOT"},
        {0x388380u, "There is no Memory Card (PS2)\n`^2 OK", "There is no save slot\n`^2 OK"},
        {0x3883E8u, "^3 Exit   ^4 Change Memory Card (PS2)", "^3 Exit   ^4 Change Save Slot"},
        {0x388628u, "Memory Card (PS2)", "Save data in"},
        {0x388658u, "Please insert Memory Card (PS2) containing", "Cannot find the save containing"},
        {0x3886A0u, "already exists on Memory Card (PS2)", "already exists in the save slot"},
        {0x388780u, "No TimeSplitters Sign Ons on", "No TimeSplitters Sign Ons in"},
        {0x3887B8u, "Memory Card (PS2) in", "Save data in"},
        {0x3887D0u, "TimeSplitters Sign Ons on", "TimeSplitters Sign Ons in"},
        {0x3845A0u, "Right Analog Stick", "Right Stick"},
        {0x3845B8u, "Left Analog Stick", "Left Stick"},
    };

    void applyGenericWording(uint8_t *rdram)
    {
        const uint32_t table = guestWord(rdram, 0x2F2C18u);
        if (!guestRange(table, 0x4DEu * 4u, 4u) || !reserveReady()) return;
        uint32_t applied = 0;
        for (const Rewording &r : kGenericWording)
        {
            std::string original;
            if (!readGuestText(rdram, r.address, original) || original != r.original) continue;
            uint32_t replacement = 0;
            for (uint32_t id = 0; id < 0x4DEu; ++id)
            {
                uint32_t &entry = guestWord(rdram, table + id * 4u);
                if (entry != r.address) continue;
                if (!replacement) replacement = copyReplacementText(rdram, r.text);
                if (!replacement) break;
                entry = replacement;
            }
            applied += replacement != 0u;
        }
        std::fprintf(stderr, "[TS:text] save and controller wording: %u of %u texts reworded\n", applied,
                     static_cast<unsigned>(std::size(kGenericWording)));
    }
#else
    // The Xbox's wording (English, the language table at 0x2F2C18's first:
    // texts by language id, 0x313750). The custom controls' button names
    // (setupcontrols' 14 choices, ids 1236-1245; the face buttons are their
    // glyphs, patched onto the disc: src/xbox/mk/glyphs.mk) are the Duke's
    // as the Xbox pad drives them (White L1 and Black R1 as words; the triggers L2 and R2, the stick clicks L3 and R3),
    // without "button", the sticks without "Analog" (as the PC's: ids 1049,
    // 1050) and the directions as "dpad up" ...; names longer than
    // the original's slot also go in new text (kTextBlock, in the host
    // reserve) and the table entry points there. The map maker's
    // help says the same. "Memory Card (PS2)" is "Memory Card" everywhere
    // (the Xbox's two cards are its dashboard saves "Memory Card 1" and
    // "2"). Each only where the original is found exactly; once, at the
    // first menu tick.
#endif

#if defined(PLATFORM_XBOX)
    void applyXboxWording(uint8_t *rdram)
    {
        const uint32_t table = guestWord(rdram, 0x2F2C18u);
        if (!reserveReady() || !guestRange(table, 0x4DEu * 4u, 4u))
            return;
        auto text = [&](uint32_t id) { return guestWord(rdram, table + id * 4u); };
        auto matches = [&](uint32_t at, const char *original) {
            std::string value;
            return readGuestText(rdram, at, value) && value == original;
        };
        // Without an active reserve, preserve all original wording.
        uint32_t applied = 0;
        static constexpr struct
        {
            uint32_t id;
            const char *original, *text;
        } kNames[] = {
            {1236u, "^3 button", "^3"},          {1237u, "^2 button", "^2"},
            {1238u, "^4 button", "^4"},          {1239u, "^1 button", "^1"},
            {1240u, "L1 button", "White"},          {1241u, "L2 button", "Left trigger"},
            {1242u, "R1 button", "Black"},          {1243u, "R2 button", "Right trigger"},
            {1051u, "Up directional button", "dpad up"},      {1052u, "Down directional button", "dpad down"},
            {1053u, "Left directional button", "dpad left"},  {1054u, "Right directional button", "dpad right"},
            {1244u, "L3 button", "Left stick click"}, {1245u, "R3 button", "Right stick click"},
            {1049u, "Left Analog Stick", "Left Stick"}, {1050u, "Right Analog Stick", "Right Stick"}, // (as the PC's)
            {998u,
             "left analog stick - Move cursor\nright analog stick - Pan map\nR1 / R2 button - Zoom Out / In\n"
             "L1 / L2 button - Move to Upper / Lower Floor\n^2 button - Insert Tile / Item / Light\n"
             "^2 button (HOLD DOWN) - Lasso Selection\n^1 button - Rotate / Mark / Unmark\n"
             "^3 button - Delete / Cancel Selection\n^4 button - Copy Object\n",
             "left stick - Move cursor\nright stick - Pan map\nBlack / Right trigger - Zoom Out / In\n"
             "White / Left trigger - Move to Upper / Lower Floor\n^2 - Insert Tile / Item / Light\n"
             "^2 (HOLD DOWN) - Lasso Selection\n^1 - Rotate / Mark / Unmark\n"
             "^3 - Delete / Cancel Selection\n^4 - Copy Object\n"},
        };
        for (const auto &n : kNames)
        {
            const uint32_t at = text(n.id);
            if (!matches(at, n.original))
                continue;
            const uint32_t replacement = copyReplacementText(rdram, n.text);
            if (!replacement) continue;
            guestWord(rdram, table + n.id * 4u) = replacement;
            ++applied;
        }
        // Build replacements privately; never mutate a shared source string.
        uint32_t cards = 0;
        for (uint32_t id = 0; id < 0x4DEu; ++id)
        {
            std::string value;
            if (!readGuestText(rdram, text(id), value)) continue;
            const std::string original = value;
            for (const char *mark : {"Memory Card (PS2)", "MEMORY CARD (PS2)"})
                for (size_t at = value.find(mark); at != std::string::npos; at = value.find(mark, at))
                    value.erase(at + std::strlen(mark) - 6u, 6u);
            if (value == original) continue;
            const uint32_t replacement = copyReplacementText(rdram, value);
            if (!replacement) continue;
            guestWord(rdram, table + id * 4u) = replacement;
            ++cards;
        }
        std::fprintf(stderr, "[TS:text] Xbox wording: %u of %u controller texts, %u memory card texts\n", applied,
                     static_cast<unsigned>(std::size(kNames)), cards);
    }
#endif

#if !defined(PLATFORM_XBOX)
    // The menu items as drawn (draw_menuitem(entry): the laid out entry's x
    // at +0 and y at +2, its item at +0x10, whose id is at +8 and flags at
    // +10, 0x200 hidden), collected over a frame's drawing and used by the
    // next menu tick for the mouse (menuMouse). The box is the item text's
    // own (drawMenuItemRecorded, measureText). In menu coordinates: game
    // pixels across, half of them down.
    constexpr uint32_t kDrawMenuItem = 0x22D230u;
    struct MenuRow
    {
        uint16_t id, flags;
        int x, y;             // the entry's place
        int x0, y0, x1, y1;   // the text's box (x1 < x0: not measured)
    };
    std::vector<MenuRow> g_menuRows, g_menuRowsDrawn;
    // TS_TEST_CLICKS (tests): a script of clicks played on the menus' ticks
    // (defined after menuMouse). menu: the menu being ticked (0 none, 1 a
    // message box); inPlay: the pause screen.
    void testClicksTick(uint8_t *rdram, uint32_t menu, bool inPlay);
    uint32_t g_menuAsked = 0; // the menu the page ticks (before ours replaces it): TS_TEST_CLICKS' "menu" steps

    void traceMenuRows(const std::vector<MenuRow> &rows)
    {
        static const bool trace = [] { const char *v = std::getenv("TS_TRACE_MENUS"); return v && *v == '1'; }();
        static size_t lastCount = 0;
        static int lastY = -1;
        if (!trace || rows.empty() || (rows.size() == lastCount && rows.front().y == lastY))
            return;
        lastCount = rows.size();
        lastY = rows.front().y;
        std::fprintf(stderr, "[TS:menu] rows");
        for (const MenuRow &r : rows)
            std::fprintf(stderr, " %u@%d,%d/%x[%d-%d,%d-%d]", r.id, r.x, r.y, r.flags, r.x0, r.x1, r.y0, r.y1);
        std::fprintf(stderr, "\n");
    }

    // The size of a text in a font as the game's textSize(&w, &h, text)
    // works it out (with GetXOffset's kerning), done here on the game's
    // data, the game's code not called: font (the 24-byte record textSelect
    // makes current, 0x3198A8 + n * 24) +0 its glyph records (10 bytes from
    // character 0x20: +4 advance, +6 height, +8 y offset), +4 the kerning
    // records (12 bytes: +0 class, +4 row, +8 offset), +8 the kerning values,
    // +0xC the line height, +0x14 the fixed width (text flags bit 1). Text
    // flags (gp-0x654B) bit 0 halves. '^' and a digit is a button glyph (its
    // texture's size, 0x319A48), '\n' a new line, '`' half a line down;
    // characters 0x80 and up are mapped by the tables at 0x319920 / 0x3199A0.
    void measureText(uint8_t *rdram, uint32_t gp, uint32_t font, uint32_t text, int &width, int &height)
    {
        width = height = 0;
        if (!text || text >= 0x2000000u || font < 0x100000u || font >= 0x2000000u)
            return;
        auto byte = [&](uint32_t at) { return rdram[at & 0x1FFFFFFu]; };
        const uint8_t textFlags = byte(gp - 0x654Bu);
        const int halve = textFlags & 1u;
        const int lineHeight = static_cast<int32_t>(guestWord(rdram, font + 0xCu)) >> halve;
        const uint32_t glyphs = guestWord(rdram, font);
        auto mapped = [&](uint8_t c) -> uint32_t { return (c & 0x80u) ? byte(0x319920u + (c & 0x7Fu)) : c; };
        auto kerning = [&](uint32_t at) -> int32_t {
            const uint32_t pairs = guestWord(rdram, font + 4u);
            const uint32_t index = mapped(byte(at)) - 0x20u;
            if (index >= 0x60u || !pairs)
                return 0;
            int32_t offset = static_cast<int32_t>(guestWord(rdram, pairs + index * 12u + 8u));
            const uint32_t values = guestWord(rdram, font + 8u), next = byte(at + 1u);
            if (!values || !next || next == '\n')
                return offset;
            const uint32_t nextIndex = mapped(static_cast<uint8_t>(next)) - 0x20u;
            if (nextIndex >= 0x60u)
                return offset;
            const uint32_t cell = guestWord(rdram, pairs + nextIndex * 12u) + guestWord(rdram, pairs + index * 12u + 4u) * 11u;
            if (cell < 0x79u)
                offset += static_cast<int32_t>(guestWord(rdram, values + cell * 4u));
            return offset;
        };
        int x = 0, lines = 0, halfLines = 0, maxWidth = 0, maxHeight = 0;
        for (uint32_t at = text, n = 0; byte(at) && n < 1024u; ++at, ++n)
        {
            const uint8_t c = byte(at);
            if (c == '^')
            {
                ++at;
                const uint32_t texture = guestWord(rdram, 0x319A48u + (byte(at) - 0x31u) * 4u);
                const uint32_t record = guestWord(rdram, guestWord(rdram, gp - 0x4B68u) + 4u) + texture * 40u;
                x += guestHalf(rdram, record) >> halve;
                maxHeight = std::max(maxHeight, lines + halfLines + ((guestHalf(rdram, record + 2u) >> 1) >> halve));
                maxWidth = std::max(maxWidth, x - 1);
                continue;
            }
            if (c == '\n')
            {
                x = 0;
                lines += lineHeight;
                continue;
            }
            if (c == '`')
            {
                halfLines += lineHeight >> 1;
                continue;
            }
            uint32_t code = mapped(c);
            if ((c & 0x80u) && code == 0x20u)
                code = byte(0x319A23u + (byte(0x3199A0u + (c & 0x7Fu)) - 1u) * 4u);
            const uint32_t glyph = glyphs + code * 10u - 0x140u;
            if (textFlags & 2u)
                x += c == '/' ? 6 : (c == '.' || c == ':') ? 5 : static_cast<int32_t>(guestWord(rdram, font + 0x14u)) >> halve;
            else
                x += (static_cast<int32_t>(guestHalf(rdram, glyph + 4u)) + kerning(at)) >> halve;
            maxWidth = std::max(maxWidth, x - 1);
            const int glyphHeight = (static_cast<int8_t>(byte(glyph + 8u)) + static_cast<int32_t>(guestHalf(rdram, glyph + 6u))) >> halve;
            maxHeight = std::max(maxHeight, lines + halfLines + glyphHeight);
        }
        width = maxWidth;
        height = maxHeight;
    }

    // Each drawn item's text box, as drawmenuitemtext(entry) places it: at
    // the menu window's origin (0x3299F0: x at +0, y at +0x14) plus the
    // entry's place, the entry's text (+0x14) in the font it selects
    // (textSelect of gp-0x5FD8 for items with flags 0x100, else gp-0x5FDC).
    void drawMenuItemRecorded(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = GPR_U32(ctx, 4);
        const uint32_t item = guestWord(rdram, entry + 0x10u);
        if (item)
        {
            const uint16_t flags = guestHalf(rdram, item + 10u);
            if (!(flags & 0x200u))
            {
                const int x = static_cast<int16_t>(guestHalf(rdram, entry)), y = static_cast<int16_t>(guestHalf(rdram, entry + 2u));
                MenuRow row{guestHalf(rdram, item + 8u), flags, x, y, 0, 0, -1, 0};
                const uint32_t gp = GPR_U32(ctx, 28), text = guestWord(rdram, entry + 0x14u);
                const uint32_t fontIndex = guestWord(rdram, gp - ((flags & 0x100u) ? 0x5FD8u : 0x5FDCu));
                int width = 0, height = 0;
                if (text && fontIndex < 16u)
                {
                    measureText(rdram, gp, 0x3198A8u + fontIndex * 24u, text, width, height);
                    row.x0 = static_cast<int32_t>(guestWord(rdram, 0x3299F0u)) + x;
                    row.y0 = static_cast<int32_t>(guestWord(rdram, 0x3299F0u + 0x14u)) + y;
                    row.x1 = row.x0 + std::max(width, 1);
                    row.y1 = row.y0 + std::max(height, 1);
                }
                g_menuRowsDrawn.push_back(row);
            }
        }
        draw_menuitem_0x22d230(rdram, ctx, runtime);
    }

    // The front end's backdrop and logo (frontfxTick(mode), every front-end
    // screen): the pointer stays free for the menus meanwhile, and the
    // title's opening (mode 1 from the start: the logo flies in for some
    // seconds before 1up ... 4up show) is skipped by any button, key or
    // click while the logo is still flying in, as the game itself skips it on coming back to the title (mode
    // 1 entered from another mode: the logo's time, gp-0x605C, set to 100,
    // gp-0x6058 to 1.5, gp-0x6054 to the constant at gp-0x7F10).
    constexpr uint32_t kFrontfxTick = 0x22A610u;
    void frontfxTickSkippable(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2PadNoteMenu();
        const uint32_t gp = GPR_U32(ctx, 28);
        const float logoTime = guestFloat(rdram, gp - 0x605Cu);
        // (frontfxFinished(1): the logo is in place once its time reaches gp-0x7F14)
        if (GPR_U32(ctx, 4) == 1u && guestWord(rdram, gp - 0x606Cu) == 1u && logoTime < guestFloat(rdram, gp - 0x7F14u))
        {
            bool pressed = false;
            for (uint32_t record = 0; record < 8u; ++record)
                pressed = pressed || (guestWord(rdram, 0x31C740u + record * 0x180u + 0x124u) & 0xFFFFu) != 0u;
            static uint32_t clicksSeen = ps2PadClickCount();
            const uint32_t clicks = ps2PadClickCount();
            if (pressed || clicks != clicksSeen)
            {
                std::fprintf(stderr, "[TS:menu] title opening skipped at %.2f\n", logoTime);
                guestFloat(rdram, gp - 0x605Cu) = 100.0f;
                guestFloat(rdram, gp - 0x6058u) = 1.5f;
                guestFloat(rdram, gp - 0x6054u) = guestFloat(rdram, gp - 0x7F10u);
                // The press only skips: it does not also choose 1up.
                for (uint32_t record = 0; record < 8u; ++record)
                    guestWord(rdram, 0x31C740u + record * 0x180u + 0x124u) &= ~0xFFFFu;
            }
            clicksSeen = clicks;
        }
        frontfxTick_0x22a610(rdram, ctx, runtime);
    }

    // Saving and loading (PC): the game's card routine, mcardTick (once a
    // frame: lvTickAfter ends by jumping to it), takes one step a frame:
    // issue a card call, then check it finished (sceMcSync), so a sign-on
    // save's ~25 card operations kept the "Saving" box up for over a second.
    // The runtime's cards are folders and every call has finished (written
    // and flushed) when it returns, so after lvTickAfter the routine's steps
    // run on within the frame until it is idle (state 0, gp-0x6414), waits
    // (its state unchanged by a step) or comes back to a state it was in
    // this frame (a polling loop). (The jump is compiled as a direct call,
    // so lvTickAfter is the place to hook.)
    // The save sequence above it, mcseqTick (from the save and load pages,
    // gp-0x5F58 its state), also moves one state a frame; it runs on the
    // same way, with the card's steps between, until a state holds (a
    // message waiting for the player, a choice, a timed check).
    constexpr uint32_t kLvTickAfter = 0x2263A0u;
    constexpr uint32_t kMcseqTick = 0x2434A8u;

    // Whether a game routine called from here (with entry's registers) ran
    // to its end: it returns to entry's return address. The scheduler can
    // stop a routine at any inner call when a thread switch is due (the
    // context then holds the call it stopped at); such a call is handed on
    // as it stands (*ctx = it, and this hook returns), and the scheduler
    // finishes it as it would the game's own. Run on further, a stopped
    // call's rest was lost: the card's routine then waited for a step that
    // never finished (the game froze after a save or a load).
    bool ranToEnd(const R5900Context &entry, const R5900Context &after)
    {
        R5900Context copy = entry;
        R5900Context *const cp = &copy;
        return after.pc == GPR_U32(cp, 31);
    }

    // The card routine's further steps this frame (first: its state before
    // the frame's own step; entry: registers to call it with). False when a
    // step was stopped by the scheduler (*ctx is then that step, to finish).
    bool runCardSteps(uint8_t *rdram, R5900Context *ctx, const R5900Context &entry, PS2Runtime *runtime, uint32_t first)
    {
        R5900Context probe = entry, *const probed = &probe;
        const uint32_t stateAt = GPR_U32(probed, 28) - 0x6414u;
        static const bool trace = std::getenv("TS_TRACE_MC") != nullptr;
        uint64_t seen = first < 64u ? 1ull << first : 0u;
        for (int step = 0; step < 64; ++step)
        {
            const uint32_t before = guestWord(rdram, stateAt);
            if (before == 0u || (step == 0 && before == first) || (before < 64u && (seen >> before & 1u)))
                break;
            seen |= before < 64u ? 1ull << before : 0u;
            R5900Context call = entry;
            mcardTick_0x207ad0(rdram, &call, runtime);
            if (!ranToEnd(entry, call))
            {
                if (trace)
                    std::fprintf(stderr, "[TS:mc] card step %d stopped at 0x%x; finished by the scheduler\n", step, call.pc);
                *ctx = call;
                return false;
            }
            const uint32_t after = guestWord(rdram, stateAt);
            if (trace)
                std::fprintf(stderr, "[TS:mc] card step %d: state %u -> %u\n", step, before, after);
            if (after == before)
                break;
        }
        return true;
    }

    void lvTickAfterCardRunOn(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const R5900Context entry = *ctx;
        const uint32_t first = guestWord(rdram, GPR_U32(ctx, 28) - 0x6414u);
        lvTickAfter_0x2263a0(rdram, ctx, runtime);
        if (ranToEnd(entry, *ctx)) // (else lvTickAfter itself is still to finish)
            runCardSteps(rdram, ctx, entry, runtime, first);
    }

    void mcseqTickRunOn(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        testClicksTick(rdram, 3u, false); // (TS_TEST_CLICKS: "menu 3" waits for the save and load screens)
        const R5900Context entry = *ctx;
        const uint32_t stateAt = GPR_U32(ctx, 28) - 0x5F58u;
        static const bool trace = std::getenv("TS_TRACE_MC") != nullptr;
        uint32_t before = guestWord(rdram, stateAt);
        mcseqTick_0x2434a8(rdram, ctx, runtime);
        if (!ranToEnd(entry, *ctx))
            return;
        uint64_t seen = before < 64u ? 1ull << before : 0u;
        for (int step = 0; step < 32; ++step)
        {
            const uint32_t now = guestWord(rdram, stateAt);
            if (now == before || (now < 64u && (seen >> now & 1u)))
                break;
            seen |= now < 64u ? 1ull << now : 0u;
            if (!runCardSteps(rdram, ctx, entry, runtime, ~0u))
                return;
            R5900Context call = entry;
            mcseqTick_0x2434a8(rdram, &call, runtime);
            *ctx = call;
            if (!ranToEnd(entry, call))
                return;
            if (trace)
                std::fprintf(stderr, "[TS:mc] save step %d: state %u -> %u\n", step, now, guestWord(rdram, stateAt));
            before = now;
        }
    }

    // Mouse look (PC): playerTick runs for each local player with the
    // player's struct at *(gp-0x4DCC) (its pad first); the view turns by the
    // struct's yaw, +0x114, in degrees (0 .. 360), and its pitch, +0x11C
    // (kept within +-50 in play). The keyboard and mouse player's view is
    // turned by the mouse's movement before the game's own tick, at
    // kMouseDegrees a window pixel at mouse speed 5 (ps2PadTakeMouseLook
    // scales by the speed): a mouse turns by distance, not at a rate.
    constexpr uint32_t kPlayerTick = 0x281248u;
    constexpr float kMouseDegrees = 0.12f;
    bool g_levelEndShown = false; // gameTickClickable: the level's end screen is up
    bool g_testComplete = false;  // TS_TEST_CLICKS complete
    void playerTickMouseLook(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t playerAt = GPR_U32(ctx, 28) - 0x4DCCu;
        const uint32_t player = guestRange(playerAt, 4u, 4u) ? guestWord(rdram, playerAt) : 0u;
        const int lane = ps2PadKeyboardLane();
        float dx = 0.0f, dy = 0.0f;
        if (guestRange(player, 0x12Cu, 4u) && lane >= 0 && guestWord(rdram, player) == static_cast<uint32_t>(lane) && ps2PadTakeMouseLook(dx, dy) &&
            (dx != 0.0f || dy != 0.0f))
        {
            float &yaw = guestFloat(rdram, player + 0x114u);
            float &pitch = guestFloat(rdram, player + 0x11Cu);
            // Zoomed in (a scope), the view is narrower and turns slower:
            // the game scales the stick's turn by the field of view, +0x104
            // (60 degrees unzoomed) over 60; the mouse is scaled the same.
            const float fov = guestFloat(rdram, player + 0x104u);
            const float zoom = std::isfinite(fov) && fov > 1.0f && fov <= 120.0f ? fov / 60.0f : 1.0f;
            yaw = std::fmod(yaw - dx * kMouseDegrees * zoom + 360.0f, 360.0f);
            pitch = std::clamp(pitch - dy * kMouseDegrees * zoom, -50.0f, 50.0f);
            if (static const bool trace = std::getenv("TS_TRACE_LOOK") != nullptr; trace)
                std::fprintf(stderr, "[TS:look] field of view %.1f, mouse scale %.2f\n", fov, zoom);
        }
        if (guestRange(player, 0x12Cu, 4u) && lane >= 0 && guestWord(rdram, player) == static_cast<uint32_t>(lane))
        {
            testClicksTick(rdram, 4u, false);
            if (g_testComplete)
            {
                g_testComplete = false; // (TS_TEST_CLICKS complete: the story's "objectives done", as story_pageTick reads it)
                guestWord(rdram, player + 0x128u) = 4u;
            }
            if (hostSettings().crosshair && !gsSplitScreen() && !g_levelEndShown)
                ps2PadNoteCrosshair();
        }
        playerTick_0x281248(rdram, ctx, runtime);
    }

    // The level's end (PC): gameTick, in game state 0x69 (gp-0x6090: "Level
    // Completed", "Level Failed" with its time and stats), waits for player
    // 1's joyNewBut to show a face button, Select or Start (0x9F0), so the
    // mouse's left button (R1 in play) does not close it. A click made while
    // it is up is Cross there.
    constexpr uint32_t kGameTick = 0x21EEB8u;
    void gameTickClickable(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        static uint32_t clicksSeen = 0;
        const uint32_t clicks = ps2PadClickCount();
        const uint32_t state = guestWord(rdram, GPR_U32(ctx, 28) - 0x6090u);
        if (static uint32_t stateSeen = ~0u; state != stateSeen)
        {
            stateSeen = state;
            if (std::getenv("TS_TRACE_MENUS"))
                std::fprintf(stderr, "[TS:menu] game state %x (next %x)\n", state, guestWord(rdram, GPR_U32(ctx, 28) - 0x6254u));
        }
        g_levelEndShown = state == 0x69u;
        if (g_levelEndShown && clicks != clicksSeen && hostSettings().mouse)
        {
            const uint32_t record = guestWord(rdram, 0x31DF68u);
            if (record < 8u)
                guestWord(rdram, 0x31C740u + record * 0x180u + 0x124u) |= 0x40u;
            if (std::getenv("TS_TRACE_MENUS"))
                std::fprintf(stderr, "[TS:menu] click closes the level's end\n");
        }
        clicksSeen = clicks;
        gameTick_0x21eeb8(rdram, ctx, runtime);
    }

    // Pop-up boxes (PC): zoomboxInit(box) starts a message box's grow-in,
    // its countdown (+36 of the box's 40-byte record at 0x352E80) at 10
    // frames, drawn at (11 - count) / 10 of its size; at 4 the box opens in
    // 4 frames, starting at 70% of its size.
    constexpr uint32_t kZoomboxInit = 0x22EF10u;
    void zoomboxInitQuick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t box = GPR_U32(ctx, 4);
        zoomboxInit_0x22ef10(rdram, ctx, runtime);
        uint32_t &count = guestWord(rdram, 0x352E80u + box * 40u + 36u);
        if (std::getenv("TS_TRACE_MENUS"))
            std::fprintf(stderr, "[TS:menu] pop-up box %u starts at %u\n", box, count);
        if (box < 16u && count > 4u)
            count = 4u;
    }

    // Message boxes ("... ^2 OK", a question with its buttons): the pointer
    // stays free while one is up, for its prompts (a click on a prompt
    // presses its button: ps2PadSetPromptLookup). message_pageTick has a
    // copy per module: the front end's, the in-game one and the map maker's.
    bool g_exitAsked = false; // the title's "Exit TimeSplitters?" box is up (titleTickExitable)

    template <void (*Tick)(uint8_t *, R5900Context *, PS2Runtime *)>
    void messageTickClickable(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2PadNoteMenu();
        testClicksTick(rdram, 1u, false);
        (void)ps2PadTakeMenuPointer(); // a click on the box away from its prompts does nothing (and is not kept for the next menu)
        if (Tick == &message_pageTick_0x2313b0 && g_exitAsked)
        {
            // Cross (Enter, its Exit prompt) quits; Triangle closes the box
            // (the default message tick), back to the title.
            uint32_t pressed = 0;
            for (uint32_t record = 0; record < 8u; ++record)
                pressed |= guestWord(rdram, 0x31C740u + record * 0x180u + 0x124u);
            if (pressed & 0x40u)
            {
                std::fprintf(stderr, "[TS:menu] Exit chosen at the title\n");
                runtime->requestStop();
            }
            else if (pressed & 0x10u)
                g_exitAsked = false;
        }
        Tick(rdram, ctx, runtime);
    }

    // The title (1up ... 4up, nplayers_pageTick): Esc (Triangle, from any
    // pad) asks to exit, in the game's own message box (frontStartMessage(0,
    // text, colour, 0): its default tick closes it on Cross or Triangle and
    // the title comes back). Its text is kept in the host reserve
    // (kExitAskText).
    constexpr uint32_t kNplayersTick = 0x23FD70u;
    constexpr char kExitAsk[] = "Exit TimeSplitters?\n`^2 Exit   ^3 Cancel";
    static_assert(sizeof(kExitAsk) <= kExitAskTextSize, "the question fits its block");
    void titleTickExitable(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t pressed = 0;
        for (uint32_t record = 0; record < 8u; ++record)
            pressed |= guestWord(rdram, 0x31C740u + record * 0x180u + 0x124u);
        const R5900Context entry = *ctx;
        nplayers_pageTick_0x23fd70(rdram, ctx, runtime);
        if (!ranToEnd(entry, *ctx))
            return; // (the scheduler finishes the page's tick; the box waits for the next press)
        if (!(pressed & 0x10u) || (pressed & 0x40u) || !reserveReady())
            return;
        writeGuestString(rdram, kExitAskText, kExitAsk);
        R5900Context call = entry;
        R5900Context *const cp = &call;
        SET_GPR_U32(cp, 4, 0u);
        SET_GPR_U32(cp, 5, kExitAskText);
        SET_GPR_U32(cp, 6, 0x6464647Fu); // the colour the game's own messages use
        SET_GPR_U32(cp, 7, 0u);
        frontStartMessage_0x231458(rdram, cp, runtime);
        if (!ranToEnd(entry, call))
            *ctx = call; // (stopped by the scheduler: it finishes starting the box, then returns to the page's caller)
        g_exitAsked = true;
        std::fprintf(stderr, "[TS:menu] Exit TimeSplitters? asked at the title\n");
    }

    // The mouse in the menus (the front end's and the pause screen's).
    // Rows are those drawn last frame, with their text's boxes; the pointer
    // comes in the game picture's pixels, and menu coordinates are those
    // pixels across and half of them down (the GS field). Moving the pointer
    // onto a row highlights it (the page's highlighted id, a0 + 4; a still
    // pointer leaves the pad and keyboard their way). A left click on it
    // accepts it, or on a value (flags 0x4: On/Off, a list, a slider) steps
    // it to the next one; the wheel over a value steps it either way; a
    // right click goes back, as does a click on the page's back item (id
    // 0x8000). The presses are the keyboard and mouse player's pad buttons
    // in the next reads (ps2PadQueueMenuPress: Cross, Triangle, Right,
    // Left), so a page that reads its pad before its menu does (the title's
    // nplayers_pageTick: Cross or Start chooses) sees them as a key's.

    // The row under the pointer: inside its text's box, grown by a few
    // pixels (and, for a value, across to the value at the right), else the
    // nearest box within a short reach. Unnamed rows (id 0) and rows with no
    // text drawn are not chosen. narrowed: the rows are drawn as the
    // widescreen picture's HUD (gs_frontend.cpp adjustWidescreenHud: during
    // play, in one view, text is narrowed to 3/4 towards the left margin,
    // the centre or the right margin by where its row starts), so the boxes
    // are narrowed the same way.
    // Whether the menu being ticked (16-byte header, its item count first,
    // then 32-byte items: id at +8, flags at +10, 0x200 hidden) has the item.
    // The rows drawn last frame can be another menu's (a page changing), and
    // a page told to highlight an id it does not have highlights nothing and
    // takes no Cross.
    bool menuHasItem(uint8_t *rdram, uint32_t menu, uint16_t id)
    {
        if (menu < 0x1000u || menu >= 0x2000000u)
            return false;
        const uint32_t count = guestWord(rdram, menu);
        for (uint32_t i = 0; i < count && i < 64u; ++i)
        {
            const uint32_t item = menu + 16u + i * kItemSize;
            if (guestHalf(rdram, item + 8u) == id)
                return !(guestHalf(rdram, item + 10u) & 0x200u);
        }
        return false;
    }

    // Whether the menu's item is a prompt's label (flags 0x30, its text, a
    // language id below 0x4DE or a string, starting with '^').
    bool menuItemIsPromptLabel(uint8_t *rdram, uint32_t menu, uint16_t id)
    {
        if (menu < 0x1000u || menu >= 0x2000000u)
            return false;
        const uint32_t count = std::min<uint32_t>(guestWord(rdram, menu), 64u);
        for (uint32_t i = 0; i < count; ++i)
        {
            const uint32_t item = menu + 16u + i * kItemSize;
            if (guestHalf(rdram, item + 8u) != id)
                continue;
            if ((guestHalf(rdram, item + 10u) & 0x30u) != 0x30u)
                return false;
            uint32_t text = guestWord(rdram, item);
            if (text && text < 0x4DEu)
            {
                const uint32_t language = std::min<uint32_t>(guestWord(rdram, 0x3B47F0u - 0x6CACu), 7u); // (gp-0x6CAC)
                const uint32_t table = guestWord(rdram, 0x2F2C18u + language * 4u);
                text = table >= 0x100000u && table < 0x2000000u ? guestWord(rdram, table + text * 4u) : 0u;
            }
            return text >= 0x1000u && text < 0x2000000u && rdram[text] == '^';
        }
        return false;
    }

    // Whether the item can be highlighted from the one that is: reached by
    // the items' own up, down, left and right links (+16, +18, +20, +22), as
    // the pad and keys would. A menu also lists items that only show text
    // (character select's "Start" beside its button); one of those
    // highlighted leaves nothing to choose, and Cross is ignored.
    bool menuReachable(uint8_t *rdram, uint32_t menu, uint16_t from, uint16_t id)
    {
        if (from == id)
            return true;
        const uint32_t count = std::min<uint32_t>(guestWord(rdram, menu), 64u);
        auto itemOf = [&](uint16_t want) -> uint32_t {
            for (uint32_t i = 0; i < count; ++i)
                if (guestHalf(rdram, menu + 16u + i * kItemSize + 8u) == want)
                    return menu + 16u + i * kItemSize;
            return 0u;
        };
        uint16_t queue[64];
        size_t head = 0, tail = 0;
        uint16_t seen[64];
        size_t seenCount = 0;
        queue[tail++] = from;
        seen[seenCount++] = from;
        while (head < tail)
        {
            const uint32_t item = itemOf(queue[head++]);
            if (!item)
                continue;
            for (uint32_t link = 16u; link <= 22u; link += 2u)
            {
                const uint16_t to = guestHalf(rdram, item + link);
                if (to == 0u || std::find(seen, seen + seenCount, to) != seen + seenCount || seenCount >= 64u)
                    continue;
                if (to == id)
                    return true;
                seen[seenCount++] = to;
                queue[tail++] = to;
            }
        }
        return false;
    }

    const MenuRow *menuRowAt(uint8_t *rdram, uint32_t menu, uint16_t current, float x, float y, bool narrowed)
    {
        // Pages that draw rows of a list they build themselves (Sign On, the
        // level list) tick a menu without those items: only a menu that has
        // some of the rows is held to its own.
        bool strict = false;
        for (const MenuRow &r : g_menuRows)
            strict = strict || (r.id != 0u && menuHasItem(rdram, menu, r.id));
        const MenuRow *best = nullptr;
        float bestDistance = 0.0f;
        for (const MenuRow &r : g_menuRows)
        {
            if (r.id == 0u || r.x1 < r.x0 || (strict && !menuHasItem(rdram, menu, r.id)))
                continue;
            // A prompt's label as an item ("^2 Start" beside character
            // select's character, "^3 Back" under "^2 Start Game": flags 0x30,
            // a text starting with a glyph): no choice; highlighted, Cross
            // does nothing. Its prompt takes the click (ps2PadSetPromptLookup).
            if (r.id != 0x8000u && menuItemIsPromptLabel(rdram, menu, r.id))
                continue;
            if (strict && r.id != 0x8000u && menuHasItem(rdram, menu, current) && !menuReachable(rdram, menu, current, r.id))
                continue; // (text beside a button, a heading)
            float x0 = static_cast<float>(r.x0), x1 = static_cast<float>((r.flags & 0x4u) ? std::max(r.x1, 600) : r.x1);
            if (narrowed)
            {
                const float anchor = x0 < 640.0f * 0.22f ? 0.0f : x0 + 10.0f > 640.0f * 0.78f ? 640.0f : 320.0f;
                x0 = anchor + (x0 - anchor) * 0.75f;
                x1 = anchor + (x1 - anchor) * 0.75f;
            }
            x0 -= 6.0f;
            x1 += 6.0f;
            const float y0 = r.y0 - 1.0f, y1 = r.y1 + 1.0f;
            const float dx = x < x0 ? x0 - x : x > x1 ? x - x1 : 0.0f;
            const float dy = y < y0 ? y0 - y : y > y1 ? y - y1 : 0.0f;
            const float distance = dx + dy * 2.0f;
            if (distance <= 8.0f && (!best || distance < bestDistance))
            {
                best = &r;
                bestDistance = distance;
            }
        }
        return best;
    }

    // The rows drawn since the last menu tick become the mouse's. A tick with
    // nothing drawn since keeps the rows: a page may run its menu more than
    // once a frame (the pause screen does), and when drawing falls behind
    // the game runs several ticks a drawn frame. When the menu ticked
    // changes (another page), the rows go: those drawn so far are the last
    // page's, and pointing at one would set the new page's highlight to an
    // item it does not have (nothing highlighted, Cross ignored).
    void takeMenuRows(uint32_t menu)
    {
        static uint32_t rowsMenu = 0;
        if (menu != rowsMenu)
        {
            rowsMenu = menu;
            g_menuRows.clear();
            g_menuRowsDrawn.clear();
            return;
        }
        if (!g_menuRowsDrawn.empty())
        {
            g_menuRows.swap(g_menuRowsDrawn);
            g_menuRowsDrawn.clear();
        }
        traceMenuRows(g_menuRows);
    }

    void menuMouse(uint8_t *rdram, R5900Context *ctx, bool inPlay)
    {
        ps2PadNoteMenu();
        // TS_TEST_MENU_MOUSE_PAUSE=1 (tests): the scripted pointer plays in
        // the pause screen only.
        static const bool pauseOnly = [] { const char *v = std::getenv("TS_TEST_MENU_MOUSE_PAUSE"); return v && *v == '1'; }();
        if (pauseOnly && !inPlay)
            return;
        testClicksTick(rdram, g_menuAsked, inPlay);
        const Ps2MenuPointer pointer = ps2PadTakeMenuPointer();
        if (!hostSettings().mouse || !pointer.inside)
            return;
        const uint32_t page = GPR_U32(ctx, 4);
        if (!guestRange(page, 6u, 2u)) return;
        const bool narrowed = inPlay && hostSettings().widescreen && !gsSplitScreen();
        const MenuRow *row = menuRowAt(rdram, GPR_U32(ctx, 5), guestHalf(rdram, page + 4u), pointer.x, pointer.y * 0.5f,
                                       narrowed);
        static const bool trace = [] { const char *v = std::getenv("TS_TRACE_MENUS"); return v && *v == '1'; }();
        if (static const MenuRow *pointed = nullptr; trace && pointer.moved && row != pointed)
        {
            pointed = row;
            std::fprintf(stderr, "[TS:menu-mouse] pointer %.0f,%.0f on row %d (rows", pointer.x, pointer.y * 0.5f,
                         row ? int(row->id) : -1);
            for (const MenuRow &r : g_menuRows)
                std::fprintf(stderr, " %u[%d-%d,%d-%d]", r.id, r.x0, r.x1, r.y0, r.y1);
            std::fprintf(stderr, ")\n");
        }
        // (The back item is clicked, not highlighted: it is no choice of the list.)
        if (row && row->id != 0x8000u && (pointer.moved || pointer.clicks || pointer.wheel))
            guestHalf(rdram, page + 4u) = row->id;
        auto press = [&](Ps2MenuPress p, const char *what) {
            if (trace)
            {
                std::fprintf(stderr, "[TS:menu-mouse] row %u flags %x: %s (pointer %.0f,%.0f; rows", row ? row->id : 0u,
                             row ? row->flags : 0u, what, pointer.x, pointer.y * 0.5f);
                for (const MenuRow &r : g_menuRows)
                    std::fprintf(stderr, " %u[%d-%d,%d-%d]", r.id, r.x0, r.x1, r.y0, r.y1);
                std::fprintf(stderr, ")\n");
            }
            ps2PadQueueMenuPress(p);
        };
        if (trace && pointer.clicks && !row)
        {
            std::fprintf(stderr, "[TS:menu-mouse] click at %.0f,%.0f is on no row of menu %x (highlighted %u; rows",
                         pointer.x, pointer.y, GPR_U32(ctx, 5), guestHalf(rdram, page + 4u));
            for (const MenuRow &r : g_menuRows)
                std::fprintf(stderr, " %u[%d-%d,%d-%d]%s", r.id, r.x0, r.x1, r.y0, r.y1,
                             menuHasItem(rdram, GPR_U32(ctx, 5), r.id) ? "" : " (not in menu)");
            std::fprintf(stderr, ")\n");
        }
        if (pointer.rightClicks)
            press(Ps2MenuPress::Back, "back");
        else if (row && pointer.clicks)
        {
            if (row->id == 0x8000u)
                press(Ps2MenuPress::Back, "back");
            else if (row->flags & 0x4u)
                press(Ps2MenuPress::Next, "next value");
            else
                press(Ps2MenuPress::Accept, "accept");
        }
        else if (row && pointer.wheel && (row->flags & 0x4u))
            press(pointer.wheel > 0 ? Ps2MenuPress::Next : Ps2MenuPress::Previous, "wheel");
    }

    // TS_TEST_CLICKS=<file> (tests): mouse steps played on the menus' ticks
    // (menuMouse, message boxes, the on-screen keyboard), through the same
    // pointer path as the window's, one a line:
    //   menu <hex> [ticks]   wait until that menu has been ticked that long (20)
    //   message [ticks]      the same for a message box; keys: the on-screen keyboard
    //   wait <ticks>
    //   row <id> / hover <id>  click / point at the middle of that drawn row
    //   prompt <press>       click the middle of a drawn prompt (Ps2MenuPress: 0 Cross, 1 Triangle)
    //   at <x> <y> / right / wheel <up|down>   in 640 x 448 game pixels
    //   key <accept|back|next|previous|start>
    //   complete             the story level's objectives done (player +0x128 = 4)
    //   (menu 4: in play, the keyboard and mouse player's tick)
    // Each step is logged ([TS:test]); one that finds nothing to click in
    // 600 ticks is logged as failed and skipped.
    void testClicksTick(uint8_t *rdram, uint32_t menu, bool inPlay)
    {
        static const std::vector<std::string> steps = [] {
            std::vector<std::string> lines;
            if (const char *path = std::getenv("TS_TEST_CLICKS"))
                if (FILE *f = std::fopen(path, "r"))
                {
                    char line[256];
                    while (std::fgets(line, sizeof(line), f))
                    {
                        std::string s(line);
                        while (!s.empty() && (s.back() == '\n' || s.back() == '\r' || s.back() == ' '))
                            s.pop_back();
                        if (!s.empty() && s[0] != '#')
                            lines.push_back(s);
                    }
                    std::fclose(f);
                }
            return lines;
        }();
        static size_t next = 0;
        static int waiting = 0, tries = 0, matchTicks = 0;
        static float atX = 320.0f, atY = 224.0f;
        if (steps.empty())
            return;
        if (waiting > 0)
        {
            --waiting;
            return;
        }
        if (next >= steps.size())
            return;
        const std::string &step = steps[next];
        char op[16] = {}, arg[64] = {};
        float a = 0.0f, b = 0.0f;
        std::sscanf(step.c_str(), "%15s %63s", op, arg);
        const std::string kind(op);
        auto done = [&](const char *how) {
            std::fprintf(stderr, "[TS:test] step %zu '%s': %s\n", next + 1, step.c_str(), how);
            ++next;
            tries = 0;
            matchTicks = 0;
        };
        auto click = [&](float x, float y, bool press) {
            atX = x;
            atY = y;
            ps2PadNoteMenuPointer(true, x, y, press, false, 0.0f);
        };
        auto failOrRetry = [&]() {
            if (++tries > 600)
                done("FAILED (nothing to click)");
        };
        if (kind == "menu" || kind == "message" || kind == "keys")
        {
            int settle = 20;
            uint32_t want = kind == "message" ? 1u : kind == "keys" ? 2u : 0u;
            if (kind == "menu")
            {
                want = static_cast<uint32_t>(std::strtoul(arg, nullptr, 16));
                std::sscanf(step.c_str(), "%*s %*s %d", &settle);
            }
            else
                std::sscanf(step.c_str(), "%*s %d", &settle);
            // (ticks of that menu since the step began: the pause screen's
            // ticks come between the player's)
            if (menu == want && ++matchTicks >= settle)
                done("reached");
        }
        else if (kind == "wait")
        {
            waiting = std::atoi(arg);
            done("waiting");
        }
        else if (kind == "row" || kind == "hover")
        {
            const uint16_t id = static_cast<uint16_t>(std::strtoul(arg, nullptr, 0));
            const MenuRow *found = nullptr;
            for (const MenuRow &r : g_menuRows)
                if (r.id == id && r.x1 >= r.x0)
                    found = &r;
            if (!found)
                return failOrRetry();
            float x0 = static_cast<float>(found->x0), x1 = static_cast<float>(found->x1);
            if (inPlay && hostSettings().widescreen && !gsSplitScreen())
            {
                const float anchor = x0 < 640.0f * 0.22f ? 0.0f : x0 + 10.0f > 640.0f * 0.78f ? 640.0f : 320.0f;
                x0 = anchor + (x0 - anchor) * 0.75f;
                x1 = anchor + (x1 - anchor) * 0.75f;
            }
            click((x0 + x1) * 0.5f, static_cast<float>(found->y0 + found->y1), kind == "row");
            done(kind == "row" ? "clicked" : "pointed");
        }
        else if (kind == "prompt")
        {
            const int want = std::atoi(arg);
            float x0 = 1e9f, x1 = -1e9f, y0 = 1e9f, y1 = -1e9f;
            for (float y = 2.0f; y < 448.0f; y += 4.0f)
                for (float x = 2.0f; x < 640.0f; x += 4.0f)
                    if (ps2PadPromptAt(x, y) == want)
                    {
                        x0 = std::min(x0, x);
                        x1 = std::max(x1, x);
                        y0 = std::min(y0, y);
                        y1 = std::max(y1, y);
                    }
            if (x1 < x0)
                return failOrRetry();
            click((x0 + x1) * 0.5f, (y0 + y1) * 0.5f, true);
            done("clicked");
        }
        else if (kind == "at")
        {
            std::sscanf(step.c_str(), "%*s %f %f", &a, &b);
            click(a, b, true);
            done("clicked");
        }
        else if (kind == "complete")
        {
            g_testComplete = true;
            done("completing the level");
        }
        else if (kind == "right")
        {
            ps2PadNoteMenuPointer(true, atX, atY, false, true, 0.0f);
            done("right-clicked");
        }
        else if (kind == "wheel")
        {
            ps2PadNoteMenuPointer(true, atX, atY, false, false, std::string(arg) == "up" ? 1.0f : -1.0f);
            done("wheeled");
        }
        else if (kind == "key")
        {
            const std::string k(arg);
            ps2PadQueueMenuPress(k == "back" ? Ps2MenuPress::Back : k == "next" ? Ps2MenuPress::Next
                                 : k == "previous" ? Ps2MenuPress::Previous : k == "start" ? Ps2MenuPress::Start
                                                                             : Ps2MenuPress::Accept);
            done("pressed");
        }
        else
            done("UNKNOWN step");
    }
#endif

#if !defined(PLATFORM_XBOX)
    // "Exit Game" in the pause screen's SETUP tab (PC). The tab's list
    // (setup_menu, run by ingame_menutick(page, menu) and std_menumake, as
    // the front end's menus) is drawn from an extended copy with the item
    // after Preferences; it links to the end game confirmation page
    // (confirmendgame, its No and Yes), which while reached this way says
    // so in its title and quits the program on Yes instead of ending the
    // level (No goes back to the game, as it does there).
    constexpr uint32_t kIngameMenuTick = 0x20E240u;
    constexpr uint32_t kConfirmEndGameTick = 0x20FA70u;
    constexpr uint32_t kSetupMenu = 0x32AA60u; // the tab's heading, Setup Controls..., Preferences...
    constexpr uint32_t kConfirmEndPage = 0x32AA00u;
    constexpr uint32_t kSetupItems = 3u;
    constexpr uint16_t kExitItemId = 4u;
    bool g_exitConfirm = false;              // the confirmation was reached from Exit Game

    // The pad the pause screen is for (confirmendgame_pageTick reads it so).
    bool ingameCrossPressed(uint8_t *rdram, R5900Context *ctx)
    {
        const uint32_t padAt = guestWord(rdram, GPR_U32(ctx, 28) - 0x4DCCu);
        if (!padAt)
            return false;
        const uint32_t pad = guestWord(rdram, padAt);
        const uint32_t record = pad <= 7u ? guestWord(rdram, 0x31DF68u + pad * 4u) : 8u;
        return record <= 7u && (guestWord(rdram, 0x31C740u + record * 0x180u + 0x124u) & 0x40u) != 0u;
    }

    // The extended copy, rebuilt from the original each time (the page may
    // change the original's flags). Returns 0 when its block is in use.
    uint32_t layoutSetupMenu(uint8_t *rdram)
    {
        // (In the host reserve, kSetupBlock: the label, 0x20 bytes, then the
        // menu with the heading, Preferences and Exit Game.)
        static_assert(0x20u + 16u + (kSetupItems + 1u) * 32u <= kSetupBlockSize, "the SETUP copy fits its block");
        if (!reserveReady())
            return 0;
        const uint32_t label = kSetupBlock;
        writeGuestString(rdram, label, "Exit Game");
        const uint32_t menu = kSetupBlock + 0x20u;
        const uint32_t items = menu + 16u;
        // The heading and Preferences; Setup Controls (item 2) is left out:
        // the controls are set in the front end's menus only.
        std::memcpy(rdram + menu, rdram + kSetupMenu, 16u + kItemSize);
        std::memcpy(rdram + items + kItemSize, rdram + kSetupMenu + 16u + 2u * kItemSize, kItemSize);
        guestWord(rdram, menu) = kSetupItems;
        // A page link like Preferences (its flags and look), to the confirmation.
        const uint32_t heading = items, preferences = items + kItemSize, exitItem = items + 2u * kItemSize;
        std::memcpy(rdram + exitItem, rdram + preferences, kItemSize);
        guestWord(rdram, exitItem + 0u) = label;
        guestHalf(rdram, exitItem + 8u) = kExitItemId;
        guestWord(rdram, exitItem + 12u) = kConfirmEndPage;
        // The links by id, down at +18 and up at +16: heading (1, skipped)
        // -> Preferences (3) -> Exit (4) -> heading. (The original's: down
        // 1 -> 2 -> 3 -> 1.)
        guestHalf(rdram, heading + 18u) = 3u;
        guestHalf(rdram, heading + 16u) = kExitItemId;
        guestHalf(rdram, preferences + 18u) = kExitItemId;
        guestHalf(rdram, preferences + 16u) = 1u;
        guestHalf(rdram, exitItem + 18u) = 1u;
        guestHalf(rdram, exitItem + 16u) = 3u;
        return menu;
    }

    bool useSetupMenu(uint8_t *rdram, R5900Context *ctx)
    {
        if (GPR_U32(ctx, 5) != kSetupMenu)
            return false;
        const uint32_t menu = layoutSetupMenu(rdram);
        if (!menu)
            return false;
        SET_GPR_U32(ctx, 5, menu);
        return true;
    }

    void ingameMenuTick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        // The pause screen's lists take the mouse as the front end's do.
        takeMenuRows(GPR_U32(ctx, 5));
        g_menuAsked = GPR_U32(ctx, 5);
        static const bool trace = [] { const char *v = std::getenv("TS_TRACE_MENUS"); return v && *v == '1'; }();
        static uint32_t lastMenu = 0;
        if (trace && GPR_U32(ctx, 5) != lastMenu)
        {
            lastMenu = GPR_U32(ctx, 5);
            std::fprintf(stderr, "[TS:menu] in-game page %08x menu %08x highlighted %u\n", GPR_U32(ctx, 4), lastMenu,
                         guestHalf(rdram, GPR_U32(ctx, 4) + 4u));
        }
        if (guestRange(GPR_U32(ctx, 4), 6u, 2u) && useSetupMenu(rdram, ctx))
        {
            // The page opens on Setup Controls (2), which the copy leaves out.
            if (guestHalf(rdram, GPR_U32(ctx, 4) + 4u) == 2u)
                guestHalf(rdram, GPR_U32(ctx, 4) + 4u) = 3u;
            if (guestHalf(rdram, GPR_U32(ctx, 4) + 4u) == kExitItemId && ingameCrossPressed(rdram, ctx))
                g_exitConfirm = true;
        }
        menuMouse(rdram, ctx, true); // (on the menu ticked: our SETUP copy there)
        ingame_menutick_0x20e240(rdram, ctx, runtime);
    }

    // The story tab of the pause screen (story_pageTick). Once the level is
    // over (0x32C4F8 bit 0x20000000, set as it calls gameLevelCompleted) the
    // page takes Cross as Restart and Triangle as Quit, the way on: "Game
    // Over" shows both as prompts (which take clicks), "Level Completed"
    // ("PRESS START BUTTON") none. A left click there, with no prompt on the
    // screen, is Triangle (Esc in a menu, as the keyboard has it). The
    // pointer is free on it, as in the menus.
    constexpr uint32_t kStoryPageTick = 0x2119C8u;
    void storyPageTickClickable(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2PadNoteMenu();
        const bool ended = (guestWord(rdram, 0x32C4F8u) & 0x20000000u) != 0u;
        testClicksTick(rdram, ended ? 5u : 6u, false); // (TS_TEST_CLICKS: "menu 5" waits for the level's end)
        const Ps2MenuPointer pointer = ps2PadTakeMenuPointer();
        if (ended && pointer.inside && pointer.clicks)
        {
            bool prompts = false;
            for (float y = 8.0f; y < 448.0f && !prompts; y += 16.0f)
                for (float x = 8.0f; x < 640.0f && !prompts; x += 16.0f)
                {
                    const int press = ps2PadPromptAt(x, y); // (the tabs' arrows, Next and Previous, are no prompt of the page)
                    prompts = press >= 0 && press != static_cast<int>(Ps2MenuPress::Next) &&
                              press != static_cast<int>(Ps2MenuPress::Previous);
                }
            if (!prompts)
                ps2PadQueueMenuPress(Ps2MenuPress::Back);
            if (std::getenv("TS_TRACE_MENUS"))
                std::fprintf(stderr, "[TS:menu] click at the level's end: %s\n", prompts ? "prompts up, nothing" : "Back");
        }
        story_pageTick_0x2119c8(rdram, ctx, runtime);
    }

    // The confirmation page: reached from Exit Game, Yes (item 2) quits the
    // program; anything else is the game's own (No resumes the game).
    void confirmEndGameTick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (g_exitConfirm && ingameCrossPressed(rdram, ctx))
        {
            if (guestHalf(rdram, GPR_U32(ctx, 4) + 4u) == 2u)
            {
                std::fprintf(stderr, "[TS:menu] Exit Game confirmed in the pause screen\n");
                runtime->requestStop();
                return;
            }
            g_exitConfirm = false;
        }
        confirmendgame_pageTick_0x20fa70(rdram, ctx, runtime);
    }
#endif

    void displayMenuTick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        g_menusShown = true; // (the loading wheel from now on)
#if !defined(PLATFORM_XBOX)
        takeMenuRows(GPR_U32(ctx, 5));
        g_menuAsked = GPR_U32(ctx, 5);
#endif
        if (!g_wordingApplied && reserveReady() && guestRange(guestWord(rdram, 0x2F2C18u), 0x4DEu * 4u, 4u))
        {
#if !defined(PLATFORM_XBOX)
            applyGenericWording(rdram);
#else
            applyXboxWording(rdram);
#endif
            g_wordingApplied = true;
        }
        static const bool trace = [] { const char *v = std::getenv("TS_TRACE_MENUS"); return v && *v == '1'; }();
        static uint32_t lastMenu = 0;
        if (trace && reserveReady()) // also left in guest RAM for pad scripts (wait_u32 on kMenuTraceWord, 0x83ff0)
            guestWord(rdram, kMenuTraceWord) = GPR_U32(ctx, 5);
        if (trace && GPR_U32(ctx, 5) != lastMenu)
        {
            lastMenu = GPR_U32(ctx, 5);
            std::fprintf(stderr, "[TS:menu] page %08x menu %08x\n", GPR_U32(ctx, 4), lastMenu);
        }
#if !defined(PLATFORM_XBOX)
        if (GPR_U32(ctx, 5) == kGameModeMenu && guestRange(GPR_U32(ctx, 4), 6u, 2u) && guestHalf(rdram, GPR_U32(ctx, 4) + 4u) != kExitGameId)
            g_exitArmedUntil = {};
        if (useGameModeMenu(rdram, ctx) && exitGameChosen(rdram, ctx))
        {
            if (exitArmed())
            {
                std::fprintf(stderr, "[TS:menu] Exit Game chosen\n");
                runtime->requestStop();
            }
            else
            {
                // Armed: this Cross does nothing else (the item's link
                // would reopen the page and take the highlight off it).
                std::fprintf(stderr, "[TS:menu] Exit Game: press again to exit\n");
                g_exitArmedUntil = std::chrono::steady_clock::now() + std::chrono::seconds(5);
                const uint32_t input = guestWord(rdram, GPR_U32(ctx, 28) - 0x5FFCu);
                const uint32_t record = guestWord(rdram, 0x31DF68u + guestWord(rdram, input) * 4u);
                guestWord(rdram, 0x31C740u + record * 0x180u + 0x124u) &= ~0x40u;
            }
        }
#else
        if (useGameModeMenu(rdram, ctx) && exitGameChosen(rdram, ctx))
        {
            std::fprintf(stderr, "[TS:menu] Exit Game chosen\n");
            runtime->requestStop();
        }
#endif
        const bool ours = useDisplayMenu(rdram, ctx);
#if !defined(PLATFORM_XBOX)
        menuMouse(rdram, ctx, false); // (on the menu ticked: ours where we extend it)
#endif
        menutick_0x230238(rdram, ctx, runtime);
        if (ours)
            applyDisplayMenuToSettings(rdram);
    }

    void displayMenuMake(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
#if !defined(PLATFORM_XBOX)
        if (!useDisplayMenu(rdram, ctx) && !useGameModeMenu(rdram, ctx))
            useSetupMenu(rdram, ctx);
#else
        if (!useDisplayMenu(rdram, ctx))
            useGameModeMenu(rdram, ctx);
#endif
        std_menumake_0x22daf8(rdram, ctx, runtime);
    }


#if !defined(PLATFORM_XBOX)
    // Typing on the PC keyboard into the game's text entry: sign-on names
    // and the map maker's names run stringeditTick(pad), the on-screen
    // keyboard. Its state, *(gp-0x5FCC): +0x18 text length, +0x1C the
    // layout (11 x 5 bytes: the characters, then the bottom row's CAPS 0xFC,
    // SPACE 0xFD, DELETE 0xFE and END 0xFF), +0x28/+0x2C the cursor's column
    // and row, +0x30 the text. A newly pressed Cross (joyNewBut & 0x40) acts
    // on the key under the cursor. Each tick takes one typed character
    // (ps2PadTakeTypedChar), puts the cursor on its key and presses Cross for
    // that tick only, so the game itself adds it (its length and width
    // limits, line breaks, sounds). A letter only in the other case's layout
    // presses CAPS first and is typed on the next tick. The cursor stays on
    // the key typed, as if it had been chosen with the pad.
    constexpr uint32_t kStringeditTick = 0x22F820u;
    constexpr uint32_t kStringeditLayouts[2] = {0x352F40u, 0x352F78u};
    constexpr uint32_t kKeyColumns = 11u, kCharKeys = 44u, kLayoutKeys = 55u;
    constexpr uint8_t kKeyCaps = 0xFCu, kKeySpace = 0xFDu, kKeyDelete = 0xFEu, kKeyEnd = 0xFFu;

    // The key index of c in a layout, or -1.
    int stringeditKey(uint8_t *rdram, uint32_t layout, int c)
    {
        if (!guestRange(layout, kLayoutKeys)) return -1;
        layout &= 0x1FFFFFFFu;
        const uint8_t code = c == ' ' ? kKeySpace : c == '\b' ? kKeyDelete : c == '\n' ? kKeyEnd : static_cast<uint8_t>(c);
        const bool special = code >= kKeyCaps;
        for (uint32_t i = special ? kCharKeys : 0u; i < (special ? kLayoutKeys : kCharKeys); ++i)
            if (rdram[layout + i] == code)
                return static_cast<int>(i);
        return -1;
    }

    void typedStringeditTick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2PadNoteTextEntry();
        ps2PadNoteMenu();
        testClicksTick(rdram, 2u, false);
        (void)ps2PadTakeMenuPointer(); // (its Add / Cancel prompts take clicks; nothing else here does)
        int &capsThen = g_capsThen; // a letter waiting for the CAPS press before it
        const uint32_t pad = GPR_U32(ctx, 4);
        const uint32_t stateAt = GPR_U32(ctx, 28) - 0x5FCCu;
        const uint32_t state = guestRange(stateAt, 4u, 4u) ? guestWord(rdram, stateAt) : 0u;
        // Only the keyboard's own player types (pad = that player's lane in
        // the menus), or anyone while no player has used the keyboard yet.
        const int keyboardLane = ps2PadKeyboardLane();
        const bool keyboardPlayer = keyboardLane < 0 || static_cast<uint32_t>(keyboardLane) == pad;
        int c = capsThen ? capsThen : keyboardPlayer ? ps2PadTakeTypedChar() : 0;
        capsThen = 0;
        uint32_t pressedAt = 0, pressedWas = 0;
        if (c && guestRange(state, 0x30u, 4u) && pad <= 7u)
        {
            const uint32_t layout = guestWord(rdram, state + 0x1Cu);
            int key = stringeditKey(rdram, layout, c);
            if (key < 0 && std::isalpha(c))
            {
                const uint32_t other = layout == kStringeditLayouts[0] ? kStringeditLayouts[1] : kStringeditLayouts[0];
                if (stringeditKey(rdram, other, c) >= 0)
                {
                    key = stringeditKey(rdram, layout, kKeyCaps);
                    capsThen = c;
                }
            }
            // (joyNewBut's pad record, as exitGameChosen finds it)
            const uint32_t record = guestWord(rdram, 0x31DF68u + pad * 4u);
            if (key >= 0 && record <= 7u)
            {
                guestWord(rdram, state + 0x28u) = static_cast<uint32_t>(key) % kKeyColumns;
                guestWord(rdram, state + 0x2Cu) = static_cast<uint32_t>(key) / kKeyColumns;
                pressedAt = 0x31C740u + record * 0x180u + 0x124u;
                pressedWas = guestWord(rdram, pressedAt);
                guestWord(rdram, pressedAt) = pressedWas | 0x40u;
            }
            else
                capsThen = 0;
        }
        const R5900Context entry = *ctx;
        stringeditTick_0x22f820(rdram, ctx, runtime);
        // (Stopped by the scheduler before its end, the tick reads Cross
        // when it goes on: the press stays for this frame, else the letter
        // was lost. ranToEnd)
        if (pressedAt && ranToEnd(entry, *ctx))
            guestWord(rdram, pressedAt) = pressedWas;
    }
#endif

    // Cheat: a sign-on named "time2split" (any case) has everything unlocked.
    // unlockedEx(condition, ...) decides every unlock (characters, levels,
    // story difficulties, bot and weapon sets, challenge modes, cheats); the
    // game's own hidden cheat1 makes it pass every condition by setting the
    // word at gp-0x6510. challengeAvail(n) separately requires the previous
    // challenge to be won. Both answer yes while the cheat profile is the
    // one being checked. Nothing is written to the profile or the card.
    //
    // Sign-on records are 0xB78 bytes each at *(gp-0x6228), name first;
    // *(gp-0x48EC) (statsGet) points at the stats being checked, inside the
    // current record. signonGet(0), the table at 0x1FBC158, is the fallback.
    constexpr uint32_t kUnlockedEx = 0x2251A8u;
    constexpr uint32_t kChallengeAvail = 0x225038u;
    constexpr uint32_t kSignonSize = 0xB78u;
    constexpr uint32_t kSignonSlots = 16u;

    bool cheatProfileActive(uint8_t *rdram, R5900Context *ctx)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t base = guestWord(rdram, gp - 0x6228u);
        if (base < 0x100000u || base >= 0x2000000u)
            return false;
        uint32_t record = 0;
        const uint32_t stats = guestWord(rdram, gp - 0x48ECu);
        if (stats >= base && stats < base + kSignonSlots * kSignonSize)
            record = base + (stats - base) / kSignonSize * kSignonSize;
        else
        {
            const uint32_t index = guestWord(rdram, 0x1FBC158u);
            if (index >= kSignonSlots)
                return false;
            record = base + index * kSignonSize;
        }
        static const char kName[] = "time2split";
        for (uint32_t i = 0; i < sizeof(kName); ++i)
        {
            const char c = static_cast<char>(rdram[record + i]);
            if (std::tolower(static_cast<unsigned char>(c)) != kName[i])
                return false;
        }
        static bool announced = false;
        if (!announced)
        {
            announced = true;
            std::fprintf(stderr, "[TS:cheat] time2split: everything unlocked\n");
        }
        return true;
    }

    void cheatUnlockedEx(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        // Same condition as the game's own switch: condition type 0 is left alone.
        if (guestWord(rdram, GPR_U32(ctx, 4)) != 0u && cheatProfileActive(rdram, ctx))
        {
            SET_GPR_U32(ctx, 2, 1u);
            ctx->pc = GPR_U32(ctx, 31);
            return;
        }
        unlockedEx_0x2251a8(rdram, ctx, runtime);
    }

    void cheatChallengeAvail(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (cheatProfileActive(rdram, ctx))
        {
            SET_GPR_U32(ctx, 2, 1u);
            ctx->pc = GPR_U32(ctx, 31);
            return;
        }
        challengeAvail_0x225038(rdram, ctx, runtime);
    }

    std::string guestString(uint8_t *rdram, uint32_t address)
    {
        std::string text;
        for (uint32_t i = 0; address != 0u && i < 256u; ++i)
        {
            const char c = static_cast<char>(rdram[(address + i) & 0x1FFFFFFu]);
            if (!c)
                break;
            text.push_back(c);
        }
        return text;
    }

    // The game's assert(): report which check failed (its own message goes to
    // a stream the runtime does not show), then abort as the game would.
    void loggedAssert(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        std::fprintf(stderr, "[TS:assert] %s:%u: %s (ra %08x)\n", guestString(rdram, GPR_U32(ctx, 4)).c_str(),
                     GPR_U32(ctx, 5), guestString(rdram, GPR_U32(ctx, 6)).c_str(), GPR_U32(ctx, 31));
        ps2___assert_0x2e46a8(rdram, ctx, runtime);
    }

    // memMark(start, end): the game fills free heap with "mem_mark" (for its
    // own debugging) at start-up and on every free. The recompiled loop does
    // eight single-byte stores per step, which on the Xbox takes minutes over
    // the 28 MB heap; this writes the same bytes natively and leaves the
    // registers as the original's loop exit does.
    void nativeMemMark(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        static const uint8_t kPattern[8] = {'m', 'e', 'm', '_', 'm', 'a', 'r', 'k'};
        const uint64_t start = GPR_U64(ctx, 4), end = GPR_U64(ctx, 5);
        uint64_t address = start;
        if (start < end)
        {
            const uint64_t steps = (end - start + 7u) / 8u;
            for (uint64_t i = 0; i < steps; ++i, address += 8u)
            {
                const uint32_t guest = static_cast<uint32_t>(address);
                if ((guest & 0x1FFFFFFu) + 8u <= 0x2000000u && guest < 0x2000000u)
                    std::memcpy(rdram + guest, kPattern, 8u);
                else
                    for (uint32_t b = 0; b < 8u; ++b)
                        WRITE8(guest + b, kPattern[b]);
            }
            SET_GPR_U64(ctx, 3, 'm');
            SET_GPR_U64(ctx, 10, 'e');
            SET_GPR_U64(ctx, 9, '_');
            SET_GPR_U64(ctx, 8, 'a');
            SET_GPR_U64(ctx, 7, 'r');
            SET_GPR_U64(ctx, 6, 'k');
            SET_GPR_S32(ctx, 4, static_cast<int32_t>(static_cast<uint32_t>(address)));
        }
        else
        {
            SET_GPR_U64(ctx, 3, 'm');
        }
        SET_GPR_U64(ctx, 2, 0u);
        ctx->pc = GPR_U32(ctx, 31);
    }

#if defined(PLATFORM_XBOX)
    // Frame hand-off (Xbox). The game thread (cpuMain 0x200C48) builds a
    // frame into one of two slots while gsMain (0x200F20) draws the other.
    // Slot s at 0x2F2C00 + 12*s: in use (being built), the vblank its build
    // started, times drawn. gsMain draws only when the vblank handler
    // (0x201198) hands it a slot: not in use, started two or more vblanks
    // ago, newest first. Two PS2 habits cost the Xbox dearly:
    //  - Every frame is drawn twice: at the vblank after its first draw the
    //    handler hands the same slot out again, because the interlaced PS2
    //    display needed a fresh draw into the other buffer. That second draw
    //    repeats all of the frame's VIF, VU1 and GPU work, in the middle of
    //    the next frame's build. On the Xbox the GPU's picture stays on
    //    screen, so the first draw marks the slot drawn twice and gsMain
    //    skips it from then on (its count >= 3 path).
    //  - The hand-off waits for a vblank, so a frame finished just after one
    //    idles for most of 17 ms. When the game thread finishes a frame and
    //    gsMain is waiting, the handler's choice is made at once (fresh
    //    slots only), as the handler makes it: an interrupt-style signal,
    //    so gsMain (the higher priority) takes over when the game thread's
    //    wait blocks, and is released by gsMain's end-of-draw signal as
    //    before. Only when that wait will block (its semaphore at 0): a
    //    leftover signal would let the game thread run on while gsMain
    //    signals again. The 60 Hz vblank count still times the game, and
    //    the two-vblank age rule still caps it at 30 frames a second.
    constexpr uint32_t kFrameSlots = 0x2F2C00u, kFrameSlotBytes = 12u;
    constexpr uint32_t kGpGsWaiting = 0x6CB4u;  // gsMain is waiting for a slot
    constexpr uint32_t kGpSlotReady = 0x6CCCu;  // semaphore gsMain waits on
    constexpr uint32_t kGpFrameTaken = 0x6CC4u; // semaphore the game thread waits on
    constexpr uint32_t kGpDrawSlot = 0x6CE4u;   // slot gsMain draws
    constexpr uint32_t kGpVblanks = 0x4BACu;    // vblank count

    void xboxHandOutFrame(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t gp)
    {
        if (READ32(gp - kGpGsWaiting) == 0u)
            return;
        EeScheduler &scheduler = runtime->eeScheduler();
        const EeSemaphore *taken = scheduler.semaphore(static_cast<int>(GPR_U32(ctx, 4)));
        if (!taken || taken->count != 0)
            return;
        const uint32_t vblanks = READ32(gp - kGpVblanks);
        int best = -1;
        int32_t bestStart = 0;
        for (uint32_t s = 0; s < 2u; ++s)
        {
            const uint32_t slot = kFrameSlots + s * kFrameSlotBytes;
            if (READ32(slot) != 0u || READ32(slot + 8u) != 0u)
                continue; // being built, or drawn already
            const int32_t start = static_cast<int32_t>(READ32(slot + 4u));
            if (((vblanks - static_cast<uint32_t>(start)) & 0x7Fu) < 2u)
                continue; // the handler's age test
            if (best < 0 || start > bestStart)
            {
                best = static_cast<int>(s);
                bestStart = start;
            }
        }
        if (best < 0)
            return;
        WRITE32(gp - kGpDrawSlot, static_cast<uint32_t>(best));
        WRITE32(gp - kGpGsWaiting, 0u); // as gsMain does on waking; keeps the handler out
        ++g_nv2aTextureStats.earlyHandouts;
        scheduler.signalSemaphore(static_cast<int>(READ32(gp - kGpSlotReady)), true);
    }

    void xboxWaitSema(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (ctx->pc == 0x2D0160u)
        {
            const uint32_t gp = GPR_U32(ctx, 28);
            if (GPR_U32(ctx, 4) == READ32(gp - kGpFrameTaken))
                xboxHandOutFrame(rdram, ctx, runtime, gp);
        }
        WaitSema_0x2d0160(rdram, ctx, runtime);
    }

    // Glow/flare occlusion (Xbox). Each rendered frame the game copies a
    // 640x224 16-bit depth image back from the GS (zbtestCopyZB, a local-to-
    // host transfer that drains the GPU) and then reads one depth value per
    // glow point (zbtestDoTest). On the Xbox the depth buffer lives on the
    // GPU and the transfer only ever returned GS memory's stale contents, so
    // the copy is skipped: the double-buffer toggle is kept, and each pending
    // point gets depth 0 (nothing in front of it), as the stale copy gave.
    // zbtestCopyZB runs once per frame, on its first draw (times drawn 1).
    void xboxZbtestCopyZB(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)runtime;
        const uint32_t gp = GPR_U32(ctx, 28);
        if (!guestRange(gp - kGpDrawSlot, 4u, 4u) || !guestRange(gp - 0x4CDCu, 4u, 4u))
        { ctx->pc = GPR_U32(ctx, 31); return; }
        const uint32_t drawSlot = READ32(gp - kGpDrawSlot);
        if (drawSlot >= 2u || READ32(gp - 0x4CDCu) >= 2u)
        { ctx->pc = GPR_U32(ctx, 31); return; }
        WRITE32(kFrameSlots + drawSlot * kFrameSlotBytes + 8u, 2u); // no second draw
        ++g_nv2aTextureStats.gameFrames;
        xboxPerfGameFrame(); // the frame-time histogram
        const uint32_t next = 1u - READ32(gp - 0x4CDCu);
        WRITE32(gp - 0x4CDCu, next);
        SET_GPR_S32(ctx, 2, static_cast<int32_t>(next));
        ctx->pc = GPR_U32(ctx, 31);
    }

    void xboxZbtestDoTest(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)runtime;
        const uint32_t gp = GPR_U32(ctx, 28);
        if (!guestRange(gp - 0x467Cu, 4u, 4u)) { ctx->pc = GPR_U32(ctx, 31); return; }
        const uint32_t buffer = READ32(gp - 0x467Cu);
        if (buffer >= 3u) { ctx->pc = GPR_U32(ctx, 31); return; }
        const uint32_t glows = READ32(0x01FEA0A0u + buffer * 4u);
        const uint32_t table = READ32(0x0036A590u + buffer * 4u);
        if (glows > 72u || !guestRange(table, 0x3CC0u, 4u)) { ctx->pc = GPR_U32(ctx, 31); return; }
        const int32_t points = static_cast<int32_t>(glows * 9u);
        for (int32_t i = 0; i < points; ++i)
        {
            const uint32_t entry = table + static_cast<uint32_t>(i) * 24u;
            if (static_cast<int32_t>(READ32(entry)) >= 0)
                WRITE16(entry + 0x12u, 0u);
        }
        ctx->pc = GPR_U32(ctx, 31);
    }

#if TS_PERF_DETAIL
    // Phase brackets for real-hardware runs (src/xbox/xbox_perf.cpp,
    // [TS:phase]). bossMainLoop (0x200638, once a frame) calls each step of
    // the frame from one place; gsMain (0x200F20) kicks the frame's display
    // list with sceDmaSend, which runs the whole draw (DMA walk, VIF, VU1,
    // GS, renderer) before it returns. Each function's table entry is
    // wrapped: the bracket opens when it is called from that place and
    // closes when it returns there. A function that unwinds to the
    // scheduler inside (a thread switch, a checkpoint) returns later through
    // the scheduler instead, which resumes the caller at the call's return
    // address: that address's own table entry (a resume label of the
    // caller) is wrapped too and closes the bracket. Both wrappers call the
    // entry they replaced with the same arguments: the game runs as before.
    struct PerfBracket
    {
        uint32_t function; // the bracketed function
        uint32_t caller;   // the function that calls it
        uint32_t ret;      // the call's return address in the caller
        uint32_t phase;
        PS2Runtime::RecompiledFunction original, resumeOriginal;
    };
    PerfBracket g_perfBrackets[] = {
        {0x21EEB8u, 0x200638u, 0x2006C4u, kPerfGameTick},   // gameTick
        {0x2262C8u, 0x200638u, 0x2006CCu, kPerfTickBefore}, // lvTickBefore
        {0x2265A8u, 0x200638u, 0x20074Cu, kPerfTickPlayer}, // lvTickPlayer, once per player
        {0x2263A0u, 0x200638u, 0x200764u, kPerfTickAfter},  // lvTickAfter
        {0x2266F8u, 0x200638u, 0x200A00u, kPerfGfx},        // lvGfx, once per viewport
        {0x2CF4A0u, 0x200F20u, 0x201064u, kPerfKick},       // sceDmaSend (its other callers are not timed)
    };

#if TS_PERF_JOBS
    // Job brackets (make TS_PERF_JOBS=1, measurement): every direct call the
    // four steps make (lvTickBefore, lvTickPlayer, lvTickAfter, lvGfx) and
    // those of the six biggest of those calls, one
    // timer per called function ([TS:jobs]), opened when it is called from
    // one of its listed call sites and closed when it returns there or when
    // the scheduler resumes the caller at that return address, as above. Jobs
    // may contain each other: each has its own clock.
    struct JobSite
    {
        uint32_t function, caller, ret;
        uint32_t job;
        PS2Runtime::RecompiledFunction resumeOriginal;
    };
    JobSite g_jobSites[] = {
        {0x296610u, 0x2262C8u, 0x226334u}, // ipTick
        {0x2A8B40u, 0x2262C8u, 0x22633Cu}, // starfieldTick
        {0x2A84F0u, 0x2262C8u, 0x226344u}, // weatherTick
        {0x256C58u, 0x2262C8u, 0x22634Cu}, // bgGetRoomsTick
        {0x2BA9C8u, 0x2262C8u, 0x226354u}, // aiTickBefore
        {0x26F500u, 0x2262C8u, 0x22635Cu}, // propTickBefore
        {0x28A8E8u, 0x2262C8u, 0x226364u}, // bulletTick
        {0x2A4BD8u, 0x2262C8u, 0x22636Cu}, // decalTick
        {0x295A00u, 0x2262C8u, 0x226374u}, // cartridgesTick
        {0x2ADB50u, 0x2262C8u, 0x22637Cu}, // specialfxTick
        {0x29BC58u, 0x2262C8u, 0x226384u}, // particleTick
        {0x22CB20u, 0x2265A8u, 0x2265BCu}, // frontSet
        {0x20C7E0u, 0x2265A8u, 0x2265C4u}, // windowTick
        {0x20C420u, 0x2265A8u, 0x2265DCu}, // windowSet
        {0x22CB58u, 0x2265A8u, 0x2265E4u}, // frontTick
        {0x20CE18u, 0x2265A8u, 0x226634u}, // menuTick
        {0x20DB28u, 0x2265A8u, 0x22663Cu}, // debugmenuGetJoyMode
        {0x2038E8u, 0x2265A8u, 0x226650u}, // joyNewBut
        {0x2129E0u, 0x2265A8u, 0x226670u}, // ingamemenuPause
        {0x2039E8u, 0x2265A8u, 0x226680u}, // joyClearButs
        {0x2038E8u, 0x2265A8u, 0x226690u}, // joyNewBut
        {0x212930u, 0x2265A8u, 0x2266A4u}, // ingamemenuStart
        {0x2039E8u, 0x2265A8u, 0x2266B4u}, // joyClearButs
        {0x281248u, 0x2265A8u, 0x2266BCu}, // playerTick
        {0x2B0E80u, 0x2265A8u, 0x2266C4u}, // hudTick
        {0x27E320u, 0x2265A8u, 0x2266CCu}, // camTick
        {0x2946C0u, 0x2265A8u, 0x2266D4u}, // gunTick
        {0x2586C0u, 0x2265A8u, 0x2266DCu}, // bgPortalTick
        {0x20C7E0u, 0x2263A0u, 0x2263DCu}, // windowTick
        {0x20C420u, 0x2263A0u, 0x2263F4u}, // windowSet
        {0x273BB0u, 0x2263A0u, 0x2263FCu}, // animMtxTick
        {0x26F9E8u, 0x2263A0u, 0x226404u}, // propTickAfter
        {0x204EC0u, 0x2263A0u, 0x22640Cu}, // soundTick
        {0x205D10u, 0x2263A0u, 0x226414u}, // musicTick
        {0x20C7E0u, 0x2263A0u, 0x226428u}, // windowTick
        {0x20C420u, 0x2263A0u, 0x226440u}, // windowSet
        {0x273BB0u, 0x2263A0u, 0x226448u}, // animMtxTick
        {0x26F9E8u, 0x2263A0u, 0x226450u}, // propTickAfter
        {0x204EC0u, 0x2263A0u, 0x226458u}, // soundTick
        {0x205D10u, 0x2263A0u, 0x226460u}, // musicTick
        {0x20C7E0u, 0x2263A0u, 0x226474u}, // windowTick
        {0x20C420u, 0x2263A0u, 0x22648Cu}, // windowSet
        {0x20C7E0u, 0x2263A0u, 0x2264A0u}, // windowTick
        {0x20C420u, 0x2263A0u, 0x2264B8u}, // windowSet
        {0x246AE8u, 0x2263A0u, 0x2264C0u}, // mapmakerTick
        {0x27E320u, 0x2263A0u, 0x2264C8u}, // camTick
        {0x273BB0u, 0x2263A0u, 0x2264D0u}, // animMtxTick
        {0x26F9E8u, 0x2263A0u, 0x2264D8u}, // propTickAfter
        {0x204EC0u, 0x2263A0u, 0x2264E0u}, // soundTick
        {0x205D10u, 0x2263A0u, 0x2264E8u}, // musicTick
        {0x20C7E0u, 0x2263A0u, 0x2264FCu}, // windowTick
        {0x20C420u, 0x2263A0u, 0x226514u}, // windowSet
        {0x2AE698u, 0x2263A0u, 0x22651Cu}, // creditsTick
        {0x273BB0u, 0x2263A0u, 0x226524u}, // animMtxTick
        {0x26F9E8u, 0x2263A0u, 0x22652Cu}, // propTickAfter
        {0x204EC0u, 0x2263A0u, 0x226534u}, // soundTick
        {0x25A3B8u, 0x2263A0u, 0x226548u}, // bgTick
        {0x273BB0u, 0x2263A0u, 0x226550u}, // animMtxTick
        {0x2A7D20u, 0x2263A0u, 0x226558u}, // roomlightTick
        {0x26F9E8u, 0x2263A0u, 0x226560u}, // propTickAfter
        {0x294970u, 0x2263A0u, 0x226568u}, // chrgunTick
        {0x2CD248u, 0x2263A0u, 0x226570u}, // aiEndTick
        {0x204EC0u, 0x2263A0u, 0x226578u}, // soundTick
        {0x205D10u, 0x2263A0u, 0x226580u}, // musicTick
        {0x2CDBC0u, 0x2263A0u, 0x226588u}, // timerTick
        {0x220BA8u, 0x2263A0u, 0x226590u}, // StatsTick
        {0x226DF0u, 0x2263A0u, 0x226598u}, // lvSoundsTick
        {0x269EF8u, 0x2266F8u, 0x226708u}, // propUpdateRooms
        {0x26FD40u, 0x2266F8u, 0x226710u}, // propGfxRoomPreproc
        {0x22CB20u, 0x2266F8u, 0x22671Cu}, // frontSet
        {0x22E208u, 0x2266F8u, 0x226734u}, // guiFlashAlpha
        {0x20C420u, 0x2266F8u, 0x226778u}, // windowSet
        {0x20C7E8u, 0x2266F8u, 0x226780u}, // windowGfx
        {0x2B7C98u, 0x2266F8u, 0x226788u}, // dlSetClipTag
        {0x22CD30u, 0x2266F8u, 0x226790u}, // frontGfx
        {0x22A190u, 0x2266F8u, 0x2267A0u}, // loadingGfx
        {0x20C420u, 0x2266F8u, 0x2267C0u}, // windowSet
        {0x20C7E8u, 0x2266F8u, 0x2267C8u}, // windowGfx
        {0x2B7C98u, 0x2266F8u, 0x2267D0u}, // dlSetClipTag
        {0x24B688u, 0x2266F8u, 0x2267D8u}, // mapmakerGfx
        {0x22CD30u, 0x2266F8u, 0x2267E0u}, // frontGfx
        {0x20C420u, 0x2266F8u, 0x226800u}, // windowSet
        {0x20C7E8u, 0x2266F8u, 0x226808u}, // windowGfx
        {0x2B7C98u, 0x2266F8u, 0x226810u}, // dlSetClipTag
        {0x2AE6C8u, 0x2266F8u, 0x226818u}, // creditsGfx
        {0x20C420u, 0x2266F8u, 0x226838u}, // windowSet
        {0x20C7E8u, 0x2266F8u, 0x226840u}, // windowGfx
        {0x2B7C98u, 0x2266F8u, 0x226848u}, // dlSetClipTag
        {0x27E318u, 0x2266F8u, 0x226890u}, // camGetMode
        {0x28D2D8u, 0x2266F8u, 0x2268A4u}, // bulletMakeAttachedMinesInvisible
        {0x256830u, 0x2266F8u, 0x226968u}, // bgGfx
        {0x27E318u, 0x2266F8u, 0x2269C4u}, // camGetMode
        {0x2949E0u, 0x2266F8u, 0x2269D8u}, // gunGfx
        {0x201F78u, 0x2266F8u, 0x2269E0u}, // memdbAlloc
        {0x272CC8u, 0x2266F8u, 0x226B04u}, // pickupposGfx
        {0x2A9068u, 0x2266F8u, 0x226B0Cu}, // starfieldGfx
        {0x2A8620u, 0x2266F8u, 0x226B14u}, // weatherGfx
        {0x28D000u, 0x2266F8u, 0x226B1Cu}, // bulletGfx
        {0x2A1908u, 0x2266F8u, 0x226B24u}, // particleGfx
        {0x2ABDF8u, 0x2266F8u, 0x226B2Cu}, // specialfxGfx
        {0x2A6B78u, 0x2266F8u, 0x226B34u}, // zbtestGfx
        {0x258868u, 0x2266F8u, 0x226B48u}, // bgFloorGfx
        {0x258878u, 0x2266F8u, 0x226B5Cu}, // bgWallGfx
        {0x258860u, 0x2266F8u, 0x226B70u}, // bgVolumeGfx
        {0x258840u, 0x2266F8u, 0x226B84u}, // bgPortalGfx
        {0x258850u, 0x2266F8u, 0x226B98u}, // bgPortalRectGfx
        {0x264DF8u, 0x2266F8u, 0x226BA0u}, // padGfx
        {0x27C4A0u, 0x2266F8u, 0x226BA8u}, // propEditGfx
        {0x296678u, 0x2266F8u, 0x226BB0u}, // ipGfx
        {0x283E88u, 0x2266F8u, 0x226BB8u}, // playerHitPosGfx
        {0x2B2D68u, 0x2266F8u, 0x226BC0u}, // hudGfx
        {0x20CFF8u, 0x2266F8u, 0x226BC8u}, // menuGfx
        {0x22CD30u, 0x2266F8u, 0x226BD0u}, // frontGfx
        // One level deeper: the calls of the six biggest jobs (2026-11-02, 4P).
        {0x201F78u, 0x26F500u, 0x26F58Cu}, // memdbAlloc from propTickBefore
        {0x201F78u, 0x26F500u, 0x26F59Cu}, // memdbAlloc from propTickBefore
        {0x201F78u, 0x26F500u, 0x26F5ACu}, // memdbAlloc from propTickBefore
        {0x201F78u, 0x26F500u, 0x26F5BCu}, // memdbAlloc from propTickBefore
        {0x201F78u, 0x26F500u, 0x26F5CCu}, // memdbAlloc from propTickBefore
        {0x201F78u, 0x26F500u, 0x26F62Cu}, // memdbAlloc from propTickBefore
        {0x201F78u, 0x26F500u, 0x26F63Cu}, // memdbAlloc from propTickBefore
        {0x274400u, 0x26F500u, 0x26F658u}, // nullOverridePointers from propTickBefore
        {0x26ECF0u, 0x26F500u, 0x26F6D8u}, // droppingPickupPropTick from propTickBefore
        {0x26B710u, 0x26F500u, 0x26F6E8u}, // headPropTick from propTickBefore
        {0x26A330u, 0x26F500u, 0x26F770u}, // pickupPropTick from propTickBefore
        {0x212CF8u, 0x26F500u, 0x26F79Cu}, // animUpdate from propTickBefore
        {0x26ECB8u, 0x26F500u, 0x26F84Cu}, // corpsePropTick from propTickBefore
        {0x276678u, 0x26F500u, 0x26F85Cu}, // carPropTick from propTickBefore
        {0x27BFC8u, 0x26F500u, 0x26F86Cu}, // specialPropTick from propTickBefore
        {0x26BE78u, 0x26F500u, 0x26F87Cu}, // doorPropTick from propTickBefore
        {0x26DDC0u, 0x26F500u, 0x26F88Cu}, // chrPropTick from propTickBefore
        {0x26ECE8u, 0x26F500u, 0x26F89Cu}, // gunPropTick from propTickBefore
        {0x26C440u, 0x26F500u, 0x26F8ACu}, // remotePropTick from propTickBefore
        {0x278BB0u, 0x26F500u, 0x26F8BCu}, // waterPropTick from propTickBefore
        {0x267338u, 0x26F500u, 0x26F920u}, // propCalculateWalls from propTickBefore
        {0x2675B8u, 0x26F500u, 0x26F92Cu}, // propCalculateFloors from propTickBefore
        {0x2B4A58u, 0x26F500u, 0x26F964u}, // matrixRotY from propTickBefore
        {0x2B54C8u, 0x26F500u, 0x26F9A4u}, // matrixVecMulAligned from propTickBefore
        {0x25C160u, 0x26F9E8u, 0x26FAACu}, // obInstLightUpdate from propTickAfter
        {0x269D78u, 0x26F9E8u, 0x26FACCu}, // propUpdate from propTickAfter
        {0x26E8D8u, 0x26F9E8u, 0x26FAE0u}, // chrPropTickAfter from propTickAfter
        {0x26FF10u, 0x26F9E8u, 0x26FB3Cu}, // propAttachUpdate from propTickAfter
        {0x26B710u, 0x26F9E8u, 0x26FB50u}, // headPropTick from propTickAfter
        {0x25C160u, 0x26F9E8u, 0x26FBB0u}, // obInstLightUpdate from propTickAfter
        {0x269D78u, 0x26F9E8u, 0x26FBD0u}, // propUpdate from propTickAfter
        {0x26F460u, 0x26F9E8u, 0x26FBE8u}, // propUnattach from propTickAfter
        {0x2B7CD0u, 0x256830u, 0x256868u}, // dlSetZB from bgGfx
        {0x2B7EA8u, 0x256830u, 0x2569D8u}, // dlSetBlend from bgGfx
        {0x2B8050u, 0x256830u, 0x2569F0u}, // dlSetClip from bgGfx
        {0x26FE08u, 0x256830u, 0x256A0Cu}, // propGfxRoom from bgGfx
        {0x2B7EA8u, 0x256830u, 0x256A14u}, // dlSetBlend from bgGfx
        {0x2B7CD0u, 0x256830u, 0x256A1Cu}, // dlSetZB from bgGfx
        {0x26FE08u, 0x256830u, 0x256A28u}, // propGfxRoom from bgGfx
        {0x2B7CD0u, 0x256830u, 0x256A30u}, // dlSetZB from bgGfx
        {0x26FE08u, 0x256830u, 0x256A3Cu}, // propGfxRoom from bgGfx
        {0x26FE08u, 0x256830u, 0x256A48u}, // propGfxRoom from bgGfx
        {0x2B7EA8u, 0x256830u, 0x256A50u}, // dlSetBlend from bgGfx
        {0x2B7CD0u, 0x256830u, 0x256A58u}, // dlSetZB from bgGfx
        {0x26FE08u, 0x256830u, 0x256A64u}, // propGfxRoom from bgGfx
        {0x2B7EA8u, 0x256830u, 0x256A6Cu}, // dlSetBlend from bgGfx
        {0x2B7CD0u, 0x256830u, 0x256A74u}, // dlSetZB from bgGfx
        {0x26FE08u, 0x256830u, 0x256A80u}, // propGfxRoom from bgGfx
        {0x2B7EA8u, 0x256830u, 0x256B44u}, // dlSetBlend from bgGfx
        {0x2B7CD0u, 0x256830u, 0x256B4Cu}, // dlSetZB from bgGfx
        {0x2B7DF0u, 0x256830u, 0x256B54u}, // dlSetDitherMatrix from bgGfx
        {0x26FE08u, 0x256830u, 0x256B60u}, // propGfxRoom from bgGfx
        {0x2A61C8u, 0x256830u, 0x256B68u}, // decalGfx from bgGfx
        {0x2B7EA8u, 0x256830u, 0x256B70u}, // dlSetBlend from bgGfx
        {0x2B7CD0u, 0x256830u, 0x256B78u}, // dlSetZB from bgGfx
        {0x226DF8u, 0x256830u, 0x256B80u}, // lvGetDitherForXLU from bgGfx
        {0x2B7DF0u, 0x256830u, 0x256B88u}, // dlSetDitherMatrix from bgGfx
        {0x26FE08u, 0x256830u, 0x256B94u}, // propGfxRoom from bgGfx
        {0x258888u, 0x256830u, 0x256B9Cu}, // bgGlassGfxRoom from bgGfx
        {0x2A6250u, 0x256830u, 0x256BECu}, // decalGfxMoving from bgGfx
        {0x2B7EA8u, 0x256830u, 0x256BF4u}, // dlSetBlend from bgGfx
        {0x2B7CD0u, 0x256830u, 0x256BFCu}, // dlSetZB from bgGfx
        {0x26FE08u, 0x256830u, 0x256C08u}, // propGfxRoom from bgGfx
        {0x26FE08u, 0x256830u, 0x256C14u}, // propGfxRoom from bgGfx
        {0x2B7CD0u, 0x256830u, 0x256C1Cu}, // dlSetZB from bgGfx
        {0x2B4C50u, 0x281248u, 0x2812F0u}, // matrixTransRotY from playerTick
        {0x2D5E98u, 0x281248u, 0x281320u}, // sceVu0MulMatrix from playerTick
        {0x224338u, 0x281248u, 0x281390u}, // StatsAddChar from playerTick
        {0x20DB28u, 0x281248u, 0x281438u}, // debugmenuGetJoyMode from playerTick
        {0x203BB8u, 0x281248u, 0x281450u}, // joyGetAxis from playerTick
        {0x203BB8u, 0x281248u, 0x281464u}, // joyGetAxis from playerTick
        {0x2D8398u, 0x281248u, 0x2814C4u}, // sqrtf from playerTick
        {0x2D8398u, 0x281248u, 0x2814F4u}, // sqrtf from playerTick
        {0x2038E8u, 0x281248u, 0x281598u}, // joyNewBut from playerTick
        {0x203860u, 0x281248u, 0x2815C0u}, // joyBut from playerTick
        {0x223E60u, 0x281248u, 0x281610u}, // StatsAdd from playerTick
        {0x2038E8u, 0x281248u, 0x281634u}, // joyNewBut from playerTick
        {0x203968u, 0x281248u, 0x281680u}, // joyReleaseBut from playerTick
        {0x203860u, 0x281248u, 0x2816E8u}, // joyBut from playerTick
        {0x203860u, 0x281248u, 0x281710u}, // joyBut from playerTick
        {0x223E60u, 0x281248u, 0x281788u}, // StatsAdd from playerTick
        {0x203B30u, 0x281248u, 0x281824u}, // joySetCentreZone from playerTick
        {0x203BB8u, 0x281248u, 0x281834u}, // joyGetAxis from playerTick
        {0x203BB8u, 0x281248u, 0x281848u}, // joyGetAxis from playerTick
        {0x203B30u, 0x281248u, 0x281860u}, // joySetCentreZone from playerTick
        {0x203BB8u, 0x281248u, 0x281988u}, // joyGetAxis from playerTick
        {0x203BB8u, 0x281248u, 0x2819A0u}, // joyGetAxis from playerTick
        {0x295238u, 0x281248u, 0x281A64u}, // gunDoesAutoAim from playerTick
        {0x2B4C50u, 0x281248u, 0x281B1Cu}, // matrixTransRotY from playerTick
        {0x2D5E98u, 0x281248u, 0x281B44u}, // sceVu0MulMatrix from playerTick
        {0x2B4C50u, 0x281248u, 0x281B94u}, // matrixTransRotY from playerTick
        {0x2D5E98u, 0x281248u, 0x281BC0u}, // sceVu0MulMatrix from playerTick
        {0x280780u, 0x281248u, 0x281C04u}, // playerAutoAimCalc from playerTick
        {0x2B4C50u, 0x281248u, 0x281C84u}, // matrixTransRotY from playerTick
        {0x2D5E98u, 0x281248u, 0x281CACu}, // sceVu0MulMatrix from playerTick
        {0x2B4C50u, 0x281248u, 0x281CFCu}, // matrixTransRotY from playerTick
        {0x2D5E98u, 0x281248u, 0x281D28u}, // sceVu0MulMatrix from playerTick
        {0x2B5638u, 0x281248u, 0x281D68u}, // matrixVecRotAligned from playerTick
        {0x203BB8u, 0x281248u, 0x281E10u}, // joyGetAxis from playerTick
        {0x203BB8u, 0x281248u, 0x281E4Cu}, // joyGetAxis from playerTick
        {0x203BB8u, 0x281248u, 0x281EE4u}, // joyGetAxis from playerTick
        {0x203BB8u, 0x281248u, 0x281EF8u}, // joyGetAxis from playerTick
        {0x203BB8u, 0x281248u, 0x281F0Cu}, // joyGetAxis from playerTick
        {0x203BB8u, 0x281248u, 0x281F20u}, // joyGetAxis from playerTick
        {0x223E60u, 0x281248u, 0x281F4Cu}, // StatsAdd from playerTick
        {0x2AE1C0u, 0x281248u, 0x282024u}, // specialfxFreeSpawn from playerTick
        {0x2D7398u, 0x281248u, 0x282638u}, // sinf from playerTick
        {0x2D7398u, 0x281248u, 0x282660u}, // sinf from playerTick
        {0x2D71C8u, 0x281248u, 0x2826A0u}, // cosf from playerTick
        {0x2D7398u, 0x281248u, 0x2826CCu}, // sinf from playerTick
        {0x2D71C8u, 0x281248u, 0x2826F8u}, // cosf from playerTick
        {0x2D7398u, 0x281248u, 0x282724u}, // sinf from playerTick
        {0x2D71C8u, 0x281248u, 0x282754u}, // cosf from playerTick
        {0x2D7398u, 0x281248u, 0x282774u}, // sinf from playerTick
        {0x2D71C8u, 0x281248u, 0x282794u}, // cosf from playerTick
        {0x2D7398u, 0x281248u, 0x2827B4u}, // sinf from playerTick
        {0x223E60u, 0x281248u, 0x282940u}, // StatsAdd from playerTick
        {0x223E60u, 0x281248u, 0x282950u}, // StatsAdd from playerTick
        {0x2E4608u, 0x281248u, 0x282958u}, // fptodp from playerTick
        {0x2E3768u, 0x281248u, 0x282964u}, // dpcmp from playerTick
        {0x223E60u, 0x281248u, 0x282978u}, // StatsAdd from playerTick
        {0x223E60u, 0x281248u, 0x28298Cu}, // StatsAdd from playerTick
        {0x2D8398u, 0x281248u, 0x282AD4u}, // sqrtf from playerTick
        {0x285070u, 0x281248u, 0x282C00u}, // chrAddFloorMoveToPos from playerTick
        {0x27DB10u, 0x281248u, 0x282C28u}, // moveTestDoSlide from playerTick
        {0x2D8398u, 0x281248u, 0x282E70u}, // sqrtf from playerTick
        {0x27DB10u, 0x281248u, 0x282F80u}, // moveTestDoSlide from playerTick
        {0x27DB10u, 0x281248u, 0x283028u}, // moveTestDoSlide from playerTick
        {0x223E60u, 0x281248u, 0x283098u}, // StatsAdd from playerTick
        {0x280588u, 0x281248u, 0x28317Cu}, // playerOnGroundDie from playerTick
        {0x27DB10u, 0x281248u, 0x283228u}, // moveTestDoSlide from playerTick
        {0x2B4A58u, 0x281248u, 0x2832DCu}, // matrixRotY from playerTick
        {0x2B5638u, 0x281248u, 0x2832ECu}, // matrixVecRotAligned from playerTick
        {0x27DB10u, 0x281248u, 0x283344u}, // moveTestDoSlide from playerTick
        {0x27C870u, 0x281248u, 0x28338Cu}, // moveFindRoom from playerTick
        {0x280178u, 0x281248u, 0x2833C0u}, // playerRespawn from playerTick
        {0x2038E8u, 0x281248u, 0x2833CCu}, // joyNewBut from playerTick
        {0x2C7ED0u, 0x281248u, 0x283404u}, // enemyGetNumBases from playerTick
        {0x2ADB70u, 0x281248u, 0x283428u}, // specialfxNewSpawn from playerTick
        {0x280B60u, 0x281248u, 0x283448u}, // playerDeathView from playerTick
        {0x284E38u, 0x281248u, 0x283464u}, // anglediff from playerTick
        {0x26C1C8u, 0x281248u, 0x283484u}, // remoteGetStandPos from playerTick
        {0x284E38u, 0x281248u, 0x2834FCu}, // anglediff from playerTick
        {0x26C1C8u, 0x281248u, 0x283600u}, // remoteGetStandPos from playerTick
        {0x27D0C0u, 0x281248u, 0x28363Cu}, // moveTest from playerTick
        {0x26C318u, 0x281248u, 0x283654u}, // remoteGetStandAngle from playerTick
        {0x283F60u, 0x281248u, 0x2837C0u}, // playerselectanim from playerTick
        {0x258CF0u, 0x281248u, 0x283830u}, // bgPortalCrossed from playerTick
        {0x2D8398u, 0x281248u, 0x2838E8u}, // sqrtf from playerTick
        {0x2D8398u, 0x281248u, 0x28398Cu}, // sqrtf from playerTick
        {0x259038u, 0x281248u, 0x283AA8u}, // bgLineTest from playerTick
        {0x2D8398u, 0x281248u, 0x283B60u}, // sqrtf from playerTick
        {0x2D8398u, 0x281248u, 0x283BC4u}, // sqrtf from playerTick
        {0x2D7D68u, 0x281248u, 0x283BD8u}, // atan2f from playerTick
        {0x2D7D68u, 0x281248u, 0x283C00u}, // atan2f from playerTick
        {0x203D70u, 0x281248u, 0x283CC4u}, // joyGetShockLeft from playerTick
        {0x203DF0u, 0x281248u, 0x283CF4u}, // joyGetShockRight from playerTick
        {0x203CC0u, 0x281248u, 0x283D04u}, // joySetShock from playerTick
        {0x27E318u, 0x281248u, 0x283D54u}, // camGetMode from playerTick
        {0x2728D0u, 0x281248u, 0x283DCCu}, // propKill from playerTick
        {0x2728D0u, 0x281248u, 0x283E20u}, // propKill from playerTick
        {0x2CDDE0u, 0x2B2D68u, 0x2B2DD4u}, // ilinkGetNumLocalPlayers from hudGfx
        {0x202270u, 0x2B2D68u, 0x2B2DE0u}, // textSelect from hudGfx
        {0x2B7CD0u, 0x2B2D68u, 0x2B2DECu}, // dlSetZB from hudGfx
        {0x2B7EA8u, 0x2B2D68u, 0x2B2DF8u}, // dlSetBlend from hudGfx
        {0x2B2948u, 0x2B2D68u, 0x2B2E94u}, // hudPainGfx from hudGfx
        {0x202270u, 0x2B2D68u, 0x2B2F18u}, // textSelect from hudGfx
        {0x2023B0u, 0x2B2D68u, 0x2B2F88u}, // textOutline from hudGfx
        {0x202270u, 0x2B2D68u, 0x2B2F90u}, // textSelect from hudGfx
        {0x21F318u, 0x2B2D68u, 0x2B2FD0u}, // GetChallengeTimeLeft from hudGfx
        {0x2B1780u, 0x2B2D68u, 0x2B2FE0u}, // hudChallengeTimeLeftGfx from hudGfx
        {0x21CC30u, 0x2B2D68u, 0x2B2FFCu}, // gameModeDisplayRank from hudGfx
        {0x2B1598u, 0x2B2D68u, 0x2B3010u}, // hudScoreWidth from hudGfx
        {0x2B15B8u, 0x2B2D68u, 0x2B3088u}, // hudScoreGfx from hudGfx
        {0x2B1900u, 0x2B2D68u, 0x2B30B0u}, // hudLSScoreGfx from hudGfx
        {0x2B19B8u, 0x2B2D68u, 0x2B30CCu}, // hudRankGfx from hudGfx
        {0x2B1858u, 0x2B2D68u, 0x2B3100u}, // hudChallengeScoreGfx from hudGfx
        {0x2B1AC0u, 0x2B2D68u, 0x2B3124u}, // hudBagIconGfx from hudGfx
        {0x2B7DF0u, 0x2B2D68u, 0x2B3138u}, // dlSetDitherMatrix from hudGfx
        {0x2CDDE0u, 0x2B2D68u, 0x2B3170u}, // ilinkGetNumLocalPlayers from hudGfx
        {0x202270u, 0x2B2D68u, 0x2B3184u}, // textSelect from hudGfx
        {0x202A38u, 0x2B2D68u, 0x2B3190u}, // textWidth from hudGfx
        {0x2023B0u, 0x2B2D68u, 0x2B31D8u}, // textOutline from hudGfx
        {0x202270u, 0x2B2D68u, 0x2B31E0u}, // textSelect from hudGfx
        {0x2B7DF0u, 0x2B2D68u, 0x2B31E8u}, // dlSetDitherMatrix from hudGfx
        {0x2B0A30u, 0x2B2D68u, 0x2B31F4u}, // hudMessageDraw from hudGfx
        {0x2B2C10u, 0x2B2D68u, 0x2B32CCu}, // hudMeterGfx from hudGfx
        {0x2B2C10u, 0x2B2D68u, 0x2B33B4u}, // hudMeterGfx from hudGfx
        {0x2B2258u, 0x2B2D68u, 0x2B33D0u}, // hudRadarGfx from hudGfx
        {0x2943E0u, 0x2B2D68u, 0x2B33ECu}, // gunIsLeftGunVisible from hudGfx
        {0x2B1C20u, 0x2B2D68u, 0x2B3420u}, // hudAmmoGfx from hudGfx
        {0x2B1C20u, 0x2B2D68u, 0x2B3458u}, // hudAmmoGfx from hudGfx
        {0x2B1E98u, 0x2B2D68u, 0x2B3468u}, // hudMinesGfx from hudGfx
        {0x2B1180u, 0x2B2D68u, 0x2B348Cu}, // hudBaseGfx from hudGfx
        {0x2B0FC0u, 0x2B2D68u, 0x2B3538u}, // drawTitleBox from hudGfx
        {0x2B1328u, 0x2B2D68u, 0x2B3554u}, // hudAmountBarGfx from hudGfx
        {0x202270u, 0x2B2D68u, 0x2B355Cu}, // textSelect from hudGfx
        {0x2B7CD0u, 0x2B2D68u, 0x2B3564u}, // dlSetZB from hudGfx
        {0x2D5E98u, 0x2586C0u, 0x2586FCu}, // sceVu0MulMatrix from bgPortalTick
        {0x257680u, 0x2586C0u, 0x258704u}, // bgPortalCalcInit from bgPortalTick
        {0x2578F0u, 0x2586C0u, 0x25870Cu}, // bgPortalCalcBackFace from bgPortalTick
        {0x2579F8u, 0x2586C0u, 0x258754u}, // bgPortalCalcRoomDepth from bgPortalTick
        {0x257B80u, 0x2586C0u, 0x2587C8u}, // bgRoomCalcClip from bgPortalTick
        {0x258108u, 0x2586C0u, 0x2587D4u}, // bgPortalCalcPos from bgPortalTick
    };
    struct JobFunction
    {
        uint32_t function = 0;
        PS2Runtime::RecompiledFunction original = nullptr;
        uint32_t rets[8] = {};
        uint32_t count = 0;
    };
    JobFunction g_jobFunctions[kPerfJobs];

    template <size_t J>
    void jobEntry(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const JobFunction &j = g_jobFunctions[J];
        const uint32_t ra = GPR_U32(ctx, 31);
        bool timed = false;
        for (uint32_t i = 0; i < j.count; ++i)
            timed = timed || j.rets[i] == ra;
        if (timed)
            xboxPerfJobOpen(J);
        j.original(rdram, ctx, runtime);
        if (timed && (ctx->pc == ra || ctx->pc == j.function))
            xboxPerfJobClose(J);
    }

    template <size_t K>
    void jobResume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const JobSite &s = g_jobSites[K];
        xboxPerfJobClose(s.job); // nothing when it is not open
        s.resumeOriginal(rdram, ctx, runtime);
    }

    // Before the step brackets: a return address inside a step must still
    // resolve to the step's own (unwrapped) function to be recognised.
    template <size_t... J, size_t... K>
    void installJobBrackets(PS2Runtime &runtime, std::index_sequence<J...>, std::index_sequence<K...>)
    {
        const PS2Runtime::RecompiledFunction entries[] = {&jobEntry<J>...};
        const PS2Runtime::RecompiledFunction resumes[] = {&jobResume<K>...};
        uint32_t functions = 0, timedSites = 0;
        for (size_t k = 0; k < sizeof...(K); ++k)
        {
            JobSite &s = g_jobSites[k];
            if (!runtime.hasFunction(s.function) || !runtime.hasFunction(s.ret) || !runtime.hasFunction(s.caller) ||
                runtime.lookupFunction(s.ret) != runtime.lookupFunction(s.caller))
                continue;
            uint32_t j = 0;
            while (j < functions && g_jobFunctions[j].function != s.function)
                ++j;
            if (j == functions)
            {
                if (functions == sizeof...(J))
                    continue;
                g_jobFunctions[j].function = s.function;
                g_jobFunctions[j].original = runtime.lookupFunction(s.function);
                ++functions;
            }
            JobFunction &f = g_jobFunctions[j];
            if (f.count == 8u)
                continue;
            f.rets[f.count++] = s.ret;
            s.job = j;
            s.resumeOriginal = runtime.lookupFunction(s.ret);
            runtime.replaceFunction(s.ret, resumes[k]);
            ++timedSites;
        }
        for (uint32_t j = 0; j < functions; ++j)
        {
            runtime.replaceFunction(g_jobFunctions[j].function, entries[j]);
            xboxPerfJobName(j, g_jobFunctions[j].function);
        }
        std::fprintf(stderr, "[TS:perf] job brackets: %u functions at %u of %u call sites\n", functions, timedSites,
                     unsigned(sizeof...(K)));
    }
#endif

    template <size_t I>
    void perfBracketEntry(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const PerfBracket &b = g_perfBrackets[I];
        const bool timed = GPR_U32(ctx, 31) == b.ret;
        if (timed)
            xboxPerfPhaseOpen(b.phase);
        b.original(rdram, ctx, runtime);
        // Back at the call site (a native override may leave pc at its entry).
        if (timed && (ctx->pc == b.ret || ctx->pc == b.function))
            xboxPerfPhaseClose(b.phase);
    }

    template <size_t I>
    void perfBracketResume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const PerfBracket &b = g_perfBrackets[I];
        xboxPerfPhaseClose(b.phase); // nothing when it is not open
        b.resumeOriginal(rdram, ctx, runtime);
    }

    // After the natives: whatever each entry holds then is what is wrapped.
    template <size_t... I>
    void installPerfBrackets(PS2Runtime &runtime, std::index_sequence<I...>)
    {
        const PS2Runtime::RecompiledFunction entries[] = {&perfBracketEntry<I>...};
        const PS2Runtime::RecompiledFunction resumes[] = {&perfBracketResume<I>...};
        unsigned installed = 0;
        for (size_t i = 0; i < sizeof...(I); ++i)
        {
            PerfBracket &b = g_perfBrackets[i];
            bool usable = runtime.hasFunction(b.function) && runtime.hasFunction(b.caller) && runtime.hasFunction(b.ret);
            if (usable)
            {
                b.original = runtime.lookupFunction(b.function);
                b.resumeOriginal = runtime.lookupFunction(b.ret);
                // The return address must be a resume label of the caller,
                // and nothing is wrapped twice.
                usable = b.resumeOriginal == runtime.lookupFunction(b.caller) && b.original != entries[i] &&
                         b.resumeOriginal != resumes[i];
            }
            if (!usable)
            {
                std::fprintf(stderr, "[TS:perf] %06x called from %06x: not timed\n", b.function, b.caller);
                continue;
            }
            runtime.replaceFunction(b.function, entries[i]);
            runtime.replaceFunction(b.ret, resumes[i]);
            ++installed;
        }
        std::fprintf(stderr, "[TS:perf] phase brackets: %u of %u\n", installed, unsigned(sizeof...(I)));
    }
#endif
#endif

    void applyTimeSplittersOverrides(PS2Runtime &runtime)
    {
#if defined(PLATFORM_XBOX)
        runtime.replaceFunction(0x2A70A0u, &xboxZbtestCopyZB);
        runtime.replaceFunction(0x2A7108u, &xboxZbtestDoTest);
        runtime.replaceFunction(0x2D0160u, &xboxWaitSema);
        registerTsNativeMath(runtime); // sinf, cosf, sqrtf, VU0 matrices, ...
        registerTsNativeFp(runtime);   // the soft-double routines (dpadd, dpmul, dptofp, ...)
        registerTsNativeGame(runtime); // portals, floor height, slerp, acosf, display-list packets, ...
        registerTsNativeGame2(runtime); // partGfx, calMatrices, animMtxTick, rotateChr, moveTest, ambient light, ...
        registerTsNativeGame3(runtime); // decals, chrPropTick, setAnimation, particles, animUpdate, routes, ...
        registerXboxSweep(runtime);     // src/xbox/xbox_sweep.h: the sweep's switched-on packages
#if TS_PERF_DETAIL
#if TS_PERF_JOBS
        installJobBrackets(runtime, std::make_index_sequence<kPerfJobs>{}, std::make_index_sequence<std::size(g_jobSites)>{});
#endif
        installPerfBrackets(runtime, std::make_index_sequence<std::size(g_perfBrackets)>{});
#endif
#endif
        g_displayMenu = DisplayMenu{};
        g_wordingApplied = false;
        g_textCursor = kTextBlock;
        g_capsThen = 0;
#if !defined(PLATFORM_XBOX)
        g_exitArmedUntil = {};
        g_exitConfirm = false;
        g_menuRows.clear();
        g_menuRowsDrawn.clear();
        g_menuAsked = 0;
        g_levelEndShown = false;
        g_testComplete = false;
#endif
        g_reserveOwner = &runtime; // (reserveReady: the host reserve, once the ELF is loaded)
        runtime.replaceFunction(0x201A60u, &nativeMemMark);
        runtime.replaceFunction(0x2E46A8u, &loggedAssert);
        runtime.replaceFunction(kUnlockedEx, &cheatUnlockedEx);
        runtime.replaceFunction(kChallengeAvail, &cheatChallengeAvail);
#if !defined(PLATFORM_XBOX)
        runtime.replaceFunction(kStringeditTick, &typedStringeditTick);
        runtime.replaceFunction(kDrawMenuItem, &drawMenuItemRecorded);
        // TS_HOOKS_OFF=name,... (tests): leave those hooks out.
        const auto hookOn = [](const char *name) {
            const char *off = std::getenv("TS_HOOKS_OFF");
            return !(off && std::strstr(off, name));
        };
        if (hookOn("frontfx"))
            runtime.replaceFunction(kFrontfxTick, &frontfxTickSkippable);
        if (hookOn("playerTick"))
            runtime.replaceFunction(kPlayerTick, &playerTickMouseLook);
        if (hookOn("gameTick"))
            runtime.replaceFunction(kGameTick, &gameTickClickable);
        if (hookOn("story"))
            runtime.replaceFunction(kStoryPageTick, &storyPageTickClickable);
        if (hookOn("lvTickAfter"))
            runtime.replaceFunction(kLvTickAfter, &lvTickAfterCardRunOn);
        if (hookOn("mcseq"))
            runtime.replaceFunction(kMcseqTick, &mcseqTickRunOn);
        if (hookOn("zoombox"))
            runtime.replaceFunction(kZoomboxInit, &zoomboxInitQuick);
        if (hookOn("title"))
            runtime.replaceFunction(kNplayersTick, &titleTickExitable);
        runtime.replaceFunction(0x2313B0u, &messageTickClickable<&message_pageTick_0x2313b0>);
        runtime.replaceFunction(0x206B90u, &messageTickClickable<&message_pageTick_0x206b90>);
        runtime.replaceFunction(0x24C990u, &messageTickClickable<&message_pageTick_0x24c990>);
        runtime.replaceFunction(kIngameMenuTick, &ingameMenuTick);
        runtime.replaceFunction(kConfirmEndGameTick, &confirmEndGameTick);
#endif
        if (const char *menu = std::getenv("TS_DISPLAY_MENU"); !(menu && *menu == '0'))
        {
            runtime.replaceFunction(kMenuTick, &displayMenuTick);
            runtime.replaceFunction(kStdMenuMake, &displayMenuMake);
        }
        runtime.replaceFunction(0x2B5258u, &widescreenMatrixPerspective);
        runtime.replaceFunction(0x225CD8u, &lvResetBeforeLoading);
        runtime.replaceFunction(0x21EDE8u, &gameResetAfterLoaded);
        if (const char *test = std::getenv("TS_LIBM_SELFTEST"); test && *test == '1')
            libmSelfTest(runtime);
        if (const char *trace = std::getenv("TS_TRACE_DAMAGE"); trace && *trace == '1')
            runtime.replaceFunction(0x271998u, &tracedPropDamage);
        // The game links its own copy of libkernel's SIF RPC client. Its calls
        // write SIF command packets into IOP memory that the emulated IOP never
        // services, so the FRD music driver never got a request.
        // TS_SIF_RPC_BRIDGE=1 routes bind/call through the runtime's RPC bridge
        // to the real driver (which streams through the emulated SPU2 but does
        // not yet play correct audio). By default music is played natively.
        const char *bridge = std::getenv("TS_SIF_RPC_BRIDGE");
        if (bridge && *bridge == '1')
        {
            ps2_game_overrides::bindAddressHandler(runtime, 0x2D2B58u, "sceSifBindRpc");
            ps2_game_overrides::bindAddressHandler(runtime, 0x2D2D08u, "sceSifCallRpc");
            return;
        }
        const char *native = std::getenv("TS_NATIVE_MUSIC");
        if (!(native && *native == '0'))
            runtime.replaceFunction(kStreamRpc, &nativeStreamRpc);
    }
}

PS2_REGISTER_GAME_OVERRIDE("TimeSplitters music", "SLUS_200.90", 0u, 0u, applyTimeSplittersOverrides)
