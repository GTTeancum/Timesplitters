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

// Function: _d2b
// Address: 0x2ecc10 - 0x2ecd8c
void _d2b_0x2ecc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_d2b_0x2ecc10");
#endif

    switch (ctx->pc) {
        case 0x2ecc44u: goto label_2ecc44;
        case 0x2eccacu: goto label_2eccac;
        case 0x2ecd10u: goto label_2ecd10;
        case 0x2ecd58u: goto label_2ecd58;
        default: break;
    }

    ctx->pc = 0x2ecc10u;

    // 0x2ecc10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ecc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ecc14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ecc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ecc18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ecc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc1c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2ecc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ecc20: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2ecc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ecc24: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2ecc24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc28: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ecc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ecc2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2ecc2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc30: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ecc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ecc34: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ecc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ecc38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ecc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ecc3c: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2ECC3Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC44u);
    ctx->pc = 0x2ECC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC3Cu;
    // 0x2ecc40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2ECC3Cu, 0x2ECC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC44u;
label_2ecc44:
    // 0x2ecc44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ecc44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc48: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x2ecc48u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2ecc4c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2ecc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2ecc50: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x2ecc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x2ecc54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ecc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ecc58: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2ecc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2ecc5c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ecc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ecc60: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2ecc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2ecc64: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x2ecc64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x2ecc68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ecc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecc6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ecc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ecc70: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2ecc70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2ecc74: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2ecc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ecc78: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x2ecc78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2ecc7c: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x2ecc7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x2ecc80: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECC80u;
    {
        const bool branch_taken_0x2ecc80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC80u;
        // 0x2ecc84: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc80) {
            ctx->pc = 0x2ECC94u;
            goto label_2ecc94;
        }
    }
    ctx->pc = 0x2ECC88u;
    // 0x2ecc88: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2ecc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2ecc8c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2ecc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2ecc90: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2ecc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2ecc94:
    // 0x2ecc94: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2ecc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2ecc98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ecc98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ecc9c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2ECC9Cu;
    {
        const bool branch_taken_0x2ecc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC9Cu;
        // 0x2ecca0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc9c) {
            ctx->pc = 0x2ECD04u;
            goto label_2ecd04;
        }
    }
    ctx->pc = 0x2ECCA4u;
    // 0x2ecca4: 0xc0bb098  jal         func_2EC260
    ctx->pc = 0x2ECCA4u;
    SET_GPR_U32(ctx, 31, 0x2ECCACu);
    ctx->pc = 0x2ECCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCA4u;
    // 0x2ecca8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC260u, 0x2ECCA4u, 0x2ECCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCACu;
label_2eccac:
    // 0x2eccac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eccacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eccb0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2ECCB0u;
    {
        const bool branch_taken_0x2eccb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCB0u;
        // 0x2eccb4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eccb0) {
            ctx->pc = 0x2ECCDCu;
            goto label_2eccdc;
        }
    }
    ctx->pc = 0x2ECCB8u;
    // 0x2eccb8: 0x52023  negu        $a0, $a1
    ctx->pc = 0x2eccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2eccbc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2eccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eccc0: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2eccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2eccc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eccc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eccc8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2eccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2ecccc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2eccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eccd0: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x2eccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2eccd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECCD4u;
    {
        const bool branch_taken_0x2eccd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCD4u;
        // 0x2eccd8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eccd4) {
            ctx->pc = 0x2ECCE4u;
            goto label_2ecce4;
        }
    }
    ctx->pc = 0x2ECCDCu;
label_2eccdc:
    // 0x2eccdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2eccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecce0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2ecce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2ecce4:
    // 0x2ecce4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ecce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ecce8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ecce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eccec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2eccecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eccf0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2eccf0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2eccf4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2eccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2eccf8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2eccf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eccfc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2ECCFCu;
    {
        const bool branch_taken_0x2eccfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCFCu;
        // 0x2ecd00: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eccfc) {
            ctx->pc = 0x2ECD24u;
            goto label_2ecd24;
        }
    }
    ctx->pc = 0x2ECD04u;
label_2ecd04:
    // 0x2ecd04: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2ecd04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2ecd08: 0xc0bb098  jal         func_2EC260
    ctx->pc = 0x2ECD08u;
    SET_GPR_U32(ctx, 31, 0x2ECD10u);
    ctx->pc = 0x2ECD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD08u;
    // 0x2ecd0c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC260u, 0x2ECD08u, 0x2ECD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD10u;
label_2ecd10:
    // 0x2ecd10: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2ecd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ecd14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ecd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecd18: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2ecd18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2ecd1c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x2ecd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2ecd20: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x2ecd20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_2ecd24:
    // 0x2ecd24: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECD24u;
    {
        const bool branch_taken_0x2ecd24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD24u;
        // 0x2ecd28: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd24) {
            ctx->pc = 0x2ECD40u;
            goto label_2ecd40;
        }
    }
    ctx->pc = 0x2ECD2Cu;
    // 0x2ecd2c: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x2ecd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2ecd30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2ecd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ecd34: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ecd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ecd38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2ECD38u;
    {
        const bool branch_taken_0x2ecd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD38u;
        // 0x2ecd3c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd38) {
            ctx->pc = 0x2ECD60u;
            goto label_2ecd60;
        }
    }
    ctx->pc = 0x2ECD40u;
label_2ecd40:
    // 0x2ecd40: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x2ecd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x2ecd44: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ecd44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ecd48: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2ecd48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2ecd4c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ecd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ecd50: 0xc0bb076  jal         func_2EC1D8
    ctx->pc = 0x2ECD50u;
    SET_GPR_U32(ctx, 31, 0x2ECD58u);
    ctx->pc = 0x2ECD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD50u;
    // 0x2ecd54: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC1D8u, 0x2ECD50u, 0x2ECD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD58u;
label_2ecd58:
    // 0x2ecd58: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x2ecd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2ecd5c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ecd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ecd60:
    // 0x2ecd60: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2ecd60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2ecd64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ecd64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ecd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ecd6c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2ecd6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ecd70: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ecd70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ecd74: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ecd74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ecd78: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ecd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ecd7c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ecd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ecd80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ecd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecd84: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD84u;
        // 0x2ecd88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECD8Cu;
}
