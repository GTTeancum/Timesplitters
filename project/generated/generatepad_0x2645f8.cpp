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

// Function: generatepad
// Address: 0x2645f8 - 0x2646b0
void generatepad_0x2645f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("generatepad_0x2645f8");
#endif

    switch (ctx->pc) {
        case 0x264680u: goto label_264680;
        default: break;
    }

    ctx->pc = 0x2645f8u;

    // 0x2645f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2645f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2645fc: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2645fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x264600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264604: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x264604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26460c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26460cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264610: 0x9784a320  lhu         $a0, -0x5CE0($gp)
    ctx->pc = 0x264610u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294943520)));
    // 0x264614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x264614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264618: 0xc4a00340  lwc1        $f0, 0x340($a1)
    ctx->pc = 0x264618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26461c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26461cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x264620: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x264620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264624: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x264624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x264628: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x264628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x26462c: 0xc4a00344  lwc1        $f0, 0x344($a1)
    ctx->pc = 0x26462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264630: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x264630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x264634: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x264634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x264638: 0xa6040008  sh          $a0, 0x8($s0)
    ctx->pc = 0x264638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x26463c: 0xc4a00348  lwc1        $f0, 0x348($a1)
    ctx->pc = 0x26463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264640: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x264640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x264644: 0xc4a20350  lwc1        $f2, 0x350($a1)
    ctx->pc = 0x264644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x264648: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x264648u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26464c: 0x0  nop
    ctx->pc = 0x26464cu;
    // NOP
    // 0x264650: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x264650u;
    {
        const bool branch_taken_0x264650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x264650) {
            ctx->pc = 0x264654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264650u;
            // 0x264654: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2646A0u;
            goto label_2646a0;
        }
    }
    ctx->pc = 0x264658u;
    // 0x264658: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x264658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x26465c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26465cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264660: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x264660u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264664: 0x0  nop
    ctx->pc = 0x264664u;
    // NOP
    // 0x264668: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x264668u;
    {
        const bool branch_taken_0x264668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x264668) {
            ctx->pc = 0x26466Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264668u;
            // 0x26466c: 0xc4ad0354  lwc1        $f13, 0x354($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x264678u;
            goto label_264678;
        }
    }
    ctx->pc = 0x264670u;
    // 0x264670: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x264670u;
    {
        const bool branch_taken_0x264670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264670u;
        // 0x264674: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264670) {
            ctx->pc = 0x2646A0u;
            goto label_2646a0;
        }
    }
    ctx->pc = 0x264678u;
label_264678:
    // 0x264678: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x264678u;
    SET_GPR_U32(ctx, 31, 0x264680u);
    ctx->pc = 0x26467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264678u;
    // 0x26467c: 0xc4ac034c  lwc1        $f12, 0x34C($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x264678u, 0x264680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264680u;
label_264680:
    // 0x264680: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x264680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x264684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x264684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264688: 0xc78283b0  lwc1        $f2, -0x7C50($gp)
    ctx->pc = 0x264688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26468c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26468cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x264690: 0x0  nop
    ctx->pc = 0x264690u;
    // NOP
    // 0x264694: 0x0  nop
    ctx->pc = 0x264694u;
    // NOP
    // 0x264698: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x264698u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x26469c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2646a0:
    // 0x2646a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2646a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2646a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2646a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2646a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2646A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2646ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646A8u;
        // 0x2646ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2646A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2646B0u;
}
