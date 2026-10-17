// GS renderer for the original Xbox (NV2A via pbkit). See gs_nv2a_backend.h.
#include "gs_nv2a_backend.h"
#include "gs_nv2a_clip.h"
#include "gs_nv2a_screen_math.h" // the screen-vertex arithmetic (shared with the host test)
#include "xbox_perf.h"           // TS_NATIVE_EMIT_TIER0 (the Tier 0 switch the bulk path follows)
#include "xbox_texture_pack.h"
#include "runtime/ps2_host_settings.h" // widescreen: the bulk path declines (gs_nv2a_screen.inl)
#include "runtime/ps2_measure.h" // TS_MEASURE_PUSHBC: beginXfRun, keyFor, texture() and the DrawKey compares timed
#include "runtime/gs/gs_texture_hash.h"

// Split screen (REWRITE-PLAN.md M2.3). Each switch at 0 restores the old path.
// TS_NV2A_DISPLAY_HEIGHT 1: the GS frame's height (its mapping onto the
// 640x480 screen) comes from the display registers of the last presentation
// (gs_nv2a_clip::frameRows), not from the first draw's scissor, which only
// gives the frame's height when the first draw covers the whole frame. In a
// match it does, split screen too (bossMainLoop starts every frame with
// dlClearFB under a 640x224 scissor, before the views); the display is the
// sturdier source, and what the PS2 and the PC presenters show.
#ifndef TS_NV2A_DISPLAY_HEIGHT
#define TS_NV2A_DISPLAY_HEIGHT 1
#endif
// TS_NV2A_SCISSOR 1: the GS scissor is applied as the NV2A window clip, so a
// view (playerSetWindow: 2 players top and bottom, 3-4 in quarters) draws
// inside its own rectangle only, as on the PS2 and in the PC renderer
// (glScissor). The game's full-screen scissor is pbkit's own full-screen
// clip, which is never pushed; smaller ones (rooms seen through portals,
// bgGfx and propGfxRoom; HUD windows) now clip as on the PS2, where the old
// path drew past them.
#ifndef TS_NV2A_SCISSOR
#define TS_NV2A_SCISSOR 1
#endif

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
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <list>
#include <set>
#include <vector>

