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

// Function: musicStop
// Address: 0x205b20 - 0x205b60
void musicStop_0x205b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicStop_0x205b20");
#endif

    switch (ctx->pc) {
        case 0x205b34u: goto label_205b34;
        case 0x205b4cu: goto label_205b4c;
        default: break;
    }

    ctx->pc = 0x205b20u;

    // 0x205b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205b24: 0x340480e0  ori         $a0, $zero, 0x80E0
    ctx->pc = 0x205b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x205b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205b2c: 0xc08177a  jal         func_205DE8
    ctx->pc = 0x205B2Cu;
    SET_GPR_U32(ctx, 31, 0x205B34u);
    ctx->pc = 0x205B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B2Cu;
    // 0x205b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DE8u, 0x205B2Cu, 0x205B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B34u;
label_205b34:
    // 0x205b34: 0x24035000  addiu       $v1, $zero, 0x5000
    ctx->pc = 0x205b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x205b38: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x205B38u;
    {
        const bool branch_taken_0x205b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x205B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B38u;
        // 0x205b3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b38) {
            ctx->pc = 0x205B58u;
            goto label_205b58;
        }
    }
    ctx->pc = 0x205B40u;
    // 0x205b40: 0x34048070  ori         $a0, $zero, 0x8070
    ctx->pc = 0x205b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32880);
    // 0x205b44: 0xc08177a  jal         func_205DE8
    ctx->pc = 0x205B44u;
    SET_GPR_U32(ctx, 31, 0x205B4Cu);
    ctx->pc = 0x205B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B44u;
    // 0x205b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DE8u, 0x205B44u, 0x205B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B4Cu;
label_205b4c:
    // 0x205b4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205b50: 0xaf839b2c  sw          $v1, -0x64D4($gp)
    ctx->pc = 0x205b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941484), GPR_U32(ctx, 3));
    // 0x205b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205b58:
    // 0x205b58: 0x3e00008  jr          $ra
    ctx->pc = 0x205B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B58u;
        // 0x205b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205B60u;
}
