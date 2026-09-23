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

// Function: frontControlsTick
// Address: 0x22c4b0 - 0x22c868
void frontControlsTick_0x22c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontControlsTick_0x22c4b0");
#endif

    switch (ctx->pc) {
        case 0x22c4f4u: goto label_22c4f4;
        case 0x22c504u: goto label_22c504;
        case 0x22c510u: goto label_22c510;
        case 0x22c51cu: goto label_22c51c;
        case 0x22c808u: goto label_22c808;
        default: break;
    }

    ctx->pc = 0x22c4b0u;

    // 0x22c4b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c4b4: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x22c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22c4b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22c4bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22c4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22c4c0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22c4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22c4c4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x22c4c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22c4c8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x22c4c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22c4cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22c4d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22c4d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C4D4u;
    {
        const bool branch_taken_0x22c4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4D4u;
        // 0x22c4d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c4d4) {
            ctx->pc = 0x22C4E8u;
            goto label_22c4e8;
        }
    }
    ctx->pc = 0x22C4DCu;
    // 0x22c4dc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22c4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c4e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22C4E0u;
    {
        const bool branch_taken_0x22c4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4E0u;
        // 0x22c4e4: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c4e0) {
            ctx->pc = 0x22C508u;
            goto label_22c508;
        }
    }
    ctx->pc = 0x22C4E8u;
label_22c4e8:
    // 0x22c4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c4ec: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x22C4ECu;
    SET_GPR_U32(ctx, 31, 0x22C4F4u);
    ctx->pc = 0x22C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C4ECu;
    // 0x22c4f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x22C4ECu, 0x22C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4F4u;
label_22c4f4:
    // 0x22c4f4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x22c4f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x22c4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c4fc: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x22C4FCu;
    SET_GPR_U32(ctx, 31, 0x22C504u);
    ctx->pc = 0x22C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C4FCu;
    // 0x22c500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x22C4FCu, 0x22C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C504u;
label_22c504:
    // 0x22c504: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22c504u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_22c508:
    // 0x22c508: 0xc080e18  jal         func_203860
    ctx->pc = 0x22C508u;
    SET_GPR_U32(ctx, 31, 0x22C510u);
    ctx->pc = 0x22C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C508u;
    // 0x22c50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x22C508u, 0x22C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C510u;
label_22c510:
    // 0x22c510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22c510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c514: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x22C514u;
    SET_GPR_U32(ctx, 31, 0x22C51Cu);
    ctx->pc = 0x22C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C514u;
    // 0x22c518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x22C514u, 0x22C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C51Cu;
label_22c51c:
    // 0x22c51c: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x22c51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22c520: 0x2403fc3f  addiu       $v1, $zero, -0x3C1
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966335));
    // 0x22c524: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22c524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22c528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c52c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c530: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x22c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22c534: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x22c534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c538: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22c538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c53c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22c53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22c540: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22C540u;
    {
        const bool branch_taken_0x22c540 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C540u;
        // 0x22c544: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c540) {
            ctx->pc = 0x22C54Cu;
            goto label_22c54c;
        }
    }
    ctx->pc = 0x22C548u;
    // 0x22c548: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22c548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c54c:
    // 0x22c54c: 0x32221000  andi        $v0, $s1, 0x1000
    ctx->pc = 0x22c54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
    // 0x22c550: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C550u;
    {
        const bool branch_taken_0x22c550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C550u;
        // 0x22c554: 0xa3a40000  sb          $a0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c550) {
            ctx->pc = 0x22C564u;
            goto label_22c564;
        }
    }
    ctx->pc = 0x22C558u;
    // 0x22c558: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x22c558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22c55c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22C55Cu;
    {
        const bool branch_taken_0x22c55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C55Cu;
        // 0x22c560: 0x3c070035  lui         $a3, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c55c) {
            ctx->pc = 0x22C5A8u;
            goto label_22c5a8;
        }
    }
    ctx->pc = 0x22C564u;
label_22c564:
    // 0x22c564: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x22c564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22c568: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x22c568u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x22c56c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x22c56cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22c570: 0x24e42d90  addiu       $a0, $a3, 0x2D90
    ctx->pc = 0x22c570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x22c574: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x22c574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x22c578: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x22c578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x22c57c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x22c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x22c580: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x22c580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22c584: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c588: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x22c588u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c58c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x22c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22c590: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22C590u;
    {
        const bool branch_taken_0x22c590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c590) {
            ctx->pc = 0x22C594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C590u;
            // 0x22c594: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C598u;
            goto label_22c598;
        }
    }
    ctx->pc = 0x22C598u;
