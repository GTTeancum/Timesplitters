// GS renderer for the original Xbox (NV2A via pbkit). See gs_nv2a_backend.h.
#include "gs_nv2a_backend.h"

#include <hal/debug.h>
#include <hal/video.h>
#include <pbkit/pbkit.h>
#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>

#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <list>
#include <set>
#include <vector>

void xboxGpuOwnsDisplay(bool owns);
void xboxLogToScreen(bool enabled);
extern "C" void pb_ts_set_depth_format(unsigned int fmt); // src/xbox/pbkit/pbkit_ts.c

namespace
{
    constexpr uint32_t kMaxGpuAddress = 0x03FFAFFFu;
    constexpr uint64_t kPageBytes = 8192u;
    constexpr uint32_t kPageCount = 512u;
    constexpr uint32_t kScreenWidth = 640u, kScreenHeight = 480u;
    constexpr uint32_t kMaxVertices = 4096u;             // per batch run (144 KB)
    constexpr size_t kTextureBudget = 1024u * 1024u;     // decoded textures kept on the GPU

    uint32_t physical(const void *p) { return uint32_t(reinterpret_cast<uintptr_t>(p)) & 0x03FFFFFFu; }

    void *allocGpu(size_t bytes)
    {
        return MmAllocateContiguousMemoryEx(bytes, 0, kMaxGpuAddress, 0, PAGE_READWRITE | PAGE_WRITECOMBINE);
    }

    uint32_t log2u(uint32_t v)
    {
        uint32_t n = 0;
        while ((1u << n) < v)
            ++n;
        return n;
    }

    struct GpuVertex
    {
        float x, y, z, w;
        uint32_t color; // D3DCOLOR: B, G, R, A bytes
        float s, t, r, q;
    };
    static_assert(sizeof(GpuVertex) == 36, "vertex layout");

    // ----------------------------------------------------------- shaders
    const uint32_t kVertexProgram[] = {
#include "gs_vs.inl"
    };

#define MASK(mask, val) (((val) << (__builtin_ffs(mask) - 1)) & (mask))
    uint32_t *pushUntextured(uint32_t *p)
    {
#include "gs_ps_untextured.inl"
        return p;
    }
    uint32_t *pushModulate(uint32_t *p)
    {
#include "gs_ps_modulate.inl"
        return p;
    }
    uint32_t *pushModulateTcc(uint32_t *p)
    {
#include "gs_ps_modulate_tcc.inl"
        return p;
    }
    uint32_t *pushDecal(uint32_t *p)
    {
#include "gs_ps_decal.inl"
        return p;
    }
    uint32_t *pushDecalTcc(uint32_t *p)
    {
#include "gs_ps_decal_tcc.inl"
        return p;
    }
    uint32_t *pushHighlight(uint32_t *p)
    {
#include "gs_ps_highlight.inl"
        return p;
    }
    uint32_t *pushHighlightTcc(uint32_t *p)
    {
#include "gs_ps_highlight_tcc.inl"
        return p;
    }
#undef MASK

    // Pixel program variants (index = shader key).
    uint32_t *(*const kPixelPrograms[])(uint32_t *) = {
        pushUntextured, pushModulate, pushModulateTcc, pushDecal, pushDecalTcc, pushHighlight, pushHighlightTcc,
    };

    int pixelProgramFor(const GSDrawState &state)
    {
        if (!state.prim.tme)
            return 0;
        const bool tcc = state.context.tex0.tcc != 0;
        switch (state.context.tex0.tfx)
        {
        case 0: return tcc ? 2 : 1;
        case 1: return tcc ? 4 : 3;
        default: return tcc ? 6 : 5;
        }
    }

    // --------------------------------------------------------- GS helpers
    GSCpuBackend::VramRange frameRangeRows(uint32_t psm, uint32_t fbp, uint32_t fbw, uint32_t rows)
    {
        GSDrawState state{};
        state.context.frame.psm = static_cast<uint8_t>(psm);
        state.context.frame.fbp = fbp;
        state.context.frame.fbw = std::max<uint32_t>(fbw, 1u);
        state.context.scissor.x1 = static_cast<uint16_t>(std::max<uint32_t>(fbw, 1u) * 64u - 1u);
        state.context.scissor.y1 = static_cast<uint16_t>(rows ? rows - 1u : 0u);
        return GSCpuBackend::FrameRange(state);
    }

    bool overlaps(const GSCpuBackend::VramRange &a, const GSCpuBackend::VramRange &b)
    {
        if (a.end == UINT64_MAX || b.end == UINT64_MAX)
            return true;
        return a.begin < b.end && b.begin < a.end;
    }

    bool isIndexed(uint32_t psm)
    {
        return psm == GS_PSM_T8 || psm == GS_PSM_T4 || psm == GS_PSM_T8H || psm == GS_PSM_T4HL || psm == GS_PSM_T4HH;
    }

    // GS depth value to the 24-bit depth buffer's units. The whole 32-bit
    // vertex z is used whatever ZBUF.PSM says (the game declares a 16-bit
    // buffer but its z values span 32 bits; the PC renderer does the same).
    float depth24(double z, uint32_t zpsm)
    {
        (void)zpsm;
        return float(std::min(z / 256.0, 16777215.0));
    }

    uint32_t d3dColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
    {
        return uint32_t(b) | (uint32_t(g) << 8) | (uint32_t(r) << 16) | (uint32_t(a) << 24);
    }

    // NV2A swizzled texture layout: texel coordinates interleaved bit by bit
    // (u first) while both sizes last, then the longer one's upper bits.
    struct Swizzle
    {
        uint32_t maskU = 0, maskV = 0;
        Swizzle(uint32_t w, uint32_t h)
        {
            uint32_t bit = 0;
            for (uint32_t size = 1; size < w || size < h; size <<= 1)
            {
                if (size < w)
                    maskU |= 1u << bit++;
                if (size < h)
                    maskV |= 1u << bit++;
            }
        }
        static uint32_t spread(uint32_t value, uint32_t mask)
        {
            uint32_t out = 0;
            for (uint32_t bit = 1; mask; bit <<= 1)
            {
                const uint32_t lowest = mask & (~mask + 1u);
                if (value & bit)
                    out |= lowest;
                mask &= mask - 1u;
            }
            return out;
        }
    };
}

// Development aid: the renderer's current step, read with a debugger.
extern "C" volatile int g_nv2aStep = 0;
GSNv2aTextureStats g_nv2aTextureStats{};

struct GSNv2aBackend::Impl
{
    GSCpuBackend cpu;
    uint8_t *vram = nullptr;
    uint32_t vramSize = 0;

    // ------------------------------------------------------ page versions
    std::array<uint32_t, kPageCount> pageVersion{};

    void bumpPages(const GSCpuBackend::VramRange &range)
    {
        if (range.end == UINT64_MAX || range.end > kPageCount * kPageBytes)
        {
            for (uint32_t &v : pageVersion)
                ++v;
            return;
        }
        for (uint64_t p = range.begin / kPageBytes; p < (range.end + kPageBytes - 1) / kPageBytes && p < kPageCount; ++p)
            ++pageVersion[p];
    }

    uint64_t versionSum(const GSCpuBackend::VramRange &range) const
    {
        uint64_t sum = 0;
        if (range.end == UINT64_MAX || range.end > kPageCount * kPageBytes)
        {
            for (uint32_t v : pageVersion)
                sum = sum * 31u + v;
            return sum;
        }
        for (uint64_t p = range.begin / kPageBytes; p < (range.end + kPageBytes - 1) / kPageBytes && p < kPageCount; ++p)
            sum = sum * 31u + pageVersion[p];
        return sum;
    }

    // ------------------------------------------------------------ screen
    // The GS buffers shown on screen (from presentation requests) and the
    // one the GPU frame is drawing into.
    std::array<uint32_t, 2> displayFbp{UINT32_MAX, UINT32_MAX};
    bool frameOpen = false;
    uint32_t frameFbp = 0, frameFbw = 10, framePsm = GS_PSM_CT16, frameHeight = 224;
    bool screenGpuNewer = false;   // GPU pixels not yet in local memory
    bool screenVramNewer = false;  // local memory changed after the GPU drew
    uint32_t lastPresentedFbp = UINT32_MAX;

    GSCpuBackend::VramRange screenRange() const
    {
        return frameRangeRows(framePsm, frameFbp, frameFbw, frameHeight);
    }

