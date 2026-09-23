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

// Function: deletelink
// Address: 0x264738 - 0x264798
void deletelink_0x264738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("deletelink_0x264738");
#endif

    ctx->pc = 0x264738u;

    // 0x264738: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x264738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26473c: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x26473cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x264740: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x264740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x264744: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x264744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x264748: 0xc74818  mult        $t1, $a2, $a3
    ctx->pc = 0x264748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x26474c: 0x8f88a2ec  lw          $t0, -0x5D14($gp)
    ctx->pc = 0x26474cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x264750: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x264750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x264754: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x264754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264758: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x264758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x26475c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x26475cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x264760: 0x1283021  addu        $a2, $t1, $t0
    ctx->pc = 0x264760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x264764: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x264764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x264768: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x264768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x26476c: 0x84670008  lh          $a3, 0x8($v1)
    ctx->pc = 0x26476cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x264770: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264770u;
    {
        const bool branch_taken_0x264770 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x264774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264770u;
        // 0x264774: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264770) {
            ctx->pc = 0x264788u;
            goto label_264788;
        }
    }
    ctx->pc = 0x264778u;
    // 0x264778: 0x8f82b8b4  lw          $v0, -0x474C($gp)
    ctx->pc = 0x264778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949044)));
    // 0x26477c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264780: 0x3e00008  jr          $ra
    ctx->pc = 0x264780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264780u;
        // 0x264784: 0xaf82b8b4  sw          $v0, -0x474C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264788u;
label_264788:
    // 0x264788: 0x8f82b8b8  lw          $v0, -0x4748($gp)
    ctx->pc = 0x264788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949048)));
    // 0x26478c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264790: 0x3e00008  jr          $ra
    ctx->pc = 0x264790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264790u;
        // 0x264794: 0xaf82b8b8  sw          $v0, -0x4748($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264798u;
}
