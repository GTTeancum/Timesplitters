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

// Function: sceMtapChangeSlot
// Address: 0x2d5df8 - 0x2d5e68
void sceMtapChangeSlot_0x2d5df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMtapChangeSlot_0x2d5df8");
#endif

    switch (ctx->pc) {
        case 0x2d5e40u: goto label_2d5e40;
        case 0x2d5e54u: goto label_2d5e54;
        default: break;
    }

    ctx->pc = 0x2d5df8u;

    // 0x2d5df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5dfc: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2d5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2d5e00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d5e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d5e04: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2d5e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2d5e08: 0x24501480  addiu       $s0, $v0, 0x1480
    ctx->pc = 0x2d5e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5248));
    // 0x2d5e0c: 0xac441480  sw          $a0, 0x1480($v0)
    ctx->pc = 0x2d5e0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1FF1480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF1480u, _value); } while (0);
    // 0x2d5e10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d5e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d5e14: 0x24641420  addiu       $a0, $v1, 0x1420
    ctx->pc = 0x2d5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
    // 0x2d5e18: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x2d5e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1FF1484u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF1484u, _value); } while (0);
    // 0x2d5e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d5e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d5e24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5e28: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d5e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e2c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2d5e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5e30: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2d5e30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e34: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x2d5e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5e38: 0xc0b4b42  jal         func_2D2D08
    ctx->pc = 0x2D5E38u;
    SET_GPR_U32(ctx, 31, 0x2D5E40u);
    ctx->pc = 0x2D5E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E38u;
    // 0x2d5e3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D08u, 0x2D5E38u, 0x2D5E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E40u;
label_2d5e40:
    // 0x2d5e40: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5E40u;
    {
        const bool branch_taken_0x2d5e40 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d5e40) {
            ctx->pc = 0x2D5E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5E40u;
            // 0x2d5e44: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5E58u;
            goto label_2d5e58;
        }
    }
    ctx->pc = 0x2D5E48u;
    // 0x2d5e48: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d5e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d5e4c: 0xc0b5668  jal         func_2D59A0
    ctx->pc = 0x2D5E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D5E54u);
    ctx->pc = 0x2D5E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E4Cu;
    // 0x2d5e50: 0x2484a768  addiu       $a0, $a0, -0x5898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59A0u, 0x2D5E4Cu, 0x2D5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E54u;
label_2d5e54:
    // 0x2d5e54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e58:
    // 0x2d5e58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d5e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5e5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d5e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5e60: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E60u;
        // 0x2d5e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5E68u;
}
