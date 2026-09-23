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

// Function: zbtestCopyZB
// Address: 0x2a70a0 - 0x2a7104
void zbtestCopyZB_0x2a70a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestCopyZB_0x2a70a0");
#endif

    switch (ctx->pc) {
        case 0x2a70e8u: goto label_2a70e8;
        default: break;
    }

    ctx->pc = 0x2a70a0u;

    // 0x2a70a0: 0x8f82b324  lw          $v0, -0x4CDC($gp)
    ctx->pc = 0x2a70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947620)));
    // 0x2a70a4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x2a70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2a70a8: 0x8f85b314  lw          $a1, -0x4CEC($gp)
    ctx->pc = 0x2a70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947604)));
    // 0x2a70ac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a70acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a70b0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a70b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a70b4: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x2a70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x2a70b8: 0x2484a860  addiu       $a0, $a0, -0x57A0
    ctx->pc = 0x2a70b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944864));
    // 0x2a70bc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2a70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2a70c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a70c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a70c4: 0x24050a00  addiu       $a1, $zero, 0xA00
    ctx->pc = 0x2a70c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x2a70c8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2a70c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a70cc: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x2a70ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a70d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a70d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a70d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70d8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2a70d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a70dc: 0x240a0280  addiu       $t2, $zero, 0x280
    ctx->pc = 0x2a70dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2a70e0: 0xc0a98b6  jal         func_2A62D8
    ctx->pc = 0x2A70E0u;
    SET_GPR_U32(ctx, 31, 0x2A70E8u);
    ctx->pc = 0x2A70E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A70E0u;
    // 0x2a70e4: 0x240b00e0  addiu       $t3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A62D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A62D8u, 0x2A70E0u, 0x2A70E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A70E8u;
label_2a70e8:
    // 0x2a70e8: 0x8f83b324  lw          $v1, -0x4CDC($gp)
    ctx->pc = 0x2a70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947620)));
    // 0x2a70ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a70ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a70f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a70f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a70f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a70f8: 0xaf82b324  sw          $v0, -0x4CDC($gp)
    ctx->pc = 0x2a70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947620), GPR_U32(ctx, 2));
    // 0x2a70fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A70FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70FCu;
        // 0x2a7100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A70FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7104u;
}
