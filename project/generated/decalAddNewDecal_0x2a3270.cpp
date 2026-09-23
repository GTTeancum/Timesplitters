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

// Function: decalAddNewDecal
// Address: 0x2a3270 - 0x2a3bd8
void decalAddNewDecal_0x2a3270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalAddNewDecal_0x2a3270");
#endif

    switch (ctx->pc) {
        case 0x2a337cu: goto label_2a337c;
        case 0x2a3428u: goto label_2a3428;
        case 0x2a3438u: goto label_2a3438;
        case 0x2a34b0u: goto label_2a34b0;
        case 0x2a3550u: goto label_2a3550;
        case 0x2a35d8u: goto label_2a35d8;
        case 0x2a3670u: goto label_2a3670;
        case 0x2a3930u: goto label_2a3930;
        case 0x2a39a8u: goto label_2a39a8;
        case 0x2a3a18u: goto label_2a3a18;
        case 0x2a3a88u: goto label_2a3a88;
        case 0x2a3b70u: goto label_2a3b70;
        default: break;
    }

    ctx->pc = 0x2a3270u;

    // 0x2a3270: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x2a3270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x2a3274: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x2a3274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x2a3278: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2a3278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2a327c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2a327cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3280: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2a3280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3284: 0xffb50140  sd          $s5, 0x140($sp)
    ctx->pc = 0x2a3284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 21));
    // 0x2a3288: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x2a3288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a328c: 0x26430007  addiu       $v1, $s2, 0x7
    ctx->pc = 0x2a328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x2a3290: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x2a3290u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x2a3294: 0x8f8ab304  lw          $t2, -0x4CFC($gp)
    ctx->pc = 0x2a3294u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947588)));
    // 0x2a3298: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2a3298u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2a329c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a329cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a32a4: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x2a32a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x2a32a8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2a32a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2a32ac: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x2a32acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a32b0: 0x3c0a01ff  lui         $t2, 0x1FF
    ctx->pc = 0x2a32b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)511 << 16));
    // 0x2a32b4: 0xffb70160  sd          $s7, 0x160($sp)
    ctx->pc = 0x2a32b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 23));
    // 0x2a32b8: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2a32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2a32bc: 0x25429cd8  addiu       $v0, $t2, -0x6328
    ctx->pc = 0x2a32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941912));
    // 0x2a32c0: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x2a32c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x2a32c4: 0x240a00f0  addiu       $t2, $zero, 0xF0
    ctx->pc = 0x2a32c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2a32c8: 0xffb30120  sd          $s3, 0x120($sp)
    ctx->pc = 0x2a32c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 19));
    // 0x2a32cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a32d0: 0xffb10100  sd          $s1, 0x100($sp)
    ctx->pc = 0x2a32d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 17));
    // 0x2a32d4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a32d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a32d8: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x2a32d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x2a32dc: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x2a32dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a32e0: 0xe7bb01c8  swc1        $f27, 0x1C8($sp)
    ctx->pc = 0x2a32e0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2a32e4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2a32e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32e8: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2a32e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x2a32ec: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2a32ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32f0: 0xe7bc01d0  swc1        $f28, 0x1D0($sp)
    ctx->pc = 0x2a32f0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2a32f4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2a32f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32f8: 0xe7ba01c0  swc1        $f26, 0x1C0($sp)
    ctx->pc = 0x2a32f8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2a32fc: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2a32fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3300: 0xe7b901b8  swc1        $f25, 0x1B8($sp)
    ctx->pc = 0x2a3300u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2a3304: 0xe7b801b0  swc1        $f24, 0x1B0($sp)
    ctx->pc = 0x2a3304u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2a3308: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2a3308u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2a330c: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2a330cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2a3310: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x2a3310u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2a3314: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2a3314u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2a3318: 0x8fb601e0  lw          $s6, 0x1E0($sp)
    ctx->pc = 0x2a3318u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2a331c: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x2a331cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a3320: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2a3320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2a3324: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x2a3324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x2a3328: 0x3c0c003b  lui         $t4, 0x3B
    ctx->pc = 0x2a3328u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)59 << 16));
    // 0x2a332c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a332cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a3330: 0x2462a1f8  addiu       $v0, $v1, -0x5E08
    ctx->pc = 0x2a3330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943224));
    // 0x2a3334: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2a3334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2a3338: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a3338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a333c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a333cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3340: 0x6a5018  mult        $t2, $v1, $t2
    ctx->pc = 0x2a3340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2a3344: 0xafa800d4  sw          $t0, 0xD4($sp)
    ctx->pc = 0x2a3344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 8));
    // 0x2a3348: 0x8f83b300  lw          $v1, -0x4D00($gp)
    ctx->pc = 0x2a3348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947584)));
    // 0x2a334c: 0x460c06c2  mul.s       $f27, $f0, $f12
    ctx->pc = 0x2a334cu;
    ctx->f[27] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2a3350: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x2a3350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x2a3354: 0x6a8021  addu        $s0, $v1, $t2
    ctx->pc = 0x2a3354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2a3358: 0x25829308  addiu       $v0, $t4, -0x6CF8
    ctx->pc = 0x2a3358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294939400));
    // 0x2a335c: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x2a335cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a3360: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x2a3360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a3364: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2a3364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a3368: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x2a3368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a336c: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x2a336cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3370: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2a3370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2a3374: 0xc0a8c72  jal         func_2A31C8
    ctx->pc = 0x2A3374u;
    SET_GPR_U32(ctx, 31, 0x2A337Cu);
    ctx->pc = 0x2A3378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3374u;
    // 0x2a3378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A31C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A31C8u, 0x2A3374u, 0x2A337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A337Cu;