// TS_TEXTURE_INDEX 1: the texture cache's records are found through a hash
// index over their whole key (Impl::textureIndex); 0: by a walk of the list.
#ifndef TS_TEXTURE_INDEX
#define TS_TEXTURE_INDEX 1
#endif
// TS_TEXTURE_RECENT_WAYS: ways of the recent-texture table's 64 sets (4: a
// texture's palette and TEXA variants, and textures whose addresses share
// a set, stay side by side; 1: 64 entries by address, as before).
#ifndef TS_TEXTURE_RECENT_WAYS
#define TS_TEXTURE_RECENT_WAYS 4
#endif
// TS_GPU_RANGE_MEMO 1: the local-memory range the GPU has drawn this frame
// is worked out again only when the rows drawn or the frame change (once or
// twice a frame); 0: at every use.
#ifndef TS_GPU_RANGE_MEMO
#define TS_GPU_RANGE_MEMO 1
#endif
// TS_CLUT_IDENTITY 1: full CLUT loads are found by identity (CBP, format and
// GS page versions -> the content hash; 24 bytes an entry) and the CPU
// renderer's CLUT buffer is filled only when something reads it; 0: the
// 128-entry palette cache holding each buffer (1 KB an entry), as before.
// Off by itself when the boot self-test of the load order fails.
#ifndef TS_CLUT_IDENTITY
#define TS_CLUT_IDENTITY 1
#endif
// TS_XF_DIRTY_ROWS 1: only the transform-constant rows the native pipeline
// says changed (nv2aXfConstantsChanged) are rebuilt and compared, and only
// rows rebuilt with a new value are sent to the GPU; 0: the whole block
// rebuilt and compared, and every row compared with the GPU's copy.
#ifndef TS_XF_DIRTY_ROWS
#define TS_XF_DIRTY_ROWS 1
#endif
// TS_NATIVE_EMIT_BULK 1 (default: TS_NATIVE_EMIT_TIER0's value; src/xbox/
// PUSH-BC-PLAN.md section 3.2, C-EMIT): the Tier 0 bulk path, SubmitPrimitives
// in gs_nv2a_screen.inl, takes a run of decoded primitives of one PRIM in
// one call (one texture lookup, one key, one reserve); the backend declares
// it in DrawPaths. 0: the old path (the front end kicks primitives one by
// one; DrawPaths has no bulk bit, so a build with TS_NATIVE_EMIT_TIER0 on
// and this off refuses to start).
#ifndef TS_NATIVE_EMIT_BULK
#define TS_NATIVE_EMIT_BULK TS_NATIVE_EMIT_TIER0
#endif
// TS_NV2A_SCREEN_SEGMENTS 1 (C-EMIT, section 5.10): the screen vertex ring
// is two fenced segments, like the transform ring; a full segment is
// handed to the GPU behind a fence and the ring waits only for the other
// segment's fence. 0: a full ring drains the whole GPU (waitIdle).
#ifndef TS_NV2A_SCREEN_SEGMENTS
#define TS_NV2A_SCREEN_SEGMENTS 1
#endif
// TS_NV2A_SPRITE_QUADS 1 (C-EMIT, section 5.10 "optional QUADS after T9"):
// the bulk path sends sprites as one quad of four vertices (topology 2)
// instead of two triangles of three. Only when the console probe's T9 has
// shown a quad covers exactly the pixels of its triangle pair. 0 (default):
// triangle pairs, as the per-primitive path.
#ifndef TS_NV2A_SPRITE_QUADS
#define TS_NV2A_SPRITE_QUADS 0
#endif
// TS_NV2A_SELFCHECK 1 (default: TS_NATIVE_DRAW_SELFCHECK's value): every
// texture lookup also walks the list and every full CLUT load also takes
// the CPU renderer's row reads, every constant upload checks the rows it
// leaves out; differences count in drawdiff= and the [TS:tex] line, the
// first few are logged, and the old path's result is the one used.
#ifndef TS_NV2A_SELFCHECK
#if defined(TS_NATIVE_DRAW_SELFCHECK)
#define TS_NV2A_SELFCHECK TS_NATIVE_DRAW_SELFCHECK
#else
#define TS_NV2A_SELFCHECK 0
#endif
#endif

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
#if TS_HWPROF
    // Profiler builds: the profiler's 96 KB table is reserved at start-up
    // (xbox_hwprof.cpp) and comes out of this pool, not the game's memory.
    constexpr uint32_t kTexturePoolBytes = 1280u * 1024u - 128u * 1024u;
#else
    constexpr uint32_t kTexturePoolBytes = 1280u * 1024u;
#endif
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

// TS_NV2A_TEXTURE_STREAM 1: a texture is decoded and encoded through fixed
// buffers allocated with the renderer (80 KB), not two vectors as large as
// the biggest texture seen so far (decoded RGBA, up to 4 MB, and the encoded
// copy), which stayed allocated and grew mid-match whenever a bigger texture
// came (the first 256 x 256 one grew `decoded` from 64 KB to exactly 256 KB).
// Up to kScratchTexels texels it is decoded once (the second decode is
// gone); a bigger one is decoded a band of rows at a time: for the pack
// key (a pack hit stops there), for its format, then to encode it into its
// GPU memory. Same texels, format and size as before. 0: the vectors, as
// before.
// TS_NV2A_TEXTURE_SELFCHECK 1 (development): each texture is also made the
// old way and the two compared (drawdiff "texenc"; allocates).
#ifndef TS_NV2A_TEXTURE_STREAM
#define TS_NV2A_TEXTURE_STREAM 1
#endif
#ifndef TS_NV2A_TEXTURE_SELFCHECK
#define TS_NV2A_TEXTURE_SELFCHECK 0
#endif
#if TS_NV2A_TEXTURE_STREAM
    constexpr uint32_t kScratchTexels = 16384u; // 128 x 128 decoded at once: 64 KB
    constexpr size_t kStageBytes = 16384u;      // encoded texels on their way to the GPU
    // The rows of a bigger texture decoded at a time: as many as fit the
    // scratch, a multiple of 8 (whole 2x2 pairs and whole block rows of the
    // halved texture). At least 16: textures are at most 1,024 wide.
    constexpr uint32_t streamRows(uint32_t width) { return (kScratchTexels / width) & ~7u; }
