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

// Function: bgGlassMoveTestRoom
// Address: 0x259bf0 - 0x259eb8
void bgGlassMoveTestRoom_0x259bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgGlassMoveTestRoom_0x259bf0");
#endif

    switch (ctx->pc) {
        case 0x259cb8u: goto label_259cb8;
        case 0x259d00u: goto label_259d00;
        case 0x259d68u: goto label_259d68;
        case 0x259db0u: goto label_259db0;
        case 0x259dd4u: goto label_259dd4;
        case 0x259de0u: goto label_259de0;
        case 0x259e20u: goto label_259e20;
        case 0x259e5cu: goto label_259e5c;
        default: break;
    }

    ctx->pc = 0x259bf0u;

    // 0x259bf0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x259bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x259bf4: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x259bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x259bf8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x259bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x259bfc: 0x8f83a240  lw          $v1, -0x5DC0($gp)
    ctx->pc = 0x259bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x259c00: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x259c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x259c04: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x259c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x259c08: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x259c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x259c0c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x259c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x259c10: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x259c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x259c14: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x259c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x259c18: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x259c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x259c1c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x259c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x259c20: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x259c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x259c24: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x259c24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x259c28: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x259c28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x259c2c: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x259c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x259c30: 0x8cb70010  lw          $s7, 0x10($a1)
    ctx->pc = 0x259c30u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x259c34: 0x12e00093  beqz        $s7, . + 4 + (0x93 << 2)
    ctx->pc = 0x259C34u;
    {
        const bool branch_taken_0x259c34 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C34u;
        // 0x259c38: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c34) {
            ctx->pc = 0x259E84u;
            goto label_259e84;
        }
    }
    ctx->pc = 0x259C3Cu;
    // 0x259c3c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x259c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259c40: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x259c40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c44: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x259c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x259c48: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x259c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x259c4c: 0x460c0200  add.s       $f8, $f0, $f12
    ctx->pc = 0x259c4cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x259c50: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x259c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x259c54: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x259c54u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x259c58: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x259c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x259c5c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x259c5cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x259c60: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x259c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259c64: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x259c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x259c68: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x259c68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x259c6c: 0xc78182d4  lwc1        $f1, -0x7D2C($gp)
    ctx->pc = 0x259c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259c70: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x259c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x259c74: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x259c74u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x259c78: 0x46042142  mul.s       $f5, $f4, $f4
    ctx->pc = 0x259c78u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x259c7c: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x259c7cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x259c80: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x259c80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x259c84: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x259c84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x259c88: 0x46021182  mul.s       $f6, $f2, $f2
    ctx->pc = 0x259c88u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x259c8c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x259c8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x259c90: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x259c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x259c94: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x259c94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x259c98: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x259c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x259c9c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x259c9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x259ca0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x259ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x259ca4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x259CA4u;
    {
        const bool branch_taken_0x259ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CA4u;
        // 0x259ca8: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ca4) {
            ctx->pc = 0x259E84u;
            goto label_259e84;
        }
    }
    ctx->pc = 0x259CACu;
    // 0x259cac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x259cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259cb0: 0x971021  addu        $v0, $a0, $s7
    ctx->pc = 0x259cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x259cb4: 0x0  nop
    ctx->pc = 0x259cb4u;
    // NOP
label_259cb8:
    // 0x259cb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x259cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259cbc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x259cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259cc0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x259cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259cc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x259cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259cc8: 0x0  nop
    ctx->pc = 0x259cc8u;
    // NOP
    // 0x259ccc: 0x45000065  bc1f        . + 4 + (0x65 << 2)
    ctx->pc = 0x259CCCu;
    {
        const bool branch_taken_0x259ccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CCCu;
        // 0x259cd0: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ccc) {
            ctx->pc = 0x259E64u;
            goto label_259e64;
        }
    }
    ctx->pc = 0x259CD4u;
    // 0x259cd4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x259cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259cd8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x259cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x259cdc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x259cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ce0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x259ce0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x259ce4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x259ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x259ce8: 0x26070038  addiu       $a3, $s0, 0x38
    ctx->pc = 0x259ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x259cec: 0x26080060  addiu       $t0, $s0, 0x60
    ctx->pc = 0x259cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x259cf0: 0x26090088  addiu       $t1, $s0, 0x88
    ctx->pc = 0x259cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x259cf4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x259cf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259cf8: 0xc0964ca  jal         func_259328
    ctx->pc = 0x259CF8u;
    SET_GPR_U32(ctx, 31, 0x259D00u);
    ctx->pc = 0x259CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259CF8u;
    // 0x259cfc: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259328u, 0x259CF8u, 0x259D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D00u;