label_2a337c:
    // 0x2a337c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x2a337cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2a3380: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3380u;
    {
        const bool branch_taken_0x2a3380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3380u;
        // 0x2a3384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3380) {
            ctx->pc = 0x2A33A4u;
            goto label_2a33a4;
        }
    }
    ctx->pc = 0x2A3388u;
    // 0x2a3388: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2a3388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a338c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A338Cu;
    {
        const bool branch_taken_0x2a338c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a338c) {
            ctx->pc = 0x2A3390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A338Cu;
            // 0x2a3390: 0xae1400d4  sw          $s4, 0xD4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A33A8u;
            goto label_2a33a8;
        }
    }
    ctx->pc = 0x2A3394u;
    // 0x2a3394: 0xae1100d4  sw          $s1, 0xD4($s0)
    ctx->pc = 0x2a3394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 17));
    // 0x2a3398: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x2a3398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2a339c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A339Cu;
    {
        const bool branch_taken_0x2a339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A339Cu;
        // 0x2a33a0: 0xae0400d8  sw          $a0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a339c) {
            ctx->pc = 0x2A33ACu;
            goto label_2a33ac;
        }
    }
    ctx->pc = 0x2A33A4u;
label_2a33a4:
    // 0x2a33a4: 0xae1400d4  sw          $s4, 0xD4($s0)
    ctx->pc = 0x2a33a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 20));
label_2a33a8:
    // 0x2a33a8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2a33a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_2a33ac:
    // 0x2a33ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a33acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a33b0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2a33b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2a33b4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a33b8: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2a33b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a33bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a33bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a33c0: 0xe61a00dc  swc1        $f26, 0xDC($s0)
    ctx->pc = 0x2a33c0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x2a33c4: 0x24a3a1f8  addiu       $v1, $a1, -0x5E08
    ctx->pc = 0x2a33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943224));
    // 0x2a33c8: 0xe61a00e0  swc1        $f26, 0xE0($s0)
    ctx->pc = 0x2a33c8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x2a33cc: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x2a33ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x2a33d0: 0xc7b80000  lwc1        $f24, 0x0($sp)
    ctx->pc = 0x2a33d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a33d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a33d8: 0xc7b70004  lwc1        $f23, 0x4($sp)
    ctx->pc = 0x2a33d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a33dc: 0xc6d60000  lwc1        $f22, 0x0($s6)
    ctx->pc = 0x2a33dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a33e0: 0xc6d50004  lwc1        $f21, 0x4($s6)
    ctx->pc = 0x2a33e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a33e4: 0x4616c002  mul.s       $f0, $f24, $f22
    ctx->pc = 0x2a33e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
    // 0x2a33e8: 0xc7b90008  lwc1        $f25, 0x8($sp)
    ctx->pc = 0x2a33e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a33ec: 0x4615b842  mul.s       $f1, $f23, $f21
    ctx->pc = 0x2a33ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x2a33f0: 0xc6d40008  lwc1        $f20, 0x8($s6)
    ctx->pc = 0x2a33f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a33f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a33f8: 0x4614c882  mul.s       $f2, $f25, $f20
    ctx->pc = 0x2a33f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x2a33fc: 0xae1700e4  sw          $s7, 0xE4($s0)
    ctx->pc = 0x2a33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 23));
    // 0x2a3400: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a3400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3404: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x2a3404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
    // 0x2a3408: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2a3408u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a340c: 0x460ce036  c.le.s      $f28, $f12
    ctx->pc = 0x2a340cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[28], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a3410: 0x0  nop
    ctx->pc = 0x2a3410u;
    // NOP
    // 0x2a3414: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3414u;
    {
        const bool branch_taken_0x2a3414 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3414u;
        // 0x2a3418: 0xae1200d0  sw          $s2, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3414) {
            ctx->pc = 0x2A3420u;
            goto label_2a3420;
        }
    }
    ctx->pc = 0x2A341Cu;
    // 0x2a341c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2a341cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_2a3420:
    // 0x2a3420: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2A3420u;
    SET_GPR_U32(ctx, 31, 0x2A3428u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2A3420u, 0x2A3428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3428u;
label_2a3428:
    // 0x2a3428: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2a3428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2a342c: 0xdc259318  ld          $a1, -0x6CE8($at)
    ctx->pc = 0x2a342cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9318u));
    // 0x2a3430: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2A3430u;
    SET_GPR_U32(ctx, 31, 0x2A3438u);
    ctx->pc = 0x2A3434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3430u;
    // 0x2a3434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2A3430u, 0x2A3438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3438u;
label_2a3438:
    // 0x2a3438: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3438u;
    {
        const bool branch_taken_0x2a3438 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3438u;
        // 0x2a343c: 0x4619b102  mul.s       $f4, $f22, $f25 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3438) {
            ctx->pc = 0x2A3450u;
            goto label_2a3450;
        }
    }
    ctx->pc = 0x2A3440u;
    // 0x2a3440: 0xe7ba0000  swc1        $f26, 0x0($sp)
    ctx->pc = 0x2a3440u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a3444: 0x4600d606  mov.s       $f24, $f26
    ctx->pc = 0x2a3444u;
    ctx->f[24] = FPU_MOV_S(ctx->f[26]);
    // 0x2a3448: 0xe7bc0004  swc1        $f28, 0x4($sp)
    ctx->pc = 0x2a3448u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a344c: 0x4600e5c6  mov.s       $f23, $f28
    ctx->pc = 0x2a344cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[28]);
