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

// Function: goodiesGetLevels
// Address: 0x240320 - 0x24037c
void goodiesGetLevels_0x240320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("goodiesGetLevels_0x240320");
#endif

    switch (ctx->pc) {
        case 0x240340u: goto label_240340;
        case 0x240348u: goto label_240348;
        default: break;
    }

    ctx->pc = 0x240320u;

    // 0x240320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240324: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x240324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x240328: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x240328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24032c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24032cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240334: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x240334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240338: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x240338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24033c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_240340:
    // 0x240340: 0xc089374  jal         func_224DD0
    ctx->pc = 0x240340u;
    SET_GPR_U32(ctx, 31, 0x240348u);
    ctx->pc = 0x240344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240340u;
    // 0x240344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224DD0u, 0x240340u, 0x240348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240348u;
label_240348:
    // 0x240348: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240348u;
    {
        const bool branch_taken_0x240348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240348u;
        // 0x24034c: 0x2121004  sllv        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240348) {
            ctx->pc = 0x240354u;
            goto label_240354;
        }
    }
    ctx->pc = 0x240350u;
    // 0x240350: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x240350u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_240354:
    // 0x240354: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240358: 0x2a02001f  slti        $v0, $s0, 0x1F
    ctx->pc = 0x240358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x24035c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24035Cu;
    {
        const bool branch_taken_0x24035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24035Cu;
        // 0x240360: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24035c) {
            ctx->pc = 0x240340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240340;
        }
    }
    ctx->pc = 0x240364u;
    // 0x240364: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x240364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240368: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x240368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24036c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24036cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240374: 0x3e00008  jr          $ra
    ctx->pc = 0x240374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240374u;
        // 0x240378: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24037Cu;
}
