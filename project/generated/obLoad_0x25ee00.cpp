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

// Function: obLoad
// Address: 0x25ee00 - 0x25eebc
void obLoad_0x25ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obLoad_0x25ee00");
#endif

    switch (ctx->pc) {
        case 0x25ee18u: goto label_25ee18;
        case 0x25ee30u: goto label_25ee30;
        case 0x25ee4cu: goto label_25ee4c;
        case 0x25ee70u: goto label_25ee70;
        case 0x25ee7cu: goto label_25ee7c;
        case 0x25ee9cu: goto label_25ee9c;
        case 0x25eea4u: goto label_25eea4;
        default: break;
    }

    ctx->pc = 0x25ee00u;

    // 0x25ee00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25ee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25ee04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25ee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25ee08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ee08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25ee10: 0xc087166  jal         func_21C598
    ctx->pc = 0x25EE10u;
    SET_GPR_U32(ctx, 31, 0x25EE18u);
    ctx->pc = 0x25EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE10u;
    // 0x25ee14: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C598u, 0x25EE10u, 0x25EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE18u;
label_25ee18:
    // 0x25ee18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EE18u;
    {
        const bool branch_taken_0x25ee18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ee18) {
            ctx->pc = 0x25EE28u;
            goto label_25ee28;
        }
    }
    ctx->pc = 0x25EE20u;
    // 0x25ee20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25EE20u;
    {
        const bool branch_taken_0x25ee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE20u;
        // 0x25ee24: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee20) {
            ctx->pc = 0x25EE50u;
            goto label_25ee50;
        }
    }
    ctx->pc = 0x25EE28u;
label_25ee28:
    // 0x25ee28: 0xc0868a2  jal         func_21A288
    ctx->pc = 0x25EE28u;
    SET_GPR_U32(ctx, 31, 0x25EE30u);
    ctx->pc = 0x25EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE28u;
    // 0x25ee2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A288u, 0x25EE28u, 0x25EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE30u;
label_25ee30:
    // 0x25ee30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ee30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee34: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25EE34u;
    {
        const bool branch_taken_0x25ee34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ee34) {
            ctx->pc = 0x25EE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EE34u;
            // 0x25ee38: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EE54u;
            goto label_25ee54;
        }
    }
    ctx->pc = 0x25EE3Cu;
    // 0x25ee3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ee44: 0xc0868fe  jal         func_21A3F8
    ctx->pc = 0x25EE44u;
    SET_GPR_U32(ctx, 31, 0x25EE4Cu);
    ctx->pc = 0x25EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE44u;
    // 0x25ee48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A3F8u, 0x25EE44u, 0x25EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE4Cu;
label_25ee4c:
    // 0x25ee4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ee4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ee50:
    // 0x25ee50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25ee54:
    // 0x25ee54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25ee54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ee5c: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x25ee5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25ee60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25ee64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25ee64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee68: 0xc097acc  jal         func_25EB30
    ctx->pc = 0x25EE68u;
    SET_GPR_U32(ctx, 31, 0x25EE70u);
    ctx->pc = 0x25EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE68u;
    // 0x25ee6c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB30u, 0x25EE68u, 0x25EE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE70u;
label_25ee70:
    // 0x25ee70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25ee70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee74: 0xc097a4c  jal         func_25E930
    ctx->pc = 0x25EE74u;
    SET_GPR_U32(ctx, 31, 0x25EE7Cu);
    ctx->pc = 0x25EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE74u;
    // 0x25ee78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E930u, 0x25EE74u, 0x25EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE7Cu;
label_25ee7c:
    // 0x25ee7c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x25ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25ee80: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x25ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x25ee84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25ee88: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x25ee88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x25ee8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EE8Cu;
    {
        const bool branch_taken_0x25ee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ee8c) {
            ctx->pc = 0x25EE9Cu;
            goto label_25ee9c;
        }
    }
    ctx->pc = 0x25EE94u;
    // 0x25ee94: 0xc097af8  jal         func_25EBE0
    ctx->pc = 0x25EE94u;
    SET_GPR_U32(ctx, 31, 0x25EE9Cu);
    ctx->pc = 0x25EE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE94u;
    // 0x25ee98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EBE0u, 0x25EE94u, 0x25EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE9Cu;
label_25ee9c:
    // 0x25ee9c: 0xc097ee2  jal         func_25FB88
    ctx->pc = 0x25EE9Cu;
    SET_GPR_U32(ctx, 31, 0x25EEA4u);
    ctx->pc = 0x25EEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE9Cu;
    // 0x25eea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FB88u, 0x25EE9Cu, 0x25EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EEA4u;
label_25eea4:
    // 0x25eea4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25eea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25eeac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25eeacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25eeb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25eeb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25eeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x25EEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEB4u;
        // 0x25eeb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EEBCu;
}
