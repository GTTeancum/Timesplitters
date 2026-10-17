// memcpy / memmove / memset / memcmp, replacing nxdk's C library versions (the linker
// takes these before the library's).
//
// nxdk's versions move one byte per loop iteration. The runtime copies guest
// memory, frames and DMA packets through them constantly, and at a byte at a
// time they ran at about 5 MB/s. These use the string instructions four
// bytes at a time. Written in assembly so the compiler cannot turn the loops
// back into calls to themselves.
//
// TS_LIBC_CLASSES 1 (default; src/xbox/PUSH-BC-PLAN.md M3.7, B-PLATFORM):
// memcpy / memset by size and alignment class.
//   - up to 64 bytes: a plain dword loop and at most three single bytes (no
//     rep start-up, no byte rep when the size is a multiple of four);
//   - larger: the destination aligned to four first (the Pentium III's
//     rep movsl is fast only with an aligned destination), then rep movsl
//     and the tail bytes, if any;
//   - TS_MEMCPY_SSE 1 (default 0): with the destination 16-aligned and the
//     source too, blocks of 64 bytes go through movaps first. Off: memcpy is
//     also called where the XMM registers may not be saved (a DPC), so it
//     needs an audit first.
// The same bytes land in the same places; only the instruction mix changes.
// 0: the PS2-era forms above, as before. The boot self-test
// (xbox_platform_selftest.cpp) checks every class against a byte loop.
#include <cstddef>
#include <cstdint>

#ifndef TS_LIBC_CLASSES
#define TS_LIBC_CLASSES 1
#endif
#ifndef TS_MEMCPY_SSE
#define TS_MEMCPY_SSE 0
#endif

#include "runtime/ps2_measure.h" // TS_MEASURE_PUSHBC: memcpy / memcmp by size and alignment

namespace
{
#if TS_MEASURE_PUSHBC
    // The size x alignment histogram of the measurement build (the
    // buckets of MeasureCounters::memcpyHist): a few instructions a call.
    inline void histogram(uint32_t (&hist)[10][3], const void *a, const void *b, size_t n)
    {
        const uint32_t size = n < 16u ? 0u : n < 32u ? 1u : n < 64u ? 2u : n < 128u ? 3u : n < 256u ? 4u : n < 512u ? 5u
                            : n < 1024u ? 6u : n < 4096u ? 7u : n < 65536u ? 8u : 9u;
        const uintptr_t bits = reinterpret_cast<uintptr_t>(a) | reinterpret_cast<uintptr_t>(b);
        ++hist[size][(bits & 15u) == 0u ? 0u : (bits & 3u) == 0u ? 1u : 2u];
    }
#define TS_STRING_HISTOGRAM(hist, a, b, n) histogram(g_measure.hist, (a), (b), (n))
#else
#define TS_STRING_HISTOGRAM(hist, a, b, n) ((void)0)
#endif

    inline void copyForward(unsigned char *dest, const unsigned char *src, size_t n)
    {
        size_t words = n >> 2, bytes = n & 3;
        __asm__ __volatile__("cld\n\trep movsl" : "+D"(dest), "+S"(src), "+c"(words) : : "memory");
        __asm__ __volatile__("rep movsb" : "+D"(dest), "+S"(src), "+c"(bytes) : : "memory");
    }

#if TS_LIBC_CLASSES
    // n <= 64: whole dwords, then 0-3 bytes; no rep.
    inline void copySmall(unsigned char *dest, const unsigned char *src, size_t n)
    {
        size_t words = n >> 2;
        if (words != 0u)
        {
            uint32_t scratch;
            __asm__ __volatile__("1:\n\t"
                                 "movl (%1), %3\n\t"
                                 "movl %3, (%0)\n\t"
                                 "addl $4, %1\n\t"
                                 "addl $4, %0\n\t"
                                 "decl %2\n\t"
                                 "jnz 1b"
                                 : "+r"(dest), "+r"(src), "+r"(words), "=&r"(scratch)
                                 :
                                 : "memory", "cc");
        }
        n &= 3u;
        if (n != 0u)
        {
            size_t bytes = n;
            __asm__ __volatile__("cld\n\trep movsb" : "+D"(dest), "+S"(src), "+c"(bytes) : : "memory");
        }
    }

    // n > 64: align the destination to four, rep movsl, the tail.
    inline void copyLarge(unsigned char *dest, const unsigned char *src, size_t n)
    {
        size_t head = (0u - reinterpret_cast<uintptr_t>(dest)) & 3u;
        __asm__ __volatile__("cld" : : : "memory");
        if (head != 0u)
        {
            n -= head;
            __asm__ __volatile__("rep movsb" : "+D"(dest), "+S"(src), "+c"(head) : : "memory");
        }
#if TS_MEMCPY_SSE
        if (((reinterpret_cast<uintptr_t>(dest) | reinterpret_cast<uintptr_t>(src)) & 15u) == 0u && n >= 64u)
        {
            size_t blocks = n >> 6;
            n &= 63u;
            __asm__ __volatile__("1:\n\t"
                                 "movaps (%1), %%xmm0\n\t"
                                 "movaps 16(%1), %%xmm1\n\t"
                                 "movaps 32(%1), %%xmm2\n\t"
                                 "movaps 48(%1), %%xmm3\n\t"
                                 "movaps %%xmm0, (%0)\n\t"
                                 "movaps %%xmm1, 16(%0)\n\t"
                                 "movaps %%xmm2, 32(%0)\n\t"
                                 "movaps %%xmm3, 48(%0)\n\t"
                                 "addl $64, %1\n\t"
                                 "addl $64, %0\n\t"
                                 "decl %2\n\t"
                                 "jnz 1b"
                                 : "+r"(dest), "+r"(src), "+r"(blocks)
                                 :
                                 : "memory", "cc", "xmm0", "xmm1", "xmm2", "xmm3");
        }
#endif
        size_t words = n >> 2, bytes = n & 3u;
        __asm__ __volatile__("rep movsl" : "+D"(dest), "+S"(src), "+c"(words) : : "memory");
        if (bytes != 0u)
            __asm__ __volatile__("rep movsb" : "+D"(dest), "+S"(src), "+c"(bytes) : : "memory");
    }