#endif
// TS_NV2A_MISS_KEYS_FIXED 1: the miss statistics' key sets are fixed tables
// (Impl::KeySet), not std::sets allocating as the frame goes. 0: the sets.
#ifndef TS_NV2A_MISS_KEYS_FIXED
#define TS_NV2A_MISS_KEYS_FIXED 1
#endif
// TS_NV2A_MP_TEXTURE_BUDGET 1: in split screen (2-4 local players) the
// runtime path's textures take less memory at their peak (the cache plus the
// dropped and one-frame textures waiting for the GPU): with the pack carrying
// the world 896 KB against 1.25 MB (1 MB + 768 KB in its trial), without it
// 1.4 MB against 1.75 MB.
// - At most kMultiplayerRetiredLimit waits for the GPU (else 768 KB); past
//   it the GPU is waited for and they are freed, mid-frame.
// - While the pack carries the world (the runtime path drew under half of
//   kTextureBudgetWithPack for kMultiplayerQuietFrames frames in a row), the
//   cache budget is kTextureBudgetWithPack at once, not after the pack's
//   300-frame trial, and the cache is trimmed to it at the frame's start
//   (what the last frame did not draw goes; a lowered budget otherwise only
//   stops growth). A frame over half lifts it at once, before the pack's own
//   three-quarter restore would.
// Costs decodes and GPU waits when the runtime path is heavy. Not measured
// (no split-screen run yet): off. 0: the same for any number of players.
#ifndef TS_NV2A_MP_TEXTURE_BUDGET
#define TS_NV2A_MP_TEXTURE_BUDGET 0
#endif
    constexpr size_t kMultiplayerRetiredLimit = 384u * 1024u;
    constexpr uint32_t kMultiplayerQuietFrames = 30u;
    // The game's local player count (ilinkGetNumLocalPlayers: gp - 0x608C).
    constexpr uint32_t kLocalPlayersAddress = 0x003AE764u;

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
    // The screen half writes these through gs_nv2a_screen::Vertex (the same
    // layout; gs_nv2a_screen_math.h).
    static_assert(sizeof(GpuVertex) == sizeof(gs_nv2a_screen::Vertex) &&
                      offsetof(GpuVertex, color) == offsetof(gs_nv2a_screen::Vertex, color) &&
                      offsetof(GpuVertex, s) == offsetof(gs_nv2a_screen::Vertex, s) &&
                      offsetof(GpuVertex, q) == offsetof(gs_nv2a_screen::Vertex, q),
                  "GpuVertex and gs_nv2a_screen::Vertex layouts");

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
#if TS_NATIVE_INPLACE
    // M8's skin program for in-place strips (vertex mode 8): the bone index
    // read as the game keeps it (shaders/gs_xf.vs.cg, XF_SKIN_INPLACE; built
    // by src/xbox/mk/c_xf.mk with TS_NATIVE_INPLACE=1).
    const uint32_t kXfSkinInPlace[] = {
#include "gs_xf_skininplace.inl"
    };
#endif
    struct VertexProgram
    {
        const uint32_t *words;
        uint32_t count;
    };
    // Vertex mode 0: pass-through (screen-space vertices); 1 + variant: the
    // native pipeline's transform programs (GSXfConstants::Variant).
    // (The in-place modes 5-8 run these too: gs_nv2a_xf.inl's programStart;
    // a sixth, with TS_NATIVE_INPLACE, is mode 8's.)
    const VertexProgram kVertexPrograms[] = {
        {kVertexProgram, sizeof(kVertexProgram) / 4}, {kXfPlain, sizeof(kXfPlain) / 4},
        {kXfLit, sizeof(kXfLit) / 4},                 {kXfEnv, sizeof(kXfEnv) / 4},
        {kXfSkin, sizeof(kXfSkin) / 4},
#if TS_NATIVE_INPLACE
        {kXfSkinInPlace, sizeof(kXfSkinInPlace) / 4},
#endif
    };
    constexpr uint32_t kVertexProgramCount = uint32_t(sizeof(kVertexPrograms) / sizeof(kVertexPrograms[0]));
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
    // The screen-vertex arithmetic lives in gs_nv2a_screen_math.h (one copy
    // for the per-primitive path, the bulk path and the host test).
    using gs_nv2a_screen::d3dColor;
    using gs_nv2a_screen::depth24;

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
namespace
{
    GSNv2aLookupStats s_lookupStats{};
    // nv2aXfConstantsChanged's last serial and its rows.
    uint32_t s_xfChangedSerial = 0;
    uint64_t s_xfChangedRows = ~0ull;
}
GSNv2aLookupStats nv2aLookupStats() { return s_lookupStats; }