label_2a3450:
    // 0x2a3450: 0x4617a0c2  mul.s       $f3, $f20, $f23
    ctx->pc = 0x2a3450u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x2a3454: 0x4619a802  mul.s       $f0, $f21, $f25
    ctx->pc = 0x2a3454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[25]);
    // 0x2a3458: 0x4618a042  mul.s       $f1, $f20, $f24
    ctx->pc = 0x2a3458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x2a345c: 0x4617b082  mul.s       $f2, $f22, $f23
    ctx->pc = 0x2a345cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x2a3460: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a3460u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a3464: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2a3464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2a3468: 0x4618a942  mul.s       $f5, $f21, $f24
    ctx->pc = 0x2a3468u;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x2a346c: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2a346cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2a3470: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a3470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a3474: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2a3474u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a3478: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2a3478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a347c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2a347cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2a3480: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2a3480u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2a3484: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2a3484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a3488: 0x46001b00  add.s       $f12, $f3, $f0
    ctx->pc = 0x2a3488u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a348c: 0x0  nop
    ctx->pc = 0x2a348cu;
    // NOP
    // 0x2a3490: 0x0  nop
    ctx->pc = 0x2a3490u;
    // NOP
    // 0x2a3494: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2a3494u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a3498: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2a3498u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a349c: 0x0  nop
    ctx->pc = 0x2a349cu;
    // NOP
    // 0x2a34a0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A34A0u;
    {
        const bool branch_taken_0x2a34a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34A0u;
        // 0x2a34a4: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34a0) {
            ctx->pc = 0x2A34BCu;
            goto label_2a34bc;
        }
    }
    ctx->pc = 0x2A34A8u;
    // 0x2a34a8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A34A8u;
    SET_GPR_U32(ctx, 31, 0x2A34B0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A34A8u, 0x2A34B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34B0u;
label_2a34b0:
    // 0x2a34b0: 0xc6d60000  lwc1        $f22, 0x0($s6)
    ctx->pc = 0x2a34b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a34b4: 0xc6d50004  lwc1        $f21, 0x4($s6)
    ctx->pc = 0x2a34b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a34b8: 0xc6d40008  lwc1        $f20, 0x8($s6)
    ctx->pc = 0x2a34b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a34bc:
    // 0x2a34bc: 0x0  nop
    ctx->pc = 0x2a34bcu;
    // NOP
    // 0x2a34c0: 0x0  nop
    ctx->pc = 0x2a34c0u;
    // NOP
    // 0x2a34c4: 0x4600d043  div.s       $f1, $f26, $f0
    ctx->pc = 0x2a34c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[1] = ctx->f[26] / ctx->f[0];
    // 0x2a34c8: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2a34c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a34cc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a34ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a34d0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2a34d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a34d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a34d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a34d8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2a34d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2a34dc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a34dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a34e0: 0x4600b142  mul.s       $f5, $f22, $f0
    ctx->pc = 0x2a34e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2a34e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a34e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a34e8: 0x4604a042  mul.s       $f1, $f20, $f4
    ctx->pc = 0x2a34e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x2a34ec: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2a34ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a34f0: 0x4602a0c2  mul.s       $f3, $f20, $f2
    ctx->pc = 0x2a34f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2a34f4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2a34f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a34f8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2a34f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2a34fc: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2a34fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2a3500: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x2a3500u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x2a3504: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a3504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a3508: 0x4604a902  mul.s       $f4, $f21, $f4
    ctx->pc = 0x2a3508u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x2a350c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2a350cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a3510: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2a3510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a3514: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2a3514u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2a3518: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a3518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a351c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2a351cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2a3520: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a3520u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a3524: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2a3524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a3528: 0x46001b00  add.s       $f12, $f3, $f0
    ctx->pc = 0x2a3528u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a352c: 0x0  nop
    ctx->pc = 0x2a352cu;
    // NOP
    // 0x2a3530: 0x0  nop
    ctx->pc = 0x2a3530u;
    // NOP
    // 0x2a3534: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2a3534u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a3538: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2a3538u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a353c: 0x0  nop
    ctx->pc = 0x2a353cu;
    // NOP
    // 0x2a3540: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3540u;
    {
        const bool branch_taken_0x2a3540 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3540u;
        // 0x2a3544: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3540) {
            ctx->pc = 0x2A3550u;
            goto label_2a3550;
        }
    }
    ctx->pc = 0x2A3548u;
    // 0x2a3548: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A3548u;
    SET_GPR_U32(ctx, 31, 0x2A3550u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A3548u, 0x2A3550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3550u;
label_2a3550:
    // 0x2a3550: 0x0  nop
    ctx->pc = 0x2a3550u;
    // NOP
    // 0x2a3554: 0x0  nop
    ctx->pc = 0x2a3554u;
    // NOP
    // 0x2a3558: 0x4600d043  div.s       $f1, $f26, $f0
    ctx->pc = 0x2a3558u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[1] = ctx->f[26] / ctx->f[0];
    // 0x2a355c: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2a355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a3560: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x2a3560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a3564: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x2a3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a3568: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x2a3568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a356c: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x2a356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a3570: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x2a3570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a3574: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a3574u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a3578: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2a3578u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a357c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2a357cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2a3580: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x2a3580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2a3584: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2a3584u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a3588: 0x46032840  add.s       $f1, $f5, $f3
    ctx->pc = 0x2a3588u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2a358c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2a358cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a3590: 0x46044080  add.s       $f2, $f8, $f4
    ctx->pc = 0x2a3590u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x2a3594: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x2a3594u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a3598: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2a3598u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2a359c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a359cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a35a0: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2a35a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a35a4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2a35a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a35a8: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2a35a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a35ac: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2a35acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2a35b0: 0x46001b00  add.s       $f12, $f3, $f0
    ctx->pc = 0x2a35b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a35b4: 0x0  nop
    ctx->pc = 0x2a35b4u;
    // NOP
    // 0x2a35b8: 0x0  nop
    ctx->pc = 0x2a35b8u;
    // NOP
    // 0x2a35bc: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2a35bcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a35c0: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2a35c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a35c4: 0x0  nop
    ctx->pc = 0x2a35c4u;
    // NOP
    // 0x2a35c8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A35C8u;
    {
        const bool branch_taken_0x2a35c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35C8u;
        // 0x2a35cc: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35c8) {
            ctx->pc = 0x2A35E8u;
            goto label_2a35e8;
        }
    }
    ctx->pc = 0x2A35D0u;
    // 0x2a35d0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A35D0u;
    SET_GPR_U32(ctx, 31, 0x2A35D8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A35D0u, 0x2A35D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35D8u;
label_2a35d8:
    // 0x2a35d8: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x2a35d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a35dc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a35dcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2a35e0: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x2a35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a35e4: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x2a35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a35e8:
    // 0x2a35e8: 0x0  nop
    ctx->pc = 0x2a35e8u;
    // NOP
    // 0x2a35ec: 0x0  nop
    ctx->pc = 0x2a35ecu;
    // NOP
    // 0x2a35f0: 0x4601d1c3  div.s       $f7, $f26, $f1
    ctx->pc = 0x2a35f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[7] = ctx->f[26] / ctx->f[1];
    // 0x2a35f4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2a35f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a35f8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2a35f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a35fc: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2a35fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2a3600: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2a3600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a3604: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x2a3604u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2a3608: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x2a3608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a360c: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x2a360cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x2a3610: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x2a3610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a3614: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x2a3614u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2a3618: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a3618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a361c: 0x46010a02  mul.s       $f8, $f1, $f1
    ctx->pc = 0x2a361cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a3620: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2a3620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a3624: 0x46021242  mul.s       $f9, $f2, $f2
    ctx->pc = 0x2a3624u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a3628: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2a3628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a362c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2a362cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2a3630: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2a3630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a3634: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x2a3634u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x2a3638: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x2a3638u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2a363c: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x2a363cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2a3640: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2a3640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a3644: 0x46092300  add.s       $f12, $f4, $f9
    ctx->pc = 0x2a3644u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x2a3648: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x2a3648u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a364c: 0x0  nop
    ctx->pc = 0x2a364cu;
    // NOP
    // 0x2a3650: 0x0  nop
    ctx->pc = 0x2a3650u;
    // NOP
    // 0x2a3654: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2a3654u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a3658: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2a3658u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a365c: 0x0  nop
    ctx->pc = 0x2a365cu;
    // NOP
    // 0x2a3660: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3660u;
    {
        const bool branch_taken_0x2a3660 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3660u;
        // 0x2a3664: 0xe7a50014  swc1        $f5, 0x14($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3660) {
            ctx->pc = 0x2A3670u;
            goto label_2a3670;
        }
    }
    ctx->pc = 0x2A3668u;
    // 0x2a3668: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A3668u;
    SET_GPR_U32(ctx, 31, 0x2A3670u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A3668u, 0x2A3670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3670u;
label_2a3670:
    // 0x2a3670: 0x0  nop
    ctx->pc = 0x2a3670u;
    // NOP
    // 0x2a3674: 0x0  nop
    ctx->pc = 0x2a3674u;
    // NOP
    // 0x2a3678: 0x4600d103  div.s       $f4, $f26, $f0
    ctx->pc = 0x2a3678u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[4] = ctx->f[26] / ctx->f[0];
    // 0x2a367c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2a367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a3680: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x2a3680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a3684: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a3684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a3688: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2a3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a368c: 0x2fc30002  sltiu       $v1, $fp, 0x2
    ctx->pc = 0x2a368cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a3690: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a3690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3694: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x2a3694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a3698: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x2a3698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a369c: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x2a369cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x2a36a0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2a36a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2a36a4: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x2a36a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a36a8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2a36a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2a36ac: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x2a36acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x2a36b0: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2a36b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2a36b4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a36b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a36b8: 0x461b1082  mul.s       $f2, $f2, $f27
    ctx->pc = 0x2a36b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[27]);
    // 0x2a36bc: 0x461b0842  mul.s       $f1, $f1, $f27
    ctx->pc = 0x2a36bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[27]);
    // 0x2a36c0: 0x461b3182  mul.s       $f6, $f6, $f27
    ctx->pc = 0x2a36c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[27]);
    // 0x2a36c4: 0x461b39c2  mul.s       $f7, $f7, $f27
    ctx->pc = 0x2a36c4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[27]);
    // 0x2a36c8: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2a36c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a36cc: 0x461b2942  mul.s       $f5, $f5, $f27
    ctx->pc = 0x2a36ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[27]);
    // 0x2a36d0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2a36d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a36d4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2a36d4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2a36d8: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x2a36d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a36dc: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x2a36dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a36e0: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x2a36e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a36e4: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x2a36e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a36e8: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2a36e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a36ec: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2a36ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a36f0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2a36f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a36f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a36f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a36f8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2a36f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a36fc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2a36fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a3700: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2a3700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3704: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2a3704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3708: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a3708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a370c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2a370cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a3710: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3710u;
    {
        const bool branch_taken_0x2a3710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3710u;
        // 0x2a3714: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3710) {
            ctx->pc = 0x2A3720u;
            goto label_2a3720;
        }
    }
    ctx->pc = 0x2A3718u;
    // 0x2a3718: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3718u;
    {
        const bool branch_taken_0x2a3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3718u;
        // 0x2a371c: 0xe61c0080  swc1        $f28, 0x80($s0) (Delay Slot)
        { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3718) {
            ctx->pc = 0x2A3724u;
            goto label_2a3724;
        }
    }
    ctx->pc = 0x2A3720u;
