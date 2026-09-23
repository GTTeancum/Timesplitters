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

// Function: setup_vars
// Address: 0x20f570 - 0x20f5d4
void setup_vars_0x20f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setup_vars_0x20f570");
#endif

    ctx->pc = 0x20f570u;

    // 0x20f570: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f574: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x20f574u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x20f578: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x20f578u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x20f57c: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x20f57cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x20f580: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x20f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f584: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x20f584u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x20f588: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x20f588u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x20f58c: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x20f58cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20f590: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x20f590u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f594: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x20f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x20f598: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20f598u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20f59c: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x20f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x20f5a0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x20f5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x20f5a4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x20f5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x20f5a8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x20f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x20f5ac: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x20f5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x20f5b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20f5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20f5b4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x20f5b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x20f5b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20f5bc: 0xad23a690  sw          $v1, -0x5970($t1)
    ctx->pc = 0x20f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294944400), GPR_U32(ctx, 3));
    // 0x20f5c0: 0xad44a6b8  sw          $a0, -0x5948($t2)
    ctx->pc = 0x20f5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294944440), GPR_U32(ctx, 4));
    // 0x20f5c4: 0xad62a6e0  sw          $v0, -0x5920($t3)
    ctx->pc = 0x20f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294944480), GPR_U32(ctx, 2));
    // 0x20f5c8: 0xace5a668  sw          $a1, -0x5998($a3)
    ctx->pc = 0x20f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944360), GPR_U32(ctx, 5));
    // 0x20f5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x20F5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5CCu;
        // 0x20f5d0: 0xad06a640  sw          $a2, -0x59C0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294944320), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F5D4u;
}
