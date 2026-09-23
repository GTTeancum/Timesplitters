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

// Function: chrsetDec
// Address: 0x234510 - 0x234588
void chrsetDec_0x234510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrsetDec_0x234510");
#endif

    switch (ctx->pc) {
        case 0x234538u: goto label_234538;
        case 0x234540u: goto label_234540;
        case 0x234568u: goto label_234568;
        default: break;
    }

    ctx->pc = 0x234510u;

    // 0x234510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x234514: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x234514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x234518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23451c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23451cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234520: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x234520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x234524: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x234524u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x234528: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x234528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23452c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23452cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x234530: 0xc081546  jal         func_205518
    ctx->pc = 0x234530u;
    SET_GPR_U32(ctx, 31, 0x234538u);
    ctx->pc = 0x234534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234530u;
    // 0x234534: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x234530u, 0x234538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234538u;
label_234538:
    // 0x234538: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x234538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23453c: 0x8e223a58  lw          $v0, 0x3A58($s1)
    ctx->pc = 0x23453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14936)));
label_234540:
    // 0x234540: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x234540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x234544: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x234544u;
    {
        const bool branch_taken_0x234544 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x234548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234544u;
        // 0x234548: 0xae223a58  sw          $v0, 0x3A58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 14936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234544) {
            ctx->pc = 0x234550u;
            goto label_234550;
        }
    }
    ctx->pc = 0x23454Cu;
    // 0x23454c: 0xae123a58  sw          $s2, 0x3A58($s0)
    ctx->pc = 0x23454cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14936), GPR_U32(ctx, 18));
label_234550:
    // 0x234550: 0x8e043a58  lw          $a0, 0x3A58($s0)
    ctx->pc = 0x234550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14936)));
    // 0x234554: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x234554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x234558: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x234558u;
    {
        const bool branch_taken_0x234558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234558u;
        // 0x23455c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234558) {
            ctx->pc = 0x234574u;
            goto label_234574;
        }
    }
    ctx->pc = 0x234560u;
    // 0x234560: 0xc0893c8  jal         func_224F20
    ctx->pc = 0x234560u;
    SET_GPR_U32(ctx, 31, 0x234568u);
    ctx->pc = 0x224F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F20u, 0x234560u, 0x234568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234568u;
label_234568:
    // 0x234568: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x234568u;
    {
        const bool branch_taken_0x234568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234568u;
        // 0x23456c: 0x8e223a58  lw          $v0, 0x3A58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234568) {
            ctx->pc = 0x234540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234540;
        }
    }
    ctx->pc = 0x234570u;
    // 0x234570: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x234570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_234574:
    // 0x234574: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x234574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234578: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x234578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23457c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23457cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234580: 0x3e00008  jr          $ra
    ctx->pc = 0x234580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234580u;
        // 0x234584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234588u;
}
