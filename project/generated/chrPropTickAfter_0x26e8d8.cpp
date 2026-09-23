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

// Function: chrPropTickAfter
// Address: 0x26e8d8 - 0x26ecb4
void chrPropTickAfter_0x26e8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrPropTickAfter_0x26e8d8");
#endif

    switch (ctx->pc) {
        case 0x26e97cu: goto label_26e97c;
        case 0x26e988u: goto label_26e988;
        case 0x26eae4u: goto label_26eae4;
        case 0x26eb08u: goto label_26eb08;
        case 0x26eb2cu: goto label_26eb2c;
        case 0x26eb40u: goto label_26eb40;
        case 0x26eb6cu: goto label_26eb6c;
        case 0x26ebb4u: goto label_26ebb4;
        case 0x26ebc4u: goto label_26ebc4;
        case 0x26ebd0u: goto label_26ebd0;
        case 0x26ebe0u: goto label_26ebe0;
        case 0x26ebecu: goto label_26ebec;
        case 0x26ebf4u: goto label_26ebf4;
        case 0x26ec2cu: goto label_26ec2c;
        case 0x26ec50u: goto label_26ec50;
        case 0x26ec64u: goto label_26ec64;
        case 0x26ec88u: goto label_26ec88;
        case 0x26ec90u: goto label_26ec90;
        default: break;
    }

    ctx->pc = 0x26e8d8u;

    // 0x26e8d8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x26e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x26e8dc: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x26e8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x26e8e0: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x26e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x26e8e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26e8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8e8: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x26e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x26e8ec: 0xffb30160  sd          $s3, 0x160($sp)
    ctx->pc = 0x26e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 19));
    // 0x26e8f0: 0xffb10140  sd          $s1, 0x140($sp)
    ctx->pc = 0x26e8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 17));
    // 0x26e8f4: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x26e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x26e8f8: 0x8e450218  lw          $a1, 0x218($s2)
    ctx->pc = 0x26e8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x26e8fc: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x26E8FCu;
    {
        const bool branch_taken_0x26e8fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8FCu;
        // 0x26e900: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8fc) {
            ctx->pc = 0x26EA2Cu;
            goto label_26ea2c;
        }
    }
    ctx->pc = 0x26E904u;
    // 0x26e904: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x26e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26e908: 0x3c040f00  lui         $a0, 0xF00
    ctx->pc = 0x26e908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3840 << 16));
    // 0x26e90c: 0x24697fa8  addiu       $t1, $v1, 0x7FA8
    ctx->pc = 0x26e90cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 32680));
    // 0x26e910: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x26e910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x26e914: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x26e914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x26e918: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x26e918u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x26e91c: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x26e91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e920: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x26e920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e924: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x26e924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x26e928: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x26e928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x26e92c: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x26E92Cu;
    {
        const bool branch_taken_0x26e92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e92c) {
            ctx->pc = 0x26E930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E92Cu;
            // 0x26e930: 0xc6410034  lwc1        $f1, 0x34($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E9E4u;
            goto label_26e9e4;
        }
    }
    ctx->pc = 0x26E934u;
    // 0x26e934: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x26e934u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26e938: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26e938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26e93c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x26e93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x26e940: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x26e940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
    // 0x26e944: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26e944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26e948: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x26E948u;
    {
        const bool branch_taken_0x26e948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e948) {
            ctx->pc = 0x26E94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E948u;
            // 0x26e94c: 0xc6410034  lwc1        $f1, 0x34($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E9E4u;
            goto label_26e9e4;
        }
    }
    ctx->pc = 0x26E950u;
    // 0x26e950: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x26e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e954: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x26e954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26e958: 0xc78184b0  lwc1        $f1, -0x7B50($gp)
    ctx->pc = 0x26e958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e95c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26e95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26e960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e964: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x26e964u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x26e968: 0x0  nop
    ctx->pc = 0x26e968u;
    // NOP
    // 0x26e96c: 0x0  nop
    ctx->pc = 0x26e96cu;
    // NOP
    // 0x26e970: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x26e970u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x26e974: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x26E974u;
    SET_GPR_U32(ctx, 31, 0x26E97Cu);
    ctx->pc = 0x26E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E974u;
    // 0x26e978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x26E974u, 0x26E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E97Cu;
