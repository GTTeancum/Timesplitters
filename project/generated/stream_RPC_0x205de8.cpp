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

// Function: stream_RPC
// Address: 0x205de8 - 0x205e88
void stream_RPC_0x205de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stream_RPC_0x205de8");
#endif

    switch (ctx->pc) {
        case 0x205e38u: goto label_205e38;
        case 0x205e74u: goto label_205e74;
        default: break;
    }

    ctx->pc = 0x205de8u;

    // 0x205de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x205dec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x205decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205df0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x205df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x205df4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x205df4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205df8: 0x30c3fff0  andi        $v1, $a2, 0xFFF0
    ctx->pc = 0x205df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65520);
    // 0x205dfc: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x205dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x205e00: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x205E00u;
    {
        const bool branch_taken_0x205e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x205E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E00u;
        // 0x205e04: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e00) {
            ctx->pc = 0x205E40u;
            goto label_205e40;
        }
    }
    ctx->pc = 0x205E08u;
    // 0x205e08: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x205e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x205e0c: 0x3c1001fb  lui         $s0, 0x1FB
    ctx->pc = 0x205e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)507 << 16));
    // 0x205e10: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x205e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e14: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x205e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e18: 0x24842040  addiu       $a0, $a0, 0x2040
    ctx->pc = 0x205e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8256));
    // 0x205e1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x205e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x205e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x205e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e24: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x205e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x205e28: 0x26092000  addiu       $t1, $s0, 0x2000
    ctx->pc = 0x205e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x205e2c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x205e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x205e30: 0xc0b4b42  jal         func_2D2D08
    ctx->pc = 0x205E30u;
    SET_GPR_U32(ctx, 31, 0x205E38u);
    ctx->pc = 0x205E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E30u;
    // 0x205e34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D08u, 0x205E30u, 0x205E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E38u;
label_205e38:
    // 0x205e38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x205E38u;
    {
        const bool branch_taken_0x205e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E38u;
        // 0x205e3c: 0x8e022000  lw          $v0, 0x2000($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e38) {
            ctx->pc = 0x205E78u;
            goto label_205e78;
        }
    }
    ctx->pc = 0x205E40u;
label_205e40:
    // 0x205e40: 0x3c1001fb  lui         $s0, 0x1FB
    ctx->pc = 0x205e40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)507 << 16));
    // 0x205e44: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x205e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x205e48: 0xae082000  sw          $t0, 0x2000($s0)
    ctx->pc = 0x205e48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1FB2000u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FB2000u, _value); } while (0);
    // 0x205e4c: 0x26072000  addiu       $a3, $s0, 0x2000
    ctx->pc = 0x205e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x205e50: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x205e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e54: 0x24842040  addiu       $a0, $a0, 0x2040
    ctx->pc = 0x205e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8256));
    // 0x205e58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x205e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x205e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x205e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e60: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x205e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x205e64: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x205e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e68: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x205e68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x205e6c: 0xc0b4b42  jal         func_2D2D08
    ctx->pc = 0x205E6Cu;
    SET_GPR_U32(ctx, 31, 0x205E74u);
    ctx->pc = 0x205E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E6Cu;
    // 0x205e70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D08u, 0x205E6Cu, 0x205E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E74u;
label_205e74:
    // 0x205e74: 0x8e022000  lw          $v0, 0x2000($s0)
    ctx->pc = 0x205e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8192)));
label_205e78:
    // 0x205e78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205e7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x205e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205e80: 0x3e00008  jr          $ra
    ctx->pc = 0x205E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E80u;
        // 0x205e84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205E88u;
}
