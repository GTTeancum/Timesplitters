// SSE2 / SSSE3 / SSE4.1 intrinsics for CPUs that only have SSE (the Xbox's
// Pentium III). The recompiled code and runtime keep PS2 128-bit registers in
// __m128i and use these intrinsics; here __m128i and __m128d are the same
// clang vector types the real headers declare, and every non-SSE1 intrinsic
// is written with vector extensions, which clang lowers to plain integer
// code. SSE1 float operations (__m128, _mm_*_ps) come from <xmmintrin.h>.
//
// Selected by ps2_simd.h when PS2X_SCALAR_SIMD is defined.
#pragma once

#include <cstdint>
#include <cstring>
#include <xmmintrin.h>

typedef long long __m128i __attribute__((__vector_size__(16), __aligned__(16)));
typedef long long __m128i_u __attribute__((__vector_size__(16), __aligned__(1)));
typedef double __m128d __attribute__((__vector_size__(16), __aligned__(16)));

namespace ps2_simd_scalar
{
    typedef int8_t v16i8 __attribute__((__vector_size__(16)));
    typedef uint8_t v16u8 __attribute__((__vector_size__(16)));
    typedef int16_t v8i16 __attribute__((__vector_size__(16)));
    typedef uint16_t v8u16 __attribute__((__vector_size__(16)));
    typedef int32_t v4i32 __attribute__((__vector_size__(16)));
    typedef uint32_t v4u32 __attribute__((__vector_size__(16)));
    typedef int64_t v2i64 __attribute__((__vector_size__(16)));
    typedef uint64_t v2u64 __attribute__((__vector_size__(16)));
    typedef float v4f32 __attribute__((__vector_size__(16)));

    template <class T>
    inline T as(__m128i v) { return (T)v; }

    inline int32_t truncToI32(double d)
    {
        // cvtt*: out of range or NaN gives the "integer indefinite" value.
        if (!(d > -2147483649.0 && d < 2147483648.0))
            return INT32_MIN;
        return static_cast<int32_t>(d);
    }

    template <class T, class Wide>
    inline T saturate(Wide v, Wide lo, Wide hi)
    {
        return static_cast<T>(v < lo ? lo : v > hi ? hi : v);
    }
}

#define PS2SS ps2_simd_scalar

// ---- casts
static inline __m128 _mm_castsi128_ps(__m128i a) { return (__m128)a; }
static inline __m128i _mm_castps_si128(__m128 a) { return (__m128i)a; }
static inline __m128d _mm_castsi128_pd(__m128i a) { return (__m128d)a; }
static inline __m128i _mm_castpd_si128(__m128d a) { return (__m128i)a; }

// ---- set / load / store
static inline __m128i _mm_setzero_si128() { return __m128i{0, 0}; }
static inline __m128i _mm_set_epi32(int e3, int e2, int e1, int e0) { return (__m128i)PS2SS::v4i32{e0, e1, e2, e3}; }
static inline __m128i _mm_set1_epi32(int v) { return (__m128i)PS2SS::v4i32{v, v, v, v}; }
static inline __m128i _mm_set_epi64x(long long e1, long long e0) { return __m128i{e0, e1}; }
static inline __m128i _mm_set1_epi64x(long long v) { return __m128i{v, v}; }
static inline __m128i _mm_setr_epi8(char e0, char e1, char e2, char e3, char e4, char e5, char e6, char e7, char e8,
                                    char e9, char e10, char e11, char e12, char e13, char e14, char e15)
{
    return (__m128i)PS2SS::v16i8{e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15};
}
static inline __m128i _mm_cvtsi32_si128(int a) { return (__m128i)PS2SS::v4i32{a, 0, 0, 0}; }
static inline __m128i _mm_cvtsi64_si128(long long a) { return __m128i{a, 0}; }
static inline __m128i _mm_loadu_si128(const void *p)
{
    __m128i v;
    std::memcpy(&v, p, sizeof(v));
    return v;
}
static inline __m128i _mm_load_si128(const __m128i *p) { return *p; }
static inline void _mm_storeu_si128(void *p, __m128i v) { std::memcpy(p, &v, sizeof(v)); }
static inline void _mm_store_si128(__m128i *p, __m128i v) { *p = v; }

// ---- element access
static inline int _mm_cvtsi128_si32(__m128i a) { return PS2SS::as<PS2SS::v4i32>(a)[0]; }
static inline long long _mm_cvtsi128_si64(__m128i a) { return a[0]; }
static inline int _mm_extract_epi32(__m128i a, int i) { return PS2SS::as<PS2SS::v4i32>(a)[i & 3]; }
static inline long long _mm_extract_epi64(__m128i a, int i) { return a[i & 1]; }
static inline __m128i _mm_insert_epi8(__m128i a, int v, int i)
{
    PS2SS::v16i8 b = PS2SS::as<PS2SS::v16i8>(a);
    b[i & 15] = static_cast<int8_t>(v);
    return (__m128i)b;
}

