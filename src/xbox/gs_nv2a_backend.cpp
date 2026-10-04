// GS renderer for the original Xbox (NV2A via pbkit). See gs_nv2a_backend.h.
#include "gs_nv2a_backend.h"
#include "xbox_texture_pack.h"
#include "runtime/gs/gs_texture_hash.h"

#include <hal/debug.h>
#include <hal/video.h>
#include <pbkit/pbkit.h>
#include <pbkit/pbkit_dma.h>
#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>

#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <list>
#include <set>
#include <vector>

void xboxGpuOwnsDisplay(bool owns);
void xboxLogToScreen(bool enabled);
extern "C" void pb_ts_set_depth_format(unsigned int fmt); // src/xbox/pbkit/pbkit_ts.c
extern "C" unsigned int pb_ts_end_count;                  // pb_end calls so far (pbkit_ts.c)

namespace
{
    constexpr uint32_t kMaxGpuAddress = 0x03FFAFFFu;
    constexpr uint64_t kPageBytes = 8192u;
    constexpr uint32_t kPageCount = 512u;
    constexpr uint32_t kScreenWidth = 640u, kScreenHeight = 480u;
    constexpr uint32_t kDisplayRows = 448u; // the game's displayed frame height
    constexpr uint32_t kMaxVertices = 8192u;             // per batch run (288 KB)
    constexpr size_t kTextureBudget = 1024u * 1024u;     // decoded textures kept on the GPU
    // pbkit's push buffer (pb_size; pb_init allocates 8 KB more). A heavy
    // match frame writes about 280 KB: it fits whole, so the GPU is not
    // drained mid-frame to restart the buffer (openCursor).
    constexpr uint32_t kPushBufferBytes = 512u * 1024u;

    // The prebuilt texture pack (xbox_texture_pack.h) and the GPU memory its
    // entries are read into. The world textures of one match (the PC
    // port's dump of a session) come to about 1.14 MB with mip chains.
    constexpr const char *kTexturePackPath = "D:\\textures.xtp";
    constexpr uint32_t kTexturePoolBytes = 1280u * 1024u;
    // While the pack carries the world textures, the runtime path keeps only
    // what the pack lacks (front-end art, screen copies, palettes made at
    // run time), and its budget is lowered to pay for part of the pool. Not
    // before the pack has shown it: the runtime path's own textures must
    // stay under half the lower budget for kPackTrialFrames frames in a row
    // (a pack whose keys do not match, or a full pool, leaves the world on
    // the runtime path, which the lower budget would turn into one-frame
    // textures and GPU waits). One frame over three quarters of it restores
    // the full budget at once.
    constexpr size_t kTextureBudgetWithPack = 512u * 1024u;
    constexpr uint32_t kPackTrialFrames = 300u;
    // A pack texture that found no room in the pool is drawn through the
    // runtime path; it tries the pool again after this many frames (by then
    // the entries it would displace have been idle long enough to go).
    constexpr uint32_t kPackRetryFrames = 30u;

    uint32_t physical(const void *p) { return uint32_t(reinterpret_cast<uintptr_t>(p)) & 0x03FFFFFFu; }

    void *allocGpu(size_t bytes)
    {
        return MmAllocateContiguousMemoryEx(bytes, 0, kMaxGpuAddress, 0, PAGE_READWRITE | PAGE_WRITECOMBINE);
    }

