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

// Function: arcade_pageDraw
// Address: 0x23ab70 - 0x23add4
void arcade_pageDraw_0x23ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("arcade_pageDraw_0x23ab70");
#endif

    switch (ctx->pc) {
        case 0x23aba0u: goto label_23aba0;
        case 0x23abd4u: goto label_23abd4;
        case 0x23abecu: goto label_23abec;
        case 0x23ac44u: goto label_23ac44;
        case 0x23ac78u: goto label_23ac78;
        case 0x23aca0u: goto label_23aca0;
        case 0x23acdcu: goto label_23acdc;
        case 0x23ad10u: goto label_23ad10;
        case 0x23ad28u: goto label_23ad28;
        case 0x23ad48u: goto label_23ad48;
        case 0x23ad5cu: goto label_23ad5c;
        case 0x23ad78u: goto label_23ad78;
        default: break;
    }

    ctx->pc = 0x23ab70u;

    // 0x23ab70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23ab74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ab78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ab78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ab7c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23ab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x23ab80: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x23ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x23ab84: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x23ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x23ab88: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x23ab8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23ab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x23ab90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23ab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23ab94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23ab98: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x23AB98u;
    SET_GPR_U32(ctx, 31, 0x23ABA0u);
    ctx->pc = 0x23AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB98u;
    // 0x23ab9c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x23AB98u, 0x23ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABA0u;
label_23aba0:
    // 0x23aba0: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23aba4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x23aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23aba8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23aba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23abac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23ABACu;
    {
        const bool branch_taken_0x23abac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABACu;
        // 0x23abb0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abac) {
            ctx->pc = 0x23ABCCu;
            goto label_23abcc;
        }
    }
    ctx->pc = 0x23ABB4u;
    // 0x23abb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23abb8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23abbc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x23abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x23abc0: 0x24634a90  addiu       $v1, $v1, 0x4A90
    ctx->pc = 0x23abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19088));
    // 0x23abc4: 0x10830078  beq         $a0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x23ABC4u;
    {
        const bool branch_taken_0x23abc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABC4u;
        // 0x23abc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abc4) {
            ctx->pc = 0x23ADA8u;
            goto label_23ada8;
        }
    }
    ctx->pc = 0x23ABCCu;
label_23abcc:
    // 0x23abcc: 0xc08089c  jal         func_202270
    ctx->pc = 0x23ABCCu;
    SET_GPR_U32(ctx, 31, 0x23ABD4u);
    ctx->pc = 0x23ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ABCCu;
    // 0x23abd0: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23ABCCu, 0x23ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABD4u;
label_23abd4:
    // 0x23abd4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x23abd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23abd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abdc: 0x26e299f0  addiu       $v0, $s7, -0x6610
    ctx->pc = 0x23abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x23abe0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23abe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23abe4: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x23ABE4u;
    SET_GPR_U32(ctx, 31, 0x23ABECu);
    ctx->pc = 0x23ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ABE4u;
    // 0x23abe8: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x23ABE4u, 0x23ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABECu;
label_23abec:
    // 0x23abec: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23abecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23abf0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23abf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abf4: 0x96920000  lhu         $s2, 0x0($s4)
    ctx->pc = 0x23abf4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23abf8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x23abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23abfc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23abfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23ac00: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23AC00u;
    {
        const bool branch_taken_0x23ac00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC00u;
        // 0x23ac04: 0x96910002  lhu         $s1, 0x2($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac00) {
            ctx->pc = 0x23AC80u;
            goto label_23ac80;
        }
    }
    ctx->pc = 0x23AC08u;
    // 0x23ac08: 0x3c1501fc  lui         $s5, 0x1FC
    ctx->pc = 0x23ac08u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)508 << 16));
    // 0x23ac0c: 0x26b011f8  addiu       $s0, $s5, 0x11F8
    ctx->pc = 0x23ac0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4600));
    // 0x23ac10: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC1200u));
    // 0x23ac14: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x23ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x23ac18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23AC18u;
    {
        const bool branch_taken_0x23ac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC18u;
        // 0x23ac1c: 0x2642ffe0  addiu       $v0, $s2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac18) {
            ctx->pc = 0x23AC48u;
            goto label_23ac48;
        }
    }
    ctx->pc = 0x23AC20u;
    // 0x23ac20: 0x26230005  addiu       $v1, $s1, 0x5
    ctx->pc = 0x23ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x23ac24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ac24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ac28: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x23ac28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x23ac2c: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x23ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x23ac30: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x23ac30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23ac34: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x23ac34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x23ac38: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x23ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23ac3c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x23AC3Cu;
    SET_GPR_U32(ctx, 31, 0x23AC44u);
    ctx->pc = 0x23AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC3Cu;
    // 0x23ac40: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x23AC3Cu, 0x23AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC44u;
