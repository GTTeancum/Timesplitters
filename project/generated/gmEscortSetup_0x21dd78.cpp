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

// Function: gmEscortSetup
// Address: 0x21dd78 - 0x21de24
void gmEscortSetup_0x21dd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gmEscortSetup_0x21dd78");
#endif

    switch (ctx->pc) {
        case 0x21dd9cu: goto label_21dd9c;
        case 0x21ddc0u: goto label_21ddc0;
        case 0x21ddc4u: goto label_21ddc4;
        case 0x21dde4u: goto label_21dde4;
        case 0x21de00u: goto label_21de00;
        default: break;
    }

    ctx->pc = 0x21dd78u;

    // 0x21dd78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21dd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21dd7c: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x21dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21dd80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21dd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21dd84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21dd88: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21dd8c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21dd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21dd90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21dd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21dd94: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x21DD94u;
    SET_GPR_U32(ctx, 31, 0x21DD9Cu);
    ctx->pc = 0x21DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD94u;
    // 0x21dd98: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x21DD94u, 0x21DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD9Cu;
label_21dd9c:
    // 0x21dd9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21dd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dda0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21dda4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x21DDA4u;
    {
        const bool branch_taken_0x21dda4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDA4u;
        // 0x21dda8: 0xaf82b708  sw          $v0, -0x48F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dda4) {
            ctx->pc = 0x21DE04u;
            goto label_21de04;
        }
    }
    ctx->pc = 0x21DDACu;
    // 0x21ddac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21ddacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ddb0: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x21ddb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21ddb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21DDB4u;
    {
        const bool branch_taken_0x21ddb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDB4u;
        // 0x21ddb8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddb4) {
            ctx->pc = 0x21DDC4u;
            goto label_21ddc4;
        }
    }
    ctx->pc = 0x21DDBCu;
    // 0x21ddbc: 0x0  nop
    ctx->pc = 0x21ddbcu;
    // NOP
label_21ddc0:
    // 0x21ddc0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21ddc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_21ddc4:
    // 0x21ddc4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x21ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x21ddc8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21ddc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21ddcc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21DDCCu;
    {
        const bool branch_taken_0x21ddcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDCCu;
        // 0x21ddd0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddcc) {
            ctx->pc = 0x21DE08u;
            goto label_21de08;
        }
    }
    ctx->pc = 0x21DDD4u;
    // 0x21ddd4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x21ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21ddd8: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x21ddd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x21dddc: 0xc08a362  jal         func_228D88
    ctx->pc = 0x21DDDCu;
    SET_GPR_U32(ctx, 31, 0x21DDE4u);
    ctx->pc = 0x21DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDDCu;
    // 0x21dde0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x21DDDCu, 0x21DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDE4u;
label_21dde4:
    // 0x21dde4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21DDE4u;
    {
        const bool branch_taken_0x21dde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDE4u;
        // 0x21dde8: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dde4) {
            ctx->pc = 0x21DDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ddc0;
        }
    }
    ctx->pc = 0x21DDECu;
    // 0x21ddec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21ddf0: 0x1454fff4  bne         $v0, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x21DDF0u;
    {
        const bool branch_taken_0x21ddf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x21DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDF0u;
        // 0x21ddf4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddf0) {
            ctx->pc = 0x21DDC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ddc4;
        }
    }
    ctx->pc = 0x21DDF8u;
    // 0x21ddf8: 0xc099380  jal         func_264E00
    ctx->pc = 0x21DDF8u;
    SET_GPR_U32(ctx, 31, 0x21DE00u);
    ctx->pc = 0x21DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDF8u;
    // 0x21ddfc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x21DDF8u, 0x21DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE00u;
label_21de00:
    // 0x21de00: 0xaf82b708  sw          $v0, -0x48F8($gp)
    ctx->pc = 0x21de00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948616), GPR_U32(ctx, 2));
label_21de04:
    // 0x21de04: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21de04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21de08:
    // 0x21de08: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21de08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21de0c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21de0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21de10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21de10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21de14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21de14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21de18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21de18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21de1c: 0x3e00008  jr          $ra
    ctx->pc = 0x21DE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE1Cu;
        // 0x21de20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DE24u;
}
