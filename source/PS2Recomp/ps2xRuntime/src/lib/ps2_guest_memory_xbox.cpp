// Xbox: the out-of-line half of every guest memory access
// (READn/WRITEn and FAST_READn/FAST_WRITEn in ps2_runtime_macros.h). Inline,
// an access only handles the whole access lying inside the first 32 MB; all
// other addresses come here and are handled exactly as the PC build's macros
// handle them: special addresses (BIOS, scratchpad, I/O, VU memory, kseg2/3)
// through runtime->LoadN/StoreN, everything else masked into RDRAM, wrapping
// past its end.
#include "ps2_runtime_macros.h"

#if defined(PLATFORM_XBOX)

PS2_XBOX_GUEST_SLOW uint16_t Ps2XboxFastRead16Slow(uint32_t addr, const uint8_t *rdram) { return Ps2FastRead16(rdram, addr); }
PS2_XBOX_GUEST_SLOW uint32_t Ps2XboxFastRead32Slow(uint32_t addr, const uint8_t *rdram) { return Ps2FastRead32(rdram, addr); }
PS2_XBOX_GUEST_SLOW uint64_t Ps2XboxFastRead64Slow(uint32_t addr, const uint8_t *rdram) { return Ps2FastRead64(rdram, addr); }

PS2_XBOX_GUEST_SLOW void Ps2XboxFastRead128Slow(uint32_t addr, const uint8_t *rdram, void *out)
{
    const __m128i value = Ps2FastRead128(rdram, addr);
    std::memcpy(out, &value, sizeof(value));
}

PS2_XBOX_GUEST_SLOW void Ps2XboxFastWrite16Slow(uint32_t addr, uint8_t *rdram, uint16_t value) { Ps2FastWrite16(rdram, addr, value); }
PS2_XBOX_GUEST_SLOW void Ps2XboxFastWrite32Slow(uint32_t addr, uint8_t *rdram, uint32_t value) { Ps2FastWrite32(rdram, addr, value); }
PS2_XBOX_GUEST_SLOW void Ps2XboxFastWrite64Slow(uint32_t addr, uint8_t *rdram, uint64_t value) { Ps2FastWrite64(rdram, addr, value); }

PS2_XBOX_GUEST_SLOW void Ps2XboxFastWrite128Slow(uint32_t addr, uint8_t *rdram, const void *value)
{
    __m128i bits;
    std::memcpy(&bits, value, sizeof(bits));
    Ps2FastWrite128(rdram, addr, bits);
}

PS2_XBOX_GUEST_SLOW uint8_t Ps2XboxRead8Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    return PS2Runtime::isSpecialAddress(addr) ? runtime->Load8(rdram, ctx, addr) : Ps2FastRead8(rdram, addr);
}

PS2_XBOX_GUEST_SLOW uint16_t Ps2XboxRead16Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    return PS2Runtime::isSpecialAddress(addr) ? runtime->Load16(rdram, ctx, addr) : Ps2FastRead16(rdram, addr);
}

PS2_XBOX_GUEST_SLOW uint32_t Ps2XboxRead32Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    return PS2Runtime::isSpecialAddress(addr) ? runtime->Load32(rdram, ctx, addr) : Ps2FastRead32(rdram, addr);
}

PS2_XBOX_GUEST_SLOW uint64_t Ps2XboxRead64Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    return PS2Runtime::isSpecialAddress(addr) ? runtime->Load64(rdram, ctx, addr) : Ps2FastRead64(rdram, addr);
}

PS2_XBOX_GUEST_SLOW void Ps2XboxRead128Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, void *out)
{
    const __m128i value = PS2Runtime::isSpecialAddress(addr) ? runtime->Load128(rdram, ctx, addr) : Ps2FastRead128(rdram, addr);
    std::memcpy(out, &value, sizeof(value));
}

PS2_XBOX_GUEST_SLOW void Ps2XboxWrite8Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint8_t value)
{
    if (PS2Runtime::isSpecialAddress(addr))
    {
        runtime->Store8(rdram, ctx, addr, value);
        return;
    }
    ps2TraceGuestWrite(rdram, addr, 1u, value, 0u, "WRITE8", ctx);
    Ps2FastWrite8(rdram, addr, value);
}

PS2_XBOX_GUEST_SLOW void Ps2XboxWrite16Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint16_t value)
{
    if (PS2Runtime::isSpecialAddress(addr))
    {
        runtime->Store16(rdram, ctx, addr, value);
        return;
    }
    ps2TraceGuestWrite(rdram, addr, 2u, value, 0u, "WRITE16", ctx);
    Ps2FastWrite16(rdram, addr, value);
}

PS2_XBOX_GUEST_SLOW void Ps2XboxWrite32Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t value)
{
    if (PS2Runtime::isSpecialAddress(addr))
    {
        runtime->Store32(rdram, ctx, addr, value);
        return;
    }
    ps2TraceGuestWrite(rdram, addr, 4u, value, 0u, "WRITE32", ctx);
    Ps2FastWrite32(rdram, addr, value);
}

PS2_XBOX_GUEST_SLOW void Ps2XboxWrite64Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint64_t value)
{
    if (PS2Runtime::isSpecialAddress(addr))
    {
        runtime->Store64(rdram, ctx, addr, value);
        return;
    }
    ps2TraceGuestWrite(rdram, addr, 8u, value, 0u, "WRITE64", ctx);
    Ps2FastWrite64(rdram, addr, value);
}

PS2_XBOX_GUEST_SLOW void Ps2XboxWrite128Slow(uint32_t addr, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, const void *value)
{
    __m128i bits;
    std::memcpy(&bits, value, sizeof(bits));
    if (PS2Runtime::isSpecialAddress(addr))
    {
        runtime->Store128(rdram, ctx, addr, bits);
        return;
    }
    const uint64_t lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(bits));
    const uint64_t hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(bits));
    ps2TraceGuestWrite(rdram, addr, 16u, lo, hi, "WRITE128", ctx);
    Ps2FastWrite128(rdram, addr, bits);
}

#endif // PLATFORM_XBOX
