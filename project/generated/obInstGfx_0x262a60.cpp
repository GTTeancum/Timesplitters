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

// Function: obInstGfx
// Address: 0x262a60 - 0x262bf0
void obInstGfx_0x262a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obInstGfx_0x262a60");
#endif

    switch (ctx->pc) {
        case 0x262ad0u: goto label_262ad0;
        case 0x262ae4u: goto label_262ae4;
        case 0x262aecu: goto label_262aec;
        case 0x262b04u: goto label_262b04;
        case 0x262b1cu: goto label_262b1c;
        case 0x262b48u: goto label_262b48;
        case 0x262b58u: goto label_262b58;
        case 0x262b6cu: goto label_262b6c;
        case 0x262b80u: goto label_262b80;
        case 0x262b90u: goto label_262b90;
        case 0x262ba0u: goto label_262ba0;
        default: break;
    }

    ctx->pc = 0x262a60u;

    // 0x262a60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x262a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x262a64: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x262a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x262a68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x262a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x262a6c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x262a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x262a70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262a74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x262a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x262a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x262a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x262a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x262a84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x262a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x262a88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262a8c: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x262a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x262a90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x262a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x262a94: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x262a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x262a98: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x262a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x262a9c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x262a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x262aa0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x262AA0u;
    {
        const bool branch_taken_0x262aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AA0u;
        // 0x262aa4: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262aa0) {
            ctx->pc = 0x262BD0u;
            goto label_262bd0;
        }
    }
    ctx->pc = 0x262AA8u;
    // 0x262aa8: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x262aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x262aac: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x262AACu;
    {
        const bool branch_taken_0x262aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AACu;
        // 0x262ab0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262aac) {
            ctx->pc = 0x262BD4u;
            goto label_262bd4;
        }
    }
    ctx->pc = 0x262AB4u;
    // 0x262ab4: 0x8ce40028  lw          $a0, 0x28($a3)
    ctx->pc = 0x262ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x262ab8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x262ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262abc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x262abcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262ac0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262AC0u;
    {
        const bool branch_taken_0x262ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x262AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AC0u;
        // 0x262ac4: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ac0) {
            ctx->pc = 0x262AD0u;
            goto label_262ad0;
        }
    }
    ctx->pc = 0x262AC8u;
    // 0x262ac8: 0xc0adaaa  jal         func_2B6AA8
    ctx->pc = 0x262AC8u;
    SET_GPR_U32(ctx, 31, 0x262AD0u);
    ctx->pc = 0x2B6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6AA8u, 0x262AC8u, 0x262AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262AD0u;
label_262ad0:
    // 0x262ad0: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x262ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x262ad4: 0x50520007  beql        $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x262AD4u;
    {
        const bool branch_taken_0x262ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x262ad4) {
            ctx->pc = 0x262AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262AD4u;
            // 0x262ad8: 0x8e04012c  lw          $a0, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262AF4u;
            goto label_262af4;
        }
    }
    ctx->pc = 0x262ADCu;
    // 0x262adc: 0xc0adfa8  jal         func_2B7EA0
    ctx->pc = 0x262ADCu;
    SET_GPR_U32(ctx, 31, 0x262AE4u);
    ctx->pc = 0x262AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262ADCu;
    // 0x262ae0: 0x8e040134  lw          $a0, 0x134($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA0u, 0x262ADCu, 0x262AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262AE4u;
label_262ae4:
    // 0x262ae4: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x262AE4u;
    SET_GPR_U32(ctx, 31, 0x262AECu);
    ctx->pc = 0x262AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262AE4u;
    // 0x262ae8: 0x8e040128  lw          $a0, 0x128($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x262AE4u, 0x262AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262AECu;
label_262aec:
    // 0x262aec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x262aecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262af0: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x262af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_262af4:
    // 0x262af4: 0x50920005  beql        $a0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x262AF4u;
    {
        const bool branch_taken_0x262af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x262af4) {
            ctx->pc = 0x262AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262AF4u;
            // 0x262af8: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262B0Cu;
            goto label_262b0c;
        }
    }
    ctx->pc = 0x262AFCu;
    // 0x262afc: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x262AFCu;
    SET_GPR_U32(ctx, 31, 0x262B04u);
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x262AFCu, 0x262B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B04u;
label_262b04:
    // 0x262b04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x262b04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b08: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x262b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_262b0c:
    // 0x262b0c: 0x50920005  beql        $a0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x262B0Cu;
    {
        const bool branch_taken_0x262b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x262b0c) {
            ctx->pc = 0x262B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262B0Cu;
            // 0x262b10: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262B24u;
            goto label_262b24;
        }
    }
    ctx->pc = 0x262B14u;
    // 0x262b14: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x262B14u;
    SET_GPR_U32(ctx, 31, 0x262B1Cu);
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x262B14u, 0x262B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B1Cu;
label_262b1c:
    // 0x262b1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x262b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b20: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x262b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_262b24:
    // 0x262b24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x262b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x262b28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x262b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x262b2c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x262B2Cu;
    {
        const bool branch_taken_0x262b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B2Cu;
        // 0x262b30: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b2c) {
            ctx->pc = 0x262B60u;
            goto label_262b60;
        }
    }
    ctx->pc = 0x262B34u;
    // 0x262b34: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x262B34u;
    {
        const bool branch_taken_0x262b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B34u;
        // 0x262b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b34) {
            ctx->pc = 0x262B60u;
            goto label_262b60;
        }
    }
    ctx->pc = 0x262B3Cu;
    // 0x262b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b40: 0xc0982b8  jal         func_260AE0
    ctx->pc = 0x262B40u;
    SET_GPR_U32(ctx, 31, 0x262B48u);
    ctx->pc = 0x262B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B40u;
    // 0x262b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260AE0u, 0x262B40u, 0x262B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B48u;
