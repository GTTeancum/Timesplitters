#pragma once
// Texture source keys (TS_TEXTURE_SOURCE_KEYS): a GS texture named by what
// the game put into GS memory rather than by its decoded texels
// (runtime/gs/gs_texture_hash.h), so that the renderer finds the texture's
// entry in the pack (xbox_texture_pack.h) without decoding it. A key is an
// image part and a palette part (exactKey):
//
//   image: the texture's texels as an IMAGE transfer in its own format
//     carries them (imageBits: 32, 24 or 16 bits of colour, an 8-bit index,
//     or two 4-bit indices a byte, the first in the low nibble), in texel
//     order, through ImageHasher;
//   palette: PSMT8 with a 32-bit CLUT from CSA 0: the content hash of the
//     CLUT buffer (GSCpuBackend::HashClut, the Xbox variant); any other
//     indexed format: paletteKey over the palette as the decode applies it
//     (decodePalette: CSA, CSM, 16-bit entries, TEXA); 24- and 16-bit
//     colour: texaKey (their alpha comes from TEXA); PSMCT32: 0.
//
// The image is hashed as the game uploads it (an IMAGE transfer of exactly
// the texture, from its origin, in its own format) or read back from GS
// memory (packTexels); both give the same bytes. tools/xtpbuild.py works
// out the same keys from MISC.PAK and from the renderer's dumps
// (TS_TEXTURE_DUMP): source_image_keys, hash_clut, palette_key, texa_key,
// exact_key, image_only_key. They must agree bit for bit.
#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <cstring>

namespace xbox_texture_source
{
    // Changes whenever a key does (with the pack's format version, which
    // names the key version it carries: version 3, keys 2). 2: the formats
    // past PSMT8/PSMCT32 (the keys of those two are unchanged from 1).
    constexpr uint32_t kVersion = 2;

    constexpr uint32_t kPsmCt32 = 0x00u, kPsmCt24 = 0x01u, kPsmCt16 = 0x02u, kPsmCt16s = 0x0Au;
    constexpr uint32_t kPsmT8 = 0x13u, kPsmT4 = 0x14u, kPsmT8h = 0x1Bu, kPsmT4hl = 0x24u, kPsmT4hh = 0x2Cu;

    // Bits a texel takes in the image (0: a format without source keys).
    inline uint32_t imageBits(uint32_t psm)
    {
        switch (psm)
        {
        case kPsmCt32: return 32u;
        case kPsmCt24: return 24u;
        case kPsmCt16:
        case kPsmCt16s: return 16u;
        case kPsmT8:
        case kPsmT8h: return 8u;
        case kPsmT4:
        case kPsmT4hl:
        case kPsmT4hh: return 4u;
        default: return 0u;
        }
    }
    inline bool indexedPsm(uint32_t psm) { return imageBits(psm) <= 8u && imageBits(psm) != 0u; }
    inline bool fourBitPsm(uint32_t psm) { return imageBits(psm) == 4u; }
    inline bool clutFormat(uint32_t cpsm) { return cpsm == kPsmCt32 || cpsm == kPsmCt24 || cpsm == kPsmCt16 || cpsm == kPsmCt16s; }
    // Bytes of a width x height image.
    inline uint32_t imageBytes(uint32_t psm, uint32_t width, uint32_t height)
    {
        return uint32_t((uint64_t(width) * height * imageBits(psm) + 7u) / 8u);
    }

    // Texel values (as GSMem::ReadRow gives them: the index, or the stored
    // colour bits) into image bytes, in place if out is the values' own
    // storage (each value is read before its bytes are written, and they
    // never pass it). `nibble` carries a 4-bit value into the next call
    // (0x100 | value; 0 when none). Returns the bytes written.
    inline size_t packTexels(uint32_t psm, const uint32_t *values, size_t count, uint8_t *out, uint32_t &nibble)
    {
        const uint32_t bits = imageBits(psm);
        size_t n = 0;
        for (size_t i = 0; i < count; ++i)
        {
            const uint32_t v = values[i];
            switch (bits)
            {
            case 32u:
                out[n++] = uint8_t(v);
                out[n++] = uint8_t(v >> 8);
                out[n++] = uint8_t(v >> 16);
                out[n++] = uint8_t(v >> 24);
                break;
            case 24u:
                out[n++] = uint8_t(v);
                out[n++] = uint8_t(v >> 8);
                out[n++] = uint8_t(v >> 16);
                break;
            case 16u:
                out[n++] = uint8_t(v);
                out[n++] = uint8_t(v >> 8);
                break;
            case 8u: out[n++] = uint8_t(v); break;
            default:
                if (nibble)
                {
                    out[n++] = uint8_t((nibble & 0x0Fu) | ((v & 0x0Fu) << 4));
                    nibble = 0;
                }
                else
                    nibble = 0x100u | (v & 0x0Fu);
                break;
            }
        }
        return n;
    }

    // The image: its bytes as little-endian 32-bit words (the last one
    // zero-padded) into two 32-bit lanes: a 64-bit multiply is a library
    // call on the Pentium III. Pieces of any length give the same value as
    // the whole.
    class ImageHasher
    {
    public:
        ImageHasher() = default;
        ImageHasher(uint32_t psm, uint32_t width, uint32_t height) { reset(psm, width, height); }

        void reset(uint32_t psm, uint32_t width, uint32_t height)
        {
            m_a = 2166136261u ^ (width * 0x9E3779B1u) ^ height;
            m_b = 0x9E3779B9u ^ (psm << 24) ^ (height * 0x85EBCA6Bu) ^ width;
            m_carry = 0;
            m_carried = 0;
            m_bytes = 0;
        }

