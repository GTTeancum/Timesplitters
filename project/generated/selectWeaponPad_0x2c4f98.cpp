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

// Function: selectWeaponPad
// Address: 0x2c4f98 - 0x2c513c
void selectWeaponPad_0x2c4f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("selectWeaponPad_0x2c4f98");
#endif

    switch (ctx->pc) {
        case 0x2c4fd0u: goto label_2c4fd0;
        case 0x2c5018u: goto label_2c5018;
        case 0x2c5070u: goto label_2c5070;
        case 0x2c50a8u: goto label_2c50a8;
        case 0x2c50f0u: goto label_2c50f0;
        default: break;
    }

    ctx->pc = 0x2c4f98u;

    // 0x2c4f98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c4f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c4f9c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2c4f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2c4fa0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2c4fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2c4fa4: 0x2415001c  addiu       $s5, $zero, 0x1C
    ctx->pc = 0x2c4fa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c4fa8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2c4fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2c4fac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c4facu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2c4fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2c4fb4: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2c4fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fb8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c4fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c4fbc: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2c4fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c4fc0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2c4fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2c4fc4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2c4fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2c4fc8: 0x8c940160  lw          $s4, 0x160($a0)
    ctx->pc = 0x2c4fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c4fcc: 0x8e8602a8  lw          $a2, 0x2A8($s4)
    ctx->pc = 0x2c4fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
label_2c4fd0:
    // 0x2c4fd0: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x2c4fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c4fd4: 0x8f85a2f4  lw          $a1, -0x5D0C($gp)
    ctx->pc = 0x2c4fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943476)));
    // 0x2c4fd8: 0xd51018  mult        $v0, $a2, $s5
    ctx->pc = 0x2c4fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c4fdc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c4fe0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c4fe4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2c4fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c4fe8: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C4FE8u;
    {
        const bool branch_taken_0x2c4fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4fe8) {
            ctx->pc = 0x2C4FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4FE8u;
            // 0x2c4fec: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5044u;
            goto label_2c5044;
        }
    }
    ctx->pc = 0x2C4FF0u;
    // 0x2c4ff0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c4ff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c4ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4ff8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C4FF8u;
    {
        const bool branch_taken_0x2c4ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ff8) {
            ctx->pc = 0x2C4FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4FF8u;
            // 0x2c4ffc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5044u;
            goto label_2c5044;
        }
    }
    ctx->pc = 0x2C5000u;
    // 0x2c5000: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2c5000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c5004: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2c5004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c5008: 0x10c4000e  beq         $a2, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C5008u;
    {
        const bool branch_taken_0x2c5008 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5008u;
        // 0x2c500c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5008) {
            ctx->pc = 0x2C5044u;
            goto label_2c5044;
        }
    }
    ctx->pc = 0x2C5010u;
    // 0x2c5010: 0xc0b3630  jal         func_2CD8C0
    ctx->pc = 0x2C5010u;
    SET_GPR_U32(ctx, 31, 0x2C5018u);
    ctx->pc = 0x2CD8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD8C0u, 0x2C5010u, 0x2C5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5018u;
label_2c5018:
    // 0x2c5018: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C5018u;
    {
        const bool branch_taken_0x2c5018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5018) {
            ctx->pc = 0x2C5044u;
            goto label_2c5044;
        }
    }
    ctx->pc = 0x2C5020u;
    // 0x2c5020: 0x8e8602a8  lw          $a2, 0x2A8($s4)
    ctx->pc = 0x2c5020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
    // 0x2c5024: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c5024u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c5028: 0x8f85a2f4  lw          $a1, -0x5D0C($gp)
    ctx->pc = 0x2c5028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943476)));
    // 0x2c502c: 0xd51018  mult        $v0, $a2, $s5
    ctx->pc = 0x2c502cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c5030: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c5030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c5034: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c5034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c5038: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c5038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c503c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c503cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2c5040: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2c5040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2c5044:
    // 0x2c5044: 0x603ffe2  bgezl       $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2C5044u;
    {
        const bool branch_taken_0x2c5044 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2c5044) {
            ctx->pc = 0x2C5048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5044u;
            // 0x2c5048: 0x8e8602a8  lw          $a2, 0x2A8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4fd0;
        }
    }
    ctx->pc = 0x2C504Cu;
    // 0x2c504c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5050: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5050u;
    {
        const bool branch_taken_0x2c5050 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5050u;
        // 0x2c5054: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5050) {
            ctx->pc = 0x2C5060u;
            goto label_2c5060;
        }
    }
    ctx->pc = 0x2C5058u;
    // 0x2c5058: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2C5058u;
    {
        const bool branch_taken_0x2c5058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5058u;
        // 0x2c505c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5058) {
            ctx->pc = 0x2C5118u;
            goto label_2c5118;
        }
    }
    ctx->pc = 0x2C5060u;
