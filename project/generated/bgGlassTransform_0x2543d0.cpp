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

// Function: bgGlassTransform
// Address: 0x2543d0 - 0x25443c
void bgGlassTransform_0x2543d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgGlassTransform_0x2543d0");
#endif

    switch (ctx->pc) {
        case 0x254400u: goto label_254400;
        case 0x25440cu: goto label_25440c;
        default: break;
    }

    ctx->pc = 0x2543d0u;

    // 0x2543d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2543d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2543d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2543d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2543d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2543d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2543dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2543dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2543e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2543e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2543e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2543e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2543ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2543ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2543f0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2543f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2543f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2543F4u;
    {
        const bool branch_taken_0x2543f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2543F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543F4u;
        // 0x2543f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543f4) {
            ctx->pc = 0x254420u;
            goto label_254420;
        }
    }
    ctx->pc = 0x2543FCu;
    // 0x2543fc: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x2543fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_254400:
    // 0x254400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254404: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x254404u;
    SET_GPR_U32(ctx, 31, 0x25440Cu);
    ctx->pc = 0x254408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254404u;
    // 0x254408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x254404u, 0x25440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25440Cu;
label_25440c:
    // 0x25440c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25440cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x254410: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x254410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x254414: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x254414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x254418: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x254418u;
    {
        const bool branch_taken_0x254418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254418u;
        // 0x25441c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254418) {
            ctx->pc = 0x254400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254400;
        }
    }
    ctx->pc = 0x254420u;
label_254420:
    // 0x254420: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x254420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254424: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x254424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254428: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x254428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25442c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25442cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254434: 0x3e00008  jr          $ra
    ctx->pc = 0x254434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254434u;
        // 0x254438: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25443Cu;
}