void nv2aXfConstantsChanged(uint32_t serial, uint64_t rows)
{
    s_xfChangedSerial = serial;
    s_xfChangedRows = rows;
}

std::ostream &operator<<(std::ostream &out, const GSNv2aLookupStats &s)
{
    return out << "look=" << s.textures << " slow=" << s.textureSlow << " ovf=" << s.indexOverflows
               << " idxdiff=" << s.indexDiffs << " clut=" << s.clutLoads << " hit=" << s.clutHits
               << " miss new/conf/ver/other=" << s.clutNew << "/" << s.clutConflicts << "/" << s.clutVersions << "/"
               << s.clutOther << " old hit/new/conf/ver=" << s.oldHits << "/" << s.oldNew << "/" << s.oldConflicts
               << "/" << s.oldVersions << " fill=" << s.clutFills << " cdiff=" << s.clutDiffs << " krows=" << s.constRows
               << " kup=" << s.constUploads << " keyhit=" << s.keyHits << " keydiff=" << s.keyChecks << "/" << s.keyDiffs;
}

// Guest RAM, for the local player count (TS_NV2A_MP_TEXTURE_BUDGET).
namespace
{
    const uint8_t *g_nv2aGuestRam = nullptr;
}
void nv2aSetGuestRam(const uint8_t *rdram)
{
    g_nv2aGuestRam = rdram;
}

struct GSNv2aBackend::Impl
{
    GSCpuBackend cpu;
    uint8_t *vram = nullptr;
    uint32_t vramSize = 0;

    // ------------------------------------------------------ page versions
    std::array<uint32_t, kPageCount> pageVersion{};
    uint32_t pageEpoch = 1; // moves with every bump: no page changed while it stands still

    void bumpPages(const GSCpuBackend::VramRange &range)
    {
        ++pageEpoch;
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
#if TS_NV2A_DISPLAY_HEIGHT
    // What the display showed at the last presentation (rows 0: nothing yet;
    // the first draw's scissor decides).
    gs_nv2a_clip::Display display{};
    uint32_t heightNotes = 0; // frames whose first draw's scissor disagreed (logged, the first few)
#endif
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
#if TS_GPU_RANGE_MEMO
    // The range and what it was worked out from (rows 0: none yet).
    GSCpuBackend::VramRange gpuRangeMemo{};
    uint32_t gpuRangeRows = 0, gpuRangeFbp = 0, gpuRangeFbw = 0, gpuRangePsm = 0;
    GSCpuBackend::VramRange gpuRange()
    {
        const uint32_t rows = std::max<uint32_t>(gpuRows, 1u);
        if (rows != gpuRangeRows || frameFbp != gpuRangeFbp || frameFbw != gpuRangeFbw || framePsm != gpuRangePsm)
        {
            gpuRangeRows = rows;
            gpuRangeFbp = frameFbp;
            gpuRangeFbw = frameFbw;
            gpuRangePsm = framePsm;
            gpuRangeMemo = frameRangeExact(framePsm, frameFbp, frameFbw, rows);
        }
        return gpuRangeMemo;
    }
#else
    GSCpuBackend::VramRange gpuRange() const
    {
        return frameRangeExact(framePsm, frameFbp, frameFbw, std::max<uint32_t>(gpuRows, 1u));
    }
#endif

    bool isScreenTarget(const GSDrawState &state) const
    {
        const GSFrameReg &f = state.context.frame;
        if (f.fbw != 10u || (f.psm != GS_PSM_CT16 && f.psm != GS_PSM_CT16S && f.psm != GS_PSM_CT32 && f.psm != GS_PSM_CT24))
            return false;
        if (displayFbp[0] == UINT32_MAX)
            return true; // nothing presented yet: any 640-wide colour buffer
        return f.fbp == displayFbp[0] || f.fbp == displayFbp[1];
    }

#include "gs_nv2a_state.inl"
#include "gs_nv2a_screen.inl"

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

#include "gs_nv2a_xf.inl"
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
#if TS_NV2A_MP_TEXTURE_BUDGET
        if (splitScreen && textureBytes > effectiveBudget())
            trimCache();
#endif
    }


