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

// Function: findmypad
// Address: 0x2c64c8 - 0x2c669c
void findmypad_0x2c64c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("findmypad_0x2c64c8");
#endif

    switch (ctx->pc) {
        case 0x2c64f0u: goto label_2c64f0;
        default: break;
    }

    ctx->pc = 0x2c64c8u;

    // 0x2c64c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c64c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c64cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c64ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c64d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c64d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c64d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c64d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c64d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c64d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c64dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c64e0: 0x8e110160  lw          $s1, 0x160($s0)
    ctx->pc = 0x2c64e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2c64e4: 0xc6200b2c  lwc1        $f0, 0xB2C($s1)
    ctx->pc = 0x2c64e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c64e8: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C64E8u;
    SET_GPR_U32(ctx, 31, 0x2C64F0u);
    ctx->pc = 0x2C64ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C64E8u;
    // 0x2c64ec: 0xe6200b38  swc1        $f0, 0xB38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2872), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C64E8u, 0x2C64F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64F0u;
label_2c64f0:
    // 0x2c64f0: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x2c64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2c64f4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2c64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c64f8: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2c64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c64fc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c64fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c6500: 0xc786918c  lwc1        $f6, -0x6E74($gp)
    ctx->pc = 0x2c6500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c6504: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c6504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c6508: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x2c6508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c650c: 0xe6240aec  swc1        $f4, 0xAEC($s1)
    ctx->pc = 0x2c650cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c6510: 0xc4450010  lwc1        $f5, 0x10($v0)
    ctx->pc = 0x2c6510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c6514: 0xe6250af0  swc1        $f5, 0xAF0($s1)
    ctx->pc = 0x2c6514u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c6518: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2c6518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c651c: 0xe6230af4  swc1        $f3, 0xAF4($s1)
    ctx->pc = 0x2c651cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    // 0x2c6520: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2c6520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6524: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2c6524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6528: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c6528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c652c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2c652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6530: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c6530u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c6534: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c6534u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c6538: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c653c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c653cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c6540: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c6540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c6544: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c6544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6548: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c654c: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2c654cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6550: 0x0  nop
    ctx->pc = 0x2c6550u;
    // NOP
    // 0x2c6554: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x2C6554u;
    {
        const bool branch_taken_0x2c6554 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6554) {
            ctx->pc = 0x2C6558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6554u;
            // 0x2c6558: 0x8e230ae4  lw          $v1, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C65FCu;
            goto label_2c65fc;
        }
    }
    ctx->pc = 0x2C655Cu;
    // 0x2c655c: 0x8e230aa4  lw          $v1, 0xAA4($s1)
    ctx->pc = 0x2c655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2724)));
    // 0x2c6560: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6560u;
    {
        const bool branch_taken_0x2c6560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6560u;
        // 0x2c6564: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6560) {
            ctx->pc = 0x2C657Cu;
            goto label_2c657c;
        }
    }
    ctx->pc = 0x2C6568u;
    // 0x2c6568: 0x8e220a9c  lw          $v0, 0xA9C($s1)
    ctx->pc = 0x2c6568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2c656c: 0xae230a9c  sw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c656cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 3));
    // 0x2c6570: 0xae220aa0  sw          $v0, 0xAA0($s1)
    ctx->pc = 0x2c6570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 2));
    // 0x2c6574: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2C6574u;
    {
        const bool branch_taken_0x2c6574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6574u;
        // 0x2c6578: 0xae200aa4  sw          $zero, 0xAA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6574) {
            ctx->pc = 0x2C6684u;
            goto label_2c6684;
        }
    }
    ctx->pc = 0x2C657Cu;
