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

// Function: LinePointDistanceSquared
// Address: 0x263628 - 0x2636f0
void LinePointDistanceSquared_0x263628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinePointDistanceSquared_0x263628");
#endif

    switch (ctx->pc) {
        case 0x263648u: goto label_263648;
        default: break;
    }

    ctx->pc = 0x263628u;

    // 0x263628: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x263628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26362c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x26362cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x263630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x263630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263634: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x263634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x263638: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x263638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26363c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x263640: 0xc09699a  jal         func_25A668
    ctx->pc = 0x263640u;
    SET_GPR_U32(ctx, 31, 0x263648u);
    ctx->pc = 0x263644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263640u;
    // 0x263644: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A668u, 0x263640u, 0x263648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263648u;
label_263648:
    // 0x263648: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x263648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x26364c: 0xc62b0000  lwc1        $f11, 0x0($s1)
    ctx->pc = 0x26364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x263650: 0xc6080004  lwc1        $f8, 0x4($s0)
    ctx->pc = 0x263650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x263654: 0xc62a0004  lwc1        $f10, 0x4($s1)
    ctx->pc = 0x263654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x263658: 0x460b3801  sub.s       $f0, $f7, $f11
    ctx->pc = 0x263658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[11]);
    // 0x26365c: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x26365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x263660: 0x460a4141  sub.s       $f5, $f8, $f10
    ctx->pc = 0x263660u;
    ctx->f[5] = FPU_SUB_S(ctx->f[8], ctx->f[10]);
    // 0x263664: 0xc6290008  lwc1        $f9, 0x8($s1)
    ctx->pc = 0x263664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x263668: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x263668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26366c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x26366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263670: 0x46093101  sub.s       $f4, $f6, $f9
    ctx->pc = 0x263670u;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x263674: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x263674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x263678: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x263678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26367c: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x26367cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x263680: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x263680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263684: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x263684u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x263688: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x263688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26368c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26368cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263690: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x263690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x263694: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x263694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x263698: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x263698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26369c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x26369cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2636a0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2636a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2636a4: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x2636a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x2636a8: 0x460a18c0  add.s       $f3, $f3, $f10
    ctx->pc = 0x2636a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x2636ac: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x2636acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x2636b0: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x2636b0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2636b4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2636b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2636b8: 0x46034201  sub.s       $f8, $f8, $f3
    ctx->pc = 0x2636b8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x2636bc: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2636bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2636c0: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x2636c0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2636c4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2636c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2636c8: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x2636c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2636cc: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x2636ccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2636d0: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x2636d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2636d4: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x2636d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2636d8: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x2636d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2636dc: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x2636dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2636e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2636e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2636e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2636e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2636e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2636E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2636ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636E8u;
        // 0x2636ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2636E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2636F0u;
}
