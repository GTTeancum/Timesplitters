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

// Function: __mdiff
// Address: 0x2ec868 - 0x2ec9f8
void ps2___mdiff_0x2ec868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mdiff_0x2ec868");
#endif

    switch (ctx->pc) {
        case 0x2ec898u: goto label_2ec898;
        case 0x2ec8acu: goto label_2ec8ac;
        case 0x2ec8e4u: goto label_2ec8e4;
        case 0x2ec918u: goto label_2ec918;
        case 0x2ec970u: goto label_2ec970;
        case 0x2ec9b8u: goto label_2ec9b8;
        default: break;
    }

    ctx->pc = 0x2ec868u;

    // 0x2ec868: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ec868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ec86c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ec86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ec870: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ec870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ec874: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ec874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec878: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ec878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ec87c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ec87cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec880: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ec880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec888: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ec888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ec88c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ec88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec890: 0xc0bb200  jal         func_2EC800
    ctx->pc = 0x2EC890u;
    SET_GPR_U32(ctx, 31, 0x2EC898u);
    ctx->pc = 0x2EC894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC890u;
    // 0x2ec894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC800u, 0x2EC890u, 0x2EC898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC898u;
label_2ec898:
    // 0x2ec898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec89c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC89Cu;
    {
        const bool branch_taken_0x2ec89c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC89Cu;
        // 0x2ec8a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec89c) {
            ctx->pc = 0x2EC8C0u;
            goto label_2ec8c0;
        }
    }
    ctx->pc = 0x2EC8A4u;
    // 0x2ec8a4: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2EC8A4u;
    SET_GPR_U32(ctx, 31, 0x2EC8ACu);
    ctx->pc = 0x2EC8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC8A4u;
    // 0x2ec8a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2EC8A4u, 0x2EC8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8ACu;
label_2ec8ac:
    // 0x2ec8ac: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2ec8acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec8b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec8b4: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x2ec8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x2ec8b8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2EC8B8u;
    {
        const bool branch_taken_0x2ec8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8B8u;
        // 0x2ec8bc: 0xad620010  sw          $v0, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8b8) {
            ctx->pc = 0x2EC9D8u;
            goto label_2ec9d8;
        }
    }
    ctx->pc = 0x2EC8C0u;
label_2ec8c0:
    // 0x2ec8c0: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC8C0u;
    {
        const bool branch_taken_0x2ec8c0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2EC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8C0u;
        // 0x2ec8c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8c0) {
            ctx->pc = 0x2EC8D8u;
            goto label_2ec8d8;
        }
    }
    ctx->pc = 0x2EC8C8u;
    // 0x2ec8c8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2ec8c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec8cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ec8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec8d0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2ec8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec8d4: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x2ec8d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2ec8d8:
    // 0x2ec8d8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2ec8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ec8dc: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2EC8DCu;
    SET_GPR_U32(ctx, 31, 0x2EC8E4u);
    ctx->pc = 0x2EC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC8DCu;
    // 0x2ec8e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2EC8DCu, 0x2EC8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8E4u;
label_2ec8e4:
    // 0x2ec8e4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2ec8e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec8e8: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x2ec8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2ec8ec: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x2ec8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x2ec8f0: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x2ec8f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2ec8f4: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x2ec8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x2ec8f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ec8f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec8fc: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x2ec8fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ec900: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2ec900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ec904: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x2ec904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2ec908: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ec908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec90c: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x2ec90cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2ec910: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x2ec910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2ec914: 0x0  nop
    ctx->pc = 0x2ec914u;
    // NOP
label_2ec918:
    // 0x2ec918: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2ec918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ec91c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2ec91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ec920: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2ec920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ec924: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2ec924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2ec928: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ec928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ec92c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2ec92cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec930: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x2ec930u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2ec934: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2ec934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec938: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2ec938u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ec93c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2ec93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2ec940: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2ec940u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ec944: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x2ec944u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2ec948: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2ec948u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ec94c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2ec94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2ec950: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x2ec950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ec954: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x2ec954u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ec958: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x2ec958u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2ec95c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EC95Cu;
    {
        const bool branch_taken_0x2ec95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC95Cu;
        // 0x2ec960: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec95c) {
            ctx->pc = 0x2EC918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec918;
        }
    }
    ctx->pc = 0x2EC964u;
    // 0x2ec964: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x2ec964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2ec968: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC968u;
    {
        const bool branch_taken_0x2ec968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec968) {
            ctx->pc = 0x2EC96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC968u;
            // 0x2ec96c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC9A8u;
            goto label_2ec9a8;
        }
    }
    ctx->pc = 0x2EC970u;
label_2ec970:
    // 0x2ec970: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2ec970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ec974: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2ec974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ec978: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ec978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec97c: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x2ec97cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2ec980: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2ec980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2ec984: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2ec984u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ec988: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x2ec988u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2ec98c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2ec98cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ec990: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x2ec990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ec994: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x2ec994u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ec998: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x2ec998u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2ec99c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2EC99Cu;
    {
        const bool branch_taken_0x2ec99c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC99Cu;
        // 0x2ec9a0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec99c) {
            ctx->pc = 0x2EC970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec970;
        }
    }
    ctx->pc = 0x2EC9A4u;
    // 0x2ec9a4: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2ec9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_2ec9a8:
    // 0x2ec9a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ec9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ec9ac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2EC9ACu;
    {
        const bool branch_taken_0x2ec9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9ac) {
            ctx->pc = 0x2EC9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC9ACu;
            // 0x2ec9b0: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC9D8u;
            goto label_2ec9d8;
        }
    }
    ctx->pc = 0x2EC9B4u;
    // 0x2ec9b4: 0x0  nop
    ctx->pc = 0x2ec9b4u;
    // NOP
label_2ec9b8:
    // 0x2ec9b8: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2ec9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x2ec9bc: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2ec9bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2ec9c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ec9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ec9c4: 0x0  nop
    ctx->pc = 0x2ec9c4u;
    // NOP
    // 0x2ec9c8: 0x0  nop
    ctx->pc = 0x2ec9c8u;
    // NOP
    // 0x2ec9cc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EC9CCu;
    {
        const bool branch_taken_0x2ec9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9cc) {
            ctx->pc = 0x2EC9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec9b8;
        }
    }
    ctx->pc = 0x2EC9D4u;
    // 0x2ec9d4: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x2ec9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_2ec9d8:
    // 0x2ec9d8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2ec9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec9dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ec9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec9e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ec9e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec9e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ec9e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec9e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ec9e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9F0u;
        // 0x2ec9f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC9F8u;
}
