#include "xbox_vif_source.h"
#include "../../project/game/vu1_native_xf.h"

#include <algorithm>
#include <atomic>
#include <cstddef>
#include <cstring>
#include <limits>

namespace
{
    constexpr uint32_t kRamBytes = 32u * 1024u * 1024u;
    struct State
    {
        std::atomic_flag busy = ATOMIC_FLAG_INIT;
        // A failed/nested decoder never edits the owner's descriptors or
        // phase. Changing this serial permanently revokes its current loan.
        std::atomic<uint32_t> interference{0};
        std::atomic<uint32_t> contention{0};
        XboxVifSourceStats stats;
    } state;
    // Only the decoder's own thread may inspect its stack object. A
    // foreign/nested decoder can revoke through the atomic serial, but
    // can never borrow or dereference another thread's stack pointer.
    thread_local XboxVifSourceScope *owner = nullptr;

    [[maybe_unused]] void revoke()
    {
        uint32_t value = state.interference.load(std::memory_order_relaxed);
        while (value != std::numeric_limits<uint32_t>::max() &&
               !state.interference.compare_exchange_weak(value, value + 1u,
                                                         std::memory_order_acq_rel,
                                                         std::memory_order_relaxed)) {}
    }

    uint32_t sourceStride(uint32_t format)
    {
        if (format > 15u) return 0;
        const uint32_t width = format & 3u;
        return width < 3u ? ((format >> 2u) + 1u) * (4u >> width)
                          : format == 15u ? 2u : 0u;
    }

    // Exact program entries only. Both Lit entries share a vertex layout,
    // but the permit still compares the complete PC before granting a loan.
    uint32_t drawKind(uint32_t pc)
    {
        switch (pc)
        {
        case 0x0000u: return ts_native_xf::Plain;
        case 0x0d20u: return ts_native_xf::EnvMap;
        case 0x1ae0u: case 0x3520u: return ts_native_xf::Lit;
        case 0x2800u: return ts_native_xf::Skinned;
        default: return 4u;
        }
    }

    // This takes admitted standard widths only. Integer operations preserve
    // all 32-bit float payloads and do not quiet NaNs or normalize zero.
    uint32_t sourceLane(const uint8_t *source, uint32_t bytes, bool zeroExtend)
    {
        if (bytes == 4u)
        {
            uint32_t value;
            std::memcpy(&value, source, 4u);
            return value;
        }
        if (bytes == 2u)
        {
            uint16_t value;
            std::memcpy(&value, source, 2u);
            return !zeroExtend && (value & 0x8000u) ? uint32_t(value) | 0xffff0000u : value;
        }
        const uint32_t value = source[0];
        return !zeroExtend && (value & 0x80u) ? value | 0xffffff00u : value;
    }

    uint32_t sourceBone(const XboxVifSourceArray &view, uint32_t index)
    {
        const uint8_t *source = view.data + index * view.stride;
        const uint32_t value = view.format == 15u ? sourceLane(source, 2u, true) & 31u
                                                : sourceLane(source, 4u >> (view.format & 3u), view.zeroExtend);
        // The production decoder masks to 16 bits before clamping. Signed
        // S/V*-8 values must therefore retain their sign extension here.
        const uint32_t bone = value & 0xffffu;
        return bone < 2u ? bone : 2u;
    }

    XboxVifSourceScope *activeSource(const uint8_t *vu)
    {
        XboxVifSourceScope *source = owner;
        return source && source->active(vu) ? source : nullptr;
    }

    struct Arrays
    {
        const uint8_t *position = nullptr, *color = nullptr;
        const uint8_t *texture = nullptr, *normal = nullptr;
        uint32_t positionStride = 0, colorStride = 0, textureStride = 0, normalStride = 0;
        XboxVifSourceArray bone;
    };
    static_assert(sizeof(Arrays) * kXboxVifSourceMaxStrips <= 2u * 1024u,
                  "bounded source-group admission storage");