label_2c5060:
    // 0x2c5060: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C5060u;
    {
        const bool branch_taken_0x2c5060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5060) {
            ctx->pc = 0x2C5064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5060u;
            // 0x2c5064: 0x8e8602a8  lw          $a2, 0x2A8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5090u;
            goto label_2c5090;
        }
    }
    ctx->pc = 0x2C5068u;
    // 0x2c5068: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C5068u;
    SET_GPR_U32(ctx, 31, 0x2C5070u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C5068u, 0x2C5070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5070u;
label_2c5070:
    // 0x2c5070: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x2c5070u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c5074: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C5074u;
    {
        const bool branch_taken_0x2c5074 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5074) {
            ctx->pc = 0x2C5078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5074u;
            // 0x2c5078: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C507Cu;
            goto label_2c507c;
        }
    }
    ctx->pc = 0x2C507Cu;
label_2c507c:
    // 0x2c507c: 0x1810  mfhi        $v1
    ctx->pc = 0x2c507cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2c5080: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c5080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c5084: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c5084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c5088: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C5088u;
    {
        const bool branch_taken_0x2c5088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5088u;
        // 0x2c508c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5088) {
            ctx->pc = 0x2C5118u;
            goto label_2c5118;
        }
    }
    ctx->pc = 0x2C5090u;
label_2c5090:
    // 0x2c5090: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c5090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c5094: 0x8f85a2f4  lw          $a1, -0x5D0C($gp)
    ctx->pc = 0x2c5094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943476)));
    // 0x2c5098: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2c5098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c509c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2c509cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c50a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c50a4: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x2c50a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2c50a8:
    // 0x2c50a8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c50a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c50ac: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C50ACu;
    {
        const bool branch_taken_0x2c50ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50ACu;
        // 0x2c50b0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50ac) {
            ctx->pc = 0x2C50D4u;
            goto label_2c50d4;
        }
    }
    ctx->pc = 0x2C50B4u;
    // 0x2c50b4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c50b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c50b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c50bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C50BCu;
    {
        const bool branch_taken_0x2c50bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c50bc) {
            ctx->pc = 0x2C50D4u;
            goto label_2c50d4;
        }
    }
    ctx->pc = 0x2C50C4u;
    // 0x2c50c4: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2c50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c50c8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2c50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c50cc: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C50CCu;
    {
        const bool branch_taken_0x2c50cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50CCu;
        // 0x2c50d0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50cc) {
            ctx->pc = 0x2C5118u;
            goto label_2c5118;
        }
    }
    ctx->pc = 0x2C50D4u;
label_2c50d4:
    // 0x2c50d4: 0x601fff4  bgez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C50D4u;
    {
        const bool branch_taken_0x2c50d4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50D4u;
        // 0x2c50d8: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50d4) {
            ctx->pc = 0x2C50A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c50a8;
        }
    }
    ctx->pc = 0x2C50DCu;
    // 0x2c50dc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c50e0: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2c50e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c50e4: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2c50e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c50e8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2c50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c50ec: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x2c50ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2c50f0:
    // 0x2c50f0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2c50f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c50f4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C50F4u;
    {
        const bool branch_taken_0x2c50f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C50F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50F4u;
        // 0x2c50f8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50f4) {
            ctx->pc = 0x2C510Cu;
            goto label_2c510c;
        }
    }
    ctx->pc = 0x2C50FCu;
    // 0x2c50fc: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2c50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c5100: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2c5100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c5104: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5104u;
    {
        const bool branch_taken_0x2c5104 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5104u;
        // 0x2c5108: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5104) {
            ctx->pc = 0x2C5118u;
            goto label_2c5118;
        }
    }
    ctx->pc = 0x2C510Cu;
label_2c510c:
    // 0x2c510c: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C510Cu;
    {
        const bool branch_taken_0x2c510c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C510Cu;
        // 0x2c5110: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c510c) {
            ctx->pc = 0x2C50F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c50f0;
        }
    }
    ctx->pc = 0x2C5114u;
    // 0x2c5114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5118:
    // 0x2c5118: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c5118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c511c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2c511cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c5120: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2c5120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5124: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2c5124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5128: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2c5128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c512c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2c512cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5130: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2c5130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5134: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5134u;
        // 0x2c5138: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C513Cu;
}
