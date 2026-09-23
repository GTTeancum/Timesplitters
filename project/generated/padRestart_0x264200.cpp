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

// Function: padRestart
// Address: 0x264200 - 0x264244
void padRestart_0x264200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padRestart_0x264200");
#endif

    switch (ctx->pc) {
        case 0x264210u: goto label_264210;
        default: break;
    }

    ctx->pc = 0x264200u;

    // 0x264200: 0x8f88a348  lw          $t0, -0x5CB8($gp)
    ctx->pc = 0x264200u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x264204: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x264204u;
    {
        const bool branch_taken_0x264204 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x264208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264204u;
        // 0x264208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264204) {
            ctx->pc = 0x26423Cu;
            goto label_26423c;
        }
    }
    ctx->pc = 0x26420Cu;
    // 0x26420c: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x26420cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
label_264210:
    // 0x264210: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x264210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x264214: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x264214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x264218: 0xc41018  mult        $v0, $a2, $a0
    ctx->pc = 0x264218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26421c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26421cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x264220: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x264220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x264224: 0xc8282a  slt         $a1, $a2, $t0
    ctx->pc = 0x264224u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x264228: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x264228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26422c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x264230: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x264230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x264234: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x264234u;
    {
        const bool branch_taken_0x264234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x264238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264234u;
        // 0x264238: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264234) {
            ctx->pc = 0x264210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264210;
        }
    }
    ctx->pc = 0x26423Cu;
label_26423c:
    // 0x26423c: 0x3e00008  jr          $ra
    ctx->pc = 0x26423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264244u;
}