    // Rows the GPU has drawn this frame. Reads of local memory below them
    // (the game keeps its CLUTs under the visible 448 rows, inside the
    // 512-row frame region) need no read-back of the GPU's pixels.
    uint32_t gpuRows = 0;
    GSCpuBackend::VramRange gpuRange() const
    {
        return frameRangeRows(framePsm, frameFbp, frameFbw, std::max<uint32_t>(gpuRows, 1u));
    }

    bool isScreenTarget(const GSDrawState &state) const
    {
        const GSFrameReg &f = state.context.frame;
        if (f.fbw != 10u || (f.psm != GS_PSM_CT16 && f.psm != GS_PSM_CT16S && f.psm != GS_PSM_CT32 && f.psm != GS_PSM_CT24))
            return false;
        if (displayFbp[0] == UINT32_MAX)
            return true; // nothing presented yet: any 640-wide colour buffer
        return f.fbp == displayFbp[0] || f.fbp == displayFbp[1];
    }

    // ---------------------------------------------------------- textures
    struct Texture
    {
        uint32_t tbp0, tbw, psm, width, height, cpsm, csm, csa, texa;
        uint64_t clutHash, versions, lastUse;
        GSCpuBackend::VramRange range;
        void *texels = nullptr; // swizzled, GPU memory
        uint32_t format = 0;    // NV097_SET_TEXTURE_FORMAT_COLOR_SZ_*
        uint32_t gpuWidth = 0, gpuHeight = 0; // stored size (large textures are halved)
        size_t bytes = 0;
        uint32_t lastFrame = 0;
    };
    uint32_t frameNumber = 1, frameTextures = 0, frameTextureBytes = 0, frameFills = 0;
    std::set<uint64_t> frameKeys, lastFrameKeys; // address/size keys drawn this and last frame (statistics)
    size_t retiredBytes = 0;
    static constexpr size_t kRetiredLimit = 768u * 1024u; // beyond this, wait and free at once
    // A list: draw keys hold pointers into it across insertions and removals.
    std::list<Texture> textures;
    std::list<Texture> retired; // dropped textures the GPU may still read; freed at the frame's end
    size_t textureBytes = 0;
    uint64_t textureTick = 0;
    uint64_t clutHash = 0;
    std::vector<uint32_t> decoded;
    std::vector<uint8_t> swizzled;
    std::vector<uint32_t> spreadU, spreadV;

    void refreshClutHash()
    {
        std::array<uint16_t, 512> clut{};
        std::array<uint32_t, 2> cbp{};
        cpu.GetClutState(clut, cbp);
        uint64_t h = 0xcbf29ce484222325ull;
        for (uint16_t v : clut)
            h = (h ^ v) * 0x100000001b3ull;
        clutHash = h;
    }

    // Drops a texture from the cache. Its memory is released only once the
    // GPU has finished the frame (finishFrame), so no stall here.
    void retireTexture(std::list<Texture>::iterator it)
    {
        if (lastTexture == &*it)
            lastTexture = nullptr;
        if (batchCount && batchKey.texture == &*it)
            flushBatch();
        if (applied.texture == &*it)
            stateValid = false; // the address may be reused by a new texture
        textureBytes -= it->bytes;
        retiredBytes += it->bytes;
        retired.splice(retired.end(), textures, it);
        if (retiredBytes > kRetiredLimit)
        {
            waitIdle();
            freeRetired();
        }
    }

    void freeRetired()
    {
        lastTexture = nullptr; // may be a one-frame texture
        if (batchCount)
            flushBatch(); // a one-frame texture may be the batch's
        for (Texture &t : retired)
            MmFreeContiguousMemory(t.texels);
        retired.clear();
        retiredBytes = 0;
        stateValid = false; // a bound one-frame texture's address may be reused
        g_nv2aTextureStats.residentBytes = uint32_t(textureBytes);
        g_nv2aTextureStats.resident = uint32_t(textures.size());
    }

    const Texture *texture(const GSDrawState &state)
    {
        const GSTex0Reg &tex = state.context.tex0;
        const uint32_t w = std::max<uint32_t>(state.textureWidth, 1u), h = std::max<uint32_t>(state.textureHeight, 1u);
        if (w > 1024u || h > 1024u)
            return nullptr;
        GSDrawState full = state;
        full.context.clamp = 0; // the decode covers the whole texture
        const GSCpuBackend::VramRange range = GSCpuBackend::TextureRange(full);
        // Render-to-texture from the screen: local memory needs the GPU's pixels.
        if (screenGpuNewer && overlaps(range, gpuRange()))
        {
            ++g_nv2aTextureStats.wbTexture;
            writeBackScreen();
        }
        const bool indexed = isIndexed(tex.psm);
        const uint32_t texa = uint32_t(state.texa.ta0) | (uint32_t(state.texa.ta1) << 8) | (state.texa.aem ? 0x10000u : 0u);
        const uint64_t hash = indexed ? clutHash : 0u;
        const uint64_t versions = versionSum(range);
        // Consecutive draws mostly share a texture: remember the last hit.
        const uint64_t tex0Bits = uint64_t(tex.tbp0) | (uint64_t(tex.tbw) << 32) | (uint64_t(tex.psm) << 40) |
                                  (uint64_t(tex.cpsm) << 48) | (uint64_t(tex.csm) << 54) | (uint64_t(tex.csa & 0x1Fu) << 56);
        if (lastTexture && lastTex0 == tex0Bits && lastTexa == texa && lastClut == hash && lastVersions == versions &&
            lastTexture->width == w && lastTexture->height == h)
        {
            lastTexture->lastUse = ++textureTick;
            noteUse(*lastTexture);
            return lastTexture;
        }
        Texture *found = lookupTexture(state, w, h, texa, hash, versions, range);
        lastTexture = found;
        lastTex0 = tex0Bits;
        lastTexa = texa;
        lastClut = hash;
        lastVersions = versions;
        return found;
    }

    Texture *lastTexture = nullptr;
    uint64_t lastTex0 = 0, lastClut = 0, lastVersions = 0;
    uint32_t lastTexa = 0;

    Texture *lookupTexture(const GSDrawState &state, uint32_t w, uint32_t h, uint32_t texa, uint64_t hash,
                           uint64_t versions, const GSCpuBackend::VramRange &range)
    {
        const GSTex0Reg &tex = state.context.tex0;
        const bool indexed = isIndexed(tex.psm);
        auto matches = [&](const Texture &t) {
            return t.tbp0 == tex.tbp0 && t.tbw == tex.tbw && t.psm == tex.psm && t.width == w && t.height == h &&
                   t.texa == texa && t.clutHash == hash &&
                   (!indexed || (t.cpsm == tex.cpsm && t.csm == tex.csm && t.csa == tex.csa));
        };
        for (auto it = textures.begin(); it != textures.end(); ++it)
        {
            Texture &t = *it;
            if (!matches(t))
                continue;
            if (t.versions == versions)
            {
                t.lastUse = ++textureTick;
                noteUse(t);
                return &t;
            }
            retireTexture(it); // changed contents: decoded afresh below
            break;
        }
        // One-frame textures (and evicted ones not yet freed) are reused
        // until the frame ends rather than decoded again at each use.
        for (Texture &t : retired)
            if (t.versions == versions && matches(t))
            {
                t.lastUse = ++textureTick;
                noteUse(t);
                return &t;
            }
        {
            // Why this is a miss (development statistics).
            bool sameAddress = false, sameVersion = false;
            for (const Texture &t : textures)
                if (t.tbp0 == tex.tbp0 && t.psm == tex.psm && t.width == w && t.height == h)
                {
                    sameAddress = true;
                    if (t.versions == versions)
                        sameVersion = true;
                }
            for (const Texture &t : retired)
                if (t.tbp0 == tex.tbp0 && t.psm == tex.psm && t.width == w && t.height == h)
                {
                    sameAddress = true;
                    if (t.versions == versions)
                        sameVersion = true;
                }
            if (sameVersion)
                ++g_nv2aTextureStats.missClut;
            else if (sameAddress)
                ++g_nv2aTextureStats.missVersion;
            else if (lastFrameKeys.count(uint64_t(tex.tbp0) | (uint64_t(tex.psm) << 16) | (uint64_t(w) << 24) | (uint64_t(h) << 40)))
                ++g_nv2aTextureStats.missEvicted;
            else
                ++g_nv2aTextureStats.missNew;
            frameKeys.insert(uint64_t(tex.tbp0) | (uint64_t(tex.psm) << 16) | (uint64_t(w) << 24) | (uint64_t(h) << 40));
        }
        Texture t{tex.tbp0, tex.tbw, tex.psm, w, h, tex.cpsm, tex.csm, tex.csa, texa, hash, versions, ++textureTick, range};
        decodeTexture(t, state); // sets format and bytes; the texels wait in `swizzled`
        // Room in the cache: textures not used in this or the last frame
        // go first. When a frame's textures exceed the budget the cache
        // keeps what it has (LRU would cycle the whole set every frame)
        // and the newcomer lives in a one-frame slot (the retired list).
        bool cached = true;
        while (textureBytes + t.bytes > kTextureBudget)
        {
            auto oldest = textures.end();
            for (auto it = textures.begin(); it != textures.end(); ++it)
                if (it->lastFrame + 1u < frameNumber && (oldest == textures.end() || it->lastUse < oldest->lastUse))
                    oldest = it;
            if (oldest == textures.end())
            {
                cached = false;
                break;
            }
            retireTexture(oldest);
        }
        if (!cached && retiredBytes + t.bytes > kRetiredLimit)
        {
            waitIdle();
            freeRetired();
        }
        t.texels = allocGpu(t.bytes);
        if (!t.texels)
            return nullptr;
        memcpy(t.texels, swizzled.data(), t.bytes);
        ++g_nv2aTextureStats.fills;
        ++frameFills;
        g_nv2aTextureStats.fillBytes += uint32_t(t.bytes);
        if (cached)
        {
            textureBytes += t.bytes;
            textures.push_back(t);
            noteUse(textures.back());
            return &textures.back();
        }
        retired.push_back(t);
        retiredBytes += t.bytes;
        noteUse(retired.back());
        return &retired.back();
    }

