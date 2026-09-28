// TimeSplitters-specific runtime overrides.
#include "game_overrides.h"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "runtime/ps2_audio.h"
#include "runtime/ps2_music.h"
#include "runtime/ps2_vfs.h"
#include "runtime/ps2_host_settings.h"
#include "ps2_recompiled_functions.h"

#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <iterator>
#include <string>
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
        auto fresh = [] {
            R5900Context ctx;
            R5900Context *ctxp = &ctx;
            SET_GPR_U32(ctxp, 29, 0x01F80000u);
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
    void widescreenMatrixPerspective(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (hostSettings().widescreen)
            ctx->f[12] *= 4.0f / 3.0f;
        matrixPerspective_0x2b5258(rdram, ctx, runtime);
    }


    // The game's Audio / Video Options page (audiovideo_pageTick) runs the
    // generic menutick and std_menumake on audiovideo_menu: a 16-byte header
    // and 32-byte items {text, 0, id, flags, gv*, up id, down id}, each item
    // editing a 40-byte "gv" value {value, min, max, flags, choices*, ...}.
    // Text below 0x4DE is a language-table id, anything else a string
    // pointer. The two calls are wrapped so the page uses an extended copy of
    // the menu with the PC display settings added after Screen Adjust; after
    // each tick the chosen values are applied and saved to timesplitters.ini.
    constexpr uint32_t kMenuTick = 0x230238u;
    constexpr uint32_t kStdMenuMake = 0x22DAF8u;
    constexpr uint32_t kAudioVideoMenu = 0x353C08u;
    constexpr uint32_t kGvPlaySound = 0x353798u; // on/off template
    constexpr uint32_t kDispOnOff = 0x352D60u;
    constexpr uint32_t kOriginalItems = 5u;       // before the page-link item
    constexpr uint32_t kItemSize = 32u, kGvSize = 40u;

    struct Resolution
    {
        int width, height;
    };

    struct DisplayMenu
    {
        uint32_t menu = 0;
        uint32_t gvWidescreen = 0, gvFxaa = 0, gvResolution = 0, gvFullscreen = 0, gvScale = 0;
        uint32_t scaleLabel = 0; // notes when the change waits for a restart
        std::vector<Resolution> resolutions;
        int startupScale = 1;
    };
    DisplayMenu g_displayMenu;

    uint32_t &guestWord(uint8_t *rdram, uint32_t address)
    {
        return *reinterpret_cast<uint32_t *>(rdram + (address & 0x1FFFFFCu));
    }

    uint16_t &guestHalf(uint8_t *rdram, uint32_t address)
    {
        return *reinterpret_cast<uint16_t *>(rdram + (address & 0x1FFFFFEu));
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

        // The game's own allocator owns the heap it sets up, so this uses the
        // unused kernel-reserved RAM just below the HLE callback arena.
        constexpr uint32_t block = 0x7E000u;
        for (uint32_t i = 0; i < 0x800u; i += 4u)
        {
            if (guestWord(rdram, block + i) != 0u)
            {
                std::fprintf(stderr, "[TS:menu] RAM at 0x%x is in use; display options not added\n", block + i);
                return 0;
            }
        }
        uint32_t cursor = block;
        auto take = [&](uint32_t bytes) {
            const uint32_t at = cursor;
            cursor += (bytes + 15u) & ~15u;
            return at;
        };
        auto text = [&](const std::string &value, uint32_t room = 0) {
            const uint32_t at = take(std::max<uint32_t>(room, static_cast<uint32_t>(value.size()) + 1u));
            writeGuestString(rdram, at, value);
            return at;
        };
        auto choices = [&](const std::vector<uint32_t> &texts) {
            const uint32_t at = take(static_cast<uint32_t>(texts.size() + 1u) * 8u);
            for (uint32_t i = 0; i < texts.size(); ++i)
            {
                guestWord(rdram, at + i * 8u) = i;
                guestWord(rdram, at + i * 8u + 4u) = texts[i];
            }
            return at;
        };
        auto gv = [&](uint32_t max, uint32_t list) {
            const uint32_t at = take(kGvSize);
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
        };
        const uint32_t itemCount = kOriginalItems + static_cast<uint32_t>(std::size(added));
        uint32_t labels[std::size(added)];
        for (size_t i = 0; i < std::size(added); ++i)
            labels[i] = text(added[i].label, 48u);
        m.scaleLabel = labels[std::size(added) - 1];

        m.menu = take(16u + (itemCount + 1u) * kItemSize);
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
        if (cursor > block + 0x800u)
            std::fprintf(stderr, "[TS:menu] display options overflowed their block\n");
        return m.menu;
    }

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
        if (windowChanged)
            ++settings.windowChanges;
        if (changed)
            saveHostSettings();
    }

    bool useDisplayMenu(uint8_t *rdram, R5900Context *ctx)
    {
        if (GPR_U32(ctx, 5) != kAudioVideoMenu)
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

    constexpr uint32_t kGameModeBlock = 0x7E800u;

    bool gameModeBlockFree(uint8_t *rdram)
    {
        for (uint32_t i = 0; i < 0x400u; i += 4u)
        {
            if (guestWord(rdram, kGameModeBlock + i) != 0u)
            {
                std::fprintf(stderr, "[TS:menu] RAM at 0x%x is in use; Exit Game not added\n", kGameModeBlock + i);
                return false;
            }
        }
        return true;
    }

    // The page's tick rewrites the original items every frame (positions,
    // links, which entries show), so the copy is rebuilt from it each time.
    uint32_t layoutGameModeMenu(uint8_t *rdram)
    {
        const uint32_t label = kGameModeBlock;
        writeGuestString(rdram, label, "Exit Game");
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
        static const bool usable = gameModeBlockFree(rdram);
        if (!usable)
            return false;
        SET_GPR_U32(ctx, 5, layoutGameModeMenu(rdram));
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
        if (guestHalf(rdram, GPR_U32(ctx, 4) + 4u) != kExitGameId)
            return false;
        const uint32_t input = guestWord(rdram, GPR_U32(ctx, 28) - 0x5FFCu);
        if (!input)
            return false;
        const uint32_t pad = guestWord(rdram, input);
        if (pad > 7u)
            return false;
        const uint32_t record = guestWord(rdram, 0x31DF68u + pad * 4u);
        if (record > 7u)
            return false;
        return (guestWord(rdram, 0x31C740u + record * 0x180u + 0x124u) & 0x40u) != 0u;
    }

    void displayMenuTick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        static const bool trace = [] { const char *v = std::getenv("TS_TRACE_MENUS"); return v && *v == '1'; }();
        static uint32_t lastMenu = 0;
        if (trace) // also left in guest RAM for pad scripts (wait_u32 0x7eff0)
            guestWord(rdram, 0x7EFF0u) = GPR_U32(ctx, 5);
        if (trace && GPR_U32(ctx, 5) != lastMenu)
        {
            lastMenu = GPR_U32(ctx, 5);
            std::fprintf(stderr, "[TS:menu] page %08x menu %08x\n", GPR_U32(ctx, 4), lastMenu);
        }
        // The page's tick sets the "Select" button hint (the text of the
        // last item) only for its own entries; show it on Exit Game too. The
        // text is entry 0x80 of the current language's table.
        if (GPR_U32(ctx, 5) == kGameModeMenu && guestHalf(rdram, GPR_U32(ctx, 4) + 4u) == kExitGameId)
        {
            const uint32_t language = guestWord(rdram, GPR_U32(ctx, 28) - 0x6CACu);
            const uint32_t table = guestWord(rdram, 0x2F2C18u + language * 4u);
            if (language < 8u && table)
                guestWord(rdram, kGameModeMenu + 16u + (kGameModeLinks + 1u) * kItemSize) =
                    guestWord(rdram, table + 0x200u);
        }
        if (useGameModeMenu(rdram, ctx) && exitGameChosen(rdram, ctx))
        {
            std::fprintf(stderr, "[TS:menu] Exit Game chosen\n");
            runtime->requestStop();
        }
        const bool ours = useDisplayMenu(rdram, ctx);
        menutick_0x230238(rdram, ctx, runtime);
        if (ours)
            applyDisplayMenuToSettings(rdram);
    }

    void displayMenuMake(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!useDisplayMenu(rdram, ctx))
            useGameModeMenu(rdram, ctx);
        std_menumake_0x22daf8(rdram, ctx, runtime);
    }


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

    void applyTimeSplittersOverrides(PS2Runtime &runtime)
    {
        runtime.replaceFunction(0x2E46A8u, &loggedAssert);
        runtime.replaceFunction(kUnlockedEx, &cheatUnlockedEx);
        runtime.replaceFunction(kChallengeAvail, &cheatChallengeAvail);
        if (const char *menu = std::getenv("TS_DISPLAY_MENU"); !(menu && *menu == '0'))
        {
            runtime.replaceFunction(kMenuTick, &displayMenuTick);
            runtime.replaceFunction(kStdMenuMake, &displayMenuMake);
        }
        runtime.replaceFunction(0x2B5258u, &widescreenMatrixPerspective);
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
