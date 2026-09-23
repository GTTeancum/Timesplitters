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

// Function: statsupdate_pageDraw
// Address: 0x2400b8 - 0x240100
void statsupdate_pageDraw_0x2400b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("statsupdate_pageDraw_0x2400b8");
#endif

    switch (ctx->pc) {
        case 0x2400c8u: goto label_2400c8;
        default: break;
    }

    ctx->pc = 0x2400b8u;

    // 0x2400b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2400b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2400bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2400bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2400c0: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x2400C0u;
    SET_GPR_U32(ctx, 31, 0x2400C8u);
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x2400C0u, 0x2400C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400C8u;
label_2400c8:
    // 0x2400c8: 0x8f85b748  lw          $a1, -0x48B8($gp)
    ctx->pc = 0x2400c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
    // 0x2400cc: 0x24030104  addiu       $v1, $zero, 0x104
    ctx->pc = 0x2400ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x2400d0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2400d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2400d4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2400d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2400d8: 0x24421488  addiu       $v0, $v0, 0x1488
    ctx->pc = 0x2400d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5256));
    // 0x2400dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2400dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2400e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2400e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2400e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2400E4u;
    {
        const bool branch_taken_0x2400e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400E4u;
        // 0x2400e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400e4) {
            ctx->pc = 0x2400F8u;
            goto label_2400f8;
        }
    }
    ctx->pc = 0x2400ECu;
    // 0x2400ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2400ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2400f0: 0x808c2c0  j           func_230B00
    ctx->pc = 0x2400F0u;
    ctx->pc = 0x2400F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2400F0u;
    // 0x2400f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230B00u;
    splitMessageDraw_0x230b00(rdram, ctx, runtime); return;
    ctx->pc = 0x2400F8u;
label_2400f8:
    // 0x2400f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2400F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2400FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400F8u;
        // 0x2400fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2400F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240100u;
}
