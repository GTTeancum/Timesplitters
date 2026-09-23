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

// Function: mmItemGroupName
// Address: 0x248d98 - 0x248eac
void mmItemGroupName_0x248d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmItemGroupName_0x248d98");
#endif

    switch (ctx->pc) {
        case 0x248e4cu: goto label_248e4c;
        case 0x248e88u: goto label_248e88;
        default: break;
    }

    ctx->pc = 0x248d98u;

    // 0x248d98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x248d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x248d9c: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x248D9Cu;
    {
        const bool branch_taken_0x248d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x248DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D9Cu;
        // 0x248da0: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d9c) {
            ctx->pc = 0x248DF8u;
            goto label_248df8;
        }
    }
    ctx->pc = 0x248DA4u;
    // 0x248da4: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x248da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x248da8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x248DA8u;
    {
        const bool branch_taken_0x248da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248da8) {
            ctx->pc = 0x248DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248DA8u;
            // 0x248dac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248DC0u;
            goto label_248dc0;
        }
    }
    ctx->pc = 0x248DB0u;
    // 0x248db0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x248DB0u;
    {
        const bool branch_taken_0x248db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DB0u;
        // 0x248db4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248db0) {
            ctx->pc = 0x248DDCu;
            goto label_248ddc;
        }
    }
    ctx->pc = 0x248DB8u;
    // 0x248db8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x248DB8u;
    {
        const bool branch_taken_0x248db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DB8u;
        // 0x248dbc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248db8) {
            ctx->pc = 0x248E7Cu;
            goto label_248e7c;
        }
    }
    ctx->pc = 0x248DC0u;
label_248dc0:
    // 0x248dc0: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x248DC0u;
    {
        const bool branch_taken_0x248dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x248DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DC0u;
        // 0x248dc4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248dc0) {
            ctx->pc = 0x248E14u;
            goto label_248e14;
        }
    }
    ctx->pc = 0x248DC8u;
    // 0x248dc8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x248dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x248dcc: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x248DCCu;
    {
        const bool branch_taken_0x248dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x248DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DCCu;
        // 0x248dd0: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248dcc) {
            ctx->pc = 0x248E30u;
            goto label_248e30;
        }
    }
    ctx->pc = 0x248DD4u;
    // 0x248dd4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x248DD4u;
    {
        const bool branch_taken_0x248dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DD4u;
        // 0x248dd8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248dd4) {
            ctx->pc = 0x248E7Cu;
            goto label_248e7c;
        }
    }
    ctx->pc = 0x248DDCu;
label_248ddc:
    // 0x248ddc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x248ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x248de0: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x248de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x248de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x248de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248dec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x248decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248df0: 0x3e00008  jr          $ra
    ctx->pc = 0x248DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DF0u;
        // 0x248df4: 0x8c820ff0  lw          $v0, 0xFF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248DF8u;
label_248df8:
    // 0x248df8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x248df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x248dfc: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x248dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x248e00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x248e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248e08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x248e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x248E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E0Cu;
        // 0x248e10: 0x8c820ff4  lw          $v0, 0xFF4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4084)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E14u;
label_248e14:
    // 0x248e14: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x248e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x248e18: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x248e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x248e1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x248e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248e24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x248e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248e28: 0x3e00008  jr          $ra
    ctx->pc = 0x248E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E28u;
        // 0x248e2c: 0x8c820ff8  lw          $v0, 0xFF8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E30u;
label_248e30:
    // 0x248e30: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x248e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x248e34: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x248e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x248e38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x248e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248e40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x248e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248e44: 0x3e00008  jr          $ra
    ctx->pc = 0x248E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E44u;
        // 0x248e48: 0x8c820ffc  lw          $v0, 0xFFC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E4Cu;
label_248e4c:
    // 0x248e4c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x248e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x248e50: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x248e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x248e54: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x248e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x248e58: 0x24842c18  addiu       $a0, $a0, 0x2C18
    ctx->pc = 0x248e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x248e5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x248e60: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x248e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248e64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x248e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x248e68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x248e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248e6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x248e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x248e70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x248e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x248e74: 0x3e00008  jr          $ra
    ctx->pc = 0x248E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E74u;
        // 0x248e78: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E7Cu;
label_248e7c:
    // 0x248e7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x248e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e80: 0x24478320  addiu       $a3, $v0, -0x7CE0
    ctx->pc = 0x248e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935328));
    // 0x248e84: 0x24e60004  addiu       $a2, $a3, 0x4
    ctx->pc = 0x248e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_248e88:
    // 0x248e88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x248e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x248e8c: 0x1044ffef  beq         $v0, $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x248E8Cu;
    {
        const bool branch_taken_0x248e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x248E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E8Cu;
        // 0x248e90: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e8c) {
            ctx->pc = 0x248E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248e4c;
        }
    }
    ctx->pc = 0x248E94u;
    // 0x248e94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x248e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x248e98: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x248e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x248e9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x248E9Cu;
    {
        const bool branch_taken_0x248e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E9Cu;
        // 0x248ea0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e9c) {
            ctx->pc = 0x248E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248e88;
        }
    }
    ctx->pc = 0x248EA4u;
    // 0x248ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x248EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EA4u;
        // 0x248ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248EACu;
}
