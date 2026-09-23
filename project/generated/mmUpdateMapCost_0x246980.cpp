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

// Function: mmUpdateMapCost
// Address: 0x246980 - 0x246a40
void mmUpdateMapCost_0x246980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmUpdateMapCost_0x246980");
#endif

    switch (ctx->pc) {
        case 0x246994u: goto label_246994;
        case 0x2469b8u: goto label_2469b8;
        case 0x2469dcu: goto label_2469dc;
        default: break;
    }

    ctx->pc = 0x246980u;

    // 0x246980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x246980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x246984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x246984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x246988: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x246988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24698c: 0xc092308  jal         func_248C20
    ctx->pc = 0x24698Cu;
    SET_GPR_U32(ctx, 31, 0x246994u);
    ctx->pc = 0x246990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24698Cu;
    // 0x246990: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248C20u, 0x24698Cu, 0x246994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246994u;
label_246994:
    // 0x246994: 0x8f83a0f8  lw          $v1, -0x5F08($gp)
    ctx->pc = 0x246994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x246998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24699c: 0xaf82a0ec  sw          $v0, -0x5F14($gp)
    ctx->pc = 0x24699cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942956), GPR_U32(ctx, 2));
    // 0x2469a0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2469A0u;
    {
        const bool branch_taken_0x2469a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469A0u;
        // 0x2469a4: 0xaf80a0f0  sw          $zero, -0x5F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469a0) {
            ctx->pc = 0x2469F4u;
            goto label_2469f4;
        }
    }
    ctx->pc = 0x2469A8u;
    // 0x2469a8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2469a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2469ac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2469acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2469b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2469b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2469b4: 0x0  nop
    ctx->pc = 0x2469b4u;
    // NOP
label_2469b8:
    // 0x2469b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2469b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2469bc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2469bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2469c0: 0x14710009  bne         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2469C0u;
    {
        const bool branch_taken_0x2469c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2469C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469C0u;
        // 0x2469c4: 0xaf85a0f0  sw          $a1, -0x5F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942960), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469c0) {
            ctx->pc = 0x2469E8u;
            goto label_2469e8;
        }
    }
    ctx->pc = 0x2469C8u;
    // 0x2469c8: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2469c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2469cc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2469CCu;
    {
        const bool branch_taken_0x2469cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2469cc) {
            ctx->pc = 0x2469D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2469CCu;
            // 0x2469d0: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2469ECu;
            goto label_2469ec;
        }
    }
    ctx->pc = 0x2469D4u;
    // 0x2469d4: 0xc092326  jal         func_248C98
    ctx->pc = 0x2469D4u;
    SET_GPR_U32(ctx, 31, 0x2469DCu);
    ctx->pc = 0x2469D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469D4u;
    // 0x2469d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248C98u, 0x2469D4u, 0x2469DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469DCu;
label_2469dc:
    // 0x2469dc: 0x8f85a0f0  lw          $a1, -0x5F10($gp)
    ctx->pc = 0x2469dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942960)));
    // 0x2469e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2469e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2469e4: 0xaf85a0f0  sw          $a1, -0x5F10($gp)
    ctx->pc = 0x2469e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942960), GPR_U32(ctx, 5));
label_2469e8:
    // 0x2469e8: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x2469e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2469ec:
    // 0x2469ec: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2469ECu;
    {
        const bool branch_taken_0x2469ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2469ec) {
            ctx->pc = 0x2469F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2469ECu;
            // 0x2469f0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2469B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2469b8;
        }
    }
    ctx->pc = 0x2469F4u;
label_2469f4:
    // 0x2469f4: 0x8f82a0ec  lw          $v0, -0x5F14($gp)
    ctx->pc = 0x2469f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942956)));
    // 0x2469f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2469f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2469fc: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x2469fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x246a00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246A00u;
    {
        const bool branch_taken_0x246a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A00u;
        // 0x246a04: 0x8f83a0d8  lw          $v1, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a00) {
            ctx->pc = 0x246A1Cu;
            goto label_246a1c;
        }
    }
    ctx->pc = 0x246A08u;
    // 0x246a08: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x246a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x246a0c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x246a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x246a10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x246a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x246a14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x246A14u;
    {
        const bool branch_taken_0x246a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A14u;
        // 0x246a18: 0xaf82a0d8  sw          $v0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a14) {
            ctx->pc = 0x246A2Cu;
            goto label_246a2c;
        }
    }
    ctx->pc = 0x246A1Cu;
label_246a1c:
    // 0x246a1c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x246a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x246a20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246a24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x246a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246a28: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x246a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
label_246a2c:
    // 0x246a2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x246a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246a30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x246a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246a34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246a38: 0x3e00008  jr          $ra
    ctx->pc = 0x246A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A38u;
        // 0x246a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246A40u;
}
