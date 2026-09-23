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

// Function: moveFindRoom
// Address: 0x27c870 - 0x27c9ec
void moveFindRoom_0x27c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("moveFindRoom_0x27c870");
#endif

    switch (ctx->pc) {
        case 0x27c8f8u: goto label_27c8f8;
        case 0x27c908u: goto label_27c908;
        case 0x27c91cu: goto label_27c91c;
        case 0x27c998u: goto label_27c998;
        case 0x27c9acu: goto label_27c9ac;
        default: break;
    }

    ctx->pc = 0x27c870u;

    // 0x27c870: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x27c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x27c874: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x27c874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27c878: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x27c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x27c87c: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x27c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x27c880: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27c880u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c884: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x27c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x27c888: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x27c888u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x27c88c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x27c88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x27c890: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27c890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27c894: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x27c894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x27c898: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x27c898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27c89c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x27c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x27c8a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27c8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8a4: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x27c8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x27c8a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27c8a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8ac: 0xc674f9c8  lwc1        $f20, -0x638($s3)
    ctx->pc = 0x27c8acu;
    { uint32_t bits = FAST_READ32(0x3AF9C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27c8b0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x27c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c8b4: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x27c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c8b8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x27c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c8bc: 0x460d08c0  add.s       $f3, $f1, $f13
    ctx->pc = 0x27c8bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x27c8c0: 0x460d1140  add.s       $f5, $f2, $f13
    ctx->pc = 0x27c8c0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    // 0x27c8c4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x27c8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27c8c8: 0x460d0901  sub.s       $f4, $f1, $f13
    ctx->pc = 0x27c8c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x27c8cc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x27c8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27c8d0: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x27c8d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x27c8d4: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x27c8d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x27c8d8: 0x460d1341  sub.s       $f13, $f2, $f13
    ctx->pc = 0x27c8d8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    // 0x27c8dc: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x27c8dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27c8e0: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x27c8e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27c8e4: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x27c8e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27c8e8: 0xe7ad0018  swc1        $f13, 0x18($sp)
    ctx->pc = 0x27c8e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27c8ec: 0xe7ac0004  swc1        $f12, 0x4($sp)
    ctx->pc = 0x27c8ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27c8f0: 0xc095c72  jal         func_2571C8
    ctx->pc = 0x27C8F0u;
    SET_GPR_U32(ctx, 31, 0x27C8F8u);
    ctx->pc = 0x27C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8F0u;
    // 0x27c8f4: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2571C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571C8u, 0x27C8F0u, 0x27C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8F8u;
label_27c8f8:
    // 0x27c8f8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27C8F8u;
    {
        const bool branch_taken_0x27c8f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8F8u;
        // 0x27c8fc: 0xc660f9c8  lwc1        $f0, -0x638($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294965704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8f8) {
            ctx->pc = 0x27C940u;
            goto label_27c940;
        }
    }
    ctx->pc = 0x27C900u;
    // 0x27c900: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x27c900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27c904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c908:
    // 0x27c908: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27c908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27c90c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27c90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27c910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c914: 0xc09f1e6  jal         func_27C798
    ctx->pc = 0x27C914u;
    SET_GPR_U32(ctx, 31, 0x27C91Cu);
    ctx->pc = 0x27C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C914u;
    // 0x27c918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C798u, 0x27C914u, 0x27C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C91Cu;
label_27c91c:
    // 0x27c91c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27c91cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c920: 0x0  nop
    ctx->pc = 0x27c920u;
    // NOP
    // 0x27c924: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27C924u;
    {
        const bool branch_taken_0x27c924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C924u;
        // 0x27c928: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c924) {
            ctx->pc = 0x27C934u;
            goto label_27c934;
        }
    }
    ctx->pc = 0x27C92Cu;
    // 0x27c92c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x27c92cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27c930: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27c930u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27c934:
    // 0x27c934: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27C934u;
    {
        const bool branch_taken_0x27c934 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C934u;
        // 0x27c938: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c934) {
            ctx->pc = 0x27C908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c908;
        }
    }
    ctx->pc = 0x27C93Cu;
    // 0x27c93c: 0xc660f9c8  lwc1        $f0, -0x638($s3)
    ctx->pc = 0x27c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294965704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c940:
    // 0x27c940: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x27c940u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c944: 0x0  nop
    ctx->pc = 0x27c944u;
    // NOP
    // 0x27c948: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x27C948u;
    {
        const bool branch_taken_0x27c948 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C948u;
        // 0x27c94c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c948) {
            ctx->pc = 0x27C9BCu;
            goto label_27c9bc;
        }
    }
    ctx->pc = 0x27C950u;
    // 0x27c950: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x27c950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c954: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x27c954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c958: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27c958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c95c: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x27c95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c960: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x27c960u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x27c964: 0x46000101  sub.s       $f4, $f0, $f0
    ctx->pc = 0x27c964u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[0]);
    // 0x27c968: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c96c: 0x460210c1  sub.s       $f3, $f2, $f2
    ctx->pc = 0x27c96cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[2]);
    // 0x27c970: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x27c970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27c974: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x27c974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27c978: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x27c978u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27c97c: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x27c97cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27c980: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x27c980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x27c984: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x27C984u;
    {
        const bool branch_taken_0x27c984 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C984u;
        // 0x27c988: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c984) {
            ctx->pc = 0x27C9B8u;
            goto label_27c9b8;
        }
    }
    ctx->pc = 0x27C98Cu;
    // 0x27c98c: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x27c98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27c990: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x27c990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27c994: 0x0  nop
    ctx->pc = 0x27c994u;
    // NOP
label_27c998:
    // 0x27c998: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27c998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27c9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9a4: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x27C9A4u;
    SET_GPR_U32(ctx, 31, 0x27C9ACu);
    ctx->pc = 0x27C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9A4u;
    // 0x27c9a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x27C9A4u, 0x27C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9ACu;
label_27c9ac:
    // 0x27c9ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27c9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9b0: 0x1447fff9  bne         $v0, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27C9B0u;
    {
        const bool branch_taken_0x27c9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x27C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9B0u;
        // 0x27c9b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9b0) {
            ctx->pc = 0x27C998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c998;
        }
    }
    ctx->pc = 0x27C9B8u;
label_27c9b8:
    // 0x27c9b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27c9b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c9bc:
    // 0x27c9bc: 0x5e400001  bgtzl       $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x27C9BCu;
    {
        const bool branch_taken_0x27c9bc = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x27c9bc) {
            ctx->pc = 0x27C9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C9BCu;
            // 0x27c9c0: 0xe794b1d4  swc1        $f20, -0x4E2C($gp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947284), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C9C4u;
            goto label_27c9c4;
        }
    }
    ctx->pc = 0x27C9C4u;
label_27c9c4:
    // 0x27c9c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27c9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9c8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x27c9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27c9cc: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x27c9ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27c9d0: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x27c9d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27c9d4: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x27c9d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27c9d8: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x27c9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27c9dc: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x27c9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27c9e0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x27c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27c9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x27C9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9E4u;
        // 0x27c9e8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C9ECu;
}
