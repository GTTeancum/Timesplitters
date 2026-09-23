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

// Function: signonGetName
// Address: 0x2203c8 - 0x220444
void signonGetName_0x2203c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonGetName_0x2203c8");
#endif

    switch (ctx->pc) {
        case 0x2203ecu: goto label_2203ec;
        case 0x2203f8u: goto label_2203f8;
        case 0x220408u: goto label_220408;
        default: break;
    }

    ctx->pc = 0x2203c8u;

    // 0x2203c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2203c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2203cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2203ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2203d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2203d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2203d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2203d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2203d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2203dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2203dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2203e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2203e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203e4: 0xc088224  jal         func_220890
    ctx->pc = 0x2203E4u;
    SET_GPR_U32(ctx, 31, 0x2203ECu);
    ctx->pc = 0x2203E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203E4u;
    // 0x2203e8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x2203E4u, 0x2203ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203ECu;
label_2203ec:
    // 0x2203ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2203ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203f0: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2203F0u;
    {
        const bool branch_taken_0x2203f0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2203F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203F0u;
        // 0x2203f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203f0) {
            ctx->pc = 0x220424u;
            goto label_220424;
        }
    }
    ctx->pc = 0x2203F8u;
label_2203f8:
    // 0x2203f8: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x2203f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x2203fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2203fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220400: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x220400u;
    SET_GPR_U32(ctx, 31, 0x220408u);
    ctx->pc = 0x220404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220400u;
    // 0x220404: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x220400u, 0x220408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220408u;
label_220408:
    // 0x220408: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x220408u;
    {
        const bool branch_taken_0x220408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220408) {
            ctx->pc = 0x22040Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220408u;
            // 0x22040c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220418u;
            goto label_220418;
        }
    }
    ctx->pc = 0x220410u;
    // 0x220410: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x220410u;
    {
        const bool branch_taken_0x220410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220410u;
        // 0x220414: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220410) {
            ctx->pc = 0x220428u;
            goto label_220428;
        }
    }
    ctx->pc = 0x220418u;
label_220418:
    // 0x220418: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x220418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22041c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22041Cu;
    {
        const bool branch_taken_0x22041c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22041Cu;
        // 0x220420: 0x26310b78  addiu       $s1, $s1, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22041c) {
            ctx->pc = 0x2203F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2203f8;
        }
    }
    ctx->pc = 0x220424u;
label_220424:
    // 0x220424: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x220424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_220428:
    // 0x220428: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x220428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22042c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22042cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220430: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x220430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220434: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x220434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22043c: 0x3e00008  jr          $ra
    ctx->pc = 0x22043Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22043Cu;
        // 0x220440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22043Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220444u;
}