label_2a3720:
    // 0x2a3720: 0xe61a0080  swc1        $f26, 0x80($s0)
    ctx->pc = 0x2a3720u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_2a3724:
    // 0x2a3724: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2a3724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3728: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x2a3728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a372c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2a372cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a3730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3730u;
    {
        const bool branch_taken_0x2a3730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3730u;
        // 0x2a3734: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3730) {
            ctx->pc = 0x2A3740u;
            goto label_2a3740;
        }
    }
    ctx->pc = 0x2A3738u;
    // 0x2a3738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3738u;
    {
        const bool branch_taken_0x2a3738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3738u;
        // 0x2a373c: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3738) {
            ctx->pc = 0x2A374Cu;
            goto label_2a374c;
        }
    }
    ctx->pc = 0x2A3740u;
label_2a3740:
    // 0x2a3740: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a3740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a3744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3748: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2a3748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_2a374c:
    // 0x2a374c: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x2a374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3750: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x2a3750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2a3754: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2a3754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a3758: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2a3758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a375c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2a375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3760: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2a3760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3764: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a3764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a3768: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2a3768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2a376c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2a376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2a3770: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a3770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3774: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2a3774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3778: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a3778u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a377c: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2a377cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2a3780: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2a3780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a3784: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2a3784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3788: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2a3788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a378c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a378cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a3790: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2a3790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2a3794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3794u;
    {
        const bool branch_taken_0x2a3794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3794u;
        // 0x2a3798: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3794) {
            ctx->pc = 0x2A37A4u;
            goto label_2a37a4;
        }
    }
    ctx->pc = 0x2A379Cu;
    // 0x2a379c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A379Cu;
    {
        const bool branch_taken_0x2a379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A379Cu;
        // 0x2a37a0: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a379c) {
            ctx->pc = 0x2A37B0u;
            goto label_2a37b0;
        }
    }
    ctx->pc = 0x2A37A4u;
