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

// Function: signonFileGetName
// Address: 0x220360 - 0x2203c4
void signonFileGetName_0x220360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonFileGetName_0x220360");
#endif

    switch (ctx->pc) {
        case 0x220380u: goto label_220380;
        case 0x22038cu: goto label_22038c;
        default: break;
    }

    ctx->pc = 0x220360u;

    // 0x220360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x220360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x220364: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x220364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x220368: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x220368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22036c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22036cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x220374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220378: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x220378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22037c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22037cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_220380:
    // 0x220380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220384: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x220384u;
    SET_GPR_U32(ctx, 31, 0x22038Cu);
    ctx->pc = 0x220388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220384u;
    // 0x220388: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x220384u, 0x22038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22038Cu;
label_22038c:
    // 0x22038c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22038Cu;
    {
        const bool branch_taken_0x22038c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22038c) {
            ctx->pc = 0x220390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22038Cu;
            // 0x220390: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22039Cu;
            goto label_22039c;
        }
    }
    ctx->pc = 0x220394u;
    // 0x220394: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x220394u;
    {
        const bool branch_taken_0x220394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220394u;
        // 0x220398: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220394) {
            ctx->pc = 0x2203ACu;
            goto label_2203ac;
        }
    }
    ctx->pc = 0x22039Cu;
label_22039c:
    // 0x22039c: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x22039cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2203a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2203A0u;
    {
        const bool branch_taken_0x2203a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2203A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203A0u;
        // 0x2203a4: 0x26100b78  addiu       $s0, $s0, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203a0) {
            ctx->pc = 0x220380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220380;
        }
    }
    ctx->pc = 0x2203A8u;
    // 0x2203a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2203a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2203ac:
    // 0x2203ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2203acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2203b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2203b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2203b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2203b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2203b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2203b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2203bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2203BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2203C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203BCu;
        // 0x2203c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2203BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2203C4u;
}
