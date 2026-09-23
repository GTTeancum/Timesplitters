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

// Function: fs_read_intr
// Address: 0x2d3800 - 0x2d3890
void fs_read_intr_0x2d3800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fs_read_intr_0x2d3800");
#endif

    switch (ctx->pc) {
        case 0x2d3828u: goto label_2d3828;
        case 0x2d3868u: goto label_2d3868;
        default: break;
    }

    ctx->pc = 0x2d3800u;

    // 0x2d3800: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2d3800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2d3804: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x2d3804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2d3808: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d3808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d380c: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D380Cu;
    {
        const bool branch_taken_0x2d380c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d380c) {
            ctx->pc = 0x2D3810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D380Cu;
            // 0x2d3810: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D384Cu;
            goto label_2d384c;
        }
    }
    ctx->pc = 0x2D3814u;
    // 0x2d3814: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x2d3814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2d3818: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D3818u;
    {
        const bool branch_taken_0x2d3818 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3818u;
        // 0x2d381c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3818) {
            ctx->pc = 0x2D3848u;
            goto label_2d3848;
        }
    }
    ctx->pc = 0x2D3820u;
    // 0x2d3820: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x2d3820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2d3824: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2d3824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2d3828:
    // 0x2d3828: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2d3828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2d382c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d382cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3830: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d3830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d3834: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2d3834u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d3838: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d3838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d383c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2d383cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3840: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D3840u;
    {
        const bool branch_taken_0x2d3840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3840u;
        // 0x2d3844: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3840) {
            ctx->pc = 0x2D3828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3828;
        }
    }
    ctx->pc = 0x2D3848u;
label_2d3848:
    // 0x2d3848: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2d3848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2d384c:
    // 0x2d384c: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D384Cu;
    {
        const bool branch_taken_0x2d384c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d384c) {
            ctx->pc = 0x2D3888u;
            goto label_2d3888;
        }
    }
    ctx->pc = 0x2D3854u;
    // 0x2d3854: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x2d3854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2d3858: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D3858u;
    {
        const bool branch_taken_0x2d3858 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3858u;
        // 0x2d385c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3858) {
            ctx->pc = 0x2D3888u;
            goto label_2d3888;
        }
    }
    ctx->pc = 0x2D3860u;
    // 0x2d3860: 0x24c80050  addiu       $t0, $a2, 0x50
    ctx->pc = 0x2d3860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x2d3864: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2d3864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2d3868:
    // 0x2d3868: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2d3868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2d386c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d386cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3870: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d3870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d3874: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2d3874u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d3878: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2d3878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d387c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2d387cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3880: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D3880u;
    {
        const bool branch_taken_0x2d3880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3880u;
        // 0x2d3884: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3880) {
            ctx->pc = 0x2D3868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3868;
        }
    }
    ctx->pc = 0x2D3888u;
label_2d3888:
    // 0x2d3888: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3890u;
}