    void noteUse(Texture &t)
    {
        if (t.lastFrame == frameNumber)
            return;
        t.lastFrame = frameNumber;
        ++frameTextures;
        frameTextureBytes += uint32_t(t.bytes);
    }

    // Decodes the GS texture (CLUT and TEXA applied) into `swizzled`, the
    // layout the NV2A samples with wrapping: A1R5G5B5 when that loses
    // nothing (16-bit sources, alpha only 0 or at least 0x80, which the
    // pixel programs' x2 clamps to 1 either way), else A8R8G8B8.
    void decodeTexture(Texture &t, const GSDrawState &state)
    {
        // 2D draws (sprites: HUD, text) keep their texels; the halving is
        // for the world's triangles.
        const bool allowHalf = state.prim.type != GS_PRIM_SPRITE;
        cpu.DecodeTexture(state, decoded);
        if (decoded.size() < size_t(t.width) * t.height)
            decoded.assign(size_t(t.width) * t.height, 0u);
        // Textures of 256 or more are stored at half size (2x2 average):
        // a match's textures are about 3 MB a frame at full size, three
        // times what 64 MB leaves for the cache.
        t.gpuWidth = t.width;
        t.gpuHeight = t.height;
        if (allowHalf && (t.width >= 256u || t.height >= 256u) && t.width >= 16u && t.height >= 16u)
        {
            const uint32_t w = t.width, gw = w / 2u, gh = t.height / 2u;
            for (uint32_t v = 0; v < gh; ++v)
            {
                const uint32_t *r0 = &decoded[size_t(2u * v) * w], *r1 = r0 + w;
                uint32_t *dst = &decoded[size_t(v) * gw];
                for (uint32_t u = 0; u < gw; ++u)
                {
                    const uint32_t a = r0[2u * u], b = r0[2u * u + 1u], c = r1[2u * u], d = r1[2u * u + 1u];
                    uint32_t out = 0;
                    for (uint32_t shift = 0; shift < 32u; shift += 8u)
                        out |= ((((a >> shift) & 0xFFu) + ((b >> shift) & 0xFFu) + ((c >> shift) & 0xFFu) + ((d >> shift) & 0xFFu) + 2u) / 4u) << shift;
                    dst[u] = out;
                }
            }
            t.gpuWidth = gw;
            t.gpuHeight = gh;
        }
        const uint32_t width = t.gpuWidth, height = t.gpuHeight;
        const size_t count = size_t(width) * height;
        bool binaryAlpha = true, fits16 = true;
        for (size_t i = 0; i < count && binaryAlpha; ++i)
        {
            const uint32_t c = decoded[i], a = c >> 24;
            binaryAlpha = a == 0u || a >= 0x80u;
            if (c & 0x00070707u)
                fits16 = false;
        }
        // Most textures: DXT1 (4 bits a texel) so the cache holds a frame's
        // worth; the alpha bit is the 3-colour mode's transparent entry.
        if (width >= 8u && height >= 8u)
        {
            // Soft alpha: DXT5 (8 bits a texel, alpha interpolated per block).
            t.format = binaryAlpha ? NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT1_A1R5G5B5
                                   : NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT45_A8R8G8B8;
            t.bytes = binaryAlpha ? count / 2u : count;
            swizzled.resize(t.bytes);
            encodeDxt(width, height, !binaryAlpha, swizzled.data());
            return;
        }
        fits16 = fits16 && binaryAlpha;
        const Swizzle sw(width, height);
        spreadU.resize(width);
        for (uint32_t u = 0; u < width; ++u)
            spreadU[u] = Swizzle::spread(u, sw.maskU);
        spreadV.resize(height);
        for (uint32_t v = 0; v < height; ++v)
            spreadV[v] = Swizzle::spread(v, sw.maskV);
        t.format = fits16 ? NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A1R5G5B5 : NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A8R8G8B8;
        t.bytes = count * (fits16 ? 2u : 4u);
        swizzled.resize(t.bytes);
        if (fits16)
        {
            uint16_t *dst = reinterpret_cast<uint16_t *>(swizzled.data());
            for (uint32_t v = 0; v < height; ++v)
            {
                const uint32_t *src = &decoded[size_t(v) * width];
                const uint32_t rowBits = spreadV[v];
                for (uint32_t u = 0; u < width; ++u)
                {
                    const uint32_t c = src[u]; // R, G, B, A bytes
                    dst[spreadU[u] | rowBits] = uint16_t(((c >> 16) & 0x8000u) | ((c & 0xF8u) << 7) |
                                                         ((c >> 6) & 0x03E0u) | ((c >> 19) & 0x1Fu));
                }
            }
        }
        else
        {
            uint32_t *dst = reinterpret_cast<uint32_t *>(swizzled.data());
            for (uint32_t v = 0; v < height; ++v)
            {
                const uint32_t *src = &decoded[size_t(v) * width];
                const uint32_t rowBits = spreadV[v];
                for (uint32_t u = 0; u < width; ++u)
                {
                    const uint32_t c = src[u];
                    dst[spreadU[u] | rowBits] = (c & 0xFF00FF00u) | ((c & 0xFFu) << 16) | ((c >> 16) & 0xFFu);
                }
            }
        }
    }

    static uint16_t to565(uint32_t c) // R, G, B, A bytes
    {
        return uint16_t(((c & 0xF8u) << 8) | ((c >> 5) & 0x07E0u) | ((c >> 19) & 0x1Fu));
    }
    static void from565(uint16_t v, int &r, int &g, int &b)
    {
        r = (v >> 11) & 31; r = (r << 3) | (r >> 2);
        g = (v >> 5) & 63;  g = (g << 2) | (g >> 4);
        b = v & 31;         b = (b << 3) | (b >> 2);
    }