label_23ac44:
    // 0x23ac44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23ac48:
    // 0x23ac48: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x23ac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x23ac4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23AC4Cu;
    {
        const bool branch_taken_0x23ac4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC4Cu;
        // 0x23ac50: 0x2662ffc0  addiu       $v0, $s3, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac4c) {
            ctx->pc = 0x23AC84u;
            goto label_23ac84;
        }
    }
    ctx->pc = 0x23AC54u;
    // 0x23ac54: 0x26230005  addiu       $v1, $s1, 0x5
    ctx->pc = 0x23ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x23ac58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ac58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ac5c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x23ac5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x23ac60: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x23ac60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x23ac64: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x23ac64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23ac68: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x23ac68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x23ac6c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x23ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x23ac70: 0xc08b952  jal         func_22E548
    ctx->pc = 0x23AC70u;
    SET_GPR_U32(ctx, 31, 0x23AC78u);
    ctx->pc = 0x23AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC70u;
    // 0x23ac74: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x23AC70u, 0x23AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC78u;
label_23ac78:
    // 0x23ac78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23AC78u;
    {
        const bool branch_taken_0x23ac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC78u;
        // 0x23ac7c: 0x26a411f8  addiu       $a0, $s5, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac78) {
            ctx->pc = 0x23AC88u;
            goto label_23ac88;
        }
    }
    ctx->pc = 0x23AC80u;
label_23ac80:
    // 0x23ac80: 0x3c1501fc  lui         $s5, 0x1FC
    ctx->pc = 0x23ac80u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)508 << 16));
label_23ac84:
    // 0x23ac84: 0x26a411f8  addiu       $a0, $s5, 0x11F8
    ctx->pc = 0x23ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4600));
label_23ac88:
    // 0x23ac88: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x23ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23ac8c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x23ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x23ac90: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23AC90u;
    {
        const bool branch_taken_0x23ac90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC90u;
        // 0x23ac94: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac90) {
            ctx->pc = 0x23ACA8u;
            goto label_23aca8;
        }
    }
    ctx->pc = 0x23AC98u;
    // 0x23ac98: 0xc08962e  jal         func_2258B8
    ctx->pc = 0x23AC98u;
    SET_GPR_U32(ctx, 31, 0x23ACA0u);
    ctx->pc = 0x23AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC98u;
    // 0x23ac9c: 0x8c840028  lw          $a0, 0x28($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258B8u, 0x23AC98u, 0x23ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACA0u;
label_23aca0:
    // 0x23aca0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23ACA0u;
    {
        const bool branch_taken_0x23aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACA0u;
        // 0x23aca4: 0x3c074078  lui         $a3, 0x4078 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aca0) {
            ctx->pc = 0x23ACC4u;
            goto label_23acc4;
        }
    }
    ctx->pc = 0x23ACA8u;
label_23aca8:
    // 0x23aca8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x23aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x23acac: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x23acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x23acb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23acb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23acb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23acbc: 0x8c8203e8  lw          $v0, 0x3E8($a0)
    ctx->pc = 0x23acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1000)));
    // 0x23acc0: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x23acc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
label_23acc4:
    // 0x23acc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23acc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23acc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23accc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23acccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acd0: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x23acd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x23acd4: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x23ACD4u;
    SET_GPR_U32(ctx, 31, 0x23ACDCu);
    ctx->pc = 0x23ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACD4u;
    // 0x23acd8: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x23ACD4u, 0x23ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACDCu;
