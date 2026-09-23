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

// Function: hudGetBagIconFileName
// Address: 0x2b04f8 - 0x2b052c
void hudGetBagIconFileName_0x2b04f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudGetBagIconFileName_0x2b04f8");
#endif

    switch (ctx->pc) {
        case 0x2b0520u: goto label_2b0520;
        default: break;
    }

    ctx->pc = 0x2b04f8u;

    // 0x2b04f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b04f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b04fc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b04fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b0500: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b0500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b0504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0508: 0x2442f7c0  addiu       $v0, $v0, -0x840
    ctx->pc = 0x2b0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965184));
    // 0x2b050c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b050cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b0510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b0510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0514: 0x24849900  addiu       $a0, $a0, -0x6700
    ctx->pc = 0x2b0514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940928));
    // 0x2b0518: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2B0518u;
    SET_GPR_U32(ctx, 31, 0x2B0520u);
    ctx->pc = 0x2B051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0518u;
    // 0x2b051c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2B0518u, 0x2B0520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0520u;
label_2b0520:
    // 0x2b0520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0524: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0524u;
        // 0x2b0528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B052Cu;
}
