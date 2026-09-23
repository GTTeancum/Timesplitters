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

// Function: particleNewExplosion
// Address: 0x2978c0 - 0x297e2c
void particleNewExplosion_0x2978c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewExplosion_0x2978c0");
#endif

    switch (ctx->pc) {
        case 0x297918u: goto label_297918;
        case 0x297960u: goto label_297960;
        case 0x297a18u: goto label_297a18;
        case 0x297a20u: goto label_297a20;
        case 0x297a74u: goto label_297a74;
        case 0x297ae0u: goto label_297ae0;
        case 0x297b4cu: goto label_297b4c;
        case 0x297c00u: goto label_297c00;
        case 0x297c08u: goto label_297c08;
        case 0x297c50u: goto label_297c50;
        case 0x297cb4u: goto label_297cb4;
        case 0x297d18u: goto label_297d18;
        case 0x297de8u: goto label_297de8;
        case 0x297df4u: goto label_297df4;
        default: break;
    }

    ctx->pc = 0x2978c0u;

    // 0x2978c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2978c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2978c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2978c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2978c8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2978c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2978cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2978ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978d0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2978d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2978d4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2978d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978d8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2978d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2978dc: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2978dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2978e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2978e4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2978e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2978e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2978ec: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2978ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2978f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2978f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2978f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2978f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2978fc: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2978fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297900: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x297900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297904: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x297904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x297908: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x297908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29790c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x29790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297910: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x297910u;
    SET_GPR_U32(ctx, 31, 0x297918u);
    ctx->pc = 0x297914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297910u;
    // 0x297914: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x297910u, 0x297918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297918u;
label_297918:
    // 0x297918: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x297918u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29791c: 0xc7828cbc  lwc1        $f2, -0x7344($gp)
    ctx->pc = 0x29791cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297920: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x297920u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x297924: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x297924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297928: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29792c: 0xaeb20014  sw          $s2, 0x14($s5)
    ctx->pc = 0x29792cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 18));
    // 0x297930: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x297930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297934: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x297934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x297938: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x297938u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x29793c: 0xe6a0001c  swc1        $f0, 0x1C($s5)
    ctx->pc = 0x29793cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x297940: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x297940u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x297944: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x297944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297948: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x297948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x29794c: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x29794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297950: 0xaea00034  sw          $zero, 0x34($s5)
    ctx->pc = 0x297950u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 0));
    // 0x297954: 0xe6a10024  swc1        $f1, 0x24($s5)
    ctx->pc = 0x297954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x297958: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x297958u;
    SET_GPR_U32(ctx, 31, 0x297960u);
    ctx->pc = 0x29795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297958u;
    // 0x29795c: 0xe6a20010  swc1        $f2, 0x10($s5) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x297958u, 0x297960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297960u;
label_297960:
    // 0x297960: 0xaeb303a4  sw          $s3, 0x3A4($s5)
    ctx->pc = 0x297960u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 932), GPR_U32(ctx, 19));
    // 0x297964: 0xaebe03a0  sw          $fp, 0x3A0($s5)
    ctx->pc = 0x297964u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 928), GPR_U32(ctx, 30));
    // 0x297968: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x297968u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x29796c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x29796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297970: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x297970u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    // 0x297974: 0xe6a103a8  swc1        $f1, 0x3A8($s5)
    ctx->pc = 0x297974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 936), bits); }
    // 0x297978: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x297978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29797c: 0xe6a003ac  swc1        $f0, 0x3AC($s5)
    ctx->pc = 0x29797cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 940), bits); }
    // 0x297980: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x297980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297984: 0xe6a103b0  swc1        $f1, 0x3B0($s5)
    ctx->pc = 0x297984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 944), bits); }
    // 0x297988: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x297988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29798c: 0xe6a003b4  swc1        $f0, 0x3B4($s5)
    ctx->pc = 0x29798cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 948), bits); }
    // 0x297990: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x297990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297994: 0xe6a103b8  swc1        $f1, 0x3B8($s5)
    ctx->pc = 0x297994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 952), bits); }
    // 0x297998: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x297998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29799c: 0xaeb403c0  sw          $s4, 0x3C0($s5)
    ctx->pc = 0x29799cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 960), GPR_U32(ctx, 20));
    // 0x2979a0: 0xe6a003bc  swc1        $f0, 0x3BC($s5)
    ctx->pc = 0x2979a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 956), bits); }
    // 0x2979a4: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2979A4u;
    {
        const bool branch_taken_0x2979a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2979A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979A4u;
        // 0x2979a8: 0xaea003c4  sw          $zero, 0x3C4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979a4) {
            ctx->pc = 0x2979BCu;
            goto label_2979bc;
        }
    }
    ctx->pc = 0x2979ACu;
    // 0x2979ac: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x2979acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2979b0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2979b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2979b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2979B4u;
    {
        const bool branch_taken_0x2979b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2979b4) {
            ctx->pc = 0x2979B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2979B4u;
            // 0x2979b8: 0xaeb703c4  sw          $s7, 0x3C4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 964), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2979BCu;
            goto label_2979bc;
        }
    }
    ctx->pc = 0x2979BCu;