label_22c598:
    // 0x22c598: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x22c598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22c59c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22c5a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22C5A0u;
    {
        const bool branch_taken_0x22c5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5A0u;
        // 0x22c5a4: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5a0) {
            ctx->pc = 0x22C5BCu;
            goto label_22c5bc;
        }
    }
    ctx->pc = 0x22C5A8u;
label_22c5a8:
    // 0x22c5a8: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x22c5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22c5ac: 0x24e22d90  addiu       $v0, $a3, 0x2D90
    ctx->pc = 0x22c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x22c5b0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22c5b4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22c5b8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22c5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_22c5bc:
    // 0x22c5bc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x22c5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x22c5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c5c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22c5c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c5c8: 0x0  nop
    ctx->pc = 0x22c5c8u;
    // NOP
    // 0x22c5cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22C5CCu;
    {
        const bool branch_taken_0x22c5cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5CCu;
        // 0x22c5d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5cc) {
            ctx->pc = 0x22C5D8u;
            goto label_22c5d8;
        }
    }
    ctx->pc = 0x22C5D4u;
    // 0x22c5d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22c5d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c5d8:
    // 0x22c5d8: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x22c5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x22c5dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C5DCu;
    {
        const bool branch_taken_0x22c5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5DCu;
        // 0x22c5e0: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5dc) {
            ctx->pc = 0x22C5F0u;
            goto label_22c5f0;
        }
    }
    ctx->pc = 0x22C5E4u;
    // 0x22c5e4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x22c5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22c5e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22C5E8u;
    {
        const bool branch_taken_0x22c5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5E8u;
        // 0x22c5ec: 0x24e22d90  addiu       $v0, $a3, 0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5e8) {
            ctx->pc = 0x22C638u;
            goto label_22c638;
        }
    }
    ctx->pc = 0x22C5F0u;
label_22c5f0:
    // 0x22c5f0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x22c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22c5f4: 0x24e32d90  addiu       $v1, $a3, 0x2D90
    ctx->pc = 0x22c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x22c5f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22c5fc: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x22c5fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x22c600: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x22c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22c604: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x22c604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x22c608: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x22c608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c60c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c610: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x22c610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c614: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x22c614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22c618: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C618u;
    {
        const bool branch_taken_0x22c618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c618) {
            ctx->pc = 0x22C61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C618u;
            // 0x22c61c: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C62Cu;
            goto label_22c62c;
        }
    }
    ctx->pc = 0x22C620u;
    // 0x22c620: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x22c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x22c624: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x22c624u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x22c628: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x22c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_22c62c:
    // 0x22c62c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c630: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22C630u;
    {
        const bool branch_taken_0x22c630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C630u;
        // 0x22c634: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c630) {
            ctx->pc = 0x22C644u;
            goto label_22c644;
        }
    }
    ctx->pc = 0x22C638u;
label_22c638:
    // 0x22c638: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22c638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22c63c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22c640: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22c640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_22c644:
    // 0x22c644: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x22c644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x22c648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c64c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x22c64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c650: 0x0  nop
    ctx->pc = 0x22c650u;
    // NOP
    // 0x22c654: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22C654u;
    {
        const bool branch_taken_0x22c654 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C654u;
        // 0x22c658: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c654) {
            ctx->pc = 0x22C660u;
            goto label_22c660;
        }
    }
    ctx->pc = 0x22C65Cu;
    // 0x22c65c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22c65cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c660:
    // 0x22c660: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x22c660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x22c664: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C664u;
    {
        const bool branch_taken_0x22c664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C664u;
        // 0x22c668: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c664) {
            ctx->pc = 0x22C678u;
            goto label_22c678;
        }
    }
    ctx->pc = 0x22C66Cu;
    // 0x22c66c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x22c66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22c670: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22C670u;
    {
        const bool branch_taken_0x22c670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C670u;
        // 0x22c674: 0x24e22d90  addiu       $v0, $a3, 0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c670) {
            ctx->pc = 0x22C6B8u;
            goto label_22c6b8;
        }
    }
    ctx->pc = 0x22C678u;
label_22c678:
    // 0x22c678: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x22c678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22c67c: 0x24e32d90  addiu       $v1, $a3, 0x2D90
    ctx->pc = 0x22c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x22c680: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x22c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x22c684: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x22c684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x22c688: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x22c688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22c68c: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x22c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x22c690: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x22c690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c698: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x22c698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c69c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x22c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22c6a0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22C6A0u;
    {
        const bool branch_taken_0x22c6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c6a0) {
            ctx->pc = 0x22C6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C6A0u;
            // 0x22c6a4: 0xad000010  sw          $zero, 0x10($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C6A8u;
            goto label_22c6a8;
        }
    }
    ctx->pc = 0x22C6A8u;
