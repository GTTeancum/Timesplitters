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

// Function: testmap_pageDraw
// Address: 0x24cea0 - 0x24cfd4
void testmap_pageDraw_0x24cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("testmap_pageDraw_0x24cea0");
#endif

    switch (ctx->pc) {
        case 0x24ced0u: goto label_24ced0;
        case 0x24cee0u: goto label_24cee0;
        case 0x24ceecu: goto label_24ceec;
        case 0x24cf30u: goto label_24cf30;
        case 0x24cf64u: goto label_24cf64;
        default: break;
    }

    ctx->pc = 0x24cea0u;

    // 0x24cea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24cea4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24cea8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24ceac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24ceacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ceb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24ceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24ceb4: 0x3c110080  lui         $s1, 0x80
    ctx->pc = 0x24ceb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)128 << 16));
    // 0x24ceb8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24ceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24cebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24cec0: 0x2793b850  addiu       $s3, $gp, -0x47B0
    ctx->pc = 0x24cec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948944));
    // 0x24cec4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24cec8: 0xc09319c  jal         func_24C670
    ctx->pc = 0x24CEC8u;
    SET_GPR_U32(ctx, 31, 0x24CED0u);
    ctx->pc = 0x24CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CEC8u;
    // 0x24cecc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C670u, 0x24CEC8u, 0x24CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CED0u;
label_24ced0:
    // 0x24ced0: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x24ced0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x24ced4: 0x36310080  ori         $s1, $s1, 0x80
    ctx->pc = 0x24ced4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)128);
    // 0x24ced8: 0x26050007  addiu       $a1, $s0, 0x7
    ctx->pc = 0x24ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x24cedc: 0x0  nop
    ctx->pc = 0x24cedcu;
    // NOP
label_24cee0:
    // 0x24cee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24cee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cee4: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x24CEE4u;
    SET_GPR_U32(ctx, 31, 0x24CEECu);
    ctx->pc = 0x24CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CEE4u;
    // 0x24cee8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x24CEE4u, 0x24CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CEECu;
label_24ceec:
    // 0x24ceec: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x24ceecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x24cef0: 0x2133021  addu        $a2, $s0, $s3
    ctx->pc = 0x24cef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x24cef4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x24cef4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cef8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x24cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x24cefc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x24cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x24cf00: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x24cf00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24cf04: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x24cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x24cf08: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x24cf08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24cf0c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24cf0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24cf10: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x24cf10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24cf14: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24cf14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24cf18: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x24cf18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x24cf1c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x24cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x24cf20: 0x222280b  movn        $a1, $s1, $v0
    ctx->pc = 0x24cf20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x24cf24: 0x282200b  movn        $a0, $s4, $v0
    ctx->pc = 0x24cf24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
    // 0x24cf28: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24CF28u;
    SET_GPR_U32(ctx, 31, 0x24CF30u);
    ctx->pc = 0x24CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF28u;
    // 0x24cf2c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24CF28u, 0x24CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF30u;
label_24cf30:
    // 0x24cf30: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x24cf30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x24cf34: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x24CF34u;
    {
        const bool branch_taken_0x24cf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF34u;
        // 0x24cf38: 0x26050007  addiu       $a1, $s0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf34) {
            ctx->pc = 0x24CEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24cee0;
        }
    }
    ctx->pc = 0x24CF3Cu;
    // 0x24cf3c: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x24cf3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24cf40: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x24cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x24cf44: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x24cf44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x24cf48: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24CF48u;
    {
        const bool branch_taken_0x24cf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF48u;
        // 0x24cf4c: 0x731021  addu        $v0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf48) {
            ctx->pc = 0x24CFB4u;
            goto label_24cfb4;
        }
    }
    ctx->pc = 0x24CF50u;
    // 0x24cf50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24cf50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cf54: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x24CF54u;
    {
        const bool branch_taken_0x24cf54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF54u;
        // 0x24cf58: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf54) {
            ctx->pc = 0x24CFB8u;
            goto label_24cfb8;
        }
    }
    ctx->pc = 0x24CF5Cu;
    // 0x24cf5c: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x24CF5Cu;
    SET_GPR_U32(ctx, 31, 0x24CF64u);
    ctx->pc = 0x24CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF5Cu;
    // 0x24cf60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x24CF5Cu, 0x24CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF64u;
label_24cf64:
    // 0x24cf64: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x24cf64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24cf68: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x24cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x24cf6c: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x24cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x24cf70: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x24cf70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cf74: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x24cf74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24cf78: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x24cf78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x24cf7c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x24cf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x24cf80: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x24cf80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x24cf84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24cf88: 0x248400b8  addiu       $a0, $a0, 0xB8
    ctx->pc = 0x24cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x24cf8c: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x24cf8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x24cf90: 0x8c460ef8  lw          $a2, 0xEF8($v0)
    ctx->pc = 0x24cf90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x24cf94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24cf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24cf98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24cf98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24cf9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24cf9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cfa0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24cfa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cfa4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24cfa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cfa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cfa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cfac: 0x80808ec  j           func_2023B0
    ctx->pc = 0x24CFACu;
    ctx->pc = 0x24CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFACu;
    // 0x24cfb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    textOutline_0x2023b0(rdram, ctx, runtime); return;
    ctx->pc = 0x24CFB4u;
label_24cfb4:
    // 0x24cfb4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24cfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24cfb8:
    // 0x24cfb8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24cfb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24cfbc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24cfbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cfc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24cfc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cfc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24cfc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cfc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cfc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x24CFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFCCu;
        // 0x24cfd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CFD4u;
}
