// memcpy / memmove / memset, replacing nxdk's C library versions (the linker
// takes these before the library's).
//
// nxdk's versions move one byte per loop iteration. The runtime copies guest
// memory, frames and DMA packets through them constantly, and at a byte at a
// time they ran at about 5 MB/s. These use the string instructions four
// bytes at a time. Written in assembly so the compiler cannot turn the loops
// back into calls to themselves.
#include <cstddef>
#include <cstdint>

namespace
{
    inline void copyForward(unsigned char *dest, const unsigned char *src, size_t n)
    {
        size_t words = n >> 2, bytes = n & 3;
        __asm__ __volatile__("cld\n\trep movsl" : "+D"(dest), "+S"(src), "+c"(words) : : "memory");
        __asm__ __volatile__("rep movsb" : "+D"(dest), "+S"(src), "+c"(bytes) : : "memory");
    }

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

    void *memset(void *dest, int value, size_t n)
    {
        unsigned char *d = static_cast<unsigned char *>(dest);
        const uint32_t byte = static_cast<unsigned char>(value);
        uint32_t fill = byte * 0x01010101u;
        size_t words = n >> 2, bytes = n & 3;
        __asm__ __volatile__("cld\n\trep stosl" : "+D"(d), "+c"(words) : "a"(fill) : "memory");
        __asm__ __volatile__("rep stosb" : "+D"(d), "+c"(bytes) : "a"(fill) : "memory");
        return dest;
    }
}
