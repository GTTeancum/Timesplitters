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

// Function: matrixToQuaternion
// Address: 0x2b56d8 - 0x2b596c
void matrixToQuaternion_0x2b56d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixToQuaternion_0x2b56d8");
#endif

    switch (ctx->pc) {
        case 0x2b5778u: goto label_2b5778;
        case 0x2b5880u: goto label_2b5880;
        default: break;
    }

    ctx->pc = 0x2b56d8u;

    // 0x2b56d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b56d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b56dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b56dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b56e0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2b56e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2b56e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b56e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b56e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b56ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b56ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b56f0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b56f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b56f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b56f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b56f8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2b56f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2b56fc: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2b56fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2b5700: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2b5700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2b5704: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b5704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2b5708: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2b5708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2b570c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2b570cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5710: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2b5710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5714: 0xc6040028  lwc1        $f4, 0x28($s0)
    ctx->pc = 0x2b5714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5718: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x2b5718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2b571c: 0x24479a80  addiu       $a3, $v0, -0x6580
    ctx->pc = 0x2b571cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941312));
    // 0x2b5720: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x2b5720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b5724: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x2b5724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b5728: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2b5728u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A88u));
    // 0x2b572c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2b572cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5730: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2b5730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5734: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b5734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b5738: 0x46040300  add.s       $f12, $f0, $f4
    ctx->pc = 0x2b5738u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2b573c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2b573cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5740: 0x0  nop
    ctx->pc = 0x2b5740u;
    // NOP
    // 0x2b5744: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x2B5744u;
    {
        const bool branch_taken_0x2b5744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5744u;
        // 0x2b5748: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5744) {
            ctx->pc = 0x2B57DCu;
            goto label_2b57dc;
        }
    }
    ctx->pc = 0x2B574Cu;
    // 0x2b574c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b574cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b5750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5754: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2b5754u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2b5758: 0x0  nop
    ctx->pc = 0x2b5758u;
    // NOP
    // 0x2b575c: 0x0  nop
    ctx->pc = 0x2b575cu;
    // NOP
    // 0x2b5760: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2b5760u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b5764: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2b5764u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5768: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5768u;
    {
        const bool branch_taken_0x2b5768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5768) {
            ctx->pc = 0x2B577Cu;
            goto label_2b577c;
        }
    }
    ctx->pc = 0x2B5770u;
    // 0x2b5770: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B5770u;
    SET_GPR_U32(ctx, 31, 0x2B5778u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B5770u, 0x2B5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5778u;
label_2b5778:
    // 0x2b5778: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b5778u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2b577c:
    // 0x2b577c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b577cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b5780: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b5780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5784: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x2b5784u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x2b5788: 0x46002842  mul.s       $f1, $f5, $f0
    ctx->pc = 0x2b5788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b578c: 0x0  nop
    ctx->pc = 0x2b578cu;
    // NOP
    // 0x2b5790: 0x0  nop
    ctx->pc = 0x2b5790u;
    // NOP
    // 0x2b5794: 0x46050143  div.s       $f5, $f0, $f5
    ctx->pc = 0x2b5794u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[5];
    // 0x2b5798: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2b5798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2b579c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2b579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b57a0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2b57a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b57a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b57a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b57a8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2b57a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b57ac: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2b57acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2b57b0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2b57b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b57b4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2b57b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b57b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b57b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b57bc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2b57bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2b57c0: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x2b57c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2b57c4: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2b57c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b57c8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b57c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b57cc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b57ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b57d0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2b57d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b57d4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2B57D4u;
    {
        const bool branch_taken_0x2b57d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57D4u;
        // 0x2b57d8: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57d4) {
            ctx->pc = 0x2B5944u;
            goto label_2b5944;
        }
    }
    ctx->pc = 0x2B57DCu;
label_2b57dc:
    // 0x2b57dc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2b57dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b57e0: 0x0  nop
    ctx->pc = 0x2b57e0u;
    // NOP
    // 0x2b57e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B57E4u;
    {
        const bool branch_taken_0x2b57e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57E4u;
        // 0x2b57e8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57e4) {
            ctx->pc = 0x2B57F0u;
            goto label_2b57f0;
        }
    }
    ctx->pc = 0x2B57ECu;
    // 0x2b57ec: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2b57ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b57f0:
    // 0x2b57f0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b57f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b57f4: 0x2c51818  mult        $v1, $s6, $a1
    ctx->pc = 0x2b57f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b57f8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2b57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2b57fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b57fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5800: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2b5800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5804: 0x0  nop
    ctx->pc = 0x2b5804u;
    // NOP
    // 0x2b5808: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B5808u;
    {
        const bool branch_taken_0x2b5808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5808) {
            ctx->pc = 0x2B580Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5808u;
            // 0x2b580c: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5810u;
            goto label_2b5810;
        }
    }
    ctx->pc = 0x2B5810u;
