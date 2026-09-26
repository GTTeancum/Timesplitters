#pragma once
#include <cstdint>
#if defined(_M_X64) || defined(__SSE2__) || (defined(_M_IX86_FP) && _M_IX86_FP >= 2)
#include <emmintrin.h>
#define GS_COLOR_SSE2 1
#endif

namespace GSInternal
{
    // Same domain as converting floor(value) to int: finite, representable
    // texture coordinates. Avoid a CRT floorf call in every texture sample.
    inline int floorTextureCoordinate(float value)
    {
        const int truncated = static_cast<int>(value);
        return truncated - (value < static_cast<float>(truncated) ? 1 : 0);
    }
    // Finite interpolated color channels only. Double addition preserves
    // values immediately below a half; float(value + .5f) does not.
    inline uint8_t roundInterpolatedChannel(float value)
    {
        if (value <= 0.0f) return 0;
        if (value >= 255.0f) return 255;
        return static_cast<uint8_t>(static_cast<double>(value) + 0.5);
    }

    inline uint32_t bilinearColorScalar(uint32_t c00, uint32_t c10, uint32_t c01, uint32_t c11, float fx, float fy)
    {
        uint32_t result = 0;
        for (unsigned shift = 0; shift < 32; shift += 8) {
            const float a = float((c00 >> shift) & 255u), b = float((c10 >> shift) & 255u);
            const float c = float((c01 >> shift) & 255u), d = float((c11 >> shift) & 255u);
            const float top = a + (b - a) * fx;
            const float bottom = c + (d - c) * fx;
            result |= uint32_t(roundInterpolatedChannel(top + (bottom - top) * fy)) << shift;
        }
        return result;
    }

    inline uint32_t bilinearColor(uint32_t c00, uint32_t c10, uint32_t c01, uint32_t c11, float fx, float fy)
    {
#if GS_COLOR_SSE2
        const auto unpack = [](uint32_t color) {
            const __m128i words = _mm_unpacklo_epi8(_mm_cvtsi32_si128(static_cast<int>(color)), _mm_setzero_si128());
            return _mm_cvtepi32_ps(_mm_unpacklo_epi16(words, _mm_setzero_si128()));
        };
        const __m128 a = unpack(c00), b = unpack(c10), c = unpack(c01), d = unpack(c11);
        const __m128 x = _mm_set1_ps(fx), y = _mm_set1_ps(fy);
        const __m128 top = _mm_add_ps(a, _mm_mul_ps(_mm_sub_ps(b, a), x));
        const __m128 bottom = _mm_add_ps(c, _mm_mul_ps(_mm_sub_ps(d, c), x));
        const __m128 value = _mm_min_ps(_mm_set1_ps(255.0f), _mm_max_ps(_mm_setzero_ps(),
            _mm_add_ps(top, _mm_mul_ps(_mm_sub_ps(bottom, top), y))));
        // Add in double precision: float + .5 rounds the value just below
        // a half upward before truncation and changes the resulting pixel.
        const __m128d half = _mm_set1_pd(0.5);
        const __m128i low = _mm_cvttpd_epi32(_mm_add_pd(_mm_cvtps_pd(value), half));
        const __m128i high = _mm_cvttpd_epi32(_mm_add_pd(_mm_cvtps_pd(_mm_movehl_ps(value, value)), half));
        const __m128i words = _mm_packs_epi32(_mm_unpacklo_epi64(low, high), _mm_setzero_si128());
        return static_cast<uint32_t>(_mm_cvtsi128_si32(_mm_packus_epi16(words, _mm_setzero_si128())));
#else
        return bilinearColorScalar(c00, c10, c01, c11, fx, fy);
#endif
    }
}
