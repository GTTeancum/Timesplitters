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

// Function: preloadReset
// Address: 0x21c1f8 - 0x21c23c
void preloadReset_0x21c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadReset_0x21c1f8");
#endif

    switch (ctx->pc) {
        case 0x21c208u: goto label_21c208;
        default: break;
    }

    ctx->pc = 0x21c1f8u;

    // 0x21c1f8: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x21c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x21c1fc: 0x24434c60  addiu       $v1, $v0, 0x4C60
    ctx->pc = 0x21c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 19552));
    // 0x21c200: 0x24642ee0  addiu       $a0, $v1, 0x2EE0
    ctx->pc = 0x21c200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12000));
    // 0x21c204: 0x0  nop
    ctx->pc = 0x21c204u;
    // NOP
label_21c208:
    // 0x21c208: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x21c208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x21c20c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x21c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x21c210: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x21c210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x21c214: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x21c214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x21c218: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x21c218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x21c21c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x21c21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21c220: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21C220u;
    {
        const bool branch_taken_0x21c220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c220) {
            ctx->pc = 0x21C208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c208;
        }
    }
    ctx->pc = 0x21C228u;
    // 0x21c228: 0xaf809d70  sw          $zero, -0x6290($gp)
    ctx->pc = 0x21c228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942064), GPR_U32(ctx, 0));
    // 0x21c22c: 0xaf80b6ec  sw          $zero, -0x4914($gp)
    ctx->pc = 0x21c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948588), GPR_U32(ctx, 0));
    // 0x21c230: 0xaf80b6f0  sw          $zero, -0x4910($gp)
    ctx->pc = 0x21c230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948592), GPR_U32(ctx, 0));
    // 0x21c234: 0x3e00008  jr          $ra
    ctx->pc = 0x21C234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C234u;
        // 0x21c238: 0xaf80b6f4  sw          $zero, -0x490C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C23Cu;
}
