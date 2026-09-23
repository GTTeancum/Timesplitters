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

// Function: sceMtapPortClose
// Address: 0x2d5ca8 - 0x2d5d14
void sceMtapPortClose_0x2d5ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMtapPortClose_0x2d5ca8");
#endif

    switch (ctx->pc) {
        case 0x2d5cecu: goto label_2d5cec;
        case 0x2d5d00u: goto label_2d5d00;
        default: break;
    }

    ctx->pc = 0x2d5ca8u;

    // 0x2d5ca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5cac: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2d5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2d5cb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d5cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d5cb4: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2d5cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2d5cb8: 0x24501480  addiu       $s0, $v0, 0x1480
    ctx->pc = 0x2d5cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5248));
    // 0x2d5cbc: 0xac441480  sw          $a0, 0x1480($v0)
    ctx->pc = 0x2d5cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1FF1480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF1480u, _value); } while (0);
    // 0x2d5cc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d5cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d5cc4: 0x246413a8  addiu       $a0, $v1, 0x13A8
    ctx->pc = 0x2d5cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5032));
    // 0x2d5cc8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d5ccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d5cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cd8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2d5cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5cdc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2d5cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ce0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x2d5ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5ce4: 0xc0b4b42  jal         func_2D2D08
    ctx->pc = 0x2D5CE4u;
    SET_GPR_U32(ctx, 31, 0x2D5CECu);
    ctx->pc = 0x2D5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5CE4u;
    // 0x2d5ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D08u, 0x2D5CE4u, 0x2D5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CECu;
label_2d5cec:
    // 0x2d5cec: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5CECu;
    {
        const bool branch_taken_0x2d5cec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d5cec) {
            ctx->pc = 0x2D5CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5CECu;
            // 0x2d5cf0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5D04u;
            goto label_2d5d04;
        }
    }
    ctx->pc = 0x2D5CF4u;
    // 0x2d5cf4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d5cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d5cf8: 0xc0b5668  jal         func_2D59A0
    ctx->pc = 0x2D5CF8u;
    SET_GPR_U32(ctx, 31, 0x2D5D00u);
    ctx->pc = 0x2D5CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5CF8u;
    // 0x2d5cfc: 0x2484a6f8  addiu       $a0, $a0, -0x5908 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59A0u, 0x2D5CF8u, 0x2D5D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D00u;
label_2d5d00:
    // 0x2d5d00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5d04:
    // 0x2d5d04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d5d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5d08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d5d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D0Cu;
        // 0x2d5d10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5D14u;
}
