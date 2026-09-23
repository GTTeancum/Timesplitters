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

// Function: windowRestart
// Address: 0x20c378 - 0x20c40c
void windowRestart_0x20c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("windowRestart_0x20c378");
#endif

    ctx->pc = 0x20c378u;

    // 0x20c378: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x20c378u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x20c37c: 0x254299f0  addiu       $v0, $t2, -0x6610
    ctx->pc = 0x20c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941168));
    // 0x20c380: 0x8c4c0034  lw          $t4, 0x34($v0)
    ctx->pc = 0x20c380u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x329A24u));
    // 0x20c384: 0x8c4d0048  lw          $t5, 0x48($v0)
    ctx->pc = 0x20c384u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x329A38u));
    // 0x20c388: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x20c388u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c38c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20c38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20c390: 0x8c4b0028  lw          $t3, 0x28($v0)
    ctx->pc = 0x20c390u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x329A18u));
    // 0x20c394: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x20c394u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20c398: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20c398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20c39c: 0x8c48002c  lw          $t0, 0x2C($v0)
    ctx->pc = 0x20c39cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x329A1Cu));
    // 0x20c3a0: 0x8c490030  lw          $t1, 0x30($v0)
    ctx->pc = 0x20c3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x329A20u));
    // 0x20c3a4: 0x0  nop
    ctx->pc = 0x20c3a4u;
    // NOP
    // 0x20c3a8: 0x0  nop
    ctx->pc = 0x20c3a8u;
    // NOP
    // 0x20c3ac: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x20c3acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x20c3b0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x20c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A28u));
    // 0x20c3b4: 0x0  nop
    ctx->pc = 0x20c3b4u;
    // NOP
    // 0x20c3b8: 0x0  nop
    ctx->pc = 0x20c3b8u;
    // NOP
    // 0x20c3bc: 0x46010843  div.s       $f1, $f1, $f1
    ctx->pc = 0x20c3bcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[1];
    // 0x20c3c0: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x20c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x329A2Cu));
    // 0x20c3c4: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x20c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A30u));
    // 0x20c3c8: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x20c3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x329A34u));
    // 0x20c3cc: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x20c3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x329A3Cu));
    // 0x20c3d0: 0xad4b99f0  sw          $t3, -0x6610($t2)
    ctx->pc = 0x20c3d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x3299F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3299F0u, _value); } while (0);
    // 0x20c3d4: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x20c3d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x3299F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3299F4u, _value); } while (0);
    // 0x20c3d8: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x20c3d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x3299F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3299F8u, _value); } while (0);
    // 0x20c3dc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x20c3dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x329A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A00u, _value); } while (0);
    // 0x20c3e0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x20c3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x329A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A40u, _value); } while (0); }
    // 0x20c3e4: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x20c3e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x329A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A04u, _value); } while (0);
    // 0x20c3e8: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x20c3e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x329A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A08u, _value); } while (0);
    // 0x20c3ec: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x20c3ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x329A0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A0Cu, _value); } while (0);
    // 0x20c3f0: 0xac470024  sw          $a3, 0x24($v0)
    ctx->pc = 0x20c3f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x329A14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A14u, _value); } while (0);
    // 0x20c3f4: 0xe4410054  swc1        $f1, 0x54($v0)
    ctx->pc = 0x20c3f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x329A44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A44u, _value); } while (0); }
    // 0x20c3f8: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x20c3f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x329A4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A4Cu, _value); } while (0);
    // 0x20c3fc: 0xac4c000c  sw          $t4, 0xC($v0)
    ctx->pc = 0x20c3fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x3299FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3299FCu, _value); } while (0);
    // 0x20c400: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x20c400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x329A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A48u, _value); } while (0);
    // 0x20c404: 0x3e00008  jr          $ra
    ctx->pc = 0x20C404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C404u;
        // 0x20c408: 0xac4d0020  sw          $t5, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C40Cu;
}
