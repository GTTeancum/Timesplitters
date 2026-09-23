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

// Function: propSetAttached
// Address: 0x2702d8 - 0x270318
void propSetAttached_0x2702d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propSetAttached_0x2702d8");
#endif

    ctx->pc = 0x2702d8u;

    // 0x2702d8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2702d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2702dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2702dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2702e0: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x2702e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x2702e4: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x2702e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x2702e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2702e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2702ec: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2702ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2702f0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x2702f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x2702f4: 0xac88008c  sw          $t0, 0x8C($a0)
    ctx->pc = 0x2702f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 8));
    // 0x2702f8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2702f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2702fc: 0xac8600c0  sw          $a2, 0xC0($a0)
    ctx->pc = 0x2702fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 6));
    // 0x270300: 0xac8700c4  sw          $a3, 0xC4($a0)
    ctx->pc = 0x270300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 7));
    // 0x270304: 0x8ca300f4  lw          $v1, 0xF4($a1)
    ctx->pc = 0x270304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x270308: 0xac8500bc  sw          $a1, 0xBC($a0)
    ctx->pc = 0x270308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 5));
    // 0x27030c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x27030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x270310: 0x3e00008  jr          $ra
    ctx->pc = 0x270310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270310u;
        // 0x270314: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270318u;
}
