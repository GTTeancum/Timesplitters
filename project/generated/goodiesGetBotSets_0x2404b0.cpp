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

// Function: goodiesGetBotSets
// Address: 0x2404b0 - 0x24050c
void goodiesGetBotSets_0x2404b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("goodiesGetBotSets_0x2404b0");
#endif

    switch (ctx->pc) {
        case 0x2404d0u: goto label_2404d0;
        case 0x2404d8u: goto label_2404d8;
        default: break;
    }

    ctx->pc = 0x2404b0u;

    // 0x2404b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2404b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2404b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2404b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2404b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2404b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2404bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2404bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2404c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2404c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2404c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2404c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2404c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2404cc: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x2404ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2404d0:
    // 0x2404d0: 0xc0893c8  jal         func_224F20
    ctx->pc = 0x2404D0u;
    SET_GPR_U32(ctx, 31, 0x2404D8u);
    ctx->pc = 0x2404D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404D0u;
    // 0x2404d4: 0x2604fff7  addiu       $a0, $s0, -0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F20u, 0x2404D0u, 0x2404D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404D8u;
label_2404d8:
    // 0x2404d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2404D8u;
    {
        const bool branch_taken_0x2404d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2404DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404D8u;
        // 0x2404dc: 0x2121004  sllv        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404d8) {
            ctx->pc = 0x2404E4u;
            goto label_2404e4;
        }
    }
    ctx->pc = 0x2404E0u;
    // 0x2404e0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2404e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2404e4:
    // 0x2404e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2404e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2404e8: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2404e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2404ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2404ECu;
    {
        const bool branch_taken_0x2404ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2404F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404ECu;
        // 0x2404f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404ec) {
            ctx->pc = 0x2404D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2404d0;
        }
    }
    ctx->pc = 0x2404F4u;
    // 0x2404f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2404f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2404f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2404f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2404fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2404fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240504: 0x3e00008  jr          $ra
    ctx->pc = 0x240504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240504u;
        // 0x240508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24050Cu;
}
