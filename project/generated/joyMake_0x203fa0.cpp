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

// Function: joyMake
// Address: 0x203fa0 - 0x20405c
void joyMake_0x203fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyMake_0x203fa0");
#endif

    switch (ctx->pc) {
        case 0x203fb8u: goto label_203fb8;
        case 0x203fc0u: goto label_203fc0;
        case 0x203fc8u: goto label_203fc8;
        case 0x203fd0u: goto label_203fd0;
        case 0x203fd8u: goto label_203fd8;
        case 0x203fe0u: goto label_203fe0;
        case 0x203ff0u: goto label_203ff0;
        case 0x203ff8u: goto label_203ff8;
        case 0x204010u: goto label_204010;
        case 0x204020u: goto label_204020;
        case 0x204034u: goto label_204034;
        case 0x204044u: goto label_204044;
        default: break;
    }

    ctx->pc = 0x203fa0u;

    // 0x203fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203fa4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x203fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x203fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203fac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203fb0: 0xc0b5676  jal         func_2D59D8
    ctx->pc = 0x203FB0u;
    SET_GPR_U32(ctx, 31, 0x203FB8u);
    ctx->pc = 0x2D59D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59D8u, 0x203FB0u, 0x203FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FB8u;
label_203fb8:
    // 0x203fb8: 0xc0b570e  jal         func_2D5C38
    ctx->pc = 0x203FB8u;
    SET_GPR_U32(ctx, 31, 0x203FC0u);
    ctx->pc = 0x203FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FB8u;
    // 0x203fbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5C38u, 0x203FB8u, 0x203FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FC0u;
label_203fc0:
    // 0x203fc0: 0xc0b570e  jal         func_2D5C38
    ctx->pc = 0x203FC0u;
    SET_GPR_U32(ctx, 31, 0x203FC8u);
    ctx->pc = 0x203FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FC0u;
    // 0x203fc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5C38u, 0x203FC0u, 0x203FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FC8u;
label_203fc8:
    // 0x203fc8: 0xc0b570e  jal         func_2D5C38
    ctx->pc = 0x203FC8u;
    SET_GPR_U32(ctx, 31, 0x203FD0u);
    ctx->pc = 0x203FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FC8u;
    // 0x203fcc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5C38u, 0x203FC8u, 0x203FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FD0u;
label_203fd0:
    // 0x203fd0: 0xc0b570e  jal         func_2D5C38
    ctx->pc = 0x203FD0u;
    SET_GPR_U32(ctx, 31, 0x203FD8u);
    ctx->pc = 0x203FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FD0u;
    // 0x203fd4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5C38u, 0x203FD0u, 0x203FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FD8u;
label_203fd8:
    // 0x203fd8: 0xc0b5266  jal         func_2D4998
    ctx->pc = 0x203FD8u;
    SET_GPR_U32(ctx, 31, 0x203FE0u);
    ctx->pc = 0x203FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FD8u;
    // 0x203fdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4998u, 0x203FD8u, 0x203FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FE0u;
label_203fe0:
    // 0x203fe0: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x203fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x203fe4: 0x2470c740  addiu       $s0, $v1, -0x38C0
    ctx->pc = 0x203fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
    // 0x203fe8: 0x26110c00  addiu       $s1, $s0, 0xC00
    ctx->pc = 0x203fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
    // 0x203fec: 0x0  nop
    ctx->pc = 0x203fecu;
    // NOP
label_203ff0:
    // 0x203ff0: 0xc080c4e  jal         func_203138
    ctx->pc = 0x203FF0u;
    SET_GPR_U32(ctx, 31, 0x203FF8u);
    ctx->pc = 0x203FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FF0u;
    // 0x203ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203138u, 0x203FF0u, 0x203FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FF8u;
label_203ff8:
    // 0x203ff8: 0x26100180  addiu       $s0, $s0, 0x180
    ctx->pc = 0x203ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x203ffc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x203ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x204000: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x204000u;
    {
        const bool branch_taken_0x204000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204000) {
            ctx->pc = 0x203FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203ff0;
        }
    }
    ctx->pc = 0x204008u;
    // 0x204008: 0xc0b5746  jal         func_2D5D18
    ctx->pc = 0x204008u;
    SET_GPR_U32(ctx, 31, 0x204010u);
    ctx->pc = 0x20400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204008u;
    // 0x20400c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D18u, 0x204008u, 0x204010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204010u;
label_204010:
    // 0x204010: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204010u;
    {
        const bool branch_taken_0x204010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204010u;
        // 0x204014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204010) {
            ctx->pc = 0x204028u;
            goto label_204028;
        }
    }
    ctx->pc = 0x204018u;
    // 0x204018: 0xc0b5618  jal         func_2D5860
    ctx->pc = 0x204018u;
    SET_GPR_U32(ctx, 31, 0x204020u);
    ctx->pc = 0x20401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204018u;
    // 0x20401c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5860u, 0x204018u, 0x204020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204020u;
label_204020:
    // 0x204020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204020u;
    {
        const bool branch_taken_0x204020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204020u;
        // 0x204024: 0xaf829ad0  sw          $v0, -0x6530($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204020) {
            ctx->pc = 0x20402Cu;
            goto label_20402c;
        }
    }
    ctx->pc = 0x204028u;
label_204028:
    // 0x204028: 0xaf829ad0  sw          $v0, -0x6530($gp)
    ctx->pc = 0x204028u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941392), GPR_U32(ctx, 2));
label_20402c:
    // 0x20402c: 0xc0b5746  jal         func_2D5D18
    ctx->pc = 0x20402Cu;
    SET_GPR_U32(ctx, 31, 0x204034u);
    ctx->pc = 0x204030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20402Cu;
    // 0x204030: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D18u, 0x20402Cu, 0x204034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204034u;
label_204034:
    // 0x204034: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204034u;
    {
        const bool branch_taken_0x204034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204034u;
        // 0x204038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204034) {
            ctx->pc = 0x204044u;
            goto label_204044;
        }
    }
    ctx->pc = 0x20403Cu;
    // 0x20403c: 0xc0b5618  jal         func_2D5860
    ctx->pc = 0x20403Cu;
    SET_GPR_U32(ctx, 31, 0x204044u);
    ctx->pc = 0x204040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20403Cu;
    // 0x204040: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5860u, 0x20403Cu, 0x204044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204044u;
label_204044:
    // 0x204044: 0xaf829ad4  sw          $v0, -0x652C($gp)
    ctx->pc = 0x204044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941396), GPR_U32(ctx, 2));
    // 0x204048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x204048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20404c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20404cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204054: 0x3e00008  jr          $ra
    ctx->pc = 0x204054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204054u;
        // 0x204058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20405Cu;
}
