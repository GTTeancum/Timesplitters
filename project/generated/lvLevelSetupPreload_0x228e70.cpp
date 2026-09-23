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

// Function: lvLevelSetupPreload
// Address: 0x228e70 - 0x2291e4
void lvLevelSetupPreload_0x228e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvLevelSetupPreload_0x228e70");
#endif

    switch (ctx->pc) {
        case 0x228ea0u: goto label_228ea0;
        case 0x228eecu: goto label_228eec;
        case 0x228f04u: goto label_228f04;
        case 0x228f18u: goto label_228f18;
        case 0x228f2cu: goto label_228f2c;
        case 0x228f3cu: goto label_228f3c;
        case 0x228f68u: goto label_228f68;
        case 0x228f78u: goto label_228f78;
        case 0x228f88u: goto label_228f88;
        case 0x228fc0u: goto label_228fc0;
        case 0x228fd0u: goto label_228fd0;
        case 0x228fe0u: goto label_228fe0;
        case 0x229034u: goto label_229034;
        case 0x229078u: goto label_229078;
        case 0x2290a0u: goto label_2290a0;
        case 0x2290b4u: goto label_2290b4;
        case 0x2290f8u: goto label_2290f8;
        case 0x229108u: goto label_229108;
        case 0x229118u: goto label_229118;
        case 0x229140u: goto label_229140;
        case 0x229154u: goto label_229154;
        default: break;
    }

    ctx->pc = 0x228e70u;

    // 0x228e70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x228e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x228e74: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x228e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x228e78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x228e7c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x228e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x228e80: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x228e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x228e84: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x228e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x228e88: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x228e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x228e8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x228e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x228e90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x228e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x228e94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x228e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x228e98: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x228E98u;
    SET_GPR_U32(ctx, 31, 0x228EA0u);
    ctx->pc = 0x228E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E98u;
    // 0x228e9c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x228E98u, 0x228EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228EA0u;
label_228ea0:
    // 0x228ea0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x228ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ea4: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x228ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x228ea8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x228ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x228eac: 0x106200c2  beq         $v1, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x228EACu;
    {
        const bool branch_taken_0x228eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EACu;
        // 0x228eb0: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228eac) {
            ctx->pc = 0x2291B8u;
            goto label_2291b8;
        }
    }
    ctx->pc = 0x228EB4u;
    // 0x228eb4: 0x106200c0  beq         $v1, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x228EB4u;
    {
        const bool branch_taken_0x228eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EB4u;
        // 0x228eb8: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228eb4) {
            ctx->pc = 0x2291B8u;
            goto label_2291b8;
        }
    }
    ctx->pc = 0x228EBCu;
    // 0x228ebc: 0x106200be  beq         $v1, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x228EBCu;
    {
        const bool branch_taken_0x228ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EBCu;
        // 0x228ec0: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ebc) {
            ctx->pc = 0x2291B8u;
            goto label_2291b8;
        }
    }
    ctx->pc = 0x228EC4u;
    // 0x228ec4: 0x106200bc  beq         $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x228EC4u;
    {
        const bool branch_taken_0x228ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EC4u;
        // 0x228ec8: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ec4) {
            ctx->pc = 0x2291B8u;
            goto label_2291b8;
        }
    }
    ctx->pc = 0x228ECCu;
    // 0x228ecc: 0x106200ba  beq         $v1, $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x228ECCu;
    {
        const bool branch_taken_0x228ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228ECCu;
        // 0x228ed0: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ecc) {
            ctx->pc = 0x2291B8u;
            goto label_2291b8;
        }
    }
    ctx->pc = 0x228ED4u;
    // 0x228ed4: 0x106200b8  beq         $v1, $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x228ED4u;
    {
        const bool branch_taken_0x228ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228ED4u;
        // 0x228ed8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ed4) {
            ctx->pc = 0x2291B8u;
            goto label_2291b8;
        }
    }
    ctx->pc = 0x228EDCu;
    // 0x228edc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228EDCu;
    {
        const bool branch_taken_0x228edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x228edc) {
            ctx->pc = 0x228EF4u;
            goto label_228ef4;
        }
    }
    ctx->pc = 0x228EE4u;
    // 0x228ee4: 0xc089b84  jal         func_226E10
    ctx->pc = 0x228EE4u;
    SET_GPR_U32(ctx, 31, 0x228EECu);
    ctx->pc = 0x228EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228EE4u;
    // 0x228ee8: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E10u, 0x228EE4u, 0x228EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228EECu;