label_2979bc:
    // 0x2979bc: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x2979bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2979c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2979c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2979c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2979c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2979c8: 0x1e20c0  sll         $a0, $fp, 3
    ctx->pc = 0x2979c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x2979cc: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x2979ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2979d0: 0x2442a1c8  addiu       $v0, $v0, -0x5E38
    ctx->pc = 0x2979d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943176));
    // 0x2979d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2979d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2979d8: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x2979d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x2979dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2979dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2979e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2979e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2979e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2979E4u;
    {
        const bool branch_taken_0x2979e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2979e4) {
            ctx->pc = 0x2979E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2979E4u;
            // 0x2979e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2979ECu;
            goto label_2979ec;
        }
    }
    ctx->pc = 0x2979ECu;
label_2979ec:
    // 0x2979ec: 0x0  nop
    ctx->pc = 0x2979ecu;
    // NOP
    // 0x2979f0: 0x0  nop
    ctx->pc = 0x2979f0u;
    // NOP
    // 0x2979f4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2979f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x2979f8: 0x3812  mflo        $a3
    ctx->pc = 0x2979f8u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2979fc: 0x18e00079  blez        $a3, . + 4 + (0x79 << 2)
    ctx->pc = 0x2979FCu;
    {
        const bool branch_taken_0x2979fc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x297A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979FCu;
        // 0x297a00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979fc) {
            ctx->pc = 0x297BE4u;
            goto label_297be4;
        }
    }
    ctx->pc = 0x297A04u;
    // 0x297a04: 0x26b40704  addiu       $s4, $s5, 0x704
    ctx->pc = 0x297a04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1796));
    // 0x297a08: 0x26b303c8  addiu       $s3, $s5, 0x3C8
    ctx->pc = 0x297a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 968));
    // 0x297a0c: 0x26b203cc  addiu       $s2, $s5, 0x3CC
    ctx->pc = 0x297a0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 972));
    // 0x297a10: 0x26b103d0  addiu       $s1, $s5, 0x3D0
    ctx->pc = 0x297a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 976));
    // 0x297a14: 0x26b70048  addiu       $s7, $s5, 0x48
    ctx->pc = 0x297a14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_297a18:
    // 0x297a18: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297A18u;
    SET_GPR_U32(ctx, 31, 0x297A20u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297A18u, 0x297A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A20u;
label_297a20:
    // 0x297a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x297a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297a28: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297A28u;
    {
        const bool branch_taken_0x297a28 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A28u;
        // 0x297a2c: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a28) {
            ctx->pc = 0x297A3Cu;
            goto label_297a3c;
        }
    }
    ctx->pc = 0x297A30u;
    // 0x297a30: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x297a30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297a34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297A34u;
    {
        const bool branch_taken_0x297a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A34u;
        // 0x297a38: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a34) {
            ctx->pc = 0x297A54u;
            goto label_297a54;
        }
    }
    ctx->pc = 0x297A3Cu;
label_297a3c:
    // 0x297a3c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297a40: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297a44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297a48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x297a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297a4c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x297a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x297a50: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x297a50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_297a54:
    // 0x297a54: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297a58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297a5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297a60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297a64: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x297a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x297a68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x297a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x297a6c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297A6Cu;
    SET_GPR_U32(ctx, 31, 0x297A74u);
    ctx->pc = 0x297A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A6Cu;
    // 0x297a70: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297A6Cu, 0x297A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A74u;