label_23acdc:
    // 0x23acdc: 0x26a211f8  addiu       $v0, $s5, 0x11F8
    ctx->pc = 0x23acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4600));
    // 0x23ace0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x23ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23ace4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x23ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x23ace8: 0x14640024  bne         $v1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23ACE8u;
    {
        const bool branch_taken_0x23ace8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACE8u;
        // 0x23acec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ace8) {
            ctx->pc = 0x23AD7Cu;
            goto label_23ad7c;
        }
    }
    ctx->pc = 0x23ACF0u;
    // 0x23acf0: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x23acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x23acf4: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x23acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x23acf8: 0x34424626  ori         $v0, $v0, 0x4626
    ctx->pc = 0x23acf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17958);
    // 0x23acfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ad00: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23AD00u;
    {
        const bool branch_taken_0x23ad00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ad00) {
            ctx->pc = 0x23AD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AD00u;
            // 0x23ad04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AD7Cu;
            goto label_23ad7c;
        }
    }
    ctx->pc = 0x23AD08u;
    // 0x23ad08: 0xc094dc4  jal         func_253710
    ctx->pc = 0x23AD08u;
    SET_GPR_U32(ctx, 31, 0x23AD10u);
    ctx->pc = 0x253710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253710u, 0x23AD08u, 0x23AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD10u;
label_23ad10:
    // 0x23ad10: 0x26e399f0  addiu       $v1, $s7, -0x6610
    ctx->pc = 0x23ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x23ad14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23ad14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad18: 0x8c730014  lw          $s3, 0x14($v1)
    ctx->pc = 0x23ad18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23ad1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23ad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ad20: 0xc08089c  jal         func_202270
    ctx->pc = 0x23AD20u;
    SET_GPR_U32(ctx, 31, 0x23AD28u);
    ctx->pc = 0x23AD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD20u;
    // 0x23ad24: 0x96920000  lhu         $s2, 0x0($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23AD20u, 0x23AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD28u;
label_23ad28:
    // 0x23ad28: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x23ad28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x23ad2c: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x23ad2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x23ad30: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x23ad30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x23ad34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23ad34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23ad38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad3c: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x23ad3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x23ad40: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x23AD40u;
    SET_GPR_U32(ctx, 31, 0x23AD48u);
    ctx->pc = 0x23AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD40u;
    // 0x23ad44: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x23AD40u, 0x23AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD48u;
label_23ad48:
    // 0x23ad48: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x23ad48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x23ad4c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x23AD4Cu;
    {
        const bool branch_taken_0x23ad4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD4Cu;
        // 0x23ad50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad4c) {
            ctx->pc = 0x23AD78u;
            goto label_23ad78;
        }
    }
    ctx->pc = 0x23AD54u;
    // 0x23ad54: 0xc08089c  jal         func_202270
    ctx->pc = 0x23AD54u;
    SET_GPR_U32(ctx, 31, 0x23AD5Cu);
    ctx->pc = 0x23AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD54u;
    // 0x23ad58: 0x26710032  addiu       $s1, $s3, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23AD54u, 0x23AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD5Cu;
label_23ad5c:
    // 0x23ad5c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x23ad5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x23ad60: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x23ad60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x23ad64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23ad64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad68: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x23ad68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x23ad6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23ad6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad70: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x23AD70u;
    SET_GPR_U32(ctx, 31, 0x23AD78u);
    ctx->pc = 0x23AD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD70u;
    // 0x23ad74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x23AD70u, 0x23AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD78u;
label_23ad78:
    // 0x23ad78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23ad78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23ad7c:
    // 0x23ad7c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23ad7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23ad80: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x23ad80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23ad84: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23ad84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23ad88: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23ad88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23ad8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23ad8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ad90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23ad90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ad94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23ad94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ad98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23ad98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ad9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ad9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ada0: 0x808089c  j           func_202270
    ctx->pc = 0x23ADA0u;
    ctx->pc = 0x23ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ADA0u;
    // 0x23ada4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x23ADA8u;
label_23ada8:
    // 0x23ada8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23ada8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23adac: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x23adacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23adb0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23adb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23adb4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23adb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23adb8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23adb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23adbc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23adbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23adc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23adc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23adc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23adc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23adc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23adc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x23ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADCCu;
        // 0x23add0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ADD4u;
}
