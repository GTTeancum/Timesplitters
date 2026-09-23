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

// Function: stream_RPCinit
// Address: 0x205d88 - 0x205de4
void stream_RPCinit_0x205d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stream_RPCinit_0x205d88");
#endif

    switch (ctx->pc) {
        case 0x205da0u: goto label_205da0;
        case 0x205db8u: goto label_205db8;
        default: break;
    }

    ctx->pc = 0x205d88u;

    // 0x205d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x205d8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x205d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x205d90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x205d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x205d94: 0x3c1101fb  lui         $s1, 0x1FB
    ctx->pc = 0x205d94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)507 << 16));
    // 0x205d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205d9c: 0x0  nop
    ctx->pc = 0x205d9cu;
    // NOP
label_205da0:
    // 0x205da0: 0x26302040  addiu       $s0, $s1, 0x2040
    ctx->pc = 0x205da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8256));
    // 0x205da4: 0x3c05534a  lui         $a1, 0x534A
    ctx->pc = 0x205da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21322 << 16));
    // 0x205da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205dac: 0x34a54521  ori         $a1, $a1, 0x4521
    ctx->pc = 0x205dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17697);
    // 0x205db0: 0xc0b4ad6  jal         func_2D2B58
    ctx->pc = 0x205DB0u;
    SET_GPR_U32(ctx, 31, 0x205DB8u);
    ctx->pc = 0x205DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DB0u;
    // 0x205db4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B58u, 0x205DB0u, 0x205DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DB8u;
label_205db8:
    // 0x205db8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205DB8u;
    {
        const bool branch_taken_0x205db8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x205db8) {
            ctx->pc = 0x205DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205DB8u;
            // 0x205dbc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205DC8u;
            goto label_205dc8;
        }
    }
    ctx->pc = 0x205DC0u;
    // 0x205dc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x205DC0u;
    {
        const bool branch_taken_0x205dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DC0u;
        // 0x205dc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dc0) {
            ctx->pc = 0x205DD0u;
            goto label_205dd0;
        }
    }
    ctx->pc = 0x205DC8u;
label_205dc8:
    // 0x205dc8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x205DC8u;
    {
        const bool branch_taken_0x205dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DC8u;
        // 0x205dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dc8) {
            ctx->pc = 0x205DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205da0;
        }
    }
    ctx->pc = 0x205DD0u;
label_205dd0:
    // 0x205dd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205dd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x205dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x205DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DDCu;
        // 0x205de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205DE4u;
}
