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

// Function: specialfxFreePtr
// Address: 0x2aae88 - 0x2aaed8
void specialfxFreePtr_0x2aae88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxFreePtr_0x2aae88");
#endif

    switch (ctx->pc) {
        case 0x2aaea8u: goto label_2aaea8;
        case 0x2aaeb8u: goto label_2aaeb8;
        default: break;
    }

    ctx->pc = 0x2aae88u;

    // 0x2aae88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aae88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aae8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2aae8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae90: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AAE90u;
    {
        const bool branch_taken_0x2aae90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE90u;
        // 0x2aae94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae90) {
            ctx->pc = 0x2AAECCu;
            goto label_2aaecc;
        }
    }
    ctx->pc = 0x2AAE98u;
    // 0x2aae98: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2aae98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2aae9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaea0: 0x2443c268  addiu       $v1, $v0, -0x3D98
    ctx->pc = 0x2aaea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951528));
    // 0x2aaea4: 0x0  nop
    ctx->pc = 0x2aaea4u;
    // NOP
label_2aaea8:
    // 0x2aaea8: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AAEA8u;
    {
        const bool branch_taken_0x2aaea8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2aaea8) {
            ctx->pc = 0x2AAEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAEA8u;
            // 0x2aaeac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAEC0u;
            goto label_2aaec0;
        }
    }
    ctx->pc = 0x2AAEB0u;
    // 0x2aaeb0: 0xc0aabb6  jal         func_2AAED8
    ctx->pc = 0x2AAEB0u;
    SET_GPR_U32(ctx, 31, 0x2AAEB8u);
    ctx->pc = 0x2AAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAED8u, 0x2AAEB0u, 0x2AAEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAEB8u;
label_2aaeb8:
    // 0x2aaeb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AAEB8u;
    {
        const bool branch_taken_0x2aaeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEB8u;
        // 0x2aaebc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaeb8) {
            ctx->pc = 0x2AAED0u;
            goto label_2aaed0;
        }
    }
    ctx->pc = 0x2AAEC0u;
label_2aaec0:
    // 0x2aaec0: 0x28820038  slti        $v0, $a0, 0x38
    ctx->pc = 0x2aaec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x2aaec4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AAEC4u;
    {
        const bool branch_taken_0x2aaec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEC4u;
        // 0x2aaec8: 0x2463005c  addiu       $v1, $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaec4) {
            ctx->pc = 0x2AAEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aaea8;
        }
    }
    ctx->pc = 0x2AAECCu;
label_2aaecc:
    // 0x2aaecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aaeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aaed0:
    // 0x2aaed0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAED0u;
        // 0x2aaed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAED8u;
}
