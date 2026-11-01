// TS_NATIVE_LOGIC: the out-of-line half of xbox_logic.h (cold paths of the
// lean call protocol and of the promoted functions' guest accesses, and the
// published leaf natives). Empty unless the switch is on.
#if defined(TS_NATIVE_LOGIC) && TS_NATIVE_LOGIC
#include "xbox_logic.h"

PS2Runtime::RecompiledFunction g_xlLeafNative[XL_LEAF_COUNT] = {};

// The original post-call tests (ps2_direct_call_xbox.h PS2X_CALL_ENTRY),
// for a callee that did not come back with pc == resume.
XL_COLD bool xlCallFixup(R5900Context *ctx, PS2Runtime *runtime, uint32_t target, uint32_t resume)
{
    if (runtime->isStopRequested() || ctx->pc == 0u)
        return false;
    if (ctx->pc == target)
        ctx->pc = resume; // a native override that left pc at its entry
    return ctx->pc == resume;
}

void xlNoteLeafNative(uint32_t address, PS2Runtime::RecompiledFunction native)
{
    switch (address)
    {
    case 0x2D5E98u: g_xlLeafNative[XL_LEAF_MUL_MATRIX] = native; break;
    case 0x2D6188u: g_xlLeafNative[XL_LEAF_UNIT_MATRIX] = native; break;
    case 0x2D6120u: g_xlLeafNative[XL_LEAF_COPY_MATRIX] = native; break;
    case 0x2DC5A0u: g_xlLeafNative[XL_LEAF_FABSF] = native; break;
    case 0x2B5638u: g_xlLeafNative[XL_LEAF_VEC_ROT_ALIGNED] = native; break;
    case 0x2B5570u: g_xlLeafNative[XL_LEAF_VEC3_MUL4_ALIGNED] = native; break;
    default: break;
    }
}

// ---- The leaf bodies (xbox_logic.h): nativeVu0MulMatrix & co.'s operations,
// in their order (ts_native_math.cpp).
namespace
{
    inline __m128 lane0(__m128 v) { return _mm_shuffle_ps(v, v, _MM_SHUFFLE(0, 0, 0, 0)); }
    inline __m128 lane1(__m128 v) { return _mm_shuffle_ps(v, v, _MM_SHUFFLE(1, 1, 1, 1)); }
    inline __m128 lane2(__m128 v) { return _mm_shuffle_ps(v, v, _MM_SHUFFLE(2, 2, 2, 2)); }
    inline __m128 lane3(__m128 v) { return _mm_shuffle_ps(v, v, _MM_SHUFFLE(3, 3, 3, 3)); }
    inline __m128 maskXYZ() { return _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1)); }
    inline __m128 maskW() { return _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0)); }
}

XL_LEAF_CORE void xlLeafMulMatrixCore(uint32_t out, uint32_t left, uint8_t *rdram, R5900Context *ctx,
                                      PS2Runtime *runtime, uint32_t right)
{
    const __m128 c0 = _mm_castsi128_ps(READ128(left));
    const __m128 c1 = _mm_castsi128_ps(READ128(left + 16u));
    const __m128 c2 = _mm_castsi128_ps(READ128(left + 32u));
    const __m128 c3 = _mm_castsi128_ps(READ128(left + 48u));
    __m128 column = ctx->vu0_vf[8], result = ctx->vu0_vf[9], acc = ctx->vu0_acc;
    for (uint32_t offset = 0; offset < 64u; offset += 16u)
    {
        // Each column is read after the previous one is stored: m0 may overlap m2.
        column = _mm_castsi128_ps(READ128(right + offset));
        acc = PS2_VMUL(c0, lane0(column));
        acc = PS2_VADD(acc, PS2_VMUL(c1, lane1(column)));
        acc = PS2_VADD(acc, PS2_VMUL(c2, lane2(column)));
        result = PS2_VADD(acc, PS2_VMUL(c3, lane3(column)));
        WRITE128(out + offset, _mm_castps_si128(result));
    }
    ctx->vu0_vf[4] = c0;
    ctx->vu0_vf[5] = c1;
    ctx->vu0_vf[6] = c2;
    ctx->vu0_vf[7] = c3;
    ctx->vu0_vf[8] = column;
    ctx->vu0_vf[9] = result;
    ctx->vu0_acc = acc;
}

XL_LEAF_CORE void xlLeafUnitMatrixCore(uint32_t m, uint32_t, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const __m128 vf0 = ctx->vu0_vf[0];
    __m128 row3 = PS2_VSUB(vf0, vf0);
    row3 = PS2_VBLEND(row3, PS2_VADD(row3, vf0), maskW());
    const __m128 row2 = _mm_shuffle_ps(row3, row3, _MM_SHUFFLE(0, 3, 2, 1));
    const __m128 row1 = _mm_shuffle_ps(row2, row2, _MM_SHUFFLE(0, 3, 2, 1));
    const __m128 row0 = _mm_shuffle_ps(row1, row1, _MM_SHUFFLE(0, 3, 2, 1));
    ctx->vu0_vf[4] = row3;
    ctx->vu0_vf[5] = row2;
    ctx->vu0_vf[6] = row1;
    ctx->vu0_vf[7] = row0;
    WRITE128(m + 48u, _mm_castps_si128(row3));
    WRITE128(m + 32u, _mm_castps_si128(row2));
    WRITE128(m + 16u, _mm_castps_si128(row1));
    WRITE128(m, _mm_castps_si128(row0));
}

