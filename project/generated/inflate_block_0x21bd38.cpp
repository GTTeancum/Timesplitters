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

// Function: inflate_block
// Address: 0x21bd38 - 0x21be88
void inflate_block_0x21bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("inflate_block_0x21bd38");
#endif

    switch (ctx->pc) {
        case 0x21bd60u: goto label_21bd60;
        case 0x21bdc8u: goto label_21bdc8;
        case 0x21be28u: goto label_21be28;
        case 0x21be3cu: goto label_21be3c;
        case 0x21be54u: goto label_21be54;
        case 0x21be6cu: goto label_21be6c;
        case 0x21be7cu: goto label_21be7c;
        default: break;
    }

    ctx->pc = 0x21bd38u;

    // 0x21bd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21bd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21bd3c: 0x8f85b6e8  lw          $a1, -0x4918($gp)
    ctx->pc = 0x21bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948584)));
    // 0x21bd40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21bd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21bd44: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x21bd44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bd4c: 0x14a00015  bnez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x21BD4Cu;
    {
        const bool branch_taken_0x21bd4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD4Cu;
        // 0x21bd50: 0x8f86b6e4  lw          $a2, -0x491C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd4c) {
            ctx->pc = 0x21BDA4u;
            goto label_21bda4;
        }
    }
    ctx->pc = 0x21BD54u;
    // 0x21bd54: 0x8f87b6d0  lw          $a3, -0x4930($gp)
    ctx->pc = 0x21bd54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21bd58: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21bd5c: 0x0  nop
    ctx->pc = 0x21bd5cu;
    // NOP
label_21bd60:
    // 0x21bd60: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x21bd60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21bd64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21BD64u;
    {
        const bool branch_taken_0x21bd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD64u;
        // 0x21bd68: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd64) {
            ctx->pc = 0x21BD88u;
            goto label_21bd88;
        }
    }
    ctx->pc = 0x21BD6Cu;
    // 0x21bd6c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21bd70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bd74: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21bd74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bd78: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21bd78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21bd7c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x21bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x21bd80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21BD80u;
    {
        const bool branch_taken_0x21bd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD80u;
        // 0x21bd84: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd80) {
            ctx->pc = 0x21BD98u;
            goto label_21bd98;
        }
    }
    ctx->pc = 0x21BD88u;
label_21bd88:
    // 0x21bd88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21bd8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21bd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21bd90: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x21bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x21bd94: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x21bd94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_21bd98:
    // 0x21bd98: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x21bd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x21bd9c: 0x10a0fff0  beqz        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x21BD9Cu;
    {
        const bool branch_taken_0x21bd9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD9Cu;
        // 0x21bda0: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd9c) {
            ctx->pc = 0x21BD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bd60;
        }
    }
    ctx->pc = 0x21BDA4u;
label_21bda4:
    // 0x21bda4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x21bda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x21bda8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x21bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21bdac: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x21bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x21bdb0: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x21bdb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x21bdb4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21BDB4u;
    {
        const bool branch_taken_0x21bdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDB4u;
        // 0x21bdb8: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdb4) {
            ctx->pc = 0x21BE10u;
            goto label_21be10;
        }
    }
    ctx->pc = 0x21BDBCu;
    // 0x21bdbc: 0x8f87b6d0  lw          $a3, -0x4930($gp)
    ctx->pc = 0x21bdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21bdc0: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21bdc4: 0x0  nop
    ctx->pc = 0x21bdc4u;
    // NOP
label_21bdc8:
    // 0x21bdc8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x21bdc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21bdcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21BDCCu;
    {
        const bool branch_taken_0x21bdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDCCu;
        // 0x21bdd0: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdcc) {
            ctx->pc = 0x21BDF0u;
            goto label_21bdf0;
        }
    }
    ctx->pc = 0x21BDD4u;
    // 0x21bdd4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21bdd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bddc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21bddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bde0: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21bde4: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x21bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x21bde8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21BDE8u;
    {
        const bool branch_taken_0x21bde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDE8u;
        // 0x21bdec: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bde8) {
            ctx->pc = 0x21BE00u;
            goto label_21be00;
        }
    }
    ctx->pc = 0x21BDF0u;