label_2a37a4:
    // 0x2a37a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a37a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a37a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a37a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a37ac: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x2a37acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_2a37b0:
    // 0x2a37b0: 0x8faa00d0  lw          $t2, 0xD0($sp)
    ctx->pc = 0x2a37b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a37b4: 0xc6000088  lwc1        $f0, 0x88($s0)
    ctx->pc = 0x2a37b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a37b8: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x2a37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2a37bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2a37bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a37c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A37C0u;
    {
        const bool branch_taken_0x2a37c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37C0u;
        // 0x2a37c4: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37c0) {
            ctx->pc = 0x2A37D0u;
            goto label_2a37d0;
        }
    }
    ctx->pc = 0x2A37C8u;
    // 0x2a37c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A37C8u;
    {
        const bool branch_taken_0x2a37c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37C8u;
        // 0x2a37cc: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37c8) {
            ctx->pc = 0x2A37DCu;
            goto label_2a37dc;
        }
    }
    ctx->pc = 0x2A37D0u;
label_2a37d0:
    // 0x2a37d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a37d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a37d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a37d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a37d8: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x2a37d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_2a37dc:
    // 0x2a37dc: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x2a37dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a37e0: 0x27c2fffe  addiu       $v0, $fp, -0x2
    ctx->pc = 0x2a37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x2a37e4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2a37e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a37e8: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x2a37e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a37ec: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2a37ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a37f0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2a37f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a37f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a37f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a37f8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2a37f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2a37fc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a37fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a3800: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a3800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3804: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2a3804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3808: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a3808u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a380c: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x2a380cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2a3810: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x2a3810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a3814: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2a3814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3818: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2a3818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a381c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a381cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3820: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2a3820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2a3824: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3824u;
    {
        const bool branch_taken_0x2a3824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3824u;
        // 0x2a3828: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3824) {
            ctx->pc = 0x2A3834u;
            goto label_2a3834;
        }
    }
    ctx->pc = 0x2A382Cu;
    // 0x2a382c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A382Cu;
    {
        const bool branch_taken_0x2a382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A382Cu;
        // 0x2a3830: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a382c) {
            ctx->pc = 0x2A3840u;
            goto label_2a3840;
        }
    }
    ctx->pc = 0x2A3834u;
label_2a3834:
    // 0x2a3834: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a3834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a3838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a383c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2a383cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_2a3840:
    // 0x2a3840: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2a3840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a3844: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2a3844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3848: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x2a3848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2a384c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2a384cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a3850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3850u;
    {
        const bool branch_taken_0x2a3850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3850u;
        // 0x2a3854: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3850) {
            ctx->pc = 0x2A3860u;
            goto label_2a3860;
        }
    }
    ctx->pc = 0x2A3858u;
    // 0x2a3858: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3858u;
    {
        const bool branch_taken_0x2a3858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3858u;
        // 0x2a385c: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3858) {
            ctx->pc = 0x2A386Cu;
            goto label_2a386c;
        }
    }
    ctx->pc = 0x2A3860u;