    // DXT1 by colour-extent fit: each 4x4 block's colours span the box of
    // its opaque texels; a block with transparent texels uses the 3-colour
    // mode (colour0 <= colour1) whose fourth entry is transparent.
    // DXT5: the same colour blocks preceded by an 8-byte alpha block (two
    // end points, 3-bit indices into their 8-step interpolation).
    void encodeDxt(uint32_t w, uint32_t h, bool dxt5, uint8_t *out)
    {
        for (uint32_t by = 0; by < h; by += 4)
            for (uint32_t bx = 0; bx < w; bx += 4, out += 8)
            {
                uint32_t texel[16];
                int minR = 255, minG = 255, minB = 255, maxR = 0, maxG = 0, maxB = 0;
                bool transparent = false, opaque = false;
                for (uint32_t y = 0; y < 4; ++y)
                    for (uint32_t x = 0; x < 4; ++x)
                    {
                        const uint32_t c = decoded[size_t(by + y) * w + bx + x];
                        texel[y * 4 + x] = c;
                        if (!dxt5 && (c >> 24) < 0x80u)
                        {
                            transparent = true;
                            continue;
                        }
                        opaque = true;
                        const int r = int(c & 0xFFu), g = int((c >> 8) & 0xFFu), b = int((c >> 16) & 0xFFu);
                        minR = std::min(minR, r); maxR = std::max(maxR, r);
                        minG = std::min(minG, g); maxG = std::max(maxG, g);
                        minB = std::min(minB, b); maxB = std::max(maxB, b);
                    }
                if (dxt5)
                {
                    uint32_t aMax = 0, aMin = 255;
                    for (int i = 0; i < 16; ++i)
                    {
                        const uint32_t a = texel[i] >> 24;
                        aMax = std::max(aMax, a);
                        aMin = std::min(aMin, a);
                    }
                    out[0] = uint8_t(aMax);
                    out[1] = uint8_t(aMin);
                    uint64_t bits = 0;
                    if (aMax != aMin)
                    {
                        uint32_t steps[8] = {aMax, aMin};
                        for (uint32_t i = 2; i < 8; ++i)
                            steps[i] = ((8u - i) * aMax + (i - 1u) * aMin) / 7u;
                        for (int i = 0; i < 16; ++i)
                        {
                            const int a = int(texel[i] >> 24);
                            uint32_t best = 0, bestD = 1000;
                            for (uint32_t e = 0; e < 8; ++e)
                            {
                                const uint32_t d = uint32_t(std::abs(a - int(steps[e])));
                                if (d < bestD)
                                {
                                    bestD = d;
                                    best = e;
                                }
                            }
                            bits |= uint64_t(best) << (3 * i);
                        }
                    }
                    for (int i = 0; i < 6; ++i)
                        out[2 + i] = uint8_t(bits >> (8 * i));
                    out += 8;
                }
                if (!opaque)
                {
                    memset(out, 0, 4);
                    memset(out + 4, 0xFF, 4); // every texel the transparent entry
                    continue;
                }
                uint16_t c0 = to565(uint32_t(maxR) | (uint32_t(maxG) << 8) | (uint32_t(maxB) << 16));
                uint16_t c1 = to565(uint32_t(minR) | (uint32_t(minG) << 8) | (uint32_t(minB) << 16));
                if (transparent ? c0 > c1 : c0 < c1)
                    std::swap(c0, c1);
                int pr[4], pg[4], pb[4];
                from565(c0, pr[0], pg[0], pb[0]);
                from565(c1, pr[1], pg[1], pb[1]);
                int entries;
                if (transparent || c0 == c1)
                {
                    pr[2] = (pr[0] + pr[1]) / 2; pg[2] = (pg[0] + pg[1]) / 2; pb[2] = (pb[0] + pb[1]) / 2;
                    entries = c0 == c1 ? 1 : 3;
                }
                else
                {
                    pr[2] = (2 * pr[0] + pr[1]) / 3; pg[2] = (2 * pg[0] + pg[1]) / 3; pb[2] = (2 * pb[0] + pb[1]) / 3;
                    pr[3] = (pr[0] + 2 * pr[1]) / 3; pg[3] = (pg[0] + 2 * pg[1]) / 3; pb[3] = (pb[0] + 2 * pb[1]) / 3;
                    entries = 4;
                }
                uint32_t bits = 0;
                for (int i = 0; i < 16; ++i)
                {
                    const uint32_t c = texel[i];
                    uint32_t index = 3; // transparent
                    if ((c >> 24) >= 0x80u)
                    {
                        const int r = int(c & 0xFFu), g = int((c >> 8) & 0xFFu), b = int((c >> 16) & 0xFFu);
                        int best = INT32_MAX;
                        for (int e = 0; e < entries; ++e)
                        {
                            const int dr = r - pr[e], dg = g - pg[e], db = b - pb[e];
                            const int d = dr * dr + dg * dg + db * db;
                            if (d < best)
                            {
                                best = d;
                                index = uint32_t(e);
                            }
                        }
                    }
                    bits |= index << (2 * i);
                }
                out[0] = uint8_t(c0); out[1] = uint8_t(c0 >> 8);
                out[2] = uint8_t(c1); out[3] = uint8_t(c1 >> 8);
                memcpy(out + 4, &bits, 4);
            }
    }

    // ------------------------------------------------------------ drawing
    GpuVertex *vertices = nullptr;
    uint32_t verticesUsed = 0;

    struct DrawKey
    {
        const Texture *texture = nullptr;
        int program = 0;
        uint32_t address = 0, filter = 0;
        uint32_t blendEnable = 0, sfactor = 0, dfactor = 0, equation = 0, blendColor = 0;
        uint32_t alphaTest = 0, alphaFunc = 0, alphaRef = 0;
        uint32_t depthTest = 0, depthFunc = 0, depthMask = 0;
        uint32_t colorMask = 0, shade = 0;
        bool operator==(const DrawKey &) const = default;
    };
    DrawKey applied{};
    bool stateValid = false;
    DrawKey batchKey{};
    uint32_t batchFirst = 0, batchCount = 0;
    int currentProgram = -1;

    void waitIdle()
    {
        g_nv2aStep = 10;
        flushBatch();
        closeBlock();
        g_nv2aStep = 11;
        while (pb_busy())
        {
        }
        g_nv2aStep = 12;
    }

    void uploadVertexProgram()
    {
        uint32_t *p = pb_begin();
        p = pb_push1(p, NV097_SET_TRANSFORM_PROGRAM_START, 0);
        p = pb_push1(p, NV097_SET_TRANSFORM_EXECUTION_MODE,
                     NV097_SET_TRANSFORM_EXECUTION_MODE_MODE_PROGRAM |
                         (NV097_SET_TRANSFORM_EXECUTION_MODE_RANGE_MODE_PRIV << 2));
        p = pb_push1(p, NV097_SET_TRANSFORM_PROGRAM_CXT_WRITE_EN, 0);
        p = pb_push1(p, NV097_SET_TRANSFORM_PROGRAM_LOAD, 0);
        pb_end(p);
        for (size_t i = 0; i < sizeof(kVertexProgram) / sizeof(kVertexProgram[0]); i += 4)
        {
            p = pb_begin();
            pb_push(p++, NV097_SET_TRANSFORM_PROGRAM, 4);
            std::memcpy(p, kVertexProgram + i, 16);
            p += 4;
            pb_end(p);
        }
    }

    void setAttributes()
    {
        uint32_t *p = pb_begin();
        pb_push(p++, NV097_SET_VERTEX_DATA_ARRAY_FORMAT, 16);
        for (int i = 0; i < 16; ++i)
            *p++ = NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F;
        pb_end(p);
        struct Attribute
        {
            uint32_t index, type, components, offset;
        };
        const Attribute attributes[] = {
            {0, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 4, 0},
            {3, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_UB_D3D, 4, 16},
            {9, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 4, 20},
        };
        for (const Attribute &a : attributes)
        {
            p = pb_begin();
            p = pb_push1(p, NV097_SET_VERTEX_DATA_ARRAY_FORMAT + 4 * a.index,
                         a.type | (a.components << 4) | (uint32_t(sizeof(GpuVertex)) << 8));
            p = pb_push1(p, NV097_SET_VERTEX_DATA_ARRAY_OFFSET + 4 * a.index,
                         physical(reinterpret_cast<const uint8_t *>(vertices) + a.offset));
            pb_end(p);
        }
    }

    void beginFrame(const GSDrawState &state)
    {
        g_nv2aStep = 20;
        frameOpen = true;
        frameFbp = state.context.frame.fbp;
        frameFbw = state.context.frame.fbw;
        framePsm = state.context.frame.psm;
        frameHeight = std::clamp<uint32_t>(uint32_t(state.context.scissor.y1) + 1u, 1u, 512u);
        gpuRows = 0;
        pb_reset();
        pushHead = pb_begin();
        pb_end(pushHead);
        pb_target_back_buffer();
        uploadVertexProgram();
        setAttributes();
        uint32_t *p = pb_begin();
        // Z from the vertex, not W (the kernel leaves w-buffering on; with
        // w = 1 everywhere every pixel would tie and the last face drawn
        // would win), fixed-point depth, perspective-correct texturing.
        p = pb_push1(p, NV097_SET_CONTROL0, NV097_SET_CONTROL0_TEXTURE_PERSPECTIVE_ENABLE);
        p = pb_push1(p, NV097_SET_STENCIL_TEST_ENABLE, 0);
        p = pb_push1(p, NV097_SET_CULL_FACE_ENABLE, 0);
        p = pb_push1(p, NV097_SET_FOG_ENABLE, 0);
        for (unsigned i = 1; i < 4; ++i)
            p = pb_push1(p, NV097_SET_TEXTURE_CONTROL0 + 64 * i, 0);
        pb_end(p);
        // GS depth tests keep the greater value: start from the nearest-is-0 side.
        p = pb_begin();
        pb_push(p++, NV097_SET_CLEAR_RECT_HORIZONTAL, 2);
        *p++ = ((kScreenWidth - 1u) << 16);
        *p++ = ((kScreenHeight - 1u) << 16);
        pb_push(p++, NV097_SET_ZSTENCIL_CLEAR_VALUE, 3);
        *p++ = 0;    // depth 0, stencil 0
        *p++ = 0;    // colour (unused)
        *p++ = 0x03; // clear depth and stencil
        pb_end(p);
        stateValid = false;
        currentProgram = -1;
        verticesUsed = 0;
        // A frame the CPU changed since (loading screens, movies) starts from it.
        if (screenVramNewer)
            loadScreenFromVram();
    }

