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

// Function: mmDrawLine
// Address: 0x249450 - 0x24952c
void mmDrawLine_0x249450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawLine_0x249450");
#endif

    ctx->pc = 0x249450u;

    // 0x249450: 0x8f83a168  lw          $v1, -0x5E98($gp)
    ctx->pc = 0x249450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x249454: 0x8f8aa180  lw          $t2, -0x5E80($gp)
    ctx->pc = 0x249454u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
    // 0x249458: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x249458u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x24945c: 0x8f82a16c  lw          $v0, -0x5E94($gp)
    ctx->pc = 0x24945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x249460: 0xca0018  mult        $zero, $a2, $t2
    ctx->pc = 0x249460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x249464: 0x8f89a184  lw          $t1, -0x5E7C($gp)
    ctx->pc = 0x249464u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x249468: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x249468u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24946c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x24946cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x249470: 0x70e90018  mult1       $zero, $a3, $t1
    ctx->pc = 0x249470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x249474: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x249474u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x249478: 0x1012  mflo        $v0
    ctx->pc = 0x249478u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24947c: 0x3010  mfhi        $a2
    ctx->pc = 0x24947cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x249480: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x249480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x249484: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x249484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x249488: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x249488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24948c: 0x8f8ba158  lw          $t3, -0x5EA8($gp)
    ctx->pc = 0x24948cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x249490: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x249490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x249494: 0x8a0018  mult        $zero, $a0, $t2
    ctx->pc = 0x249494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x249498: 0x70001012  mflo1       $v0
    ctx->pc = 0x249498u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x24949c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x24949cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2494a0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2494a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2494a4: 0x70003810  mfhi1       $a3
    ctx->pc = 0x2494a4u;
    SET_GPR_U64(ctx, 7, ctx->hi1);
    // 0x2494a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2494a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2494ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2494acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2494b0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2494b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2494b4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2494b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2494b8: 0x70a90018  mult1       $zero, $a1, $t1
    ctx->pc = 0x2494b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2494bc: 0x1012  mflo        $v0
    ctx->pc = 0x2494bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2494c0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2494c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2494c4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2494c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2494c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2494c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2494cc: 0x2010  mfhi        $a0
    ctx->pc = 0x2494ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2494d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2494d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2494d4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2494d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2494d8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2494d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2494dc: 0x70002810  mfhi1       $a1
    ctx->pc = 0x2494dcu;
    SET_GPR_U64(ctx, 5, ctx->hi1);
    // 0x2494e0: 0x70001012  mflo1       $v0
    ctx->pc = 0x2494e0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x2494e4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2494e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2494e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2494e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2494ec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2494ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2494f0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2494f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2494f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2494f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2494f8: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2494f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2494fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2494fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x249500: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x249500u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x249504: 0x8f82a15c  lw          $v0, -0x5EA4($gp)
    ctx->pc = 0x249504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x249508: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x249508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x24950c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x24950cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x249510: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x249510u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x249514: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x249514u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x249518: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x249518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x24951c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x24951cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x249520: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x249520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x249524: 0x80ae226  j           func_2B8898
    ctx->pc = 0x249524u;
    ctx->pc = 0x249528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249524u;
    // 0x249528: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    dlDrawLine_0x2b8898(rdram, ctx, runtime); return;
    ctx->pc = 0x24952Cu;
}
