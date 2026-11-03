#include "xbox_bg_game.h"
#include "xbox_bg_runtime.h"
#include "ps2_runtime.h"

#include <cstdio>
#include <cstring>

namespace
{
    // SLUS_200.90: preloadReset clears 500 24-byte records at this address.
    // preloadGetFile searches type 0 records by the filename at +0x0c.
    // fileLoad writes its unrounded logical byte count to record +0x14.
    constexpr uint32_t kPreloadTable = 0x01FB4C60u;
    constexpr uint32_t kPreloadStride = 24u;
    constexpr uint32_t kPreloadCapacity = 500u;
    constexpr uint32_t kPreloadCountGp = 0x6290u;
    constexpr uint32_t kLevelGp = 0x6090u;
    constexpr uint32_t kMaxFilename = 256u;

    enum Hook
    {
        Prepare, Activate, Reset, PreloadReset, PreloadExec, End,
        PartTransform, WaterXyz, WaterSt, HookCount
    };
    constexpr uint32_t kAddresses[HookCount] = {
        0x2564A8u, // bgPreloadTextures: before pass-2 texture fixups
        0x253B88u, // bgLoad: exact preloaded file, before room relocation
        0x256750u, // bgReset: preserve the pending pristine source
        0x21C1F8u, // preloadReset: old file records cease to identify storage
        0x21C728u, // preloadExec: before any reused allocation is overwritten
        0x2567F8u, // bgEnd: no later draw may retain this level binding
        0x260258u, // partTransform: in-place original position writes
        0x278888u, // vtxlistWaterxyz: a1 is the destination, a2 the count
        0x278998u, // vtxlistWaterst: a1 is the destination, a2 the count
    };
    PS2Runtime::RecompiledFunction s_original[HookCount]{};
    bool s_complete = false;

    uint32_t reg(const R5900Context *ctx, unsigned index)
    {
        uint32_t value;
        std::memcpy(&value, &ctx->r[index], sizeof(value));
        return value;
    }

    bool inRam(uint32_t address, uint32_t bytes)
    {
        // Do not mask an arbitrary pointer into RAM. Unknown aliases decline
        // binding; the original game handler still receives its exact context.
        return bytes <= PS2_RAM_SIZE && address <= PS2_RAM_SIZE - bytes;
    }

    bool readWord(const uint8_t *rdram, uint32_t address, uint32_t &value)
    {
        if (!rdram || !inRam(address, sizeof(value)))
            return false;
        std::memcpy(&value, rdram + address, sizeof(value));
        return true;
    }

    bool readGlobal(const uint8_t *rdram, const R5900Context *ctx,
                    uint32_t displacement, uint32_t &value)
    {
        if (!ctx)
            return false;
        const uint32_t gp = reg(ctx, 28u);
        return gp >= displacement && readWord(rdram, gp - displacement, value);
    }

    bool filename(const uint8_t *rdram, uint32_t address,
                  const char *&text, uint32_t &length)
    {
        if (!rdram || address == 0u || !inRam(address, 1u))
            return false;
        const uint32_t remaining = PS2_RAM_SIZE - address;
        const uint32_t limit = remaining < kMaxFilename ? remaining : kMaxFilename;
        text = reinterpret_cast<const char *>(rdram + address);
        const void *end = std::memchr(text, 0, limit);
        if (!end)
            return false;
        length = uint32_t(static_cast<const char *>(end) - text);
        return true;
    }

    struct Source
    {
        uint32_t level = 0, base = 0, bytes = 0;
    };

    bool findSource(const uint8_t *rdram, const R5900Context *ctx,
                    bool checkLoadArgument, Source &source)
    {
        if (!readGlobal(rdram, ctx, kLevelGp, source.level) ||
            source.level == 0u || source.level > 0x7FFFFFFFu ||
            (source.level >= 100u && source.level <= 105u))
            return false; // MapMaker and menu levels do not load an XBG source.

        char canonical[64];
        const int n = std::snprintf(canonical, sizeof(canonical),
                                    "host0:bg/level%u/level%u.raw", source.level, source.level);
        if (n <= 0 || unsigned(n) >= sizeof(canonical))
            return false;
        const uint32_t expectedLength = uint32_t(n);
        if (checkLoadArgument)
        {
            const char *name;
            uint32_t length;
            if (!filename(rdram, reg(ctx, 4u), name, length) ||
                length != expectedLength || std::memcmp(name, canonical, length) != 0)
                return false;
        }

        uint32_t count;
        if (!readGlobal(rdram, ctx, kPreloadCountGp, count) || count == 0u ||
            count > kPreloadCapacity || !inRam(kPreloadTable, count * kPreloadStride))
            return false;

        bool found = false;
        for (uint32_t i = 0; i < count; ++i)
        {
            const uint32_t entry = kPreloadTable + i * kPreloadStride;
            uint32_t type, nameAddress;
            if (!readWord(rdram, entry, type))
                return false;
            if (type != 0u)
                continue;
            const char *name;
            uint32_t length;
            if (!readWord(rdram, entry + 12u, nameAddress) ||
                !filename(rdram, nameAddress, name, length))
                return false;
            if (length != expectedLength || std::memcmp(name, canonical, length) != 0)
                continue;
            if (found) // Even two records naming the same allocation are ambiguous.
                return false;
            found = true;
            if (!readWord(rdram, entry + 16u, source.base) ||
                !readWord(rdram, entry + 20u, source.bytes) || source.base == 0u ||
                source.bytes < 16u || !inRam(source.base, source.bytes))
                return false;
        }
        return found;
    }