    void finishFrame()
    {
        g_nv2aStep = 30;
        if (!frameOpen)
            return;
        waitIdle();
        shownBuffer = pb_back_buffer(); // drawn into; on screen until the next flip
        g_nv2aStep = 31;
        while (pb_finished())
        {
        }
        g_nv2aStep = 32;
        frameOpen = false;
        screenGpuNewer = true;
        freeRetired();
        g_nv2aTextureStats.frameTextures = frameTextures;
        g_nv2aTextureStats.frameTextureBytes = frameTextureBytes;
        g_nv2aTextureStats.frameFills = frameFills;
        frameTextures = frameTextureBytes = frameFills = 0;
        lastFrameKeys.swap(frameKeys);
        frameKeys.clear();
        ++frameNumber;
        g_nv2aTextureStats.frames = frameNumber;
    }

    static uint32_t blendFactor(uint32_t sel, bool alphaFromDest)
    {
        (void)sel;
        return alphaFromDest ? NV097_SET_BLEND_FUNC_SFACTOR_V_DST_ALPHA : NV097_SET_BLEND_FUNC_SFACTOR_V_SRC_ALPHA;
    }

    // GS blend: ((A - B) * C >> 7) + D, with A, B, D from {Cs, Cd, 0} and C
    // from {As, Ad, FIX}. The common forms map onto the fixed blend unit
    // (alphas already hold a/128 as 0..1).
    void blendState(const GSDrawState &state, DrawKey &k)
    {
        const uint64_t alpha = state.context.alpha;
        const uint32_t a = alpha & 3u, b = (alpha >> 2) & 3u, c = (alpha >> 4) & 3u, d = (alpha >> 6) & 3u;
        const uint32_t fix = uint32_t((alpha >> 32) & 0xFFu);
        k.blendEnable = 0;
        k.equation = NV097_SET_BLEND_EQUATION_V_FUNC_ADD;
        k.sfactor = NV097_SET_BLEND_FUNC_SFACTOR_V_ONE;
        k.dfactor = NV097_SET_BLEND_FUNC_DFACTOR_V_ZERO;
        if (!state.prim.abe)
            return;
        uint32_t factor, inverse;
        if (c == 2u)
        {
            factor = NV097_SET_BLEND_FUNC_SFACTOR_V_CONSTANT_ALPHA;
            inverse = NV097_SET_BLEND_FUNC_SFACTOR_V_ONE_MINUS_CONSTANT_ALPHA;
            k.blendColor = uint32_t(std::min<uint32_t>(fix * 2u, 255u)) << 24;
        }
        else
        {
            factor = c == 0u ? NV097_SET_BLEND_FUNC_SFACTOR_V_SRC_ALPHA : NV097_SET_BLEND_FUNC_SFACTOR_V_DST_ALPHA;
            inverse = c == 0u ? NV097_SET_BLEND_FUNC_SFACTOR_V_ONE_MINUS_SRC_ALPHA
                              : NV097_SET_BLEND_FUNC_SFACTOR_V_ONE_MINUS_DST_ALPHA;
        }
        constexpr uint32_t Cs = 0, Cd = 1, Zero = 2;
        k.blendEnable = 1;
        if (a == Cs && b == Cd && d == Cd) // Cs*C + Cd*(1-C)
        {
            k.sfactor = factor;
            k.dfactor = inverse;
        }
        else if (a == Cd && b == Cs && d == Cs) // Cd*C + Cs*(1-C)
        {
            k.sfactor = inverse;
            k.dfactor = factor;
        }
        else if (a == Cs && b == Zero && d == Cd) // Cs*C + Cd
        {
            k.sfactor = factor;
            k.dfactor = NV097_SET_BLEND_FUNC_DFACTOR_V_ONE;
        }
        else if (a == Zero && b == Cs && d == Cd) // Cd - Cs*C
        {
            k.sfactor = factor;
            k.dfactor = NV097_SET_BLEND_FUNC_DFACTOR_V_ONE;
            k.equation = NV097_SET_BLEND_EQUATION_V_FUNC_REVERSE_SUBTRACT;
        }
        else if (a == Cs && b == Zero && d == Zero) // Cs*C
        {
            k.sfactor = factor;
            k.dfactor = NV097_SET_BLEND_FUNC_DFACTOR_V_ZERO;
        }
        else if (a == Cd && b == Zero && d == Zero) // Cd*C
        {
            k.sfactor = NV097_SET_BLEND_FUNC_SFACTOR_V_ZERO;
            k.dfactor = factor;
        }
        else if (a == Cd && b == Zero && d == Cs) // Cs + Cd*C
        {
            k.sfactor = NV097_SET_BLEND_FUNC_SFACTOR_V_ONE;
            k.dfactor = factor;
        }
        else if (a == b || (a == Zero && b == Zero)) // D only
        {
            k.sfactor = d == Cs ? NV097_SET_BLEND_FUNC_SFACTOR_V_ONE : NV097_SET_BLEND_FUNC_SFACTOR_V_ZERO;
            k.dfactor = d == Cd ? NV097_SET_BLEND_FUNC_DFACTOR_V_ONE : NV097_SET_BLEND_FUNC_DFACTOR_V_ZERO;
        }
        else
        {
            k.blendEnable = 0; // unusual form: drawn opaque
        }
        (void)blendFactor;
    }

    DrawKey keyFor(const GSDrawState &state, const Texture *tex)
    {
        DrawKey k;
        k.texture = tex;
        k.program = tex ? pixelProgramFor(state) : 0;
        const uint64_t clamp = state.context.clamp;
        const uint32_t wrapU = (clamp & 3u) == 0u || (clamp & 3u) == 3u ? 1u : 3u; // repeat : clamp to edge
        const uint32_t wrapV = ((clamp >> 2) & 3u) == 0u || ((clamp >> 2) & 3u) == 3u ? 1u : 3u;
        k.address = wrapU | (wrapV << 8) | (3u << 16);
        k.filter = state.linearFilter ? 0x02022000u : 0x01012000u; // linear : nearest (min/mag)
        blendState(state, k);
        const uint64_t test = state.context.test;
        if (test & 1u)
        {
            static const uint32_t kFuncs[8] = {
                NV097_SET_ALPHA_FUNC_V_NEVER, NV097_SET_ALPHA_FUNC_V_ALWAYS, NV097_SET_ALPHA_FUNC_V_LESS,
                NV097_SET_ALPHA_FUNC_V_LEQUAL, NV097_SET_ALPHA_FUNC_V_EQUAL, NV097_SET_ALPHA_FUNC_V_GEQUAL,
                NV097_SET_ALPHA_FUNC_V_GREATER, NV097_SET_ALPHA_FUNC_V_NOTEQUAL};
            k.alphaTest = 1;
            k.alphaFunc = kFuncs[(test >> 1) & 7u];
            k.alphaRef = std::min<uint32_t>(uint32_t((test >> 4) & 0xFFu) * 2u, 255u);
        }
        // ZTST applies whatever ZTE says, as in the software renderer (the
        // game leaves ZTE clear while relying on the comparison).
        const uint32_t ztst = uint32_t((test >> 17) & 3u);
        k.depthTest = 1u;
        static const uint32_t kDepth[4] = {NV097_SET_DEPTH_FUNC_V_NEVER, NV097_SET_DEPTH_FUNC_V_ALWAYS,
                                           NV097_SET_DEPTH_FUNC_V_GEQUAL, NV097_SET_DEPTH_FUNC_V_GREATER};
        k.depthFunc = kDepth[ztst];
        k.depthMask = state.context.zbuf.zmask ? 0u : 1u;
        const uint32_t fbmsk = state.context.frame.fbmsk;
        const bool sixteen = state.context.frame.psm == GS_PSM_CT16 || state.context.frame.psm == GS_PSM_CT16S;
        const uint32_t rMask = sixteen ? 0x1Fu : 0xFFu, gMask = sixteen ? 0x3E0u : 0xFF00u,
                       bMask = sixteen ? 0x7C00u : 0xFF0000u, aMask = sixteen ? 0x8000u : 0xFF000000u;
        k.colorMask = ((fbmsk & rMask) != rMask ? NV097_SET_COLOR_MASK_RED_WRITE_ENABLE : 0u) |
                      ((fbmsk & gMask) != gMask ? NV097_SET_COLOR_MASK_GREEN_WRITE_ENABLE : 0u) |
                      ((fbmsk & bMask) != bMask ? NV097_SET_COLOR_MASK_BLUE_WRITE_ENABLE : 0u) |
                      ((fbmsk & aMask) != aMask ? NV097_SET_COLOR_MASK_ALPHA_WRITE_ENABLE : 0u);
        k.shade = state.prim.iip ? NV097_SET_SHADE_MODEL_SMOOTH : NV097_SET_SHADE_MODEL_FLAT;
        return k;
    }

