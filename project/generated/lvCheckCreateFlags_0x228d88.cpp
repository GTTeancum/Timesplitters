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

// Function: lvCheckCreateFlags
// Address: 0x228d88 - 0x228e5c
void lvCheckCreateFlags_0x228d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvCheckCreateFlags_0x228d88");
#endif

    switch (ctx->pc) {
        case 0x228dc4u: goto label_228dc4;
        case 0x228dccu: goto label_228dcc;
        default: break;
    }

    ctx->pc = 0x228d88u;

    // 0x228d88: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x228d88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x228d8c: 0x24c2c4a8  addiu       $v0, $a2, -0x3B58
    ctx->pc = 0x228d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
    // 0x228d90: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x228d90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x228d94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x228d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x228d98: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x228d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x228d9c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x228D9Cu;
    {
        const bool branch_taken_0x228d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D9Cu;
        // 0x228da0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d9c) {
            ctx->pc = 0x228E50u;
            goto label_228e50;
        }
    }
    ctx->pc = 0x228DA4u;
    // 0x228da4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x228da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x228da8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228dac: 0x244215d0  addiu       $v0, $v0, 0x15D0
    ctx->pc = 0x228dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5584));
    // 0x228db0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228db4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x228db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228db8: 0x800008  jr          $a0
    ctx->pc = 0x228DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228DC0u: goto label_228dc0;
            case 0x228DD4u: goto label_228dd4;
            case 0x228DDCu: goto label_228ddc;
            case 0x228DE4u: goto label_228de4;
            case 0x228DECu: goto label_228dec;
            case 0x228DF4u: goto label_228df4;
            case 0x228DFCu: goto label_228dfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228DB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x228DC0u;
label_228dc0:
    // 0x228dc0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x228dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_228dc4:
    // 0x228dc4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x228DC4u;
    {
        const bool branch_taken_0x228dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DC4u;
        // 0x228dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228dc4) {
            ctx->pc = 0x228E54u;
            goto label_228e54;
        }
    }
    ctx->pc = 0x228DCCu;
label_228dcc:
    // 0x228dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x228DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DCCu;
        // 0x228dd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228DD4u;
label_228dd4:
    // 0x228dd4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x228DD4u;
    {
        const bool branch_taken_0x228dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DD4u;
        // 0x228dd8: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228dd4) {
            ctx->pc = 0x228DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228dc4;
        }
    }
    ctx->pc = 0x228DDCu;
label_228ddc:
    // 0x228ddc: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x228DDCu;
    {
        const bool branch_taken_0x228ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DDCu;
        // 0x228de0: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ddc) {
            ctx->pc = 0x228DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228dc4;
        }
    }
    ctx->pc = 0x228DE4u;
label_228de4:
    // 0x228de4: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x228DE4u;
    {
        const bool branch_taken_0x228de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DE4u;
        // 0x228de8: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228de4) {
            ctx->pc = 0x228DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228dc4;
        }
    }
    ctx->pc = 0x228DECu;
label_228dec:
    // 0x228dec: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x228DECu;
    {
        const bool branch_taken_0x228dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DECu;
        // 0x228df0: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228dec) {
            ctx->pc = 0x228DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228dc4;
        }
    }
    ctx->pc = 0x228DF4u;
label_228df4:
    // 0x228df4: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x228DF4u;
    {
        const bool branch_taken_0x228df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DF4u;
        // 0x228df8: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228df4) {
            ctx->pc = 0x228DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228dc4;
        }
    }
    ctx->pc = 0x228DFCu;
label_228dfc:
    // 0x228dfc: 0x24c2c4a8  addiu       $v0, $a2, -0x3B58
    ctx->pc = 0x228dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
    // 0x228e00: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x228e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x228e04: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x228E04u;
    {
        const bool branch_taken_0x228e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E04u;
        // 0x228e08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e04) {
            ctx->pc = 0x228E20u;
            goto label_228e20;
        }
    }
    ctx->pc = 0x228E0Cu;
    // 0x228e0c: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x228e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x228e10: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x228E10u;
    {
        const bool branch_taken_0x228e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E10u;
        // 0x228e14: 0x24c2c4a8  addiu       $v0, $a2, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e10) {
            ctx->pc = 0x228DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228dcc;
        }
    }
    ctx->pc = 0x228E18u;
    // 0x228e18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x228e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228e1c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x228e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_228e20:
    // 0x228e20: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228E20u;
    {
        const bool branch_taken_0x228e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x228E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E20u;
        // 0x228e24: 0x24c2c4a8  addiu       $v0, $a2, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e20) {
            ctx->pc = 0x228E34u;
            goto label_228e34;
        }
    }
    ctx->pc = 0x228E28u;
    // 0x228e28: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x228e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x228e2c: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x228E2Cu;
    {
        const bool branch_taken_0x228e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E2Cu;
        // 0x228e30: 0x24c2c4a8  addiu       $v0, $a2, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e2c) {
            ctx->pc = 0x228DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228dcc;
        }
    }
    ctx->pc = 0x228E34u;
label_228e34:
    // 0x228e34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x228e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228e38: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x228e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x228e3c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228E3Cu;
    {
        const bool branch_taken_0x228e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x228E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E3Cu;
        // 0x228e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e3c) {
            ctx->pc = 0x228E54u;
            goto label_228e54;
        }
    }
    ctx->pc = 0x228E44u;
    // 0x228e44: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x228e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x228e48: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x228E48u;
    {
        const bool branch_taken_0x228e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E48u;
        // 0x228e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e48) {
            ctx->pc = 0x228E54u;
            goto label_228e54;
        }
    }
    ctx->pc = 0x228E50u;
label_228e50:
    // 0x228e50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228e54:
    // 0x228e54: 0x3e00008  jr          $ra
    ctx->pc = 0x228E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228E5Cu;
}