label_228eec:
    // 0x228eec: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x228EECu;
    {
        const bool branch_taken_0x228eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EECu;
        // 0x228ef0: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228eec) {
            ctx->pc = 0x229170u;
            goto label_229170;
        }
    }
    ctx->pc = 0x228EF4u;
label_228ef4:
    // 0x228ef4: 0x1240009d  beqz        $s2, . + 4 + (0x9D << 2)
    ctx->pc = 0x228EF4u;
    {
        const bool branch_taken_0x228ef4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x228EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EF4u;
        // 0x228ef8: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ef4) {
            ctx->pc = 0x22916Cu;
            goto label_22916c;
        }
    }
    ctx->pc = 0x228EFCu;
    // 0x228efc: 0xc089de4  jal         func_227790
    ctx->pc = 0x228EFCu;
    SET_GPR_U32(ctx, 31, 0x228F04u);
    ctx->pc = 0x228F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228EFCu;
    // 0x228f00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x228EFCu, 0x228F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F04u;
label_228f04:
    // 0x228f04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x228f04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f08: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x228f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x228f0c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x228F0Cu;
    {
        const bool branch_taken_0x228f0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x228F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F0Cu;
        // 0x228f10: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f0c) {
            ctx->pc = 0x228F58u;
            goto label_228f58;
        }
    }
    ctx->pc = 0x228F14u;
    // 0x228f14: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x228f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_228f18:
    // 0x228f18: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x228f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x228f1c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x228f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x228f20: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x228f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228f24: 0xc08a362  jal         func_228D88
    ctx->pc = 0x228F24u;
    SET_GPR_U32(ctx, 31, 0x228F2Cu);
    ctx->pc = 0x228F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F24u;
    // 0x228f28: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x228F24u, 0x228F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F2Cu;
label_228f2c:
    // 0x228f2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x228F2Cu;
    {
        const bool branch_taken_0x228f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f2c) {
            ctx->pc = 0x228F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228F2Cu;
            // 0x228f30: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228F40u;
            goto label_228f40;
        }
    }
    ctx->pc = 0x228F34u;
    // 0x228f34: 0xc099c88  jal         func_267220
    ctx->pc = 0x228F34u;
    SET_GPR_U32(ctx, 31, 0x228F3Cu);
    ctx->pc = 0x228F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F34u;
    // 0x228f38: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x228F34u, 0x228F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F3Cu;
label_228f3c:
    // 0x228f3c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x228f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_228f40:
    // 0x228f40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x228f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x228f44: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x228f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228f48: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x228F48u;
    {
        const bool branch_taken_0x228f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F48u;
        // 0x228f4c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f48) {
            ctx->pc = 0x228F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228f18;
        }
    }
    ctx->pc = 0x228F50u;
    // 0x228f50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x228F50u;
    {
        const bool branch_taken_0x228f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F50u;
        // 0x228f54: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f50) {
            ctx->pc = 0x228F5Cu;
            goto label_228f5c;
        }
    }
    ctx->pc = 0x228F58u;
label_228f58:
    // 0x228f58: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x228f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_228f5c:
    // 0x228f5c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x228F5Cu;
    {
        const bool branch_taken_0x228f5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x228F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F5Cu;
        // 0x228f60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f5c) {
            ctx->pc = 0x228F9Cu;
            goto label_228f9c;
        }
    }
    ctx->pc = 0x228F64u;
    // 0x228f64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x228f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228f68:
    // 0x228f68: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x228f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x228f6c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x228f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x228f70: 0xc08a362  jal         func_228D88
    ctx->pc = 0x228F70u;
    SET_GPR_U32(ctx, 31, 0x228F78u);
    ctx->pc = 0x228F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F70u;
    // 0x228f74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x228F70u, 0x228F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F78u;