    void beginFrame(const GSDrawState &state)
    {
        g_nv2aStep = 20;
        frameOpen = true;
        frameFbp = state.context.frame.fbp;
        frameFbw = state.context.frame.fbw;
        framePsm = state.context.frame.psm;
#if TS_NV2A_DISPLAY_HEIGHT
        // The buffer shown at the last presentation (the game draws the same
        // size into both buffers).
        frameHeight = gs_nv2a_clip::frameRows(display, frameFbw, framePsm, state.context.scissor.y1);
        if (frameHeight != gs_nv2a_clip::scissorRows(state.context.scissor.y1) && ++heightNotes <= 4u)
            std::cout << "[TS:nv2a] frame height " << frameHeight << " from the display (first draw's scissor: "
                      << gs_nv2a_clip::scissorRows(state.context.scissor.y1) << " rows)" << std::endl;
#else
        frameHeight = std::clamp<uint32_t>(uint32_t(state.context.scissor.y1) + 1u, 1u, 512u);
#endif
#if TS_NV2A_SCISSOR
        clipScissor = UINT64_MAX; // the mapping may have changed (clipFor)
#endif
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
#if TS_NV2A_SCISSOR
        // The clear covers the whole screen, not the last frame's last view.
        if (gpuClipX != gs_nv2a_clip::kFullClipX || gpuClipY != gs_nv2a_clip::kFullClipY)
            p = pushWindowClip(p, gs_nv2a_clip::kFullClipX, gs_nv2a_clip::kFullClipY);
#endif
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
        resetScreenSegments();
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
#if TS_NV2A_MP_TEXTURE_BUDGET
        updateSplitScreen();
#endif
        g_nv2aTextureStats.frameTextures = frameTextures;
        g_nv2aTextureStats.frameTextureBytes = frameTextureBytes;
        g_nv2aTextureStats.frameFills = frameFills;
        frameTextures = frameTextureBytes = frameFills = 0;
        // Hand-overs to the GPU (pb_end, pbkit's own included) since the
        // last frame's end.
        g_nv2aTextureStats.framePbEnds = pb_ts_end_count - frameEndPbEnds;
        g_nv2aTextureStats.pbEnds = frameEndPbEnds = pb_ts_end_count;
#if TS_NV2A_MISS_KEYS_FIXED
        missKeysThis ^= 1u; // this frame's keys are last frame's now
        frameKeys().clear();
#else
        lastFrameKeys.swap(frameKeys);
        frameKeys.clear();
#endif
#if TS_TEXTURE_INDEX
        if (!indexValid && textures.size() <= kIndexRefill)
            rebuildIndex();
#endif
        s_lookupStats.clutFills = cpu.ClutFills();
        ++frameNumber;
        g_nv2aTextureStats.frames = frameNumber;
    }
    uint32_t frameEndPbEnds = 0;


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
        if (!stateMatches())
            p = applyState(p, batchKey);
        if (batchKey.topology == 2u)
        {
            // Quads (the Tier 0 bulk path's sprites, TS_NV2A_SPRITE_QUADS):
            // 256 vertices a draw, whole quads each.
            p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_QUADS);
            for (uint32_t first = 0; first < batchCount; first += 256)
            {
                const uint32_t n = std::min<uint32_t>(batchCount - first, 256u);
                p = push1(p, 0x40000000u | NV097_DRAW_ARRAYS, ((n - 1u) << 24) | (batchFirst + first));
            }
        }
        else if (batchKey.topology == 1u)
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
#if TS_NV2A_TEXTURE_STREAM
        // In the texture scratch (no texture is being made here): no
        // allocation mid-match. FBW is 6 bits: at most 4,032 wide.
        static_assert(63u * 64u <= kScratchTexels, "a frame row fits the texture scratch");
        uint32_t *const values = texScratch;
