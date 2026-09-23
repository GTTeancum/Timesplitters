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

// Function: soundBatchExec
// Address: 0x204950 - 0x2049b4
void soundBatchExec_0x204950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundBatchExec_0x204950");
#endif

    switch (ctx->pc) {
        case 0x204988u: goto label_204988;
        default: break;
    }

    ctx->pc = 0x204950u;

    // 0x204950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204954: 0x8f869b0c  lw          $a2, -0x64F4($gp)
    ctx->pc = 0x204954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x204958: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x204958u;
    {
        const bool branch_taken_0x204958 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x20495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204958u;
        // 0x20495c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204958) {
            ctx->pc = 0x2049A8u;
            goto label_2049a8;
        }
    }
    ctx->pc = 0x204960u;
    // 0x204960: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x204960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x204964: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x204964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x204968: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x204968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x20496c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x20496cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x204970: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x204970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x204974: 0x8f85b634  lw          $a1, -0x49CC($gp)
    ctx->pc = 0x204974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948404)));
    // 0x204978: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x204978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x20497c: 0x248419c0  addiu       $a0, $a0, 0x19C0
    ctx->pc = 0x20497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6592));
    // 0x204980: 0xc0b7664  jal         func_2DD990
    ctx->pc = 0x204980u;
    SET_GPR_U32(ctx, 31, 0x204988u);
    ctx->pc = 0x204984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204980u;
    // 0x204984: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD990u, 0x204980u, 0x204988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204988u;
label_204988:
    // 0x204988: 0x8f86b634  lw          $a2, -0x49CC($gp)
    ctx->pc = 0x204988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948404)));
    // 0x20498c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204990: 0x8f889b0c  lw          $t0, -0x64F4($gp)
    ctx->pc = 0x204990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x204994: 0x340580b0  ori         $a1, $zero, 0x80B0
    ctx->pc = 0x204994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32944);
    // 0x204998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20499c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20499cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049a0: 0x80b7684  j           func_2DDA10
    ctx->pc = 0x2049A0u;
    ctx->pc = 0x2049A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2049A0u;
    // 0x2049a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    sceSdRemote_0x2dda10(rdram, ctx, runtime); return;
    ctx->pc = 0x2049A8u;
label_2049a8:
    // 0x2049a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2049a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2049ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2049ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2049B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049ACu;
        // 0x2049b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2049ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2049B4u;
}