label_297a74:
    // 0x297a74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x297a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297a7c: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x297a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297a80: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297A80u;
    {
        const bool branch_taken_0x297a80 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A80u;
        // 0x297a84: 0x732821  addu        $a1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a80) {
            ctx->pc = 0x297A94u;
            goto label_297a94;
        }
    }
    ctx->pc = 0x297A88u;
    // 0x297a88: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297a88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297a8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297A8Cu;
    {
        const bool branch_taken_0x297a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A8Cu;
        // 0x297a90: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a8c) {
            ctx->pc = 0x297AACu;
            goto label_297aac;
        }
    }
    ctx->pc = 0x297A94u;
label_297a94:
    // 0x297a94: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297a98: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297a9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297aa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297aa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297aa8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x297aa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297aac:
    // 0x297aac: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297ab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297ab4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297ab8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x297ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x297abc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297ac0: 0xc7828cc0  lwc1        $f2, -0x7340($gp)
    ctx->pc = 0x297ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297ac4: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x297ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ac8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x297ac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x297acc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x297accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x297ad0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x297ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x297ad4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x297ad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x297ad8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297AD8u;
    SET_GPR_U32(ctx, 31, 0x297AE0u);
    ctx->pc = 0x297ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297AD8u;
    // 0x297adc: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297AD8u, 0x297AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AE0u;
label_297ae0:
    // 0x297ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ae4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x297ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297ae8: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x297ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297aec: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297AECu;
    {
        const bool branch_taken_0x297aec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AECu;
        // 0x297af0: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297aec) {
            ctx->pc = 0x297B00u;
            goto label_297b00;
        }
    }
    ctx->pc = 0x297AF4u;
    // 0x297af4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297af4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297af8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297AF8u;
    {
        const bool branch_taken_0x297af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AF8u;
        // 0x297afc: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297af8) {
            ctx->pc = 0x297B18u;
            goto label_297b18;
        }
    }
    ctx->pc = 0x297B00u;
label_297b00:
    // 0x297b00: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297b04: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297b08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297b0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297b10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297b14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x297b14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297b18:
    // 0x297b18: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297b1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297b20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297b24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x297b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x297b28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297b2c: 0xc7828cc4  lwc1        $f2, -0x733C($gp)
    ctx->pc = 0x297b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297b30: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x297b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297b34: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x297b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x297b38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x297b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x297b3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x297b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x297b40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x297b40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x297b44: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297B44u;
    SET_GPR_U32(ctx, 31, 0x297B4Cu);
    ctx->pc = 0x297B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B44u;
    // 0x297b48: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297B44u, 0x297B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B4Cu;
label_297b4c:
    // 0x297b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b50: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x297b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297b54: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x297b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297b58: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297B58u;
    {
        const bool branch_taken_0x297b58 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B58u;
        // 0x297b5c: 0x712821  addu        $a1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b58) {
            ctx->pc = 0x297B6Cu;
            goto label_297b6c;
        }
    }
    ctx->pc = 0x297B60u;
    // 0x297b60: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297b60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297b64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297B64u;
    {
        const bool branch_taken_0x297b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B64u;
        // 0x297b68: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b64) {
            ctx->pc = 0x297B84u;
            goto label_297b84;
        }
    }
    ctx->pc = 0x297B6Cu;
label_297b6c:
    // 0x297b6c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297b70: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297b74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297b78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297b7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297b80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x297b80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297b84:
    // 0x297b84: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297b88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297b8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x297b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x297b90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297b94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x297b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x297b98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x297b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297b9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297ba0: 0xc7828cc8  lwc1        $f2, -0x7338($gp)
    ctx->pc = 0x297ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297ba4: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x297ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ba8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x297ba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x297bac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x297bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x297bb0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x297bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x297bb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x297bb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x297bb8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x297bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x297bbc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x297BBCu;
    {
        const bool branch_taken_0x297bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297bbc) {
            ctx->pc = 0x297BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297BBCu;
            // 0x297bc0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x297BC4u;
            goto label_297bc4;
        }
    }
    ctx->pc = 0x297BC4u;
label_297bc4:
    // 0x297bc4: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x297bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x297bc8: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x297bc8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x297bcc: 0x3812  mflo        $a3
    ctx->pc = 0x297bccu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x297bd0: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x297bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x297bd4: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x297BD4u;
    {
        const bool branch_taken_0x297bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BD4u;
        // 0x297bd8: 0x206102a  slt         $v0, $s0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bd4) {
            ctx->pc = 0x297A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297a18;
        }
    }
    ctx->pc = 0x297BDCu;
    // 0x297bdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x297BDCu;
    {
        const bool branch_taken_0x297bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297bdc) {
            ctx->pc = 0x297BECu;
            goto label_297bec;
        }
    }
    ctx->pc = 0x297BE4u;
