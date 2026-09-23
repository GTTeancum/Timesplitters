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

// Function: splitMessageStart
// Address: 0x230a88 - 0x230adc
void splitMessageStart_0x230a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("splitMessageStart_0x230a88");
#endif

    switch (ctx->pc) {
        case 0x230ac0u: goto label_230ac0;
        default: break;
    }

    ctx->pc = 0x230a88u;

    // 0x230a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230a8c: 0x24030104  addiu       $v1, $zero, 0x104
    ctx->pc = 0x230a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x230a90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230a94: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x230a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x230a98: 0x838018  mult        $s0, $a0, $v1
    ctx->pc = 0x230a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x230a9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x230a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x230aa0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230aa4: 0x24421488  addiu       $v0, $v0, 0x1488
    ctx->pc = 0x230aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5256));
    // 0x230aa8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x230aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230aac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x230ab0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x230ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x230ab4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x230ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x230ab8: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x230AB8u;
    SET_GPR_U32(ctx, 31, 0x230AC0u);
    ctx->pc = 0x230ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230AB8u;
    // 0x230abc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x230AB8u, 0x230AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230AC0u;
label_230ac0:
    // 0x230ac0: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x230ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x230ac4: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x230ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x230ac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230acc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x230AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AD4u;
        // 0x230ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230ADCu;
}
