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

// Function: chrsetInc
// Address: 0x234588 - 0x2345f8
void chrsetInc_0x234588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrsetInc_0x234588");
#endif

    switch (ctx->pc) {
        case 0x2345acu: goto label_2345ac;
        case 0x2345b0u: goto label_2345b0;
        case 0x2345dcu: goto label_2345dc;
        default: break;
    }

    ctx->pc = 0x234588u;

    // 0x234588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23458c: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x23458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x234590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234598: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x234598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23459c: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x23459cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x2345a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2345a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2345a4: 0xc081546  jal         func_205518
    ctx->pc = 0x2345A4u;
    SET_GPR_U32(ctx, 31, 0x2345ACu);
    ctx->pc = 0x2345A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345A4u;
    // 0x2345a8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2345A4u, 0x2345ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345ACu;
label_2345ac:
    // 0x2345ac: 0x8e223a58  lw          $v0, 0x3A58($s1)
    ctx->pc = 0x2345acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14936)));
label_2345b0:
    // 0x2345b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2345b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2345b4: 0x2843000b  slti        $v1, $v0, 0xB
    ctx->pc = 0x2345b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2345b8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2345B8u;
    {
        const bool branch_taken_0x2345b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2345BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345B8u;
        // 0x2345bc: 0xae223a58  sw          $v0, 0x3A58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 14936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345b8) {
            ctx->pc = 0x2345C4u;
            goto label_2345c4;
        }
    }
    ctx->pc = 0x2345C0u;
    // 0x2345c0: 0xae003a58  sw          $zero, 0x3A58($s0)
    ctx->pc = 0x2345c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14936), GPR_U32(ctx, 0));
label_2345c4:
    // 0x2345c4: 0x8e043a58  lw          $a0, 0x3A58($s0)
    ctx->pc = 0x2345c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14936)));
    // 0x2345c8: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x2345c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2345cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2345CCu;
    {
        const bool branch_taken_0x2345cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345CCu;
        // 0x2345d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345cc) {
            ctx->pc = 0x2345E8u;
            goto label_2345e8;
        }
    }
    ctx->pc = 0x2345D4u;
    // 0x2345d4: 0xc0893c8  jal         func_224F20
    ctx->pc = 0x2345D4u;
    SET_GPR_U32(ctx, 31, 0x2345DCu);
    ctx->pc = 0x224F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F20u, 0x2345D4u, 0x2345DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345DCu;
label_2345dc:
    // 0x2345dc: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2345DCu;
    {
        const bool branch_taken_0x2345dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345DCu;
        // 0x2345e0: 0x8e223a58  lw          $v0, 0x3A58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345dc) {
            ctx->pc = 0x2345B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2345b0;
        }
    }
    ctx->pc = 0x2345E4u;
    // 0x2345e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2345e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2345e8:
    // 0x2345e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2345e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2345ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2345ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2345f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2345F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2345F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345F0u;
        // 0x2345f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2345F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2345F8u;
}
