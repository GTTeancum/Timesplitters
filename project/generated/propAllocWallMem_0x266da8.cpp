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

// Function: propAllocWallMem
// Address: 0x266da8 - 0x266e44
void propAllocWallMem_0x266da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propAllocWallMem_0x266da8");
#endif

    switch (ctx->pc) {
        case 0x266dd8u: goto label_266dd8;
        case 0x266e1cu: goto label_266e1c;
        default: break;
    }

    ctx->pc = 0x266da8u;

    // 0x266da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x266da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x266dac: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x266dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x266db0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x266db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x266db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266db8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266dbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x266dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x266dc0: 0x2a231001  slti        $v1, $s1, 0x1001
    ctx->pc = 0x266dc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x266dc4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x266DC4u;
    {
        const bool branch_taken_0x266dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x266DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DC4u;
        // 0x266dc8: 0x245038c0  addiu       $s0, $v0, 0x38C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dc4) {
            ctx->pc = 0x266DD8u;
            goto label_266dd8;
        }
    }
    ctx->pc = 0x266DCCu;
    // 0x266dcc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x266DCCu;
    {
        const bool branch_taken_0x266dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DCCu;
        // 0x266dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dcc) {
            ctx->pc = 0x266E30u;
            goto label_266e30;
        }
    }
    ctx->pc = 0x266DD4u;
    // 0x266dd4: 0x0  nop
    ctx->pc = 0x266dd4u;
    // NOP
label_266dd8:
    // 0x266dd8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x266dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x266ddc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x266ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x266de0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x266de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x266de4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x266de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x266de8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x266DE8u;
    {
        const bool branch_taken_0x266de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266de8) {
            ctx->pc = 0x266DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266DE8u;
            // 0x266dec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266E04u;
            goto label_266e04;
        }
    }
    ctx->pc = 0x266DF0u;
    // 0x266df0: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x266df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x266df4: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x266df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x266df8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x266df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x266dfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x266DFCu;
    {
        const bool branch_taken_0x266dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DFCu;
        // 0x266e00: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dfc) {
            ctx->pc = 0x266E30u;
            goto label_266e30;
        }
    }
    ctx->pc = 0x266E04u;
label_266e04:
    // 0x266e04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266E04u;
    {
        const bool branch_taken_0x266e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E04u;
        // 0x266e08: 0x24041010  addiu       $a0, $zero, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e04) {
            ctx->pc = 0x266E14u;
            goto label_266e14;
        }
    }
    ctx->pc = 0x266E0Cu;
    // 0x266e0c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x266E0Cu;
    {
        const bool branch_taken_0x266e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E0Cu;
        // 0x266e10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e0c) {
            ctx->pc = 0x266DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266dd8;
        }
    }
    ctx->pc = 0x266E14u;
label_266e14:
    // 0x266e14: 0xc08070e  jal         func_201C38
    ctx->pc = 0x266E14u;
    SET_GPR_U32(ctx, 31, 0x266E1Cu);
    ctx->pc = 0x266E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E14u;
    // 0x266e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x266E14u, 0x266E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E1Cu;
label_266e1c:
    // 0x266e1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x266e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x266e20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266e24: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x266e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x266e28: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x266E28u;
    {
        const bool branch_taken_0x266e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E28u;
        // 0x266e2c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e28) {
            ctx->pc = 0x266DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266dd8;
        }
    }
    ctx->pc = 0x266E30u;
label_266e30:
    // 0x266e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x266e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266e34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x266e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x266E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E3Cu;
        // 0x266e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266E44u;
}
