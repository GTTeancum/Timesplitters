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

// Function: lvGetGlowTexNum
// Address: 0x225b10 - 0x225bac
void lvGetGlowTexNum_0x225b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetGlowTexNum_0x225b10");
#endif

    switch (ctx->pc) {
        case 0x225b50u: goto label_225b50;
        default: break;
    }

    ctx->pc = 0x225b10u;

    // 0x225b10: 0x8f899354  lw          $t1, -0x6CAC($gp)
    ctx->pc = 0x225b10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x225b14: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x225b14u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
    // 0x225b18: 0x25642c18  addiu       $a0, $t3, 0x2C18
    ctx->pc = 0x225b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 11288));
    // 0x225b1c: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x225b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x225b20: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x225b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x225b24: 0x85433920  lh          $v1, 0x3920($t2)
    ctx->pc = 0x225b24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 14624)));
    // 0x225b28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x225b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x225b2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225b30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225b34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225b38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x225b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225b3c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x225B3Cu;
    {
        const bool branch_taken_0x225b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B3Cu;
        // 0x225b40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b3c) {
            ctx->pc = 0x225BA4u;
            goto label_225ba4;
        }
    }
    ctx->pc = 0x225B44u;
    // 0x225b44: 0x8f889f70  lw          $t0, -0x6090($gp)
    ctx->pc = 0x225b44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x225b48: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x225b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x225b4c: 0x0  nop
    ctx->pc = 0x225b4cu;
    // NOP
label_225b50:
    // 0x225b50: 0x25453920  addiu       $a1, $t2, 0x3920
    ctx->pc = 0x225b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 14624));
    // 0x225b54: 0xe62018  mult        $a0, $a3, $a2
    ctx->pc = 0x225b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x225b58: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x225b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x225b5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x225b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x225b60: 0x14680004  bne         $v1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225B60u;
    {
        const bool branch_taken_0x225b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x225B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B60u;
        // 0x225b64: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b60) {
            ctx->pc = 0x225B74u;
            goto label_225b74;
        }
    }
    ctx->pc = 0x225B68u;
    // 0x225b68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x225b68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x225B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B6Cu;
        // 0x225b70: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225B74u;
label_225b74:
    // 0x225b74: 0x25632c18  addiu       $v1, $t3, 0x2C18
    ctx->pc = 0x225b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 11288));
    // 0x225b78: 0xe61018  mult        $v0, $a3, $a2
    ctx->pc = 0x225b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x225b7c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x225b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x225b80: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x225b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x225b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225b88: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x225b88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x225b8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225b90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225b94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225b98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x225b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225b9c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x225B9Cu;
    {
        const bool branch_taken_0x225b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B9Cu;
        // 0x225ba0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b9c) {
            ctx->pc = 0x225B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225b50;
        }
    }
    ctx->pc = 0x225BA4u;
label_225ba4:
    // 0x225ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x225BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BA4u;
        // 0x225ba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225BACu;
}