label_21bdf0:
    // 0x21bdf0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21bdf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21bdf8: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x21bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x21bdfc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x21bdfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_21be00:
    // 0x21be00: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x21be00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x21be04: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x21be04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x21be08: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21BE08u;
    {
        const bool branch_taken_0x21be08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE08u;
        // 0x21be0c: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be08) {
            ctx->pc = 0x21BDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bdc8;
        }
    }
    ctx->pc = 0x21BE10u;
label_21be10:
    // 0x21be10: 0x30d00003  andi        $s0, $a2, 0x3
    ctx->pc = 0x21be10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x21be14: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x21be14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x21be18: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x21be18u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x21be1c: 0xaf85b6e8  sw          $a1, -0x4918($gp)
    ctx->pc = 0x21be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948584), GPR_U32(ctx, 5));
    // 0x21be20: 0xc0869e8  jal         func_21A7A0
    ctx->pc = 0x21BE20u;
    SET_GPR_U32(ctx, 31, 0x21BE28u);
    ctx->pc = 0x21BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE20u;
    // 0x21be24: 0xaf86b6e4  sw          $a2, -0x491C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948580), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A7A0u, 0x21BE20u, 0x21BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE28u;
label_21be28:
    // 0x21be28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21be28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21be2c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BE2Cu;
    {
        const bool branch_taken_0x21be2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21be2c) {
            ctx->pc = 0x21BE44u;
            goto label_21be44;
        }
    }
    ctx->pc = 0x21BE34u;
    // 0x21be34: 0xc086d98  jal         func_21B660
    ctx->pc = 0x21BE34u;
    SET_GPR_U32(ctx, 31, 0x21BE3Cu);
    ctx->pc = 0x21B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B660u, 0x21BE34u, 0x21BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE3Cu;
label_21be3c:
    // 0x21be3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21BE3Cu;
    {
        const bool branch_taken_0x21be3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE3Cu;
        // 0x21be40: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be3c) {
            ctx->pc = 0x21BE7Cu;
            goto label_21be7c;
        }
    }
    ctx->pc = 0x21BE44u;
label_21be44:
    // 0x21be44: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BE44u;
    {
        const bool branch_taken_0x21be44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE44u;
        // 0x21be48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be44) {
            ctx->pc = 0x21BE5Cu;
            goto label_21be5c;
        }
    }
    ctx->pc = 0x21BE4Cu;
    // 0x21be4c: 0xc086cb8  jal         func_21B2E0
    ctx->pc = 0x21BE4Cu;
    SET_GPR_U32(ctx, 31, 0x21BE54u);
    ctx->pc = 0x21B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B2E0u, 0x21BE4Cu, 0x21BE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE54u;
label_21be54:
    // 0x21be54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21BE54u;
    {
        const bool branch_taken_0x21be54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE54u;
        // 0x21be58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be54) {
            ctx->pc = 0x21BE7Cu;
            goto label_21be7c;
        }
    }
    ctx->pc = 0x21BE5Cu;
label_21be5c:
    // 0x21be5c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BE5Cu;
    {
        const bool branch_taken_0x21be5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21be5c) {
            ctx->pc = 0x21BE74u;
            goto label_21be74;
        }
    }
    ctx->pc = 0x21BE64u;
    // 0x21be64: 0xc086d38  jal         func_21B4E0
    ctx->pc = 0x21BE64u;
    SET_GPR_U32(ctx, 31, 0x21BE6Cu);
    ctx->pc = 0x21B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B4E0u, 0x21BE64u, 0x21BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE6Cu;
label_21be6c:
    // 0x21be6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21BE6Cu;
    {
        const bool branch_taken_0x21be6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE6Cu;
        // 0x21be70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be6c) {
            ctx->pc = 0x21BE7Cu;
            goto label_21be7c;
        }
    }
    ctx->pc = 0x21BE74u;
label_21be74:
    // 0x21be74: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21BE74u;
    SET_GPR_U32(ctx, 31, 0x21BE7Cu);
    ctx->pc = 0x21BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE74u;
    // 0x21be78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21BE74u, 0x21BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE7Cu;
label_21be7c:
    // 0x21be7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21be7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21be80: 0x3e00008  jr          $ra
    ctx->pc = 0x21BE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE80u;
        // 0x21be84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BE88u;
}
