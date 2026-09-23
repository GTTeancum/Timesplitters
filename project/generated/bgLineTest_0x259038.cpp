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

// Function: bgLineTest
// Address: 0x259038 - 0x259328
void bgLineTest_0x259038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgLineTest_0x259038");
#endif

    switch (ctx->pc) {
        case 0x2590a4u: goto label_2590a4;
        case 0x259118u: goto label_259118;
        case 0x259138u: goto label_259138;
        case 0x2591d8u: goto label_2591d8;
        case 0x2591fcu: goto label_2591fc;
        case 0x2592acu: goto label_2592ac;
        default: break;
    }

    ctx->pc = 0x259038u;

    // 0x259038: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x259038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x25903c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25903cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259040: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x259040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x259044: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x259044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259048: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x259048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x25904c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25904cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259050: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x259050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x259054: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x259054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259058: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x259058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x25905c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x25905cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259060: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x259060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x259064: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x259064u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259068: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x259068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x25906c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25906cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259070: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x259070u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x259074: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x259074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x259078: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x259078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x25907c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25907cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259080: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x259080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x259084: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x259084u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259088: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x259088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x25908c: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x25908cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x259090: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x259090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x259094: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x259094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x259098: 0xafaa0058  sw          $t2, 0x58($sp)
    ctx->pc = 0x259098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 10));
    // 0x25909c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x25909Cu;
    SET_GPR_U32(ctx, 31, 0x2590A4u);
    ctx->pc = 0x2590A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25909Cu;
    // 0x2590a0: 0xafab005c  sw          $t3, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x25909Cu, 0x2590A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590A4u;
label_2590a4:
    // 0x2590a4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2590a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2590a8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2590a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2590ac: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2590acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2590b0: 0x24472660  addiu       $a3, $v0, 0x2660
    ctx->pc = 0x2590b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
    // 0x2590b4: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x2590b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2590b8: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x2590b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2590bc: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2590bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A2668u));
    // 0x2590c0: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x2590c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2590c4: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x2590c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2590c8: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x2590c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x2590cc: 0xc475ea4c  lwc1        $f21, -0x15B4($v1)
    ctx->pc = 0x2590ccu;
    { uint32_t bits = FAST_READ32(0x3AEA4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2590d0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2590d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2590d4: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2590D4u;
    {
        const bool branch_taken_0x2590d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2590D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590D4u;
        // 0x2590d8: 0xaf80a260  sw          $zero, -0x5DA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590d4) {
            ctx->pc = 0x2590FCu;
            goto label_2590fc;
        }
    }
    ctx->pc = 0x2590DCu;
    // 0x2590dc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2590dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2590e0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2590e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2590e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2590e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2590e8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2590e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2590ec: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2590ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2590f0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2590f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2590f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2590f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2590f8: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x2590f8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2590fc:
    // 0x2590fc: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2590FCu;
    {
        const bool branch_taken_0x2590fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x259100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590FCu;
        // 0x259100: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590fc) {
            ctx->pc = 0x259218u;
            goto label_259218;
        }
    }
    ctx->pc = 0x259104u;
    // 0x259104: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x259104u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x259108: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x259108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25910c: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x25910cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x259110: 0x8faa005c  lw          $t2, 0x5C($sp)
    ctx->pc = 0x259110u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x259114: 0x0  nop
    ctx->pc = 0x259114u;
    // NOP
label_259118:
    // 0x259118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25911c: 0x8fab0120  lw          $t3, 0x120($sp)
    ctx->pc = 0x25911cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x259120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x259120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259124: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x259124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259128: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x259128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25912c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x25912cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259130: 0xc09c10c  jal         func_270430
    ctx->pc = 0x259130u;
    SET_GPR_U32(ctx, 31, 0x259138u);
    ctx->pc = 0x259134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259130u;
    // 0x259134: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270430u, 0x259130u, 0x259138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259138u;
label_259138:
    // 0x259138: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x259138u;
    {
        const bool branch_taken_0x259138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259138u;
        // 0x25913c: 0xc7a70020  lwc1        $f7, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259138) {
            ctx->pc = 0x2591C4u;
            goto label_2591c4;
        }
    }
    ctx->pc = 0x259140u;
    // 0x259140: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x259140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259144: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x259144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259148: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x259148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25914c: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x25914cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x259150: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x259150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259154: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x259154u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x259158: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x259158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25915c: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x25915cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x259160: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x259160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x259164: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x259164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x259168: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x259168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25916c: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x25916cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x259170: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x259170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x259174: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x259174u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x259178: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x259178u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x25917c: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x25917cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259180: 0x0  nop
    ctx->pc = 0x259180u;
    // NOP
    // 0x259184: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x259184u;
    {
        const bool branch_taken_0x259184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259184u;
        // 0x259188: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259184) {
            ctx->pc = 0x2591C4u;
            goto label_2591c4;
        }
    }
    ctx->pc = 0x25918Cu;
    // 0x25918c: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x25918cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259190: 0x0  nop
    ctx->pc = 0x259190u;
    // NOP
    // 0x259194: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x259194u;
    {
        const bool branch_taken_0x259194 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259194u;
        // 0x259198: 0xc7a20030  lwc1        $f2, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259194) {
            ctx->pc = 0x2591C4u;
            goto label_2591c4;
        }
    }
    ctx->pc = 0x25919Cu;
    // 0x25919c: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x25919cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2591a0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2591a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2591a4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2591a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2591a8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2591a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2591ac: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x2591acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2591b0: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x2591b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2591b4: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2591b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2591b8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2591b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2591bc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2591bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2591c0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2591c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2591c4:
    // 0x2591c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2591c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2591c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2591ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591d0: 0xc0967ae  jal         func_259EB8
    ctx->pc = 0x2591D0u;
    SET_GPR_U32(ctx, 31, 0x2591D8u);
    ctx->pc = 0x2591D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2591D0u;
    // 0x2591d4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EB8u, 0x2591D0u, 0x2591D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2591D8u;
