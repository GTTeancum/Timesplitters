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

// Function: isinf
// Address: 0x2ed0b8 - 0x2ed100
void isinf_0x2ed0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isinf_0x2ed0b8");
#endif

    ctx->pc = 0x2ed0b8u;

    // 0x2ed0b8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ed0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ed0bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed0bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ed0c0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2ed0c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2ed0c4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2ed0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2ed0c8: 0x22823  negu        $a1, $v0
    ctx->pc = 0x2ed0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2ed0cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ed0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ed0d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ed0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ed0d4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2ed0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ed0d8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x2ed0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ed0dc: 0x3c057ff0  lui         $a1, 0x7FF0
    ctx->pc = 0x2ed0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32752 << 16));
    // 0x2ed0e0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2ed0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ed0e4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2ed0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ed0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed0ec: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2ed0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2ed0f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ed0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ed0f4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2ed0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2ed0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0F8u;
        // 0x2ed0fc: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED100u;
}