// ---- logic
static inline __m128i _mm_and_si128(__m128i a, __m128i b) { return a & b; }
static inline __m128i _mm_andnot_si128(__m128i a, __m128i b) { return ~a & b; }
static inline __m128i _mm_or_si128(__m128i a, __m128i b) { return a | b; }
static inline __m128i _mm_xor_si128(__m128i a, __m128i b) { return a ^ b; }

// ---- arithmetic (wrapping)
static inline __m128i _mm_add_epi8(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v16u8>(a) + PS2SS::as<PS2SS::v16u8>(b)); }
static inline __m128i _mm_add_epi16(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v8u16>(a) + PS2SS::as<PS2SS::v8u16>(b)); }
static inline __m128i _mm_add_epi32(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v4u32>(a) + PS2SS::as<PS2SS::v4u32>(b)); }
static inline __m128i _mm_sub_epi8(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v16u8>(a) - PS2SS::as<PS2SS::v16u8>(b)); }
static inline __m128i _mm_sub_epi16(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v8u16>(a) - PS2SS::as<PS2SS::v8u16>(b)); }
static inline __m128i _mm_sub_epi32(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v4u32>(a) - PS2SS::as<PS2SS::v4u32>(b)); }
static inline __m128i _mm_mullo_epi32(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v4u32>(a) * PS2SS::as<PS2SS::v4u32>(b)); }
static inline __m128i _mm_madd_epi16(__m128i a, __m128i b)
{
    const PS2SS::v8i16 x = PS2SS::as<PS2SS::v8i16>(a), y = PS2SS::as<PS2SS::v8i16>(b);
    PS2SS::v4i32 r;
    for (int i = 0; i < 4; ++i)
        r[i] = int32_t(uint32_t(int32_t(x[2 * i]) * y[2 * i]) + uint32_t(int32_t(x[2 * i + 1]) * y[2 * i + 1]));
    return (__m128i)r;
}
static inline __m128i _mm_abs_epi8(__m128i a)
{
    PS2SS::v16i8 v = PS2SS::as<PS2SS::v16i8>(a);
    for (int i = 0; i < 16; ++i)
        v[i] = static_cast<int8_t>(v[i] < 0 ? -int(v[i]) : v[i]);
    return (__m128i)v;
}
static inline __m128i _mm_abs_epi16(__m128i a)
{
    PS2SS::v8i16 v = PS2SS::as<PS2SS::v8i16>(a);
    for (int i = 0; i < 8; ++i)
        v[i] = static_cast<int16_t>(v[i] < 0 ? -int(v[i]) : v[i]);
    return (__m128i)v;
}
static inline __m128i _mm_abs_epi32(__m128i a)
{
    PS2SS::v4u32 v = PS2SS::as<PS2SS::v4u32>(a);
    for (int i = 0; i < 4; ++i)
        v[i] = int32_t(v[i]) < 0 ? 0u - v[i] : v[i];
    return (__m128i)v;
}
static inline __m128i _mm_min_epi16(__m128i a, __m128i b)
{
    const PS2SS::v8i16 x = PS2SS::as<PS2SS::v8i16>(a), y = PS2SS::as<PS2SS::v8i16>(b);
    return (__m128i)(x < y ? x : y);
}
static inline __m128i _mm_max_epi16(__m128i a, __m128i b)
{
    const PS2SS::v8i16 x = PS2SS::as<PS2SS::v8i16>(a), y = PS2SS::as<PS2SS::v8i16>(b);
    return (__m128i)(x > y ? x : y);
}
static inline __m128i _mm_min_epi32(__m128i a, __m128i b)
{
    const PS2SS::v4i32 x = PS2SS::as<PS2SS::v4i32>(a), y = PS2SS::as<PS2SS::v4i32>(b);
    return (__m128i)(x < y ? x : y);
}
static inline __m128i _mm_max_epi32(__m128i a, __m128i b)
{
    const PS2SS::v4i32 x = PS2SS::as<PS2SS::v4i32>(a), y = PS2SS::as<PS2SS::v4i32>(b);
    return (__m128i)(x > y ? x : y);
}

// ---- comparisons (all-ones where true)
static inline __m128i _mm_cmpeq_epi8(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v16i8>(a) == PS2SS::as<PS2SS::v16i8>(b)); }
static inline __m128i _mm_cmpeq_epi16(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v8i16>(a) == PS2SS::as<PS2SS::v8i16>(b)); }
static inline __m128i _mm_cmpeq_epi32(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v4i32>(a) == PS2SS::as<PS2SS::v4i32>(b)); }
static inline __m128i _mm_cmpgt_epi8(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v16i8>(a) > PS2SS::as<PS2SS::v16i8>(b)); }
static inline __m128i _mm_cmpgt_epi16(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v8i16>(a) > PS2SS::as<PS2SS::v8i16>(b)); }
static inline __m128i _mm_cmpgt_epi32(__m128i a, __m128i b) { return (__m128i)(PS2SS::as<PS2SS::v4i32>(a) > PS2SS::as<PS2SS::v4i32>(b)); }

