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

// Function: mmDrawLasso
// Address: 0x24b0c8 - 0x24b1e0
void mmDrawLasso_0x24b0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawLasso_0x24b0c8");
#endif

    switch (ctx->pc) {
        case 0x24b184u: goto label_24b184;
        case 0x24b19cu: goto label_24b19c;
        case 0x24b1b4u: goto label_24b1b4;
        default: break;
    }

    ctx->pc = 0x24b0c8u;

    // 0x24b0c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24b0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24b0cc: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x24b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24b0d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24b0d4: 0x3c087f7f  lui         $t0, 0x7F7F
    ctx->pc = 0x24b0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32639 << 16));
    // 0x24b0d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24b0dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b0e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24b0e4: 0x8f85a158  lw          $a1, -0x5EA8($gp)
    ctx->pc = 0x24b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x24b0e8: 0x84820022  lh          $v0, 0x22($a0)
    ctx->pc = 0x24b0e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x24b0ec: 0x8f87a188  lw          $a3, -0x5E78($gp)
    ctx->pc = 0x24b0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x24b0f0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x24b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24b0f4: 0x84830026  lh          $v1, 0x26($a0)
    ctx->pc = 0x24b0f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x24b0f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24b0fc: 0x8f86a15c  lw          $a2, -0x5EA4($gp)
    ctx->pc = 0x24b0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x24b100: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x24b100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24b104: 0x8f84a18c  lw          $a0, -0x5E74($gp)
    ctx->pc = 0x24b104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x24b108: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x24b108u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x24b10c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x24b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24b110: 0x9392a02c  lbu         $s2, -0x5FD4($gp)
    ctx->pc = 0x24b110u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24b114: 0x8f90a168  lw          $s0, -0x5E98($gp)
    ctx->pc = 0x24b114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x24b118: 0x2812  mflo        $a1
    ctx->pc = 0x24b118u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x24b11c: 0x1010  mfhi        $v0
    ctx->pc = 0x24b11cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24b120: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x24b120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x24b124: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24b124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b128: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24b128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24b12c: 0x8f91a16c  lw          $s1, -0x5E94($gp)
    ctx->pc = 0x24b12cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x24b130: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x24b130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24b134: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24b134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x24b138: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b13c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x24b13cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x24b140: 0x2489025  or          $s2, $s2, $t0
    ctx->pc = 0x24b140u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 8));
    // 0x24b144: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b148: 0x8f84a100  lw          $a0, -0x5F00($gp)
    ctx->pc = 0x24b148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942976)));
    // 0x24b14c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24b14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b150: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x24b150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b154: 0x2812  mflo        $a1
    ctx->pc = 0x24b154u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x24b158: 0x1810  mfhi        $v1
    ctx->pc = 0x24b158u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24b15c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x24b15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x24b160: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x24b160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24b164: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24b164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24b168: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x24b168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x24b16c: 0x8f85a104  lw          $a1, -0x5EFC($gp)
    ctx->pc = 0x24b16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x24b170: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24b170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24b174: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x24b174u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x24b178: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x24b178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24b17c: 0xc092514  jal         func_249450
    ctx->pc = 0x24B17Cu;
    SET_GPR_U32(ctx, 31, 0x24B184u);
    ctx->pc = 0x24B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B17Cu;
    // 0x24b180: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249450u, 0x24B17Cu, 0x24B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B184u;
label_24b184:
    // 0x24b184: 0x8f84a100  lw          $a0, -0x5F00($gp)
    ctx->pc = 0x24b184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942976)));
    // 0x24b188: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24b188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b18c: 0x8f85a104  lw          $a1, -0x5EFC($gp)
    ctx->pc = 0x24b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x24b190: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x24b190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b194: 0xc092514  jal         func_249450
    ctx->pc = 0x24B194u;
    SET_GPR_U32(ctx, 31, 0x24B19Cu);
    ctx->pc = 0x24B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B194u;
    // 0x24b198: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249450u, 0x24B194u, 0x24B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B19Cu;
label_24b19c:
    // 0x24b19c: 0x8f85a104  lw          $a1, -0x5EFC($gp)
    ctx->pc = 0x24b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x24b1a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24b1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24b1a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1ac: 0xc092514  jal         func_249450
    ctx->pc = 0x24B1ACu;
    SET_GPR_U32(ctx, 31, 0x24B1B4u);
    ctx->pc = 0x24B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B1ACu;
    // 0x24b1b0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249450u, 0x24B1ACu, 0x24B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1B4u;
label_24b1b4:
    // 0x24b1b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24b1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24b1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1bc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x24b1bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1c0: 0x8f84a100  lw          $a0, -0x5F00($gp)
    ctx->pc = 0x24b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942976)));
    // 0x24b1c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24b1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b1c8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24b1c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24b1ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b1d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24b1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b1d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b1d8: 0x8092514  j           func_249450
    ctx->pc = 0x24B1D8u;
    ctx->pc = 0x24B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B1D8u;
    // 0x24b1dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249450u;
    mmDrawLine_0x249450(rdram, ctx, runtime); return;
    ctx->pc = 0x24B1E0u;
}
