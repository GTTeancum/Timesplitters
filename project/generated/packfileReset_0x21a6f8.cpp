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

// Function: packfileReset
// Address: 0x21a6f8 - 0x21a724
void packfileReset_0x21a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("packfileReset_0x21a6f8");
#endif

    ctx->pc = 0x21a6f8u;

    // 0x21a6f8: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x21a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21a6fc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x21a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x21a700: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A700u;
    {
        const bool branch_taken_0x21a700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A700u;
        // 0x21a704: 0xaf80b6bc  sw          $zero, -0x4944($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a700) {
            ctx->pc = 0x21A71Cu;
            goto label_21a71c;
        }
    }
    ctx->pc = 0x21A708u;
    // 0x21a708: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21a708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21a70c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21a70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a710: 0x24840768  addiu       $a0, $a0, 0x768
    ctx->pc = 0x21a710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1896));
    // 0x21a714: 0x80867c4  j           func_219F10
    ctx->pc = 0x21A714u;
    ctx->pc = 0x21A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A714u;
    // 0x21a718: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F10u;
    packfileLoad_0x219f10(rdram, ctx, runtime); return;
    ctx->pc = 0x21A71Cu;
label_21a71c:
    // 0x21a71c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A724u;
}