label_26e97c:
    // 0x26e97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e980: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x26E980u;
    SET_GPR_U32(ctx, 31, 0x26E988u);
    ctx->pc = 0x26E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E980u;
    // 0x26e984: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x26E980u, 0x26E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E988u;
label_26e988:
    // 0x26e988: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x26e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e98c: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x26e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e990: 0x8e450218  lw          $a1, 0x218($s2)
    ctx->pc = 0x26e990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x26e994: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26e994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26e998: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x26e998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e99c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x26e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x26e9a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26e9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26e9a4: 0xc4a2004c  lwc1        $f2, 0x4C($a1)
    ctx->pc = 0x26e9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e9a8: 0xe4a10030  swc1        $f1, 0x30($a1)
    ctx->pc = 0x26e9a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x26e9ac: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x26e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x26e9b0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x26e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e9b4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x26e9b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26e9b8: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x26e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e9bc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26e9c0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x26e9c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x26e9c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26e9c8: 0xe4a2004c  swc1        $f2, 0x4C($a1)
    ctx->pc = 0x26e9c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x26e9cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x26e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x26e9d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e9d4: 0xe4a30038  swc1        $f3, 0x38($a1)
    ctx->pc = 0x26e9d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x26e9d8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x26e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e9dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26E9DCu;
    {
        const bool branch_taken_0x26e9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9DCu;
        // 0x26e9e0: 0xc6410034  lwc1        $f1, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9dc) {
            ctx->pc = 0x26E9F0u;
            goto label_26e9f0;
        }
    }
    ctx->pc = 0x26E9E4u;
label_26e9e4:
    // 0x26e9e4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26e9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26e9e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e9ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26e9ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26e9f0:
    // 0x26e9f0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x26e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26e9f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26e9f8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x26e9fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26e9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ea00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26ea00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ea04: 0xc78184b4  lwc1        $f1, -0x7B4C($gp)
    ctx->pc = 0x26ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ea08: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x26ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x26ea0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26ea0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ea10: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x26ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26ea14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26ea14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26ea18: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x26ea18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x26ea1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26ea1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26ea20: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x26ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x26ea24: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ea28: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x26ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_26ea2c:
    // 0x26ea2c: 0x8e530160  lw          $s3, 0x160($s2)
    ctx->pc = 0x26ea2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x26ea30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ea34: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x26ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x26ea38: 0x14430097  bne         $v0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x26EA38u;
    {
        const bool branch_taken_0x26ea38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA38u;
        // 0x26ea3c: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea38) {
            ctx->pc = 0x26EC98u;
            goto label_26ec98;
        }
    }
    ctx->pc = 0x26EA40u;
    // 0x26ea40: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x26ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x26ea44: 0x24030229  addiu       $v1, $zero, 0x229
    ctx->pc = 0x26ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    // 0x26ea48: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x26ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x26ea4c: 0x54430087  bnel        $v0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x26EA4Cu;
    {
        const bool branch_taken_0x26ea4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26ea4c) {
            ctx->pc = 0x26EA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EA4Cu;
            // 0x26ea50: 0x8e6211a8  lw          $v0, 0x11A8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EC6Cu;
            goto label_26ec6c;
        }
    }
    ctx->pc = 0x26EA54u;
    // 0x26ea54: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x26ea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ea58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ea58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ea5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26ea5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ea60: 0x0  nop
    ctx->pc = 0x26ea60u;
    // NOP
    // 0x26ea64: 0x45020081  bc1fl       . + 4 + (0x81 << 2)
    ctx->pc = 0x26EA64u;
    {
        const bool branch_taken_0x26ea64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ea64) {
            ctx->pc = 0x26EA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EA64u;
            // 0x26ea68: 0x8e6211a8  lw          $v0, 0x11A8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EC6Cu;
            goto label_26ec6c;
        }
    }
    ctx->pc = 0x26EA6Cu;
    // 0x26ea6c: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x26ea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x26ea70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ea70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ea74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ea74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ea78: 0x0  nop
    ctx->pc = 0x26ea78u;
    // NOP
    // 0x26ea7c: 0x4502007b  bc1fl       . + 4 + (0x7B << 2)
    ctx->pc = 0x26EA7Cu;
    {
        const bool branch_taken_0x26ea7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ea7c) {
            ctx->pc = 0x26EA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EA7Cu;
            // 0x26ea80: 0x8e6211a8  lw          $v0, 0x11A8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EC6Cu;
            goto label_26ec6c;
        }
    }
    ctx->pc = 0x26EA84u;
    // 0x26ea84: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x26ea84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26ea88: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x26ea88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x26ea8c: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x26EA8Cu;
    {
        const bool branch_taken_0x26ea8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA8Cu;
        // 0x26ea90: 0xdfb40170  ld          $s4, 0x170($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea8c) {
            ctx->pc = 0x26EC9Cu;
            goto label_26ec9c;
        }
    }
    ctx->pc = 0x26EA94u;
    // 0x26ea94: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26ea98: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x26ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x26ea9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ea9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26eaa0: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x26EAA0u;
    {
        const bool branch_taken_0x26eaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAA0u;
        // 0x26eaa4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eaa0) {
            ctx->pc = 0x26EC9Cu;
            goto label_26ec9c;
        }
    }
    ctx->pc = 0x26EAA8u;
    // 0x26eaa8: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x26EAA8u;
    {
        const bool branch_taken_0x26eaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAA8u;
        // 0x26eaac: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eaa8) {
            ctx->pc = 0x26EC9Cu;
            goto label_26ec9c;
        }
    }
    ctx->pc = 0x26EAB0u;
    // 0x26eab0: 0xc64f004c  lwc1        $f15, 0x4C($s2)
    ctx->pc = 0x26eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x26eab4: 0xc78084b8  lwc1        $f0, -0x7B48($gp)
    ctx->pc = 0x26eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26eab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26eab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eabc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26eabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26eac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26eac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26eac4: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x26eac4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x26eac8: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x26eac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26eacc: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x26eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26ead0: 0x0  nop
    ctx->pc = 0x26ead0u;
    // NOP
    // 0x26ead4: 0x0  nop
    ctx->pc = 0x26ead4u;
    // NOP
    // 0x26ead8: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x26ead8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x26eadc: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x26EADCu;
    SET_GPR_U32(ctx, 31, 0x26EAE4u);
    ctx->pc = 0x26EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EADCu;
    // 0x26eae0: 0xc64e0038  lwc1        $f14, 0x38($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x26EADCu, 0x26EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EAE4u;
