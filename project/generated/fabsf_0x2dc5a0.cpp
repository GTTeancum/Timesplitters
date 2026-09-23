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

// Function: fabsf
// Address: 0x2dc5a0 - 0x2dc5bc
void fabsf_0x2dc5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fabsf_0x2dc5a0");
#endif

    ctx->pc = 0x2dc5a0u;

    // 0x2dc5a0: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x2dc5a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2dc5a4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2dc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2dc5a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc5ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2dc5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2dc5b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC5BCu;
}
