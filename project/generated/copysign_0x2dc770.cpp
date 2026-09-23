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

// Function: copysign
// Address: 0x2dc770 - 0x2dc7b4
void copysign_0x2dc770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copysign_0x2dc770");
#endif

    ctx->pc = 0x2dc770u;

    // 0x2dc770: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dc770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc774: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2dc774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2dc778: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2dc778u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2dc77c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2dc77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc780: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2dc780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2dc784: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2dc784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2dc788: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dc788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2dc78c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2dc78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2dc790: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2dc790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2dc794: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2dc794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2dc798: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2dc798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2dc79c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2dc79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2dc7a0: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2dc7a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2dc7a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2dc7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dc7a8: 0xc22025  or          $a0, $a2, $v0
    ctx->pc = 0x2dc7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2dc7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC7ACu;
        // 0x2dc7b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC7B4u;
}
