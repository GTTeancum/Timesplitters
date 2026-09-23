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

// Function: chrgunTick
// Address: 0x294970 - 0x2949e0
void chrgunTick_0x294970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrgunTick_0x294970");
#endif

    switch (ctx->pc) {
        case 0x2949a0u: goto label_2949a0;
        case 0x2949b4u: goto label_2949b4;
        default: break;
    }

    ctx->pc = 0x294970u;

    // 0x294970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294974: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x294974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x294978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29497c: 0x8f909f74  lw          $s0, -0x608C($gp)
    ctx->pc = 0x29497cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x294980: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294984: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x294984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x294988: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x294988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29498c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29498Cu;
    {
        const bool branch_taken_0x29498c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29498Cu;
        // 0x294990: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29498c) {
            ctx->pc = 0x2949CCu;
            goto label_2949cc;
        }
    }
    ctx->pc = 0x294994u;
    // 0x294994: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x294994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x294998: 0x2028818  mult        $s1, $s0, $v0
    ctx->pc = 0x294998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x29499c: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x29499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_2949a0:
    // 0x2949a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2949a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2949a4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2949a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2949a8: 0x8c440bcc  lw          $a0, 0xBCC($v0)
    ctx->pc = 0x2949a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x2949ac: 0xc0aff5e  jal         func_2BFD78
    ctx->pc = 0x2949ACu;
    SET_GPR_U32(ctx, 31, 0x2949B4u);
    ctx->pc = 0x2949B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2949ACu;
    // 0x2949b0: 0x26311210  addiu       $s1, $s1, 0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD78u, 0x2949ACu, 0x2949B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949B4u;
label_2949b4:
    // 0x2949b4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2949b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2949b8: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2949b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2949bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2949bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2949c0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2949c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2949c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2949C4u;
    {
        const bool branch_taken_0x2949c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2949C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949C4u;
        // 0x2949c8: 0x8f82b238  lw          $v0, -0x4DC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949c4) {
            ctx->pc = 0x2949A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2949a0;
        }
    }
    ctx->pc = 0x2949CCu;
label_2949cc:
    // 0x2949cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2949ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2949d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2949d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2949d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2949d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2949d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2949D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2949DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949D8u;
        // 0x2949dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2949D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2949E0u;
}
