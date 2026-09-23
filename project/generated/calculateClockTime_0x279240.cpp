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

// Function: calculateClockTime
// Address: 0x279240 - 0x279324
void calculateClockTime_0x279240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calculateClockTime_0x279240");
#endif

    switch (ctx->pc) {
        case 0x279258u: goto label_279258;
        default: break;
    }

    ctx->pc = 0x279240u;

    // 0x279240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279248: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x279248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27924c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x27924cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x279250: 0xc0acee2  jal         func_2B3B88
    ctx->pc = 0x279250u;
    SET_GPR_U32(ctx, 31, 0x279258u);
    ctx->pc = 0x279254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279250u;
    // 0x279254: 0x37a60008  ori         $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B88u, 0x279250u, 0x279258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279258u;
label_279258:
    // 0x279258: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x279258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27925c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x27925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x279260: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x279260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x279264: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x279264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279268: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x279268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27926c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x27926cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279270: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x279270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x279274: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x279274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x279278: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x279278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x27927c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27927cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279280: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x279280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x279284: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x279284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x279288: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x279288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27928c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27928cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x279290: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x279290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x279294: 0x0  nop
    ctx->pc = 0x279294u;
    // NOP
    // 0x279298: 0x0  nop
    ctx->pc = 0x279298u;
    // NOP
    // 0x27929c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x27929cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x2792a0: 0xc78586c0  lwc1        $f5, -0x7940($gp)
    ctx->pc = 0x2792a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2792a4: 0x0  nop
    ctx->pc = 0x2792a4u;
    // NOP
    // 0x2792a8: 0x0  nop
    ctx->pc = 0x2792a8u;
    // NOP
    // 0x2792ac: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x2792acu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[6];
    // 0x2792b0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2792b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2792b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2792b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2792b8: 0x0  nop
    ctx->pc = 0x2792b8u;
    // NOP
    // 0x2792bc: 0x0  nop
    ctx->pc = 0x2792bcu;
    // NOP
    // 0x2792c0: 0x46061083  div.s       $f2, $f2, $f6
    ctx->pc = 0x2792c0u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[6];
    // 0x2792c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2792c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2792c8: 0xaf82b914  sw          $v0, -0x46EC($gp)
    ctx->pc = 0x2792c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949140), GPR_U32(ctx, 2));
    // 0x2792cc: 0xaf83b918  sw          $v1, -0x46E8($gp)
    ctx->pc = 0x2792ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949144), GPR_U32(ctx, 3));
    // 0x2792d0: 0xaf84b91c  sw          $a0, -0x46E4($gp)
    ctx->pc = 0x2792d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949148), GPR_U32(ctx, 4));
    // 0x2792d4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2792d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2792d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2792d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2792dc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2792dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2792e0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2792e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2792e4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2792e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2792e8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2792e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2792ec: 0x0  nop
    ctx->pc = 0x2792ecu;
    // NOP
    // 0x2792f0: 0x0  nop
    ctx->pc = 0x2792f0u;
    // NOP
    // 0x2792f4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2792f4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x2792f8: 0x0  nop
    ctx->pc = 0x2792f8u;
    // NOP
    // 0x2792fc: 0x0  nop
    ctx->pc = 0x2792fcu;
    // NOP
    // 0x279300: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x279300u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x279304: 0x0  nop
    ctx->pc = 0x279304u;
    // NOP
    // 0x279308: 0x0  nop
    ctx->pc = 0x279308u;
    // NOP
    // 0x27930c: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x27930cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x279310: 0xe781b908  swc1        $f1, -0x46F8($gp)
    ctx->pc = 0x279310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949128), bits); }
    // 0x279314: 0xe780b910  swc1        $f0, -0x46F0($gp)
    ctx->pc = 0x279314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949136), bits); }
    // 0x279318: 0xe782b90c  swc1        $f2, -0x46F4($gp)
    ctx->pc = 0x279318u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949132), bits); }
    // 0x27931c: 0x3e00008  jr          $ra
    ctx->pc = 0x27931Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27931Cu;
        // 0x279320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27931Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279324u;
}
