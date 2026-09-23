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

// Function: lvGetBgCol
// Address: 0x225bb0 - 0x225c50
void lvGetBgCol_0x225bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetBgCol_0x225bb0");
#endif

    switch (ctx->pc) {
        case 0x225bf0u: goto label_225bf0;
        default: break;
    }

    ctx->pc = 0x225bb0u;

    // 0x225bb0: 0x8f899354  lw          $t1, -0x6CAC($gp)
    ctx->pc = 0x225bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x225bb4: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x225bb4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
    // 0x225bb8: 0x25642c18  addiu       $a0, $t3, 0x2C18
    ctx->pc = 0x225bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 11288));
    // 0x225bbc: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x225bbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x225bc0: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x225bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x225bc4: 0x85433920  lh          $v1, 0x3920($t2)
    ctx->pc = 0x225bc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 14624)));
    // 0x225bc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x225bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x225bcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225bd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225bd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225bd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x225bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225bdc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x225BDCu;
    {
        const bool branch_taken_0x225bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BDCu;
        // 0x225be0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bdc) {
            ctx->pc = 0x225C44u;
            goto label_225c44;
        }
    }
    ctx->pc = 0x225BE4u;
    // 0x225be4: 0x8f889f70  lw          $t0, -0x6090($gp)
    ctx->pc = 0x225be4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x225be8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x225be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x225bec: 0x0  nop
    ctx->pc = 0x225becu;
    // NOP
label_225bf0:
    // 0x225bf0: 0x25453920  addiu       $a1, $t2, 0x3920
    ctx->pc = 0x225bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 14624));
    // 0x225bf4: 0xe62018  mult        $a0, $a3, $a2
    ctx->pc = 0x225bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x225bf8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x225bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x225bfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x225bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x225c00: 0x14680004  bne         $v1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225C00u;
    {
        const bool branch_taken_0x225c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x225C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C00u;
        // 0x225c04: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c00) {
            ctx->pc = 0x225C14u;
            goto label_225c14;
        }
    }
    ctx->pc = 0x225C08u;
    // 0x225c08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x225c08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x225C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C0Cu;
        // 0x225c10: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225C14u;
label_225c14:
    // 0x225c14: 0x25632c18  addiu       $v1, $t3, 0x2C18
    ctx->pc = 0x225c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 11288));
    // 0x225c18: 0xe61018  mult        $v0, $a3, $a2
    ctx->pc = 0x225c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x225c1c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x225c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x225c20: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x225c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x225c24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225c28: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x225c28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x225c2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225c30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225c34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225c38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x225c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225c3c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x225C3Cu;
    {
        const bool branch_taken_0x225c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C3Cu;
        // 0x225c40: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c3c) {
            ctx->pc = 0x225BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225bf0;
        }
    }
    ctx->pc = 0x225C44u;
label_225c44:
    // 0x225c44: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x225c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x225c48: 0x3e00008  jr          $ra
    ctx->pc = 0x225C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C48u;
        // 0x225c4c: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225C50u;
}