label_2b5810:
    // 0x2b5810: 0x2c51018  mult        $v0, $s6, $a1
    ctx->pc = 0x2b5810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b5814: 0x16a080  sll         $s4, $s6, 2
    ctx->pc = 0x2b5814u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2b5818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b5818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b581c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b581cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b5820: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2b5820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b5824: 0xd41021  addu        $v0, $a2, $s4
    ctx->pc = 0x2b5824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x2b5828: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b5828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b582c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2b582cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5830: 0x2451018  mult        $v0, $s2, $a1
    ctx->pc = 0x2b5830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b5834: 0x12a880  sll         $s5, $s2, 2
    ctx->pc = 0x2b5834u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2b5838: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2b5838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b583c: 0xd51021  addu        $v0, $a2, $s5
    ctx->pc = 0x2b583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x2b5840: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b5840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5844: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2b5844u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5848: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x2b5848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b584c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2b584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b5850: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b5850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5854: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b5858: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2b5858u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b585c: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x2b585cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2b5860: 0x0  nop
    ctx->pc = 0x2b5860u;
    // NOP
    // 0x2b5864: 0x0  nop
    ctx->pc = 0x2b5864u;
    // NOP
    // 0x2b5868: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2b5868u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b586c: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2b586cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5870: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5870u;
    {
        const bool branch_taken_0x2b5870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5870) {
            ctx->pc = 0x2B5884u;
            goto label_2b5884;
        }
    }
    ctx->pc = 0x2B5878u;
    // 0x2b5878: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B5878u;
    SET_GPR_U32(ctx, 31, 0x2B5880u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B5878u, 0x2B5880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5880u;
label_2b5880:
    // 0x2b5880: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b5880u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2b5884:
    // 0x2b5884: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b5884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b5888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b5888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b588c: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x2b588cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x2b5890: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x2b5890u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2b5894: 0x124100  sll         $t0, $s2, 4
    ctx->pc = 0x2b5894u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b5898: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x2b5898u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b589c: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2b589cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b58a0: 0x113900  sll         $a3, $s1, 4
    ctx->pc = 0x2b58a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b58a4: 0x2a51021  addu        $v0, $s5, $a1
    ctx->pc = 0x2b58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2b58a8: 0x2882021  addu        $a0, $s4, $t0
    ctx->pc = 0x2b58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x2b58ac: 0x0  nop
    ctx->pc = 0x2b58acu;
    // NOP
    // 0x2b58b0: 0x0  nop
    ctx->pc = 0x2b58b0u;
    // NOP
    // 0x2b58b4: 0x46050143  div.s       $f5, $f0, $f5
    ctx->pc = 0x2b58b4u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[5];
    // 0x2b58b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b58bc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2b58bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b58c0: 0x2871821  addu        $v1, $s4, $a3
    ctx->pc = 0x2b58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2b58c4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2b58c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2b58c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b58c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b58cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2b58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b58d0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2b58d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b58d4: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2b58d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2b58d8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b58d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b58dc: 0x3b41021  addu        $v0, $sp, $s4
    ctx->pc = 0x2b58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    // 0x2b58e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b58e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b58e4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b58e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b58e8: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x2b58e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b58ec: 0x3b51821  addu        $v1, $sp, $s5
    ctx->pc = 0x2b58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
    // 0x2b58f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b58f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b58f4: 0x3a61021  addu        $v0, $sp, $a2
    ctx->pc = 0x2b58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x2b58f8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2b58f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2b58fc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2b58fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2b5900: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x2b5900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2b5904: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2b5904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2b5908: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2b5908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b590c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2b590cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2b5910: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b5910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b5914: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b5918: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2b5918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b591c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2b591cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5920: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2b5920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5924: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x2b5924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2b5928: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2b5928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2b592c: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2b592cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2b5930: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b5930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5934: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2b5934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5938: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b5938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b593c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2b593cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b5940: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x2b5940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_2b5944:
    // 0x2b5944: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b5944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b5948: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2b5948u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b594c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2b594cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b5950: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2b5950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b5954: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2b5954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5958: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b5958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b595c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2b595cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5960: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b5960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5964: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5964u;
        // 0x2b5968: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B596Cu;
}
