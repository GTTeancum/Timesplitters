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

// Function: hr_calcestcost
// Address: 0x266100 - 0x266188
void hr_calcestcost_0x266100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hr_calcestcost_0x266100");
#endif

    switch (ctx->pc) {
        case 0x26617cu: goto label_26617c;
        default: break;
    }

    ctx->pc = 0x266100u;

    // 0x266100: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x266100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x266104: 0x8f82a2ec  lw          $v0, -0x5D14($gp)
    ctx->pc = 0x266104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x266108: 0xa33018  mult        $a2, $a1, $v1
    ctx->pc = 0x266108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x26610c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x26610cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x266110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266118: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x266118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26611c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266120: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x266120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266124: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x266124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x266128: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x266128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26612c: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x26612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x266130: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x266130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x266134: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x266134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266138: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x266138u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x26613c: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x26613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x266140: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x266140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x266144: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x266144u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x266148: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x266148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26614c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26614cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x266150: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x266150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x266154: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x266154u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x266158: 0x0  nop
    ctx->pc = 0x266158u;
    // NOP
    // 0x26615c: 0x0  nop
    ctx->pc = 0x26615cu;
    // NOP
    // 0x266160: 0x460c0004  c1          0xC0004
    ctx->pc = 0x266160u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x266164: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x266164u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266168: 0x0  nop
    ctx->pc = 0x266168u;
    // NOP
    // 0x26616c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x26616Cu;
    {
        const bool branch_taken_0x26616c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x266170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26616Cu;
        // 0x266170: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26616c) {
            ctx->pc = 0x266180u;
            goto label_266180;
        }
    }
    ctx->pc = 0x266174u;
    // 0x266174: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x266174u;
    SET_GPR_U32(ctx, 31, 0x26617Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x266174u, 0x26617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26617Cu;
label_26617c:
    // 0x26617c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_266180:
    // 0x266180: 0x3e00008  jr          $ra
    ctx->pc = 0x266180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266180u;
        // 0x266184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266188u;
}
