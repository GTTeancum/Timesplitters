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
#include <cstdio>
#include <cstring>
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
    constexpr size_t kTextureBudget = 512u * 1024u;      // decoded textures kept on the GPU

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

    // GS depth value to the 16-bit depth buffer's units.
    float depth24(double z, uint32_t zpsm)
    {
        switch (zpsm)
        {
        case GS_PSM_Z16:
        case GS_PSM_Z16S: return float(std::min(z, 65535.0));
        case GS_PSM_Z24: return float(std::min(z / 256.0, 65535.0));
        default: return float(std::min(z / 65536.0, 65535.0));
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
        uint32_t *texels = nullptr; // swizzled A8R8G8B8, GPU memory
        size_t bytes = 0;
    };
    std::vector<Texture> textures;
    size_t textureBytes = 0;
    uint64_t textureTick = 0;
    uint64_t clutHash = 0;
    std::vector<uint32_t> decoded;

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

    void freeTexture(size_t index)
    {
        waitIdle(); // the GPU may still read it
        textureBytes -= textures[index].bytes;
        MmFreeContiguousMemory(textures[index].texels);
        textures.erase(textures.begin() + long(index));
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
        if (screenGpuNewer && overlaps(range, screenRange()))
            writeBackScreen();
        const bool indexed = isIndexed(tex.psm);
        const uint32_t texa = uint32_t(state.texa.ta0) | (uint32_t(state.texa.ta1) << 8) | (state.texa.aem ? 0x10000u : 0u);
        const uint64_t hash = indexed ? clutHash : 0u;
        const uint64_t versions = versionSum(range);
        for (Texture &t : textures)
        {
            if (t.tbp0 == tex.tbp0 && t.tbw == tex.tbw && t.psm == tex.psm && t.width == w && t.height == h &&
                t.texa == texa && t.clutHash == hash &&
                (!indexed || (t.cpsm == tex.cpsm && t.csm == tex.csm && t.csa == tex.csa)))
            {
                if (t.versions != versions)
                {
                    waitIdle();
                    fillTexture(t, state);
                    t.versions = versions;
                }
                t.lastUse = ++textureTick;
                return &t;
            }
        }
        const size_t bytes = size_t(w) * h * 4u;
        while (!textures.empty() && textureBytes + bytes > kTextureBudget)
        {
            const auto oldest = std::min_element(textures.begin(), textures.end(),
                                                 [](const Texture &a, const Texture &b) { return a.lastUse < b.lastUse; });
            freeTexture(size_t(oldest - textures.begin()));
        }
        Texture t{tex.tbp0, tex.tbw, tex.psm, w, h, tex.cpsm, tex.csm, tex.csa, texa, hash, versions, ++textureTick, range};
        t.texels = static_cast<uint32_t *>(allocGpu(bytes));
        if (!t.texels)
            return nullptr;
        t.bytes = bytes;
        fillTexture(t, state);
        textureBytes += bytes;
        textures.push_back(t);
        return &textures.back();
    }

    // Decodes the GS texture (CLUT and TEXA applied) into the swizzled
    // A8R8G8B8 layout the NV2A samples with wrapping.
    void fillTexture(Texture &t, const GSDrawState &state)
    {
        cpu.DecodeTexture(state, decoded);
        const Swizzle sw(t.width, t.height);
        const bool ok = decoded.size() >= size_t(t.width) * t.height;
        for (uint32_t v = 0; v < t.height; ++v)
        {
            const uint32_t rowBits = Swizzle::spread(v, sw.maskV);
            for (uint32_t u = 0; u < t.width; ++u)
            {
                const uint32_t rgba = ok ? decoded[size_t(v) * t.width + u] : 0u; // R, G, B, A bytes
                t.texels[Swizzle::spread(u, sw.maskU) | rowBits] =
                    (rgba & 0xFF00FF00u) | ((rgba & 0xFFu) << 16) | ((rgba >> 16) & 0xFFu);
            }
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
        pb_reset();
        pushHead = pb_begin();
        pb_end(pushHead);
        pb_target_back_buffer();
        uploadVertexProgram();
        setAttributes();
        uint32_t *p = pb_begin();
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
    void applyState(const DrawKey &k)
    {
        const bool all = !stateValid;
        const DrawKey &o = applied;
        if (k.program != currentProgram)
        {
            uint32_t *p = pb_begin();
            p = kPixelPrograms[k.program](p);
            // The untextured program leaves the texture stages as they were;
            // a stage still set to sample with no texture bound is invalid.
            if (k.program == 0)
                p = pb_push1(p, NV097_SET_SHADER_STAGE_PROGRAM, 0);
            pb_end(p);
            currentProgram = k.program;
        }
        uint32_t *p = pb_begin();
        if (k.texture)
        {
            const Texture &t = *k.texture;
            if (all || o.texture != k.texture)
            {
                p = pb_push1(p, NV097_SET_TEXTURE_OFFSET, physical(t.texels));
                p = pb_push1(p, NV097_SET_TEXTURE_FORMAT,
                             0x0000002Au | (NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A8R8G8B8 << 8) | (1u << 16) |
                                 (log2u(t.width) << 20) | (log2u(t.height) << 24));
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
        pb_end(p);
        applied = k;
        stateValid = true;
    }

    // pbkit's push buffer is not a ring (and overflowing it corrupts
    // memory): when most of it is used, let the GPU catch up and restart at
    // its head. GPU state carries over.
    uint32_t *pushHead = nullptr;
    static constexpr size_t kPushLimitDwords = (96u * 1024u) / 4u;

    void checkPushSpace()
    {
        uint32_t *p = pb_begin();
        pb_end(p);
        if (pushHead && size_t(p - pushHead) < kPushLimitDwords)
            return;
        while (pb_busy())
        {
        }
        pb_reset();
        pushHead = pb_begin();
        pb_end(pushHead);
    }

    void flushBatch()
    {
        g_nv2aStep = 60;
        if (batchCount == 0)
            return;
        checkPushSpace();
        if (!stateValid || !(applied == batchKey))
            applyState(batchKey);
        uint32_t *p = pb_begin();
        p = pb_push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_TRIANGLES);
        for (uint32_t first = 0; first < batchCount; first += 256)
        {
            const uint32_t n = std::min<uint32_t>(batchCount - first, 256u);
            p = pb_push1(p, 0x40000000u | NV097_DRAW_ARRAYS, ((n - 1u) << 24) | (batchFirst + first));
        }
        p = pb_push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_END);
        pb_end(p);
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
        const GSDrawState &state = batch.state;
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

        auto emit = [&](GpuVertex &o, const GSVertex &v, const GSVertex &colorSource, float x, float y) {
            o.x = (x - ofx) * sx;
            o.y = (y - ofy) * sy;
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
            if (batch.vertexCount < 3)
                return;
            GpuVertex *out = reserve(key, 3);
            for (int i = 0; i < 3; ++i)
            {
                const GSVertex &v = batch.vertices[i];
                emit(out[i], v, state.prim.iip ? v : batch.vertices[2], v.x, v.y);
            }
            break;
        }
        case GS_PRIM_SPRITE:
        {
            if (batch.vertexCount < 2)
                return;
            const GSVertex &a = batch.vertices[0], &b = batch.vertices[1];
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
        const bool sixteen = framePsm == GS_PSM_CT16 || framePsm == GS_PSM_CT16S;
        // One row at a time: a whole frame's worth (up to 1.1 MB) is more
        // than the Xbox can be sure to spare.
        std::vector<uint32_t> values(width);
        for (uint32_t y = 0; y < height; ++y)
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
            if (screenGpuNewer)
                writeBackScreen(); // keep the GPU's pixels the CPU did not touch
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
    pb_ts_set_depth_format(NV097_SET_SURFACE_FORMAT_ZETA_Z16);
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
    if (batch.state.prim.tme && m->screenGpuNewer && overlaps(textureRange, m->screenRange()))
        m->writeBackScreen();
    m->cpu.Submit(batch);
    m->noteCpuWrite(GSCpuBackend::FrameRange(batch.state));
}

void GSNv2aBackend::LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut)
{
    if (m->screenGpuNewer && overlaps(GSCpuBackend::ClutRange(tex0), m->screenRange()))
        m->writeBackScreen();
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
        if (m->screenGpuNewer && overlaps(source, m->screenRange()))
            m->writeBackScreen();
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