label_2591d8:
    // 0x2591d8: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x2591d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2591dc: 0x0  nop
    ctx->pc = 0x2591dcu;
    // NOP
    // 0x2591e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2591E0u;
    {
        const bool branch_taken_0x2591e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2591E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591E0u;
        // 0x2591e4: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591e0) {
            ctx->pc = 0x259204u;
            goto label_259204;
        }
    }
    ctx->pc = 0x2591E8u;
    // 0x2591e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2591e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2591ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2591f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591f4: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x2591F4u;
    SET_GPR_U32(ctx, 31, 0x2591FCu);
    ctx->pc = 0x2591F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2591F4u;
    // 0x2591f8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x2591F4u, 0x2591FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2591FCu;
label_2591fc:
    // 0x2591fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2591FCu;
    {
        const bool branch_taken_0x2591fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591FCu;
        // 0x259200: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591fc) {
            ctx->pc = 0x25920Cu;
            goto label_25920c;
        }
    }
    ctx->pc = 0x259204u;
label_259204:
    // 0x259204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x259204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259208: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x259208u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25920c:
    // 0x25920c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25920cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259210: 0x1617ffc1  bne         $s0, $s7, . + 4 + (-0x3F << 2)
    ctx->pc = 0x259210u;
    {
        const bool branch_taken_0x259210 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x259214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259210u;
        // 0x259214: 0x8faa005c  lw          $t2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259210) {
            ctx->pc = 0x259118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259118;
        }
    }
    ctx->pc = 0x259218u;
label_259218:
    // 0x259218: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x259218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25921c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25921Cu;
    {
        const bool branch_taken_0x25921c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25921Cu;
        // 0x259220: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25921c) {
            ctx->pc = 0x25922Cu;
            goto label_25922c;
        }
    }
    ctx->pc = 0x259224u;
    // 0x259224: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x259224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x259228: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x259228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25922c:
    // 0x25922c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x25922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x259230: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x259230u;
    {
        const bool branch_taken_0x259230 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x259230) {
            ctx->pc = 0x259234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259230u;
            // 0x259234: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259238u;
            goto label_259238;
        }
    }
    ctx->pc = 0x259238u;
label_259238:
    // 0x259238: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x259238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25923c: 0x0  nop
    ctx->pc = 0x25923cu;
    // NOP
    // 0x259240: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x259240u;
    {
        const bool branch_taken_0x259240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259240u;
        // 0x259244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259240) {
            ctx->pc = 0x2592F0u;
            goto label_2592f0;
        }
    }
    ctx->pc = 0x259248u;
    // 0x259248: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x259248u;
    {
        const bool branch_taken_0x259248 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x25924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259248u;
        // 0x25924c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259248) {
            ctx->pc = 0x259264u;
            goto label_259264;
        }
    }
    ctx->pc = 0x259250u;
    // 0x259250: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x259250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259254: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x259254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259258: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x259258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x25925c: 0xe7c10008  swc1        $f1, 0x8($fp)
    ctx->pc = 0x25925cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x259260: 0xe7c20004  swc1        $f2, 0x4($fp)
    ctx->pc = 0x259260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_259264:
    // 0x259264: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x259264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x259268: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x259268u;
    {
        const bool branch_taken_0x259268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259268u;
        // 0x25926c: 0xc7a50010  lwc1        $f5, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259268) {
            ctx->pc = 0x2592ECu;
            goto label_2592ec;
        }
    }
    ctx->pc = 0x259270u;
    // 0x259270: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x259270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x259274: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x259274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x259278: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x259278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25927c: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x25927cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x259280: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x259280u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x259284: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x259284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x259288: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x259288u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25928c: 0x0  nop
    ctx->pc = 0x25928cu;
    // NOP
    // 0x259290: 0x0  nop
    ctx->pc = 0x259290u;
    // NOP
    // 0x259294: 0x460c0044  c1          0xC0044
    ctx->pc = 0x259294u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x259298: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x259298u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25929c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25929Cu;
    {
        const bool branch_taken_0x25929c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25929c) {
            ctx->pc = 0x2592BCu;
            goto label_2592bc;
        }
    }
    ctx->pc = 0x2592A4u;
    // 0x2592a4: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2592A4u;
    SET_GPR_U32(ctx, 31, 0x2592ACu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2592A4u, 0x2592ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2592ACu;
label_2592ac:
    // 0x2592ac: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x2592acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2592b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2592b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2592b4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2592b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2592b8: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2592b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2592bc:
    // 0x2592bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2592bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2592c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2592c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2592c4: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x2592c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2592c8: 0x0  nop
    ctx->pc = 0x2592c8u;
    // NOP
    // 0x2592cc: 0x0  nop
    ctx->pc = 0x2592ccu;
    // NOP
    // 0x2592d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2592d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2592d4: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x2592d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2592d8: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2592d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2592dc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2592dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2592e0: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2592e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2592e4: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x2592e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2592e8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2592e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_2592ec:
    // 0x2592ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2592ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2592f0:
    // 0x2592f0: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2592f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2592f4: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x2592f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2592f8: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x2592f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2592fc: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2592fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x259300: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x259300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259304: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x259304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259308: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x259308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25930c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x25930cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259310: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x259310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259314: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x259314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259318: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x259318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25931c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x25931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259320: 0x3e00008  jr          $ra
    ctx->pc = 0x259320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259320u;
        // 0x259324: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259328u;
}
