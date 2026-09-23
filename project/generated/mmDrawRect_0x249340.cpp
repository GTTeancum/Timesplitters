#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mmDrawRect
// Address: 0x249340 - 0x249450
void mmDrawRect_0x249340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawRect_0x249340");
#endif

    ctx->pc = 0x249340u;

    // 0x249340: 0x8f89a168  lw          $t1, -0x5E98($gp)
    ctx->pc = 0x249340u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x249344: 0xc782a158  lwc1        $f2, -0x5EA8($gp)
    ctx->pc = 0x249344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249348: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x249348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24934c: 0x8f8ba180  lw          $t3, -0x5E80($gp)
    ctx->pc = 0x24934cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
    // 0x249350: 0xc781a15c  lwc1        $f1, -0x5EA4($gp)
    ctx->pc = 0x249350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249354: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x249354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x249358: 0xc93023  subu        $a2, $a2, $t1
    ctx->pc = 0x249358u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x24935c: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x24935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x249360: 0xcb0018  mult        $zero, $a2, $t3
    ctx->pc = 0x249360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x249364: 0x8f8aa184  lw          $t2, -0x5E7C($gp)
    ctx->pc = 0x249364u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x249368: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x249368u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x24936c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x24936cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x249370: 0x70ea0018  mult1       $zero, $a3, $t2
    ctx->pc = 0x249370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x249374: 0x891023  subu        $v0, $a0, $t1
    ctx->pc = 0x249374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x249378: 0x1812  mflo        $v1
    ctx->pc = 0x249378u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x24937c: 0x3010  mfhi        $a2
    ctx->pc = 0x24937cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x249380: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x249380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x249384: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x249384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x249388: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x249388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24938c: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x24938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x249390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249394: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x249394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x249398: 0x4b0018  mult        $zero, $v0, $t3
    ctx->pc = 0x249398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24939c: 0x70001812  mflo1       $v1
    ctx->pc = 0x24939cu;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x2493a0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2493a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2493a4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2493a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2493a8: 0x70003810  mfhi1       $a3
    ctx->pc = 0x2493a8u;
    SET_GPR_U64(ctx, 7, ctx->hi1);
    // 0x2493ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2493acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2493b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2493b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2493b4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2493b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2493b8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2493b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2493bc: 0x70aa0018  mult1       $zero, $a1, $t2
    ctx->pc = 0x2493bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2493c0: 0x1812  mflo        $v1
    ctx->pc = 0x2493c0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2493c4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2493c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2493c8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2493c8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2493cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2493ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2493d0: 0x1010  mfhi        $v0
    ctx->pc = 0x2493d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2493d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2493d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2493d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2493d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2493dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2493dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2493e0: 0x70002810  mfhi1       $a1
    ctx->pc = 0x2493e0u;
    SET_GPR_U64(ctx, 5, ctx->hi1);
    // 0x2493e4: 0x70001812  mflo1       $v1
    ctx->pc = 0x2493e4u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x2493e8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2493e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2493ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2493ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2493f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2493f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2493f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2493f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2493f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2493f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2493fc: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2493fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x249400: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x249400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x249404: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x249404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x249408: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x249408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24940c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24940cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x249410: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x249410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x249414: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x249414u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x249418: 0x44877800  mtc1        $a3, $f15
    ctx->pc = 0x249418u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x24941c: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x24941cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x249420: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x249420u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x249424: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x249424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x249428: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x249428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24942c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x24942cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x249430: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x249430u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x249434: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x249434u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x249438: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x249438u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x24943c: 0x460c1300  add.s       $f12, $f2, $f12
    ctx->pc = 0x24943cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x249440: 0x460f0bc0  add.s       $f15, $f1, $f15
    ctx->pc = 0x249440u;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x249444: 0x460e1380  add.s       $f14, $f2, $f14
    ctx->pc = 0x249444u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
    // 0x249448: 0x80ae172  j           func_2B85C8
    ctx->pc = 0x249448u;
    ctx->pc = 0x24944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249448u;
    // 0x24944c: 0x460d0b40  add.s       $f13, $f1, $f13 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B85C8u;
    dlFillRectangleFloat_0x2b85c8(rdram, ctx, runtime); return;
    ctx->pc = 0x249450u;
}