// ---- shifts
static inline __m128i _mm_srai_epi32(__m128i a, int n)
{
    return (__m128i)(PS2SS::as<PS2SS::v4i32>(a) >> (n > 31 ? 31 : n));
}
static inline __m128i _mm_srli_epi16(__m128i a, int n)
{
    return n > 15 ? _mm_setzero_si128() : (__m128i)(PS2SS::as<PS2SS::v8u16>(a) >> n);
}
static inline __m128i _mm_srli_epi64(__m128i a, int n)
{
    return n > 63 ? _mm_setzero_si128() : (__m128i)(PS2SS::as<PS2SS::v2u64>(a) >> n);
}
static inline __m128i _mm_slli_epi64(__m128i a, int n)
{
    return n > 63 ? _mm_setzero_si128() : (__m128i)(PS2SS::as<PS2SS::v2u64>(a) << n);
}
static inline __m128i _mm_srli_si128(__m128i a, int n)
{
    const PS2SS::v16u8 v = PS2SS::as<PS2SS::v16u8>(a);
    PS2SS::v16u8 r{};
    for (int i = 0; i + n < 16 && n < 16; ++i)
        r[i] = v[i + n];
    return (__m128i)r;
}
static inline __m128i _mm_bsrli_si128(__m128i a, int n) { return _mm_srli_si128(a, n); }

// ---- pack / unpack
static inline __m128i _mm_packs_epi32(__m128i a, __m128i b)
{
    const PS2SS::v4i32 x = PS2SS::as<PS2SS::v4i32>(a), y = PS2SS::as<PS2SS::v4i32>(b);
    PS2SS::v8i16 r;
    for (int i = 0; i < 4; ++i)
    {
        r[i] = PS2SS::saturate<int16_t, int32_t>(x[i], INT16_MIN, INT16_MAX);
        r[i + 4] = PS2SS::saturate<int16_t, int32_t>(y[i], INT16_MIN, INT16_MAX);
    }
    return (__m128i)r;
}
static inline __m128i _mm_packus_epi16(__m128i a, __m128i b)
{
    const PS2SS::v8i16 x = PS2SS::as<PS2SS::v8i16>(a), y = PS2SS::as<PS2SS::v8i16>(b);
    PS2SS::v16u8 r;
    for (int i = 0; i < 8; ++i)
    {
        r[i] = PS2SS::saturate<uint8_t, int32_t>(x[i], 0, 255);
        r[i + 8] = PS2SS::saturate<uint8_t, int32_t>(y[i], 0, 255);
    }
    return (__m128i)r;
}
static inline __m128i _mm_unpacklo_epi8(__m128i a, __m128i b)
{
    return (__m128i)__builtin_shufflevector(PS2SS::as<PS2SS::v16i8>(a), PS2SS::as<PS2SS::v16i8>(b), 0, 16, 1, 17, 2, 18,
                                            3, 19, 4, 20, 5, 21, 6, 22, 7, 23);
}
static inline __m128i _mm_unpackhi_epi8(__m128i a, __m128i b)
{
    return (__m128i)__builtin_shufflevector(PS2SS::as<PS2SS::v16i8>(a), PS2SS::as<PS2SS::v16i8>(b), 8, 24, 9, 25, 10,
                                            26, 11, 27, 12, 28, 13, 29, 14, 30, 15, 31);
}
static inline __m128i _mm_unpacklo_epi16(__m128i a, __m128i b)
{
    return (__m128i)__builtin_shufflevector(PS2SS::as<PS2SS::v8i16>(a), PS2SS::as<PS2SS::v8i16>(b), 0, 8, 1, 9, 2, 10, 3, 11);
}
static inline __m128i _mm_unpackhi_epi16(__m128i a, __m128i b)
{
    return (__m128i)__builtin_shufflevector(PS2SS::as<PS2SS::v8i16>(a), PS2SS::as<PS2SS::v8i16>(b), 4, 12, 5, 13, 6, 14, 7, 15);
}
static inline __m128i _mm_unpacklo_epi32(__m128i a, __m128i b)
{
    return (__m128i)__builtin_shufflevector(PS2SS::as<PS2SS::v4i32>(a), PS2SS::as<PS2SS::v4i32>(b), 0, 4, 1, 5);
}
static inline __m128i _mm_unpackhi_epi32(__m128i a, __m128i b)
{
    return (__m128i)__builtin_shufflevector(PS2SS::as<PS2SS::v4i32>(a), PS2SS::as<PS2SS::v4i32>(b), 2, 6, 3, 7);
}
static inline __m128i _mm_unpacklo_epi64(__m128i a, __m128i b) { return __builtin_shufflevector(a, b, 0, 2); }
static inline __m128i _mm_unpackhi_epi64(__m128i a, __m128i b) { return __builtin_shufflevector(a, b, 1, 3); }