    bool prepare(XboxVifSourceScope &source, uint32_t kind, const uint8_t *vu,
                 uint32_t vi, uint32_t count, Arrays &arrays)
    {
        if (kind > ts_native_xf::Skinned || count < 3u || count > 64u ||
            !source.active(vu, kind)) return false;
        const auto &layout = ts_native_xf::kLayouts[kind];
        const uint32_t last = std::max({layout.pos, layout.rgba, layout.st,
                                        layout.normal, layout.boneIndex});
        if (last > ts_native_xf::kDataQwords - count ||
            vi > ts_native_xf::kDataQwords - count - last) return false;
        // Each required input has its own exact latest-writer proof. Lit
        // layouts need BOTH normals and STQ; skinned layouts also need the
        // first bone-index lane. Do not borrow one field as another.
        if (!source.array(vu, vi + layout.pos, count, false, arrays.position, arrays.positionStride) ||
            !source.array(vu, vi + layout.rgba, count, true, arrays.color, arrays.colorStride))
            return false;
        if (!layout.envMap &&
            !source.array(vu, vi + layout.st, count, false, arrays.texture, arrays.textureStride))
            return false;
        if ((layout.lit || layout.envMap) &&
            !source.array(vu, vi + layout.normal, count, false, arrays.normal, arrays.normalStride))
            return false;
        return !layout.skinned || source.boneArray(vu, vi + layout.boneIndex, count, arrays.bone);
    }

    bool room(const GSXfCursor &cursor, uint32_t count)
    {
        if (!cursor.next || !cursor.end) return false;
        const uintptr_t first = reinterpret_cast<uintptr_t>(cursor.next);
        const uintptr_t end = reinterpret_cast<uintptr_t>(cursor.end);
        return end >= first && (end - first) % sizeof(GSXfVertex) == 0u &&
               count <= (end - first) / sizeof(GSXfVertex);
    }

    // Write fields front to back. The destination may be write-combined;
    // never read it or issue a row load past a compact source's last vertex.
    void vertex(uint32_t kind, const Arrays &arrays, uint32_t index, GSXfVertex *out)
    {
        const auto &layout = ts_native_xf::kLayouts[kind];
        const uint8_t *position = arrays.position + index * arrays.positionStride;
        const uint8_t *color = arrays.color + index * arrays.colorStride;
        std::memcpy(&out->x, position, 12u);
        if (layout.lit || layout.envMap)
            std::memcpy(&out->nx, arrays.normal + index * arrays.normalStride, 12u);
        else
            out->nx = out->ny = out->nz = 0.0f;
        const uint32_t lane = arrays.colorStride / 4u;
        // Signed/unsigned extension of V4-8/16 has the same low bytes as
        // its original input. PACKED RGBAQ keeps only those low bytes.
        out->color = uint32_t(color[2u * lane]) | (uint32_t(color[lane]) << 8u) |
                     (uint32_t(color[0]) << 16u) | (uint32_t(color[3u * lane]) << 24u);
        if (layout.envMap)
        {
            out->s = out->t = 0.0f;
            out->q = 1.0f;
        }
        else
        {
            const uint8_t *texture = arrays.texture + index * arrays.textureStride;
            std::memcpy(&out->s, texture, 8u);
            uint32_t q;
            std::memcpy(&q, texture + 8u, 4u);
            if ((q & 0x7fffffffu) == 0u) q = 0x3f800000u;
            std::memcpy(&out->q, &q, 4u);
        }
        out->bone4 = layout.skinned ? static_cast<float>(sourceBone(arrays.bone, index) * 4u) : 0.0f;
    }

    void joined(uint32_t kind, GSXfCursor &cursor, const Arrays &arrays, uint32_t count)
    {
        GSXfVertex *out = cursor.next;
        if (cursor.join)
        {
            ts_native_xf::copyXfVertex(out, cursor.last);
            vertex(kind, arrays, 0u, out + 1u);
            out += 2u;
        }
        for (uint32_t i = 0; i + 1u < count; ++i)
            vertex(kind, arrays, i, out + i);
        vertex(kind, arrays, count - 1u, &cursor.last);
        ts_native_xf::copyXfVertex(out + count - 1u, cursor.last);
        cursor.next = out + count;
        cursor.join = true;
        ++cursor.strips;
        cursor.vertices += count;
    }
}

static_assert(sizeof(XboxVifSourceScope) <= 4u * 1024u,
              "the source loan has a fixed, bounded decoder stack footprint");