    // Push-buffer methods written in place. pbkit's pb_push1 and pb_push are
    // out of line and each goes through pb_push_to: two or three calls per
    // register write, thousands a frame. Same words as pbkit's EncodeMethod
    // (pbkit_ts.c): parameter count, subchannel (3D), method.
    constexpr uint32_t methodHeader(uint32_t method, uint32_t count)
    {
        return (count << 18) + (uint32_t(SUBCH_3D) << 13) + method;
    }
    // The header of a method whose count parameters the caller writes next.
    __attribute__((always_inline)) inline uint32_t *pushMethod(uint32_t *p, uint32_t method, uint32_t count)
    {
        *p = methodHeader(method, count);
        return p + 1;
    }
    __attribute__((always_inline)) inline uint32_t *push1(uint32_t *p, uint32_t method, uint32_t value)
    {
        p[0] = methodHeader(method, 1u);
        p[1] = value;
        return p + 2;
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
    const uint32_t kXfPlain[] = {
#include "gs_xf_plain.inl"
    };
    const uint32_t kXfLit[] = {
#include "gs_xf_lit.inl"
    };
    const uint32_t kXfEnv[] = {
#include "gs_xf_env.inl"
    };
    const uint32_t kXfSkin[] = {
#include "gs_xf_skin.inl"
    };
    struct VertexProgram
    {
        const uint32_t *words;
        uint32_t count;
    };
    // Vertex mode 0: pass-through (screen-space vertices); 1 + variant: the
    // native pipeline's transform programs (GSXfConstants::Variant).
    const VertexProgram kVertexPrograms[5] = {
        {kVertexProgram, sizeof(kVertexProgram) / 4}, {kXfPlain, sizeof(kXfPlain) / 4},
        {kXfLit, sizeof(kXfLit) / 4},                 {kXfEnv, sizeof(kXfEnv) / 4},
        {kXfSkin, sizeof(kXfSkin) / 4}};
    constexpr uint32_t kXfConstantRegs = 35;   // k[0..33] and the compiler's literals at c[34]
    constexpr uint32_t kConstantBase = 96;     // vp20's c[0] in the NV2A's constant file
    constexpr uint32_t kMaxXfVertices = 8192u; // 352 KB

#define MASK(mask, val) (((val) << (__builtin_ffs(mask) - 1)) & (mask))
    // The generated programs call pb_push1 and advance p themselves: the
    // inline encoder in its place (same words).
#define pb_push1(p, method, value) push1(p, method, value)
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
    uint32_t *pushModulateTccUnit(uint32_t *p)
    {
#include "gs_ps_modulate_tcc_unit.inl"
        return p;
    }
    uint32_t *pushDecalTccUnit(uint32_t *p)
    {
#include "gs_ps_decal_tcc_unit.inl"
        return p;
    }
    uint32_t *pushHighlightTccUnit(uint32_t *p)
    {
#include "gs_ps_highlight_tcc_unit.inl"
        return p;
    }
#undef pb_push1
#undef MASK

    // Pixel program variants (index = shader key).
    uint32_t *(*const kPixelPrograms[])(uint32_t *) = {
        pushUntextured, pushModulate, pushModulateTcc, pushDecal, pushDecalTcc, pushHighlight, pushHighlightTcc,
        pushModulateTccUnit, pushDecalTccUnit, pushHighlightTccUnit,
    };

    // unitAlpha: the texture's stored alpha 1.0 is GS 0x80 (Texture::unitAlpha),
    // so its TCC programs leave out the alpha's x2.
    int pixelProgramFor(const GSDrawState &state, bool unitAlpha)
    {
        if (!state.prim.tme)
            return 0;
        const bool tcc = state.context.tex0.tcc != 0;
        switch (state.context.tex0.tfx)
        {
        case 0: return tcc ? (unitAlpha ? 7 : 2) : 1;
        case 1: return tcc ? (unitAlpha ? 8 : 4) : 3;
        default: return tcc ? (unitAlpha ? 9 : 6) : 5;
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

    // A page-aligned frame's exact pages (GSCpuBackend::FrameRange adds a
    // spare page for unaligned bases; for the screen that spare page is the
    // one after a 640x448 16-bit frame, where the game keeps CLUTs).
    GSCpuBackend::VramRange frameRangeExact(uint32_t psm, uint32_t fbp, uint32_t fbw, uint32_t rows)
    {
        uint32_t pw = 64, ph = 32;
        if (psm == GS_PSM_CT16 || psm == GS_PSM_CT16S || psm == GS_PSM_Z16 || psm == GS_PSM_Z16S)
            ph = 64;
        else if (psm != GS_PSM_CT32 && psm != GS_PSM_CT24 && psm != GS_PSM_Z32 && psm != GS_PSM_Z24)
            return frameRangeRows(psm, fbp, fbw, rows);
        const uint64_t begin = uint64_t(fbp) * 8192u;
        const uint64_t pages = uint64_t((std::max<uint32_t>(rows, 1u) + ph - 1u) / ph) * ((uint64_t(std::max<uint32_t>(fbw, 1u)) * 64u) / pw);
        return {begin, begin + pages * 8192u};
    }

    inline uint64_t cycles()
    {
        uint32_t lo, hi;
        __asm__ __volatile__("rdtsc" : "=a"(lo), "=d"(hi));
        return (uint64_t(hi) << 32) | lo;
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

    // GS depth to the 24-bit buffer: the ZBUF format's range spread over it
    // (the GS clamps z to the format's maximum). The game's 3D z is 16-bit;
    // dividing it down would leave 256 depth levels.
    float depthScale(uint32_t zpsm)
    {
        switch (zpsm)
        {
        case GS_PSM_Z16:
        case GS_PSM_Z16S: return 256.0f;
        case GS_PSM_Z24: return 1.0f;
        default: return 1.0f / 256.0f;
        }
    }
    float depth24(double z, uint32_t zpsm)
    {
        switch (zpsm)
        {
        case GS_PSM_Z16:
        case GS_PSM_Z16S: return float(std::min(z, 65535.0) * 256.0);
        case GS_PSM_Z24: return float(std::min(z, 16777215.0));
        default: return float(std::min(z / 256.0, 16777215.0));
        }
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
        // Displayed rows only: the game uploads CLUTs below row 448 of the
        // frame region; those uploads must not reload the whole screen.
        return frameRangeExact(framePsm, frameFbp, frameFbw, std::min<uint32_t>(frameHeight, kDisplayRows));
    }

    // Rows the GPU has drawn this frame. Reads of local memory below them
    // (the game keeps its CLUTs under the visible 448 rows, inside the
    // 512-row frame region) need no read-back of the GPU's pixels.
    uint32_t gpuRows = 0;
    GSCpuBackend::VramRange gpuRange() const
    {
        return frameRangeExact(framePsm, frameFbp, frameFbw, std::max<uint32_t>(gpuRows, 1u));
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
        bool unitAlpha = false; // one alpha bit whose 1.0 is GS 0x80 (selects the pixel program)
        // Texture pack: the entry with this texture's key (-1: none). Pooled
        // textures are the pack's copy in its pool (bytes 0: the pack owns
        // the memory); others are drawn from the runtime path while the
        // entry is not in the pool (on its way from the disc, or no room for
        // it), and try again from packRetryFrame on.
        int packEntry = -1;
        bool pooled = false;
        bool forceLinear = false; // HD replacement: always filtered, as on the PC
        uint32_t levels = 1;      // mip levels (pack textures only have more than one)
        uint32_t packRetryFrame = 0;
    };
    uint32_t frameNumber = 1, frameTextures = 0, frameTextureBytes = 0, frameFills = 0;
    std::set<uint64_t> frameKeys, lastFrameKeys; // address/size keys drawn this and last frame (statistics)
    size_t retiredBytes = 0;
    static constexpr size_t kRetiredLimit = 768u * 1024u; // beyond this, wait and free at once
    size_t textureBudget = kTextureBudget; // lower while the pack carries the world (kTextureBudgetWithPack)
    uint32_t packQuietFrames = 0;          // frames in a row the runtime path stayed under half of that
    // A list: draw keys hold pointers into it across insertions and removals.
    std::list<Texture> textures;
    std::list<Texture> retired; // dropped textures the GPU may still read; freed at the frame's end
    size_t textureBytes = 0;
    uint64_t textureTick = 0;
    uint64_t clutHash = 0;
    std::vector<uint32_t> decoded;
    std::vector<uint8_t> swizzled;
    std::vector<uint32_t> spreadU, spreadV;

    void refreshClutHash() { clutHash = cpu.ClutHash(); }

    // Full CLUT loads (8-bit indices, a 32-bit CSM1 palette from CSA 0: all
    // 512 halfwords replaced) cached by source address and format and the
    // version of its GS-memory pages. The game loads ~590 palettes a frame,
    // a few dozen distinct; a hit skips the row reads, the unswizzle and
    // the rehash.
    struct Palette
    {
        uint32_t cbp = UINT32_MAX, cpsm = 0;
        uint64_t versions = 0, hash = 0;
        std::array<uint16_t, 512> clut;
    };
    static constexpr uint32_t kPalettes = 128u; // direct-mapped by address
    std::vector<Palette> palettes;              // allocated at the first load
    static bool fullClutLoad(const GSTex0Reg &t)
    {
        return (t.psm == GS_PSM_T8 || t.psm == GS_PSM_T8H) && t.csm == 0u &&
               (t.cpsm == GS_PSM_CT32 || t.cpsm == GS_PSM_CT24) && (t.csa & 0x0Fu) == 0u;
    }

    // The GS's CLUT-load decision (TEX0/TEX2 CLD), mirrored so that only
    // real loads cost a read-back check, a lock and a rehash.
    uint32_t clutCbp[2] = {UINT32_MAX, UINT32_MAX};
    bool clutLoads(const GSTex0Reg &t)
    {
        if (!isIndexed(t.psm))
            return false;
        switch (t.cld)
        {
        case 1u: return true;
        case 2u: clutCbp[0] = t.cbp; return true;
        case 3u: clutCbp[1] = t.cbp; return true;
        case 4u:
            if (clutCbp[0] == t.cbp)
                return false;
            clutCbp[0] = t.cbp;
            return true;
        case 5u:
            if (clutCbp[1] == t.cbp)
                return false;
            clutCbp[1] = t.cbp;
            return true;
        default: return false;
        }
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
        if (it->pooled)
        {
            // The texels belong to the pack, which keeps them while a frame
            // in flight may read them: only the record goes.
            textures.erase(it);
            return;
        }
        textureBytes -= it->bytes;
        retiredBytes += it->bytes;
        retired.splice(retired.end(), textures, it);
        if (retiredBytes > kRetiredLimit)
        {
            ++g_nv2aTextureStats.waitRetire;
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
            if (!t.pooled) // pool memory is the pack's
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
                if (t.packEntry >= 0 && !t.pooled && frameNumber >= t.packRetryFrame)
                    if (Texture *pooled = retryPack(it))
                        return pooled;
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
        cpu.DecodeTexture(state, decoded);
        const bool whole = decoded.size() >= size_t(w) * h;
        if (!whole)
            decoded.assign(size_t(w) * h, 0u);
        // The pack's copy when it has this texture (render targets and
        // screen copies are never looked up, as on the PC).
        if (whole && pack.enabled() && !renderTarget(range))
            if (Texture *pooled = packTexture(t))
                return pooled;
        encodeTexture(t, state); // sets format and bytes; the texels wait in `swizzled`
        // Room in the cache: textures not used in this or the last frame
        // go first. When a frame's textures exceed the budget the cache
        // keeps what it has (LRU would cycle the whole set every frame)
        // and the newcomer lives in a one-frame slot (the retired list).
        // Pack textures cost the cache nothing and stay.
        bool cached = true;
        while (textureBytes + t.bytes > textureBudget)
        {
            auto oldest = textures.end();
            for (auto it = textures.begin(); it != textures.end(); ++it)
                if (!it->pooled && it->lastFrame + 1u < frameNumber && (oldest == textures.end() || it->lastUse < oldest->lastUse))
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
            ++g_nv2aTextureStats.waitRetire;
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
        if (t.pooled)
            pack.touch(t.packEntry, frameNumber);
    }

    // ------------------------------------------------------ texture pack
    XboxTexturePack pack;
    uint8_t *packPool = nullptr;
    std::vector<int> packEvicted;

    // Only when Create gives up on the GPU: the software renderer gets the
    // pool's memory back (once the loader has stopped writing into it).
    ~Impl()
    {
        pack.close();
        if (packPool)
            MmFreeContiguousMemory(packPool);
    }

    // Opens the pack and takes its pool: at start-up, while 1.25 MB of
    // contiguous memory is still easy to find. Without the file (or the
    // memory, or the loader) everything runs as before.
    void openTexturePack()
    {
        if (!pack.open(kTexturePackPath))
            return;
        packPool = static_cast<uint8_t *>(allocGpu(kTexturePoolBytes));
        if (!packPool)
        {
            std::cout << "[TS:xbox] texture pack: no memory for its pool, not used" << std::endl;
            pack.close();
            return;
        }
        if (!pack.attachPool(packPool, kTexturePoolBytes))
        {
            MmFreeContiguousMemory(packPool);
            packPool = nullptr;
        }
    }

    // Once a frame: the loader's finished reads, the counters, and the
    // runtime path's budget (kTextureBudgetWithPack). frameTextureBytes is
    // what the runtime path drew this frame (pack textures count nothing).
    void packFrameEnd()
    {
        if (!pack.enabled())
            return;
        pack.poll();
        updatePackStats();
        packQuietFrames = frameTextureBytes > kTextureBudgetWithPack / 2u ? 0u : std::min(packQuietFrames + 1u, kPackTrialFrames);
        if (frameTextureBytes > kTextureBudgetWithPack * 3u / 4u)
            textureBudget = kTextureBudget;
        else if (packQuietFrames >= kPackTrialFrames)
            textureBudget = kTextureBudgetWithPack;
        g_nv2aTextureStats.textureBudgetKB = uint32_t(textureBudget / 1024u);
    }

    void updatePackStats()
    {
        const XboxTexturePack::Stats &s = pack.stats();
        g_nv2aTextureStats.packLoads = s.loads;
        g_nv2aTextureStats.packEvictions = s.evictions;
        g_nv2aTextureStats.packMostVictims = s.mostVictims;
        g_nv2aTextureStats.packBusy = s.busy;
        g_nv2aTextureStats.packPoolBytes = s.usedBytes;
        g_nv2aTextureStats.packLoadMs = uint32_t(s.loadMicroseconds / 1000u);
        g_nv2aTextureStats.packLongestMs = (s.longestMicroseconds + 999u) / 1000u;
    }

    // Records still pointing at entries the pack evicted.
    void dropEvicted()
    {
        for (int entry : packEvicted)
            for (auto it = textures.begin(); it != textures.end();)
            {
                const auto next = std::next(it);
                if (it->pooled && it->packEntry == entry)
                    retireTexture(it);
                it = next;
            }
        packEvicted.clear();
    }

    // Makes t the pack's copy of entry `index` when that is in the pool.
    // Otherwise t keeps the runtime path for now and remembers when to try
    // again: next frame while the entry is on its way from the disc (or the
    // loader is busy), later when the pool had no room, never when the
    // entry cannot be read.
    bool usePack(Texture &t, int index)
    {
        XboxTexturePack::Status status = XboxTexturePack::kUnavailable;
        uint8_t *texels = pack.acquire(index, frameNumber, packEvicted, status);
        if (!packEvicted.empty())
            dropEvicted();
        if (!texels)
        {
            switch (status)
            {
            case XboxTexturePack::kLoading:
            case XboxTexturePack::kBusy:
                ++g_nv2aTextureStats.packWaits;
                t.packEntry = index;
                t.packRetryFrame = frameNumber + 1u;
                break;
            case XboxTexturePack::kNoRoom:
                ++g_nv2aTextureStats.packNoRoom;
                t.packEntry = index;
                t.packRetryFrame = frameNumber + kPackRetryFrames;
                break;
            default:
                t.packEntry = -1;
                break;
            }
            return false;
        }
        static const uint32_t kFormats[4] = {
            NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT1_A1R5G5B5, NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT45_A8R8G8B8,
            NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A8R8G8B8, NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A1R5G5B5};
        const XboxTexturePack::Entry &e = pack.entry(index);
        t.texels = texels;
        t.format = kFormats[e.format]; // checked when the pack was opened
        t.gpuWidth = e.width;
        t.gpuHeight = e.height;
        t.levels = e.levels;
        t.unitAlpha = (e.flags & XboxTexturePack::kUnitAlpha) != 0u;
        t.forceLinear = (e.flags & XboxTexturePack::kReplacement) != 0u;
        t.bytes = 0;
        t.packEntry = index;
        t.pooled = true;
        return true;
    }

    // A cache miss whose decoded texels (in `decoded`) may be in the pack.
    // Null when they are not, or not in the pool yet: then t remembers the
    // entry and the caller encodes the texture as before.
    Texture *packTexture(Texture &t)
    {
        const int index = pack.find(gs_texture_hash::hash(decoded.data(), t.width, t.height));
        if (index < 0)
        {
            ++g_nv2aTextureStats.packMisses;
            return nullptr;
        }
        ++g_nv2aTextureStats.packHits;
        if (!usePack(t, index))
            return nullptr;
        textures.push_back(t);
        noteUse(textures.back());
        return &textures.back();
    }

    // A texture drawn from the runtime path while its pack entry was not in
    // the pool tries again; once it is, the pack's copy replaces it (its
    // own memory retires as usual).
    Texture *retryPack(std::list<Texture>::iterator it)
    {
        Texture t = *it;
        if (!usePack(t, it->packEntry))
        {
            it->packEntry = t.packEntry;
            it->packRetryFrame = t.packRetryFrame;
            return nullptr;
        }
        retireTexture(it);
        textures.push_back(t);
        noteUse(textures.back());
        return &textures.back();
    }

    // Render targets and screen copies: GS pages the GPU draws (the
    // display buffers) or that off-screen draws and copies of either wrote,
    // until an upload or a copy of texels replaces them. Their contents are
    // never in the pack, and hashing them would cost time for nothing.
    std::bitset<kPageCount> targetPages;
    GSCpuBackend::VramRange lastTargetMark{}; // consecutive off-screen draws share a target

    void markTargetPages(const GSCpuBackend::VramRange &range, bool target)
    {
        if (range.end == UINT64_MAX || (target && range.begin == lastTargetMark.begin && range.end == lastTargetMark.end))
            return;
        lastTargetMark = target ? range : GSCpuBackend::VramRange{};
        for (uint64_t p = range.begin / kPageBytes; p < (range.end + kPageBytes - 1) / kPageBytes && p < kPageCount; ++p)
            targetPages[p] = target;
    }

    bool renderTarget(const GSCpuBackend::VramRange &range) const
    {
        if (range.end == UINT64_MAX || range.end > kPageCount * kPageBytes)
            return true;
        const uint32_t rows = std::min<uint32_t>(frameHeight, kDisplayRows);
        for (const uint32_t fbp : {displayFbp[0], displayFbp[1], frameFbp})
            if (fbp != UINT32_MAX && overlaps(range, frameRangeExact(framePsm, fbp, frameFbw, rows)))
                return true;
        for (uint64_t p = range.begin / kPageBytes; p < (range.end + kPageBytes - 1) / kPageBytes; ++p)
            if (targetPages[p])
                return true;
        return false;
    }

    // Encodes the decoded GS texture (`decoded`: CLUT and TEXA applied) into
    // `swizzled`, the layout the NV2A samples with wrapping: DXT1/DXT5 from
    // 8x8 up, else A1R5G5B5 when that loses nothing (16-bit sources,
    // one-bit alpha as below), else A8R8G8B8.
    void encodeTexture(Texture &t, const GSDrawState &state)
    {
        // 2D draws (sprites: HUD, text) keep their texels; the halving is
        // for the world's triangles.
        const bool allowHalf = state.prim.type != GS_PRIM_SPRITE;
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
        // One alpha bit (texel alpha 0 or not) is enough when every alpha is
        // 0 or the game's opaque 0x7F/0x80: stored 1.0 then stands for 0x80
        // and the unit-alpha pixel programs read it so (0x7F comes out
        // 1/128 high). Alpha only 0 or at least 0x80 also fits one bit, read
        // through the x2 programs as 2.0 (exact for 0xFF; DECAL and
        // HIGHLIGHT clamp any of them to 1).
        bool unitAlpha = true, highAlpha = true, fits16 = true;
        for (size_t i = 0; i < count && (unitAlpha || highAlpha); ++i)
        {
            const uint32_t c = decoded[i], a = c >> 24;
            unitAlpha = unitAlpha && (a == 0u || a == 0x7Fu || a == 0x80u);
            highAlpha = highAlpha && (a == 0u || a >= 0x80u);
            if (c & 0x00070707u)
                fits16 = false;
        }
        const bool binaryAlpha = unitAlpha || highAlpha;
        // Most textures: DXT1 (4 bits a texel) so the cache holds a frame's
        // worth; the alpha bit is the 3-colour mode's transparent entry.
        if (width >= 8u && height >= 8u)
        {
            // Soft alpha: DXT5 (8 bits a texel, alpha interpolated per block).
            t.format = binaryAlpha ? NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT1_A1R5G5B5
                                   : NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT45_A8R8G8B8;
            t.bytes = binaryAlpha ? count / 2u : count;
            t.unitAlpha = unitAlpha;
            swizzled.resize(t.bytes);
            encodeDxt(width, height, !binaryAlpha, swizzled.data());
            return;
        }
        fits16 = fits16 && binaryAlpha;
        t.unitAlpha = fits16 && unitAlpha;
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
                    dst[spreadU[u] | rowBits] = uint16_t(((c >> 24) ? 0x8000u : 0u) | ((c & 0xF8u) << 7) |
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

    // Nearest 5/6-bit levels (truncation darkened the end points by up to
    // 7 of 255).
    static uint16_t to565(int r, int g, int b)
    {
        return uint16_t((((r * 31 + 127) / 255) << 11) | (((g * 63 + 127) / 255) << 5) | ((b * 31 + 127) / 255));
    }
    static void from565(uint16_t v, int &r, int &g, int &b)
    {
        r = (v >> 11) & 31; r = (r << 3) | (r >> 2);
        g = (v >> 5) & 63;  g = (g << 2) | (g >> 4);
        b = v & 31;         b = (b << 3) | (b >> 2);
    }

    // DXT1 by colour-extent fit: each 4x4 block's colours span a diagonal
    // of the box of its opaque texels; a block with transparent texels
    // (alpha 0: DXT1 textures have one-bit alpha) uses the 3-colour mode
    // (colour0 <= colour1) whose fourth entry is transparent.
    // DXT5: the same colour blocks (every texel coloured) preceded by an
    // 8-byte alpha block (two end points, 3-bit indices into their 8-step
    // interpolation).
    void encodeDxt(uint32_t w, uint32_t h, bool dxt5, uint8_t *out)
    {
        for (uint32_t by = 0; by < h; by += 4)
            for (uint32_t bx = 0; bx < w; bx += 4, out += 8)
            {
                uint32_t texel[16];
                int minR = 255, minG = 255, minB = 255, maxR = 0, maxG = 0, maxB = 0;
                int n = 0, sumR = 0, sumG = 0, sumB = 0, sumRG = 0, sumRB = 0, sumGB = 0;
                uint32_t clear = 0; // transparent texels (bit i)
                for (uint32_t y = 0; y < 4; ++y)
                    for (uint32_t x = 0; x < 4; ++x)
                    {
                        const uint32_t c = decoded[size_t(by + y) * w + bx + x];
                        texel[y * 4 + x] = c;
                        if (!dxt5 && (c >> 24) == 0u)
                        {
                            clear |= 1u << (y * 4 + x);
                            continue;
                        }
                        const int r = int(c & 0xFFu), g = int((c >> 8) & 0xFFu), b = int((c >> 16) & 0xFFu);
                        minR = std::min(minR, r); maxR = std::max(maxR, r);
                        minG = std::min(minG, g); maxG = std::max(maxG, g);
                        minB = std::min(minB, b); maxB = std::max(maxB, b);
                        ++n;
                        sumR += r; sumG += g; sumB += b;
                        sumRG += r * g; sumRB += r * b; sumGB += g * b;
                    }
                const bool transparent = clear != 0u, opaque = n != 0;
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
                // The end points are opposite corners of the box: the widest
                // channel runs low to high and each other channel with it or
                // against it, by the sign of their covariance (always both
                // rising, as min/max alone gives, shifts the hues of blocks
                // whose channels run against each other).
                const int covRG = n * sumRG - sumR * sumG, covRB = n * sumRB - sumR * sumB,
                          covGB = n * sumGB - sumG * sumB; // n^2 x covariance; fits 32 bits
                const int spanR = maxR - minR, spanG = maxG - minG, spanB = maxB - minB;
                bool flipR = false, flipG = false, flipB = false;
                if (spanG >= spanR && spanG >= spanB)
                {
                    flipR = covRG < 0;
                    flipB = covGB < 0;
                }
                else if (spanR >= spanB)
                {
                    flipG = covRG < 0;
                    flipB = covRB < 0;
                }
                else
                {
                    flipR = covRB < 0;
                    flipG = covGB < 0;
                }
                uint16_t c0 = to565(flipR ? minR : maxR, flipG ? minG : maxG, flipB ? minB : maxB);
                uint16_t c1 = to565(flipR ? maxR : minR, flipG ? maxG : minG, flipB ? maxB : minB);
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
                    if (!(clear & (1u << i)))
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
        uint32_t address = 0, filter = 0, levels = 0; // levels: the texture's mip count (CONTROL0's LOD clamp)
        uint32_t blendEnable = 0, sfactor = 0, dfactor = 0, equation = 0, blendColor = 0;
        uint32_t alphaTest = 0, alphaFunc = 0, alphaRef = 0;
        uint32_t depthTest = 0, depthFunc = 0, depthMask = 0;
        uint32_t colorMask = 0, shade = 0;
        uint32_t vertexMode = 0, constSerial = 0; // transform programs (SubmitStripsTransformed)
        uint32_t topology = 0;                    // 0 triangle list, 1 one triangle strip (joined)
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
        ++g_nv2aTextureStats.gpuWaits;
        flushBatch();
        closeBlock();
        g_nv2aStep = 11;
        const uint64_t start = cycles();
        while (pb_busy())
        {
        }
        waitCycles += cycles() - start;
        g_nv2aTextureStats.kcycWait = uint32_t(waitCycles / 1000u);
        g_nv2aStep = 12;
    }

    // All vertex programs stay resident (78 of 136 slots); a mode switch is
    // one PROGRAM_START write. Loaded once, with the first frame's setup
    // (nothing else touches the GPU's program memory, the literals or the
    // semaphore context).
    uint32_t programStart[5] = {};
    bool programsLoaded = false;
    uint64_t waitCycles = 0, readbackCycles = 0;

    uint32_t *uploadVertexProgram(uint32_t *p)
    {
        p = push1(p, NV097_SET_TRANSFORM_EXECUTION_MODE,
                  NV097_SET_TRANSFORM_EXECUTION_MODE_MODE_PROGRAM |
                      (NV097_SET_TRANSFORM_EXECUTION_MODE_RANGE_MODE_PRIV << 2));
        p = push1(p, NV097_SET_TRANSFORM_PROGRAM_CXT_WRITE_EN, 0);
        p = push1(p, NV097_SET_TRANSFORM_PROGRAM_LOAD, 0);
        uint32_t slot = 0;
        for (int m = 0; m < 5; ++m)
        {
            programStart[m] = slot;
            const VertexProgram &vp = kVertexPrograms[m];
            for (uint32_t i = 0; i < vp.count; i += 4)
            {
                p = pushMethod(p, NV097_SET_TRANSFORM_PROGRAM, 4);
                std::memcpy(p, vp.words + i, 16);
                p += 4;
            }
            slot += vp.count / 4;
        }
        p = push1(p, NV097_SET_TRANSFORM_PROGRAM_START, 0);
        // Fences go through their own DMA object (pushFence).
        p = push1(p, NV097_SET_CONTEXT_DMA_SEMAPHORE, kFenceDma);
        // The compiler's literals (c[34] = 0, 1, 0.5).
        p = push1(p, NV097_SET_TRANSFORM_CONSTANT_LOAD, kConstantBase + 34u);
        p = pushMethod(p, NV097_SET_TRANSFORM_CONSTANT, 4);
        const float literals[4] = {0.0f, 1.0f, 0.5f, 0.0f};
        std::memcpy(p, literals, 16);
        p += 4;
        return p;
    }

    // Vertex array formats for a vertex mode (0: GpuVertex, else GSXfVertex).
    uint32_t *setAttributes(uint32_t *p, uint32_t mode)
    {
        p = pushMethod(p, NV097_SET_VERTEX_DATA_ARRAY_FORMAT, 16);
        for (int i = 0; i < 16; ++i)
            *p++ = NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F; // size 0: disabled
        struct Attribute
        {
            uint32_t index, type, components, offset;
        };
        static const Attribute screen[] = {
            {0, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 4, 0},
            {3, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_UB_D3D, 4, 16},
            {9, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 4, 20},
        };
        static const Attribute raw[] = {
            {0, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 3, 0},
            {2, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 3, 12},
            {3, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_UB_D3D, 4, 24},
            {9, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 4, 28},
        };
        const Attribute *list = mode ? raw : screen;
        const int count = mode ? 4 : 3;
        const uint32_t stride = mode ? uint32_t(sizeof(GSXfVertex)) : uint32_t(sizeof(GpuVertex));
        const uint8_t *base = mode ? reinterpret_cast<const uint8_t *>(xfVertices) : reinterpret_cast<const uint8_t *>(vertices);
        for (int i = 0; i < count; ++i)
        {
            const Attribute &a = list[i];
            p = push1(p, NV097_SET_VERTEX_DATA_ARRAY_FORMAT + 4 * a.index, a.type | (a.components << 4) | (stride << 8));
            p = push1(p, NV097_SET_VERTEX_DATA_ARRAY_OFFSET + 4 * a.index, physical(base + a.offset));
        }
        return p;
    }

    void setAttributes()
    {
        uint32_t *p = pb_begin();
        p = setAttributes(p, 0);
        pb_end(p);
    }

    // ------------------------------------------- native transform (GPU)
    GSXfVertex *xfVertices = nullptr;
    uint32_t xfUsed = 0, xfSerial = 0;
    float xfK[kXfConstantRegs - 1][4] = {}; // k[0..33]; c[34] is loaded with the programs

    // What the GPU's constant registers hold: only rows that differ are sent
    // (an object changes its matrix rows; lights and viewport rarely change),
    // which keeps ~900 objects a frame from filling the push buffer.
    float gpuK[kXfConstantRegs - 1][4];
    bool gpuKValid = false;

    uint32_t *uploadConstants(uint32_t *p)
    {
        constexpr uint32_t rows = kXfConstantRegs - 1u;
        uint32_t r = 0;
        while (r < rows)
        {
            if (gpuKValid && std::memcmp(gpuK[r], xfK[r], 16) == 0)
            {
                ++r;
                continue;
            }
            uint32_t end = r + 1u;
            while (end < rows && (!gpuKValid || std::memcmp(gpuK[end], xfK[end], 16) != 0) && end - r < 8u)
                ++end;
            p = push1(p, NV097_SET_TRANSFORM_CONSTANT_LOAD, kConstantBase + r);
            p = pushMethod(p, NV097_SET_TRANSFORM_CONSTANT, (end - r) * 4u);
            std::memcpy(p, xfK[r], (end - r) * 16u);
            p += (end - r) * 4u;
            std::memcpy(gpuK[r], xfK[r], (end - r) * 16u);
            r = end;
        }
        gpuKValid = true;
        return p;
    }

    // The transform buffer is a ring of segments, each closed by a fence:
    // the GPU writes the fence value (back-end semaphore, after the draws
    // before it have rendered) and a segment is reused once its fence has
    // passed, instead of draining the whole GPU when the buffer wraps.
    // Segments of 4,096 vertices: each one closed is a hand-over to the GPU
    // (nextXfSegment), so larger segments mean fewer of them. Two of them
    // (the other gives the GPU 4,096 vertices of lead) keep the ring at
    // 352 KB, leaving memory for triple buffering and the texture pack.
    static constexpr uint32_t kXfSegments = 2u, kXfSegment = kMaxXfVertices / kXfSegments;
    static_assert(kXfSegment == 4096u, "transform ring layout");
    volatile uint32_t *fence = nullptr; // GPU-written (semaphore offset)
    uint32_t fenceSerial = 0, xfSegment = 0, segmentFence[kXfSegments] = {};

    // The fence word has its own DMA object (handle kFenceDma, 64 bytes): the
    // semaphore offset is 0 within it. (pbkit points the semaphore context
    // at its own 32-byte buffer.)
    static constexpr uint32_t kFenceDma = 21u;
    uint32_t *pushFence(uint32_t *p, uint32_t value)
    {
        p = push1(p, NV097_SET_SEMAPHORE_OFFSET, 0u);
        return push1(p, NV097_BACK_END_WRITE_SEMAPHORE_RELEASE, value);
    }

    // The end of the last frame on the GPU (finishFrame's fence). Until it
    // passes, the GPU may still read that frame's vertices, transform
    // buffer and retired textures; read-backs and screen loads wait for an
    // idle GPU themselves.
    uint32_t frameEndFence = 0;
    bool frameEndPending = false;
    void settleFrame()
    {
        if (!frameEndPending)
            return;
        frameEndPending = false;
        if (int32_t(*fence - frameEndFence) < 0)
        {
            ++g_nv2aTextureStats.gpuWaits;
            const uint64_t start = cycles();
            while (int32_t(*fence - frameEndFence) < 0 && pb_busy())
            {
            }
            waitCycles += cycles() - start;
            g_nv2aTextureStats.kcycWait = uint32_t(waitCycles / 1000u);
        }
        freeRetired();
    }

    void nextXfSegment()
    {
        flushBatch(); // the segment's last draws, then its fence
        segmentFence[xfSegment] = ++fenceSerial;
        cursor = pushFence(openCursor(), fenceSerial);
        // Hand the segment to the GPU now: held back until the block fills,
        // the GPU starts late and the ring catches up with it (measured:
        // about 4 ms a frame of transform-buffer waits).
        closeBlock();
        xfSegment = (xfSegment + 1u) % kXfSegments;
        xfUsed = xfSegment * kXfSegment;
        const uint32_t needed = segmentFence[xfSegment];
        if (needed != 0u && int32_t(*fence - needed) < 0)
        {
            ++g_nv2aTextureStats.waitXf;
            const uint64_t start = cycles();
            // An idle GPU has passed every fence (also covers a semaphore
            // that never arrives).
            while (int32_t(*fence - needed) < 0 && pb_busy())
            {
            }
            waitCycles += cycles() - start;
            g_nv2aTextureStats.kcycWait = uint32_t(waitCycles / 1000u);
        }
    }

    GSXfVertex *reserveXf(const DrawKey &key, uint32_t count)
    {
        if (batchCount && !(key == batchKey))
            flushBatch();
        if (xfUsed + count > (xfSegment + 1u) * kXfSegment)
            nextXfSegment();
        if (batchCount == 0)
        {
            batchKey = key;
            batchFirst = xfUsed;
        }
        GSXfVertex *out = xfVertices + xfUsed;
        xfUsed += count;
        batchCount += count;
        return out;
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
        settleFrame();
        pb_reset();
        // The frame's setup goes to the GPU as one block (each hand-over is
        // a write-combine flush and a DMA register write).
        uint32_t *p = pushHead = pb_begin();
        if (!programsLoaded)
        {
            p = uploadVertexProgram(p);
            programsLoaded = true;
        }
        // Z from the vertex, not W (the kernel leaves w-buffering on; with
        // w = 1 everywhere every pixel would tie and the last face drawn
        // would win), fixed-point depth, perspective-correct texturing.
        p = push1(p, NV097_SET_CONTROL0, NV097_SET_CONTROL0_TEXTURE_PERSPECTIVE_ENABLE);
        p = push1(p, NV097_SET_STENCIL_TEST_ENABLE, 0);
        p = push1(p, NV097_SET_CULL_FACE_ENABLE, 0);
        p = push1(p, NV097_SET_FOG_ENABLE, 0);
        for (unsigned i = 1; i < 4; ++i)
            p = push1(p, NV097_SET_TEXTURE_CONTROL0 + 64 * i, 0);
        // GS depth tests keep the greater value: start from the nearest-is-0 side.
        p = pushMethod(p, NV097_SET_CLEAR_RECT_HORIZONTAL, 2);
        *p++ = ((kScreenWidth - 1u) << 16);
        *p++ = ((kScreenHeight - 1u) << 16);
        p = pushMethod(p, NV097_SET_ZSTENCIL_CLEAR_VALUE, 3);
        *p++ = 0;    // depth 0, stencil 0
        *p++ = 0;    // colour (unused)
        *p++ = 0x03; // clear depth and stencil
        pb_end(p);
        lastPut = p;
        framePushDwords = 0;
        stateValid = false;
        currentProgram = -1;
        verticesUsed = 0;
        // The GPU is idle at a frame's start (settleFrame): every fence passed.
        xfUsed = 0;
        xfSegment = 0;
        for (uint32_t &f : segmentFence)
            f = 0u;
        // A frame the CPU changed since (loading screens, movies) starts from it.
        if (screenVramNewer)
            loadScreenFromVram();
    }

    void finishFrame()
    {
        g_nv2aStep = 30;
        if (!frameOpen)
            return;
        flushBatch();
        closeBlock();
        g_nv2aTextureStats.pushPeakKB = std::max<uint32_t>(g_nv2aTextureStats.pushPeakKB,
            uint32_t((framePushDwords + size_t(lastPut - pushHead)) / 256u));
        shownBuffer = pb_back_buffer(); // drawn into; on screen until the next flip
        g_nv2aStep = 31;
        while (pb_finished()) // only while both buffers wait for a vblank
        {
        }
        g_nv2aStep = 32;
        // The GPU finishes this frame while the game builds the next one;
        // the next frame's start waits for this fence (settleFrame).
        frameEndFence = ++fenceSerial;
        cursor = pushFence(openCursor(), frameEndFence);
        closeBlock();
        frameEndPending = true;
        frameOpen = false;
        screenGpuNewer = true;
        packFrameEnd();
        g_nv2aTextureStats.frameTextures = frameTextures;
        g_nv2aTextureStats.frameTextureBytes = frameTextureBytes;
        g_nv2aTextureStats.frameFills = frameFills;
        frameTextures = frameTextureBytes = frameFills = 0;
        // Hand-overs to the GPU (pb_end, pbkit's own included) since the
        // last frame's end.
        g_nv2aTextureStats.framePbEnds = pb_ts_end_count - frameEndPbEnds;
        g_nv2aTextureStats.pbEnds = frameEndPbEnds = pb_ts_end_count;
        lastFrameKeys.swap(frameKeys);
        frameKeys.clear();
        ++frameNumber;
        g_nv2aTextureStats.frames = frameNumber;
    }
    uint32_t frameEndPbEnds = 0;

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
        k.program = tex ? pixelProgramFor(state, tex->unitAlpha) : 0;
        const uint64_t clamp = state.context.clamp;
        const uint32_t wrapU = (clamp & 3u) == 0u || (clamp & 3u) == 3u ? 1u : 3u; // repeat : clamp to edge
        const uint32_t wrapV = ((clamp >> 2) & 3u) == 0u || ((clamp >> 2) & 3u) == 3u ? 1u : 3u;
        k.address = wrapU | (wrapV << 8) | (3u << 16);
        // Linear : nearest (min/mag), level 0 only. Mipmapped (pack)
        // textures drawn linear also blend between levels (min 6,
        // TENT_TENT_LOD: trilinear), which is what stops the shimmer of
        // distant surfaces; HD replacements are always drawn so, as on the PC.
        const bool linear = state.linearFilter || (tex && tex->forceLinear);
        k.filter = linear ? 0x02022000u : 0x01012000u;
        k.levels = tex ? tex->levels : 0u;
        if (linear && k.levels > 1u)
            k.filter = 0x02062000u;
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
        if (all || o.vertexMode != k.vertexMode)
        {
            p = setAttributes(p, k.vertexMode);
            p = push1(p, NV097_SET_TRANSFORM_PROGRAM_START, programStart[k.vertexMode]);
        }
        if (k.vertexMode && (all || o.constSerial != k.constSerial || !o.vertexMode))
            p = uploadConstants(p);
        if (k.program != currentProgram)
        {
            p = kPixelPrograms[k.program](p);
            // The untextured program leaves the texture stages as they were;
            // a stage still set to sample with no texture bound is invalid.
            if (k.program == 0)
                p = push1(p, NV097_SET_SHADER_STAGE_PROGRAM, 0);
            currentProgram = k.program;
        }
        if (k.texture)
        {
            const Texture &t = *k.texture;
            if (all || o.texture != k.texture)
            {
                p = push1(p, NV097_SET_TEXTURE_OFFSET, physical(t.texels));
                p = push1(p, NV097_SET_TEXTURE_FORMAT,
                             0x0000002Au | (t.format << 8) | (t.levels << 16) |
                                 (log2u(t.gpuWidth) << 20) | (log2u(t.gpuHeight) << 24));
            }
            // MAX_LOD_CLAMP (4.8 fixed point, bits 6..17) lets the sampler
            // reach the last level; one level leaves it 0, as before.
            if (all || !o.texture || o.levels != k.levels)
                p = push1(p, NV097_SET_TEXTURE_CONTROL0,
                             NV097_SET_TEXTURE_CONTROL0_ENABLE |
                                 (((k.levels - 1u) << 8 << 6) & NV097_SET_TEXTURE_CONTROL0_MAX_LOD_CLAMP));
            if (all || o.address != k.address || !o.texture)
                p = push1(p, NV097_SET_TEXTURE_ADDRESS, k.address);
            if (all || o.filter != k.filter || !o.texture)
                p = push1(p, NV097_SET_TEXTURE_FILTER, k.filter);
        }
        else if (all || o.texture)
            p = push1(p, NV097_SET_TEXTURE_CONTROL0, 0);
#define TS_SET(field, reg)     if (all || o.field != k.field)         p = push1(p, reg, k.field);
        TS_SET(blendEnable, NV097_SET_BLEND_ENABLE)
        TS_SET(sfactor, NV097_SET_BLEND_FUNC_SFACTOR)
        TS_SET(dfactor, NV097_SET_BLEND_FUNC_DFACTOR)
        TS_SET(equation, NV097_SET_BLEND_EQUATION)
        TS_SET(blendColor, NV097_SET_BLEND_COLOR)
        TS_SET(alphaTest, NV097_SET_ALPHA_TEST_ENABLE)
        if (all || o.alphaFunc != k.alphaFunc)
            p = push1(p, NV097_SET_ALPHA_FUNC, k.alphaFunc ? k.alphaFunc : NV097_SET_ALPHA_FUNC_V_ALWAYS);
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
    // its head. GPU state carries over. The last 32 KB are slack for what is
    // written past the check (a batch's state and draws, pbkit's flip).
    uint32_t *pushHead = nullptr;
    static constexpr size_t kPushLimitDwords = (kPushBufferBytes - 32u * 1024u) / 4u;

    // Commands accumulate in an open block and go to the GPU in chunks of
    // kBlockDwords (closeBlock): each hand-over costs several emulated
    // register accesses, a sixth of a frame when done per batch.
    uint32_t *openBlock = nullptr, *cursor = nullptr;
    // Push-buffer use of the open frame: dwords before the last restart,
    // and the end of the last closed block.
    size_t framePushDwords = 0;
    uint32_t *lastPut = nullptr;
    static constexpr size_t kBlockDwords = (48u * 1024u) / 4u;

    void closeBlock()
    {
        if (!openBlock)
            return;
        pb_end(cursor);
        lastPut = cursor;
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
            ++g_nv2aTextureStats.waitPush;
            if (pushHead && lastPut)
                framePushDwords += size_t(lastPut - pushHead);
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
        if (batchKey.topology == 1u)
        {
            // One strip; a draw takes at most 256 vertices, so consecutive
            // draws overlap by two (a fresh strip continues the triangles;
            // culling is off, so the flipped winding does not matter).
            p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_TRIANGLE_STRIP);
            for (uint32_t first = 0;;)
            {
                const uint32_t n = std::min<uint32_t>(batchCount - first, 256u);
                p = push1(p, 0x40000000u | NV097_DRAW_ARRAYS, ((n - 1u) << 24) | (batchFirst + first));
                if (first + n >= batchCount)
                    break;
                first += n - 2u;
            }
        }
        else
        {
            p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_TRIANGLES);
            for (uint32_t first = 0; first < batchCount; first += 256)
            {
                const uint32_t n = std::min<uint32_t>(batchCount - first, 256u);
                p = push1(p, 0x40000000u | NV097_DRAW_ARRAYS, ((n - 1u) << 24) | (batchFirst + first));
            }
        }
        p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_END);
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
            ++g_nv2aTextureStats.waitVb;
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
            // Only the displayed rows count: the game clears all 512 rows of
            // the frame region but keeps CLUTs below row 448 and uploads them
            // after the clear, so local memory is the newer copy there.
            const float row = y - ofy + 1.0f;
            const uint32_t limit = std::min<uint32_t>(frameHeight, kDisplayRows);
            if (row > float(gpuRows))
                gpuRows = row >= float(limit) ? limit : uint32_t(row);
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
            GpuVertex *out = reserve(key, 3u * (n - 2u)); // one key check per strip
            for (uint32_t i = 2; i < n; ++i, out += 3)
            {
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

    // A strip of raw vertices for the transform programs: the frame and
    // texture handling of submitScreenVerts, then the constants (with this
    // frame's 640x480 mapping and depth format folded in) and the vertices
    // as a triangle list with each triangle's last vertex first (the GS
    // flat-shades with the last vertex, the NV2A with the first).
    bool submitXf(const GSDrawState &state, const GSXfConstants &c, const GSXfVertex *v, const uint8_t *counts,
                  uint32_t strips)
    {
        if (state.prim.type != GS_PRIM_TRISTRIP || strips == 0u || state.prim.fst || c.variant > 3u ||
            !isScreenTarget(state))
            return false;
        uint32_t total = 0;
        for (uint32_t i = 0; i < strips; ++i)
        {
            if (counts[i] < 3u || counts[i] > 64u)
                return false;
            total += counts[i];
        }
        if (frameOpen && state.context.frame.fbp != frameFbp)
            finishFrame();
        if (!frameOpen)
            beginFrame(state);
        else if (screenVramNewer)
            loadScreenFromVram();

        const Texture *tex = state.prim.tme ? texture(state) : nullptr;
        DrawKey key = keyFor(state, tex);
        key.vertexMode = 1u + c.variant;
        key.topology = state.prim.iip ? 1u : 0u; // flat shading needs the list's vertex order
        g_nv2aTextureStats.xfStrips += strips;
        g_nv2aTextureStats.xfVertices += total;

        const auto &ctx = state.context;
        // Constants are fixed for a native run (c.serial) and this frame's
        // mapping: rebuilt only when either changes.
        if (c.serial != 0u && c.serial == xfBuiltSerial && frameFbw == xfBuiltFbw && frameHeight == xfBuiltHeight &&
            ctx.xyoffset.ofx == xfBuiltOfx && ctx.xyoffset.ofy == xfBuiltOfy && ctx.zbuf.psm == xfBuiltZpsm)
        {
            key.constSerial = xfSerial;
            return emitXf(key, v, counts, strips);
        }
        xfBuiltSerial = c.serial;
        xfBuiltFbw = frameFbw;
        xfBuiltHeight = frameHeight;
        xfBuiltOfx = ctx.xyoffset.ofx;
        xfBuiltOfy = ctx.xyoffset.ofy;
        xfBuiltZpsm = ctx.zbuf.psm;
        const float ofx = float(ctx.xyoffset.ofx >> 4), ofy = float(ctx.xyoffset.ofy >> 4);
        const float sx = float(kScreenWidth) / float(frameFbw * 64u);
        const float sy = float(kScreenHeight) / float(frameHeight);
        const float dz = depthScale(ctx.zbuf.psm);
        float k[kXfConstantRegs - 1][4];
        std::memcpy(k[0], c.mvp, sizeof(c.mvp));
        std::memcpy(k[12], c.lightDir, sizeof(c.lightDir));
        std::memcpy(k[24], c.lightColour, sizeof(c.lightColour));
        const float scale[4] = {c.scale[0] * sx, c.scale[1] * sy, c.scale[2] * dz, 0.0f};
        const float offset[4] = {(c.offset[0] - ofx) * sx, (c.offset[1] - ofy) * sy, c.offset[2] * dz, 0.0f};
        std::memcpy(k[28], scale, 16);
        std::memcpy(k[29], offset, 16);
        std::memcpy(k[30], c.model, sizeof(c.model));
        const float clampLit[4] = {127.0f / 255.0f, 0.0f, 0.5f, 16777215.0f}; // .w: depth range
        std::memcpy(k[33], clampLit, 16);
        if (std::memcmp(k, xfK, sizeof(k)) != 0)
        {
            if (batchCount)
                flushBatch(); // the batch so far uses the old constants
            std::memcpy(xfK, k, sizeof(k));
            ++xfSerial;
        }
        key.constSerial = xfSerial;
        return emitXf(key, v, counts, strips);
    }

    uint32_t xfBuiltSerial = 0, xfBuiltFbw = 0, xfBuiltHeight = 0, xfBuiltOfx = 0, xfBuiltOfy = 0, xfBuiltZpsm = 0;

    GSXfVertex stripLast{}; // last vertex of the current strip batch (joins)

    bool emitXf(const DrawKey &key, const GSXfVertex *v, const uint8_t *counts, uint32_t strips)
    {
        for (uint32_t s = 0; s < strips; v += counts[s], ++s)
        {
            const uint32_t n = counts[s];
            if (key.topology == 1u)
            {
                // Joined to the batch's strip by two repeated vertices
                // (degenerate triangles draw nothing).
                const bool join = batchCount != 0u && key == batchKey;
                GSXfVertex *out = reserveXf(key, n + (join ? 2u : 0u));
                if (join)
                {
                    *out++ = stripLast;
                    *out++ = v[0];
                }
                std::memcpy(out, v, n * sizeof(GSXfVertex));
                stripLast = v[n - 1];
            }
            else
            {
                // Each triangle's last vertex first: the GS flat-shades with
                // the last vertex, the NV2A with the first.
                GSXfVertex *out = reserveXf(key, 3u * (n - 2u));
                for (uint32_t i = 2; i < n; ++i, out += 3)
                {
                    out[0] = v[i];
                    out[1] = v[i - 2];
                    out[2] = v[i - 1];
                }
            }
        }
        gpuRows = std::min<uint32_t>(frameHeight, kDisplayRows); // where it lands is not known here
        screenGpuNewer = true;
        return true;
    }

    // ----------------------------------------- screen <-> local memory
    // GPU pixels (back buffer, 640x480, R5G6B5 or X8R8G8B8) into the GS
    // frame buffer.
    void writeBackScreen()
    {
        g_nv2aStep = 40;
        if (!screenGpuNewer)
            return;
        ++g_nv2aTextureStats.waitReadback;
        const uint64_t readbackStart = cycles();
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
        bumpPages(frameRangeExact(framePsm, frameFbp, frameFbw, rows));
        screenGpuNewer = false;
        readbackCycles += cycles() - readbackStart;
        g_nv2aTextureStats.kcycReadback = uint32_t(readbackCycles / 1000u);
    }

    // Local memory's frame buffer into the back buffer (the CPU drew or
    // uploaded into it: loading screens, movies, CPU-side draws).
    void loadScreenFromVram()
    {
        ++g_nv2aTextureStats.screenLoads;
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
    // The texture pack's pool first: its 1.25 MB in one piece is surest to
    // be found before the screen buffers, the GPU buffers and the game take
    // their share.
    std::unique_ptr<GSNv2aBackend> backend(new GSNv2aBackend());
    backend->m->openTexturePack();
    // 16-bit colour and depth, like the game's own buffers: a 640x480 screen
    // buffer is 0.6 MB instead of 1.2, and there are two plus the depth buffer.
    XVideoSetMode(640, 480, 16, REFRESH_DEFAULT);
    pb_set_color_format(NV097_SET_SURFACE_FORMAT_COLOR_LE_R5G6B5, false);
    pb_ts_set_depth_format(NV097_SET_SURFACE_FORMAT_ZETA_Z24S8);
    // The push buffer (520 KB with pbkit's margin) is pb_init's one large
    // contiguous allocation; it fails with -3 when that is not available.
    pb_size(kPushBufferBytes);
    if (const int error = pb_init(); error != 0)
    {
        debugPrint("pbkit: pb_init failed (%d)\n", error);
        return nullptr;
    }
    Impl &impl = *backend->m;
    impl.vertices = static_cast<GpuVertex *>(allocGpu(kMaxVertices * sizeof(GpuVertex)));       // 288 KB
    impl.xfVertices = static_cast<GSXfVertex *>(allocGpu(kMaxXfVertices * sizeof(GSXfVertex))); // 352 KB
    impl.fence = static_cast<volatile uint32_t *>(allocGpu(64));
    if (impl.fence)
    {
        *impl.fence = 0u;
        static s_CtxDma fenceDma;
        pb_create_dma_ctx(Impl::kFenceDma, DMA_CLASS_3D, DWORD(reinterpret_cast<uintptr_t>(const_cast<uint32_t *>(impl.fence))),
                          63u, &fenceDma);
        pb_bind_channel(&fenceDma);
    }
    if (!impl.vertices || !impl.xfVertices || !impl.fence)
    {
        debugPrint("nv2a: no contiguous memory for the vertex buffers\n");
        pb_kill();
        // The software renderer takes over: give back what was allocated.
        if (impl.vertices)
            MmFreeContiguousMemory(impl.vertices);
        if (impl.xfVertices)
            MmFreeContiguousMemory(impl.xfVertices);
        if (impl.fence)
            MmFreeContiguousMemory(const_cast<uint32_t *>(impl.fence));
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
    m->clutCbp[0] = m->clutCbp[1] = UINT32_MAX;
    m->targetPages.reset();
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
    ++g_nv2aTextureStats.offscreenDraws;
    g_nv2aTextureStats.offscreenFbp = batch.state.context.frame.fbp;
    g_nv2aTextureStats.offscreenFbw = batch.state.context.frame.fbw;
    g_nv2aTextureStats.offscreenPsm = batch.state.context.frame.psm;
    g_nv2aTextureStats.offscreenPrim = batch.state.prim.type;
    const GSCpuBackend::VramRange textureRange = GSCpuBackend::TextureRange(batch.state);
    if (batch.state.prim.tme && m->screenGpuNewer && overlaps(textureRange, m->gpuRange()))
    {
        ++g_nv2aTextureStats.wbDraw;
        m->writeBackScreen();
    }
    m->cpu.Submit(batch);
    const GSCpuBackend::VramRange target = GSCpuBackend::FrameRange(batch.state);
    m->noteCpuWrite(target);
    m->markTargetPages(target, true);
}

bool GSNv2aBackend::SubmitStripsTransformed(const GSDrawState &state, const GSXfConstants &constants,
                                            const GSXfVertex *vertices, const uint8_t *counts, uint32_t strips)
{
    return m->submitXf(state, constants, vertices, counts, strips);
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
    if (!m->clutLoads(tex0))
        return;
    ++g_nv2aTextureStats.clutLoads;
    if (m->screenGpuNewer && overlaps(GSCpuBackend::ClutRange(tex0), m->gpuRange()))
    {
        ++g_nv2aTextureStats.wbClut;
        m->writeBackScreen();
    }
    if (Impl::fullClutLoad(tex0))
    {
        if (m->palettes.empty())
            m->palettes.resize(Impl::kPalettes);
        const uint32_t cbp = tex0.cbp;
        Impl::Palette &e = m->palettes[(cbp ^ (cbp >> 7)) % Impl::kPalettes];
        const uint64_t versions = m->versionSum(GSCpuBackend::ClutRange(tex0));
        if (e.cbp == cbp && e.cpsm == tex0.cpsm && e.versions == versions)
        {
            ++g_nv2aTextureStats.paletteHits;
            m->cpu.SetLoadedClut(tex0, e.clut, e.hash);
            m->clutHash = e.hash;
            return;
        }
        m->cpu.LoadClut(tex0, texclut);
        m->refreshClutHash();
        std::array<uint32_t, 2> mirror;
        m->cpu.GetClutState(e.clut, mirror);
        e.cbp = cbp;
        e.cpsm = tex0.cpsm;
        e.versions = versions;
        e.hash = m->clutHash;
        return;
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
    {
        const auto dest = frameRangeRows(buf.dpsm, buf.dbp / 32u, buf.dbw,
                                         uint32_t(command.trxpos.dsay) + command.trxreg.rrh + 1u);
        m->noteCpuWrite(dest);
        // A copy of a render target (a screen copy) is one too; a copy of
        // texels is texels.
        const auto source = frameRangeRows(buf.spsm, buf.sbp / 32u, buf.sbw,
                                           uint32_t(command.trxpos.ssay) + command.trxreg.rrh + 1u);
        m->markTargetPages(dest, m->renderTarget(source));
    }
}

void GSNv2aBackend::UploadImage(const uint8_t *data, uint32_t sizeBytes)
{
    m->cpu.UploadImage(data, sizeBytes);
    const GSTransferCommand &c = m->transfer;
    const auto dest = frameRangeRows(c.bitbltbuf.dpsm, c.bitbltbuf.dbp / 32u, c.bitbltbuf.dbw,
                                     uint32_t(c.trxpos.dsay) + c.trxreg.rrh + 1u);
    m->noteCpuWrite({dest.begin, dest.end == UINT64_MAX ? UINT64_MAX : dest.end + 2u * kPageBytes});
    m->markTargetPages(dest, false); // uploaded texels: textures again
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
