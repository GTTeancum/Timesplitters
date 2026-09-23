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

// Function: frontfxFinished
// Address: 0x22a5b0 - 0x22a60c
void frontfxFinished_0x22a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxFinished_0x22a5b0");
#endif

    ctx->pc = 0x22a5b0u;

    // 0x22a5b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a5b4: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22A5B4u;
    {
        const bool branch_taken_0x22a5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5B4u;
        // 0x22a5b8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5b4) {
            ctx->pc = 0x22A5E4u;
            goto label_22a5e4;
        }
    }
    ctx->pc = 0x22A5BCu;
    // 0x22a5bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A5BCu;
    {
        const bool branch_taken_0x22a5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5BCu;
        // 0x22a5c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5bc) {
            ctx->pc = 0x22A5D4u;
            goto label_22a5d4;
        }
    }
    ctx->pc = 0x22A5C4u;
    // 0x22a5c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A5C4u;
    {
        const bool branch_taken_0x22a5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5C4u;
        // 0x22a5c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5c4) {
            ctx->pc = 0x22A5DCu;
            goto label_22a5dc;
        }
    }
    ctx->pc = 0x22A5CCu;
    // 0x22a5cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22A5CCu;
    {
        const bool branch_taken_0x22a5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a5cc) {
            ctx->pc = 0x22A604u;
            goto label_22a604;
        }
    }
    ctx->pc = 0x22A5D4u;
label_22a5d4:
    // 0x22a5d4: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22A5D4u;
    {
        const bool branch_taken_0x22a5d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5D4u;
        // 0x22a5d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5d4) {
            ctx->pc = 0x22A604u;
            goto label_22a604;
        }
    }
    ctx->pc = 0x22A5DCu;
label_22a5dc:
    // 0x22a5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x22A5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5DCu;
        // 0x22a5e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A5E4u;
label_22a5e4:
    // 0x22a5e4: 0xc7819fa4  lwc1        $f1, -0x605C($gp)
    ctx->pc = 0x22a5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a5e8: 0xc78080ec  lwc1        $f0, -0x7F14($gp)
    ctx->pc = 0x22a5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a5ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22a5ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a5f0: 0x0  nop
    ctx->pc = 0x22a5f0u;
    // NOP
    // 0x22a5f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22A5F4u;
    {
        const bool branch_taken_0x22a5f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5F4u;
        // 0x22a5f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5f4) {
            ctx->pc = 0x22A604u;
            goto label_22a604;
        }
    }
    ctx->pc = 0x22A5FCu;
    // 0x22a5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x22A5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5FCu;
        // 0x22a600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A604u;
label_22a604:
    // 0x22a604: 0x3e00008  jr          $ra
    ctx->pc = 0x22A604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A60Cu;
}
