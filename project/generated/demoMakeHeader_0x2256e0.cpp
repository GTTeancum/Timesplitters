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

// Function: demoMakeHeader
// Address: 0x2256e0 - 0x225718
void demoMakeHeader_0x2256e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("demoMakeHeader_0x2256e0");
#endif

    switch (ctx->pc) {
        case 0x2256f4u: goto label_2256f4;
        default: break;
    }

    ctx->pc = 0x2256e0u;

    // 0x2256e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2256e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2256e4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x2256e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2256e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2256e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2256ec: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2256ECu;
    SET_GPR_U32(ctx, 31, 0x2256F4u);
    ctx->pc = 0x2256F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2256ECu;
    // 0x2256f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2256ECu, 0x2256F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256F4u;
label_2256f4:
    // 0x2256f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2256F4u;
    {
        const bool branch_taken_0x2256f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2256F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256F4u;
        // 0x2256f8: 0xaf829f58  sw          $v0, -0x60A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256f4) {
            ctx->pc = 0x22570Cu;
            goto label_22570c;
        }
    }
    ctx->pc = 0x2256FCu;
    // 0x2256fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2256fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225700: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x225700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x225704: 0x80b8690  j           func_2E1A40
    ctx->pc = 0x225704u;
    ctx->pc = 0x225708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225704u;
    // 0x225708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    exit_0x2e1a40(rdram, ctx, runtime); return;
    ctx->pc = 0x22570Cu;
label_22570c:
    // 0x22570c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22570cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225710: 0x3e00008  jr          $ra
    ctx->pc = 0x225710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225710u;
        // 0x225714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225718u;
}
