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

// Function: propGetNext
// Address: 0x270358 - 0x2703f8
void propGetNext_0x270358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propGetNext_0x270358");
#endif

    switch (ctx->pc) {
        case 0x2703a0u: goto label_2703a0;
        default: break;
    }

    ctx->pc = 0x270358u;

    // 0x270358: 0x8f83b15c  lw          $v1, -0x4EA4($gp)
    ctx->pc = 0x270358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x27035c: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x27035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x270360: 0x8f88b07c  lw          $t0, -0x4F84($gp)
    ctx->pc = 0x270360u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x270364: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x270364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x270368: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x270368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27036c: 0x84300b  movn        $a2, $a0, $a0
    ctx->pc = 0x27036cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x270370: 0x24c60250  addiu       $a2, $a2, 0x250
    ctx->pc = 0x270370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 592));
    // 0x270374: 0x2463fdb0  addiu       $v1, $v1, -0x250
    ctx->pc = 0x270374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966704));
    // 0x270378: 0x1034821  addu        $t1, $t0, $v1
    ctx->pc = 0x270378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x27037c: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x27037cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x270380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270380u;
    {
        const bool branch_taken_0x270380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270380u;
        // 0x270384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270380) {
            ctx->pc = 0x270390u;
            goto label_270390;
        }
    }
    ctx->pc = 0x270388u;
    // 0x270388: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x270388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27038c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27038cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270390:
    // 0x270390: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x270390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x270394: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x270394u;
    {
        const bool branch_taken_0x270394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270394u;
        // 0x270398: 0x240bffff  addiu       $t3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270394) {
            ctx->pc = 0x2703F0u;
            goto label_2703f0;
        }
    }
    ctx->pc = 0x27039Cu;
    // 0x27039c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x27039cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2703a0:
    // 0x2703a0: 0x54c40003  bnel        $a2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2703A0u;
    {
        const bool branch_taken_0x2703a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2703a0) {
            ctx->pc = 0x2703A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2703A0u;
            // 0x2703a4: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2703B0u;
            goto label_2703b0;
        }
    }
    ctx->pc = 0x2703A8u;
    // 0x2703a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2703A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2703ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703A8u;
        // 0x2703ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2703A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2703B0u;
label_2703b0:
    // 0x2703b0: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2703B0u;
    {
        const bool branch_taken_0x2703b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2703b0) {
            ctx->pc = 0x2703C8u;
            goto label_2703c8;
        }
    }
    ctx->pc = 0x2703B8u;
    // 0x2703b8: 0x54ab0005  bnel        $a1, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2703B8u;
    {
        const bool branch_taken_0x2703b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 11));
        if (branch_taken_0x2703b8) {
            ctx->pc = 0x2703BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2703B8u;
            // 0x2703bc: 0x24c60250  addiu       $a2, $a2, 0x250 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2703D0u;
            goto label_2703d0;
        }
    }
    ctx->pc = 0x2703C0u;
    // 0x2703c0: 0x504a0003  beql        $v0, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2703C0u;
    {
        const bool branch_taken_0x2703c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x2703c0) {
            ctx->pc = 0x2703C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2703C0u;
            // 0x2703c4: 0x24c60250  addiu       $a2, $a2, 0x250 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2703D0u;
            goto label_2703d0;
        }
    }
    ctx->pc = 0x2703C8u;
label_2703c8:
    // 0x2703c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2703C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2703CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703C8u;
        // 0x2703cc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2703C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2703D0u;
label_2703d0:
    // 0x2703d0: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x2703d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2703d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2703D4u;
    {
        const bool branch_taken_0x2703d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2703d4) {
            ctx->pc = 0x2703E8u;
            goto label_2703e8;
        }
    }
    ctx->pc = 0x2703DCu;
    // 0x2703dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2703dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2703e0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2703e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2703e4: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x2703e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_2703e8:
    // 0x2703e8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2703E8u;
    {
        const bool branch_taken_0x2703e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2703e8) {
            ctx->pc = 0x2703A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2703a0;
        }
    }
    ctx->pc = 0x2703F0u;
label_2703f0:
    // 0x2703f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2703F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2703F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703F0u;
        // 0x2703f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2703F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2703F8u;
}
