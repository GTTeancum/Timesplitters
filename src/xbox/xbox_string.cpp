// memcpy / memmove / memset / memcmp, replacing nxdk's C library versions (the linker
// takes these before the library's).
//
// nxdk's versions move one byte per loop iteration. The runtime copies guest
// memory, frames and DMA packets through them constantly, and at a byte at a
// time they ran at about 5 MB/s. These use the string instructions four
// bytes at a time. Written in assembly so the compiler cannot turn the loops
// back into calls to themselves.
#include <cstddef>
#include <cstdint>

#ifndef TS_NATIVE_LOGIC
#define TS_NATIVE_LOGIC 0
#endif

namespace
{
#if TS_NATIVE_LOGIC
    // TS_NATIVE_LOGIC: most copies are short (registers, vectors, matrices,
    // display-list pieces). A rep-prefixed string instruction has a start-up
    // cost on the Pentium III and runs one iteration per translated block in
    // xemu; plain 32-bit moves, 16 bytes per loop pass, cost neither. The
    // loop is assembly so the compiler cannot turn it back into a memcpy
    // call; the constant-size tails become single moves.
    inline void copyBlocks16(unsigned char *&dest, const unsigned char *&src, size_t blocks)
    {
        __asm__ __volatile__("1:\n\t"
                             "movl (%%esi), %%eax\n\t"
                             "movl 4(%%esi), %%edx\n\t"
                             "movl %%eax, (%%edi)\n\t"
                             "movl %%edx, 4(%%edi)\n\t"
                             "movl 8(%%esi), %%eax\n\t"
                             "movl 12(%%esi), %%edx\n\t"
                             "movl %%eax, 8(%%edi)\n\t"
                             "movl %%edx, 12(%%edi)\n\t"
                             "addl $16, %%esi\n\t"
                             "addl $16, %%edi\n\t"
                             "decl %%ecx\n\t"
                             "jnz 1b"
                             : "+S"(src), "+D"(dest), "+c"(blocks)
                             :
                             : "eax", "edx", "memory", "cc");
    }

    // 0-15 bytes, forward.
    inline void copyTail(unsigned char *dest, const unsigned char *src, size_t n)
    {
        if (n & 8)
        {
            __builtin_memcpy(dest, src, 8);
            dest += 8;
            src += 8;
        }
        if (n & 4)
        {
            __builtin_memcpy(dest, src, 4);
            dest += 4;
            src += 4;
        }
        if (n & 2)
        {
            __builtin_memcpy(dest, src, 2);
            dest += 2;
            src += 2;
        }
        if (n & 1)
            *dest = *src;
    }

    inline void copyForward(unsigned char *dest, const unsigned char *src, size_t n)
    {
        if (n >= 16)
            copyBlocks16(dest, src, n >> 4);
        copyTail(dest, src, n & 15u);
    }
#else
    inline void copyForward(unsigned char *dest, const unsigned char *src, size_t n)
    {
        size_t words = n >> 2, bytes = n & 3;
        __asm__ __volatile__("cld\n\trep movsl" : "+D"(dest), "+S"(src), "+c"(words) : : "memory");
        __asm__ __volatile__("rep movsb" : "+D"(dest), "+S"(src), "+c"(bytes) : : "memory");
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
        copyForward(static_cast<unsigned char *>(dest), static_cast<const unsigned char *>(src), n);
        return dest;
    }

    void *memmove(void *dest, const void *src, size_t n)
    {
        unsigned char *d = static_cast<unsigned char *>(dest);
        const unsigned char *s = static_cast<const unsigned char *>(src);
        if (d <= s || d >= s + n)
            copyForward(d, s, n);
        else if (n != 0)
            copyBackward(d, s, n);
        return dest;
    }

    // Four bytes at a time until a word differs (nxdk's compares bytes; the
    // renderer's draw-key checks made it 6% of a frame).
    int memcmp(const void *a, const void *b, size_t n)
    {
        const unsigned char *x = static_cast<const unsigned char *>(a);
        const unsigned char *y = static_cast<const unsigned char *>(b);
#if TS_NATIVE_LOGIC
        // Two words per pass while they match (keys and blocks are mostly
        // equal); the word loop below finds the first differing byte.
        while (n >= 8)
        {
            uint32_t a0, a1, b0, b1;
            __builtin_memcpy(&a0, x, 4);
            __builtin_memcpy(&a1, x + 4, 4);
            __builtin_memcpy(&b0, y, 4);
            __builtin_memcpy(&b1, y + 4, 4);
            if ((a0 ^ b0) | (a1 ^ b1))
                break;
            x += 8;
            y += 8;
            n -= 8;
        }
#endif
        while (n >= 4)
        {
            uint32_t wa, wb;
            __builtin_memcpy(&wa, x, 4);
            __builtin_memcpy(&wb, y, 4);
            if (wa != wb)
                break;
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
#if TS_NATIVE_LOGIC
        // As memcpy: plain stores, 16 bytes per pass, then the tail.
        if (n >= 16)
        {
            size_t blocks = n >> 4;
            __asm__ __volatile__("1:\n\t"
                                 "movl %%eax, (%%edi)\n\t"
                                 "movl %%eax, 4(%%edi)\n\t"
                                 "movl %%eax, 8(%%edi)\n\t"
                                 "movl %%eax, 12(%%edi)\n\t"
                                 "addl $16, %%edi\n\t"
                                 "decl %%ecx\n\t"
                                 "jnz 1b"
                                 : "+D"(d), "+c"(blocks)
                                 : "a"(fill)
                                 : "memory", "cc");
        }
        if (n & 8)
        {
            __builtin_memcpy(d, &fill, 4);
            __builtin_memcpy(d + 4, &fill, 4);
            d += 8;
        }
        if (n & 4)
        {
            __builtin_memcpy(d, &fill, 4);
            d += 4;
        }
        if (n & 2)
        {
            __builtin_memcpy(d, &fill, 2);
            d += 2;
        }
        if (n & 1)
            *d = static_cast<unsigned char>(byte);
        return dest;
#endif
        size_t words = n >> 2, bytes = n & 3;
        __asm__ __volatile__("cld\n\trep stosl" : "+D"(d), "+c"(words) : "a"(fill) : "memory");
        __asm__ __volatile__("rep stosb" : "+D"(d), "+c"(bytes) : "a"(fill) : "memory");
        return dest;
    }
}