        void add(const uint8_t *data, size_t count)
        {
            m_bytes += uint32_t(count);
            for (; m_carried != 0u && count != 0u; --count)
            {
                m_carry |= uint32_t(*data++) << (8u * m_carried);
                if (++m_carried == 4u)
                {
                    step(m_a, m_b, m_carry);
                    m_carry = 0;
                    m_carried = 0;
                }
            }
            for (; count >= 4u; count -= 4u, data += 4)
            {
                uint32_t word;
                std::memcpy(&word, data, sizeof(word));
                step(m_a, m_b, word);
            }
            for (; count != 0u; --count)
                m_carry |= uint32_t(*data++) << (8u * m_carried++);
        }

        uint64_t value() const
        {
            uint32_t a = m_a, b = m_b;
            if (m_carried != 0u)
                step(a, b, m_carry);
            a = (a ^ m_bytes) * 16777619u;
            return (uint64_t(a) << 32) | b;
        }

        static void step(uint32_t &a, uint32_t &b, uint32_t word)
        {
            a = (a ^ word) * 16777619u;
            b = (b ^ word) * 0x85EBCA6Bu + (b >> 13);
        }

    private:
        uint32_t m_a = 0, m_b = 0, m_carry = 0, m_carried = 0, m_bytes = 0;
    };

    // A palette as the decode applies it: count RGBA8 entries (GS alpha).
    inline uint64_t paletteKey(const uint32_t *entries, uint32_t count)
    {
        uint32_t a = 0x811C9DC5u ^ count, b = 0x27D4EB2Fu ^ (count << 16);
        for (uint32_t i = 0; i < count; ++i)
            ImageHasher::step(a, b, entries[i]);
        return ((uint64_t(a) << 32) | b) ^ 0x3C6EF372FE94F82Bull;
    }

    // The TEXA fields a 24- or 16-bit texture's alpha comes from.
    inline uint64_t texaKey(uint32_t ta0, uint32_t ta1, bool aem)
    {
        return 0x6A09E667F3BCC908ull ^ (uint64_t(ta0 & 0xFFu) | (uint64_t(ta1 & 0xFFu) << 8) | (uint64_t(aem ? 1u : 0u) << 16));
    }

    // GSCpuBackend::LookupCLUT and its TEXA rule over a whole CLUT buffer
    // (512 halfwords): the palette DecodeTextureRows applies, 16 entries for
    // a 4-bit format (repeated to 256, as it does) else 256. Returns the
    // entry count, 0 for a CLUT format the decode does not know.
    inline uint32_t decodePalette(const uint16_t *clut, uint32_t psm, uint32_t cpsm, uint32_t csm, uint32_t csa,
                                  uint32_t ta0, uint32_t ta1, bool aem, uint32_t *out)
    {
        if (!clutFormat(cpsm))
            return 0;
        const bool sixteen = cpsm == kPsmCt16 || cpsm == kPsmCt16s, four = fourBitPsm(psm);
        const uint32_t base = (csa & (sixteen ? 0x1Fu : 0x0Fu)) << 4;
        const uint32_t count = four ? 16u : 256u;
        for (uint32_t index = 0; index < count; ++index)
        {
            uint32_t at = (base + index) & (sixteen ? 0x1FFu : 0x0FFu);
            if (!sixteen && csm == 0u && !four)
                at = std::min((index & 0xF0u) + base, 240u) + (index & 0x0Fu);
            uint32_t texel;
            if (sixteen)
            {
                const uint32_t c = clut[at];
                texel = ((c & 0x1Fu) << 3) | (((c >> 5) & 0x1Fu) << 11) | (((c >> 10) & 0x1Fu) << 19) | (((c >> 15) & 1u) << 31);
            }
            else
                texel = uint32_t(clut[at]) | (uint32_t(clut[at + 256u]) << 16);
            if (cpsm != kPsmCt32)
            {
                const bool rgbZero = (texel & 0x00FFFFFFu) == 0u;
                uint32_t a;
                if (cpsm == kPsmCt24)
                {
                    texel &= 0x00FFFFFFu;
                    a = aem && rgbZero ? 0u : ta0;
                }
                else
                    a = (texel >> 31) ? ta1 : (aem && rgbZero ? 0u : ta0);
                texel = (texel & 0x00FFFFFFu) | ((a & 0xFFu) << 24);
            }
            out[index] = texel;
        }
        for (uint32_t index = count; index < 256u; ++index)
            out[index] = out[index & 15u];
        return count;
    }

    // A palette entry for the NV2A (SZ_I8_A8R8G8B8): A8R8G8B8 with the
    // pack's unit-scale alpha (stored min(2a, 255): 255 is GS 0x80).
    inline uint32_t nv2aPaletteEntry(uint32_t rgba)
    {
        const uint32_t a = std::min<uint32_t>((rgba >> 24) * 2u, 255u);
        return (a << 24) | ((rgba & 0xFFu) << 16) | (rgba & 0xFF00u) | ((rgba >> 16) & 0xFFu);
    }

    inline uint64_t rotl(uint64_t v, unsigned s) { return (v << s) | (v >> (64u - s)); }

    // The key of an image with its palette part: the pack entry that holds
    // exactly this texture.
    inline uint64_t exactKey(uint64_t image, uint64_t clut) { return image ^ rotl(clut, 29) ^ 0x5851F42D4C957F2Dull; }

    // An indexed image with any palette: the pack has these indices, as an
    // index texture (SZ_I8, drawn with the palette of the moment) or with
    // another palette (the renderer logs the palettes it meets, for the
    // builder's --variants).
    inline uint64_t imageOnlyKey(uint64_t image) { return image ^ 0xA0761D6478BD642Full; }
}
