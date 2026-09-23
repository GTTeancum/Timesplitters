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

// Function: tileset_onchange
// Address: 0x23ab28 - 0x23ab6c
void tileset_onchange_0x23ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tileset_onchange_0x23ab28");
#endif

    switch (ctx->pc) {
        case 0x23ab54u: goto label_23ab54;
        default: break;
    }

    ctx->pc = 0x23ab28u;

    // 0x23ab28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ab2c: 0x8f85a0d0  lw          $a1, -0x5F30($gp)
    ctx->pc = 0x23ab2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x23ab30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ab34: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x23ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x23ab38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ab3c: 0x34424626  ori         $v0, $v0, 0x4626
    ctx->pc = 0x23ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17958);
    // 0x23ab40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23ab44: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23AB44u;
    {
        const bool branch_taken_0x23ab44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB44u;
        // 0x23ab48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab44) {
            ctx->pc = 0x23AB5Cu;
            goto label_23ab5c;
        }
    }
    ctx->pc = 0x23AB4Cu;
    // 0x23ab4c: 0xc094dc4  jal         func_253710
    ctx->pc = 0x23AB4Cu;
    SET_GPR_U32(ctx, 31, 0x23AB54u);
    ctx->pc = 0x23AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB4Cu;
    // 0x23ab50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253710u, 0x23AB4Cu, 0x23AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB54u;
label_23ab54:
    // 0x23ab54: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x23ab54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23ab58: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x23ab58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_23ab5c:
    // 0x23ab5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ab5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ab60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ab60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ab64: 0x3e00008  jr          $ra
    ctx->pc = 0x23AB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB64u;
        // 0x23ab68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AB6Cu;
}