label_297be4:
    // 0x297be4: 0x26b70048  addiu       $s7, $s5, 0x48
    ctx->pc = 0x297be4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    // 0x297be8: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x297be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_297bec:
    // 0x297bec: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x297BECu;
    {
        const bool branch_taken_0x297bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BECu;
        // 0x297bf0: 0x26b40704  addiu       $s4, $s5, 0x704 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1796));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bec) {
            ctx->pc = 0x297D8Cu;
            goto label_297d8c;
        }
    }
    ctx->pc = 0x297BF4u;
    // 0x297bf4: 0x26b303c8  addiu       $s3, $s5, 0x3C8
    ctx->pc = 0x297bf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 968));
    // 0x297bf8: 0x26b203cc  addiu       $s2, $s5, 0x3CC
    ctx->pc = 0x297bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 972));
    // 0x297bfc: 0x26b103d0  addiu       $s1, $s5, 0x3D0
    ctx->pc = 0x297bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 976));
label_297c00:
    // 0x297c00: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297C00u;
    SET_GPR_U32(ctx, 31, 0x297C08u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297C00u, 0x297C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C08u;
label_297c08:
    // 0x297c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c0c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x297c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297c10: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297C10u;
    {
        const bool branch_taken_0x297c10 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C10u;
        // 0x297c14: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c10) {
            ctx->pc = 0x297C24u;
            goto label_297c24;
        }
    }
    ctx->pc = 0x297C18u;
    // 0x297c18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297c18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297c1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297C1Cu;
    {
        const bool branch_taken_0x297c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C1Cu;
        // 0x297c20: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c1c) {
            ctx->pc = 0x297C3Cu;
            goto label_297c3c;
        }
    }
    ctx->pc = 0x297C24u;
label_297c24:
    // 0x297c24: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297c28: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297c2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297c30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297c34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297c38: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x297c38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297c3c:
    // 0x297c3c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297c40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297c44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297c48: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297C48u;
    SET_GPR_U32(ctx, 31, 0x297C50u);
    ctx->pc = 0x297C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C48u;
    // 0x297c4c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297C48u, 0x297C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C50u;
label_297c50:
    // 0x297c50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c54: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x297c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297c58: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x297c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297c5c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297C5Cu;
    {
        const bool branch_taken_0x297c5c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C5Cu;
        // 0x297c60: 0x732821  addu        $a1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c5c) {
            ctx->pc = 0x297C70u;
            goto label_297c70;
        }
    }
    ctx->pc = 0x297C64u;
    // 0x297c64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297c64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297c68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297C68u;
    {
        const bool branch_taken_0x297c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C68u;
        // 0x297c6c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c68) {
            ctx->pc = 0x297C88u;
            goto label_297c88;
        }
    }
    ctx->pc = 0x297C70u;
label_297c70:
    // 0x297c70: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297c74: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297c78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297c7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297c80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297c84: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x297c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297c88:
    // 0x297c88: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297c8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297c90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297c94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297c98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297c9c: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x297c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ca0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x297ca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x297ca4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x297ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x297ca8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x297ca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x297cac: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297CACu;
    SET_GPR_U32(ctx, 31, 0x297CB4u);
    ctx->pc = 0x297CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CACu;
    // 0x297cb0: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297CACu, 0x297CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CB4u;
label_297cb4:
    // 0x297cb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cb8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x297cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297cbc: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x297cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297cc0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297CC0u;
    {
        const bool branch_taken_0x297cc0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CC0u;
        // 0x297cc4: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cc0) {
            ctx->pc = 0x297CD4u;
            goto label_297cd4;
        }
    }
    ctx->pc = 0x297CC8u;
    // 0x297cc8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297cc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297ccc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297CCCu;
    {
        const bool branch_taken_0x297ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CCCu;
        // 0x297cd0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ccc) {
            ctx->pc = 0x297CECu;
            goto label_297cec;
        }
    }
    ctx->pc = 0x297CD4u;
label_297cd4:
    // 0x297cd4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297cd8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297cdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297ce0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297ce4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297ce8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x297ce8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297cec:
    // 0x297cec: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297cf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297cf4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297cf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297cfc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297d00: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x297d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297d04: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x297d04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x297d08: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x297d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x297d0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x297d0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x297d10: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297D10u;
    SET_GPR_U32(ctx, 31, 0x297D18u);
    ctx->pc = 0x297D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D10u;
    // 0x297d14: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297D10u, 0x297D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D18u;
