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

// Function: _fstat_r
// Address: 0x2ee9b8 - 0x2eea14
void _fstat_r_0x2ee9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fstat_r_0x2ee9b8");
#endif

    switch (ctx->pc) {
        case 0x2ee9e0u: goto label_2ee9e0;
        default: break;
    }

    ctx->pc = 0x2ee9b8u;

    // 0x2ee9b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ee9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ee9bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee9c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ee9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ee9c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ee9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9cc: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2ee9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2ee9d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ee9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ee9d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ee9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9d8: 0xc0b4202  jal         func_2D0808
    ctx->pc = 0x2EE9D8u;
    SET_GPR_U32(ctx, 31, 0x2EE9E0u);
    ctx->pc = 0x2EE9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9D8u;
    // 0x2ee9dc: 0xae2001f8  sw          $zero, 0x1F8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0808u, 0x2EE9D8u, 0x2EE9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE9E0u;
label_2ee9e0:
    // 0x2ee9e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ee9e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ee9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee9e8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE9E8u;
    {
        const bool branch_taken_0x2ee9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9E8u;
        // 0x2ee9ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9e8) {
            ctx->pc = 0x2EEA00u;
            goto label_2eea00;
        }
    }
    ctx->pc = 0x2EE9F0u;
    // 0x2ee9f0: 0x8e2201f8  lw          $v0, 0x1F8($s1)
    ctx->pc = 0x2ee9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x2ee9f4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE9F4u;
    {
        const bool branch_taken_0x2ee9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee9f4) {
            ctx->pc = 0x2EE9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE9F4u;
            // 0x2ee9f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA00u;
            goto label_2eea00;
        }
    }
    ctx->pc = 0x2EE9FCu;
    // 0x2ee9fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ee9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2eea00:
    // 0x2eea00: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2eea00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2eea04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eea08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eea08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eea0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA0Cu;
        // 0x2eea10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEA14u;
}