label_228f78:
    // 0x228f78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x228F78u;
    {
        const bool branch_taken_0x228f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f78) {
            ctx->pc = 0x228F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228F78u;
            // 0x228f7c: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228F8Cu;
            goto label_228f8c;
        }
    }
    ctx->pc = 0x228F80u;
    // 0x228f80: 0xc099c88  jal         func_267220
    ctx->pc = 0x228F80u;
    SET_GPR_U32(ctx, 31, 0x228F88u);
    ctx->pc = 0x228F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F80u;
    // 0x228f84: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x228F80u, 0x228F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F88u;
label_228f88:
    // 0x228f88: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x228f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_228f8c:
    // 0x228f8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x228f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x228f90: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x228f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228f94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x228F94u;
    {
        const bool branch_taken_0x228f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F94u;
        // 0x228f98: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f94) {
            ctx->pc = 0x228F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228f68;
        }
    }
    ctx->pc = 0x228F9Cu;
label_228f9c:
    // 0x228f9c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x228f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x228fa0: 0x1840003a  blez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x228FA0u;
    {
        const bool branch_taken_0x228fa0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x228FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FA0u;
        // 0x228fa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fa0) {
            ctx->pc = 0x22908Cu;
            goto label_22908c;
        }
    }
    ctx->pc = 0x228FA8u;
    // 0x228fa8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x228fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x228fac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x228facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x228fb0: 0x245690f8  addiu       $s6, $v0, -0x6F08
    ctx->pc = 0x228fb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938872));
    // 0x228fb4: 0x24756224  addiu       $s5, $v1, 0x6224
    ctx->pc = 0x228fb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 25124));
    // 0x228fb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x228fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fbc: 0x0  nop
    ctx->pc = 0x228fbcu;
    // NOP
label_228fc0:
    // 0x228fc0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x228fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x228fc4: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x228fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x228fc8: 0xc08a362  jal         func_228D88
    ctx->pc = 0x228FC8u;
    SET_GPR_U32(ctx, 31, 0x228FD0u);
    ctx->pc = 0x228FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FC8u;
    // 0x228fcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x228FC8u, 0x228FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FD0u;
label_228fd0:
    // 0x228fd0: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x228FD0u;
    {
        const bool branch_taken_0x228fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228fd0) {
            ctx->pc = 0x228FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228FD0u;
            // 0x228fd4: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22907Cu;
            goto label_22907c;
        }
    }
    ctx->pc = 0x228FD8u;
    // 0x228fd8: 0xc089f08  jal         func_227C20
    ctx->pc = 0x228FD8u;
    SET_GPR_U32(ctx, 31, 0x228FE0u);
    ctx->pc = 0x228FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FD8u;
    // 0x228fdc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C20u, 0x228FD8u, 0x228FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FE0u;
label_228fe0:
    // 0x228fe0: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x228FE0u;
    {
        const bool branch_taken_0x228fe0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x228FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FE0u;
        // 0x228fe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fe0) {
            ctx->pc = 0x22902Cu;
            goto label_22902c;
        }
    }
    ctx->pc = 0x228FE8u;
    // 0x228fe8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x228fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x228fec: 0x28a2ffec  slti        $v0, $a1, -0x14
    ctx->pc = 0x228fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967276) ? 1 : 0);
    // 0x228ff0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x228FF0u;
    {
        const bool branch_taken_0x228ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FF0u;
        // 0x228ff4: 0x28a2ffe7  slti        $v0, $a1, -0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ff0) {
            ctx->pc = 0x229038u;
            goto label_229038;
        }
    }
    ctx->pc = 0x228FF8u;
    // 0x228ff8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x228FF8u;
    {
        const bool branch_taken_0x228ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FF8u;
        // 0x228ffc: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ff8) {
            ctx->pc = 0x22903Cu;
            goto label_22903c;
        }
    }
    ctx->pc = 0x229000u;
    // 0x229000: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x229000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x229004: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x229004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x229008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x229008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22900c: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x22900cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x229010: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x229010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x229014: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x229014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x229018: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x229018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x22901c: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x22901cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x229020: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x229020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x229024: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x229024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x229028: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22902c:
    // 0x22902c: 0xc099c88  jal         func_267220
    ctx->pc = 0x22902Cu;
    SET_GPR_U32(ctx, 31, 0x229034u);
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x22902Cu, 0x229034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229034u;
label_229034:
    // 0x229034: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x229034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_229038:
    // 0x229038: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x229038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_22903c:
    // 0x22903c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x22903cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x229040: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x229040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x229044: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x229044u;
    {
        const bool branch_taken_0x229044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x229044) {
            ctx->pc = 0x229048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229044u;
            // 0x229048: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22907Cu;
            goto label_22907c;
        }
    }
    ctx->pc = 0x22904Cu;
    // 0x22904c: 0x26e4c4a8  addiu       $a0, $s7, -0x3B58
    ctx->pc = 0x22904cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x229050: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x229050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x229054: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x229054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x229058: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x229058u;
    {
        const bool branch_taken_0x229058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229058u;
        // 0x22905c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229058) {
            ctx->pc = 0x229078u;
            goto label_229078;
        }
    }
    ctx->pc = 0x229060u;
    // 0x229060: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x229060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x229064: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229064u;
    {
        const bool branch_taken_0x229064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229064) {
            ctx->pc = 0x229068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229064u;
            // 0x229068: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22907Cu;
            goto label_22907c;
        }
    }
    ctx->pc = 0x22906Cu;
    // 0x22906c: 0x2404013a  addiu       $a0, $zero, 0x13A
    ctx->pc = 0x22906cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
    // 0x229070: 0xc099c88  jal         func_267220
    ctx->pc = 0x229070u;
    SET_GPR_U32(ctx, 31, 0x229078u);
    ctx->pc = 0x229074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229070u;
    // 0x229074: 0x852023  subu        $a0, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x229070u, 0x229078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229078u;