label_297d18:
    // 0x297d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d1c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x297d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297d20: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x297d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297d24: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297D24u;
    {
        const bool branch_taken_0x297d24 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D24u;
        // 0x297d28: 0x712821  addu        $a1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d24) {
            ctx->pc = 0x297D38u;
            goto label_297d38;
        }
    }
    ctx->pc = 0x297D2Cu;
    // 0x297d2c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297d2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297d30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297D30u;
    {
        const bool branch_taken_0x297d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D30u;
        // 0x297d34: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d30) {
            ctx->pc = 0x297D50u;
            goto label_297d50;
        }
    }
    ctx->pc = 0x297D38u;
label_297d38:
    // 0x297d38: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297d3c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297d40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297d44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297d48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297d4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x297d4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297d50:
    // 0x297d50: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297d54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297d58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x297d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297d5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297d60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297d64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297d68: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x297d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297d6c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x297d6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x297d70: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x297d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x297d74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x297d74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x297d78: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x297d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x297d7c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x297d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x297d80: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x297d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x297d84: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x297D84u;
    {
        const bool branch_taken_0x297d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297d84) {
            ctx->pc = 0x297C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297c00;
        }
    }
    ctx->pc = 0x297D8Cu;
label_297d8c:
    // 0x297d8c: 0xc6cd0000  lwc1        $f13, 0x0($s6)
    ctx->pc = 0x297d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x297d90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x297d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d94: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x297d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x297d98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297d9c: 0xc6ce0004  lwc1        $f14, 0x4($s6)
    ctx->pc = 0x297d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x297da0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297da4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x297da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x297da8: 0x46016b00  add.s       $f12, $f13, $f1
    ctx->pc = 0x297da8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x297dac: 0xc6d00008  lwc1        $f16, 0x8($s6)
    ctx->pc = 0x297dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x297db0: 0x461173c0  add.s       $f15, $f14, $f17
    ctx->pc = 0x297db0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[14], ctx->f[17]);
    // 0x297db4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x297db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x297db8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297dbc: 0x46116b40  add.s       $f13, $f13, $f17
    ctx->pc = 0x297dbcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[17]);
    // 0x297dc0: 0x46118440  add.s       $f17, $f16, $f17
    ctx->pc = 0x297dc0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[16], ctx->f[17]);
    // 0x297dc4: 0x46018400  add.s       $f16, $f16, $f1
    ctx->pc = 0x297dc4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[1]);
    // 0x297dc8: 0x46017380  add.s       $f14, $f14, $f1
    ctx->pc = 0x297dc8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
    // 0x297dcc: 0x46008c40  add.s       $f17, $f17, $f0
    ctx->pc = 0x297dccu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[0]);
    // 0x297dd0: 0x46008401  sub.s       $f16, $f16, $f0
    ctx->pc = 0x297dd0u;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
    // 0x297dd4: 0x46007381  sub.s       $f14, $f14, $f0
    ctx->pc = 0x297dd4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
    // 0x297dd8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x297dd8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x297ddc: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x297ddcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x297de0: 0xc095046  jal         func_254118
    ctx->pc = 0x297DE0u;
    SET_GPR_U32(ctx, 31, 0x297DE8u);
    ctx->pc = 0x297DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DE0u;
    // 0x297de4: 0x46007bc0  add.s       $f15, $f15, $f0 (Delay Slot)
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254118u, 0x297DE0u, 0x297DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DE8u;
label_297de8:
    // 0x297de8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x297de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297dec: 0xc0b35c2  jal         func_2CD708
    ctx->pc = 0x297DECu;
    SET_GPR_U32(ctx, 31, 0x297DF4u);
    ctx->pc = 0x297DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DECu;
    // 0x297df0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD708u, 0x297DECu, 0x297DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DF4u;
label_297df4:
    // 0x297df4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x297df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297df8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x297df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x297dfc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x297dfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297e00: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x297e00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297e04: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x297e04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297e08: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x297e08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297e0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x297e0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297e10: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x297e10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297e14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297e14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297e18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297e20: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x297e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297e24: 0x3e00008  jr          $ra
    ctx->pc = 0x297E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E24u;
        // 0x297e28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297E2Cu;
}