static_assert(sizeof(GSXfVertex) == 44u && offsetof(GSXfVertex, color) == 24u &&
              offsetof(GSXfVertex, s) == 28u && offsetof(GSXfVertex, bone4) == 40u,
              "source fields use the production native vertex layout");
static_assert(ts_native_xf::Plain == 0u && ts_native_xf::EnvMap == 1u &&
              ts_native_xf::kLayouts[0].vertexBase == 24u &&
              ts_native_xf::kLayouts[0].pos == 0u && ts_native_xf::kLayouts[0].rgba == 64u &&
              ts_native_xf::kLayouts[0].st == 128u && ts_native_xf::kLayouts[0].normal == 0u &&
              ts_native_xf::kLayouts[0].boneIndex == 0u && !ts_native_xf::kLayouts[0].lit &&
              !ts_native_xf::kLayouts[0].skinned && !ts_native_xf::kLayouts[0].envMap &&
              ts_native_xf::kLayouts[1].vertexBase == 24u &&
              ts_native_xf::kLayouts[1].pos == 0u && ts_native_xf::kLayouts[1].rgba == 64u &&
              ts_native_xf::kLayouts[1].st == 0u && ts_native_xf::kLayouts[1].normal == 128u &&
              ts_native_xf::kLayouts[1].boneIndex == 0u && !ts_native_xf::kLayouts[1].lit &&
              !ts_native_xf::kLayouts[1].skinned && ts_native_xf::kLayouts[1].envMap,
              "source arrays match the admitted Plain/EnvMap layouts");
static_assert(ts_native_xf::Lit == 2u && ts_native_xf::Skinned == 3u &&
              ts_native_xf::kLayouts[2].vertexBase == 24u &&
              ts_native_xf::kLayouts[2].pos == 0u && ts_native_xf::kLayouts[2].rgba == 48u &&
              ts_native_xf::kLayouts[2].st == 96u && ts_native_xf::kLayouts[2].normal == 144u &&
              ts_native_xf::kLayouts[2].boneIndex == 0u && ts_native_xf::kLayouts[2].lit &&
              !ts_native_xf::kLayouts[2].skinned && !ts_native_xf::kLayouts[2].envMap &&
              ts_native_xf::kLayouts[3].vertexBase == 32u &&
              ts_native_xf::kLayouts[3].pos == 0u && ts_native_xf::kLayouts[3].rgba == 36u &&
              ts_native_xf::kLayouts[3].st == 72u && ts_native_xf::kLayouts[3].normal == 144u &&
              ts_native_xf::kLayouts[3].boneIndex == 108u && ts_native_xf::kLayouts[3].lit &&
              ts_native_xf::kLayouts[3].skinned && !ts_native_xf::kLayouts[3].envMap,
              "source arrays match the admitted Lit/Skinned layouts");

void xboxVifSourceInvalidate()
{
#if TS_VIF_SOURCE
    revoke();
#endif
}

XboxVifSourceScope::XboxVifSourceScope(const uint8_t *rdram, const uint8_t *vu, bool enabled)
{
#if TS_VIF_SOURCE
    if (!enabled || !rdram || !vu)
    {
        revoke();
        return;
    }
    serial_ = state.interference.load(std::memory_order_acquire);
    if (serial_ == std::numeric_limits<uint32_t>::max() ||
        state.busy.test_and_set(std::memory_order_acquire))
    {
        state.contention.fetch_add(1u, std::memory_order_relaxed);
        revoke();
        return;
    }
    held_ = true;
    rdram_ = rdram;
    vu_ = vu;
    owner = this;
#else
    (void)rdram; (void)vu; (void)enabled;
#endif
}

XboxVifSourceScope::~XboxVifSourceScope()
{
    if (!held_) return;
    phase_ = Empty;
    terminal_ = rdram_ = vu_ = nullptr;
    owner = nullptr;
    state.busy.clear(std::memory_order_release);
}

bool XboxVifSourceScope::valid() const
{
    return held_ && serial_ == state.interference.load(std::memory_order_acquire);
}

