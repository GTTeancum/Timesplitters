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

// Function: enemySleep
// Address: 0x2cb290 - 0x2cb308
void enemySleep_0x2cb290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemySleep_0x2cb290");
#endif

    switch (ctx->pc) {
        case 0x2cb2bcu: goto label_2cb2bc;
        case 0x2cb2c8u: goto label_2cb2c8;
        case 0x2cb2d8u: goto label_2cb2d8;
        default: break;
    }

    ctx->pc = 0x2cb290u;

    // 0x2cb290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb294: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2cb294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2cb298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb29c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb2a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb2a4: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x2cb2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2cb2a8: 0x8c640aa4  lw          $a0, 0xAA4($v1)
    ctx->pc = 0x2cb2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2724)));
    // 0x2cb2ac: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB2ACu;
    {
        const bool branch_taken_0x2cb2ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2ACu;
        // 0x2cb2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2ac) {
            ctx->pc = 0x2CB2D0u;
            goto label_2cb2d0;
        }
    }
    ctx->pc = 0x2CB2B4u;
    // 0x2cb2b4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CB2B4u;
    SET_GPR_U32(ctx, 31, 0x2CB2BCu);
    ctx->pc = 0x2CB2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2B4u;
    // 0x2cb2b8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CB2B4u, 0x2CB2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2BCu;
label_2cb2bc:
    // 0x2cb2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb2c0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CB2C0u;
    SET_GPR_U32(ctx, 31, 0x2CB2C8u);
    ctx->pc = 0x2CB2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2C0u;
    // 0x2cb2c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CB2C0u, 0x2CB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2C8u;
label_2cb2c8:
    // 0x2cb2c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB2C8u;
    {
        const bool branch_taken_0x2cb2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2C8u;
        // 0x2cb2cc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2c8) {
            ctx->pc = 0x2CB2DCu;
            goto label_2cb2dc;
        }
    }
    ctx->pc = 0x2CB2D0u;
label_2cb2d0:
    // 0x2cb2d0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CB2D0u;
    SET_GPR_U32(ctx, 31, 0x2CB2D8u);
    ctx->pc = 0x2CB2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2D0u;
    // 0x2cb2d4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CB2D0u, 0x2CB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2D8u;
label_2cb2d8:
    // 0x2cb2d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cb2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cb2dc:
    // 0x2cb2dc: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x2cb2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
    // 0x2cb2e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cb2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cb2e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB2E4u;
    {
        const bool branch_taken_0x2cb2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2E4u;
        // 0x2cb2e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2e4) {
            ctx->pc = 0x2CB2FCu;
            goto label_2cb2fc;
        }
    }
    ctx->pc = 0x2CB2ECu;
    // 0x2cb2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb2f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb2f4: 0x80b2cc2  j           func_2CB308
    ctx->pc = 0x2CB2F4u;
    ctx->pc = 0x2CB2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2F4u;
    // 0x2cb2f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB308u;
    enemyFromSleepToAwake_0x2cb308(rdram, ctx, runtime); return;
    ctx->pc = 0x2CB2FCu;
label_2cb2fc:
    // 0x2cb2fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb300: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB300u;
        // 0x2cb304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB308u;
}