    void observeTransform(const uint8_t *rdram, const R5900Context *ctx)
    {
        if (!ctx)
            return;
        const uint32_t model = reg(ctx, 4u);
        // partTransform can recurse and tail-loop over children/siblings.
        // A model inside the bound raw allocation invalidates the whole binding
        // before any of those writes, even if its first part is empty.
        xboxBgSourceWrite(model);

        // Also catch an external model whose selected position array aliases
        // this raw allocation. Ordinary water instance overrides do not.
        uint32_t parts;
        const uint32_t index = reg(ctx, 5u);
        if (!readWord(rdram, model, parts) || parts == 0u || parts > model / 80u ||
            index >= parts)
            return;
        const uint32_t part = model - parts * 80u + index * 80u;
        uint32_t destination;
        if (inRam(part, 80u) &&
            readWord(rdram, part + (reg(ctx, 6u) ? 0x30u : 0x18u), destination))
            xboxBgSourceWrite(destination);
    }

    void observe(Hook hook, uint8_t *rdram, const R5900Context *ctx)
    {
        switch (hook)
        {
        case Prepare:
        case Activate:
        {
            Source source;
            if (!findSource(rdram, ctx, hook == Activate, source))
            {
                xboxBgInvalidateSource();
                break;
            }
            if (hook == Prepare)
                xboxBgPrepareSource(rdram, source.level, source.base, source.bytes);
            else
                xboxBgActivateSource(rdram, source.level, source.base, source.bytes);
            break;
        }
        case Reset:
            xboxBgResetSource();
            break;
        case PreloadReset:
        case PreloadExec:
        case End:
            xboxBgInvalidateSource();
            break;
        case PartTransform:
            observeTransform(rdram, ctx);
            break;
        case WaterXyz:
        case WaterSt:
            if (ctx && reg(ctx, 6u) != 0u && reg(ctx, 6u) <= 0x7FFFFFFFu)
                xboxBgSourceWrite(reg(ctx, 5u));
            break;
        default:
            break;
        }
    }

    template <Hook Index>
    void hooked(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        // A callee can yield to the EE scheduler. Its resume address has a
        // separate table entry: there is deliberately no work after this call.
        if (s_complete)
            observe(Index, rdram, ctx);
        s_original[Index](rdram, ctx, runtime);
    }
    constexpr PS2Runtime::RecompiledFunction kHooks[HookCount] = {
        &hooked<Prepare>, &hooked<Activate>, &hooked<Reset>,
        &hooked<PreloadReset>, &hooked<PreloadExec>, &hooked<End>,
        &hooked<PartTransform>, &hooked<WaterXyz>, &hooked<WaterSt>
    };
}

void xboxBgInstallGameHooks(PS2Runtime &runtime)
{
    s_complete = false;
    xboxBgInvalidateSource();
    PS2Runtime::RecompiledFunction current[HookCount];
    // Missing a required lifetime/writer entry must not leave activation on.
    // Preflight first so a different executable gets no partial installation.
    for (unsigned i = 0; i < HookCount; ++i)
    {
        if (!runtime.hasFunction(kAddresses[i]) ||
            !(current[i] = runtime.lookupFunction(kAddresses[i])) ||
            (current[i] == kHooks[i] && !s_original[i]))
        {
            std::fprintf(stderr, "[TS:xbg] game hook unavailable at %08x; source binding disabled\n",
                         kAddresses[i]);
            return;
        }
    }
    for (unsigned i = 0; i < HookCount; ++i)
    {
        if (current[i] == kHooks[i])
            continue; // Idempotent when the same ELF is installed again.
        s_original[i] = current[i];
        if (!runtime.replaceFunction(kAddresses[i], kHooks[i]))
        {
            std::fprintf(stderr, "[TS:xbg] cannot install game hook at %08x; source binding disabled\n",
                         kAddresses[i]);
            return;
        }
    }
    s_complete = true;
}