// ---- shuffles
static inline __m128i _mm_shuffle_epi32(__m128i a, int imm)
{
    const PS2SS::v4i32 v = PS2SS::as<PS2SS::v4i32>(a);
    return (__m128i)PS2SS::v4i32{v[imm & 3], v[(imm >> 2) & 3], v[(imm >> 4) & 3], v[(imm >> 6) & 3]};
}
static inline __m128i _mm_shufflelo_epi16(__m128i a, int imm)
{
    PS2SS::v8i16 v = PS2SS::as<PS2SS::v8i16>(a);
    const PS2SS::v8i16 s = v;
    for (int i = 0; i < 4; ++i)
        v[i] = s[(imm >> (2 * i)) & 3];
    return (__m128i)v;
}
static inline __m128i _mm_shufflehi_epi16(__m128i a, int imm)
{
    PS2SS::v8i16 v = PS2SS::as<PS2SS::v8i16>(a);
    const PS2SS::v8i16 s = v;
    for (int i = 0; i < 4; ++i)
        v[4 + i] = s[4 + ((imm >> (2 * i)) & 3)];
    return (__m128i)v;
}
static inline __m128i _mm_shuffle_epi8(__m128i a, __m128i mask)
{
    const PS2SS::v16u8 v = PS2SS::as<PS2SS::v16u8>(a), m = PS2SS::as<PS2SS::v16u8>(mask);
    PS2SS::v16u8 r;
    for (int i = 0; i < 16; ++i)
        r[i] = (m[i] & 0x80u) ? 0u : v[m[i] & 15u];
    return (__m128i)r;
}

// ---- blends
static inline __m128i _mm_blendv_epi8(__m128i a, __m128i b, __m128i mask)
{
    const PS2SS::v16i8 m = PS2SS::as<PS2SS::v16i8>(mask);
    return (__m128i)((m < 0) ? PS2SS::as<PS2SS::v16i8>(b) : PS2SS::as<PS2SS::v16i8>(a));
}
static inline __m128 _mm_blendv_ps(__m128 a, __m128 b, __m128 mask)
{
    const PS2SS::v4i32 m = (PS2SS::v4i32)mask;
    return (__m128)((m < 0) ? (PS2SS::v4i32)b : (PS2SS::v4i32)a);
}
static inline __m128 _mm_blend_ps(__m128 a, __m128 b, int imm)
{
    PS2SS::v4f32 r = (PS2SS::v4f32)a;
    const PS2SS::v4f32 y = (PS2SS::v4f32)b;
    for (int i = 0; i < 4; ++i)
        if (imm & (1 << i))
            r[i] = y[i];
    return (__m128)r;
}

// ---- conversions
static inline __m128i _mm_cvttps_epi32(__m128 a)
{
    const PS2SS::v4f32 v = (PS2SS::v4f32)a;
    return (__m128i)PS2SS::v4i32{PS2SS::truncToI32(v[0]), PS2SS::truncToI32(v[1]), PS2SS::truncToI32(v[2]),
                                 PS2SS::truncToI32(v[3])};
}
static inline __m128 _mm_cvtepi32_ps(__m128i a)
{
    const PS2SS::v4i32 v = PS2SS::as<PS2SS::v4i32>(a);
    return (__m128)PS2SS::v4f32{float(v[0]), float(v[1]), float(v[2]), float(v[3])};
}
static inline __m128d _mm_cvtps_pd(__m128 a)
{
    const PS2SS::v4f32 v = (PS2SS::v4f32)a;
    return __m128d{double(v[0]), double(v[1])};
}
static inline __m128i _mm_cvttpd_epi32(__m128d a)
{
    return (__m128i)PS2SS::v4i32{PS2SS::truncToI32(a[0]), PS2SS::truncToI32(a[1]), 0, 0};
}
static inline __m128d _mm_add_pd(__m128d a, __m128d b) { return a + b; }
static inline __m128d _mm_set1_pd(double v) { return __m128d{v, v}; }
// Moved as integers: the runtime uses this to replace the low 64 bits of a
// PS2 register, and a double copy goes through the x87, which changes
// signalling-NaN bit patterns.
static inline __m128d _mm_move_sd(__m128d a, __m128d b)
{
    const __m128i ai = (__m128i)a, bi = (__m128i)b;
    return (__m128d)__m128i{bi[0], ai[1]};
}

#undef PS2SS
