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

// Function: emPrintStats
// Address: 0x2b6ba0 - 0x2b6c1c
void emPrintStats_0x2b6ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emPrintStats_0x2b6ba0");
#endif

    switch (ctx->pc) {
        case 0x2b6bb8u: goto label_2b6bb8;
        case 0x2b6bf8u: goto label_2b6bf8;
        default: break;
    }

    ctx->pc = 0x2b6ba0u;

    // 0x2b6ba0: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x2b6ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b6ba4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b6ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ba8: 0x8ca21a10  lw          $v0, 0x1A10($a1)
    ctx->pc = 0x2b6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6672)));
    // 0x2b6bac: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B6BACu;
    {
        const bool branch_taken_0x2b6bac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BACu;
        // 0x2b6bb0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bac) {
            ctx->pc = 0x2B6BE8u;
            goto label_2b6be8;
        }
    }
    ctx->pc = 0x2B6BB4u;
    // 0x2b6bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6bb8:
    // 0x2b6bb8: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2b6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b6bbc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2b6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b6bc0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2b6bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6bc4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6BC4u;
    {
        const bool branch_taken_0x2b6bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6bc4) {
            ctx->pc = 0x2B6BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6BC4u;
            // 0x2b6bc8: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6BCCu;
            goto label_2b6bcc;
        }
    }
    ctx->pc = 0x2B6BCCu;
label_2b6bcc:
    // 0x2b6bcc: 0x8ca21a10  lw          $v0, 0x1A10($a1)
    ctx->pc = 0x2b6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6672)));
    // 0x2b6bd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b6bd4: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2b6bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2b6bd8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2b6bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b6bdc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B6BDCu;
    {
        const bool branch_taken_0x2b6bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BDCu;
        // 0x2b6be0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bdc) {
            ctx->pc = 0x2B6BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6bb8;
        }
    }
    ctx->pc = 0x2B6BE4u;
    // 0x2b6be4: 0x8ca21a10  lw          $v0, 0x1A10($a1)
    ctx->pc = 0x2b6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6672)));
label_2b6be8:
    // 0x2b6be8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2b6be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b6bec: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6BECu;
    {
        const bool branch_taken_0x2b6bec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2b6bec) {
            ctx->pc = 0x2B6C14u;
            goto label_2b6c14;
        }
    }
    ctx->pc = 0x2B6BF4u;
    // 0x2b6bf4: 0x0  nop
    ctx->pc = 0x2b6bf4u;
    // NOP
label_2b6bf8:
    // 0x2b6bf8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b6bfc: 0x0  nop
    ctx->pc = 0x2b6bfcu;
    // NOP
    // 0x2b6c00: 0x0  nop
    ctx->pc = 0x2b6c00u;
    // NOP
    // 0x2b6c04: 0x0  nop
    ctx->pc = 0x2b6c04u;
    // NOP
    // 0x2b6c08: 0x0  nop
    ctx->pc = 0x2b6c08u;
    // NOP
    // 0x2b6c0c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B6C0Cu;
    {
        const bool branch_taken_0x2b6c0c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2b6c0c) {
            ctx->pc = 0x2B6BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6bf8;
        }
    }
    ctx->pc = 0x2B6C14u;
label_2b6c14:
    // 0x2b6c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6C1Cu;
}
