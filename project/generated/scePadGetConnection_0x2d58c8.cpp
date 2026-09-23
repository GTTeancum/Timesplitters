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

// Function: scePadGetConnection
// Address: 0x2d58c8 - 0x2d5934
void scePadGetConnection_0x2d58c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadGetConnection_0x2d58c8");
#endif

    switch (ctx->pc) {
        case 0x2d5918u: goto label_2d5918;
        default: break;
    }

    ctx->pc = 0x2d58c8u;

    // 0x2d58c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d58c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d58cc: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2d58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2d58d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d58d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d58d4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x2d58d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2d58d8: 0x24501300  addiu       $s0, $v0, 0x1300
    ctx->pc = 0x2d58d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x2d58dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d58e0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2d58e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1FF1304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF1304u, _value); } while (0);
    // 0x2d58e4: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2d58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2d58e8: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2d58e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1FF1308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF1308u, _value); } while (0);
    // 0x2d58ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d58ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58f0: 0xac471300  sw          $a3, 0x1300($v0)
    ctx->pc = 0x2d58f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1FF1300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FF1300u, _value); } while (0);
    // 0x2d58f4: 0x24640c80  addiu       $a0, $v1, 0xC80
    ctx->pc = 0x2d58f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
    // 0x2d58f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d58f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d58fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d5900: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d5900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5904: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2d5904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5908: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2d5908u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d590c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x2d590cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5910: 0xc0b4b42  jal         func_2D2D08
    ctx->pc = 0x2D5910u;
    SET_GPR_U32(ctx, 31, 0x2D5918u);
    ctx->pc = 0x2D5914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5910u;
    // 0x2d5914: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D08u, 0x2D5910u, 0x2D5918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5918u;
label_2d5918:
    // 0x2d5918: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5918u;
    {
        const bool branch_taken_0x2d5918 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d5918) {
            ctx->pc = 0x2D591Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5918u;
            // 0x2d591c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5924u;
            goto label_2d5924;
        }
    }
    ctx->pc = 0x2D5920u;
    // 0x2d5920: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5924:
    // 0x2d5924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d5924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5928: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d5928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d592c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D592Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D592Cu;
        // 0x2d5930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D592Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5934u;
}
