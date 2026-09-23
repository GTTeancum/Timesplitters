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

// Function: v3Normalize
// Address: 0x25a5b8 - 0x25a664
void v3Normalize_0x25a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("v3Normalize_0x25a5b8");
#endif

    switch (ctx->pc) {
        case 0x25a610u: goto label_25a610;
        default: break;
    }

    ctx->pc = 0x25a5b8u;

    // 0x25a5b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a5bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25a5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25a5c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a5c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25a5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a5cc: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x25a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25a5d0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x25a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a5d4: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x25a5d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x25a5d8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x25a5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a5dc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x25a5dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25a5e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x25a5e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25a5e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25a5e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25a5e8: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x25a5e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x25a5ec: 0x0  nop
    ctx->pc = 0x25a5ecu;
    // NOP
    // 0x25a5f0: 0x0  nop
    ctx->pc = 0x25a5f0u;
    // NOP
    // 0x25a5f4: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x25a5f4u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x25a5f8: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x25a5f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a5fc: 0x0  nop
    ctx->pc = 0x25a5fcu;
    // NOP
    // 0x25a600: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25A600u;
    {
        const bool branch_taken_0x25a600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A600u;
        // 0x25a604: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a600) {
            ctx->pc = 0x25A618u;
            goto label_25a618;
        }
    }
    ctx->pc = 0x25A608u;
    // 0x25a608: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25A608u;
    SET_GPR_U32(ctx, 31, 0x25A610u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25A608u, 0x25A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A610u;
label_25a610:
    // 0x25a610: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x25a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25a614: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x25a614u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_25a618:
    // 0x25a618: 0x0  nop
    ctx->pc = 0x25a618u;
    // NOP
    // 0x25a61c: 0x0  nop
    ctx->pc = 0x25a61cu;
    // NOP
    // 0x25a620: 0x46032003  div.s       $f0, $f4, $f3
    ctx->pc = 0x25a620u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[3];
    // 0x25a624: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a628: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25a62c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x25a62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a630: 0x0  nop
    ctx->pc = 0x25a630u;
    // NOP
    // 0x25a634: 0x0  nop
    ctx->pc = 0x25a634u;
    // NOP
    // 0x25a638: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x25a638u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x25a63c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x25a63cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x25a640: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x25a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a648: 0x0  nop
    ctx->pc = 0x25a648u;
    // NOP
    // 0x25a64c: 0x0  nop
    ctx->pc = 0x25a64cu;
    // NOP
    // 0x25a650: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x25a650u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x25a654: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x25a654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x25a658: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25a658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a65c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A65Cu;
        // 0x25a660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A664u;
}
