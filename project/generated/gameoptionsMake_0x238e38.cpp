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

// Function: gameoptionsMake
// Address: 0x238e38 - 0x238f3c
void gameoptionsMake_0x238e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameoptionsMake_0x238e38");
#endif

    switch (ctx->pc) {
        case 0x238e38u: goto label_238e38;
        case 0x238e3cu: goto label_238e3c;
        case 0x238e40u: goto label_238e40;
        case 0x238e44u: goto label_238e44;
        case 0x238e48u: goto label_238e48;
        case 0x238e4cu: goto label_238e4c;
        case 0x238e50u: goto label_238e50;
        case 0x238e54u: goto label_238e54;
        case 0x238e58u: goto label_238e58;
        case 0x238e5cu: goto label_238e5c;
        case 0x238e60u: goto label_238e60;
        case 0x238e64u: goto label_238e64;
        case 0x238e68u: goto label_238e68;
        case 0x238e6cu: goto label_238e6c;
        case 0x238e70u: goto label_238e70;
        case 0x238e74u: goto label_238e74;
        case 0x238e78u: goto label_238e78;
        case 0x238e7cu: goto label_238e7c;
        case 0x238e80u: goto label_238e80;
        case 0x238e84u: goto label_238e84;
        case 0x238e88u: goto label_238e88;
        case 0x238e8cu: goto label_238e8c;
        case 0x238e90u: goto label_238e90;
        case 0x238e94u: goto label_238e94;
        case 0x238e98u: goto label_238e98;
        case 0x238e9cu: goto label_238e9c;
        case 0x238ea0u: goto label_238ea0;
        case 0x238ea4u: goto label_238ea4;
        case 0x238ea8u: goto label_238ea8;
        case 0x238eacu: goto label_238eac;
        case 0x238eb0u: goto label_238eb0;
        case 0x238eb4u: goto label_238eb4;
        case 0x238eb8u: goto label_238eb8;
        case 0x238ebcu: goto label_238ebc;
        case 0x238ec0u: goto label_238ec0;
        case 0x238ec4u: goto label_238ec4;
        case 0x238ec8u: goto label_238ec8;
        case 0x238eccu: goto label_238ecc;
        case 0x238ed0u: goto label_238ed0;
        case 0x238ed4u: goto label_238ed4;
        case 0x238ed8u: goto label_238ed8;
        case 0x238edcu: goto label_238edc;
        case 0x238ee0u: goto label_238ee0;
        case 0x238ee4u: goto label_238ee4;
        case 0x238ee8u: goto label_238ee8;
        case 0x238eecu: goto label_238eec;
        case 0x238ef0u: goto label_238ef0;
        case 0x238ef4u: goto label_238ef4;
        case 0x238ef8u: goto label_238ef8;
        case 0x238efcu: goto label_238efc;
        case 0x238f00u: goto label_238f00;
        case 0x238f04u: goto label_238f04;
        case 0x238f08u: goto label_238f08;
        case 0x238f0cu: goto label_238f0c;
        case 0x238f10u: goto label_238f10;
        case 0x238f14u: goto label_238f14;
        case 0x238f18u: goto label_238f18;
        case 0x238f1cu: goto label_238f1c;
        case 0x238f20u: goto label_238f20;
        case 0x238f24u: goto label_238f24;
        case 0x238f28u: goto label_238f28;
        case 0x238f2cu: goto label_238f2c;
        case 0x238f30u: goto label_238f30;
        case 0x238f34u: goto label_238f34;
        case 0x238f38u: goto label_238f38;
        default: break;
    }

    ctx->pc = 0x238e38u;

label_238e38:
    // 0x238e38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_238e3c:
    // 0x238e3c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x238e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_238e40:
    // 0x238e40: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x238e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_238e44:
    // 0x238e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238e48:
    // 0x238e48: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x238e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_238e4c:
    // 0x238e4c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x238e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_238e50:
    // 0x238e50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x238e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_238e54:
    // 0x238e54: 0x3c1301fc  lui         $s3, 0x1FC
    ctx->pc = 0x238e54u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)508 << 16));
label_238e58:
    // 0x238e58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x238e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_238e5c:
    // 0x238e5c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x238e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
label_238e60:
    // 0x238e60: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x238e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_238e64:
    // 0x238e64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x238e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238e68:
    // 0x238e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238e6c:
    // 0x238e6c: 0xac623a08  sw          $v0, 0x3A08($v1)
    ctx->pc = 0x238e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14856), GPR_U32(ctx, 2));
label_238e70:
    // 0x238e70: 0xaca039e0  sw          $zero, 0x39E0($a1)
    ctx->pc = 0x238e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14816), GPR_U32(ctx, 0));
label_238e74:
    // 0x238e74: 0xac8038b0  sw          $zero, 0x38B0($a0)
    ctx->pc = 0x238e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14512), GPR_U32(ctx, 0));
label_238e78:
    // 0x238e78: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x238e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_238e7c:
    // 0x238e7c: 0x0  nop
    ctx->pc = 0x238e7cu;
    // NOP
label_238e80:
    // 0x238e80: 0x26622c98  addiu       $v0, $s3, 0x2C98
    ctx->pc = 0x238e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11416));
label_238e84:
    // 0x238e84: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x238e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_238e88:
    // 0x238e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238e8c:
    // 0x238e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238e90:
    // 0x238e90: 0xc0b9583  jal         func_2E560C
