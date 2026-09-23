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

// Function: copysignf
// Address: 0x2dc7b8 - 0x2dc7e8
void copysignf_0x2dc7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copysignf_0x2dc7b8");
#endif

    ctx->pc = 0x2dc7b8u;

    // 0x2dc7b8: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x2dc7b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2dc7bc: 0x44046800  mfc1        $a0, $f13
    ctx->pc = 0x2dc7bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2dc7c0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2dc7c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc7c4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2dc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2dc7c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc7cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2dc7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2dc7d0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2dc7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2dc7d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2dc7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2dc7d8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2dc7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2dc7dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dc7dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC7E8u;
}
