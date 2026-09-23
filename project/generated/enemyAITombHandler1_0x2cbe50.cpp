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

// Function: enemyAITombHandler1
// Address: 0x2cbe50 - 0x2cbf00
void enemyAITombHandler1_0x2cbe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAITombHandler1_0x2cbe50");
#endif

    switch (ctx->pc) {
        case 0x2cbe78u: goto label_2cbe78;
        case 0x2cbebcu: goto label_2cbebc;
        case 0x2cbec8u: goto label_2cbec8;
        case 0x2cbed0u: goto label_2cbed0;
        case 0x2cbed8u: goto label_2cbed8;
        case 0x2cbee4u: goto label_2cbee4;
        case 0x2cbeecu: goto label_2cbeec;
        default: break;
    }

    ctx->pc = 0x2cbe50u;

    // 0x2cbe50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbe54: 0x8f829f78  lw          $v0, -0x6088($gp)
    ctx->pc = 0x2cbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942584)));
    // 0x2cbe58: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CBE58u;
    {
        const bool branch_taken_0x2cbe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE58u;
        // 0x2cbe5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe58) {
            ctx->pc = 0x2CBEF4u;
            goto label_2cbef4;
        }
    }
    ctx->pc = 0x2CBE60u;
    // 0x2cbe60: 0x8f899f74  lw          $t1, -0x608C($gp)
    ctx->pc = 0x2cbe60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cbe64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cbe64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe68: 0x1920000c  blez        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CBE68u;
    {
        const bool branch_taken_0x2cbe68 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2CBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE68u;
        // 0x2cbe6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe68) {
            ctx->pc = 0x2CBE9Cu;
            goto label_2cbe9c;
        }
    }
    ctx->pc = 0x2CBE70u;
    // 0x2cbe70: 0x8f88b238  lw          $t0, -0x4DC8($gp)
    ctx->pc = 0x2cbe70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cbe74: 0x0  nop
    ctx->pc = 0x2cbe74u;
    // NOP
label_2cbe78:
    // 0x2cbe78: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2cbe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cbe7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbe80: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x2cbe80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cbe84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cbe84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cbe88: 0xc9202a  slt         $a0, $a2, $t1
    ctx->pc = 0x2cbe88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2cbe8c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2cbe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cbe90: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x2cbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x2cbe94: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CBE94u;
    {
        const bool branch_taken_0x2cbe94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE94u;
        // 0x2cbe98: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe94) {
            ctx->pc = 0x2CBE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbe78;
        }
    }
    ctx->pc = 0x2CBE9Cu;
label_2cbe9c:
    // 0x2cbe9c: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CBE9Cu;
    {
        const bool branch_taken_0x2cbe9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE9Cu;
        // 0x2cbea0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe9c) {
            ctx->pc = 0x2CBEF4u;
            goto label_2cbef4;
        }
    }
    ctx->pc = 0x2CBEA4u;
    // 0x2cbea4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cbea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbea8: 0x8c43c4f4  lw          $v1, -0x3B0C($v0)
    ctx->pc = 0x2cbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952180)));
    // 0x2cbeac: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBEACu;
    {
        const bool branch_taken_0x2cbeac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEACu;
        // 0x2cbeb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbeac) {
            ctx->pc = 0x2CBEF0u;
            goto label_2cbef0;
        }
    }
    ctx->pc = 0x2CBEB4u;
    // 0x2cbeb4: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CBEB4u;
    SET_GPR_U32(ctx, 31, 0x2CBEBCu);
    ctx->pc = 0x2CBEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEB4u;
    // 0x2cbeb8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CBEB4u, 0x2CBEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEBCu;
label_2cbebc:
    // 0x2cbebc: 0x24040491  addiu       $a0, $zero, 0x491
    ctx->pc = 0x2cbebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1169));
    // 0x2cbec0: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CBEC0u;
    SET_GPR_U32(ctx, 31, 0x2CBEC8u);
    ctx->pc = 0x2CBEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEC0u;
    // 0x2cbec4: 0x240505e1  addiu       $a1, $zero, 0x5E1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1505));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CBEC0u, 0x2CBEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEC8u;
label_2cbec8:
    // 0x2cbec8: 0xc099392  jal         func_264E48
    ctx->pc = 0x2CBEC8u;
    SET_GPR_U32(ctx, 31, 0x2CBED0u);
    ctx->pc = 0x2CBECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEC8u;
    // 0x2cbecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E48u, 0x2CBEC8u, 0x2CBED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBED0u;
label_2cbed0:
    // 0x2cbed0: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CBED0u;
    SET_GPR_U32(ctx, 31, 0x2CBED8u);
    ctx->pc = 0x2CBED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBED0u;
    // 0x2cbed4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CBED0u, 0x2CBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBED8u;
label_2cbed8:
    // 0x2cbed8: 0x24040405  addiu       $a0, $zero, 0x405
    ctx->pc = 0x2cbed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x2cbedc: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CBEDCu;
    SET_GPR_U32(ctx, 31, 0x2CBEE4u);
    ctx->pc = 0x2CBEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEDCu;
    // 0x2cbee0: 0x24050594  addiu       $a1, $zero, 0x594 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CBEDCu, 0x2CBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEE4u;
label_2cbee4:
    // 0x2cbee4: 0xc099392  jal         func_264E48
    ctx->pc = 0x2CBEE4u;
    SET_GPR_U32(ctx, 31, 0x2CBEECu);
    ctx->pc = 0x2CBEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEE4u;
    // 0x2cbee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E48u, 0x2CBEE4u, 0x2CBEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEECu;
label_2cbeec:
    // 0x2cbeec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbef0:
    // 0x2cbef0: 0xaf829f78  sw          $v0, -0x6088($gp)
    ctx->pc = 0x2cbef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 2));
label_2cbef4:
    // 0x2cbef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEF8u;
        // 0x2cbefc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBF00u;
}
