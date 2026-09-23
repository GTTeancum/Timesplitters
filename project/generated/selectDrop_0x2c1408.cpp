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

// Function: selectDrop
// Address: 0x2c1408 - 0x2c147c
void selectDrop_0x2c1408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("selectDrop_0x2c1408");
#endif

    switch (ctx->pc) {
        case 0x2c1428u: goto label_2c1428;
        default: break;
    }

    ctx->pc = 0x2c1408u;

    // 0x2c1408: 0x8f8ab4f0  lw          $t2, -0x4B10($gp)
    ctx->pc = 0x2c1408u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948080)));
    // 0x2c140c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c140cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1410: 0x19400018  blez        $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C1410u;
    {
        const bool branch_taken_0x2c1410 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2C1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1410u;
        // 0x2c1414: 0x8c870160  lw          $a3, 0x160($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1410) {
            ctx->pc = 0x2C1474u;
            goto label_2c1474;
        }
    }
    ctx->pc = 0x2C1418u;
    // 0x2c1418: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2c1418u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2c141c: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x2c141cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x2c1420: 0x256923e8  addiu       $t1, $t3, 0x23E8
    ctx->pc = 0x2c1420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 9192));
    // 0x2c1424: 0x0  nop
    ctx->pc = 0x2c1424u;
    // NOP
label_2c1428:
    // 0x2c1428: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x2c1428u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c142c: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x2c142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2c1430: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c1430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c1434: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x2c1434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2c1438: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c1438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c143c: 0x1448000a  bne         $v0, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C143Cu;
    {
        const bool branch_taken_0x2c143c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2C1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C143Cu;
        // 0x2c1440: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c143c) {
            ctx->pc = 0x2C1468u;
            goto label_2c1468;
        }
    }
    ctx->pc = 0x2C1444u;
    // 0x2c1444: 0x8ce20a90  lw          $v0, 0xA90($a3)
    ctx->pc = 0x2c1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2704)));
    // 0x2c1448: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c1448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c144c: 0x3463ffbf  ori         $v1, $v1, 0xFFBF
    ctx->pc = 0x2c144cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65471);
    // 0x2c1450: 0xc92021  addu        $a0, $a2, $t1
    ctx->pc = 0x2c1450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2c1454: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2c1454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2c1458: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c1458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c145c: 0xace20a90  sw          $v0, 0xA90($a3)
    ctx->pc = 0x2c145cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2704), GPR_U32(ctx, 2));
    // 0x2c1460: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1460u;
        // 0x2c1464: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1468u;
label_2c1468:
    // 0x2c1468: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x2c1468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2c146c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C146Cu;
    {
        const bool branch_taken_0x2c146c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C146Cu;
        // 0x2c1470: 0x256923e8  addiu       $t1, $t3, 0x23E8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 9192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c146c) {
            ctx->pc = 0x2C1428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1428;
        }
    }
    ctx->pc = 0x2C1474u;
label_2c1474:
    // 0x2c1474: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1474u;
        // 0x2c1478: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C147Cu;
}