label_26eae4:
    // 0x26eae4: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x26eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x26eae8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26eaec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26eaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eaf0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x26eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x26eaf4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x26eaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26eaf8: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x26eaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26eafc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x26eafcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x26eb00: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26EB00u;
    SET_GPR_U32(ctx, 31, 0x26EB08u);
    ctx->pc = 0x26EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB00u;
    // 0x26eb04: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26EB00u, 0x26EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB08u;
label_26eb08:
    // 0x26eb08: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x26eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x26eb0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26eb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26eb14: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x26eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x26eb18: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x26eb18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26eb1c: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x26eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26eb20: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x26eb20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x26eb24: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26EB24u;
    SET_GPR_U32(ctx, 31, 0x26EB2Cu);
    ctx->pc = 0x26EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB24u;
    // 0x26eb28: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26EB24u, 0x26EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB2Cu;
label_26eb2c:
    // 0x26eb2c: 0x8e6311a8  lw          $v1, 0x11A8($s3)
    ctx->pc = 0x26eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4520)));
    // 0x26eb30: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x26EB30u;
    {
        const bool branch_taken_0x26eb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26eb30) {
            ctx->pc = 0x26EB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EB30u;
            // 0x26eb34: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EB74u;
            goto label_26eb74;
        }
    }
    ctx->pc = 0x26EB38u;
    // 0x26eb38: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26EB38u;
    SET_GPR_U32(ctx, 31, 0x26EB40u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26EB38u, 0x26EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB40u;
label_26eb40:
    // 0x26eb40: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x26eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26eb44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26eb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26eb48: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26eb4c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x26eb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x26eb50: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x26eb50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x26eb54: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x26eb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26eb58: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x26eb58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26eb5c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x26eb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26eb60: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x26eb60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26eb64: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x26EB64u;
    SET_GPR_U32(ctx, 31, 0x26EB6Cu);
    ctx->pc = 0x26EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB64u;
    // 0x26eb68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x26EB64u, 0x26EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB6Cu;
label_26eb6c:
    // 0x26eb6c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x26EB6Cu;
    {
        const bool branch_taken_0x26eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB6Cu;
        // 0x26eb70: 0xae6211a8  sw          $v0, 0x11A8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb6c) {
            ctx->pc = 0x26EC94u;
            goto label_26ec94;
        }
    }
    ctx->pc = 0x26EB74u;
