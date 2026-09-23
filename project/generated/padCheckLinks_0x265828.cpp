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

// Function: padCheckLinks
// Address: 0x265828 - 0x2658ec
void padCheckLinks_0x265828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padCheckLinks_0x265828");
#endif

    switch (ctx->pc) {
        case 0x265850u: goto label_265850;
        case 0x265878u: goto label_265878;
        case 0x2658c8u: goto label_2658c8;
        default: break;
    }

    ctx->pc = 0x265828u;

    // 0x265828: 0x8f88a348  lw          $t0, -0x5CB8($gp)
    ctx->pc = 0x265828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x26582c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x265830: 0x1102002c  beq         $t0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x265830u;
    {
        const bool branch_taken_0x265830 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x265830) {
            ctx->pc = 0x2658E4u;
            goto label_2658e4;
        }
    }
    ctx->pc = 0x265838u;
    // 0x265838: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x265838u;
    {
        const bool branch_taken_0x265838 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x26583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265838u;
        // 0x26583c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265838) {
            ctx->pc = 0x2658B4u;
            goto label_2658b4;
        }
    }
    ctx->pc = 0x265840u;
    // 0x265840: 0x8f89a2ec  lw          $t1, -0x5D14($gp)
    ctx->pc = 0x265840u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x265844: 0x8f87a34c  lw          $a3, -0x5CB4($gp)
    ctx->pc = 0x265844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x265848: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x265848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26584c: 0x0  nop
    ctx->pc = 0x26584cu;
    // NOP
label_265850:
    // 0x265850: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x265850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x265854: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x265854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x265858: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x265858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26585c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26585cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x265860: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x265860u;
    {
        const bool branch_taken_0x265860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265860) {
            ctx->pc = 0x265864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265860u;
            // 0x265864: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2658A0u;
            goto label_2658a0;
        }
    }
    ctx->pc = 0x265868u;
    // 0x265868: 0x18e0000c  blez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x265868u;
    {
        const bool branch_taken_0x265868 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x26586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265868u;
        // 0x26586c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265868) {
            ctx->pc = 0x26589Cu;
            goto label_26589c;
        }
    }
    ctx->pc = 0x265870u;
    // 0x265870: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x265870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x265874: 0x0  nop
    ctx->pc = 0x265874u;
    // NOP
label_265878:
    // 0x265878: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x265878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26587c: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x26587cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x265880: 0x0  nop
    ctx->pc = 0x265880u;
    // NOP
    // 0x265884: 0x0  nop
    ctx->pc = 0x265884u;
    // NOP
    // 0x265888: 0x0  nop
    ctx->pc = 0x265888u;
    // NOP
    // 0x26588c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26588Cu;
    {
        const bool branch_taken_0x26588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26588c) {
            ctx->pc = 0x265878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265878;
        }
    }
    ctx->pc = 0x265894u;
    // 0x265894: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265894u;
    {
        const bool branch_taken_0x265894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265894u;
        // 0x265898: 0xa8102a  slt         $v0, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265894) {
            ctx->pc = 0x2658A4u;
            goto label_2658a4;
        }
    }
    ctx->pc = 0x26589Cu;
label_26589c:
    // 0x26589c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26589cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2658a0:
    // 0x2658a0: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x2658a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2658a4:
    // 0x2658a4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2658A4u;
    {
        const bool branch_taken_0x2658a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2658A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658A4u;
        // 0x2658a8: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658a4) {
            ctx->pc = 0x265850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265850;
        }
    }
    ctx->pc = 0x2658ACu;
    // 0x2658ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2658ACu;
    {
        const bool branch_taken_0x2658ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658ACu;
        // 0x2658b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658ac) {
            ctx->pc = 0x2658BCu;
            goto label_2658bc;
        }
    }
    ctx->pc = 0x2658B4u;
label_2658b4:
    // 0x2658b4: 0x8f87a34c  lw          $a3, -0x5CB4($gp)
    ctx->pc = 0x2658b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x2658b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2658b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2658bc:
    // 0x2658bc: 0x18e00009  blez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2658BCu;
    {
        const bool branch_taken_0x2658bc = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2658bc) {
            ctx->pc = 0x2658E4u;
            goto label_2658e4;
        }
    }
    ctx->pc = 0x2658C4u;
    // 0x2658c4: 0x0  nop
    ctx->pc = 0x2658c4u;
    // NOP
label_2658c8:
    // 0x2658c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2658c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2658cc: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x2658ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2658d0: 0x0  nop
    ctx->pc = 0x2658d0u;
    // NOP
    // 0x2658d4: 0x0  nop
    ctx->pc = 0x2658d4u;
    // NOP
    // 0x2658d8: 0x0  nop
    ctx->pc = 0x2658d8u;
    // NOP
    // 0x2658dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2658DCu;
    {
        const bool branch_taken_0x2658dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2658dc) {
            ctx->pc = 0x2658C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2658c8;
        }
    }
    ctx->pc = 0x2658E4u;
label_2658e4:
    // 0x2658e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2658E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2658E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2658ECu;
}
