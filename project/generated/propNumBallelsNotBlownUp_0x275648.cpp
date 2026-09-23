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

// Function: propNumBallelsNotBlownUp
// Address: 0x275648 - 0x2756ac
void propNumBallelsNotBlownUp_0x275648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propNumBallelsNotBlownUp_0x275648");
#endif

    switch (ctx->pc) {
        case 0x275660u: goto label_275660;
        default: break;
    }

    ctx->pc = 0x275648u;

    // 0x275648: 0x8f88b15c  lw          $t0, -0x4EA4($gp)
    ctx->pc = 0x275648u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x27564c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27564cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275650: 0x19000014  blez        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x275650u;
    {
        const bool branch_taken_0x275650 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x275654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275650u;
        // 0x275654: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275650) {
            ctx->pc = 0x2756A4u;
            goto label_2756a4;
        }
    }
    ctx->pc = 0x275658u;
    // 0x275658: 0x8f87b07c  lw          $a3, -0x4F84($gp)
    ctx->pc = 0x275658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x27565c: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x27565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_275660:
    // 0x275660: 0x240400ca  addiu       $a0, $zero, 0xCA
    ctx->pc = 0x275660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x275664: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x275664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x275668: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x275668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x27566c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x275670: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x275670u;
    {
        const bool branch_taken_0x275670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x275670) {
            ctx->pc = 0x275674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275670u;
            // 0x275674: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275698u;
            goto label_275698;
        }
    }
    ctx->pc = 0x275678u;
    // 0x275678: 0xc4410214  lwc1        $f1, 0x214($v0)
    ctx->pc = 0x275678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27567c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275684: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275688: 0x0  nop
    ctx->pc = 0x275688u;
    // NOP
    // 0x27568c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27568Cu;
    {
        const bool branch_taken_0x27568c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27568c) {
            ctx->pc = 0x275690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27568Cu;
            // 0x275690: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275694u;
            goto label_275694;
        }
    }
    ctx->pc = 0x275694u;
label_275694:
    // 0x275694: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x275694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_275698:
    // 0x275698: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x275698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x27569c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27569Cu;
    {
        const bool branch_taken_0x27569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2756A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27569Cu;
        // 0x2756a0: 0x24020250  addiu       $v0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27569c) {
            ctx->pc = 0x275660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275660;
        }
    }
    ctx->pc = 0x2756A4u;
label_2756a4:
    // 0x2756a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2756A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2756A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756A4u;
        // 0x2756a8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2756A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2756ACu;
}