    inline void copyClassed(unsigned char *dest, const unsigned char *src, size_t n)
    {
        if (n <= 64u)
            copySmall(dest, src, n);
        else
            copyLarge(dest, src, n);
    }
#endif

    inline void copyBackward(unsigned char *dest, const unsigned char *src, size_t n)
    {
        // From the last byte down: the odd bytes first, then whole words.
        unsigned char *d = dest + n - 1;
        const unsigned char *s = src + n - 1;
        size_t bytes = n & 3, words = n >> 2;
        __asm__ __volatile__("std\n\trep movsb" : "+D"(d), "+S"(s), "+c"(bytes) : : "memory");
        d -= 3;
        s -= 3;
        __asm__ __volatile__("rep movsl\n\tcld" : "+D"(d), "+S"(s), "+c"(words) : : "memory");
    }
}

extern "C"
{
    void *memcpy(void *__restrict dest, const void *__restrict src, size_t n)
    {
        TS_STRING_HISTOGRAM(memcpyHist, dest, src, n);
#if TS_LIBC_CLASSES
        copyClassed(static_cast<unsigned char *>(dest), static_cast<const unsigned char *>(src), n);
#else
        copyForward(static_cast<unsigned char *>(dest), static_cast<const unsigned char *>(src), n);
#endif
        return dest;
    }

    void *memmove(void *dest, const void *src, size_t n)
    {
        TS_STRING_HISTOGRAM(memcpyHist, dest, src, n);
        unsigned char *d = static_cast<unsigned char *>(dest);
        const unsigned char *s = static_cast<const unsigned char *>(src);
        if (d <= s || d >= s + n)
#if TS_LIBC_CLASSES
            // Forward is safe here at any grain: the destination starts at
            // or below the source (each dword is read before it is written
            // over) or past its end. (The SSE blocks read 64 bytes before
            // writing them, also fine when d <= s.)
            copyClassed(d, s, n);
#else
            copyForward(d, s, n);
#endif
        else if (n != 0)
            copyBackward(d, s, n);
        return dest;
    }

    // Four bytes at a time until a word differs (nxdk's compares bytes; the
    // renderer's draw-key checks made it 6% of a frame).
    int memcmp(const void *a, const void *b, size_t n)
    {
        TS_STRING_HISTOGRAM(memcmpHist, a, b, n);
        const unsigned char *x = static_cast<const unsigned char *>(a);
        const unsigned char *y = static_cast<const unsigned char *>(b);
        while (n >= 4)
        {
            uint32_t wa, wb;
            __builtin_memcpy(&wa, x, 4);
            __builtin_memcpy(&wb, y, 4);
            if (wa != wb)
            {
#if TS_LIBC_CLASSES
                // The first differing byte decides; byte-swapped, it is the
                // most significant one that differs, so an unsigned compare
                // of the swapped words gives memcmp's order (the same -1/1
                // the byte loop below returns).
                return __builtin_bswap32(wa) < __builtin_bswap32(wb) ? -1 : 1;
#else
                break;
#endif
            }
            x += 4;
            y += 4;
            n -= 4;
        }
        for (; n; --n, ++x, ++y)
            if (*x != *y)
                return *x < *y ? -1 : 1;
        return 0;
    }

    void *memset(void *dest, int value, size_t n)
    {
        unsigned char *d = static_cast<unsigned char *>(dest);
        const uint32_t byte = static_cast<unsigned char>(value);
        uint32_t fill = byte * 0x01010101u;
#if TS_LIBC_CLASSES
        if (n > 64u)
        {
            // Align the destination to four, then whole dwords.
            size_t head = (0u - reinterpret_cast<uintptr_t>(d)) & 3u;
            n -= head;
            __asm__ __volatile__("cld\n\trep stosb" : "+D"(d), "+c"(head) : "a"(fill) : "memory");
        }
        else
            __asm__ __volatile__("cld" : : : "memory");
        size_t words = n >> 2, bytes = n & 3;
        if (words != 0u)
            __asm__ __volatile__("rep stosl" : "+D"(d), "+c"(words) : "a"(fill) : "memory");
        if (bytes != 0u)
            __asm__ __volatile__("rep stosb" : "+D"(d), "+c"(bytes) : "a"(fill) : "memory");
#else
        size_t words = n >> 2, bytes = n & 3;
        __asm__ __volatile__("cld\n\trep stosl" : "+D"(d), "+c"(words) : "a"(fill) : "memory");
        __asm__ __volatile__("rep stosb" : "+D"(d), "+c"(bytes) : "a"(fill) : "memory");
#endif
        return dest;
    }
}