#else
        std::vector<uint32_t> buffer(width);
        uint32_t *const values = buffer.data();
#endif
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
            cpuFlushed().WriteVramRect(framePsm, frameFbp * 32u, frameFbw, 0, y, width, 1, values);
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

// The renderer the in-place writer hooks reach (one NV2A backend at a time).
namespace
{
    GSNv2aBackend::Impl *s_inPlaceImpl = nullptr;
}

GSNv2aBackend::GSNv2aBackend() : m(std::make_unique<Impl>()) { s_inPlaceImpl = m.get(); }
GSNv2aBackend::~GSNv2aBackend()
{
    if (s_inPlaceImpl == m.get())
        s_inPlaceImpl = nullptr;
}

void nv2aInPlaceBeforeWrite()
{
    if (s_inPlaceImpl)
        s_inPlaceImpl->inPlaceBarrier();
}

void nv2aInPlaceAfterWrite(bool flushCache)
{
    if (s_inPlaceImpl)
        s_inPlaceImpl->inPlaceAfterWrite(flushCache);
}

void GSNv2aBackend::Initialize(uint8_t *vram, uint32_t vramSize)
{
    m->vram = vram;
    m->vramSize = vramSize;
    m->cpu.Initialize(vram, vramSize);
#if TS_CLUT_IDENTITY
    // Boot self-test: the full-load order against the row reads it
    // replaces, over random local memory (restored); palette identities
    // only when they agree.
    if (vram && !m->clutOrderChecked)
    {
        m->clutOrderChecked = true;
        m->clutIdentity = m->cpu.CheckFullClutOrder();
        std::cout << "[TS:xbox] CLUT load order self-test: "
                  << (m->clutIdentity ? "ok" : "differs, palette identities off") << std::endl;
    }
#endif
}

void GSNv2aBackend::Reset()
{
    m->cpu.Reset();
    m->textureFlushPending = false; // the reset invalidated the page cache
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
    m->cpuFlushed().Submit(batch);
    const GSCpuBackend::VramRange target = GSCpuBackend::FrameRange(batch.state);
    m->noteCpuWrite(target);
    m->markTargetPages(target, true);
}

bool GSNv2aBackend::BeginXfRun(const GSDrawState &state, const GSXfConstants &constants, GSXfCursor &cursor)
{
    return m->beginXfRun(state, constants, cursor);
}

void GSNv2aBackend::GrowXfCursor(GSXfCursor &cursor, uint32_t count) { m->growXfCursor(cursor, count); }

void GSNv2aBackend::EmitXfStrip(const GSXfVertex *vertices, uint32_t count) { m->emitXfStrip(vertices, count); }

void GSNv2aBackend::EndXfRun(GSXfCursor &cursor) { m->endXfRun(cursor); }

bool GSNv2aBackend::SubmitStrip(const GSDrawState &state, const GSVertex *vertices, uint32_t count)
{
    if (state.prim.type != GS_PRIM_TRISTRIP || count > 64u || !m->isScreenTarget(state))
        return false;
    m->submitScreenVerts(state, vertices, count);
    return true;
}

// The Push B/C draw paths: each fragment's member answers the old path until
// its track lands it (gs_nv2a_backend.h).
uint32_t GSNv2aBackend::DrawPaths() const
{
    return Impl::kStateDrawPaths | Impl::kScreenDrawPaths | Impl::kXfDrawPaths;
}

bool GSNv2aBackend::SubmitPrimitives(const GSDrawState &state, uint32_t prim, const GSVertex *vertices, uint32_t count)
{
    return m->submitPrimitives(state, prim, vertices, count);
}

void GSNv2aBackend::XfInPlace(GSXfCursor &cursor, const GSXfInPlaceStrip *strips, uint32_t count)
{
    m->xfInPlace(cursor, strips, count);
}

GSNativeRunResult GSNv2aBackend::BeginNativeRun(const GSNativeRun &run, GSXfCursor &cursor)
{
    return m->beginNativeRun(run, cursor);
}