label_2c657c:
    // 0x2c657c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6580: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x2c6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x2c6584: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6584u;
    {
        const bool branch_taken_0x2c6584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c6584) {
            ctx->pc = 0x2C6588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6584u;
            // 0x2c6588: 0x8e2201b8  lw          $v0, 0x1B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C65A4u;
            goto label_2c65a4;
        }
    }
    ctx->pc = 0x2C658Cu;
    // 0x2c658c: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x2c658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x2c6590: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6590u;
    {
        const bool branch_taken_0x2c6590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6590u;
        // 0x2c6594: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6590) {
            ctx->pc = 0x2C65A0u;
            goto label_2c65a0;
        }
    }
    ctx->pc = 0x2C6598u;
    // 0x2c6598: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2C6598u;
    {
        const bool branch_taken_0x2c6598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6598u;
        // 0x2c659c: 0x8e230a9c  lw          $v1, 0xA9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6598) {
            ctx->pc = 0x2C667Cu;
            goto label_2c667c;
        }
    }
    ctx->pc = 0x2C65A0u;
label_2c65a0:
    // 0x2c65a0: 0x8e2201b8  lw          $v0, 0x1B8($s1)
    ctx->pc = 0x2c65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_2c65a4:
    // 0x2c65a4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C65A4u;
    {
        const bool branch_taken_0x2c65a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c65a4) {
            ctx->pc = 0x2C65A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C65A4u;
            // 0x2c65a8: 0x8e220ae4  lw          $v0, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C65E0u;
            goto label_2c65e0;
        }
    }
    ctx->pc = 0x2C65ACu;
    // 0x2c65ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c65acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c65b0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C65B0u;
    {
        const bool branch_taken_0x2c65b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c65b0) {
            ctx->pc = 0x2C65B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C65B0u;
            // 0x2c65b4: 0x8e220ae4  lw          $v0, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C65E0u;
            goto label_2c65e0;
        }
    }
    ctx->pc = 0x2C65B8u;
    // 0x2c65b8: 0x8e220a9c  lw          $v0, 0xA9C($s1)
    ctx->pc = 0x2c65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2c65bc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2c65bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c65c0: 0xc6200b28  lwc1        $f0, 0xB28($s1)
    ctx->pc = 0x2c65c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65c4: 0xae220aa0  sw          $v0, 0xAA0($s1)
    ctx->pc = 0x2c65c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 2));
    // 0x2c65c8: 0xe6200b38  swc1        $f0, 0xB38($s1)
    ctx->pc = 0x2c65c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2872), bits); }
    // 0x2c65cc: 0xae230a9c  sw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c65ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 3));
    // 0x2c65d0: 0xae200a84  sw          $zero, 0xA84($s1)
    ctx->pc = 0x2c65d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2692), GPR_U32(ctx, 0));
    // 0x2c65d4: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c65d8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C65D8u;
    {
        const bool branch_taken_0x2c65d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65D8u;
        // 0x2c65dc: 0xae200698  sw          $zero, 0x698($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65d8) {
            ctx->pc = 0x2C6688u;
            goto label_2c6688;
        }
    }
    ctx->pc = 0x2C65E0u;
label_2c65e0:
    // 0x2c65e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C65E0u;
    {
        const bool branch_taken_0x2c65e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65E0u;
        // 0x2c65e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65e0) {
            ctx->pc = 0x2C65F0u;
            goto label_2c65f0;
        }
    }
    ctx->pc = 0x2C65E8u;
    // 0x2c65e8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C65E8u;
    {
        const bool branch_taken_0x2c65e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65E8u;
        // 0x2c65ec: 0x8e230a9c  lw          $v1, 0xA9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65e8) {
            ctx->pc = 0x2C667Cu;
            goto label_2c667c;
        }
    }
    ctx->pc = 0x2C65F0u;
label_2c65f0:
    // 0x2c65f0: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c65f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2c65f4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C65F4u;
    {
        const bool branch_taken_0x2c65f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65F4u;
        // 0x2c65f8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65f4) {
            ctx->pc = 0x2C667Cu;
            goto label_2c667c;
        }
    }
    ctx->pc = 0x2C65FCu;
