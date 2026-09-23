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

// Function: HitTestLineSphere
// Address: 0x20a8d8 - 0x20aa7c
void HitTestLineSphere_0x20a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitTestLineSphere_0x20a8d8");
#endif

    switch (ctx->pc) {
        case 0x20a9c0u: goto label_20a9c0;
        default: break;
    }

    ctx->pc = 0x20a8d8u;

    // 0x20a8d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20a8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20a8dc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x20a8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x20a8e0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x20a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x20a8e4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x20a8e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x20a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x20a8ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20a8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8f0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x20a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x20a8f4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20a8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20a8f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8fc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x20a8fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20a900: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a904: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20a904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20a908: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x20a908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20a90c: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x20a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a910: 0xc62b0004  lwc1        $f11, 0x4($s1)
    ctx->pc = 0x20a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20a914: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x20a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a918: 0x460368c1  sub.s       $f3, $f13, $f3
    ctx->pc = 0x20a918u;
    ctx->f[3] = FPU_SUB_S(ctx->f[13], ctx->f[3]);
    // 0x20a91c: 0xc62a0008  lwc1        $f10, 0x8($s1)
    ctx->pc = 0x20a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x20a920: 0x46025881  sub.s       $f2, $f11, $f2
    ctx->pc = 0x20a920u;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[2]);
    // 0x20a924: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x20a924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a928: 0xc6090000  lwc1        $f9, 0x0($s0)
    ctx->pc = 0x20a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x20a92c: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x20a92cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x20a930: 0xc6080004  lwc1        $f8, 0x4($s0)
    ctx->pc = 0x20a930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x20a934: 0x46005001  sub.s       $f0, $f10, $f0
    ctx->pc = 0x20a934u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x20a938: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x20a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20a93c: 0x46021182  mul.s       $f6, $f2, $f2
    ctx->pc = 0x20a93cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20a940: 0x46091902  mul.s       $f4, $f3, $f9
    ctx->pc = 0x20a940u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x20a944: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x20a944u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20a948: 0x46081142  mul.s       $f5, $f2, $f8
    ctx->pc = 0x20a948u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x20a94c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x20a94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20a950: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x20a950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20a954: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x20a954u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20a958: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x20a958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x20a95c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x20a95cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x20a960: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x20a960u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x20a964: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x20a964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20a968: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x20a968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x20a96c: 0x46002500  add.s       $f20, $f4, $f0
    ctx->pc = 0x20a96cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x20a970: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x20a970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x20a974: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x20a974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x20a978: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x20a978u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20a97c: 0x460c1836  c.le.s      $f3, $f12
    ctx->pc = 0x20a97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a980: 0x0  nop
    ctx->pc = 0x20a980u;
    // NOP
    // 0x20a984: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x20A984u;
    {
        const bool branch_taken_0x20a984 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A984u;
        // 0x20a988: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a984) {
            ctx->pc = 0x20AA54u;
            goto label_20aa54;
        }
    }
    ctx->pc = 0x20A98Cu;
    // 0x20a98c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A98Cu;
    {
        const bool branch_taken_0x20a98c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a98c) {
            ctx->pc = 0x20A99Cu;
            goto label_20a99c;
        }
    }
    ctx->pc = 0x20A994u;
    // 0x20a994: 0x12800030  beqz        $s4, . + 4 + (0x30 << 2)
    ctx->pc = 0x20A994u;
    {
        const bool branch_taken_0x20a994 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A994u;
        // 0x20a998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a994) {
            ctx->pc = 0x20AA58u;
            goto label_20aa58;
        }
    }
    ctx->pc = 0x20A99Cu;
