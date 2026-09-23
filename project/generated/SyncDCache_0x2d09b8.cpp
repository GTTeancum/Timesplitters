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

// Function: SyncDCache
// Address: 0x2d09b8 - 0x2d0a2c
void SyncDCache_0x2d09b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SyncDCache_0x2d09b8");
#endif

    switch (ctx->pc) {
        case 0x2d09e0u: goto label_2d09e0;
        case 0x2d0a10u: goto label_2d0a10;
        default: break;
    }

    ctx->pc = 0x2d09b8u;

    // 0x2d09b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d09b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d09bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d09bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d09c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d09c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d09c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d09c8: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2d09c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2d09cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d09d0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2d09d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d09d4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D09D4u;
    {
        const bool branch_taken_0x2d09d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09D4u;
        // 0x2d09d8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09d4) {
            ctx->pc = 0x2D09FCu;
            goto label_2d09fc;
        }
    }
    ctx->pc = 0x2D09DCu;
    // 0x2d09dc: 0x0  nop
    ctx->pc = 0x2d09dcu;
    // NOP
label_2d09e0:
    // 0x2d09e0: 0x42000039  di
    ctx->pc = 0x2d09e0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d09e4: 0x40f  sync.p
    ctx->pc = 0x2d09e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d09e8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d09ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d09ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d09f0: 0x0  nop
    ctx->pc = 0x2d09f0u;
    // NOP
    // 0x2d09f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D09F4u;
    {
        const bool branch_taken_0x2d09f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d09f4) {
            ctx->pc = 0x2D09E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d09e0;
        }
    }
    ctx->pc = 0x2D09FCu;
label_2d09fc:
    // 0x2d09fc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2d09fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2d0a00: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x2d0a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x2d0a04: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2d0a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2d0a08: 0xc0b4244  jal         func_2D0910
    ctx->pc = 0x2D0A08u;
    SET_GPR_U32(ctx, 31, 0x2D0A10u);
    ctx->pc = 0x2D0A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A08u;
    // 0x2d0a0c: 0xc42024  and         $a0, $a2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0910u, 0x2D0A08u, 0x2D0A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A10u;
label_2d0a10:
    // 0x2d0a10: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0A10u;
    {
        const bool branch_taken_0x2d0a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A10u;
        // 0x2d0a14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a10) {
            ctx->pc = 0x2D0A20u;
            goto label_2d0a20;
        }
    }
    ctx->pc = 0x2D0A18u;
    // 0x2d0a18: 0x42000038  ei
    ctx->pc = 0x2d0a18u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d0a1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0a20:
    // 0x2d0a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A24u;
        // 0x2d0a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0A2Cu;
}
