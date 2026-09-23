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

// Function: particleBurstTick
// Address: 0x29b298 - 0x29b410
void particleBurstTick_0x29b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleBurstTick_0x29b298");
#endif

    switch (ctx->pc) {
        case 0x29b2e8u: goto label_29b2e8;
        default: break;
    }

    ctx->pc = 0x29b298u;

    // 0x29b298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b29c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29b29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29b2a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b2a8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x29b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x29b2ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b2b0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x29B2B0u;
    {
        const bool branch_taken_0x29b2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2B0u;
        // 0x29b2b4: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2b0) {
            ctx->pc = 0x29B404u;
            goto label_29b404;
        }
    }
    ctx->pc = 0x29B2B8u;
    // 0x29b2b8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x29b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x29b2bc: 0x18400051  blez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x29B2BCu;
    {
        const bool branch_taken_0x29b2bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2BCu;
        // 0x29b2c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2bc) {
            ctx->pc = 0x29B404u;
            goto label_29b404;
        }
    }
    ctx->pc = 0x29B2C4u;
    // 0x29b2c4: 0x24b003a0  addiu       $s0, $a1, 0x3A0
    ctx->pc = 0x29b2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 928));
    // 0x29b2c8: 0x24b909e0  addiu       $t9, $a1, 0x9E0
    ctx->pc = 0x29b2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), 2528));
    // 0x29b2cc: 0x24b803a4  addiu       $t8, $a1, 0x3A4
    ctx->pc = 0x29b2ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 932));
    // 0x29b2d0: 0x24af09e4  addiu       $t7, $a1, 0x9E4
    ctx->pc = 0x29b2d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 2532));
    // 0x29b2d4: 0x24ae03a8  addiu       $t6, $a1, 0x3A8
    ctx->pc = 0x29b2d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 936));
    // 0x29b2d8: 0x24ad09e8  addiu       $t5, $a1, 0x9E8
    ctx->pc = 0x29b2d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 2536));
    // 0x29b2dc: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x29b2dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x29b2e0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29b2e4: 0x0  nop
    ctx->pc = 0x29b2e4u;
    // NOP
label_29b2e8:
    // 0x29b2e8: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x29b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b2ec: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x29b2ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29b2f0: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x29b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x29b2f4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x29b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29b2f8: 0x3033821  addu        $a3, $t8, $v1
    ctx->pc = 0x29b2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x29b2fc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x29b2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b300: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x29b300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x29b304: 0x240c0068  addiu       $t4, $zero, 0x68
    ctx->pc = 0x29b304u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29b308: 0x262b98c0  addiu       $t3, $s1, -0x6740
    ctx->pc = 0x29b308u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940864));
    // 0x29b30c: 0x3224021  addu        $t0, $t9, $v0
    ctx->pc = 0x29b30cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x29b310: 0x1e23021  addu        $a2, $t7, $v0
    ctx->pc = 0x29b310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x29b314: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x29b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b318: 0x1a24821  addu        $t1, $t5, $v0
    ctx->pc = 0x29b318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x29b31c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29b31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29b320: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b320u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b324: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x29b324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29b328: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x29b328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b32c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x29b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b330: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29b330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29b334: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b338: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x29b338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x29b33c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x29b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b340: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29b340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b344: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29b344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29b348: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b348u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b34c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x29b34cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29b350: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x29b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29b354: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x29b354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b358: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x29b358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29b35c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x29b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x29b360: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x29b360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b364: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29b364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29b368: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b36c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x29b36cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x29b370: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x29b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b374: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x29b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b378: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29b378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b37c: 0x0  nop
    ctx->pc = 0x29b37cu;
    // NOP
    // 0x29b380: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x29B380u;
    {
        const bool branch_taken_0x29b380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B380u;
        // 0x29b384: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b380) {
            ctx->pc = 0x29B3ECu;
            goto label_29b3ec;
        }
    }
    ctx->pc = 0x29B388u;
    // 0x29b388: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29B388u;
    {
        const bool branch_taken_0x29b388 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B388u;
        // 0x29b38c: 0x2563005c  addiu       $v1, $t3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b388) {
            ctx->pc = 0x29B3ECu;
            goto label_29b3ec;
        }
    }
    ctx->pc = 0x29B390u;
    // 0x29b390: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x29b390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x29b394: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x29b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29b398: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x29b398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b39c: 0x4c2018  mult        $a0, $v0, $t4
    ctx->pc = 0x29b39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29b3a0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x29b3a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x29b3a4: 0x8b1021  addu        $v0, $a0, $t3
    ctx->pc = 0x29b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x29b3a8: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x29b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b3ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29b3acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b3b0: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x29b3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x29b3b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x29b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29b3b8: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x29b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b3bc: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x29b3bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29b3c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b3c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29b3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b3c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29b3c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b3cc: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x29b3ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x29b3d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x29b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29b3d4: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x29b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b3d8: 0x4c2018  mult        $a0, $v0, $t4
    ctx->pc = 0x29b3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29b3dc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x29b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29b3e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29b3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b3e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29b3e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b3e8: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x29b3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_29b3ec:
    // 0x29b3ec: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x29b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x29b3f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29b3f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x29b3f4: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x29b3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29b3f8: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29B3F8u;
    {
        const bool branch_taken_0x29b3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3F8u;
        // 0x29b3fc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3f8) {
            ctx->pc = 0x29B2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b2e8;
        }
    }
    ctx->pc = 0x29B400u;
    // 0x29b400: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29b404:
    // 0x29b404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b408: 0x3e00008  jr          $ra
    ctx->pc = 0x29B408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B408u;
        // 0x29b40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B410u;
}
