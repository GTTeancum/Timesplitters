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

// Function: _setlocale_r
// Address: 0x2ebae0 - 0x2ebb64
void _setlocale_r_0x2ebae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_setlocale_r_0x2ebae0");
#endif

    switch (ctx->pc) {
        case 0x2ebb18u: goto label_2ebb18;
        case 0x2ebb2cu: goto label_2ebb2c;
        default: break;
    }

    ctx->pc = 0x2ebae0u;

    // 0x2ebae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ebae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ebae4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ebae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ebae8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ebae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ebaec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ebaecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebaf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ebaf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ebaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ebafc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ebafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb00: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EBB00u;
    {
        const bool branch_taken_0x2ebb00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB00u;
        // 0x2ebb04: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb00) {
            ctx->pc = 0x2EBB40u;
            goto label_2ebb40;
        }
    }
    ctx->pc = 0x2EBB08u;
    // 0x2ebb08: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x2ebb08u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x2ebb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb10: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x2EBB10u;
    SET_GPR_U32(ctx, 31, 0x2EBB18u);
    ctx->pc = 0x2EBB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB10u;
    // 0x2ebb14: 0x2665c5c8  addiu       $a1, $s3, -0x3A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x2EBB10u, 0x2EBB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB18u;
label_2ebb18:
    // 0x2ebb18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBB18u;
    {
        const bool branch_taken_0x2ebb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB18u;
        // 0x2ebb1c: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb18) {
            ctx->pc = 0x2EBB34u;
            goto label_2ebb34;
        }
    }
    ctx->pc = 0x2EBB20u;
    // 0x2ebb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb24: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x2EBB24u;
    SET_GPR_U32(ctx, 31, 0x2EBB2Cu);
    ctx->pc = 0x2EBB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB24u;
    // 0x2ebb28: 0x24a5c5b8  addiu       $a1, $a1, -0x3A48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x2EBB24u, 0x2EBB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB2Cu;
label_2ebb2c:
    // 0x2ebb2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBB2Cu;
    {
        const bool branch_taken_0x2ebb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB2Cu;
        // 0x2ebb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb2c) {
            ctx->pc = 0x2EBB48u;
            goto label_2ebb48;
        }
    }
    ctx->pc = 0x2EBB34u;
label_2ebb34:
    // 0x2ebb34: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x2ebb34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x2ebb38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EBB38u;
    {
        const bool branch_taken_0x2ebb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB38u;
        // 0x2ebb3c: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb38) {
            ctx->pc = 0x2EBB44u;
            goto label_2ebb44;
        }
    }
    ctx->pc = 0x2EBB40u;
label_2ebb40:
    // 0x2ebb40: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x2ebb40u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
label_2ebb44:
    // 0x2ebb44: 0x2662c5c8  addiu       $v0, $s3, -0x3A38
    ctx->pc = 0x2ebb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952392));
label_2ebb48:
    // 0x2ebb48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ebb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ebb4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ebb4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ebb50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ebb50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebb54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ebb54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebb58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB5Cu;
        // 0x2ebb60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBB64u;
}
