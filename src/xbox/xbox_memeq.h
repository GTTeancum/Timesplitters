#pragma once
// Fixed-size equality without a memcmp call (src/xbox/PUSH-BC-PLAN.md M3.7,
// B-PLATFORM). memcmp with a constant size is still a call into
// xbox_string.cpp on the Xbox (nxdk builds with -fno-builtin semantics for
// it), and it answers an order nobody asks for. A caller that only needs
// "equal?" for a key of known size (the renderer's draw and state keys, the
// texture cache's tags) uses xboxMemEq<N>: dword compares OR-ed together,
// no branch per word, the whole thing inlined. Same answer as
// memcmp(a, b, N) == 0 for any alignment.
#include <cstddef>
#include <cstdint>
#include <cstring>

template <size_t N>
inline bool xboxMemEq(const void *a, const void *b) noexcept
{
    const unsigned char *x = static_cast<const unsigned char *>(a);
    const unsigned char *y = static_cast<const unsigned char *>(b);
    uint32_t diff = 0;
    size_t i = 0;
    for (; i + 4u <= N; i += 4u)
    {
        uint32_t wa, wb;
        __builtin_memcpy(&wa, x + i, 4); // (constant size: a plain load)
        __builtin_memcpy(&wb, y + i, 4);
        diff |= wa ^ wb;
    }
    for (; i < N; ++i)
        diff |= static_cast<uint32_t>(x[i] ^ y[i]);
    return diff == 0u;
}

// The same for a size known only at run time but small (keys up to 64
// bytes): an early-out dword loop; larger sizes go to memcmp.
inline bool xboxMemEqSmall(const void *a, const void *b, size_t n) noexcept
{
    if (n > 64u)
        return std::memcmp(a, b, n) == 0;
    const unsigned char *x = static_cast<const unsigned char *>(a);
    const unsigned char *y = static_cast<const unsigned char *>(b);
    for (; n >= 4u; n -= 4u, x += 4, y += 4)
    {
        uint32_t wa, wb;
        __builtin_memcpy(&wa, x, 4);
        __builtin_memcpy(&wb, y, 4);
        if (wa != wb)
            return false;
    }
    for (; n != 0u; --n, ++x, ++y)
        if (*x != *y)
            return false;
    return true;
}