label_238e94:
    if (ctx->pc == 0x238E94u) {
        ctx->pc = 0x238E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E90u;
        // 0x238e94: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E98u;
        goto label_238e98;
    }
    ctx->pc = 0x238E90u;
    SET_GPR_U32(ctx, 31, 0x238E98u);
    ctx->pc = 0x238E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E90u;
    // 0x238e94: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x238E90u, 0x238E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E98u;
label_238e98:
    // 0x238e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238e9c:
    // 0x238e9c: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x238e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_238ea0:
    // 0x238ea0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x238ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_238ea4:
    // 0x238ea4: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x238ea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_238ea8:
    // 0x238ea8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x238ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_238eac:
    // 0x238eac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x238eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_238eb0:
    // 0x238eb0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x238eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_238eb4:
    // 0x238eb4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_238eb8:
    if (ctx->pc == 0x238EB8u) {
        ctx->pc = 0x238EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EB4u;
        // 0x238eb8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EBCu;
        goto label_238ebc;
    }
    ctx->pc = 0x238EB4u;
    {
        const bool branch_taken_0x238eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EB4u;
        // 0x238eb8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238eb4) {
            ctx->pc = 0x238F10u;
            goto label_238f10;
        }
    }
    ctx->pc = 0x238EBCu;
label_238ebc:
    // 0x238ebc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x238ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_238ec0:
    // 0x238ec0: 0x26431cf0  addiu       $v1, $s2, 0x1CF0
    ctx->pc = 0x238ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7408));
label_238ec4:
    // 0x238ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_238ec8:
    // 0x238ec8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x238ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238ecc:
    // 0x238ecc: 0x800008  jr          $a0
label_238ed0:
    if (ctx->pc == 0x238ED0u) {
        ctx->pc = 0x238ED4u;
        goto label_238ed4;
    }
    ctx->pc = 0x238ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238ECCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x238ED4u;
label_238ed4:
    // 0x238ed4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x238ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_238ed8:
    // 0x238ed8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x238ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_238edc:
    // 0x238edc: 0x1000000c  b           . + 4 + (0xC << 2)
label_238ee0:
    if (ctx->pc == 0x238EE0u) {
        ctx->pc = 0x238EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EDCu;
        // 0x238ee0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EE4u;
        goto label_238ee4;
    }
    ctx->pc = 0x238EDCu;
    {
        const bool branch_taken_0x238edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EDCu;
        // 0x238ee0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238edc) {
            ctx->pc = 0x238F10u;
            goto label_238f10;
        }
    }
    ctx->pc = 0x238EE4u;
label_238ee4:
    // 0x238ee4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x238ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_238ee8:
    // 0x238ee8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x238ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_238eec:
    // 0x238eec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x238eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_238ef0:
    // 0x238ef0: 0x10000007  b           . + 4 + (0x7 << 2)
label_238ef4:
    if (ctx->pc == 0x238EF4u) {
        ctx->pc = 0x238EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EF0u;
        // 0x238ef4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EF8u;
        goto label_238ef8;
    }
    ctx->pc = 0x238EF0u;
    {
        const bool branch_taken_0x238ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EF0u;
        // 0x238ef4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ef0) {
            ctx->pc = 0x238F10u;
            goto label_238f10;
        }
    }
    ctx->pc = 0x238EF8u;
label_238ef8:
    // 0x238ef8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x238ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_238efc:
    // 0x238efc: 0x10000004  b           . + 4 + (0x4 << 2)
label_238f00:
    if (ctx->pc == 0x238F00u) {
        ctx->pc = 0x238F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EFCu;
        // 0x238f00: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F04u;
        goto label_238f04;
    }
    ctx->pc = 0x238EFCu;
    {
        const bool branch_taken_0x238efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EFCu;
        // 0x238f00: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238efc) {
            ctx->pc = 0x238F10u;
            goto label_238f10;
        }
    }
    ctx->pc = 0x238F04u;
label_238f04:
    // 0x238f04: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x238f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_238f08:
    // 0x238f08: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x238f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_238f0c:
    // 0x238f0c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x238f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_238f10:
    // 0x238f10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x238f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_238f14:
    // 0x238f14: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x238f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_238f18:
    // 0x238f18: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_238f1c:
    if (ctx->pc == 0x238F1Cu) {
        ctx->pc = 0x238F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F18u;
        // 0x238f1c: 0x111940  sll         $v1, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F20u;
        goto label_238f20;
    }
    ctx->pc = 0x238F18u;
    {
        const bool branch_taken_0x238f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F18u;
        // 0x238f1c: 0x111940  sll         $v1, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f18) {
            ctx->pc = 0x238E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238e80;
        }
    }
    ctx->pc = 0x238F20u;
label_238f20:
    // 0x238f20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x238f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_238f24:
    // 0x238f24: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x238f24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_238f28:
    // 0x238f28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x238f28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_238f2c:
    // 0x238f2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238f30:
    // 0x238f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238f34:
    // 0x238f34: 0x3e00008  jr          $ra
label_238f38:
    if (ctx->pc == 0x238F38u) {
        ctx->pc = 0x238F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F34u;
        // 0x238f38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F3Cu;
        goto label_fallthrough_0x238f34;
    }
    ctx->pc = 0x238F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F34u;
        // 0x238f38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x238f34:
    ctx->pc = 0x238F3Cu;
}
