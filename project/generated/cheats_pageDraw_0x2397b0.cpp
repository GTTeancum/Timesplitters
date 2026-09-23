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

// Function: cheats_pageDraw
// Address: 0x2397b0 - 0x2398bc
void cheats_pageDraw_0x2397b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheats_pageDraw_0x2397b0");
#endif

    switch (ctx->pc) {
        case 0x2397d4u: goto label_2397d4;
        case 0x23983cu: goto label_23983c;
        default: break;
    }

    ctx->pc = 0x2397b0u;

    // 0x2397b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2397b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2397b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2397b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2397b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2397b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2397bc: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x2397bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x2397c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2397c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2397c4: 0x263045f0  addiu       $s0, $s1, 0x45F0
    ctx->pc = 0x2397c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17904));
    // 0x2397c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2397c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2397cc: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x2397CCu;
    SET_GPR_U32(ctx, 31, 0x2397D4u);
    ctx->pc = 0x2397D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397CCu;
    // 0x2397d0: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x2397CCu, 0x2397D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397D4u;
label_2397d4:
    // 0x2397d4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x2397d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2397d8: 0x962345f0  lhu         $v1, 0x45F0($s1)
    ctx->pc = 0x2397d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 17904)));
    // 0x2397dc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2397dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2397e0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2397E0u;
    {
        const bool branch_taken_0x2397e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2397E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397E0u;
        // 0x2397e4: 0x9382a02c  lbu         $v0, -0x5FD4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397e0) {
            ctx->pc = 0x2398A0u;
            goto label_2398a0;
        }
    }
    ctx->pc = 0x2397E8u;
    // 0x2397e8: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x2397e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2397ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2397ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397f0: 0x42c00  sll         $a1, $a0, 16
    ctx->pc = 0x2397f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2397f4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2397f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2397f8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2397f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2397fc: 0x2473ffe0  addiu       $s3, $v1, -0x20
    ctx->pc = 0x2397fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x239800: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x239800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x239804: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x239804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x239808: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x239808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x23980c: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x23980cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x239810: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x239810u;
    {
        const bool branch_taken_0x239810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239810u;
        // 0x239814: 0x449025  or          $s2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239810) {
            ctx->pc = 0x23983Cu;
            goto label_23983c;
        }
    }
    ctx->pc = 0x239818u;
    // 0x239818: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x239818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x23981c: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x23981cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x239820: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x239820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x239824: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x239824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x239828: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x239828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x23982c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23982cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x239830: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x239830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x239834: 0xc08b952  jal         func_22E548
    ctx->pc = 0x239834u;
    SET_GPR_U32(ctx, 31, 0x23983Cu);
    ctx->pc = 0x239838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239834u;
    // 0x239838: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x239834u, 0x23983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23983Cu;
label_23983c:
    // 0x23983c: 0x962345f0  lhu         $v1, 0x45F0($s1)
    ctx->pc = 0x23983cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 17904)));
    // 0x239840: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x239840u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x239844: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x239844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x239848: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x239848u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23984c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23984cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x239850: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x239850u;
    {
        const bool branch_taken_0x239850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239850u;
        // 0x239854: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239850) {
            ctx->pc = 0x2398A4u;
            goto label_2398a4;
        }
    }
    ctx->pc = 0x239858u;
    // 0x239858: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x239858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23985c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x239860: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x239860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x239864: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x239864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x239868: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x239868u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23986c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x23986cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x239870: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239874: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x239874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x239878: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x239878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23987c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x239880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x239880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239884: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x239884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x239888: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23988c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23988cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x239890: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x239890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x239894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239898: 0x808b952  j           func_22E548
    ctx->pc = 0x239898u;
    ctx->pc = 0x23989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239898u;
    // 0x23989c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    guiDrawImage_0x22e548(rdram, ctx, runtime); return;
    ctx->pc = 0x2398A0u;
label_2398a0:
    // 0x2398a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2398a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2398a4:
    // 0x2398a4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2398a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2398a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2398a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2398ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2398acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2398b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2398b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2398b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2398B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2398B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398B4u;
        // 0x2398b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2398B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2398BCu;
}