void GSNv2aBackend::LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut)
{
    if (!m->clutLoads(tex0))
        return;
#if TS_CLUT_IDENTITY
    // (No CPU renderer call: its pending TEXFLUSH waits for the next one
    // that reads through its page cache, which this load does not.)
    const bool identity = m->identityLoad(tex0);
    if (!identity)
        m->cpuFlushed();
#else
    m->cpuFlushed();
#endif
    ++g_nv2aTextureStats.clutLoads;
    ++s_lookupStats.clutLoads;
    if (m->screenGpuNewer && overlaps(GSCpuBackend::ClutRange(tex0), m->gpuRange()))
    {
        ++g_nv2aTextureStats.wbClut;
        m->writeBackScreen();
    }
#if TS_CLUT_IDENTITY
    if (identity)
    {
        m->loadFullClut(tex0, texclut);
        return;
    }
    if (m->clutIdentity)
    {
        // Not a full load, or its source wraps the end of GS memory.
        ++s_lookupStats.clutOther;
        m->cpu.LoadClut(tex0, texclut);
        m->refreshClutHash();
        return;
    }
#endif
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
            ++s_lookupStats.clutHits;
            m->cpu.SetLoadedClut(tex0, e.clut, e.hash);
            m->clutHash = e.hash;
            return;
        }
        // Why it missed: the slot held this palette from other page
        // versions, held another one (a conflict), or nothing yet.
        ++(e.cbp == cbp && e.cpsm == tex0.cpsm ? s_lookupStats.clutVersions
           : e.cbp != UINT32_MAX              ? s_lookupStats.clutConflicts
                                              : s_lookupStats.clutNew);
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
    ++s_lookupStats.clutOther;
    m->cpu.LoadClut(tex0, texclut);
    m->refreshClutHash();
}

uint64_t GSNv2aBackend::DebugClutState()
{
    std::array<uint16_t, 512> clut;
    std::array<uint32_t, 2> cpuCbp;
    m->cpu.GetClutState(clut, cpuCbp);
    uint64_t state = m->cpu.ClutHash();
    for (const uint64_t v : {uint64_t(cpuCbp[0]), uint64_t(cpuCbp[1]), uint64_t(m->clutCbp[0]), uint64_t(m->clutCbp[1]), m->clutHash})
        state = state * 0x100000001B3ull + v;
    return state;
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
    m->cpuFlushed().BeginTransfer(command);
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
    m->cpuFlushed().UploadImage(data, sizeBytes);
    const GSTransferCommand &c = m->transfer;
    const auto dest = frameRangeRows(c.bitbltbuf.dpsm, c.bitbltbuf.dbp / 32u, c.bitbltbuf.dbw,
                                     uint32_t(c.trxpos.dsay) + c.trxreg.rrh + 1u);
    m->noteCpuWrite({dest.begin, dest.end == UINT64_MAX ? UINT64_MAX : dest.end + 2u * kPageBytes});
    m->markTargetPages(dest, false); // uploaded texels: textures again
}

void GSNv2aBackend::Flush() { m->flushBatch(); }
void GSNv2aBackend::TextureFlush() { m->textureFlushPending = true; }
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
#if TS_NV2A_DISPLAY_HEIGHT
    // The next frame's height (beginFrame, gs_nv2a_clip::frameRows).
    gs_nv2a_clip::displaySetup(request.pmode, request.dispfb1, request.display1, request.dispfb2, request.display2,
                               m->display);
#endif
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
    const bool result = m->cpuFlushed().ClearFramebuffer(context, rgba);
    m->noteCpuWrite(GSCpuBackend::FrameRange(state));
    return result;
}

uint32_t GSNv2aBackend::ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes)
{
    return m->cpuFlushed().ConsumeLocalToHostBytes(dst, maxBytes);
}

uint32_t GSNv2aBackend::ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const
{
    return m->cpu.ReadVram(psm, base, bw, x, y);
}

void GSNv2aBackend::WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value)
{
    m->cpuFlushed().WriteVram(psm, base, bw, x, y, value);
    m->noteCpuWrite({0, UINT64_MAX});
}

void GSNv2aBackend::SnapshotVram(std::vector<uint8_t> &out) const { m->cpu.SnapshotVram(out); }
GSTransferSnapshot GSNv2aBackend::GetTransferSnapshot() const { return m->cpu.GetTransferSnapshot(); }
