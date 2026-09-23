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

// Function: startMessage
// Address: 0x206be8 - 0x206d18
void startMessage_0x206be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startMessage_0x206be8");
#endif

    switch (ctx->pc) {
        case 0x206c28u: goto label_206c28;
        case 0x206c90u: goto label_206c90;
        case 0x206cf4u: goto label_206cf4;
        case 0x206d04u: goto label_206d04;
        default: break;
    }

    ctx->pc = 0x206be8u;

    // 0x206be8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x206be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x206bec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x206becu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bf0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x206bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x206bf4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x206bf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bf8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x206bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x206bfc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x206bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x206c00: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x206c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x206c04: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x206C04u;
    {
        const bool branch_taken_0x206c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C04u;
        // 0x206c08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c04) {
            ctx->pc = 0x206C5Cu;
            goto label_206c5c;
        }
    }
    ctx->pc = 0x206C0Cu;
    // 0x206c0c: 0x3c0a01fb  lui         $t2, 0x1FB
    ctx->pc = 0x206c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)507 << 16));
    // 0x206c10: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x206c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x206c14: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x206c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x206c18: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x206c18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x206c1c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x206c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x206c20: 0x25432528  addiu       $v1, $t2, 0x2528
    ctx->pc = 0x206c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 9512));
    // 0x206c24: 0x0  nop
    ctx->pc = 0x206c24u;
    // NOP
label_206c28:
    // 0x206c28: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x206c28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206c2c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x206c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x206c30: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x206c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x206c34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x206c34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x206c38: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x206c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x206c3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x206c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206c44: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x206C44u;
    {
        const bool branch_taken_0x206c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C44u;
        // 0x206c48: 0x28e203ff  slti        $v0, $a3, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1023) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c44) {
            ctx->pc = 0x206C70u;
            goto label_206c70;
        }
    }
    ctx->pc = 0x206C4Cu;
    // 0x206c4c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x206C4Cu;
    {
        const bool branch_taken_0x206c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C4Cu;
        // 0x206c50: 0x25432528  addiu       $v1, $t2, 0x2528 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 9512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c4c) {
            ctx->pc = 0x206C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206c28;
        }
    }
    ctx->pc = 0x206C54u;
    // 0x206c54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x206C54u;
    {
        const bool branch_taken_0x206c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C54u;
        // 0x206c58: 0x25422528  addiu       $v0, $t2, 0x2528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 9512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c54) {
            ctx->pc = 0x206C74u;
            goto label_206c74;
        }
    }
    ctx->pc = 0x206C5Cu;
label_206c5c:
    // 0x206c5c: 0x3c0a01fb  lui         $t2, 0x1FB
    ctx->pc = 0x206c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)507 << 16));
    // 0x206c60: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x206c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x206c64: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x206c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x206c68: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x206c68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x206c6c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x206c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
label_206c70:
    // 0x206c70: 0x25422528  addiu       $v0, $t2, 0x2528
    ctx->pc = 0x206c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 9512));
label_206c74:
    // 0x206c74: 0xaf86b63c  sw          $a2, -0x49C4($gp)
    ctx->pc = 0x206c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948412), GPR_U32(ctx, 6));
    // 0x206c78: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x206c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x206c7c: 0xaf8bb640  sw          $t3, -0x49C0($gp)
    ctx->pc = 0x206c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948416), GPR_U32(ctx, 11));
    // 0x206c80: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x206c80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x206c84: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x206c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c88: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x206C88u;
    SET_GPR_U32(ctx, 31, 0x206C90u);
    ctx->pc = 0x206C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C88u;
    // 0x206c8c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x206C88u, 0x206C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C90u;
label_206c90:
    // 0x206c90: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x206c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206c94: 0x260999f0  addiu       $t1, $s0, -0x6610
    ctx->pc = 0x206c94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x206c98: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x206c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x206c9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x206c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ca0: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x206ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x206ca4: 0x8d28001c  lw          $t0, 0x1C($t1)
    ctx->pc = 0x206ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x206ca8: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x206ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x206cac: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x206cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x206cb0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x206cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x206cb4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x206cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x206cb8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x206cb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x206cbc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x206cbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x206cc0: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x206cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x206cc4: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x206cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x206cc8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x206cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x206ccc: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x206cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x206cd0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x206cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x206cd4: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x206cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x206cd8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x206cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x206cdc: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x206cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x206ce0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x206ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ce4: 0x24062880  addiu       $a2, $zero, 0x2880
    ctx->pc = 0x206ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x206ce8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x206ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x206cec: 0xc08bbc4  jal         func_22EF10
    ctx->pc = 0x206CECu;
    SET_GPR_U32(ctx, 31, 0x206CF4u);
    ctx->pc = 0x206CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CECu;
    // 0x206cf0: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF10u, 0x206CECu, 0x206CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206CF4u;
label_206cf4:
    // 0x206cf4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x206cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x206cf8: 0x26259538  addiu       $a1, $s1, -0x6AC8
    ctx->pc = 0x206cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939960));
    // 0x206cfc: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x206CFCu;
    SET_GPR_U32(ctx, 31, 0x206D04u);
    ctx->pc = 0x206D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CFCu;
    // 0x206d00: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x206CFCu, 0x206D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D04u;
label_206d04:
    // 0x206d04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x206d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206d08: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x206d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206d0c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x206d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206d10: 0x3e00008  jr          $ra
    ctx->pc = 0x206D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D10u;
        // 0x206d14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206D18u;
}
