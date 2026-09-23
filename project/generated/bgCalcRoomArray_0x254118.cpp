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

// Function: bgCalcRoomArray
// Address: 0x254118 - 0x2541d4
void bgCalcRoomArray_0x254118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgCalcRoomArray_0x254118");
#endif

    switch (ctx->pc) {
        case 0x254128u: goto label_254128;
        default: break;
    }

    ctx->pc = 0x254118u;

    // 0x254118: 0x8f82a264  lw          $v0, -0x5D9C($gp)
    ctx->pc = 0x254118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x25411c: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x25411Cu;
    {
        const bool branch_taken_0x25411c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25411Cu;
        // 0x254120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25411c) {
            ctx->pc = 0x2541CCu;
            goto label_2541cc;
        }
    }
    ctx->pc = 0x254124u;
    // 0x254124: 0x8f86a240  lw          $a2, -0x5DC0($gp)
    ctx->pc = 0x254124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
label_254128:
    // 0x254128: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x254128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x25412c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25412cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x254130: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x254130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x254134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254138: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x254138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x25413c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x25413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x254140: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x254140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254144: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x254144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254148: 0x0  nop
    ctx->pc = 0x254148u;
    // NOP
    // 0x25414c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x25414Cu;
    {
        const bool branch_taken_0x25414c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x254150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25414Cu;
        // 0x254150: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25414c) {
            ctx->pc = 0x2541B8u;
            goto label_2541b8;
        }
    }
    ctx->pc = 0x254154u;
    // 0x254154: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x254154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254158: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x254158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25415c: 0x0  nop
    ctx->pc = 0x25415cu;
    // NOP
    // 0x254160: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x254160u;
    {
        const bool branch_taken_0x254160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254160) {
            ctx->pc = 0x254164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254160u;
            // 0x254164: 0x8f82a264  lw          $v0, -0x5D9C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2541BCu;
            goto label_2541bc;
        }
    }
    ctx->pc = 0x254168u;
    // 0x254168: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x254168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25416c: 0x46007834  c.lt.s      $f15, $f0
    ctx->pc = 0x25416cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254170: 0x0  nop
    ctx->pc = 0x254170u;
    // NOP
    // 0x254174: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x254174u;
    {
        const bool branch_taken_0x254174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254174) {
            ctx->pc = 0x254178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254174u;
            // 0x254178: 0x8f82a264  lw          $v0, -0x5D9C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2541BCu;
            goto label_2541bc;
        }
    }
    ctx->pc = 0x25417Cu;
    // 0x25417c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x25417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254180: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x254180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254184: 0x0  nop
    ctx->pc = 0x254184u;
    // NOP
    // 0x254188: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x254188u;
    {
        const bool branch_taken_0x254188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254188) {
            ctx->pc = 0x25418Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254188u;
            // 0x25418c: 0x8f82a264  lw          $v0, -0x5D9C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2541BCu;
            goto label_2541bc;
        }
    }
    ctx->pc = 0x254190u;
    // 0x254190: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x254190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254194: 0x46008834  c.lt.s      $f17, $f0
    ctx->pc = 0x254194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254198: 0x0  nop
    ctx->pc = 0x254198u;
    // NOP
    // 0x25419c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x25419Cu;
    {
        const bool branch_taken_0x25419c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25419c) {
            ctx->pc = 0x2541A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25419Cu;
            // 0x2541a0: 0x8f82a264  lw          $v0, -0x5D9C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2541BCu;
            goto label_2541bc;
        }
    }
    ctx->pc = 0x2541A4u;
    // 0x2541a4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2541a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2541a8: 0x46100034  c.lt.s      $f0, $f16
    ctx->pc = 0x2541a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2541ac: 0x0  nop
    ctx->pc = 0x2541acu;
    // NOP
    // 0x2541b0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2541B0u;
    {
        const bool branch_taken_0x2541b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2541b0) {
            ctx->pc = 0x2541B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2541B0u;
            // 0x2541b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2541B8u;
            goto label_2541b8;
        }
    }
    ctx->pc = 0x2541B8u;
label_2541b8:
    // 0x2541b8: 0x8f82a264  lw          $v0, -0x5D9C($gp)
    ctx->pc = 0x2541b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_2541bc:
    // 0x2541bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2541bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2541c0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2541c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2541c4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2541C4u;
    {
        const bool branch_taken_0x2541c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2541C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541C4u;
        // 0x2541c8: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541c4) {
            ctx->pc = 0x254128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254128;
        }
    }
    ctx->pc = 0x2541CCu;
label_2541cc:
    // 0x2541cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2541CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2541CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2541D4u;
}
