#include "xbox_bg_xf.h"
#include "xbox_bg_runtime.h"
#include "../../project/game/vu1_native_xf.h"

#include <cstddef>
#include <cstring>
#include <limits>

#ifndef TS_BG_FAST
#define TS_BG_FAST 1
#endif

namespace
{
    static_assert(sizeof(GSXfVertex) == 44 && offsetof(GSXfVertex, color) == 24 &&
                      offsetof(GSXfVertex, s) == 28 && offsetof(GSXfVertex, bone4) == 40,
                  "XBG1 uses the production 44-byte vertex layout");

    bool validInput(uint32_t kind, const uint8_t *vu, uint32_t vi, uint32_t count)
    {
        if (!vu || (kind != ts_native_xf::Plain && kind != ts_native_xf::EnvMap) ||
            count < 3u || count > 64u)
            return false;
        const auto &layout = ts_native_xf::kLayouts[kind];
        const uint32_t last = std::max({layout.pos, layout.rgba, layout.st, layout.normal});
        return vi <= ts_native_xf::kDataQwords - last - count;
    }

    // Source colors are mutable (room/instance relighting). Preserve the low
    // byte of every current VU lane, exactly as the native PACKED RGBAQ decode.
    // Store all fields in memory order; out can be write-combined GPU memory.
    void writeVertex(GSXfVertex *out, const uint8_t *packed, const uint8_t *rgba)
    {
        const uint32_t color = uint32_t(rgba[8]) | (uint32_t(rgba[4]) << 8) |
                               (uint32_t(rgba[0]) << 16) | (uint32_t(rgba[12]) << 24);
        uint8_t *dest = reinterpret_cast<uint8_t *>(out);
#if TS_BG_FAST && TS_NATIVE_XF_SSE
        // SSE1 only (Pentium III): 16 + 8 + 4 + 16 bytes, in memory order.
        // No destination read, source overread, write past this 44-byte
        // record, or dependence on the pack's original mutable colour.
        _mm_storeu_ps(reinterpret_cast<float *>(dest),
                     _mm_loadu_ps(reinterpret_cast<const float *>(packed)));
        _mm_storel_pi(reinterpret_cast<__m64 *>(dest + 16u),
                     _mm_loadl_pi(_mm_setzero_ps(), reinterpret_cast<const __m64 *>(packed + 16u)));
        std::memcpy(dest + 24u, &color, 4u);
        _mm_storeu_ps(reinterpret_cast<float *>(dest + 28u),
                     _mm_loadu_ps(reinterpret_cast<const float *>(packed + 28u)));
#else
        std::memcpy(dest, packed, 24u);
        std::memcpy(dest + 24u, &color, 4u);
        std::memcpy(dest + 28u, packed + 28u, 16u);
#endif
    }

    struct Write
    {
        GSXfVertex *out;
        const uint8_t *colors;
        uint32_t count;
        GSXfCursor *cursor;
    };

    void writeFlat(const uint8_t *packed, void *user)
    {
        const Write &job = *static_cast<const Write *>(user);
        for (uint32_t i = 0; i < job.count; ++i)
            writeVertex(job.out + i, packed + size_t(i) * 44u, job.colors + i * 16u);
    }