void XboxVifSourceScope::beginPrefix(const uint8_t *rdram, const uint8_t *vu)
{
    if (!held_) return;
    phase_ = Empty;
    if (!valid() || rdram != rdram_ || vu != vu_) return;
    count_ = 0;
    terminal_ = nullptr;
    std::memset(rows_, 0, sizeof(rows_));
    phase_ = Collecting;
    ++state.stats.prefixes;
}

void XboxVifSourceScope::noteUnpack(uint32_t dest, const uint8_t *source, uint32_t count,
                                   uint32_t format, uint32_t cl, uint32_t wl, bool zeroExtend)
{
    if (!valid() || phase_ != Collecting) return;
    const uintptr_t ram = reinterpret_cast<uintptr_t>(rdram_);
    const uintptr_t at = reinterpret_cast<uintptr_t>(source);
    const uint32_t stride = sourceStride(format);
    if (!source || !stride || !count || count > 256u || !cl || !wl ||
        cl > 255u || wl > 255u || cl < wl || count_ == kUploads ||
        at < ram || at - ram >= kRamBytes || count * stride > kRamBytes - (at - ram))
    {
        phase_ = Empty;
        ++state.stats.rejected;
        return;
    }
    const uint32_t index = count_++;
    uploads_[index] = {uint32_t(at - ram), uint16_t(dest & 1023u), uint16_t(count),
                      uint8_t(format), uint8_t(cl), uint8_t(wl), uint8_t(zeroExtend)};
    uint32_t row = dest & 1023u, cycle = 0;
    for (uint32_t i = 0; i < count; ++i)
    {
        // Even an unsupported/partial format replaces the row identity.
        // Such a final writer cannot accidentally expose earlier lanes.
        rows_[row] = uint16_t(index + 1u);
        row = (row + 1u) & 1023u;
        if (++cycle == wl)
        {
            row = (row + cl - wl) & 1023u;
            cycle = 0;
        }
    }
}

void XboxVifSourceScope::finishPrefix(const uint8_t *terminal, uint32_t code, uint32_t top)
{
    if (!valid() || phase_ != Collecting) return;
    const uint32_t opcode = (code >> 24u) & 0x7fu;
    const uint32_t pc = (code & 0xffffu) * 8u;
    if (!count_ || !terminal || (opcode != 0x14u && opcode != 0x15u) ||
        drawKind(pc) > ts_native_xf::Skinned || top >= kRows)
    {
        phase_ = Empty;
        return;
    }
    terminal_ = terminal;
    terminalCode_ = code;
    top_ = top;
    phase_ = Armed;
    ++state.stats.armed;
}

void XboxVifSourceScope::command(const uint8_t *source, uint32_t code, uint32_t top)
{
    if (!held_) return;
    phase_ = valid() && phase_ == Armed && source == terminal_ && code == terminalCode_ &&
             top == top_ ? Command : Empty;
}

XboxVifSourceCallScope::XboxVifSourceCallScope(XboxVifSourceScope &source, uint32_t pc, uint32_t top)
{
    if (source.valid() && source.phase_ == XboxVifSourceScope::Command &&
        pc == (source.terminalCode_ & 0xffffu) * 8u && top == source.top_)
    {
        source.phase_ = XboxVifSourceScope::Permit;
        source_ = &source;
    }
}

XboxVifSourceCallScope::~XboxVifSourceCallScope()
{
    if (source_) source_->phase_ = XboxVifSourceScope::Spent;
}

XboxVifSourceNativeScope::XboxVifSourceNativeScope(uint32_t pc, const uint8_t *rdram,
                                                 const uint8_t *vu, uint32_t bytes,
                                                 uint32_t top, bool worker)
{
#if TS_VIF_SOURCE
    if (worker)
    {
        revoke();
        return;
    }
    XboxVifSourceScope *source = owner;
    if (!source || !source->valid()) return;
    if (source->phase_ == XboxVifSourceScope::Native)
    {
        revoke(); // nested native work cannot restore the outer loan
        return;
    }
    if (source->phase_ != XboxVifSourceScope::Permit) return;
    // Claim exactly once, including on mismatches and non-draw entries.
    source->phase_ = XboxVifSourceScope::Spent;
    if (bytes != 16384u || rdram != source->rdram_ || vu != source->vu_ ||
        top != source->top_ || pc != (source->terminalCode_ & 0xffffu) * 8u ||
        drawKind(pc) > ts_native_xf::Skinned)
    {
        ++state.stats.rejected;
        return;
    }
    source->phase_ = XboxVifSourceScope::Native;
    source_ = source;
    ++state.stats.claims;
#else
    (void)pc; (void)rdram; (void)vu; (void)bytes; (void)top; (void)worker;
#endif
}