label_26eb74:
    // 0x26eb74: 0xc78184bc  lwc1        $f1, -0x7B44($gp)
    ctx->pc = 0x26eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26eb78: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x26eb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26eb7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26eb7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26eb80: 0x0  nop
    ctx->pc = 0x26eb80u;
    // NOP
    // 0x26eb84: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x26EB84u;
    {
        const bool branch_taken_0x26eb84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB84u;
        // 0x26eb88: 0x8c740000  lw          $s4, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb84) {
            ctx->pc = 0x26EC50u;
            goto label_26ec50;
        }
    }
    ctx->pc = 0x26EB8Cu;
    // 0x26eb8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26eb8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26eb90: 0xc78c84c0  lwc1        $f12, -0x7B40($gp)
    ctx->pc = 0x26eb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26eb94: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x26eb94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x26eb98: 0x3411ff80  ori         $s1, $zero, 0xFF80
    ctx->pc = 0x26eb98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x26eb9c: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x26eb9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x26eba0: 0x0  nop
    ctx->pc = 0x26eba0u;
    // NOP
    // 0x26eba4: 0x0  nop
    ctx->pc = 0x26eba4u;
    // NOP
    // 0x26eba8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x26eba8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x26ebac: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x26EBACu;
    SET_GPR_U32(ctx, 31, 0x26EBB4u);
    ctx->pc = 0x26EBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBACu;
    // 0x26ebb0: 0x26105c60  addiu       $s0, $s0, 0x5C60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x26EBACu, 0x26EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBB4u;
label_26ebb4:
    // 0x26ebb4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x26ebb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x26ebb8: 0xdc257fb8  ld          $a1, 0x7FB8($at)
    ctx->pc = 0x26ebb8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A7FB8u));
    // 0x26ebbc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x26EBBCu;
    SET_GPR_U32(ctx, 31, 0x26EBC4u);
    ctx->pc = 0x26EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBBCu;
    // 0x26ebc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x26EBBCu, 0x26EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBC4u;
label_26ebc4:
    // 0x26ebc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ebc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebc8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x26EBC8u;
    SET_GPR_U32(ctx, 31, 0x26EBD0u);
    ctx->pc = 0x26EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBC8u;
    // 0x26ebcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x26EBC8u, 0x26EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBD0u;
label_26ebd0:
    // 0x26ebd0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x26ebd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x26ebd4: 0xdc257fc0  ld          $a1, 0x7FC0($at)
    ctx->pc = 0x26ebd4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A7FC0u));
    // 0x26ebd8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x26EBD8u;
    SET_GPR_U32(ctx, 31, 0x26EBE0u);
    ctx->pc = 0x26EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBD8u;
    // 0x26ebdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x26EBD8u, 0x26EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBE0u;
label_26ebe0:
    // 0x26ebe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebe4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x26EBE4u;
    SET_GPR_U32(ctx, 31, 0x26EBECu);
    ctx->pc = 0x26EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBE4u;
    // 0x26ebe8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x26EBE4u, 0x26EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBECu;
label_26ebec:
    // 0x26ebec: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x26EBECu;
    SET_GPR_U32(ctx, 31, 0x26EBF4u);
    ctx->pc = 0x26EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBECu;
    // 0x26ebf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x26EBECu, 0x26EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBF4u;
label_26ebf4:
    // 0x26ebf4: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x26ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x26ebf8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x26ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26ebfc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x26ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26ec00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26ec04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26ec08: 0x1683000a  bne         $s4, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26EC08u;
    {
        const bool branch_taken_0x26ec08 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x26EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC08u;
        // 0x26ec0c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec08) {
            ctx->pc = 0x26EC34u;
            goto label_26ec34;
        }
    }
    ctx->pc = 0x26EC10u;
    // 0x26ec10: 0xc78c84c4  lwc1        $f12, -0x7B3C($gp)
    ctx->pc = 0x26ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26ec14: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x26ec14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26ec18: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x26ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x26ec1c: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x26ec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x26ec20: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x26ec20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x26ec24: 0xc099002  jal         func_264008
    ctx->pc = 0x26EC24u;
    SET_GPR_U32(ctx, 31, 0x26EC2Cu);
    ctx->pc = 0x26EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC24u;
    // 0x26ec28: 0x240700c4  addiu       $a3, $zero, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264008u, 0x26EC24u, 0x26EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC2Cu;
