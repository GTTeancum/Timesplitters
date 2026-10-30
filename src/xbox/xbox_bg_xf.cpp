#include "xbox_bg_xf.h"
#include "xbox_bg_runtime.h"
#include "../../project/game/vu1_native_xf.h"

#include <cstddef>
#include <cstring>
#include <limits>

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
        std::memcpy(dest, packed, 24u);
        std::memcpy(dest + 24u, &color, 4u);
        std::memcpy(dest + 28u, packed + 28u, 16u);
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
            std::memcpy(out, &cursor.last, sizeof(cursor.last));
            writeVertex(out + 1, packed, job.colors);
            out += 2;
        }
        for (uint32_t i = 0; i + 1u < job.count; ++i)
            writeVertex(out + i, packed + size_t(i) * 44u, job.colors + i * 16u);
        const uint32_t last = job.count - 1u;
        writeVertex(&cursor.last, packed + size_t(last) * 44u, job.colors + last * 16u);
        std::memcpy(out + last, &cursor.last, sizeof(cursor.last));
        cursor.next = out + job.count;
        cursor.join = true;
        ++cursor.strips;
        cursor.vertices += job.count;
    }
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