XL_LEAF_CORE void xlLeafCopyMatrixCore(uint32_t dst, uint32_t src, uint8_t *rdram, R5900Context *ctx,
                                       PS2Runtime *runtime)
{
    const __m128i r0 = READ128(src), r1 = READ128(src + 16u), r2 = READ128(src + 32u), r3 = READ128(src + 48u);
    SET_GPR_VEC(ctx, 6, r0);
    SET_GPR_VEC(ctx, 7, r1);
    SET_GPR_VEC(ctx, 8, r2);
    SET_GPR_VEC(ctx, 9, r3);
    WRITE128(dst, r0);
    WRITE128(dst + 16u, r1);
    WRITE128(dst + 32u, r2);
    WRITE128(dst + 48u, r3);
}

XL_LEAF_CORE void xlLeafVecRotAlignedCore(uint32_t m, uint32_t v, uint8_t *rdram, R5900Context *ctx,
                                          PS2Runtime *runtime)
{
    __m128 vec = _mm_castsi128_ps(READ128(v));
    const __m128 c0 = _mm_castsi128_ps(READ128(m));
    const __m128 c1 = _mm_castsi128_ps(READ128(m + 16u));
    const __m128 c2 = _mm_castsi128_ps(READ128(m + 32u));
    __m128 acc = PS2_VBLEND(ctx->vu0_acc, PS2_VMUL(c0, lane0(vec)), maskXYZ());
    acc = PS2_VBLEND(acc, PS2_VADD(acc, PS2_VMUL(c1, lane1(vec))), maskXYZ());
    vec = PS2_VBLEND(vec, PS2_VADD(acc, PS2_VMUL(c2, lane2(vec))), maskXYZ());
    ctx->vu0_vf[4] = c0;
    ctx->vu0_vf[5] = c1;
    ctx->vu0_vf[6] = c2;
    ctx->vu0_vf[8] = vec;
    ctx->vu0_acc = acc;
    WRITE128(v, _mm_castps_si128(vec));
}

XL_LEAF_CORE void xlLeafVec3Mul4AlignedCore(uint32_t m, uint32_t v, uint8_t *rdram, R5900Context *ctx,
                                            PS2Runtime *runtime, uint32_t out)
{
    const __m128 vec = _mm_castsi128_ps(READ128(v));
    const __m128 c0 = _mm_castsi128_ps(READ128(m));
    const __m128 c1 = _mm_castsi128_ps(READ128(m + 16u));
    const __m128 c2 = _mm_castsi128_ps(READ128(m + 32u));
    const __m128 c3 = _mm_castsi128_ps(READ128(m + 48u));
    const __m128 vf0 = ctx->vu0_vf[0];
    __m128 acc = PS2_VMUL(c0, lane0(vec));
    acc = PS2_VADD(acc, PS2_VMUL(c1, lane1(vec)));
    acc = PS2_VADD(acc, PS2_VMUL(c2, lane2(vec)));
    const __m128 result = PS2_VADD(acc, PS2_VMUL(c3, lane3(vf0)));
    ctx->vu0_vf[4] = c0;
    ctx->vu0_vf[5] = c1;
    ctx->vu0_vf[6] = c2;
    ctx->vu0_vf[7] = c3;
    ctx->vu0_vf[8] = vec;
    ctx->vu0_vf[9] = result;
    ctx->vu0_acc = acc;
    WRITE128(out, _mm_castps_si128(result));
}

unsigned xlLeafNativeCount()
{
    unsigned count = 0;
    for (const PS2Runtime::RecompiledFunction native : g_xlLeafNative)
        count += native != nullptr ? 1u : 0u;
    return count;
}

// The promoted code drops the per-instruction pc stores; the slow paths
// (anything but the first 32 MB of RAM) see the same pc as the original's.
XL_COLD uint8_t xlRead8Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ctx->pc = pc;
    return Ps2XboxRead8Slow(addr, rdram, ctx, runtime);
}
XL_COLD uint16_t xlRead16Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ctx->pc = pc;
    return Ps2XboxRead16Slow(addr, rdram, ctx, runtime);
}
XL_COLD uint32_t xlRead32Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ctx->pc = pc;
    return Ps2XboxRead32Slow(addr, rdram, ctx, runtime);
}
XL_COLD uint64_t xlRead64Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ctx->pc = pc;
    return Ps2XboxRead64Slow(addr, rdram, ctx, runtime);
}
XL_COLD void xlRead128Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, void *out)
{
    ctx->pc = pc;
    Ps2XboxRead128Slow(addr, rdram, ctx, runtime, out);
}
XL_COLD void xlWrite8Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint8_t value)
{
    ctx->pc = pc;
    Ps2XboxWrite8Slow(addr, rdram, ctx, runtime, value);
}
XL_COLD void xlWrite16Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint16_t value)
{
    ctx->pc = pc;
    Ps2XboxWrite16Slow(addr, rdram, ctx, runtime, value);
}
XL_COLD void xlWrite32Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t value)
{
    ctx->pc = pc;
    Ps2XboxWrite32Slow(addr, rdram, ctx, runtime, value);
}
XL_COLD void xlWrite64Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint64_t value)
{
    ctx->pc = pc;
    Ps2XboxWrite64Slow(addr, rdram, ctx, runtime, value);
}
XL_COLD void xlWrite128Slow(uint32_t addr, uint32_t pc, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, const void *value)
{
    ctx->pc = pc;
    Ps2XboxWrite128Slow(addr, rdram, ctx, runtime, value);
}
#endif