label_2a3860:
    // 0x2a3860: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a3860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3864: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a3864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3868: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2a3868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_2a386c:
    // 0x2a386c: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2a386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3870: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2a3870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a3874: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2a3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3878: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2a3878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a387c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a387cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3880: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2a3880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2a3884: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a3884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a3888: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a3888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a388c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2a388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3890: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a3890u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a3894: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2a3894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2a3898: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x2a3898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a389c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2a389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a38a0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2a38a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a38a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a38a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a38a8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2a38a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2a38ac: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A38ACu;
    {
        const bool branch_taken_0x2a38ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38ACu;
        // 0x2a38b0: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38ac) {
            ctx->pc = 0x2A38C0u;
            goto label_2a38c0;
        }
    }
    ctx->pc = 0x2A38B4u;
    // 0x2a38b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a38b8: 0x17c20003  bne         $fp, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A38B8u;
    {
        const bool branch_taken_0x2a38b8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a38b8) {
            ctx->pc = 0x2A38C8u;
            goto label_2a38c8;
        }
    }
    ctx->pc = 0x2A38C0u;
label_2a38c0:
    // 0x2a38c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A38C0u;
    {
        const bool branch_taken_0x2a38c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38C0u;
        // 0x2a38c4: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38c0) {
            ctx->pc = 0x2A38D4u;
            goto label_2a38d4;
        }
    }
    ctx->pc = 0x2A38C8u;
label_2a38c8:
    // 0x2a38c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a38c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a38cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a38ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a38d0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2a38d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_2a38d4:
    // 0x2a38d4: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2a38d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a38d8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a38d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a38dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A38DCu;
    {
        const bool branch_taken_0x2a38dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38DCu;
        // 0x2a38e0: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38dc) {
            ctx->pc = 0x2A38F0u;
            goto label_2a38f0;
        }
    }
    ctx->pc = 0x2A38E4u;
    // 0x2a38e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a38e8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A38E8u;
    {
        const bool branch_taken_0x2a38e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a38e8) {
            ctx->pc = 0x2A38F8u;
            goto label_2a38f8;
        }
    }
    ctx->pc = 0x2A38F0u;
label_2a38f0:
    // 0x2a38f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A38F0u;
    {
        const bool branch_taken_0x2a38f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38F0u;
        // 0x2a38f4: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38f0) {
            ctx->pc = 0x2A3904u;
            goto label_2a3904;
        }
    }
    ctx->pc = 0x2A38F8u;
label_2a38f8:
    // 0x2a38f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a38f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a38fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a38fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3900: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2a3900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_2a3904:
    // 0x2a3904: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2a3904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3908: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2a3908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a390c: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2a390cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a3910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3914: 0x8fa801e8  lw          $t0, 0x1E8($sp)
    ctx->pc = 0x2a3914u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2a3918: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a3918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a391c: 0x8fa901f0  lw          $t1, 0x1F0($sp)
    ctx->pc = 0x2a391cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2a3920: 0x8faa01f8  lw          $t2, 0x1F8($sp)
    ctx->pc = 0x2a3920u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2a3924: 0x8fab0200  lw          $t3, 0x200($sp)
    ctx->pc = 0x2a3924u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2a3928: 0xc0a89c4  jal         func_2A2710
    ctx->pc = 0x2A3928u;
    SET_GPR_U32(ctx, 31, 0x2A3930u);
    ctx->pc = 0x2A392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3928u;
    // 0x2a392c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2710u, 0x2A3928u, 0x2A3930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3930u;
label_2a3930:
    // 0x2a3930: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x2A3930u;
    {
        const bool branch_taken_0x2a3930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3930u;
        // 0x2a3934: 0x8fa50200  lw          $a1, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3930) {
            ctx->pc = 0x2A3B78u;
            goto label_2a3b78;
        }
    }
    ctx->pc = 0x2A3938u;
    // 0x2a3938: 0x10a0007f  beqz        $a1, . + 4 + (0x7F << 2)
    ctx->pc = 0x2A3938u;
    {
        const bool branch_taken_0x2a3938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3938u;
        // 0x2a393c: 0x8f8eb304  lw          $t6, -0x4CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3938) {
            ctx->pc = 0x2A3B38u;
            goto label_2a3b38;
        }
    }
    ctx->pc = 0x2A3940u;
    // 0x2a3940: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a3940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a3944: 0x440007c  bltz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2A3944u;
    {
        const bool branch_taken_0x2a3944 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3944u;
        // 0x2a3948: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3944) {
            ctx->pc = 0x2A3B38u;
            goto label_2a3b38;
        }
    }
    ctx->pc = 0x2A394Cu;
    // 0x2a394c: 0xc6d60000  lwc1        $f22, 0x0($s6)
    ctx->pc = 0x2a394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a3950: 0xc6d50004  lwc1        $f21, 0x4($s6)
    ctx->pc = 0x2a3950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a3954: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2a3954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3958: 0xc6d40008  lwc1        $f20, 0x8($s6)
    ctx->pc = 0x2a3958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a395c: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x2a395cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
    // 0x2a3960: 0x4600a887  neg.s       $f2, $f21
    ctx->pc = 0x2a3960u;
    ctx->f[2] = FPU_NEG_S(ctx->f[21]);
    // 0x2a3964: 0xc7808dd0  lwc1        $f0, -0x7230($gp)
    ctx->pc = 0x2a3964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3968: 0x4600a0c7  neg.s       $f3, $f20
    ctx->pc = 0x2a3968u;
    ctx->f[3] = FPU_NEG_S(ctx->f[20]);
    // 0x2a396c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a396cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3970: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a3970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3974: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2a3974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3978: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a3978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a397c: 0x27b40054  addiu       $s4, $sp, 0x54
    ctx->pc = 0x2a397cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2a3980: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a3980u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a3984: 0x27b20058  addiu       $s2, $sp, 0x58
    ctx->pc = 0x2a3984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2a3988: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x2a3988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x2a398c: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x2a398cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a3990: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x2a3990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2a3994: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x2a3994u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a3998: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2a3998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2a399c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A399Cu;
    {
        const bool branch_taken_0x2a399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A399Cu;
        // 0x2a39a0: 0xe7a300b8  swc1        $f3, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a399c) {
            ctx->pc = 0x2A39B0u;
            goto label_2a39b0;
        }
    }
    ctx->pc = 0x2A39A4u;
    // 0x2a39a4: 0x0  nop
    ctx->pc = 0x2a39a4u;
    // NOP
