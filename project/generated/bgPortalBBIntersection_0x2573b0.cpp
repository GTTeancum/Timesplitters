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

// Function: bgPortalBBIntersection
// Address: 0x2573b0 - 0x25751c
void bgPortalBBIntersection_0x2573b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalBBIntersection_0x2573b0");
#endif

    switch (ctx->pc) {
        case 0x2573d8u: goto label_2573d8;
        case 0x257498u: goto label_257498;
        default: break;
    }

    ctx->pc = 0x2573b0u;

    // 0x2573b0: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x2573b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573b4: 0x8f83a268  lw          $v1, -0x5D98($gp)
    ctx->pc = 0x2573b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
    // 0x2573b8: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x2573b8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2573bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573c0: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2573C0u;
    {
        const bool branch_taken_0x2573c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2573C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573C0u;
        // 0x2573c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2573c0) {
            ctx->pc = 0x257514u;
            goto label_257514;
        }
    }
    ctx->pc = 0x2573C8u;
    // 0x2573c8: 0x8f98a230  lw          $t8, -0x5DD0($gp)
    ctx->pc = 0x2573c8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x2573cc: 0xc5c2000c  lwc1        $f2, 0xC($t6)
    ctx->pc = 0x2573ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2573d0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2573d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2573d4: 0x0  nop
    ctx->pc = 0x2573d4u;
    // NOP
label_2573d8:
    // 0x2573d8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2573d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2573dc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2573dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2573e0: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x2573e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2573e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2573e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2573e8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2573e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2573ec: 0x0  nop
    ctx->pc = 0x2573ecu;
    // NOP
    // 0x2573f0: 0x45010044  bc1t        . + 4 + (0x44 << 2)
    ctx->pc = 0x2573F0u;
    {
        const bool branch_taken_0x2573f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2573F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573F0u;
        // 0x2573f4: 0x24870001  addiu       $a3, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2573f0) {
            ctx->pc = 0x257504u;
            goto label_257504;
        }
    }
    ctx->pc = 0x2573F8u;
    // 0x2573f8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2573f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2573fc: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x2573fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257404: 0x0  nop
    ctx->pc = 0x257404u;
    // NOP
    // 0x257408: 0x4503003f  bc1tl       . + 4 + (0x3F << 2)
    ctx->pc = 0x257408u;
    {
        const bool branch_taken_0x257408 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257408) {
            ctx->pc = 0x25740Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257408u;
            // 0x25740c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257508u;
            goto label_257508;
        }
    }
    ctx->pc = 0x257410u;
    // 0x257410: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x257410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257414: 0xc5c00010  lwc1        $f0, 0x10($t6)
    ctx->pc = 0x257414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257418: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25741c: 0x0  nop
    ctx->pc = 0x25741cu;
    // NOP
    // 0x257420: 0x45030039  bc1tl       . + 4 + (0x39 << 2)
    ctx->pc = 0x257420u;
    {
        const bool branch_taken_0x257420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257420) {
            ctx->pc = 0x257424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257420u;
            // 0x257424: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257508u;
            goto label_257508;
        }
    }
    ctx->pc = 0x257428u;
    // 0x257428: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x257428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25742c: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x25742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257430: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257434: 0x0  nop
    ctx->pc = 0x257434u;
    // NOP
    // 0x257438: 0x45030033  bc1tl       . + 4 + (0x33 << 2)
    ctx->pc = 0x257438u;
    {
        const bool branch_taken_0x257438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257438) {
            ctx->pc = 0x25743Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257438u;
            // 0x25743c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257508u;
            goto label_257508;
        }
    }
    ctx->pc = 0x257440u;
    // 0x257440: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x257440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257444: 0xc5c00014  lwc1        $f0, 0x14($t6)
    ctx->pc = 0x257444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257448: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25744c: 0x0  nop
    ctx->pc = 0x25744cu;
    // NOP
    // 0x257450: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
    ctx->pc = 0x257450u;
    {
        const bool branch_taken_0x257450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257450) {
            ctx->pc = 0x257454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257450u;
            // 0x257454: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257508u;
            goto label_257508;
        }
    }
    ctx->pc = 0x257458u;
    // 0x257458: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x257458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25745c: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x25745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257460: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257464: 0x0  nop
    ctx->pc = 0x257464u;
    // NOP
    // 0x257468: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x257468u;
    {
        const bool branch_taken_0x257468 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257468u;
        // 0x25746c: 0x8f82a244  lw          $v0, -0x5DBC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257468) {
            ctx->pc = 0x257504u;
            goto label_257504;
        }
    }
    ctx->pc = 0x257470u;
    // 0x257470: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x257470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x257474: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x257474u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257478: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x257478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25747c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x257480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257484: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x257484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x257488: 0x8c4d0004  lw          $t5, 0x4($v0)
    ctx->pc = 0x257488u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25748c: 0x1940000d  blez        $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x25748Cu;
    {
        const bool branch_taken_0x25748c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x257490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25748Cu;
        // 0x257490: 0x8c4c0000  lw          $t4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25748c) {
            ctx->pc = 0x2574C4u;
            goto label_2574c4;
        }
    }
    ctx->pc = 0x257494u;
    // 0x257494: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x257494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_257498:
    // 0x257498: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x257498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x25749c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25749cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2574a0: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2574a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2574a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2574a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2574a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2574a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2574ac: 0x12a282a  slt         $a1, $t1, $t2
    ctx->pc = 0x2574acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2574b0: 0x6d1026  xor         $v0, $v1, $t5
    ctx->pc = 0x2574b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 13));
    // 0x2574b4: 0x6c1826  xor         $v1, $v1, $t4
    ctx->pc = 0x2574b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 12));
    // 0x2574b8: 0x82400a  movz        $t0, $a0, $v0
    ctx->pc = 0x2574b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x2574bc: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2574BCu;
    {
        const bool branch_taken_0x2574bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2574C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574BCu;
        // 0x2574c0: 0x83580a  movz        $t3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574bc) {
            ctx->pc = 0x257498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257498;
        }
    }
    ctx->pc = 0x2574C4u;
