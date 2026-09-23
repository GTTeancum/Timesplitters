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

// Function: mmStartMessage
// Address: 0x24ca80 - 0x24cbec
void mmStartMessage_0x24ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmStartMessage_0x24ca80");
#endif

    switch (ctx->pc) {
        case 0x24cac0u: goto label_24cac0;
        case 0x24cb38u: goto label_24cb38;
        case 0x24cba4u: goto label_24cba4;
        case 0x24cbb4u: goto label_24cbb4;
        default: break;
    }

    ctx->pc = 0x24ca80u;

    // 0x24ca80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24ca84: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x24ca84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24ca8c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x24ca8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca90: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x24ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x24ca94: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24ca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x24ca98: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x24ca98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x24ca9c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24CA9Cu;
    {
        const bool branch_taken_0x24ca9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA9Cu;
        // 0x24caa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca9c) {
            ctx->pc = 0x24CAF4u;
            goto label_24caf4;
        }
    }
    ctx->pc = 0x24CAA4u;
    // 0x24caa4: 0x8f8aa004  lw          $t2, -0x5FFC($gp)
    ctx->pc = 0x24caa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24caa8: 0x3c0b01fc  lui         $t3, 0x1FC
    ctx->pc = 0x24caa8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)508 << 16));
    // 0x24caac: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x24caacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24cab0: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x24cab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x24cab4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x24cab4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x24cab8: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x24cab8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x24cabc: 0x25633a00  addiu       $v1, $t3, 0x3A00
    ctx->pc = 0x24cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 14848));
label_24cac0:
    // 0x24cac0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x24cac0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24cac4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x24cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x24cac8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24cac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24cacc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x24caccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x24cad0: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x24cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x24cad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24cad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cad8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x24cad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24cadc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24CADCu;
    {
        const bool branch_taken_0x24cadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CADCu;
        // 0x24cae0: 0x28e203ff  slti        $v0, $a3, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1023) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cadc) {
            ctx->pc = 0x24CB0Cu;
            goto label_24cb0c;
        }
    }
    ctx->pc = 0x24CAE4u;
    // 0x24cae4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24CAE4u;
    {
        const bool branch_taken_0x24cae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAE4u;
        // 0x24cae8: 0x25633a00  addiu       $v1, $t3, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 14848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cae4) {
            ctx->pc = 0x24CAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24cac0;
        }
    }
    ctx->pc = 0x24CAECu;
    // 0x24caec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24CAECu;
    {
        const bool branch_taken_0x24caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAECu;
        // 0x24caf0: 0x25623a00  addiu       $v0, $t3, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 14848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24caec) {
            ctx->pc = 0x24CB10u;
            goto label_24cb10;
        }
    }
    ctx->pc = 0x24CAF4u;
label_24caf4:
    // 0x24caf4: 0x8f8aa004  lw          $t2, -0x5FFC($gp)
    ctx->pc = 0x24caf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24caf8: 0x3c0b01fc  lui         $t3, 0x1FC
    ctx->pc = 0x24caf8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)508 << 16));
    // 0x24cafc: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x24cafcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24cb00: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x24cb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x24cb04: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x24cb04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x24cb08: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x24cb08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
label_24cb0c:
    // 0x24cb0c: 0x25623a00  addiu       $v0, $t3, 0x3A00
    ctx->pc = 0x24cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 14848));
label_24cb10:
    // 0x24cb10: 0xaf86b838  sw          $a2, -0x47C8($gp)
    ctx->pc = 0x24cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948920), GPR_U32(ctx, 6));
    // 0x24cb14: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x24cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24cb18: 0xaf8cb83c  sw          $t4, -0x47C4($gp)
    ctx->pc = 0x24cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948924), GPR_U32(ctx, 12));
    // 0x24cb1c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x24cb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24cb20: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x24cb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb24: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x24cb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb28: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x24cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x24cb2c: 0xaf80b840  sw          $zero, -0x47C0($gp)
    ctx->pc = 0x24cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 0));
    // 0x24cb30: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x24CB30u;
    SET_GPR_U32(ctx, 31, 0x24CB38u);
    ctx->pc = 0x24CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB30u;
    // 0x24cb34: 0xaf82b844  sw          $v0, -0x47BC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x24CB30u, 0x24CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB38u;
label_24cb38:
    // 0x24cb38: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x24cb38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cb3c: 0x260599f0  addiu       $a1, $s0, -0x6610
    ctx->pc = 0x24cb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x24cb40: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x24cb40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x24cb44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb48: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x24cb48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x24cb4c: 0x8caa001c  lw          $t2, 0x1C($a1)
    ctx->pc = 0x24cb4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x24cb50: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x24cb50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x24cb54: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x24cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x24cb58: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x24cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x24cb5c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x24cb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x24cb60: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x24cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x24cb64: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x24cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x24cb68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24cb68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x24cb6c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x24cb6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x24cb70: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x24cb70u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24cb74: 0x1435023  subu        $t2, $t2, $v1
    ctx->pc = 0x24cb74u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x24cb78: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x24cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x24cb7c: 0x1481821  addu        $v1, $t2, $t0
    ctx->pc = 0x24cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x24cb80: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x24cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x24cb84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24cb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb88: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x24cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x24cb8c: 0x24062880  addiu       $a2, $zero, 0x2880
    ctx->pc = 0x24cb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x24cb90: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x24cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x24cb94: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x24cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x24cb98: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x24cb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x24cb9c: 0xc08bbc4  jal         func_22EF10
    ctx->pc = 0x24CB9Cu;
    SET_GPR_U32(ctx, 31, 0x24CBA4u);
    ctx->pc = 0x24CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB9Cu;
    // 0x24cba0: 0xafaa0004  sw          $t2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF10u, 0x24CB9Cu, 0x24CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBA4u;
label_24cba4:
    // 0x24cba4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x24cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24cba8: 0x26256828  addiu       $a1, $s1, 0x6828
    ctx->pc = 0x24cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 26664));
    // 0x24cbac: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x24CBACu;
    SET_GPR_U32(ctx, 31, 0x24CBB4u);
    ctx->pc = 0x24CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBACu;
    // 0x24cbb0: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x24CBACu, 0x24CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBB4u;
label_24cbb4:
    // 0x24cbb4: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x24cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24cbb8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x24cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24cbbc: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24cbc0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x24cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24cbc4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x24cbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x24cbc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24cbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24cbcc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24cbd0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24cbd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cbd4: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x24cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x24cbd8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24cbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cbdc: 0xaf84a1f4  sw          $a0, -0x5E0C($gp)
    ctx->pc = 0x24cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943220), GPR_U32(ctx, 4));
    // 0x24cbe0: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x24cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    // 0x24cbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x24CBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBE4u;
        // 0x24cbe8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CBECu;
}
