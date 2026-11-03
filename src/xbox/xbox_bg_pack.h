#pragma once
// Source-derived background geometry. This reader does not activate rendering.
// Keep live lighting/materials, original ordering, load generations and fallback.
#include <cstddef>
#include <cstdint>
#include <cstring>

namespace ts_xbg
{
constexpr uint32_t kHeaderBytes = 160, kTextureBytes = 16, kRoomBytes = 64;
constexpr uint32_t kBatchBytes = 64, kStripBytes = 32, kVertexBytes = 44;
constexpr uint32_t kRequiresLiveBinding = 1, kMaxBytes = 64u * 1024u * 1024u;
enum class Error { None, Header, Size, Layout, Checksum, Source, Room, Batch, Strip };

inline uint32_t read32(const uint8_t *p)
{
    return uint32_t(p[0]) | (uint32_t(p[1]) << 8) |
           (uint32_t(p[2]) << 16) | (uint32_t(p[3]) << 24);
}

inline uint32_t checksum(const uint8_t *p, size_t size)
{
    uint32_t crc = ~uint32_t(0);
    for (size_t i = 0; i < size; ++i)
    {
        crc ^= (i >= 152 && i < 156) ? 0 : p[i];
        for (unsigned bit = 0; bit < 8; ++bit)
            crc = (crc >> 1) ^ (0xEDB88320u & (0u - (crc & 1u)));
    }
    return ~crc;
}

struct View
{
    // Immutable borrowed bytes. Their owner must retain the entire pack.
    // Copies are safe from unaligned storage; do not cast these pointers to
    // float/record pointers or assume that the memory is GPU-visible.
    const uint8_t *textures = nullptr, *rooms = nullptr, *batches = nullptr;
    const uint8_t *strips = nullptr, *vertices = nullptr;
    const uint8_t *sourceRawSha256 = nullptr, *sourcePakSha256 = nullptr;
    uint32_t textureCount = 0, roomCount = 0, batchCount = 0;
    uint32_t stripCount = 0, vertexCount = 0, level = 0, sourceRawBytes = 0;
    uint32_t flags = 0;
};

inline bool sourceRange(uint64_t offset, uint64_t bytes, uint32_t sourceBytes)
{
    return offset >= 16 && offset <= sourceBytes && bytes <= sourceBytes - offset;
}

inline Error open(const uint8_t *data, size_t size, View &out)
{
    out = View{}; // Failed reopen never exposes an earlier successful view.
    static const uint8_t magic[8] = {'T', 'S', 'X', 'B', 'G', 'P', '1', 0};
    if (!data || size < kHeaderBytes || std::memcmp(data, magic, 8) != 0 ||
        read32(data + 8) != 1 || read32(data + 12) != kHeaderBytes)
        return Error::Header;
    if (read32(data + 16) != kRequiresLiveBinding || !read32(data + 20) || read32(data + 156) != 0)
        return Error::Layout;
    if (size > kMaxBytes || read32(data + 24) != size)
        return Error::Size;
    const uint32_t rawBytes = read32(data + 28);
    const uint32_t rooms = read32(data + 32), batches = read32(data + 36);
    const uint32_t strips = read32(data + 40), vertices = read32(data + 44);
    const uint32_t textures = read32(data + 48);
    if (!rooms || !batches || !strips || !vertices || !textures)
        return Error::Size;

    // Calculate in 64 bits before converting to the Xbox's 32-bit size_t.
    const uint64_t textureOffset = kHeaderBytes;
    const uint64_t roomOffset = textureOffset + uint64_t(textures) * kTextureBytes;
    const uint64_t batchOffset = roomOffset + uint64_t(rooms) * kRoomBytes;
    const uint64_t stripOffset = batchOffset + uint64_t(batches) * kBatchBytes;
    const uint64_t stripEnd = stripOffset + uint64_t(strips) * kStripBytes;
    const uint64_t vertexOffset = (stripEnd + 127u) & ~uint64_t(127u);
    const uint64_t expectedSize = vertexOffset + uint64_t(vertices) * kVertexBytes;
    if (expectedSize != size || read32(data + 52) != roomOffset ||
        read32(data + 56) != batchOffset || read32(data + 60) != stripOffset ||
        read32(data + 64) != vertexOffset || read32(data + 68) != textureOffset)
        return Error::Size;
    if (read32(data + 152) != checksum(data, size))
        return Error::Checksum;
    for (size_t i = static_cast<size_t>(stripEnd); i < vertexOffset; ++i)
        if (data[i]) return Error::Layout;

    const uint32_t sourceTextures = read32(data + 72), sourceRooms = read32(data + 76);
    const uint32_t sourcePortals = read32(data + 80), sourceVolumes = read32(data + 84);
    if (!sourceRange(sourceTextures, (uint64_t(textures) + 1) * 16, rawBytes) ||
        !sourceRange(sourceRooms, (uint64_t(rooms) + 2) * 44, rawBytes) ||
        !sourceRange(sourcePortals, 8, rawBytes) ||
        (sourceVolumes && !sourceRange(sourceVolumes, 4, rawBytes)))
        return Error::Source;
    for (uint32_t t = 0; t < textures; ++t)
        if (read32(data + kHeaderBytes + size_t(t) * kTextureBytes) & 0x80000000u)
            return Error::Source; // Negative source IDs terminate the texture table.

    const uint8_t *roomData = data + static_cast<size_t>(roomOffset);
    const uint8_t *batchData = data + static_cast<size_t>(batchOffset);
    const uint8_t *stripData = data + static_cast<size_t>(stripOffset);
    uint32_t nextBatch = 0, nextStrip = 0, nextVertex = 0, previousRoom = 0;
    for (uint32_t r = 0; r < rooms; ++r)
    {
        const uint8_t *room = roomData + size_t(r) * kRoomBytes;
        const uint32_t sourceIndex = read32(room), sourceRecord = read32(room + 4);
        const uint32_t firstBatch = read32(room + 8), batchCount = read32(room + 12);
        if (sourceIndex <= previousRoom ||
            uint64_t(sourceRooms) + uint64_t(sourceIndex) * 44 != sourceRecord ||
            !sourceRange(sourceRecord, 44, rawBytes) || read32(room + 60) != 0 ||
            firstBatch != nextBatch || batchCount > batches - nextBatch)
            return Error::Room;
        previousRoom = sourceIndex;
        const uint32_t model = read32(room + 16);
        if (!sourceRange(model, 40, rawBytes)) return Error::Source;
        for (unsigned field = 1; field < 5; ++field)
        {
            const uint32_t pointer = read32(room + 16 + field * 4);
            if (pointer && !sourceRange(pointer, 4, rawBytes)) return Error::Source;
        }
        bool previous = false;
        uint32_t oldPartIndex = 0, oldPart = 0, oldVariant = 0, oldDescriptor = 0;
        uint32_t oldPartWord0 = 0, oldPartWord1 = 0;
        for (uint32_t j = 0; j < batchCount; ++j)
        {
            const uint8_t *batch = batchData + size_t(nextBatch) * kBatchBytes;
            const uint32_t part = read32(batch + 8), partIndex = read32(batch + 12);
            const uint32_t variant = read32(batch + 16), descriptor = read32(batch + 20);
            const uint32_t texture = read32(batch + 24), layout = read32(batch + 28);
            const uint32_t firstStrip = read32(batch + 32), stripCount = read32(batch + 36);
            const uint32_t firstVertex = read32(batch + 40), vertexCount = read32(batch + 44);
            const uint32_t tagStart = read32(batch + 48), vertexStart = read32(batch + 52);
            const uint32_t partWord0 = read32(batch + 56), partWord1 = read32(batch + 60);
            if (read32(batch) != r || read32(batch + 4) != model || variant > 1 ||
                (layout != 0 && layout != 2) || texture >= textures ||
                (partWord0 & 0xFFu) != 0 ||
                !stripCount || stripCount > 24 || vertexCount < 3 || vertexCount > 64 ||
                firstStrip != nextStrip || stripCount > strips - nextStrip ||
                firstVertex != nextVertex || vertexCount > vertices - nextVertex)
                return Error::Batch;
            if (!sourceRange(part, 80, rawBytes) || uint64_t(part) + 80 > model ||
                (model - part) % 80 != 0 ||
                uint64_t(partIndex) * 80 + 16 > part ||
                !sourceRange(descriptor, 24, rawBytes) ||
                (uint64_t(tagStart) + stripCount) * 16 > rawBytes ||
                (uint64_t(vertexStart) + vertexCount) * 16 > rawBytes)
                return Error::Source;
            if (previous)
            {
                if (partIndex < oldPartIndex ||
                    (partIndex == oldPartIndex &&
                     (part != oldPart || partWord0 != oldPartWord0 || partWord1 != oldPartWord1 ||
                      variant < oldVariant ||
                      (variant == oldVariant && uint64_t(oldDescriptor) + 24 != descriptor))) ||
                    (partIndex > oldPartIndex &&
                     uint64_t(oldPart) + uint64_t(partIndex - oldPartIndex) * 80 != part))
                    return Error::Batch;
            }
            previous = true;
            oldPartIndex = partIndex; oldPart = part; oldVariant = variant;
            oldDescriptor = descriptor; oldPartWord0 = partWord0; oldPartWord1 = partWord1;
            const uint32_t batchVertexEnd = nextVertex + vertexCount;
            uint32_t firstSourceTag = 0;
            for (uint32_t s = 0; s < stripCount; ++s)
            {
                const uint8_t *strip = stripData + size_t(nextStrip) * kStripBytes;
                const uint32_t count = read32(strip + 4), sourceTag = read32(strip + 8);
                const uint32_t tag0 = read32(strip + 16), tag1 = read32(strip + 20);
                if (s == 0) firstSourceTag = sourceTag;
                if (read32(strip) != nextVertex || count < 3 || count > 64 ||
                    count > batchVertexEnd - nextVertex || read32(strip + 12) != 0 ||
                    !sourceRange(sourceTag, 16, rawBytes) ||
                    uint64_t(firstSourceTag) + uint64_t(s) * 16 != sourceTag ||
                    uint64_t(tagStart) * 16 + 16 > firstSourceTag ||
                    (tag0 & 0x7FFFu) != count || bool(tag0 & 0x8000u) != (s + 1 == stripCount) ||
                    (tag1 >> 28) != 3 || ((tag1 >> 26) & 3) || !(tag1 & (1u << 14)) ||
                    (((tag1 >> 15) & 0x7FFu) & 7u) != 4)
                    return Error::Strip;
                nextVertex += count;
                ++nextStrip;
            }
            if (nextVertex != batchVertexEnd) return Error::Strip;
            ++nextBatch;
        }
    }
    if (nextBatch != batches || nextStrip != strips || nextVertex != vertices)
        return Error::Layout;
    out.textures = data + static_cast<size_t>(textureOffset);
    out.rooms = roomData; out.batches = batchData; out.strips = stripData;
    out.vertices = data + static_cast<size_t>(vertexOffset);
    out.sourceRawSha256 = data + 88; out.sourcePakSha256 = data + 120;
    out.textureCount = textures; out.roomCount = rooms; out.batchCount = batches;
    out.stripCount = strips; out.vertexCount = vertices; out.level = read32(data + 20);
    out.sourceRawBytes = rawBytes; out.flags = kRequiresLiveBinding;
    return Error::None;
}
} // namespace ts_xbg