label_22c6a8:
    // 0x22c6a8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x22c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22c6ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22c6b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22C6B0u;
    {
        const bool branch_taken_0x22c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6B0u;
        // 0x22c6b4: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6b0) {
            ctx->pc = 0x22C6C4u;
            goto label_22c6c4;
        }
    }
    ctx->pc = 0x22C6B8u;
label_22c6b8:
    // 0x22c6b8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22c6bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22c6c0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22c6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_22c6c4:
    // 0x22c6c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22c6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22c6c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c6cc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x22c6ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c6d0: 0x0  nop
    ctx->pc = 0x22c6d0u;
    // NOP
    // 0x22c6d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22C6D4u;
    {
        const bool branch_taken_0x22c6d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6D4u;
        // 0x22c6d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6d4) {
            ctx->pc = 0x22C6E0u;
            goto label_22c6e0;
        }
    }
    ctx->pc = 0x22C6DCu;
    // 0x22c6dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22c6dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c6e0:
    // 0x22c6e0: 0x32222000  andi        $v0, $s1, 0x2000
    ctx->pc = 0x22c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
    // 0x22c6e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C6E4u;
    {
        const bool branch_taken_0x22c6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6E4u;
        // 0x22c6e8: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6e4) {
            ctx->pc = 0x22C6F8u;
            goto label_22c6f8;
        }
    }
    ctx->pc = 0x22C6ECu;
    // 0x22c6ec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x22c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22c6f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22C6F0u;
    {
        const bool branch_taken_0x22c6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6F0u;
        // 0x22c6f4: 0x24e22d90  addiu       $v0, $a3, 0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6f0) {
            ctx->pc = 0x22C740u;
            goto label_22c740;
        }
    }
    ctx->pc = 0x22C6F8u;
label_22c6f8:
    // 0x22c6f8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x22c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22c6fc: 0x24e32d90  addiu       $v1, $a3, 0x2D90
    ctx->pc = 0x22c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x22c700: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x22c700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x22c704: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x22c704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x22c708: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x22c708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22c70c: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x22c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x22c710: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x22c710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c718: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x22c718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c71c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x22c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22c720: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C720u;
    {
        const bool branch_taken_0x22c720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c720) {
            ctx->pc = 0x22C724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C720u;
            // 0x22c724: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C734u;
            goto label_22c734;
        }
    }
    ctx->pc = 0x22C728u;
    // 0x22c728: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x22c728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x22c72c: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x22c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x22c730: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x22c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_22c734:
    // 0x22c734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22C738u;
    {
        const bool branch_taken_0x22c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C738u;
        // 0x22c73c: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c738) {
            ctx->pc = 0x22C74Cu;
            goto label_22c74c;
        }
    }
    ctx->pc = 0x22C740u;
label_22c740:
    // 0x22c740: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22c740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22c744: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22c744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22c748: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x22c748u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_22c74c:
    // 0x22c74c: 0x3222a000  andi        $v0, $s1, 0xA000
    ctx->pc = 0x22c74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
    // 0x22c750: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x22C750u;
    {
        const bool branch_taken_0x22c750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c750) {
            ctx->pc = 0x22C754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C750u;
            // 0x22c754: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C7F8u;
            goto label_22c7f8;
        }
    }
    ctx->pc = 0x22C758u;
    // 0x22c758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c75c: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x22c75cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c760: 0x0  nop
    ctx->pc = 0x22c760u;
    // NOP
    // 0x22c764: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x22C764u;
    {
        const bool branch_taken_0x22c764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c764) {
            ctx->pc = 0x22C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C764u;
            // 0x22c768: 0x4600a847  neg.s       $f1, $f21 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C78Cu;
            goto label_22c78c;
        }
    }
    ctx->pc = 0x22C76Cu;
    // 0x22c76c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x22c76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x22c770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c774: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x22c774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c778: 0x0  nop
    ctx->pc = 0x22c778u;
    // NOP
    // 0x22c77c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x22C77Cu;
    {
        const bool branch_taken_0x22c77c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C77Cu;
        // 0x22c780: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c77c) {
            ctx->pc = 0x22C7A4u;
            goto label_22c7a4;
        }
    }
    ctx->pc = 0x22C784u;
    // 0x22c784: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x22C784u;
    {
        const bool branch_taken_0x22c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C784u;
        // 0x22c788: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c784) {
            ctx->pc = 0x22C7FCu;
            goto label_22c7fc;
        }
    }
    ctx->pc = 0x22C78Cu;
