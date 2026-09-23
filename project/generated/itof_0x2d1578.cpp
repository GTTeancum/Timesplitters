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

// Function: itof
// Address: 0x2d1578 - 0x2d1640
void itof_0x2d1578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("itof_0x2d1578");
#endif

    switch (ctx->pc) {
        case 0x2d15b8u: goto label_2d15b8;
        case 0x2d1614u: goto label_2d1614;
        case 0x2d1628u: goto label_2d1628;
        case 0x2d1634u: goto label_2d1634;
        default: break;
    }

    ctx->pc = 0x2d1578u;

    // 0x2d1578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d157c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d157cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1584: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1584u;
    {
        const bool branch_taken_0x2d1584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1584u;
        // 0x2d1588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1584) {
            ctx->pc = 0x2D1594u;
            goto label_2d1594;
        }
    }
    ctx->pc = 0x2D158Cu;
    // 0x2d158c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D158Cu;
    {
        const bool branch_taken_0x2d158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D158Cu;
        // 0x2d1590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d158c) {
            ctx->pc = 0x2D1634u;
            goto label_2d1634;
        }
    }
    ctx->pc = 0x2D1594u;
label_2d1594:
    // 0x2d1594: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1594u;
    {
        const bool branch_taken_0x2d1594 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2D1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1594u;
        // 0x2d1598: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1594) {
            ctx->pc = 0x2D15A8u;
            goto label_2d15a8;
        }
    }
    ctx->pc = 0x2D159Cu;
    // 0x2d159c: 0x4182f  dsubu       $v1, $zero, $a0
    ctx->pc = 0x2d159cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x2d15a0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2d15a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d15a4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2d15a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
label_2d15a8:
    // 0x2d15a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d15ac: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D15ACu;
    {
        const bool branch_taken_0x2d15ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d15ac) {
            ctx->pc = 0x2D15B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D15ACu;
            // 0x2d15b0: 0x28a20035  slti        $v0, $a1, 0x35 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)53) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D15D8u;
            goto label_2d15d8;
        }
    }
    ctx->pc = 0x2D15B4u;
    // 0x2d15b4: 0x0  nop
    ctx->pc = 0x2d15b4u;
    // NOP
label_2d15b8:
    // 0x2d15b8: 0x3187b  dsra        $v1, $v1, 1
    ctx->pc = 0x2d15b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 1);
    // 0x2d15bc: 0x0  nop
    ctx->pc = 0x2d15bcu;
    // NOP
    // 0x2d15c0: 0x0  nop
    ctx->pc = 0x2d15c0u;
    // NOP
    // 0x2d15c4: 0x0  nop
    ctx->pc = 0x2d15c4u;
    // NOP
    // 0x2d15c8: 0x0  nop
    ctx->pc = 0x2d15c8u;
    // NOP
    // 0x2d15cc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D15CCu;
    {
        const bool branch_taken_0x2d15cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15CCu;
        // 0x2d15d0: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d15cc) {
            ctx->pc = 0x2D15B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d15b8;
        }
    }
    ctx->pc = 0x2D15D4u;
    // 0x2d15d4: 0x28a20035  slti        $v0, $a1, 0x35
    ctx->pc = 0x2d15d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)53) ? 1 : 0);
label_2d15d8:
    // 0x2d15d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D15D8u;
    {
        const bool branch_taken_0x2d15d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15D8u;
        // 0x2d15dc: 0x64a303ff  daddiu      $v1, $a1, 0x3FF (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d15d8) {
            ctx->pc = 0x2D15F8u;
            goto label_2d15f8;
        }
    }
    ctx->pc = 0x2D15E0u;
    // 0x2d15e0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2d15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d15e4: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x2d15e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x2d15e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d15e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d15ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2d15ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d15f0: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x2d15f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2d15f4: 0x4233b  dsra        $a0, $a0, 12
    ctx->pc = 0x2d15f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 12);
label_2d15f8:
    // 0x2d15f8: 0x3153c  dsll32      $v0, $v1, 20
    ctx->pc = 0x2d15f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 20));
    // 0x2d15fc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2d15fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2d1600: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2d1600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d1604: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1604u;
    {
        const bool branch_taken_0x2d1604 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1604u;
        // 0x2d1608: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1604) {
            ctx->pc = 0x2D161Cu;
            goto label_2d161c;
        }
    }
    ctx->pc = 0x2D160Cu;
    // 0x2d160c: 0xc0b86d8  jal         func_2E1B60
    ctx->pc = 0x2D160Cu;
    SET_GPR_U32(ctx, 31, 0x2D1614u);
    ctx->pc = 0x2E1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1B60u, 0x2D160Cu, 0x2D1614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1614u;
label_2d1614:
    // 0x2d1614: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1614u;
    {
        const bool branch_taken_0x2d1614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1614u;
        // 0x2d1618: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1614) {
            ctx->pc = 0x2D1638u;
            goto label_2d1638;
        }
    }
    ctx->pc = 0x2D161Cu;
label_2d161c:
    // 0x2d161c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2d161cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d1620: 0xc0b86d8  jal         func_2E1B60
    ctx->pc = 0x2D1620u;
    SET_GPR_U32(ctx, 31, 0x2D1628u);
    ctx->pc = 0x2D1624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1620u;
    // 0x2d1624: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1B60u, 0x2D1620u, 0x2D1628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1628u;
label_2d1628:
    // 0x2d1628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d162c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D162Cu;
    SET_GPR_U32(ctx, 31, 0x2D1634u);
    ctx->pc = 0x2D1630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D162Cu;
    // 0x2d1630: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D162Cu, 0x2D1634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1634u;
label_2d1634:
    // 0x2d1634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1638:
    // 0x2d1638: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1638u;
        // 0x2d163c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1640u;
}
