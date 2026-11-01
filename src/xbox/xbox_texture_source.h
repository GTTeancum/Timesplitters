#pragma once
// Texture source keys (TS_TEXTURE_SOURCE_KEYS): a GS texture named by what
// the game put into GS memory rather than by its decoded texels
// (runtime/gs/gs_texture_hash.h), so that the renderer finds the texture's
// entry in the pack (xbox_texture_pack.h) without decoding it:
//
//   PSMT8 with a 32-bit CLUT (CSA 0): its indices and the content hash of
//     the CLUT buffer (GSCpuBackend::HashClut, the Xbox variant), so each
//     palette of the same indices is a key of its own;
//   PSMCT32: its texels.
//
// Neither depends on TEXA: those two formats decode without it. The image
// is hashed either as the game uploads it (an IMAGE transfer of exactly the
// texture, from its origin, in its own format) or read back from GS memory;
// both give the same bytes. tools/xtpbuild.py works out the same keys from
// MISC.PAK (source_image_keys, hash_clut, exact_key, image_only_key): they
// must agree bit for bit, and xbox_texture_pack's format version 2 carries
// them (the source table).
#include <cstddef>
#include <cstdint>
#include <cstring>

namespace xbox_texture_source
{
    // Changes whenever a key does; the builder writes it into the pack.
    constexpr uint32_t kVersion = 1;

    constexpr uint32_t kPsmCt32 = 0x00u, kPsmT8 = 0x13u;

    // The image: the TW x TH texture's bytes in texel order, row by row (one
    // a texel for PSMT8, four for PSMCT32, as GS IMAGE transfers carry them),
    // read as little-endian 32-bit words (the last one zero-padded) into two
    // 32-bit lanes: a 64-bit multiply is a library call on the Pentium III.
    // Pieces of any length give the same value as the whole.
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

    private:
        static void step(uint32_t &a, uint32_t &b, uint32_t word)
        {
            a = (a ^ word) * 16777619u;
            b = (b ^ word) * 0x85EBCA6Bu + (b >> 13);
        }

        uint32_t m_a = 0, m_b = 0, m_carry = 0, m_carried = 0, m_bytes = 0;
    };

    inline uint64_t rotl(uint64_t v, unsigned s) { return (v << s) | (v >> (64u - s)); }

    // The key of an image with its CLUT's hash (0 for PSMCT32): the pack
    // entry that holds exactly this texture.
    inline uint64_t exactKey(uint64_t image, uint64_t clut) { return image ^ rotl(clut, 29) ^ 0x5851F42D4C957F2Dull; }

    // An indexed image with any CLUT: the pack has these indices with some
    // palette (the one MISC.PAK gives them). The renderer logs the palettes
    // it meets that the pack lacks, for the builder (--variants).
    inline uint64_t imageOnlyKey(uint64_t image) { return image ^ 0xA0761D6478BD642Full; }
}
