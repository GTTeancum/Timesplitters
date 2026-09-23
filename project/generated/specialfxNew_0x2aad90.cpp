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

// Function: specialfxNew
// Address: 0x2aad90 - 0x2aae88
void specialfxNew_0x2aad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxNew_0x2aad90");
#endif

    switch (ctx->pc) {
        case 0x2aadb8u: goto label_2aadb8;
        case 0x2aae00u: goto label_2aae00;
        case 0x2aae38u: goto label_2aae38;
        case 0x2aae5cu: goto label_2aae5c;
        case 0x2aae70u: goto label_2aae70;
        default: break;
    }

    ctx->pc = 0x2aad90u;

    // 0x2aad90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aad94: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2aad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2aad98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aad9c: 0x244bc268  addiu       $t3, $v0, -0x3D98
    ctx->pc = 0x2aad9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951528));
    // 0x2aada0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aada4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2aada4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aada8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aadac: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2aadacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aadb0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2aadb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadb4: 0x0  nop
    ctx->pc = 0x2aadb4u;
    // NOP
label_2aadb8:
    // 0x2aadb8: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AADB8u;
    {
        const bool branch_taken_0x2aadb8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2aadb8) {
            ctx->pc = 0x2AADBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AADB8u;
            // 0x2aadbc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AADD0u;
            goto label_2aadd0;
        }
    }
    ctx->pc = 0x2AADC0u;
    // 0x2aadc0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2aadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2aadc4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2aadc4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2aadc8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2aadc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2aadcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2aadccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2aadd0:
    // 0x2aadd0: 0x28620038  slti        $v0, $v1, 0x38
    ctx->pc = 0x2aadd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x2aadd4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AADD4u;
    {
        const bool branch_taken_0x2aadd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADD4u;
        // 0x2aadd8: 0x256b005c  addiu       $t3, $t3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadd4) {
            ctx->pc = 0x2AADB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aadb8;
        }
    }
    ctx->pc = 0x2AADDCu;
    // 0x2aaddc: 0x6000024  bltz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2AADDCu;
    {
        const bool branch_taken_0x2aaddc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2AADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADDCu;
        // 0x2aade0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaddc) {
            ctx->pc = 0x2AAE70u;
            goto label_2aae70;
        }
    }
    ctx->pc = 0x2AADE4u;
    // 0x2aade4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2aade4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2aade8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2aade8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aadec: 0x2463c268  addiu       $v1, $v1, -0x3D98
    ctx->pc = 0x2aadecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951528));
    // 0x2aadf0: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x2aadf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aadf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aadf8: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x2aadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2aadfc: 0x0  nop
    ctx->pc = 0x2aadfcu;
    // NOP
label_2aae00:
    // 0x2aae00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2aae00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2aae04: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2aae04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2aae08: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2aae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2aae0c: 0x0  nop
    ctx->pc = 0x2aae0cu;
    // NOP
    // 0x2aae10: 0x0  nop
    ctx->pc = 0x2aae10u;
    // NOP
    // 0x2aae14: 0x561fffa  bgez        $t3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AAE14u;
    {
        const bool branch_taken_0x2aae14 = (GPR_S32(ctx, 11) >= 0);
        if (branch_taken_0x2aae14) {
            ctx->pc = 0x2AAE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aae00;
        }
    }
    ctx->pc = 0x2AAE1Cu;
    // 0x2aae1c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2aae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aae20: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2aae20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2aae24: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2aae24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aae28: 0x2463c268  addiu       $v1, $v1, -0x3D98
    ctx->pc = 0x2aae28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951528));
    // 0x2aae2c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2aae2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aae30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aae34: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x2aae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_2aae38:
    // 0x2aae38: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2aae38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2aae3c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2aae3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2aae40: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2aae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2aae44: 0x0  nop
    ctx->pc = 0x2aae44u;
    // NOP
    // 0x2aae48: 0x0  nop
    ctx->pc = 0x2aae48u;
    // NOP
    // 0x2aae4c: 0x561fffa  bgez        $t3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AAE4Cu;
    {
        const bool branch_taken_0x2aae4c = (GPR_S32(ctx, 11) >= 0);
        if (branch_taken_0x2aae4c) {
            ctx->pc = 0x2AAE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aae38;
        }
    }
    ctx->pc = 0x2AAE54u;
    // 0x2aae54: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2AAE54u;
    SET_GPR_U32(ctx, 31, 0x2AAE5Cu);
    ctx->pc = 0x2AAE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAE54u;
    // 0x2aae58: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2AAE54u, 0x2AAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE5Cu;
label_2aae5c:
    // 0x2aae5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aae5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae60: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAE60u;
    {
        const bool branch_taken_0x2aae60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE60u;
        // 0x2aae64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae60) {
            ctx->pc = 0x2AAE74u;
            goto label_2aae74;
        }
    }
    ctx->pc = 0x2AAE68u;
    // 0x2aae68: 0xc0aabb6  jal         func_2AAED8
    ctx->pc = 0x2AAE68u;
    SET_GPR_U32(ctx, 31, 0x2AAE70u);
    ctx->pc = 0x2AAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAE68u;
    // 0x2aae6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAED8u, 0x2AAE68u, 0x2AAE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE70u;
label_2aae70:
    // 0x2aae70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aae70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aae74:
    // 0x2aae74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aae74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aae78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aae78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aae7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aae7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aae80: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE80u;
        // 0x2aae84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAE88u;
}
