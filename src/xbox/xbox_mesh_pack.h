#pragma once
// Validation-stage .xmesh capture reader. Not installed in the renderer.
// Bytes use GSXfVertex's 44-byte little-endian layout, but are not guaranteed
// GPU-visible memory. Keep live matrices/materials/lighting and fallback.
#include <cstddef>
#include <cstdint>
#include <cstring>

namespace ts_xmesh
{
constexpr uint32_t kHeaderBytes = 96, kStripBytes = 32, kVertexBytes = 44;
constexpr uint32_t kCaptureOnly = 1;
// ts_native_xf::Kind order; EnvMap/Lit differ from GSXfConstants::Variant.
enum class Kind : uint32_t { Plain, EnvMap, Lit, Skinned };
enum class Error { None, Header, Layout, Size, Checksum, Strip };

inline uint32_t read32(const uint8_t *p)
{
    return uint32_t(p[0]) | (uint32_t(p[1]) << 8) |
           (uint32_t(p[2]) << 16) | (uint32_t(p[3]) << 24);
}

// Loading-time integrity check, not an authenticity check or a per-frame job.
inline uint32_t checksum(const uint8_t *p, size_t size)
{
    uint32_t crc = ~uint32_t(0);
    for (size_t i = 0; i < size; ++i)
    {
        crc ^= (i >= 48 && i < 52) ? 0 : p[i];
        for (unsigned bit = 0; bit < 8; ++bit)
            crc = (crc >> 1) ^ (0xEDB88320u & (0u - (crc & 1u)));
    }
    return ~crc;
}

struct View
{
    // Borrowed immutable storage: owner must keep the complete pack alive.
    // Use raw byte copies; do not cast possibly unaligned data to float*.
    const uint8_t *strips = nullptr, *vertices = nullptr, *sourceSha256 = nullptr;
    uint32_t stripCount = 0, vertexCount = 0, top = 0;
    Kind kind = Kind::Plain;
};

inline Error open(const uint8_t *data, size_t size, View &out)
{
    out = View{}; // a failed reopen must not expose an earlier valid mesh
    static const uint8_t magic[8] = {'T', 'S', 'X', 'M', 'E', 'S', 'H', 0};
    if (!data || size < kHeaderBytes || std::memcmp(data, magic, 8) != 0 || read32(data + 8) != 1)
        return Error::Header;
    const uint32_t kind = read32(data + 16), top = read32(data + 20);
    const uint32_t strips = read32(data + 24), vertices = read32(data + 28);
    if (kind > 3 || top >= 1024 || read32(data + 40) != kVertexBytes ||
        read32(data + 44) != kCaptureOnly || read32(data + 52) != 0)
        return Error::Layout;
    for (size_t i = 88; i < kHeaderBytes; ++i)
        if (data[i]) return Error::Layout;
    // Bounds before arithmetic/checksum: safe on the Xbox's 32-bit size_t.
    if (!strips || strips > 64 || vertices < 3 || vertices > 4096)
        return Error::Size;
    const uint32_t vertexOffset = kHeaderBytes + strips * kStripBytes;
    const uint32_t expectedSize = vertexOffset + vertices * kVertexBytes;
    if (size != expectedSize || read32(data + 12) != expectedSize ||
        read32(data + 32) != kHeaderBytes || read32(data + 36) != vertexOffset)
        return Error::Size;
    if (read32(data + 48) != checksum(data, size))
        return Error::Checksum;
    uint32_t first = 0;
    const uint32_t base = kind == 3 ? 32 : 24, last = kind < 2 ? 128 : 144;
    for (uint32_t i = 0; i < strips; ++i)
    {
        const uint8_t *s = data + kHeaderBytes + i * kStripBytes;
        const uint32_t count = read32(s + 4), vi = read32(s + 8), prim = read32(s + 12);
        const uint32_t tag0 = read32(s + 16), tag1 = read32(s + 20);
        if (count < 3 || count > 64 || read32(s) != first || count > vertices - first ||
            vi != top + base + first || vi + last + count > 1024 || top + i >= 1024 ||
            (tag0 & 0x7FFFu) != count || bool(tag0 & 0x8000u) != (i + 1 == strips) ||
            (tag1 >> 28) != 3 || ((tag1 >> 26) & 3) || !(tag1 & (1u << 14)) ||
            prim != ((tag1 >> 15) & 0x7FFu) || (prim & 7u) != 4)
            return Error::Strip;
        first += count;
    }
    if (first != vertices) return Error::Strip;
    out.strips = data + kHeaderBytes;
    out.vertices = data + vertexOffset;
    out.sourceSha256 = data + 56;
    out.stripCount = strips;
    out.vertexCount = vertices;
    out.top = top;
    out.kind = static_cast<Kind>(kind);
    return Error::None;
}
} // namespace ts_xmesh