label_26ec2c:
    // 0x26ec2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26EC2Cu;
    {
        const bool branch_taken_0x26ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC2Cu;
        // 0x26ec30: 0x8e6411a8  lw          $a0, 0x11A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec2c) {
            ctx->pc = 0x26EC54u;
            goto label_26ec54;
        }
    }
    ctx->pc = 0x26EC34u;
label_26ec34:
    // 0x26ec34: 0xc78c84c8  lwc1        $f12, -0x7B38($gp)
    ctx->pc = 0x26ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26ec38: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x26ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26ec3c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x26ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x26ec40: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x26ec40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26ec44: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x26ec44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x26ec48: 0xc099002  jal         func_264008
    ctx->pc = 0x26EC48u;
    SET_GPR_U32(ctx, 31, 0x26EC50u);
    ctx->pc = 0x26EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC48u;
    // 0x26ec4c: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264008u, 0x26EC48u, 0x26EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC50u;
label_26ec50:
    // 0x26ec50: 0x8e6411a8  lw          $a0, 0x11A8($s3)
    ctx->pc = 0x26ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4520)));
label_26ec54:
    // 0x26ec54: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x26ec54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x26ec58: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x26ec58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26ec5c: 0xc0ab95c  jal         func_2AE570
    ctx->pc = 0x26EC5Cu;
    SET_GPR_U32(ctx, 31, 0x26EC64u);
    ctx->pc = 0x26EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC5Cu;
    // 0x26ec60: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE570u, 0x26EC5Cu, 0x26EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC64u;
label_26ec64:
    // 0x26ec64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26EC64u;
    {
        const bool branch_taken_0x26ec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC64u;
        // 0x26ec68: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec64) {
            ctx->pc = 0x26EC98u;
            goto label_26ec98;
        }
    }
    ctx->pc = 0x26EC6Cu;
label_26ec6c:
    // 0x26ec6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26EC6Cu;
    {
        const bool branch_taken_0x26ec6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC6Cu;
        // 0x26ec70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec6c) {
            ctx->pc = 0x26EC94u;
            goto label_26ec94;
        }
    }
    ctx->pc = 0x26EC74u;
    // 0x26ec74: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x26ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x26ec78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ec78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ec7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ec7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec80: 0xc099002  jal         func_264008
    ctx->pc = 0x26EC80u;
    SET_GPR_U32(ctx, 31, 0x26EC88u);
    ctx->pc = 0x26EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC80u;
    // 0x26ec84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264008u, 0x26EC80u, 0x26EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC88u;
label_26ec88:
    // 0x26ec88: 0xc0aaba2  jal         func_2AAE88
    ctx->pc = 0x26EC88u;
    SET_GPR_U32(ctx, 31, 0x26EC90u);
    ctx->pc = 0x26EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC88u;
    // 0x26ec8c: 0x8e6411a8  lw          $a0, 0x11A8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4520)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAE88u, 0x26EC88u, 0x26EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC90u;
label_26ec90:
    // 0x26ec90: 0xae6011a8  sw          $zero, 0x11A8($s3)
    ctx->pc = 0x26ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4520), GPR_U32(ctx, 0));
label_26ec94:
    // 0x26ec94: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x26ec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_26ec98:
    // 0x26ec98: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x26ec98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_26ec9c:
    // 0x26ec9c: 0xdfb30160  ld          $s3, 0x160($sp)
    ctx->pc = 0x26ec9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x26eca0: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x26eca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x26eca4: 0xdfb10140  ld          $s1, 0x140($sp)
    ctx->pc = 0x26eca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x26eca8: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x26eca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26ecac: 0x3e00008  jr          $ra
    ctx->pc = 0x26ECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECACu;
        // 0x26ecb0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ECB4u;
}