label_2c65fc:
    // 0x2c65fc: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C65FCu;
    {
        const bool branch_taken_0x2c65fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c65fc) {
            ctx->pc = 0x2C6600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C65FCu;
            // 0x2c6600: 0xc6210b4c  lwc1        $f1, 0xB4C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6650u;
            goto label_2c6650;
        }
    }
    ctx->pc = 0x2C6604u;
    // 0x2c6604: 0x8e220ad4  lw          $v0, 0xAD4($s1)
    ctx->pc = 0x2c6604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2c6608: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C6608u;
    {
        const bool branch_taken_0x2c6608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6608u;
        // 0x2c660c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6608) {
            ctx->pc = 0x2C664Cu;
            goto label_2c664c;
        }
    }
    ctx->pc = 0x2C6610u;
    // 0x2c6610: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c6610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c6614: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6614u;
    {
        const bool branch_taken_0x2c6614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6614u;
        // 0x2c6618: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6614) {
            ctx->pc = 0x2C6638u;
            goto label_2c6638;
        }
    }
    ctx->pc = 0x2C661Cu;
    // 0x2c661c: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C661Cu;
    {
        const bool branch_taken_0x2c661c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c661c) {
            ctx->pc = 0x2C6620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C661Cu;
            // 0x2c6620: 0xc6210b4c  lwc1        $f1, 0xB4C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6650u;
            goto label_2c6650;
        }
    }
    ctx->pc = 0x2C6624u;
    // 0x2c6624: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x2c6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2c6628: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2c6628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c662c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2c662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c6630: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6630u;
    {
        const bool branch_taken_0x2c6630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c6630) {
            ctx->pc = 0x2C6634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6630u;
            // 0x2c6634: 0xc6210b4c  lwc1        $f1, 0xB4C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6650u;
            goto label_2c6650;
        }
    }
    ctx->pc = 0x2C6638u;
label_2c6638:
    // 0x2c6638: 0x8e2201b8  lw          $v0, 0x1B8($s1)
    ctx->pc = 0x2c6638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x2c663c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C663Cu;
    {
        const bool branch_taken_0x2c663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C663Cu;
        // 0x2c6640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c663c) {
            ctx->pc = 0x2C664Cu;
            goto label_2c664c;
        }
    }
    ctx->pc = 0x2C6644u;
    // 0x2c6644: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C6644u;
    {
        const bool branch_taken_0x2c6644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6644u;
        // 0x2c6648: 0x8e230a9c  lw          $v1, 0xA9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6644) {
            ctx->pc = 0x2C667Cu;
            goto label_2c667c;
        }
    }
    ctx->pc = 0x2C664Cu;
label_2c664c:
    // 0x2c664c: 0xc6210b4c  lwc1        $f1, 0xB4C($s1)
    ctx->pc = 0x2c664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c6650:
    // 0x2c6650: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c6654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6658: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c665c: 0x0  nop
    ctx->pc = 0x2c665cu;
    // NOP
    // 0x2c6660: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2C6660u;
    {
        const bool branch_taken_0x2c6660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6660u;
        // 0x2c6664: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6660) {
            ctx->pc = 0x2C668Cu;
            goto label_2c668c;
        }
    }
    ctx->pc = 0x2C6668u;
    // 0x2c6668: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c6668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c666c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c6670: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6670u;
    {
        const bool branch_taken_0x2c6670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6670u;
        // 0x2c6674: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6670) {
            ctx->pc = 0x2C668Cu;
            goto label_2c668c;
        }
    }
    ctx->pc = 0x2C6678u;
    // 0x2c6678: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c6678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
label_2c667c:
    // 0x2c667c: 0xae220a9c  sw          $v0, 0xA9C($s1)
    ctx->pc = 0x2c667cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 2));
    // 0x2c6680: 0xae230aa0  sw          $v1, 0xAA0($s1)
    ctx->pc = 0x2c6680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 3));
label_2c6684:
    // 0x2c6684: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c6684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
label_2c6688:
    // 0x2c6688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c668c:
    // 0x2c668c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c668cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6694: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6694u;
        // 0x2c6698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C669Cu;
}