label_2a39a8:
    // 0x2a39a8: 0xc6d50004  lwc1        $f21, 0x4($s6)
    ctx->pc = 0x2a39a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a39ac: 0xc6d40008  lwc1        $f20, 0x8($s6)
    ctx->pc = 0x2a39acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a39b0:
    // 0x2a39b0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2a39b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a39b4: 0xc7828dd4  lwc1        $f2, -0x722C($gp)
    ctx->pc = 0x2a39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a39b8: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2a39b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a39bc: 0x8faa00d4  lw          $t2, 0xD4($sp)
    ctx->pc = 0x2a39bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2a39c0: 0x4602b002  mul.s       $f0, $f22, $f2
    ctx->pc = 0x2a39c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x2a39c4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2a39c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a39c8: 0x8d440020  lw          $a0, 0x20($t2)
    ctx->pc = 0x2a39c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x2a39cc: 0x4602a8c2  mul.s       $f3, $f21, $f2
    ctx->pc = 0x2a39ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2a39d0: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2a39d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2a39d4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2a39d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39d8: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x2a39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2a39dc: 0x2835021  addu        $t2, $s4, $v1
    ctx->pc = 0x2a39dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2a39e0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a39e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a39e4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2a39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2a39e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a39e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a39ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a39f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a39f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a39f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39f8: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2a39f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2a39fc: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2a39fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3a00: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a3a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a3a04: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2a3a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2a3a08: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a3a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3a0c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a3a0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a3a10: 0xc098dda  jal         func_263768
    ctx->pc = 0x2A3A10u;
    SET_GPR_U32(ctx, 31, 0x2A3A18u);
    ctx->pc = 0x2A3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A10u;
    // 0x2a3a14: 0xe7a100a8  swc1        $f1, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x263768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263768u, 0x2A3A10u, 0x2A3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A18u;
label_2a3a18:
    // 0x2a3a18: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2a3a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a3a1c: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x2a3a1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x2a3a20: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x2a3a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2a3a24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a3a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a3a28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a3a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a3a2c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2a3a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a3a30: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2A3A30u;
    {
        const bool branch_taken_0x2a3a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3a30) {
            ctx->pc = 0x2A3A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3A30u;
            // 0x2a3a34: 0xc6d60000  lwc1        $f22, 0x0($s6) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A39A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a39a8;
        }
    }
    ctx->pc = 0x2A3A38u;
    // 0x2a3a38: 0x12a0003e  beqz        $s5, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A3A38u;
    {
        const bool branch_taken_0x2a3a38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A38u;
        // 0x2a3a3c: 0x8fa30200  lw          $v1, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a38) {
            ctx->pc = 0x2A3B34u;
            goto label_2a3b34;
        }
    }
    ctx->pc = 0x2A3A40u;
    // 0x2a3a40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3a44: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x2a3a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a48: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2a3a48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a3a50: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x2a3a50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a3a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a58: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x2a3a58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a3a5c: 0x8f8eb304  lw          $t6, -0x4CFC($gp)
    ctx->pc = 0x2a3a5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947588)));
    // 0x2a3a60: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2a3a60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3a64: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2a3a64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a3a68: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x2a3a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a3a6c: 0x27af0084  addiu       $t7, $sp, 0x84
    ctx->pc = 0x2a3a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2a3a70: 0x260d0084  addiu       $t5, $s0, 0x84
    ctx->pc = 0x2a3a70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2a3a74: 0x260c0080  addiu       $t4, $s0, 0x80
    ctx->pc = 0x2a3a74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2a3a78: 0x260b0008  addiu       $t3, $s0, 0x8
    ctx->pc = 0x2a3a78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a3a7c: 0x26090004  addiu       $t1, $s0, 0x4
    ctx->pc = 0x2a3a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a3a80: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2a3a80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a84: 0x0  nop
    ctx->pc = 0x2a3a84u;
    // NOP
label_2a3a88:
    // 0x2a3a88: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2a3a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2a3a8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3A8Cu;
    {
        const bool branch_taken_0x2a3a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A8Cu;
        // 0x2a3a90: 0x1117c2  srl         $v0, $s1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a8c) {
            ctx->pc = 0x2A3AA4u;
            goto label_2a3aa4;
        }
    }
    ctx->pc = 0x2A3A94u;
    // 0x2a3a94: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a3a98: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a3a98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a3a9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A3A9Cu;
    {
        const bool branch_taken_0x2a3a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A9Cu;
        // 0x2a3aa0: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a9c) {
            ctx->pc = 0x2A3AC8u;
            goto label_2a3ac8;
        }
    }
    ctx->pc = 0x2A3AA4u;
