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

// Function: enemyStoryPlayerAtPad
// Address: 0x2cbb40 - 0x2cbbc4
void enemyStoryPlayerAtPad_0x2cbb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyStoryPlayerAtPad_0x2cbb40");
#endif

    switch (ctx->pc) {
        case 0x2cbb70u: goto label_2cbb70;
        case 0x2cbb80u: goto label_2cbb80;
        default: break;
    }

    ctx->pc = 0x2cbb40u;

    // 0x2cbb40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cbb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cbb44: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2cbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cbb48: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2cbb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2cbb4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2cbb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cbb50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cbb50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cbb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cbb58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cbb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cbb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cbb60: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBB60u;
    {
        const bool branch_taken_0x2cbb60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB60u;
        // 0x2cbb64: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb60) {
            ctx->pc = 0x2CBBA4u;
            goto label_2cbba4;
        }
    }
    ctx->pc = 0x2CBB68u;
    // 0x2cbb68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cbb68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb6c: 0x0  nop
    ctx->pc = 0x2cbb6cu;
    // NOP
label_2cbb70:
    // 0x2cbb70: 0x8f90b238  lw          $s0, -0x4DC8($gp)
    ctx->pc = 0x2cbb70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cbb74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cbb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb78: 0xc099380  jal         func_264E00
    ctx->pc = 0x2CBB78u;
    SET_GPR_U32(ctx, 31, 0x2CBB80u);
    ctx->pc = 0x2CBB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB78u;
    // 0x2cbb7c: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2CBB78u, 0x2CBB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB80u;
label_2cbb80:
    // 0x2cbb80: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x2cbb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x2cbb84: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBB84u;
    {
        const bool branch_taken_0x2cbb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CBB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB84u;
        // 0x2cbb88: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb84) {
            ctx->pc = 0x2CBB94u;
            goto label_2cbb94;
        }
    }
    ctx->pc = 0x2CBB8Cu;
    // 0x2cbb8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBB8Cu;
    {
        const bool branch_taken_0x2cbb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB8Cu;
        // 0x2cbb90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb8c) {
            ctx->pc = 0x2CBBA8u;
            goto label_2cbba8;
        }
    }
    ctx->pc = 0x2CBB94u;
label_2cbb94:
    // 0x2cbb94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cbb94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cbb98: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2cbb98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cbb9c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CBB9Cu;
    {
        const bool branch_taken_0x2cbb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB9Cu;
        // 0x2cbba0: 0x26521210  addiu       $s2, $s2, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb9c) {
            ctx->pc = 0x2CBB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbb70;
        }
    }
    ctx->pc = 0x2CBBA4u;
label_2cbba4:
    // 0x2cbba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbba8:
    // 0x2cbba8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cbba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cbbac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2cbbacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbbb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cbbb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbbb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2cbbb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbbb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cbbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBBCu;
        // 0x2cbbc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBBC4u;
}