label_229078:
    // 0x229078: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x229078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_22907c:
    // 0x22907c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22907cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x229080: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x229080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x229084: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x229084u;
    {
        const bool branch_taken_0x229084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229084u;
        // 0x229088: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229084) {
            ctx->pc = 0x228FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228fc0;
        }
    }
    ctx->pc = 0x22908Cu;
label_22908c:
    // 0x22908c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x22908cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x229090: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x229090u;
    {
        const bool branch_taken_0x229090 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x229094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229090u;
        // 0x229094: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229090) {
            ctx->pc = 0x2290C4u;
            goto label_2290c4;
        }
    }
    ctx->pc = 0x229098u;
    // 0x229098: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x229098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x22909c: 0x0  nop
    ctx->pc = 0x22909cu;
    // NOP
label_2290a0:
    // 0x2290a0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x2290a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2290a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2290a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2290a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2290a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2290ac: 0xc099c88  jal         func_267220
    ctx->pc = 0x2290ACu;
    SET_GPR_U32(ctx, 31, 0x2290B4u);
    ctx->pc = 0x2290B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2290ACu;
    // 0x2290b0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2290ACu, 0x2290B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2290B4u;
label_2290b4:
    // 0x2290b4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2290b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2290b8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2290b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2290bc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2290BCu;
    {
        const bool branch_taken_0x2290bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2290bc) {
            ctx->pc = 0x2290C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2290BCu;
            // 0x2290c0: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2290A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2290a0;
        }
    }
    ctx->pc = 0x2290C4u;
label_2290c4:
    // 0x2290c4: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2290c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2290c8: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2290c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2290cc: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2290CCu;
    {
        const bool branch_taken_0x2290cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2290cc) {
            ctx->pc = 0x2290D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2290CCu;
            // 0x2290d0: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2290ECu;
            goto label_2290ec;
        }
    }
    ctx->pc = 0x2290D4u;
    // 0x2290d4: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x2290d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x2290d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2290d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2290dc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2290dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2290e0: 0x54640013  bnel        $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2290E0u;
    {
        const bool branch_taken_0x2290e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2290e0) {
            ctx->pc = 0x2290E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2290E0u;
            // 0x2290e4: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229130u;
            goto label_229130;
        }
    }
    ctx->pc = 0x2290E8u;
    // 0x2290e8: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2290e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2290ec:
    // 0x2290ec: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2290ECu;
    {
        const bool branch_taken_0x2290ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2290F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290ECu;
        // 0x2290f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2290ec) {
            ctx->pc = 0x22912Cu;
            goto label_22912c;
        }
    }
    ctx->pc = 0x2290F4u;
    // 0x2290f4: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2290f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2290f8:
    // 0x2290f8: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x2290f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2290fc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2290fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229100: 0xc08a362  jal         func_228D88
    ctx->pc = 0x229100u;
    SET_GPR_U32(ctx, 31, 0x229108u);
    ctx->pc = 0x229104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229100u;
    // 0x229104: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x229100u, 0x229108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229108u;
