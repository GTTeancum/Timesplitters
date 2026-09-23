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

// Function: lvGetSkyPropNum
// Address: 0x225a70 - 0x225b0c
void lvGetSkyPropNum_0x225a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetSkyPropNum_0x225a70");
#endif

    switch (ctx->pc) {
        case 0x225ab0u: goto label_225ab0;
        default: break;
    }

    ctx->pc = 0x225a70u;

    // 0x225a70: 0x8f899354  lw          $t1, -0x6CAC($gp)
    ctx->pc = 0x225a70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x225a74: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x225a74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
    // 0x225a78: 0x25642c18  addiu       $a0, $t3, 0x2C18
    ctx->pc = 0x225a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 11288));
    // 0x225a7c: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x225a80: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x225a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x225a84: 0x85433920  lh          $v1, 0x3920($t2)
    ctx->pc = 0x225a84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 14624)));
    // 0x225a88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x225a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x225a8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225a90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225a94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225a98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225a9c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x225A9Cu;
    {
        const bool branch_taken_0x225a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A9Cu;
        // 0x225aa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a9c) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AA4u;
    // 0x225aa4: 0x8f889f70  lw          $t0, -0x6090($gp)
    ctx->pc = 0x225aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x225aa8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x225aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x225aac: 0x0  nop
    ctx->pc = 0x225aacu;
    // NOP
label_225ab0:
    // 0x225ab0: 0x25453920  addiu       $a1, $t2, 0x3920
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 14624));
    // 0x225ab4: 0xe62018  mult        $a0, $a3, $a2
    ctx->pc = 0x225ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x225ab8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x225ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x225abc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x225abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x225ac0: 0x14680004  bne         $v1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225AC0u;
    {
        const bool branch_taken_0x225ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x225AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AC0u;
        // 0x225ac4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ac0) {
            ctx->pc = 0x225AD4u;
            goto label_225ad4;
        }
    }
    ctx->pc = 0x225AC8u;
    // 0x225ac8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x225ac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225acc: 0x3e00008  jr          $ra
    ctx->pc = 0x225ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225ACCu;
        // 0x225ad0: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225AD4u;
label_225ad4:
    // 0x225ad4: 0x25632c18  addiu       $v1, $t3, 0x2C18
    ctx->pc = 0x225ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 11288));
    // 0x225ad8: 0xe61018  mult        $v0, $a3, $a2
    ctx->pc = 0x225ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x225adc: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x225adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x225ae0: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x225ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x225ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225ae8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x225ae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x225aec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225af0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225af4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225af8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x225af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225afc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x225AFCu;
    {
        const bool branch_taken_0x225afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AFCu;
        // 0x225b00: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225afc) {
            ctx->pc = 0x225AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225ab0;
        }
    }
    ctx->pc = 0x225B04u;
label_225b04:
    // 0x225b04: 0x3e00008  jr          $ra
    ctx->pc = 0x225B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B04u;
        // 0x225b08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225B0Cu;
}