label_262b48:
    // 0x262b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b50: 0xc0982b8  jal         func_260AE0
    ctx->pc = 0x262B50u;
    SET_GPR_U32(ctx, 31, 0x262B58u);
    ctx->pc = 0x262B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B50u;
    // 0x262b54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260AE0u, 0x262B50u, 0x262B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B58u;
label_262b58:
    // 0x262b58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x262B58u;
    {
        const bool branch_taken_0x262b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B58u;
        // 0x262b5c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b58) {
            ctx->pc = 0x262B70u;
            goto label_262b70;
        }
    }
    ctx->pc = 0x262B60u;
label_262b60:
    // 0x262b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b64: 0xc0982b8  jal         func_260AE0
    ctx->pc = 0x262B64u;
    SET_GPR_U32(ctx, 31, 0x262B6Cu);
    ctx->pc = 0x262B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B64u;
    // 0x262b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260AE0u, 0x262B64u, 0x262B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B6Cu;
label_262b6c:
    // 0x262b6c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x262b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_262b70:
    // 0x262b70: 0x12710003  beq         $s3, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262B70u;
    {
        const bool branch_taken_0x262b70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        if (branch_taken_0x262b70) {
            ctx->pc = 0x262B80u;
            goto label_262b80;
        }
    }
    ctx->pc = 0x262B78u;
    // 0x262b78: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x262B78u;
    SET_GPR_U32(ctx, 31, 0x262B80u);
    ctx->pc = 0x262B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B78u;
    // 0x262b7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x262B78u, 0x262B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B80u;
label_262b80:
    // 0x262b80: 0x12910003  beq         $s4, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262B80u;
    {
        const bool branch_taken_0x262b80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 17));
        if (branch_taken_0x262b80) {
            ctx->pc = 0x262B90u;
            goto label_262b90;
        }
    }
    ctx->pc = 0x262B88u;
    // 0x262b88: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x262B88u;
    SET_GPR_U32(ctx, 31, 0x262B90u);
    ctx->pc = 0x262B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B88u;
    // 0x262b8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x262B88u, 0x262B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B90u;
label_262b90:
    // 0x262b90: 0x52510004  beql        $s2, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x262B90u;
    {
        const bool branch_taken_0x262b90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x262b90) {
            ctx->pc = 0x262B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262B90u;
            // 0x262b94: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262BA4u;
            goto label_262ba4;
        }
    }
    ctx->pc = 0x262B98u;
    // 0x262b98: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x262B98u;
    SET_GPR_U32(ctx, 31, 0x262BA0u);
    ctx->pc = 0x262B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B98u;
    // 0x262b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x262B98u, 0x262BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BA0u;
label_262ba0:
    // 0x262ba0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x262ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_262ba4:
    // 0x262ba4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x262ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x262ba8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x262BA8u;
    {
        const bool branch_taken_0x262ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BA8u;
        // 0x262bac: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ba8) {
            ctx->pc = 0x262BD4u;
            goto label_262bd4;
        }
    }
    ctx->pc = 0x262BB0u;
    // 0x262bb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x262bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x262bb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262bb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x262bb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262bbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x262bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262bc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x262bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262bc8: 0x80adaaa  j           func_2B6AA8
    ctx->pc = 0x262BC8u;
    ctx->pc = 0x262BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262BC8u;
    // 0x262bcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6AA8u;
    emSelectTexBuffer_0x2b6aa8(rdram, ctx, runtime); return;
    ctx->pc = 0x262BD0u;
label_262bd0:
    // 0x262bd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x262bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_262bd4:
    // 0x262bd4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x262bd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262bd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x262bd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262bdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x262bdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262be0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x262be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262be8: 0x3e00008  jr          $ra
    ctx->pc = 0x262BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BE8u;
        // 0x262bec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262BF0u;
}