label_2574c4:
    // 0x2574c4: 0x15600006  bnez        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2574C4u;
    {
        const bool branch_taken_0x2574c4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2574C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574C4u;
        // 0x2574c8: 0x146102a  slt         $v0, $t2, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574c4) {
            ctx->pc = 0x2574E0u;
            goto label_2574e0;
        }
    }
    ctx->pc = 0x2574CCu;
    // 0x2574cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2574CCu;
    {
        const bool branch_taken_0x2574cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2574D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574CCu;
        // 0x2574d0: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574cc) {
            ctx->pc = 0x2574E0u;
            goto label_2574e0;
        }
    }
    ctx->pc = 0x2574D4u;
    // 0x2574d4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2574d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2574d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2574d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2574dc: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x2574dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
label_2574e0:
    // 0x2574e0: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2574E0u;
    {
        const bool branch_taken_0x2574e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2574E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574E0u;
        // 0x2574e4: 0x8f83a268  lw          $v1, -0x5D98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574e0) {
            ctx->pc = 0x257504u;
            goto label_257504;
        }
    }
    ctx->pc = 0x2574E8u;
    // 0x2574e8: 0x146102a  slt         $v0, $t2, $a2
    ctx->pc = 0x2574e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2574ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2574ECu;
    {
        const bool branch_taken_0x2574ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2574F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574ECu;
        // 0x2574f0: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574ec) {
            ctx->pc = 0x257504u;
            goto label_257504;
        }
    }
    ctx->pc = 0x2574F4u;
    // 0x2574f4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2574f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2574f8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2574f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2574fc: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x2574fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x257500: 0x8f83a268  lw          $v1, -0x5D98($gp)
    ctx->pc = 0x257500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
label_257504:
    // 0x257504: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x257504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_257508:
    // 0x257508: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x257508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25750c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x25750Cu;
    {
        const bool branch_taken_0x25750c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25750Cu;
        // 0x257510: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25750c) {
            ctx->pc = 0x2573D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2573d8;
        }
    }
    ctx->pc = 0x257514u;
label_257514:
    // 0x257514: 0x3e00008  jr          $ra
    ctx->pc = 0x257514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257514u;
        // 0x257518: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25751Cu;
}
