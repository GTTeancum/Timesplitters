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

// Function: mcardFileWrite
// Address: 0x208e08 - 0x208e7c
void mcardFileWrite_0x208e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardFileWrite_0x208e08");
#endif

    switch (ctx->pc) {
        case 0x208e44u: goto label_208e44;
        default: break;
    }

    ctx->pc = 0x208e08u;

    // 0x208e08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x208e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x208e0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x208e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e10: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x208e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x208e14: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x208e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x208e18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x208e18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x208e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x208e20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x208e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x208e24: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x208e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208e2c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x208e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x208e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x208e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x208e38: 0x24843040  addiu       $a0, $a0, 0x3040
    ctx->pc = 0x208e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12352));
    // 0x208e3c: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x208E3Cu;
    SET_GPR_U32(ctx, 31, 0x208E44u);
    ctx->pc = 0x208E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E3Cu;
    // 0x208e40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x208E3Cu, 0x208E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E44u;
label_208e44:
    // 0x208e44: 0xaf939c24  sw          $s3, -0x63DC($gp)
    ctx->pc = 0x208e44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941732), GPR_U32(ctx, 19));
    // 0x208e48: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x208e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x208e4c: 0xaf909c28  sw          $s0, -0x63D8($gp)
    ctx->pc = 0x208e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941736), GPR_U32(ctx, 16));
    // 0x208e50: 0xaf919c2c  sw          $s1, -0x63D4($gp)
    ctx->pc = 0x208e50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941740), GPR_U32(ctx, 17));
    // 0x208e54: 0xaf92b684  sw          $s2, -0x497C($gp)
    ctx->pc = 0x208e54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948484), GPR_U32(ctx, 18));
    // 0x208e58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x208e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208e5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x208e5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208e60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x208e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208e64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x208e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208e6c: 0xaf839bec  sw          $v1, -0x6414($gp)
    ctx->pc = 0x208e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 3));
    // 0x208e70: 0xaf809be8  sw          $zero, -0x6418($gp)
    ctx->pc = 0x208e70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 0));
    // 0x208e74: 0x3e00008  jr          $ra
    ctx->pc = 0x208E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E74u;
        // 0x208e78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208E7Cu;
}
