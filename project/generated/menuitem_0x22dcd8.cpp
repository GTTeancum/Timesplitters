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

// Function: menuitem
// Address: 0x22dcd8 - 0x22dd64
void menuitem_0x22dcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuitem_0x22dcd8");
#endif

    switch (ctx->pc) {
        case 0x22dcf0u: goto label_22dcf0;
        case 0x22dd10u: goto label_22dd10;
        default: break;
    }

    ctx->pc = 0x22dcd8u;

    // 0x22dcd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22dcdc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x22dcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x22dce0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x22dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x22dce4: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22DCE4u;
    {
        const bool branch_taken_0x22dce4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCE4u;
        // 0x22dce8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dce4) {
            ctx->pc = 0x22DD5Cu;
            goto label_22dd5c;
        }
    }
    ctx->pc = 0x22DCECu;
    // 0x22dcec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x22dcecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22dcf0:
    // 0x22dcf0: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x22dcf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x22dcf4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22dcf8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22DCF8u;
    {
        const bool branch_taken_0x22dcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCF8u;
        // 0x22dcfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dcf8) {
            ctx->pc = 0x22DD38u;
            goto label_22dd38;
        }
    }
    ctx->pc = 0x22DD00u;
    // 0x22dd00: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22dd04: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x22dd04u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22dd08: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x22DD08u;
    {
        const bool branch_taken_0x22dd08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD08u;
        // 0x22dd0c: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd08) {
            ctx->pc = 0x22DD4Cu;
            goto label_22dd4c;
        }
    }
    ctx->pc = 0x22DD10u;
label_22dd10:
    // 0x22dd10: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x22dd10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22dd14: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DD14u;
    {
        const bool branch_taken_0x22dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD14u;
        // 0x22dd18: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd14) {
            ctx->pc = 0x22DD24u;
            goto label_22dd24;
        }
    }
    ctx->pc = 0x22DD1Cu;
    // 0x22dd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x22DD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD1Cu;
        // 0x22dd20: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DD24u;
label_22dd24:
    // 0x22dd24: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x22dd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22dd28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22DD28u;
    {
        const bool branch_taken_0x22dd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD28u;
        // 0x22dd2c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd28) {
            ctx->pc = 0x22DD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22dd10;
        }
    }
    ctx->pc = 0x22DD30u;
    // 0x22dd30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22DD30u;
    {
        const bool branch_taken_0x22dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD30u;
        // 0x22dd34: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd30) {
            ctx->pc = 0x22DD50u;
            goto label_22dd50;
        }
    }
    ctx->pc = 0x22DD38u;
label_22dd38:
    // 0x22dd38: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x22dd38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22dd3c: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DD3Cu;
    {
        const bool branch_taken_0x22dd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD3Cu;
        // 0x22dd40: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd3c) {
            ctx->pc = 0x22DD50u;
            goto label_22dd50;
        }
    }
    ctx->pc = 0x22DD44u;
    // 0x22dd44: 0x3e00008  jr          $ra
    ctx->pc = 0x22DD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD44u;
        // 0x22dd48: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DD4Cu;
label_22dd4c:
    // 0x22dd4c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22dd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22dd50:
    // 0x22dd50: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x22dd50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x22dd54: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x22DD54u;
    {
        const bool branch_taken_0x22dd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD54u;
        // 0x22dd58: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd54) {
            ctx->pc = 0x22DCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22dcf0;
        }
    }
    ctx->pc = 0x22DD5Cu;
label_22dd5c:
    // 0x22dd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x22DD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD5Cu;
        // 0x22dd60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DD64u;
}
