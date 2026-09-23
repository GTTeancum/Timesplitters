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

// Function: menuitemmake
// Address: 0x24bff8 - 0x24c164
void menuitemmake_0x24bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuitemmake_0x24bff8");
#endif

    switch (ctx->pc) {
        case 0x24c04cu: goto label_24c04c;
        case 0x24c08cu: goto label_24c08c;
        case 0x24c0a0u: goto label_24c0a0;
        case 0x24c0b4u: goto label_24c0b4;
        case 0x24c104u: goto label_24c104;
        default: break;
    }

    ctx->pc = 0x24bff8u;

    // 0x24bff8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24bff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24bffc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24bffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24c000: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24c000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24c004: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c008: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24c00c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24c00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c010: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24c010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24c014: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24c018: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24c018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24c01c: 0x84b40002  lh          $s4, 0x2($a1)
    ctx->pc = 0x24c01cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24c020: 0x84b30000  lh          $s3, 0x0($a1)
    ctx->pc = 0x24c020u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c024: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x24c024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c028: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x24c028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x24c02c: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x24C02Cu;
    {
        const bool branch_taken_0x24c02c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C02Cu;
        // 0x24c030: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c02c) {
            ctx->pc = 0x24C0B4u;
            goto label_24c0b4;
        }
    }
    ctx->pc = 0x24C034u;
    // 0x24c034: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x24c034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x24c038: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x24c038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x24c03c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C03Cu;
    {
        const bool branch_taken_0x24c03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C03Cu;
        // 0x24c040: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c03c) {
            ctx->pc = 0x24C054u;
            goto label_24c054;
        }
    }
    ctx->pc = 0x24C044u;
    // 0x24c044: 0xc08089c  jal         func_202270
    ctx->pc = 0x24C044u;
    SET_GPR_U32(ctx, 31, 0x24C04Cu);
    ctx->pc = 0x24C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C044u;
    // 0x24c048: 0x8f84a028  lw          $a0, -0x5FD8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x24C044u, 0x24C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C04Cu;
label_24c04c:
    // 0x24c04c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24c04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c050: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x24c050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24c054:
    // 0x24c054: 0x28c204de  slti        $v0, $a2, 0x4DE
    ctx->pc = 0x24c054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1246) ? 1 : 0);
    // 0x24c058: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24C058u;
    {
        const bool branch_taken_0x24c058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C058u;
        // 0x24c05c: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c058) {
            ctx->pc = 0x24C094u;
            goto label_24c094;
        }
    }
    ctx->pc = 0x24C060u;
    // 0x24c060: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24c060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24c064: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24c068: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x24c068u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24c06c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24c070: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24c070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c074: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24c074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c078: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x24c078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x24c07c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c080: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x24c080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24c084: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x24C084u;
    SET_GPR_U32(ctx, 31, 0x24C08Cu);
    ctx->pc = 0x24C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C084u;
    // 0x24c088: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x24C084u, 0x24C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C08Cu;
label_24c08c:
    // 0x24c08c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24C08Cu;
    {
        const bool branch_taken_0x24c08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C08Cu;
        // 0x24c090: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c08c) {
            ctx->pc = 0x24C0A4u;
            goto label_24c0a4;
        }
    }
    ctx->pc = 0x24C094u;
label_24c094:
    // 0x24c094: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24c094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c098: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x24C098u;
    SET_GPR_U32(ctx, 31, 0x24C0A0u);
    ctx->pc = 0x24C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C098u;
    // 0x24c09c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x24C098u, 0x24C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C0A0u;
label_24c0a0:
    // 0x24c0a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24c0a4:
    // 0x24c0a4: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C0A4u;
    {
        const bool branch_taken_0x24c0a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c0a4) {
            ctx->pc = 0x24C0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C0A4u;
            // 0x24c0a8: 0x9603000a  lhu         $v1, 0xA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C0B8u;
            goto label_24c0b8;
        }
    }
    ctx->pc = 0x24C0ACu;
    // 0x24c0ac: 0xc08089c  jal         func_202270
    ctx->pc = 0x24C0ACu;
    SET_GPR_U32(ctx, 31, 0x24C0B4u);
    ctx->pc = 0x24C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C0ACu;
    // 0x24c0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x24C0ACu, 0x24C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C0B4u;
label_24c0b4:
    // 0x24c0b4: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x24c0b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_24c0b8:
    // 0x24c0b8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x24c0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x24c0bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C0BCu;
    {
        const bool branch_taken_0x24c0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0BCu;
        // 0x24c0c0: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c0bc) {
            ctx->pc = 0x24C0D4u;
            goto label_24c0d4;
        }
    }
    ctx->pc = 0x24C0C4u;
    // 0x24c0c4: 0x240400fc  addiu       $a0, $zero, 0xFC
    ctx->pc = 0x24c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x24c0c8: 0x2403014c  addiu       $v1, $zero, 0x14C
    ctx->pc = 0x24c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x24c0cc: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x24c0ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x24c0d0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x24c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_24c0d4:
    // 0x24c0d4: 0x97a80004  lhu         $t0, 0x4($sp)
    ctx->pc = 0x24c0d4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24c0d8: 0x3c0b0025  lui         $t3, 0x25
    ctx->pc = 0x24c0d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37 << 16));
    // 0x24c0dc: 0x87a70000  lh          $a3, 0x0($sp)
    ctx->pc = 0x24c0dcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c0e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0e4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x24c0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x24c0e8: 0x96090008  lhu         $t1, 0x8($s0)
    ctx->pc = 0x24c0e8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24c0ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24c0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0f0: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x24c0f0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x24c0f4: 0x256bbc00  addiu       $t3, $t3, -0x4400
    ctx->pc = 0x24c0f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294949888));
    // 0x24c0f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0fc: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x24C0FCu;
    SET_GPR_U32(ctx, 31, 0x24C104u);
    ctx->pc = 0x24C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C0FCu;
    // 0x24c100: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x24C0FCu, 0x24C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C104u;
label_24c104:
    // 0x24c104: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24c104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c108: 0x28a204de  slti        $v0, $a1, 0x4DE
    ctx->pc = 0x24c108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1246) ? 1 : 0);
    // 0x24c10c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24C10Cu;
    {
        const bool branch_taken_0x24c10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C10Cu;
        // 0x24c110: 0xae500010  sw          $s0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c10c) {
            ctx->pc = 0x24C140u;
            goto label_24c140;
        }
    }
    ctx->pc = 0x24C114u;
    // 0x24c114: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x24c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24c118: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x24c118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x24c11c: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x24c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x24c120: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24c120u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24c124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24c124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24c128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24c12c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c130: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x24c130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x24c134: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C138u;
    {
        const bool branch_taken_0x24c138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C138u;
        // 0x24c13c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c138) {
            ctx->pc = 0x24C144u;
            goto label_24c144;
        }
    }
    ctx->pc = 0x24C140u;
label_24c140:
    // 0x24c140: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x24c140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
label_24c144:
    // 0x24c144: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24c144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24c148: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24c148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c14c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24c14cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c150: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24c150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c154: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24c154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c158: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24c158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c15c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C15Cu;
        // 0x24c160: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C164u;
}
