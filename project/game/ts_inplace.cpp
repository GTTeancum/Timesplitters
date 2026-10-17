// In-place fetch glue: see ts_inplace.h.
#include "ts_inplace.h"
#include "ts_game_hooks.h"
#include "vu1_native_xf.h"

#include "runtime/gs/gs_backend.h"

#if defined(PLATFORM_XBOX)
#include "../../src/xbox/gs_nv2a_backend.h" // the writer barrier
#include "../../src/xbox/xbox_guest_ram.h"  // physical contiguity
#include "../../src/xbox/xbox_perf.h"       // TS_NATIVE_INPLACE, the report line
#endif
#ifndef TS_NATIVE_INPLACE
#define TS_NATIVE_INPLACE 0
#endif

#include <algorithm>
#include <cstring>

TsInplaceStats g_tsInplaceStats;

namespace
{
    using ts_native_xf::kLayouts;
    using ts_native_xf::Layout;

    uint32_t s_stamp = 1u;
    // GSXfConstants::Variant by layout kind (ts_native_xf::Kind: Plain,
    // EnvMap, Lit, Skinned): the in-place mode is 5 + variant, the ring's
    // vertex mode plus four.
    constexpr uint32_t kVariantOfKind[4] = {0u, 2u, 1u, 3u};

    // UNPACK formats by the decoder's rules: bytes a vector.
    uint32_t bytesPerVector(uint8_t format)
    {
        const uint32_t vn = (format >> 2) & 3u, vl = format & 3u, components = vn + 1u;
        const uint32_t bitsPerComponent = vl == 0u ? 32u : vl == 1u ? 16u : vl == 2u ? 8u : (vn == 3u ? 4u : 16u);
        const uint32_t bitsPerVector = (vl == 3u && vn == 3u) ? 16u : components * bitsPerComponent;
        return (bitsPerVector + 7u) / 8u;
    }

    // The span of n elements physically contiguous (P1 always; P0 the
    // page walk). Not on the host build: nothing is in place there.
    bool placed(GSXfInPlaceArray &a, uint32_t n, uint32_t elementBytes)
    {
#if defined(PLATFORM_XBOX)
        uint32_t physical = 0;
        if (!xboxGuestContiguous(a.host, (n - 1u) * a.stride + elementBytes, physical))
            return false;
        a.physical = physical;
        return true;
#else
        (void)a;
        (void)n;
        (void)elementBytes;
        return false;
#endif
    }

    // Positions, normals, texture coordinates: three floats of V3-32
    // (stride 12) or V4-32 (stride 16).
    bool floats3(const TsInplaceSource &s, uint32_t n, GSXfInPlaceArray &a)
    {
        if (!s.host || s.elements < n || (s.format != 0x8u && s.format != 0xCu))
            return false;
        a.host = s.host;
        a.format = GSXfInPlaceFormat::F32;
        a.components = 3u;
        a.stride = uint8_t(s.format == 0x8u ? 12u : 16u);
        return true;
    }

    inline uint32_t load32(const uint8_t *p)
    {
        uint32_t v;
        std::memcpy(&v, p, 4);
        return v;
    }

    // A writer's change: a new stamp, and (Case C) a WBINVD before the next
    // in-place draw. Done before the writer runs too: one that unwinds to
    // the scheduler midway never reaches its After hook, and the draws
    // between its parts must not use what the GPU cached before it.
    void noteWrite()
    {
        ++s_stamp;
        if (s_stamp == 0u)
            s_stamp = 1u;
        g_tsInplaceStats.stamp = s_stamp;
#if defined(PLATFORM_XBOX)
        nv2aInPlaceAfterWrite(!TS_INPLACE_SNOOP);
#endif
    }
    void writerBefore(void *, uint8_t *, R5900Context *, PS2Runtime *)
    {
#if defined(PLATFORM_XBOX)
        nv2aInPlaceBeforeWrite(); // what the GPU has not fetched yet is drawn first
#endif
        ++g_tsInplaceStats.writers;
        noteWrite();
    }
    void writerAfter(void *, uint8_t *, R5900Context *, PS2Runtime *) { noteWrite(); }

#if defined(PLATFORM_XBOX)
    void inplaceReportLine(XboxReportLine &line)
    {
        const TsInplaceStats &s = g_tsInplaceStats;
        const GSNv2aTextureStats &t = g_nv2aTextureStats;
        line.add(" placement=P%u strips=%u verts=%u breaks=%u wbinvd=%u barrierwaits=%u", xboxGuestRamPlacement(),
                 t.inPlaceStrips, t.inPlaceVertices, t.inPlaceBreaks, t.inPlaceFlushes, t.inPlaceBarrierWaits);
        line.add(" prepared=%u refused=%u fmt/q/bone/span=%u/%u/%u/%u writers=%u", s.prepared, s.refused,
                 s.refusedFormat, s.refusedQ, s.refusedBone, s.refusedSpan, s.writers);
        if (s.checked)
            line.add(" idiff=%u/%u", s.diffs, s.checked);
    }
#endif
}

uint32_t tsInplaceStamp() { return s_stamp; }