label_259d00:
    // 0x259d00: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x259D00u;
    {
        const bool branch_taken_0x259d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D00u;
        // 0x259d04: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d00) {
            ctx->pc = 0x259E64u;
            goto label_259e64;
        }
    }
    ctx->pc = 0x259D08u;
    // 0x259d08: 0x24462670  addiu       $a2, $v0, 0x2670
    ctx->pc = 0x259d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
    // 0x259d0c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x259d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x259d10: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x259d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x259d14: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x259d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x259d18: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x259d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x259d1c: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x259d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x259d20: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x259d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x259d24: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x259d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259d28: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x259d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259d2c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x259d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x259d30: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x259d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259d34: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x259d34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x259d38: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x259d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x259d3c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x259d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x259d40: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x259d40u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x259d44: 0x0  nop
    ctx->pc = 0x259d44u;
    // NOP
    // 0x259d48: 0x0  nop
    ctx->pc = 0x259d48u;
    // NOP
    // 0x259d4c: 0x460c0084  c1          0xC0084
    ctx->pc = 0x259d4cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x259d50: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x259d50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259d54: 0x0  nop
    ctx->pc = 0x259d54u;
    // NOP
    // 0x259d58: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x259D58u;
    {
        const bool branch_taken_0x259d58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x259D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D58u;
        // 0x259d5c: 0x27b40040  addiu       $s4, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d58) {
            ctx->pc = 0x259D6Cu;
            goto label_259d6c;
        }
    }
    ctx->pc = 0x259D60u;
    // 0x259d60: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x259D60u;
    SET_GPR_U32(ctx, 31, 0x259D68u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x259D60u, 0x259D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D68u;
label_259d68:
    // 0x259d68: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x259d68u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_259d6c:
    // 0x259d6c: 0x24061210  addiu       $a2, $zero, 0x1210
    ctx->pc = 0x259d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x259d70: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x259d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x259d74: 0x2a63018  mult        $a2, $s5, $a2
    ctx->pc = 0x259d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x259d78: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x259d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259d7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259d80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259d84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x259d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d88: 0x0  nop
    ctx->pc = 0x259d88u;
    // NOP
    // 0x259d8c: 0x0  nop
    ctx->pc = 0x259d8cu;
    // NOP
    // 0x259d90: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x259d90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[0];
    // 0x259d94: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x259d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x259d98: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x259d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x259d9c: 0x8cc20bcc  lw          $v0, 0xBCC($a2)
    ctx->pc = 0x259d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3020)));
    // 0x259da0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x259da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x259da4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x259da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259da8: 0xc088f98  jal         func_223E60
    ctx->pc = 0x259DA8u;
    SET_GPR_U32(ctx, 31, 0x259DB0u);
    ctx->pc = 0x259DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259DA8u;
    // 0x259dac: 0x8cd10000  lw          $s1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x259DA8u, 0x259DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259DB0u;
label_259db0:
    // 0x259db0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x259db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x259db4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259dbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x259dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259dc0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x259dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259dc4: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x259dc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x259dc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x259dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259dcc: 0xc0965e0  jal         func_259780
    ctx->pc = 0x259DCCu;
    SET_GPR_U32(ctx, 31, 0x259DD4u);
    ctx->pc = 0x259DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259DCCu;
    // 0x259dd0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259780u, 0x259DCCu, 0x259DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259DD4u;
label_259dd4:
    // 0x259dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x259dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259dd8: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x259dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x259ddc: 0x26d00001  addiu       $s0, $s6, 0x1
    ctx->pc = 0x259ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_259de0:
    // 0x259de0: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x259de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x259de4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x259DE4u;
    {
        const bool branch_taken_0x259de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DE4u;
        // 0x259de8: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259de4) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259DECu;
    // 0x259dec: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x259decu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x259df0: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x259df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x259df4: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x259df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x259df8: 0x8c430bcc  lw          $v1, 0xBCC($v0)
    ctx->pc = 0x259df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x259dfc: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x259dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x259e00: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x259e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x259e04: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x259e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x259e08: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x259e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x259e0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x259e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x259e10: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x259E10u;
    {
        const bool branch_taken_0x259e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259e10) {
            ctx->pc = 0x259E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259E10u;
            // 0x259e14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259de0;
        }
    }
    ctx->pc = 0x259E18u;
    // 0x259e18: 0xc0a141a  jal         func_285068
    ctx->pc = 0x259E18u;
    SET_GPR_U32(ctx, 31, 0x259E20u);
    ctx->pc = 0x259E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E18u;
    // 0x259e1c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285068u, 0x259E18u, 0x259E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E20u;
label_259e20:
    // 0x259e20: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x259e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_259e24:
    // 0x259e24: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x259e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x259e28: 0xc78c82d8  lwc1        $f12, -0x7D28($gp)
    ctx->pc = 0x259e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x259e2c: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x259e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x259e30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x259e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e34: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x259e34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x259e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x259e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259e40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x259e44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x259e48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e4c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x259e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x259e50: 0x8c440bcc  lw          $a0, 0xBCC($v0)
    ctx->pc = 0x259e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x259e54: 0xc09c666  jal         func_271998
    ctx->pc = 0x259E54u;
    SET_GPR_U32(ctx, 31, 0x259E5Cu);
    ctx->pc = 0x259E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E54u;
    // 0x259e58: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271998u, 0x259E54u, 0x259E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E5Cu;
label_259e5c:
    // 0x259e5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259E5Cu;
    {
        const bool branch_taken_0x259e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E5Cu;
        // 0x259e60: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e5c) {
            ctx->pc = 0x259E6Cu;
            goto label_259e6c;
        }
    }
    ctx->pc = 0x259E64u;
label_259e64:
    // 0x259e64: 0x26d00001  addiu       $s0, $s6, 0x1
    ctx->pc = 0x259e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x259e68: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x259e68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259e6c:
    // 0x259e6c: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x259e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x259e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x259e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e74: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x259e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x259e78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x259e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259e7c: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x259E7Cu;
    {
        const bool branch_taken_0x259e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E7Cu;
        // 0x259e80: 0x971021  addu        $v0, $a0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e7c) {
            ctx->pc = 0x259CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259cb8;
        }
    }
    ctx->pc = 0x259E84u;
label_259e84:
    // 0x259e84: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x259e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x259e88: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x259e88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259e8c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x259e8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259e90: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x259e90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x259e94: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x259e94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259e98: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x259e98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259e9c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x259e9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259ea0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x259ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259ea4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x259ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259ea8: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x259ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x259eac: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x259eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x259EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EB0u;
        // 0x259eb4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259EB8u;
}