    void writeJoined(const uint8_t *packed, void *user)
    {
        const Write &job = *static_cast<const Write *>(user);
        GSXfCursor &cursor = *job.cursor;
        GSXfVertex *out = job.out;
        if (cursor.join)
        {
#if TS_BG_FAST
            ts_native_xf::copyXfVertex(out, cursor.last);
#else
            std::memcpy(out, &cursor.last, sizeof(cursor.last));
#endif
            writeVertex(out + 1, packed, job.colors);
            out += 2;
        }
        for (uint32_t i = 0; i + 1u < job.count; ++i)
            writeVertex(out + i, packed + size_t(i) * 44u, job.colors + i * 16u);
        const uint32_t last = job.count - 1u;
        writeVertex(&cursor.last, packed + size_t(last) * 44u, job.colors + last * 16u);
#if TS_BG_FAST
        ts_native_xf::copyXfVertex(out + last, cursor.last);
#else
        std::memcpy(out + last, &cursor.last, sizeof(cursor.last));
#endif
        cursor.next = out + job.count;
        cursor.join = true;
        ++cursor.strips;
        cursor.vertices += job.count;
    }

#if TS_BG_BATCH && defined(TS_BG_NATIVE) && TS_BG_NATIVE
    struct GroupWrite
    {
        GSXfCursor *cursor;
        const uint8_t *vu;
        uint32_t rgba;
        XboxBgFlatEmitter emitFlat;
        void *sink;
    };

    void writeJoinedGroup(const XboxBgPackedStrip *strips, uint32_t stripCount, void *user)
    {
        const GroupWrite &group = *static_cast<const GroupWrite *>(user);
        GSXfCursor &cursor = *group.cursor;
        // The whole group's cursor range was admitted before its pack
        // borrow. No grow, allocation or possible rejection can occur
        // after the first current-group vertex is written.
        for (uint32_t i = 0; i < stripCount; ++i)
        {
            const auto &strip = strips[i];
            Write job{cursor.next, group.vu + (strip.vi + group.rgba) * 16u,
                      strip.count, &cursor};
            writeJoined(strip.vertices, &job);
        }
    }

    void writeFlatGroup(const XboxBgPackedStrip *strips, uint32_t stripCount, void *user)
    {
        const GroupWrite &group = *static_cast<const GroupWrite *>(user);
        // A separate callback keeps the flat path's staging array out of
        // the direct writer's hot stack frame.
        GSXfVertex vertices[64];
        for (uint32_t i = 0; i < stripCount; ++i)
        {
            const auto &strip = strips[i];
            Write job{vertices, group.vu + (strip.vi + group.rgba) * 16u,
                      strip.count, nullptr};
            writeFlat(strip.vertices, &job);
            // The existing backend retains its last-to-first provoking
            // vertex conversion, ring reservations and segment fences.
            group.emitFlat(vertices, strip.count, group.sink);
        }
    }

    void writeFlatRingGroup(const XboxBgPackedStrip *strips, uint32_t stripCount, void *user)
    {
        const GroupWrite &group = *static_cast<const GroupWrite *>(user);
        GSXfCursor &cursor = *group.cursor;
        GSXfVertex *out = cursor.next;
        // The complete group's expanded triangle list already fits. Write
        // each triangle in the backend's original i, i-2, i-1 order: the
        // GS last vertex becomes NV2A's first provoking vertex. Never read
        // the write-combined ring or stage another full vertex array.
        for (uint32_t stripIndex = 0; stripIndex < stripCount; ++stripIndex)
        {
            const auto &strip = strips[stripIndex];
            const uint8_t *colors = group.vu + (strip.vi + group.rgba) * 16u;
            for (uint32_t i = 2u; i < strip.count; ++i, out += 3u)
            {
                writeVertex(out, strip.vertices + size_t(i) * 44u, colors + i * 16u);
                writeVertex(out + 1u, strip.vertices + size_t(i - 2u) * 44u,
                            colors + (i - 2u) * 16u);
                writeVertex(out + 2u, strip.vertices + size_t(i - 1u) * 44u,
                            colors + (i - 1u) * 16u);
            }
            ++cursor.strips;
            cursor.vertices += strip.count;
        }
        cursor.next = out;
    }
#endif
}

bool xboxBgTryDecodeStrip(uint32_t kind, const uint8_t *vu, uint32_t vi,
                          uint32_t count, GSXfVertex *out)
{
    if (!out || !validInput(kind, vu, vi, count))
        return false;
    const uint32_t rgba = ts_native_xf::kLayouts[kind].rgba;
    Write job{out, vu + (vi + rgba) * 16u, count, nullptr};
    return xboxBgWithStrip(kind, vu, vi, count, &writeFlat, &job);
}