label_20a99c:
    // 0x20a99c: 0x0  nop
    ctx->pc = 0x20a99cu;
    // NOP
    // 0x20a9a0: 0x0  nop
    ctx->pc = 0x20a9a0u;
    // NOP
    // 0x20a9a4: 0x460c0104  c1          0xC0104
    ctx->pc = 0x20a9a4u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[12]);
    // 0x20a9a8: 0x46042032  c.eq.s      $f4, $f4
    ctx->pc = 0x20a9a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a9ac: 0x0  nop
    ctx->pc = 0x20a9acu;
    // NOP
    // 0x20a9b0: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x20A9B0u;
    {
        const bool branch_taken_0x20a9b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a9b0) {
            ctx->pc = 0x20A9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A9B0u;
            // 0x20a9b4: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A9E0u;
            goto label_20a9e0;
        }
    }
    ctx->pc = 0x20A9B8u;
    // 0x20a9b8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x20A9B8u;
    SET_GPR_U32(ctx, 31, 0x20A9C0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x20A9B8u, 0x20A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9C0u;
label_20a9c0:
    // 0x20a9c0: 0xc62a0008  lwc1        $f10, 0x8($s1)
    ctx->pc = 0x20a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x20a9c4: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x20a9c4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x20a9c8: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x20a9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20a9cc: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x20a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20a9d0: 0xc62b0004  lwc1        $f11, 0x4($s1)
    ctx->pc = 0x20a9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20a9d4: 0xc6090000  lwc1        $f9, 0x0($s0)
    ctx->pc = 0x20a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x20a9d8: 0xc6080004  lwc1        $f8, 0x4($s0)
    ctx->pc = 0x20a9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x20a9dc: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x20a9dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_20a9e0:
    // 0x20a9e0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x20a9e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x20a9e4: 0x46070042  mul.s       $f1, $f0, $f7
    ctx->pc = 0x20a9e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x20a9e8: 0x46090082  mul.s       $f2, $f0, $f9
    ctx->pc = 0x20a9e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x20a9ec: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x20a9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x20a9f0: 0x46015040  add.s       $f1, $f10, $f1
    ctx->pc = 0x20a9f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x20a9f4: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x20a9f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x20a9f8: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x20a9f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x20a9fc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x20a9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x20aa00: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x20aa00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20aa04: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AA04u;
    {
        const bool branch_taken_0x20aa04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA04u;
        // 0x20aa08: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa04) {
            ctx->pc = 0x20AA18u;
            goto label_20aa18;
        }
    }
    ctx->pc = 0x20AA0Cu;
    // 0x20aa0c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x20aa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x20aa10: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x20aa10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x20aa14: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x20aa14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_20aa18:
    // 0x20aa18: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x20AA18u;
    {
        const bool branch_taken_0x20aa18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA18u;
        // 0x20aa1c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa18) {
            ctx->pc = 0x20AA4Cu;
            goto label_20aa4c;
        }
    }
    ctx->pc = 0x20AA20u;
    // 0x20aa20: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x20aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20aa24: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x20aa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20aa28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20aa28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20aa2c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x20aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20aa30: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x20aa30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x20aa34: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x20aa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20aa38: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x20aa38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x20aa3c: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x20aa3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x20aa40: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x20aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20aa44: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x20aa44u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x20aa48: 0xe6830008  swc1        $f3, 0x8($s4)
    ctx->pc = 0x20aa48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_20aa4c:
    // 0x20aa4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AA4Cu;
    {
        const bool branch_taken_0x20aa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA4Cu;
        // 0x20aa50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa4c) {
            ctx->pc = 0x20AA58u;
            goto label_20aa58;
        }
    }
    ctx->pc = 0x20AA54u;
label_20aa54:
    // 0x20aa54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20aa54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa58:
    // 0x20aa58: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x20aa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20aa5c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x20aa5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20aa60: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x20aa60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20aa64: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x20aa64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20aa68: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x20aa68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20aa6c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20aa6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aa70: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x20aa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20aa74: 0x3e00008  jr          $ra
    ctx->pc = 0x20AA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA74u;
        // 0x20aa78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AA7Cu;
}