    // Pushes only the registers that differ from the applied state.
    // Appends to an open push-buffer block (one block per batch: each
    // pb_end hands the GPU a chunk, and that hand-over was a fifth of a
    // frame's CPU time when done per state change).
    uint32_t *applyState(uint32_t *p, const DrawKey &k)
    {
        const bool all = !stateValid;
        const DrawKey &o = applied;
        if (k.program != currentProgram)
        {
            p = kPixelPrograms[k.program](p);
            // The untextured program leaves the texture stages as they were;
            // a stage still set to sample with no texture bound is invalid.
            if (k.program == 0)
                p = pb_push1(p, NV097_SET_SHADER_STAGE_PROGRAM, 0);
            currentProgram = k.program;
        }
        if (k.texture)
        {
            const Texture &t = *k.texture;
            if (all || o.texture != k.texture)
            {
                p = pb_push1(p, NV097_SET_TEXTURE_OFFSET, physical(t.texels));
                p = pb_push1(p, NV097_SET_TEXTURE_FORMAT,
                             0x0000002Au | (t.format << 8) | (1u << 16) |
                                 (log2u(t.gpuWidth) << 20) | (log2u(t.gpuHeight) << 24));
            }
            if (all || !o.texture)
                p = pb_push1(p, NV097_SET_TEXTURE_CONTROL0, NV097_SET_TEXTURE_CONTROL0_ENABLE);
            if (all || o.address != k.address || !o.texture)
                p = pb_push1(p, NV097_SET_TEXTURE_ADDRESS, k.address);
            if (all || o.filter != k.filter || !o.texture)
                p = pb_push1(p, NV097_SET_TEXTURE_FILTER, k.filter);
        }
        else if (all || o.texture)
            p = pb_push1(p, NV097_SET_TEXTURE_CONTROL0, 0);
#define TS_SET(field, reg)     if (all || o.field != k.field)         p = pb_push1(p, reg, k.field);
        TS_SET(blendEnable, NV097_SET_BLEND_ENABLE)
        TS_SET(sfactor, NV097_SET_BLEND_FUNC_SFACTOR)
        TS_SET(dfactor, NV097_SET_BLEND_FUNC_DFACTOR)
        TS_SET(equation, NV097_SET_BLEND_EQUATION)
        TS_SET(blendColor, NV097_SET_BLEND_COLOR)
        TS_SET(alphaTest, NV097_SET_ALPHA_TEST_ENABLE)
        if (all || o.alphaFunc != k.alphaFunc)
            p = pb_push1(p, NV097_SET_ALPHA_FUNC, k.alphaFunc ? k.alphaFunc : NV097_SET_ALPHA_FUNC_V_ALWAYS);
        TS_SET(alphaRef, NV097_SET_ALPHA_REF)
        TS_SET(depthTest, NV097_SET_DEPTH_TEST_ENABLE)
        TS_SET(depthFunc, NV097_SET_DEPTH_FUNC)
        TS_SET(depthMask, NV097_SET_DEPTH_MASK)
        TS_SET(colorMask, NV097_SET_COLOR_MASK)
        TS_SET(shade, NV097_SET_SHADE_MODEL)
#undef TS_SET
        applied = k;
        stateValid = true;
        return p;
    }

    // pbkit's push buffer is not a ring (and overflowing it corrupts
    // memory): when most of it is used, let the GPU catch up and restart at
    // its head. GPU state carries over.
    uint32_t *pushHead = nullptr;
    static constexpr size_t kPushLimitDwords = (96u * 1024u) / 4u;

    // Commands accumulate in an open block and go to the GPU in chunks of
    // kBlockDwords (closeBlock): each hand-over costs several emulated
    // register accesses, a sixth of a frame when done per batch.
    uint32_t *openBlock = nullptr, *cursor = nullptr;
    static constexpr size_t kBlockDwords = (16u * 1024u) / 4u;

    void closeBlock()
    {
        if (!openBlock)
            return;
        pb_end(cursor);
        openBlock = cursor = nullptr;
    }

    // Where the next commands go; restarts the push buffer first when most
    // of it is used (the GPU must have consumed it: a reset while it reads
    // corrupts).
    uint32_t *openCursor()
    {
        if (openBlock)
        {
            if (size_t(cursor - pushHead) < kPushLimitDwords)
                return cursor;
            closeBlock();
        }
        uint32_t *p = pb_begin();
        if (!pushHead || size_t(p - pushHead) >= kPushLimitDwords)
        {
            while (pb_busy())
            {
            }
            pb_reset();
            p = pushHead = pb_begin();
        }
        openBlock = cursor = p;
        return cursor;
    }

    void checkPushSpace()
    {
        closeBlock();
        openCursor();
    }

