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

// Function: _lshift
// Address: 0x2ec688 - 0x2ec800
void _lshift_0x2ec688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lshift_0x2ec688");
#endif

    switch (ctx->pc) {
        case 0x2ec6e0u: goto label_2ec6e0;
        case 0x2ec714u: goto label_2ec714;
        case 0x2ec728u: goto label_2ec728;
        case 0x2ec768u: goto label_2ec768;
        case 0x2ec7a8u: goto label_2ec7a8;
        case 0x2ec7d4u: goto label_2ec7d4;
        default: break;
    }

    ctx->pc = 0x2ec688u;

    // 0x2ec688: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ec688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ec68c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2ec68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ec690: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ec690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ec694: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2ec694u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec698: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ec698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ec69c: 0x6a143  sra         $s4, $a2, 5
    ctx->pc = 0x2ec69cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 5));
    // 0x2ec6a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec6a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ec6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ec6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ec6ac: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ec6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ec6b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ec6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ec6b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ec6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ec6b8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2ec6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ec6bc: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x2ec6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ec6c0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2ec6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ec6c4: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x2ec6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ec6c8: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x2ec6c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ec6cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC6CCu;
    {
        const bool branch_taken_0x2ec6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6CCu;
        // 0x2ec6d0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6cc) {
            ctx->pc = 0x2EC704u;
            goto label_2ec704;
        }
    }
    ctx->pc = 0x2EC6D4u;
    // 0x2ec6d4: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x2ec6d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x2ec6d8: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x2ec6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2ec6dc: 0x0  nop
    ctx->pc = 0x2ec6dcu;
    // NOP
label_2ec6e0:
    // 0x2ec6e0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2ec6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2ec6e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ec6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ec6e8: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x2ec6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ec6ec: 0x0  nop
    ctx->pc = 0x2ec6ecu;
    // NOP
    // 0x2ec6f0: 0x0  nop
    ctx->pc = 0x2ec6f0u;
    // NOP
    // 0x2ec6f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EC6F4u;
    {
        const bool branch_taken_0x2ec6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec6f4) {
            ctx->pc = 0x2EC6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec6e0;
        }
    }
    ctx->pc = 0x2EC6FCu;
    // 0x2ec6fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC6FCu;
    {
        const bool branch_taken_0x2ec6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec6fc) {
            ctx->pc = 0x2EC70Cu;
            goto label_2ec70c;
        }
    }
    ctx->pc = 0x2EC704u;
label_2ec704:
    // 0x2ec704: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x2ec704u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x2ec708: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x2ec708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2ec70c:
    // 0x2ec70c: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2EC70Cu;
    SET_GPR_U32(ctx, 31, 0x2EC714u);
    ctx->pc = 0x2EC710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC70Cu;
    // 0x2ec710: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2EC70Cu, 0x2EC714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC714u;
label_2ec714:
    // 0x2ec714: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ec714u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec718: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2EC718u;
    {
        const bool branch_taken_0x2ec718 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2EC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC718u;
        // 0x2ec71c: 0x26a60014  addiu       $a2, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec718) {
            ctx->pc = 0x2EC744u;
            goto label_2ec744;
        }
    }
    ctx->pc = 0x2EC720u;
    // 0x2ec720: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ec720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec724: 0x0  nop
    ctx->pc = 0x2ec724u;
    // NOP
label_2ec728:
    // 0x2ec728: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ec728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2ec72c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2ec72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ec730: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2ec730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2ec734: 0x0  nop
    ctx->pc = 0x2ec734u;
    // NOP
    // 0x2ec738: 0x0  nop
    ctx->pc = 0x2ec738u;
    // NOP
    // 0x2ec73c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EC73Cu;
    {
        const bool branch_taken_0x2ec73c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec73c) {
            ctx->pc = 0x2EC728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec728;
        }
    }
    ctx->pc = 0x2EC744u;
label_2ec744:
    // 0x2ec744: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2ec744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ec748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ec748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec74c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ec74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec750: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC750u;
    {
        const bool branch_taken_0x2ec750 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC750u;
        // 0x2ec754: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec750) {
            ctx->pc = 0x2EC7A0u;
            goto label_2ec7a0;
        }
    }
    ctx->pc = 0x2EC758u;
    // 0x2ec758: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ec758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ec75c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ec75cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec760: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x2ec760u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ec764: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x2ec764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ec768:
    // 0x2ec768: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ec768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec76c: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x2ec76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x2ec770: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ec770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ec774: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2ec774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2ec778: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2ec778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2ec77c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ec77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec780: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2ec780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2ec784: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2ec784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2ec788: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EC788u;
    {
        const bool branch_taken_0x2ec788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC788u;
        // 0x2ec78c: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec788) {
            ctx->pc = 0x2EC768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec768;
        }
    }
    ctx->pc = 0x2EC790u;
    // 0x2ec790: 0x103800b  movn        $s0, $t0, $v1
    ctx->pc = 0x2ec790u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x2ec794: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2ec794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2ec798: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EC798u;
    {
        const bool branch_taken_0x2ec798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC798u;
        // 0x2ec79c: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec798) {
            ctx->pc = 0x2EC7C4u;
            goto label_2ec7c4;
        }
    }
    ctx->pc = 0x2EC7A0u;
label_2ec7a0:
    // 0x2ec7a0: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2ec7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2ec7a4: 0x0  nop
    ctx->pc = 0x2ec7a4u;
    // NOP
label_2ec7a8:
    // 0x2ec7a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ec7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec7ac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2ec7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2ec7b0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2ec7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2ec7b4: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x2ec7b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2ec7b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2ec7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2ec7bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EC7BCu;
    {
        const bool branch_taken_0x2ec7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec7bc) {
            ctx->pc = 0x2EC7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec7a8;
        }
    }
    ctx->pc = 0x2EC7C4u;
label_2ec7c4:
    // 0x2ec7c4: 0xaea50010  sw          $a1, 0x10($s5)
    ctx->pc = 0x2ec7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 5));
    // 0x2ec7c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ec7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec7cc: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EC7CCu;
    SET_GPR_U32(ctx, 31, 0x2EC7D4u);
    ctx->pc = 0x2EC7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC7CCu;
    // 0x2ec7d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EC7CCu, 0x2EC7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC7D4u;
label_2ec7d4:
    // 0x2ec7d4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2ec7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec7d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ec7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ec7dc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ec7dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ec7e0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ec7e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ec7e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ec7e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec7e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ec7e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec7ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ec7ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec7f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ec7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec7f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7F8u;
        // 0x2ec7fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC800u;
}
