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

// Function: menuitemGetSelect
// Address: 0x22dd68 - 0x22ddf8
void menuitemGetSelect_0x22dd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuitemGetSelect_0x22dd68");
#endif

    switch (ctx->pc) {
        case 0x22dd80u: goto label_22dd80;
        case 0x22dda0u: goto label_22dda0;
        default: break;
    }

    ctx->pc = 0x22dd68u;

    // 0x22dd68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22dd6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22dd6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd70: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22DD70u;
    {
        const bool branch_taken_0x22dd70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD70u;
        // 0x22dd74: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd70) {
            ctx->pc = 0x22DDF0u;
            goto label_22ddf0;
        }
    }
    ctx->pc = 0x22DD78u;
    // 0x22dd78: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22dd78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd7c: 0x0  nop
    ctx->pc = 0x22dd7cu;
    // NOP
label_22dd80:
    // 0x22dd80: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x22dd80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x22dd84: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22dd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x22dd88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22DD88u;
    {
        const bool branch_taken_0x22dd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD88u;
        // 0x22dd8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd88) {
            ctx->pc = 0x22DDCCu;
            goto label_22ddcc;
        }
    }
    ctx->pc = 0x22DD90u;
    // 0x22dd90: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22dd94: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x22dd94u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22dd98: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x22DD98u;
    {
        const bool branch_taken_0x22dd98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD98u;
        // 0x22dd9c: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd98) {
            ctx->pc = 0x22DDE0u;
            goto label_22dde0;
        }
    }
    ctx->pc = 0x22DDA0u;
label_22dda0:
    // 0x22dda0: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x22dda0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x22dda4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x22dda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x22dda8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DDA8u;
    {
        const bool branch_taken_0x22dda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDA8u;
        // 0x22ddac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dda8) {
            ctx->pc = 0x22DDB8u;
            goto label_22ddb8;
        }
    }
    ctx->pc = 0x22DDB0u;
    // 0x22ddb0: 0x3e00008  jr          $ra
    ctx->pc = 0x22DDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDB0u;
        // 0x22ddb4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DDB8u;
label_22ddb8:
    // 0x22ddb8: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x22ddb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22ddbc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22DDBCu;
    {
        const bool branch_taken_0x22ddbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDBCu;
        // 0x22ddc0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddbc) {
            ctx->pc = 0x22DDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22dda0;
        }
    }
    ctx->pc = 0x22DDC4u;
    // 0x22ddc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22DDC4u;
    {
        const bool branch_taken_0x22ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDC4u;
        // 0x22ddc8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddc4) {
            ctx->pc = 0x22DDE4u;
            goto label_22dde4;
        }
    }
    ctx->pc = 0x22DDCCu;
label_22ddcc:
    // 0x22ddcc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x22ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22ddd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DDD0u;
    {
        const bool branch_taken_0x22ddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDD0u;
        // 0x22ddd4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddd0) {
            ctx->pc = 0x22DDE4u;
            goto label_22dde4;
        }
    }
    ctx->pc = 0x22DDD8u;
    // 0x22ddd8: 0x3e00008  jr          $ra
    ctx->pc = 0x22DDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDD8u;
        // 0x22dddc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DDE0u;
label_22dde0:
    // 0x22dde0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22dde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22dde4:
    // 0x22dde4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x22dde4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x22dde8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x22DDE8u;
    {
        const bool branch_taken_0x22dde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDE8u;
        // 0x22ddec: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dde8) {
            ctx->pc = 0x22DD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22dd80;
        }
    }
    ctx->pc = 0x22DDF0u;
label_22ddf0:
    // 0x22ddf0: 0x3e00008  jr          $ra
    ctx->pc = 0x22DDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDF0u;
        // 0x22ddf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DDF8u;
}
