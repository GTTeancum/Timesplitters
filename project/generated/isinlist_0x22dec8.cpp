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

// Function: isinlist
// Address: 0x22dec8 - 0x22df40
void isinlist_0x22dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isinlist_0x22dec8");
#endif

    switch (ctx->pc) {
        case 0x22dee0u: goto label_22dee0;
        case 0x22df08u: goto label_22df08;
        default: break;
    }

    ctx->pc = 0x22dec8u;

    // 0x22dec8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22decc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x22deccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x22ded0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x22ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x22ded4: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22DED4u;
    {
        const bool branch_taken_0x22ded4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DED4u;
        // 0x22ded8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ded4) {
            ctx->pc = 0x22DF38u;
            goto label_22df38;
        }
    }
    ctx->pc = 0x22DEDCu;
    // 0x22dedc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x22dedcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22dee0:
    // 0x22dee0: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x22dee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x22dee4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22dee8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22DEE8u;
    {
        const bool branch_taken_0x22dee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dee8) {
            ctx->pc = 0x22DEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DEE8u;
            // 0x22deec: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DF2Cu;
            goto label_22df2c;
        }
    }
    ctx->pc = 0x22DEF0u;
    // 0x22def0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x22def0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22def4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22def4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22def8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x22def8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22defc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22DEFCu;
    {
        const bool branch_taken_0x22defc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEFCu;
        // 0x22df00: 0x24e30010  addiu       $v1, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22defc) {
            ctx->pc = 0x22DF28u;
            goto label_22df28;
        }
    }
    ctx->pc = 0x22DF04u;
    // 0x22df04: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22df04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22df08:
    // 0x22df08: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x22df08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22df0c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DF0Cu;
    {
        const bool branch_taken_0x22df0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF0Cu;
        // 0x22df10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df0c) {
            ctx->pc = 0x22DF1Cu;
            goto label_22df1c;
        }
    }
    ctx->pc = 0x22DF14u;
    // 0x22df14: 0x3e00008  jr          $ra
    ctx->pc = 0x22DF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF14u;
        // 0x22df18: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DF1Cu;
label_22df1c:
    // 0x22df1c: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x22df1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x22df20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22DF20u;
    {
        const bool branch_taken_0x22df20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF20u;
        // 0x22df24: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df20) {
            ctx->pc = 0x22DF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22df08;
        }
    }
    ctx->pc = 0x22DF28u;
label_22df28:
    // 0x22df28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x22df28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_22df2c:
    // 0x22df2c: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x22df2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x22df30: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22DF30u;
    {
        const bool branch_taken_0x22df30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF30u;
        // 0x22df34: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df30) {
            ctx->pc = 0x22DEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22dee0;
        }
    }
    ctx->pc = 0x22DF38u;
label_22df38:
    // 0x22df38: 0x3e00008  jr          $ra
    ctx->pc = 0x22DF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF38u;
        // 0x22df3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DF40u;
}
