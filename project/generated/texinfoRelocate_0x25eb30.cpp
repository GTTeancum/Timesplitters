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

// Function: texinfoRelocate
// Address: 0x25eb30 - 0x25eb94
void texinfoRelocate_0x25eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texinfoRelocate_0x25eb30");
#endif

    switch (ctx->pc) {
        case 0x25eb50u: goto label_25eb50;
        default: break;
    }

    ctx->pc = 0x25eb30u;

    // 0x25eb30: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x25eb30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb34: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x25eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25eb38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25eb3c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25EB3Cu;
    {
        const bool branch_taken_0x25eb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB3Cu;
        // 0x25eb40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb3c) {
            ctx->pc = 0x25EB8Cu;
            goto label_25eb8c;
        }
    }
    ctx->pc = 0x25EB44u;
    // 0x25eb44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25eb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb48: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x25eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x25eb4c: 0x0  nop
    ctx->pc = 0x25eb4cu;
    // NOP
label_25eb50:
    // 0x25eb50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x25eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x25eb54: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25eb58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25eb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25eb5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EB5Cu;
    {
        const bool branch_taken_0x25eb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB5Cu;
        // 0x25eb60: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb5c) {
            ctx->pc = 0x25EB70u;
            goto label_25eb70;
        }
    }
    ctx->pc = 0x25EB64u;
    // 0x25eb64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25eb68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25eb6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x25eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_25eb70:
    // 0x25eb70: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x25eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25eb74: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x25eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x25eb78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25eb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb7c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x25eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x25eb80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25eb84: 0x1444fff2  bne         $v0, $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x25EB84u;
    {
        const bool branch_taken_0x25eb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x25EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB84u;
        // 0x25eb88: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb84) {
            ctx->pc = 0x25EB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25eb50;
        }
    }
    ctx->pc = 0x25EB8Cu;
label_25eb8c:
    // 0x25eb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x25EB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EB94u;
}