XboxVifSourceNativeScope::~XboxVifSourceNativeScope()
{
    if (source_) source_->phase_ = XboxVifSourceScope::Spent;
}

bool XboxVifSourceScope::active(const uint8_t *vu) const
{
    return valid() && phase_ == Native && vu == vu_;
}

bool XboxVifSourceScope::active(const uint8_t *vu, uint32_t kind) const
{
    return kind <= ts_native_xf::Skinned && active(vu) &&
           kind == drawKind((terminalCode_ & 0xffffu) * 8u);
}

bool XboxVifSourceScope::lookup(const uint8_t *vu, uint32_t row, uint32_t count,
                               XboxVifSourceArray &view) const
{
    view = {};
    if (!active(vu) || !count || count > 64u || row >= kRows || count > kRows - row)
        return false;
    const uint32_t id = rows_[row];
    if (!id || id > count_) return false;
    const Upload &upload = uploads_[id - 1u];
    if (upload.cl != upload.wl || upload.count > kRows - upload.dest ||
        row < upload.dest || row - upload.dest > upload.count ||
        count > upload.count - (row - upload.dest))
        return false;
    for (uint32_t i = 0; i < count; ++i)
        if (rows_[row + i] != id) return false;
    const uint32_t stride = sourceStride(upload.format);
    if (!stride) return false;
    view = {rdram_ + upload.offset + (row - upload.dest) * stride,
            stride, upload.format, upload.zeroExtend != 0u};
    return true;
}

bool XboxVifSourceScope::array(const uint8_t *vu, uint32_t row, uint32_t count, bool color,
                              const uint8_t *&source, uint32_t &stride) const
{
    source = nullptr;
    stride = 0;
    XboxVifSourceArray view;
    if (!lookup(vu, row, count, view)) return false;
    const bool format = color ? view.format >= 12u && view.format <= 14u
                              : view.format == 8u || view.format == 12u;
    if (!format) return false;
    source = view.data;
    stride = view.stride;
    return true;
}

bool XboxVifSourceScope::boneArray(const uint8_t *vu, uint32_t row, uint32_t count,
                                  XboxVifSourceArray &view) const
{
    return lookup(vu, row, count, view);
}

bool xboxVifSourceTryReadRow(const uint8_t *vu, uint32_t row, void *out)
{
    if (!vu || !out || row >= 1024u) return false;
    XboxVifSourceScope *source = activeSource(vu);
    if (!source) return false;
    XboxVifSourceArray view;
    if (!source->lookup(vu, row, 1u, view)) return false;
    uint32_t value[4];
    if (view.format == 15u)
    {
        const uint32_t packed = sourceLane(view.data, 2u, true);
        value[0] = packed & 31u;
        value[1] = (packed >> 5u) & 31u;
        value[2] = (packed >> 10u) & 31u;
        value[3] = (packed >> 15u) & 1u;
    }
    else
    {
        const uint32_t lanes = (view.format >> 2u) + 1u;
        const uint32_t bytes = 4u >> (view.format & 3u);
        for (uint32_t lane = 0; lane < lanes; ++lane)
            value[lane] = sourceLane(view.data + lane * bytes, bytes, view.zeroExtend);
        if (lanes == 1u)
            value[1] = value[2] = value[3] = value[0];
        else if (lanes < 4u)
            // V2/V3 do not overwrite their upper lanes. They still come
            // from the fully materialized VU image, not a following input.
            std::memcpy(value + lanes, vu + row * 16u + lanes * 4u, (4u - lanes) * 4u);
    }
    if (!source->active(vu)) return false;
    std::memcpy(out, value, sizeof(value));
    ++state.stats.readRows;
    return true;
}