label_22c78c:
    // 0x22c78c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x22c78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x22c790: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c794: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c794u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c798: 0x0  nop
    ctx->pc = 0x22c798u;
    // NOP
    // 0x22c79c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22C79Cu;
    {
        const bool branch_taken_0x22c79c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C79Cu;
        // 0x22c7a0: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c79c) {
            ctx->pc = 0x22C7F8u;
            goto label_22c7f8;
        }
    }
    ctx->pc = 0x22C7A4u;
label_22c7a4:
    // 0x22c7a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c7a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c7a8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22c7a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c7ac: 0x0  nop
    ctx->pc = 0x22c7acu;
    // NOP
    // 0x22c7b0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x22C7B0u;
    {
        const bool branch_taken_0x22c7b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c7b0) {
            ctx->pc = 0x22C7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C7B0u;
            // 0x22c7b4: 0x4600a047  neg.s       $f1, $f20 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C7D8u;
            goto label_22c7d8;
        }
    }
    ctx->pc = 0x22C7B8u;
    // 0x22c7b8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x22c7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x22c7bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c7c0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x22c7c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c7c4: 0x0  nop
    ctx->pc = 0x22c7c4u;
    // NOP
    // 0x22c7c8: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x22C7C8u;
    {
        const bool branch_taken_0x22c7c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c7c8) {
            ctx->pc = 0x22C7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C7C8u;
            // 0x22c7cc: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C7F4u;
            goto label_22c7f4;
        }
    }
    ctx->pc = 0x22C7D0u;
    // 0x22c7d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22C7D0u;
    {
        const bool branch_taken_0x22c7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7D0u;
        // 0x22c7d4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7d0) {
            ctx->pc = 0x22C7F8u;
            goto label_22c7f8;
        }
    }
    ctx->pc = 0x22C7D8u;
label_22c7d8:
    // 0x22c7d8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x22c7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x22c7dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c7e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c7e4: 0x0  nop
    ctx->pc = 0x22c7e4u;
    // NOP
    // 0x22c7e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22C7E8u;
    {
        const bool branch_taken_0x22c7e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7E8u;
        // 0x22c7ec: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7e8) {
            ctx->pc = 0x22C7F8u;
            goto label_22c7f8;
        }
    }
    ctx->pc = 0x22C7F0u;
    // 0x22c7f0: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x22c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_22c7f4:
    // 0x22c7f4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_22c7f8:
    // 0x22c7f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22c7f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c7fc:
    // 0x22c7fc: 0x24422d90  addiu       $v0, $v0, 0x2D90
    ctx->pc = 0x22c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11664));
    // 0x22c800: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x22c800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22c804: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x22c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_22c808:
    // 0x22c808: 0xe91804  sllv        $v1, $t1, $a3
    ctx->pc = 0x22c808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x22c80c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x22c80cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22c810: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x22c810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c814: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22c814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22c818: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x22c818u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x22c81c: 0x2842000d  slti        $v0, $v0, 0xD
    ctx->pc = 0x22c81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x22c820: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C820u;
    {
        const bool branch_taken_0x22c820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C820u;
        // 0x22c824: 0x28e80004  slti        $t0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c820) {
            ctx->pc = 0x22C838u;
            goto label_22c838;
        }
    }
    ctx->pc = 0x22C828u;
    // 0x22c828: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x22c828u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c82c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x22c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22c830: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22C830u;
    {
        const bool branch_taken_0x22c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C830u;
        // 0x22c834: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c830) {
            ctx->pc = 0x22C840u;
            goto label_22c840;
        }
    }
    ctx->pc = 0x22C838u;
label_22c838:
    // 0x22c838: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x22c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22c83c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22c83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22c840:
    // 0x22c840: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x22c840u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x22c844: 0x1500fff0  bnez        $t0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22C844u;
    {
        const bool branch_taken_0x22c844 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C844u;
        // 0x22c848: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c844) {
            ctx->pc = 0x22C808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c808;
        }
    }
    ctx->pc = 0x22C84Cu;
    // 0x22c84c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22c84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c850: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22c850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c854: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22c854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c858: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x22c858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22c85c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x22c85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22c860: 0x3e00008  jr          $ra
    ctx->pc = 0x22C860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C860u;
        // 0x22c864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C868u;
}
