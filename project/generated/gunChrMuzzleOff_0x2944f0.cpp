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

// Function: gunChrMuzzleOff
// Address: 0x2944f0 - 0x294524
void gunChrMuzzleOff_0x2944f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunChrMuzzleOff_0x2944f0");
#endif

    ctx->pc = 0x2944f0u;

    // 0x2944f0: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2944f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2944f4: 0x2443010c  addiu       $v1, $v0, 0x10C
    ctx->pc = 0x2944f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x2944f8: 0x24420178  addiu       $v0, $v0, 0x178
    ctx->pc = 0x2944f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 376));
    // 0x2944fc: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x2944fcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x294500: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x294500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x294504: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294504u;
    {
        const bool branch_taken_0x294504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294504) {
            ctx->pc = 0x29451Cu;
            goto label_29451c;
        }
    }
    ctx->pc = 0x29450Cu;
    // 0x29450c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x29450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x294510: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x294510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x294514: 0x3042fffc  andi        $v0, $v0, 0xFFFC
    ctx->pc = 0x294514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x294518: 0xa4620124  sh          $v0, 0x124($v1)
    ctx->pc = 0x294518u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 292), (uint16_t)GPR_U32(ctx, 2));
label_29451c:
    // 0x29451c: 0x3e00008  jr          $ra
    ctx->pc = 0x29451Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29451Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294524u;
}