bool xboxVifSourceTryDecodeStrip(uint32_t kind, const uint8_t *vu, uint32_t vi,
                                uint32_t count, GSXfVertex *out)
{
    XboxVifSourceScope *source = activeSource(vu);
    if (!source) return false;
    Arrays arrays;
    if (!out || !prepare(*source, kind, vu, vi, count, arrays) || !source->active(vu))
    { ++state.stats.rejected; return false; }
    for (uint32_t i = 0; i < count; ++i) vertex(kind, arrays, i, out + i);
    ++state.stats.strips;
    state.stats.vertices += count;
    return true;
}

bool xboxVifSourceTryWriteJoinedStrip(uint32_t kind, GSXfCursor &cursor,
                                     const uint8_t *vu, uint32_t vi, uint32_t count)
{
    XboxVifSourceScope *source = activeSource(vu);
    if (!source) return false;
    Arrays arrays;
    if (!cursor.direct || !prepare(*source, kind, vu, vi, count, arrays) ||
        cursor.strips == std::numeric_limits<uint32_t>::max() ||
        cursor.vertices > std::numeric_limits<uint32_t>::max() - count ||
        !room(cursor, count + (cursor.join ? 2u : 0u)) || !source->active(vu))
    { ++state.stats.rejected; return false; }
    joined(kind, cursor, arrays, count);
    ++state.stats.strips;
    state.stats.vertices += count;
    return true;
}

bool xboxVifSourceTryWriteGroup(uint32_t kind, GSXfCursor &cursor, const uint8_t *vu,
                               const XboxVifSourceStripSpan *strips, uint32_t count)
{
    XboxVifSourceScope *source = activeSource(vu);
    if (!source) return false;
    auto miss = [] { ++state.stats.rejected; return false; };
    if (!strips || !count || count > kXboxVifSourceMaxStrips ||
        (!cursor.direct && cursor.join)) return miss();
    Arrays arrays[kXboxVifSourceMaxStrips];
    uint32_t vertices = 0;
    for (uint32_t i = 0; i < count; ++i)
    {
        if (strips[i].count > 64u - vertices ||
            (i && strips[i].vi != strips[i - 1u].vi + strips[i - 1u].count) ||
            !prepare(*source, kind, vu, strips[i].vi, strips[i].count, arrays[i]))
            return miss();
        vertices += strips[i].count;
    }
    if (cursor.strips > std::numeric_limits<uint32_t>::max() - count ||
        cursor.vertices > std::numeric_limits<uint32_t>::max() - vertices) return miss();
    uint32_t required = cursor.direct ? vertices + 2u * (count - (cursor.join ? 0u : 1u))
                                      : 3u * (vertices - 2u * count);
    // The original per-strip path reserves n + 2 even for an unjoined first
    // strip. Retain that growth boundary rather than consuming a short tail.
    if (cursor.direct && required < strips[0].count + 2u)
        required = strips[0].count + 2u;
    if (!room(cursor, required) || !source->active(vu)) return miss();
    // Complete admission precedes the first write. These loops invoke no
    // renderer, allocator, callback, or guest code while sources are lent.
    if (cursor.direct)
    {
        for (uint32_t i = 0; i < count; ++i)
            joined(kind, cursor, arrays[i], strips[i].count);
    }
    else
    {
        GSXfVertex *out = cursor.next;
        for (uint32_t strip = 0; strip < count; ++strip)
            for (uint32_t i = 2u; i < strips[strip].count; ++i)
            {
                vertex(kind, arrays[strip], i, out++);
                vertex(kind, arrays[strip], i - 2u, out++);
                vertex(kind, arrays[strip], i - 1u, out++);
            }
        cursor.next = out;
        cursor.strips += count;
        cursor.vertices += vertices;
    }
    ++state.stats.groups;
    state.stats.strips += count;
    state.stats.vertices += vertices;
    return true;
}

bool xboxVifSourceGetStats(XboxVifSourceStats &out)
{
    out = {};
    if (state.busy.test_and_set(std::memory_order_acquire)) return false;
    out = state.stats;
    out.busy = state.contention.load(std::memory_order_relaxed);
    state.busy.clear(std::memory_order_release);
    return true;
}