bool xboxBgTryWriteJoinedStrip(uint32_t kind, GSXfCursor &cursor,
                               const uint8_t *vu, uint32_t vi, uint32_t count)
{
    if (!validInput(kind, vu, vi, count) || !cursor.direct || !cursor.next || !cursor.end ||
        cursor.strips == std::numeric_limits<uint32_t>::max() ||
        cursor.vertices > std::numeric_limits<uint32_t>::max() - count)
        return false;
    const uintptr_t begin = reinterpret_cast<uintptr_t>(cursor.next);
    const uintptr_t end = reinterpret_cast<uintptr_t>(cursor.end);
    const size_t needed = size_t(count + (cursor.join ? 2u : 0u)) * sizeof(GSXfVertex);
    if (end < begin || end - begin < needed)
        return false;
    const uint32_t rgba = ts_native_xf::kLayouts[kind].rgba;
    Write job{cursor.next, vu + (vi + rgba) * 16u, count, &cursor};
    return xboxBgWithStrip(kind, vu, vi, count, &writeJoined, &job);
}

bool xboxBgTryEmitGroup(uint32_t kind, GSXfCursor &cursor, const uint8_t *vu,
                        const XboxBgStripSpan *strips, uint32_t stripCount,
                        XboxBgFlatEmitter emitFlat, void *sink)
{
#if TS_BG_BATCH && defined(TS_BG_NATIVE) && TS_BG_NATIVE
    if (!strips || !stripCount || stripCount > kXboxBgMaxBatchStrips)
        return false;
    uint32_t vertices = 0;
    for (uint32_t i = 0; i < stripCount; ++i)
    {
        const auto &strip = strips[i];
        if (!validInput(kind, vu, strip.vi, strip.count) || strip.count > 64u - vertices ||
            (i && strip.vi != strips[i - 1u].vi + strips[i - 1u].count))
            return false;
        vertices += strip.count;
    }
    const bool flatRing = !cursor.direct && cursor.next && cursor.end;
    if (flatRing && cursor.join)
        return false;
    if (cursor.direct || flatRing)
    {
        if (!cursor.next || !cursor.end ||
            cursor.strips > std::numeric_limits<uint32_t>::max() - stripCount ||
            cursor.vertices > std::numeric_limits<uint32_t>::max() - vertices)
            return false;
        const uintptr_t begin = reinterpret_cast<uintptr_t>(cursor.next);
        const uintptr_t end = reinterpret_cast<uintptr_t>(cursor.end);
        const uint32_t joins = stripCount - 1u + (cursor.join ? 1u : 0u);
        // The flat cursor lends actual triangle-list records. A joined
        // strip also retains gpuStrip's n+2 first-reservation boundary.
        const uint32_t records = flatRing ? 3u * (vertices - 2u * stripCount)
            : std::max(vertices + joins * 2u, strips[0].count + 2u);
        const size_t needed = size_t(records) * sizeof(GSXfVertex);
        // A segment boundary keeps the original strip-at-a-time route.
        // Returning false here has no GS/cursor side effect to roll back.
        if (end < begin || end - begin < needed)
            return false;
    }
    else if (!emitFlat || cursor.next || cursor.end)
        return false;

    GroupWrite group{&cursor, vu, ts_native_xf::kLayouts[kind].rgba, emitFlat, sink};
    return xboxBgWithBatch(kind, vu, strips, stripCount,
                           cursor.direct ? &writeJoinedGroup
                               : flatRing ? &writeFlatRingGroup : &writeFlatGroup,
                           &group);
#else
    (void)kind; (void)cursor; (void)vu; (void)strips; (void)stripCount;
    (void)emitFlat; (void)sink;
    return false;
#endif
}