    void flushBatch()
    {
        g_nv2aStep = 60;
        if (batchCount == 0)
            return;
        uint32_t *p = openCursor();
        if (!stateValid || !(applied == batchKey))
            p = applyState(p, batchKey);
        p = pb_push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_TRIANGLES);
        for (uint32_t first = 0; first < batchCount; first += 256)
        {
            const uint32_t n = std::min<uint32_t>(batchCount - first, 256u);
            p = pb_push1(p, 0x40000000u | NV097_DRAW_ARRAYS, ((n - 1u) << 24) | (batchFirst + first));
        }
        p = pb_push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_END);
        cursor = p;
        if (size_t(cursor - openBlock) >= kBlockDwords)
            closeBlock();
        batchFirst += batchCount;
        batchCount = 0;
    }

    // Room for count more vertices in the current batch (waits for the GPU
    // to finish the frame's earlier vertices when the buffer is full).
    GpuVertex *reserve(const DrawKey &key, uint32_t count)
    {
        if (batchCount && !(key == batchKey))
            flushBatch();
        if (verticesUsed + count > kMaxVertices)
        {
            waitIdle();
            verticesUsed = 0;
            batchFirst = 0;
        }
        if (batchCount == 0)
        {
            batchKey = key;
            batchFirst = verticesUsed;
        }
        GpuVertex *out = vertices + verticesUsed;
        verticesUsed += count;
        batchCount += count;
        return out;
    }

    void submitScreen(const GSPrimitiveBatch &batch)
    {
        submitScreenVerts(batch.state, batch.vertices.data(), batch.vertexCount);
    }

    // A primitive from the GS front end (count = its vertices) or a whole
    // triangle strip from the native vertex pipeline (SubmitStrip).
    void submitScreenVerts(const GSDrawState &state, const GSVertex *verts, uint32_t count)
    {
        if (frameOpen && state.context.frame.fbp != frameFbp)
            finishFrame();
        if (!frameOpen)
            beginFrame(state);
        else if (screenVramNewer)
            loadScreenFromVram();

        const Texture *tex = state.prim.tme ? texture(state) : nullptr;
        const DrawKey key = keyFor(state, tex);
        const auto &ctx = state.context;
        const float ofx = float(ctx.xyoffset.ofx >> 4), ofy = float(ctx.xyoffset.ofy >> 4);
        const float sx = float(kScreenWidth) / float(frameFbw * 64u);
        const float sy = float(kScreenHeight) / float(frameHeight);
        const uint32_t zpsm = ctx.zbuf.psm;
        const float texW = tex ? float(tex->width) : 1.0f, texH = tex ? float(tex->height) : 1.0f;
        g_nv2aTextureStats.zpsm = zpsm;
        g_nv2aTextureStats.test = uint32_t(ctx.test >> 16) & 0xFu;
        g_nv2aTextureStats.zmask = ctx.zbuf.zmask ? 1u : 0u;
        if (((ctx.test >> 17) & 3u) >= 2u) // depth-compared draws only
            for (uint32_t i = 0; i < count && i < 3u; ++i)
            {
                const uint32_t z = uint32_t(std::min(verts[i].z, 4294967295.0));
                if (g_nv2aTextureStats.zmax == 0u || z > g_nv2aTextureStats.zmax) g_nv2aTextureStats.zmax = z;
                if (g_nv2aTextureStats.zmin == 0u || z < g_nv2aTextureStats.zmin) g_nv2aTextureStats.zmin = z;
            }

        auto emit = [&](GpuVertex &o, const GSVertex &v, const GSVertex &colorSource, float x, float y) {
            o.x = (x - ofx) * sx;
            o.y = (y - ofy) * sy;
            const float row = y - ofy + 1.0f;
            if (row > float(gpuRows))
                gpuRows = row >= float(frameHeight) ? frameHeight : uint32_t(row);
            o.z = depth24(v.z, zpsm);
            o.w = 1.0f;
            o.color = d3dColor(colorSource.r, colorSource.g, colorSource.b, colorSource.a);
            if (state.prim.fst)
            {
                o.s = float(v.u) / 16.0f / texW;
                o.t = float(v.v) / 16.0f / texH;
                o.q = 1.0f;
            }
            else
            {
                o.s = v.s;
                o.t = v.t;
                o.q = v.q != 0.0f ? v.q : 1.0f;
            }
            o.r = 0.0f;
        };

        switch (state.prim.type)
        {
        case GS_PRIM_TRIANGLE:
        case GS_PRIM_TRISTRIP:
        case GS_PRIM_TRIFAN:
        {
            if (count < 3)
                return;
            if (count == 3)
            {
                GpuVertex *out = reserve(key, 3);
                for (int i = 0; i < 3; ++i)
                {
                    const GSVertex &v = verts[i];
                    emit(out[i], v, state.prim.iip ? v : verts[2], v.x, v.y);
                }
                break;
            }
            // A whole strip: each vertex converted once, the triangles as a
            // list (flat shading takes each triangle's last vertex colour).
            GpuVertex strip[64];
            const uint32_t n = std::min<uint32_t>(count, 64u);
            for (uint32_t i = 0; i < n; ++i)
                emit(strip[i], verts[i], verts[i], verts[i].x, verts[i].y);
            for (uint32_t i = 2; i < n; ++i)
            {
                GpuVertex *out = reserve(key, 3);
                out[0] = strip[i - 2];
                out[1] = strip[i - 1];
                out[2] = strip[i];
                if (!state.prim.iip)
                    out[0].color = out[1].color = strip[i].color;
            }
            break;
        }
        case GS_PRIM_SPRITE:
        {
            if (count < 2)
                return;
            const GSVertex &a = verts[0], &b = verts[1];
            // Two triangles; colour, depth and fog come from the second vertex.
            GSVertex corners[4] = {a, a, a, a};
            corners[1].x = b.x; corners[1].u = b.u; corners[1].s = b.s;
            corners[2].x = b.x; corners[2].y = b.y; corners[2].u = b.u; corners[2].v = b.v; corners[2].s = b.s; corners[2].t = b.t;
            corners[3].y = b.y; corners[3].v = b.v; corners[3].t = b.t;
            for (GSVertex &c : corners)
            {
                c.z = b.z;
                c.q = b.q;
            }
            // Perspective-correct s/t use q per corner; sprites take the second's.
            corners[0].q = corners[1].q = corners[2].q = corners[3].q = b.q;
            static const int kOrder[6] = {0, 1, 2, 0, 2, 3};
            GpuVertex *out = reserve(key, 6);
            for (int i = 0; i < 6; ++i)
            {
                const GSVertex &c = corners[kOrder[i]];
                emit(out[i], c, b, c.x, c.y);
            }
            break;
        }
        default:
            return; // points and lines: not drawn on the GPU yet
        }
        screenGpuNewer = true;
    }

    // ----------------------------------------- screen <-> local memory
    // GPU pixels (back buffer, 640x480, R5G6B5 or X8R8G8B8) into the GS
    // frame buffer.
    void writeBackScreen()
    {
        g_nv2aStep = 40;
        if (!screenGpuNewer)
            return;
        waitIdle();
        const uint8_t *fb = frameOpen ? reinterpret_cast<const uint8_t *>(pb_back_buffer()) : reinterpret_cast<const uint8_t *>(lastShownBuffer());
        const uint32_t pitch = pb_back_buffer_pitch();
        const bool fb16 = XVideoGetMode().bpp == 16;
        const uint32_t width = frameFbw * 64u, height = frameHeight;
        const uint32_t rows = std::min<uint32_t>(std::max<uint32_t>(gpuRows, 1u), height);
        const bool sixteen = framePsm == GS_PSM_CT16 || framePsm == GS_PSM_CT16S;
        // One row at a time: a whole frame's worth (up to 1.1 MB) is more
        // than the Xbox can be sure to spare.
        std::vector<uint32_t> values(width);
        for (uint32_t y = 0; y < rows; ++y)
        {
            const uint8_t *row = fb + size_t(y * kScreenHeight / height) * pitch;
            for (uint32_t x = 0; x < width; ++x)
            {
                const uint32_t sx = x * kScreenWidth / width;
                uint32_t r, g, b, a;
                if (fb16)
                {
                    uint16_t v;
                    std::memcpy(&v, row + sx * 2u, 2);
                    r = (v >> 8) & 0xF8u; g = (v >> 3) & 0xFCu; b = (v << 3) & 0xF8u; a = 0xFFu;
                }
                else
                {
                    uint32_t v;
                    std::memcpy(&v, row + sx * 4u, 4);
                    r = (v >> 16) & 0xFFu; g = (v >> 8) & 0xFFu; b = v & 0xFFu; a = v >> 24;
                }
                values[x] = sixteen ? (r >> 3) | ((g >> 3) << 5) | ((b >> 3) << 10) | (a >= 0xFFu ? 0x8000u : 0u)
                                    : r | (g << 8) | (b << 16) | ((a / 2u) << 24);
            }
            cpu.WriteVramRect(framePsm, frameFbp * 32u, frameFbw, 0, y, width, 1, values.data());
        }
        cpu.TextureFlush();
        bumpPages(screenRange());
        screenGpuNewer = false;
    }

    // Local memory's frame buffer into the back buffer (the CPU drew or
    // uploaded into it: loading screens, movies, CPU-side draws).
    void loadScreenFromVram()
    {
        g_nv2aStep = 50;
        waitIdle();
        uint8_t *fb = reinterpret_cast<uint8_t *>(pb_back_buffer());
        const uint32_t pitch = pb_back_buffer_pitch();
        const uint32_t width = frameFbw * 64u, height = frameHeight;
        const bool sixteen = framePsm == GS_PSM_CT16 || framePsm == GS_PSM_CT16S;
        const bool fb16 = XVideoGetMode().bpp == 16;
        for (uint32_t y = 0; y < kScreenHeight; ++y)
        {
            uint32_t *row = reinterpret_cast<uint32_t *>(fb + size_t(y) * pitch);
            const uint32_t sy = y * height / kScreenHeight;
            for (uint32_t x = 0; x < kScreenWidth; ++x)
            {
                const uint32_t v = cpu.ReadVram(framePsm, frameFbp * 32u, frameFbw, x * width / kScreenWidth, sy);
                uint32_t r, g, b, a;
                if (sixteen)
                {
                    r = (v & 0x1Fu) << 3; g = ((v >> 5) & 0x1Fu) << 3; b = ((v >> 10) & 0x1Fu) << 3;
                    a = (v & 0x8000u) ? 0xFFu : 0u;
                }
                else
                {
                    r = v & 0xFFu; g = (v >> 8) & 0xFFu; b = (v >> 16) & 0xFFu;
                    a = std::min<uint32_t>((v >> 24) * 2u, 255u);
                }
                if (fb16)
                {
                    const uint16_t out = uint16_t(((r & 0xF8u) << 8) | ((g & 0xFCu) << 3) | (b >> 3));
                    std::memcpy(reinterpret_cast<uint8_t *>(row) + x * 2u, &out, 2);
                }
                else
                    row[x] = (a << 24) | (r << 16) | (g << 8) | b;
            }
        }
        screenVramNewer = false;
        screenGpuNewer = false;
    }

    DWORD *shownBuffer = nullptr;
    const uint32_t *lastShownBuffer() const
    {
        return reinterpret_cast<const uint32_t *>(shownBuffer ? shownBuffer : pb_back_buffer());
    }

    // A CPU-side change to local memory range: textures revalidate, and a
    // change to the screen buffer must reach the GPU.
    void noteCpuWrite(const GSCpuBackend::VramRange &range)
    {
        bumpPages(range);
        if (overlaps(range, screenRange()))
        {
            if (screenGpuNewer && overlaps(range, gpuRange()))
            {
                ++g_nv2aTextureStats.wbCpuWrite;
                writeBackScreen(); // keep the GPU's pixels the CPU did not touch
            }
            screenVramNewer = true;
        }
    }

    GSTransferCommand transfer{};
};

