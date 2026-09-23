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

// Function: bossCheckParm
// Address: 0x2000c0 - 0x20013c
void bossCheckParm_0x2000c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bossCheckParm_0x2000c0");
#endif

    switch (ctx->pc) {
        case 0x2000e8u: goto label_2000e8;
        case 0x2000fcu: goto label_2000fc;
        default: break;
    }

    ctx->pc = 0x2000c0u;

    // 0x2000c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2000c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2000c4: 0x8f8293b0  lw          $v0, -0x6C50($gp)
    ctx->pc = 0x2000c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939568)));
    // 0x2000c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2000c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2000cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2000ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2000d0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2000d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2000d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2000d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2000d8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2000d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2000dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2000DCu;
    {
        const bool branch_taken_0x2000dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2000E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000DCu;
        // 0x2000e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000dc) {
            ctx->pc = 0x200120u;
            goto label_200120;
        }
    }
    ctx->pc = 0x2000E4u;
    // 0x2000e4: 0x8f8393b4  lw          $v1, -0x6C4C($gp)
    ctx->pc = 0x2000e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939572)));
label_2000e8:
    // 0x2000e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2000e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2000ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2000ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2000f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2000f4: 0xc0b96aa  jal         func_2E5AA8
    ctx->pc = 0x2000F4u;
    SET_GPR_U32(ctx, 31, 0x2000FCu);
    ctx->pc = 0x2000F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2000F4u;
    // 0x2000f8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5AA8u, 0x2000F4u, 0x2000FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000FCu;
label_2000fc:
    // 0x2000fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2000FCu;
    {
        const bool branch_taken_0x2000fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000FCu;
        // 0x200100: 0x8f8293b0  lw          $v0, -0x6C50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000fc) {
            ctx->pc = 0x200110u;
            goto label_200110;
        }
    }
    ctx->pc = 0x200104u;
    // 0x200104: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x200104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200108: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x200108u;
    {
        const bool branch_taken_0x200108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200108u;
        // 0x20010c: 0xaf90b610  sw          $s0, -0x49F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948368), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200108) {
            ctx->pc = 0x200128u;
            goto label_200128;
        }
    }
    ctx->pc = 0x200110u;
label_200110:
    // 0x200110: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x200110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x200114: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x200114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x200118: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x200118u;
    {
        const bool branch_taken_0x200118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200118u;
        // 0x20011c: 0x8f8393b4  lw          $v1, -0x6C4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200118) {
            ctx->pc = 0x2000E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2000e8;
        }
    }
    ctx->pc = 0x200120u;
label_200120:
    // 0x200120: 0xaf80b610  sw          $zero, -0x49F0($gp)
    ctx->pc = 0x200120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948368), GPR_U32(ctx, 0));
    // 0x200124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200128:
    // 0x200128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x200128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20012c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20012cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200134: 0x3e00008  jr          $ra
    ctx->pc = 0x200134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200134u;
        // 0x200138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20013Cu;
}
