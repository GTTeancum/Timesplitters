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

// Function: particleFree
// Address: 0x296b08 - 0x296bec
void particleFree_0x296b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleFree_0x296b08");
#endif

    switch (ctx->pc) {
        case 0x296b18u: goto label_296b18;
        case 0x296b3cu: goto label_296b3c;
        default: break;
    }

    ctx->pc = 0x296b08u;

    // 0x296b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296b10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_296b18:
    // 0x296b18: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x296B18u;
    {
        const bool branch_taken_0x296b18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B18u;
        // 0x296b1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b18) {
            ctx->pc = 0x296BDCu;
            goto label_296bdc;
        }
    }
    ctx->pc = 0x296B20u;
    // 0x296b20: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x296b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296b24: 0x10a2002d  beq         $a1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x296B24u;
    {
        const bool branch_taken_0x296b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x296B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B24u;
        // 0x296b28: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b24) {
            ctx->pc = 0x296BDCu;
            goto label_296bdc;
        }
    }
    ctx->pc = 0x296B2Cu;
    // 0x296b2c: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x296B2Cu;
    {
        const bool branch_taken_0x296b2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x296b2c) {
            ctx->pc = 0x296B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296B2Cu;
            // 0x296b30: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296B44u;
            goto label_296b44;
        }
    }
    ctx->pc = 0x296B34u;
    // 0x296b34: 0xc0b35c4  jal         func_2CD710
    ctx->pc = 0x296B34u;
    SET_GPR_U32(ctx, 31, 0x296B3Cu);
    ctx->pc = 0x296B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B34u;
    // 0x296b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD710u, 0x296B34u, 0x296B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B3Cu;
label_296b3c:
    // 0x296b3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x296b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296b40: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x296b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_296b44:
    // 0x296b44: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x296B44u;
    {
        const bool branch_taken_0x296b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296b44) {
            ctx->pc = 0x296B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296B44u;
            // 0x296b48: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296B4Cu;
            goto label_296b4c;
        }
    }
    ctx->pc = 0x296B4Cu;
label_296b4c:
    // 0x296b4c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x296b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x296b50: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296B50u;
    {
        const bool branch_taken_0x296b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B50u;
        // 0x296b54: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b50) {
            ctx->pc = 0x296B64u;
            goto label_296b64;
        }
    }
    ctx->pc = 0x296B58u;
    // 0x296b58: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x296b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x296b5c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x296b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x296b60: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x296b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_296b64:
    // 0x296b64: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x296b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x296b68: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x296B68u;
    {
        const bool branch_taken_0x296b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296b68) {
            ctx->pc = 0x296B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296B68u;
            // 0x296b6c: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296B88u;
            goto label_296b88;
        }
    }
    ctx->pc = 0x296B70u;
    // 0x296b70: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x296b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
    // 0x296b74: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x296b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x296b78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x296B78u;
    {
        const bool branch_taken_0x296b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B78u;
        // 0x296b7c: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b78) {
            ctx->pc = 0x296B9Cu;
            goto label_296b9c;
        }
    }
    ctx->pc = 0x296B80u;
    // 0x296b80: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x296b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x296b84: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x296b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
label_296b88:
    // 0x296b88: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x296b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x296b8c: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x296b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x296b90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x296b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296b94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x296b94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x296b98: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x296b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
label_296b9c:
    // 0x296b9c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x296b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x296ba0: 0x24429a00  addiu       $v0, $v0, -0x6600
    ctx->pc = 0x296ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941184));
    // 0x296ba4: 0x8f84b960  lw          $a0, -0x46A0($gp)
    ctx->pc = 0x296ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949216)));
    // 0x296ba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x296ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296bac: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x296bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x296bb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x296bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296bb4: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x296bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x296bb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x296bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x296bbc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x296BBCu;
    {
        const bool branch_taken_0x296bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BBCu;
        // 0x296bc0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bbc) {
            ctx->pc = 0x296BC8u;
            goto label_296bc8;
        }
    }
    ctx->pc = 0x296BC4u;
    // 0x296bc4: 0xac900040  sw          $s0, 0x40($a0)
    ctx->pc = 0x296bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 16));
label_296bc8:
    // 0x296bc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x296bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296bcc: 0xaf90b960  sw          $s0, -0x46A0($gp)
    ctx->pc = 0x296bccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949216), GPR_U32(ctx, 16));
    // 0x296bd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x296bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x296bd4: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x296BD4u;
    {
        const bool branch_taken_0x296bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BD4u;
        // 0x296bd8: 0x8e10003c  lw          $s0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bd4) {
            ctx->pc = 0x296B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296b18;
        }
    }
    ctx->pc = 0x296BDCu;
label_296bdc:
    // 0x296bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296be4: 0x3e00008  jr          $ra
    ctx->pc = 0x296BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BE4u;
        // 0x296be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296BECu;
}