// ------------------------------------------------------------------------
std::unique_ptr<GSNv2aBackend> GSNv2aBackend::Create()
{
    // 16-bit colour and depth, like the game's own buffers: a 640x480 screen
    // buffer is 0.6 MB instead of 1.2, and there are two plus the depth buffer.
    XVideoSetMode(640, 480, 16, REFRESH_DEFAULT);
    pb_set_color_format(NV097_SET_SURFACE_FORMAT_COLOR_LE_R5G6B5, false);
    pb_ts_set_depth_format(NV097_SET_SURFACE_FORMAT_ZETA_Z24S8);
    pb_size(128u * 1024u);
    if (pb_init() != 0)
    {
        debugPrint("pbkit: pb_init failed\n");
        return nullptr;
    }
    std::unique_ptr<GSNv2aBackend> backend(new GSNv2aBackend());
    backend->m->vertices = static_cast<GpuVertex *>(allocGpu(kMaxVertices * sizeof(GpuVertex)));
    if (!backend->m->vertices)
    {
        pb_kill();
        return nullptr;
    }
    pb_show_front_screen();
    // nxdk's own framebuffer (the start-up text screen) is no longer shown:
    // free it (1.2 MB). Nothing may print on screen afterwards (XVideoSetFB
    // rejects pbkit's write-combined addresses, so it cannot be repointed);
    // only a fatal error message would still write to it.
    xboxLogToScreen(false);
    if (unsigned char *old = XVideoGetFB())
        MmFreeContiguousMemory(old);
    xboxGpuOwnsDisplay(true);
    return backend;
}

GSNv2aBackend::GSNv2aBackend() : m(std::make_unique<Impl>()) {}
GSNv2aBackend::~GSNv2aBackend() = default;

void GSNv2aBackend::Initialize(uint8_t *vram, uint32_t vramSize)
{
    m->vram = vram;
    m->vramSize = vramSize;
    m->cpu.Initialize(vram, vramSize);
}

void GSNv2aBackend::Reset()
{
    m->cpu.Reset();
    m->bumpPages({0, UINT64_MAX});
}

void GSNv2aBackend::Submit(const GSPrimitiveBatch &batch)
{
        g_nv2aStep = 80;
    if (m->isScreenTarget(batch.state))
    {
        m->submitScreen(batch);
        return;
    }
    // Off-screen target: the CPU renderer draws it into local memory.
    const GSCpuBackend::VramRange textureRange = GSCpuBackend::TextureRange(batch.state);
    if (batch.state.prim.tme && m->screenGpuNewer && overlaps(textureRange, m->gpuRange()))
    {
        ++g_nv2aTextureStats.wbDraw;
        m->writeBackScreen();
    }
    m->cpu.Submit(batch);
    m->noteCpuWrite(GSCpuBackend::FrameRange(batch.state));
}

bool GSNv2aBackend::SubmitStrip(const GSDrawState &state, const GSVertex *vertices, uint32_t count)
{
    if (state.prim.type != GS_PRIM_TRISTRIP || count > 64u || !m->isScreenTarget(state))
        return false;
    m->submitScreenVerts(state, vertices, count);
    return true;
}

void GSNv2aBackend::LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut)
{
    if (m->screenGpuNewer && overlaps(GSCpuBackend::ClutRange(tex0), m->gpuRange()))
    {
        ++g_nv2aTextureStats.wbClut;
        m->writeBackScreen();
    }
    m->cpu.LoadClut(tex0, texclut);
    m->refreshClutHash();
}

void GSNv2aBackend::BeginTransfer(const GSTransferCommand &command)
{
    m->transfer = command;
    const GSBitBltBuf &buf = command.bitbltbuf;
    if (command.direction == 1u || command.direction == 2u)
    {
        // Reads local memory: the GPU's screen pixels must be there.
        const auto source = frameRangeRows(buf.spsm, buf.sbp / 32u, buf.sbw,
                                           uint32_t(command.trxpos.ssay) + command.trxreg.rrh + 1u);
        if (m->screenGpuNewer && overlaps(source, m->gpuRange()))
        {
            ++g_nv2aTextureStats.wbTransfer;
            m->writeBackScreen();
        }
    }
    m->cpu.BeginTransfer(command);
    if (command.direction == 2u)
        m->noteCpuWrite(frameRangeRows(buf.dpsm, buf.dbp / 32u, buf.dbw,
                                       uint32_t(command.trxpos.dsay) + command.trxreg.rrh + 1u));
}

void GSNv2aBackend::UploadImage(const uint8_t *data, uint32_t sizeBytes)
{
    m->cpu.UploadImage(data, sizeBytes);
    const GSTransferCommand &c = m->transfer;
    const auto dest = frameRangeRows(c.bitbltbuf.dpsm, c.bitbltbuf.dbp / 32u, c.bitbltbuf.dbw,
                                     uint32_t(c.trxpos.dsay) + c.trxreg.rrh + 1u);
    m->noteCpuWrite({dest.begin, dest.end == UINT64_MAX ? UINT64_MAX : dest.end + 2u * kPageBytes});
}

void GSNv2aBackend::Flush() { m->flushBatch(); }
void GSNv2aBackend::TextureFlush() { m->cpu.TextureFlush(); }
void GSNv2aBackend::Sync(GSSyncReason reason) { m->cpu.Sync(reason); }

PresentationFrame GSNv2aBackend::Present(const GSPresentationRequest &request)
{
        g_nv2aStep = 70;
    const uint32_t fbp = uint32_t(request.dispfb1 & 0x1FFu);
    if (fbp != m->displayFbp[0] && fbp != m->displayFbp[1])
    {
        m->displayFbp[1] = m->displayFbp[0];
        m->displayFbp[0] = fbp;
    }
    if (m->frameOpen)
        m->finishFrame();
    else if (m->screenVramNewer)
    {
        // Nothing drawn on the GPU since the CPU changed the screen (loading
        // pictures, movies): show local memory's frame.
        GSDrawState state{};
        state.context.frame.fbp = fbp;
        state.context.frame.fbw = uint32_t((request.dispfb1 >> 9) & 0x3Fu);
        state.context.frame.psm = uint8_t((request.dispfb1 >> 15) & 0x1Fu);
        state.context.scissor.y1 = uint16_t(((request.display1 >> 44) & 0x7FFu));
        m->beginFrame(state);
        m->finishFrame();
    }
    // The picture is on screen already: the host gets no pixels (and keeps
    // drawing nothing; xboxGpuOwnsDisplay).
    return {};
}

bool GSNv2aBackend::ClearFramebuffer(const GSContext &context, uint32_t rgba)
{
    GSDrawState state{};
    state.context = context;
    const bool result = m->cpu.ClearFramebuffer(context, rgba);
    m->noteCpuWrite(GSCpuBackend::FrameRange(state));
    return result;
}

uint32_t GSNv2aBackend::ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes)
{
    return m->cpu.ConsumeLocalToHostBytes(dst, maxBytes);
}

uint32_t GSNv2aBackend::ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const
{
    return m->cpu.ReadVram(psm, base, bw, x, y);
}

void GSNv2aBackend::WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value)
{
    m->cpu.WriteVram(psm, base, bw, x, y, value);
    m->noteCpuWrite({0, UINT64_MAX});
}

void GSNv2aBackend::SnapshotVram(std::vector<uint8_t> &out) const { m->cpu.SnapshotVram(out); }
GSTransferSnapshot GSNv2aBackend::GetTransferSnapshot() const { return m->cpu.GetTransferSnapshot(); }