label_2a3aa4:
    // 0x2a3aa4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a3aa8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a3aa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a3aac: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x2a3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2a3ab0: 0x2c2202a  slt         $a0, $s6, $v0
    ctx->pc = 0x2a3ab0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a3ab4: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x2a3ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2a3ab8: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x2a3ab8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2a3abc: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x2a3abcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2a3ac0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a3ac4: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2a3ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a3ac8:
    // 0x2a3ac8: 0x941818  mult        $v1, $a0, $s4
    ctx->pc = 0x2a3ac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a3acc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2a3accu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a3ad0: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x2a3ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2a3ad4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a3ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a3ad8: 0x1e52821  addu        $a1, $t7, $a1
    ctx->pc = 0x2a3ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x2a3adc: 0x2a270004  slti        $a3, $s1, 0x4
    ctx->pc = 0x2a3adcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a3ae0: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x2a3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2a3ae4: 0x1432021  addu        $a0, $t2, $v1
    ctx->pc = 0x2a3ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2a3ae8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a3ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3aec: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2a3aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2a3af0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2a3af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2a3af4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2a3af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2a3af8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a3af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3afc: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2a3afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2a3b00: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x2a3b00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x2a3b04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a3b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3b08: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x2a3b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2a3b0c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x2a3b0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x2a3b10: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a3b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3b14: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x2a3b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x2a3b18: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x2a3b18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x2a3b1c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a3b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3b20: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x2a3b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2a3b24: 0x14e0ffd8  bnez        $a3, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2A3B24u;
    {
        const bool branch_taken_0x2a3b24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B24u;
        // 0x2a3b28: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b24) {
            ctx->pc = 0x2A3A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3a88;
        }
    }
    ctx->pc = 0x2A3B2Cu;
    // 0x2a3b2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3B2Cu;
    {
        const bool branch_taken_0x2a3b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b2c) {
            ctx->pc = 0x2A3B38u;
            goto label_2a3b38;
        }
    }
    ctx->pc = 0x2A3B34u;
label_2a3b34:
    // 0x2a3b34: 0x8f8eb304  lw          $t6, -0x4CFC($gp)
    ctx->pc = 0x2a3b34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947588)));
label_2a3b38:
    // 0x2a3b38: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A3B38u;
    {
        const bool branch_taken_0x2a3b38 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b38) {
            ctx->pc = 0x2A3B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3B38u;
            // 0x2a3b3c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3B40u;
            goto label_2a3b40;
        }
    }
    ctx->pc = 0x2A3B40u;
label_2a3b40:
    // 0x2a3b40: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x2a3b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x2a3b44: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x2a3b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2a3b48: 0x24859cd8  addiu       $a1, $a0, -0x6328
    ctx->pc = 0x2a3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941912));
    // 0x2a3b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b50: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2a3b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a3b54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a3b58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3b5c: 0x4e001a  div         $zero, $v0, $t6
    ctx->pc = 0x2a3b5cu;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a3b60: 0x1810  mfhi        $v1
    ctx->pc = 0x2a3b60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2a3b64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a3b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a3b68: 0xc0a8c38  jal         func_2A30E0
    ctx->pc = 0x2A3B68u;
    SET_GPR_U32(ctx, 31, 0x2A3B70u);
    ctx->pc = 0x2A3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3B68u;
    // 0x2a3b6c: 0x8c8500d0  lw          $a1, 0xD0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A30E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A30E0u, 0x2A3B68u, 0x2A3B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B70u;
label_2a3b70:
    // 0x2a3b70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3B70u;
    {
        const bool branch_taken_0x2a3b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B70u;
        // 0x2a3b74: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b70) {
            ctx->pc = 0x2A3B84u;
            goto label_2a3b84;
        }
    }
    ctx->pc = 0x2A3B78u;
label_2a3b78:
    // 0x2a3b78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3b7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3b80: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x2a3b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
label_2a3b84:
    // 0x2a3b84: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2a3b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2a3b88: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x2a3b88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a3b8c: 0xdfb70160  ld          $s7, 0x160($sp)
    ctx->pc = 0x2a3b8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a3b90: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x2a3b90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a3b94: 0xdfb50140  ld          $s5, 0x140($sp)
    ctx->pc = 0x2a3b94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a3b98: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x2a3b98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a3b9c: 0xdfb30120  ld          $s3, 0x120($sp)
    ctx->pc = 0x2a3b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a3ba0: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2a3ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a3ba4: 0xdfb10100  ld          $s1, 0x100($sp)
    ctx->pc = 0x2a3ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a3ba8: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x2a3ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a3bac: 0xc7bc01d0  lwc1        $f28, 0x1D0($sp)
    ctx->pc = 0x2a3bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2a3bb0: 0xc7bb01c8  lwc1        $f27, 0x1C8($sp)
    ctx->pc = 0x2a3bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2a3bb4: 0xc7ba01c0  lwc1        $f26, 0x1C0($sp)
    ctx->pc = 0x2a3bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a3bb8: 0xc7b901b8  lwc1        $f25, 0x1B8($sp)
    ctx->pc = 0x2a3bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a3bbc: 0xc7b801b0  lwc1        $f24, 0x1B0($sp)
    ctx->pc = 0x2a3bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a3bc0: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2a3bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a3bc4: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2a3bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a3bc8: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x2a3bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a3bcc: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2a3bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a3bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BD0u;
        // 0x2a3bd4: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3BD8u;
}
