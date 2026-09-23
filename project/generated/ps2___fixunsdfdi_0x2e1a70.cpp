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

// Function: __fixunsdfdi
// Address: 0x2e1a70 - 0x2e1b5c
void ps2___fixunsdfdi_0x2e1a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fixunsdfdi_0x2e1a70");
#endif

    switch (ctx->pc) {
        case 0x2e1a90u: goto label_2e1a90;
        case 0x2e1aa8u: goto label_2e1aa8;
        case 0x2e1ab0u: goto label_2e1ab0;
        case 0x2e1ac4u: goto label_2e1ac4;
        case 0x2e1ad8u: goto label_2e1ad8;
        case 0x2e1ae4u: goto label_2e1ae4;
        case 0x2e1af0u: goto label_2e1af0;
        case 0x2e1b04u: goto label_2e1b04;
        case 0x2e1b14u: goto label_2e1b14;
        case 0x2e1b1cu: goto label_2e1b1c;
        case 0x2e1b34u: goto label_2e1b34;
        default: break;
    }

    ctx->pc = 0x2e1a70u;

    // 0x2e1a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e1a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e1a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e1a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e1a7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e1a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e1a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e1a84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e1a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e1a88: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2E1A88u;
    SET_GPR_U32(ctx, 31, 0x2E1A90u);
    ctx->pc = 0x2E1A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A88u;
    // 0x2e1a8c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2E1A88u, 0x2E1A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A90u;
label_2e1a90:
    // 0x2e1a90: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E1A90u;
    {
        const bool branch_taken_0x2e1a90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A90u;
        // 0x2e1a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a90) {
            ctx->pc = 0x2E1B44u;
            goto label_2e1b44;
        }
    }
    ctx->pc = 0x2E1A98u;
    // 0x2e1a98: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x2e1a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x2e1a9c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2e1a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2e1aa0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E1AA0u;
    SET_GPR_U32(ctx, 31, 0x2E1AA8u);
    ctx->pc = 0x2E1AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AA0u;
    // 0x2e1aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2E1AA0u, 0x2E1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AA8u;
label_2e1aa8:
    // 0x2e1aa8: 0xc0b8e42  jal         func_2E3908
    ctx->pc = 0x2E1AA8u;
    SET_GPR_U32(ctx, 31, 0x2E1AB0u);
    ctx->pc = 0x2E1AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AA8u;
    // 0x2e1aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3908u, 0x2E1AA8u, 0x2E1AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AB0u;
label_2e1ab0:
    // 0x2e1ab0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2e1ab0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e1ab4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1AB4u;
    {
        const bool branch_taken_0x2e1ab4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AB4u;
        // 0x2e1ab8: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ab4) {
            ctx->pc = 0x2E1ACCu;
            goto label_2e1acc;
        }
    }
    ctx->pc = 0x2E1ABCu;
    // 0x2e1abc: 0xc0b86d8  jal         func_2E1B60
    ctx->pc = 0x2E1ABCu;
    SET_GPR_U32(ctx, 31, 0x2E1AC4u);
    ctx->pc = 0x2E1AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1ABCu;
    // 0x2e1ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1B60u, 0x2E1ABCu, 0x2E1AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AC4u;
label_2e1ac4:
    // 0x2e1ac4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1AC4u;
    {
        const bool branch_taken_0x2e1ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AC4u;
        // 0x2e1ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ac4) {
            ctx->pc = 0x2E1AE8u;
            goto label_2e1ae8;
        }
    }
    ctx->pc = 0x2E1ACCu;
label_2e1acc:
    // 0x2e1acc: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x2e1accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x2e1ad0: 0xc0b86d8  jal         func_2E1B60
    ctx->pc = 0x2E1AD0u;
    SET_GPR_U32(ctx, 31, 0x2E1AD8u);
    ctx->pc = 0x2E1AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AD0u;
    // 0x2e1ad4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1B60u, 0x2E1AD0u, 0x2E1AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AD8u;
label_2e1ad8:
    // 0x2e1ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e1ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1adc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2E1ADCu;
    SET_GPR_U32(ctx, 31, 0x2E1AE4u);
    ctx->pc = 0x2E1AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1ADCu;
    // 0x2e1ae0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2E1ADCu, 0x2E1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AE4u;
label_2e1ae4:
    // 0x2e1ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1ae8:
    // 0x2e1ae8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2E1AE8u;
    SET_GPR_U32(ctx, 31, 0x2E1AF0u);
    ctx->pc = 0x2E1AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AE8u;
    // 0x2e1aec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2E1AE8u, 0x2E1AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AF0u;
label_2e1af0:
    // 0x2e1af0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e1af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1af4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e1af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1af8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e1af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1afc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2E1AFCu;
    SET_GPR_U32(ctx, 31, 0x2E1B04u);
    ctx->pc = 0x2E1B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AFCu;
    // 0x2e1b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2E1AFCu, 0x2E1B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B04u;
label_2e1b04:
    // 0x2e1b04: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1B04u;
    {
        const bool branch_taken_0x2e1b04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B04u;
        // 0x2e1b08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b04) {
            ctx->pc = 0x2E1B2Cu;
            goto label_2e1b2c;
        }
    }
    ctx->pc = 0x2E1B0Cu;
    // 0x2e1b0c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2E1B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E1B14u);
    ctx->pc = 0x2E1B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B0Cu;
    // 0x2e1b10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2E1B0Cu, 0x2E1B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B14u;
label_2e1b14:
    // 0x2e1b14: 0xc0b8e42  jal         func_2E3908
    ctx->pc = 0x2E1B14u;
    SET_GPR_U32(ctx, 31, 0x2E1B1Cu);
    ctx->pc = 0x2E1B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B14u;
    // 0x2e1b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3908u, 0x2E1B14u, 0x2E1B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B1Cu;
label_2e1b1c:
    // 0x2e1b1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e1b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e1b20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e1b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e1b24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1B24u;
    {
        const bool branch_taken_0x2e1b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B24u;
        // 0x2e1b28: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b24) {
            ctx->pc = 0x2E1B40u;
            goto label_2e1b40;
        }
    }
    ctx->pc = 0x2E1B2Cu;
label_2e1b2c:
    // 0x2e1b2c: 0xc0b8e42  jal         func_2E3908
    ctx->pc = 0x2E1B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E1B34u);
    ctx->pc = 0x2E1B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B2Cu;
    // 0x2e1b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3908u, 0x2E1B2Cu, 0x2E1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B34u;
label_2e1b34:
    // 0x2e1b34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e1b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e1b38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e1b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e1b3c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2e1b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_2e1b40:
    // 0x2e1b40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e1b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1b44:
    // 0x2e1b44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e1b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1b48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e1b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e1b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1b54: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B54u;
        // 0x2e1b58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1B5Cu;
}