bool tsInplacePrepareStrip(uint32_t kind, uint32_t n, const TsInplaceSource (&src)[kTsInplaceRoles], GSXfInPlaceStrip &out)
{
    if (!TS_NATIVE_INPLACE || n < 3u)
        return false;
    const Layout &L = kLayouts[kind & 3u];
    out = GSXfInPlaceStrip{};
    out.count = n;
    out.mode = 5u + kVariantOfKind[kind & 3u];
    out.stamp = s_stamp;
    auto refuse = [&](uint32_t &why) {
        ++why;
        ++g_tsInplaceStats.refused;
        return false;
    };
    if (!floats3(src[kTsInplacePosition], n, out.position))
        return refuse(g_tsInplaceStats.refusedFormat);
    if ((L.lit || L.envMap) && !floats3(src[kTsInplaceNormal], n, out.normal))
        return refuse(g_tsInplaceStats.refusedFormat);
    {
        const TsInplaceSource &c = src[kTsInplaceColour];
        if (!c.host || c.elements < n || c.format != 0xEu) // V4-8
            return refuse(g_tsInplaceStats.refusedFormat);
        out.colour.host = c.host;
        out.colour.format = GSXfInPlaceFormat::UbRgba;
        out.colour.components = 4u;
        out.colour.stride = 4u;
    }
    if (!L.envMap)
    {
        if (!floats3(src[kTsInplaceTexture], n, out.texture))
            return refuse(g_tsInplaceStats.refusedFormat);
        // q of +-0 is 1 on the ring (as the GS treats it); in place it would
        // divide by zero.
        const uint8_t *t = static_cast<const uint8_t *>(out.texture.host);
        for (uint32_t v = 0; v < n; ++v)
            if ((load32(t + v * out.texture.stride + 8u) & 0x7FFFFFFFu) == 0u)
                return refuse(g_tsInplaceStats.refusedQ);
    }
    if (L.skinned)
    {
        const TsInplaceSource &b = src[kTsInplaceBone];
        // S-16, V2-16, V3-16, V4-16: the index is the first 16 bits.
        if (!b.host || b.elements < n || (b.format != 0x1u && b.format != 0x5u && b.format != 0x9u && b.format != 0xDu))
            return refuse(g_tsInplaceStats.refusedFormat);
        const uint32_t stride = bytesPerVector(b.format);
        for (uint32_t v = 0; v < n; ++v)
        {
            uint16_t index;
            std::memcpy(&index, b.host + v * stride, 2);
            if (index > 2u)
                return refuse(g_tsInplaceStats.refusedBone);
        }
        out.bone.host = b.host;
        out.bone.format = GSXfInPlaceFormat::S16;
        out.bone.components = 1u;
        out.bone.stride = uint8_t(stride);
    }
    // Every array's span physically contiguous.
    if (!placed(out.position, n, 12u) || ((L.lit || L.envMap) && !placed(out.normal, n, 12u)) ||
        !placed(out.colour, n, 4u) || (!L.envMap && !placed(out.texture, n, 12u)) ||
        (L.skinned && !placed(out.bone, n, 2u)))
        return refuse(g_tsInplaceStats.refusedSpan);
    out.vertices = out.position.host;
    out.stride = out.position.stride;
    ++g_tsInplaceStats.prepared;
    return true;
}

void tsInplaceFetch(const GSXfInPlaceStrip &strip, uint32_t kind, uint32_t v, GSXfVertex &o)
{
    const Layout &L = kLayouts[kind & 3u];
    const uint8_t *p = static_cast<const uint8_t *>(strip.position.host) + v * strip.position.stride;
    std::memcpy(&o.x, p, 12);
    if (L.lit || L.envMap)
        std::memcpy(&o.nx, static_cast<const uint8_t *>(strip.normal.host) + v * strip.normal.stride, 12);
    else
        o.nx = o.ny = o.nz = 0.0f;
    // UB_OGL: byte 0 red ... byte 3 alpha; the ring's record keeps B, G, R, A.
    const uint8_t *c = static_cast<const uint8_t *>(strip.colour.host) + v * 4u;
    o.color = uint32_t(c[2]) | (uint32_t(c[1]) << 8) | (uint32_t(c[0]) << 16) | (uint32_t(c[3]) << 24);
    if (L.envMap)
    {
        o.s = o.t = 0.0f;
        o.q = 1.0f;
    }
    else
        std::memcpy(&o.s, static_cast<const uint8_t *>(strip.texture.host) + v * strip.texture.stride, 12);
    uint32_t bone = 0;
    if (L.skinned)
    {
        int16_t index;
        std::memcpy(&index, static_cast<const uint8_t *>(strip.bone.host) + v * strip.bone.stride, 2);
        bone = uint32_t(std::min<int32_t>(index, 2)); // the program: min(index, 2) * 4
    }
    o.bone4 = static_cast<float>(bone * 4u);
}

void tsInplaceInstall(PS2Runtime &runtime)
{
    (void)runtime;
    static const TsGameFn kWriters[] = {TsGameFn::vtxlistcolour, TsGameFn::obInstLight, TsGameFn::obPrecalcDbufGfxData,
                                        TsGameFn::partPrecalcDmaData};
    for (const TsGameFn fn : kWriters)
    {
        tsGameHookOn(fn, TsHookPhase::Before, &writerBefore);
        tsGameHookOn(fn, TsHookPhase::After, &writerAfter);
    }
#if defined(PLATFORM_XBOX)
    xboxRegisterReportLine("[TS:inplace]", &inplaceReportLine);
#endif
}
