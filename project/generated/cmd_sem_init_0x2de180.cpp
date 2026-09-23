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

// Function: cmd_sem_init
// Address: 0x2de180 - 0x2de208
void cmd_sem_init_0x2de180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cmd_sem_init_0x2de180");
#endif

    switch (ctx->pc) {
        case 0x2de1c8u: goto label_2de1c8;
        case 0x2de1d4u: goto label_2de1d4;
        case 0x2de1e4u: goto label_2de1e4;
        default: break;
    }

    ctx->pc = 0x2de180u;

    // 0x2de180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2de180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2de184: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2de184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de188: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2de188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2de18c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x2de18cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x2de190: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2de190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2de194: 0x8e222fa0  lw          $v0, 0x2FA0($s1)
    ctx->pc = 0x2de194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382FA0u));
    // 0x2de198: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2de198u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2de19c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE19Cu;
    {
        const bool branch_taken_0x2de19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE19Cu;
        // 0x2de1a0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de19c) {
            ctx->pc = 0x2DE1B0u;
            goto label_2de1b0;
        }
    }
    ctx->pc = 0x2DE1A4u;
    // 0x2de1a4: 0x8e022fa4  lw          $v0, 0x2FA4($s0)
    ctx->pc = 0x2de1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12196)));
    // 0x2de1a8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DE1A8u;
    {
        const bool branch_taken_0x2de1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1A8u;
        // 0x2de1ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1a8) {
            ctx->pc = 0x2DE1F8u;
            goto label_2de1f8;
        }
    }
    ctx->pc = 0x2DE1B0u;
label_2de1b0:
    // 0x2de1b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de1b4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2de1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2de1b8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2de1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2de1bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1c0: 0xc0b4048  jal         func_2D0120
    ctx->pc = 0x2DE1C0u;
    SET_GPR_U32(ctx, 31, 0x2DE1C8u);
    ctx->pc = 0x2DE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1C0u;
    // 0x2de1c4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0120u, 0x2DE1C0u, 0x2DE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1C8u;
label_2de1c8:
    // 0x2de1c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1cc: 0xc0b4048  jal         func_2D0120
    ctx->pc = 0x2DE1CCu;
    SET_GPR_U32(ctx, 31, 0x2DE1D4u);
    ctx->pc = 0x2DE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1CCu;
    // 0x2de1d0: 0xae222fa0  sw          $v0, 0x2FA0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0120u, 0x2DE1CCu, 0x2DE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1D4u;
label_2de1d4:
    // 0x2de1d4: 0xae022fa4  sw          $v0, 0x2FA4($s0)
    ctx->pc = 0x2de1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12196), GPR_U32(ctx, 2));
    // 0x2de1d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1dc: 0xc0b4048  jal         func_2D0120
    ctx->pc = 0x2DE1DCu;
    SET_GPR_U32(ctx, 31, 0x2DE1E4u);
    ctx->pc = 0x2DE1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1DCu;
    // 0x2de1e0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0120u, 0x2DE1DCu, 0x2DE1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1E4u;
label_2de1e4:
    // 0x2de1e4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2de1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2de1e8: 0xac622fa8  sw          $v0, 0x2FA8($v1)
    ctx->pc = 0x2de1e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x382FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382FA8u, _value); } while (0);
    // 0x2de1ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2de1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2de1f0: 0xac402fac  sw          $zero, 0x2FAC($v0)
    ctx->pc = 0x2de1f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382FACu, _value); } while (0);
    // 0x2de1f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2de1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2de1f8:
    // 0x2de1f8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2de1f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de1fc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2de1fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de200: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE200u;
        // 0x2de204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE208u;
}