label_229108:
    // 0x229108: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x229108u;
    {
        const bool branch_taken_0x229108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229108) {
            ctx->pc = 0x22910Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229108u;
            // 0x22910c: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22911Cu;
            goto label_22911c;
        }
    }
    ctx->pc = 0x229110u;
    // 0x229110: 0xc099c88  jal         func_267220
    ctx->pc = 0x229110u;
    SET_GPR_U32(ctx, 31, 0x229118u);
    ctx->pc = 0x229114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229110u;
    // 0x229114: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x229110u, 0x229118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229118u;
label_229118:
    // 0x229118: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x229118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_22911c:
    // 0x22911c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22911cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x229120: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x229120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x229124: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x229124u;
    {
        const bool branch_taken_0x229124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229124) {
            ctx->pc = 0x229128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229124u;
            // 0x229128: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2290F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2290f8;
        }
    }
    ctx->pc = 0x22912Cu;
label_22912c:
    // 0x22912c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x22912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_229130:
    // 0x229130: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x229130u;
    {
        const bool branch_taken_0x229130 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x229134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229130u;
        // 0x229134: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229130) {
            ctx->pc = 0x22916Cu;
            goto label_22916c;
        }
    }
    ctx->pc = 0x229138u;
    // 0x229138: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x229138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x22913c: 0x0  nop
    ctx->pc = 0x22913cu;
    // NOP
label_229140:
    // 0x229140: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x229140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x229144: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x229144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x229148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22914c: 0xc099c88  jal         func_267220
    ctx->pc = 0x22914Cu;
    SET_GPR_U32(ctx, 31, 0x229154u);
    ctx->pc = 0x229150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22914Cu;
    // 0x229150: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x22914Cu, 0x229154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229154u;
label_229154:
    // 0x229154: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x229154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x229158: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x229158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22915c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22915Cu;
    {
        const bool branch_taken_0x22915c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22915c) {
            ctx->pc = 0x229160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22915Cu;
            // 0x229160: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229140;
        }
    }
    ctx->pc = 0x229164u;
    // 0x229164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229164u;
    {
        const bool branch_taken_0x229164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229164u;
        // 0x229168: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229164) {
            ctx->pc = 0x229170u;
            goto label_229170;
        }
    }
    ctx->pc = 0x22916Cu;
label_22916c:
    // 0x22916c: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x22916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
label_229170:
    // 0x229170: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x229170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x229174: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x229174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x229178: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x229178u;
    {
        const bool branch_taken_0x229178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229178u;
        // 0x22917c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229178) {
            ctx->pc = 0x2291B8u;
            goto label_2291b8;
        }
    }
    ctx->pc = 0x229180u;
    // 0x229180: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x229180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x229184: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x229184u;
    {
        const bool branch_taken_0x229184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229184u;
        // 0x229188: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229184) {
            ctx->pc = 0x2291BCu;
            goto label_2291bc;
        }
    }
    ctx->pc = 0x22918Cu;
    // 0x22918c: 0x240400ca  addiu       $a0, $zero, 0xCA
    ctx->pc = 0x22918cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x229190: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x229190u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229194: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x229194u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229198: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x229198u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22919c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22919cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2291a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2291a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2291a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2291a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2291a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2291a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2291ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2291acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2291b0: 0x8099c88  j           func_267220
    ctx->pc = 0x2291B0u;
    ctx->pc = 0x2291B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291B0u;
    // 0x2291b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    propAddPreLoad_0x267220(rdram, ctx, runtime); return;
    ctx->pc = 0x2291B8u;
label_2291b8:
    // 0x2291b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2291b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2291bc:
    // 0x2291bc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2291bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2291c0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2291c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2291c4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2291c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2291c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2291c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2291cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2291ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2291d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2291d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2291d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2291d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2291d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2291d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2291dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2291DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2291E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291DCu;
        // 0x2291e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2291DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2291E4u;
}
