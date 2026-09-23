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

// Function: windowGfx
// Address: 0x20c7e8 - 0x20c93c
void windowGfx_0x20c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("windowGfx_0x20c7e8");
#endif

    switch (ctx->pc) {
        case 0x20c7f8u: goto label_20c7f8;
        default: break;
    }

    ctx->pc = 0x20c7e8u;

    // 0x20c7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c7ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c7f0: 0xc0807de  jal         func_201F78
    ctx->pc = 0x20C7F0u;
    SET_GPR_U32(ctx, 31, 0x20C7F8u);
    ctx->pc = 0x20C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C7F0u;
    // 0x20c7f4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x20C7F0u, 0x20C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7F8u;
label_20c7f8:
    // 0x20c7f8: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x20c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x20c7fc: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x20c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20c800: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x20c800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x20c804: 0x3c0144d8  lui         $at, 0x44D8
    ctx->pc = 0x20c804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17624 << 16));
    // 0x20c808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20c808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c80c: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x20c80cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c810: 0x34638010  ori         $v1, $v1, 0x8010
    ctx->pc = 0x20c810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32784);
    // 0x20c814: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20c814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x20c818: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20c818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20c81c: 0x24a499f0  addiu       $a0, $a1, -0x6610
    ctx->pc = 0x20c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x20c820: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x20c820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x20c824: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x20c824u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x329A14u));
    // 0x20c828: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x20c828u;
    { uint32_t bits = FAST_READ32(0x329A00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20c82c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x20c82cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x20c830: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x20c830u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x20c834: 0xc4a299f0  lwc1        $f2, -0x6610($a1)
    ctx->pc = 0x20c834u;
    { uint32_t bits = FAST_READ32(0x3299F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20c838: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x20c838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20c83c: 0x71823  negu        $v1, $a3
    ctx->pc = 0x20c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x20c840: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c844: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x20c844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x20c848: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x20c848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x20c84c: 0xe4460000  swc1        $f6, 0x0($v0)
    ctx->pc = 0x20c84cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c850: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x20c850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c854: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20c854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20c858: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c85c: 0xc784802c  lwc1        $f4, -0x7FD4($gp)
    ctx->pc = 0x20c85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20c860: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x20c860u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x20c864: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x20c864u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c868: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x20c868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x20c86c: 0x3c0144f2  lui         $at, 0x44F2
    ctx->pc = 0x20c86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17650 << 16));
    // 0x20c870: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20c870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20c874: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c878: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x20c878u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c87c: 0x44872800  mtc1        $a3, $f5
    ctx->pc = 0x20c87cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x20c880: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x20c880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x20c884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20c884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20c888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20c888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c88c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x20c88cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x20c890: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x20c890u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x20c894: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c898: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c89c: 0x34a5078b  ori         $a1, $a1, 0x78B
    ctx->pc = 0x20c89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1931);
    // 0x20c8a0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x20c8a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x20c8a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c8a8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x20c8a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c8ac: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x20c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x20c8b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c8b4: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x20c8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x20c8b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20c8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20c8bc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x20c8bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c8c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c8c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c8cc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x20c8ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c8d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c8d4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x20c8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20c8d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20c8dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c8e0: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x20c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x20c8e4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c8e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c8ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c8f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c8f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c8f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c8fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c900: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c904: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c908: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c90c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c910: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c914: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c918: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c91c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20c91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20c920: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c924: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x20c924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x20c928: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20c92c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20c930: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20c930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20c934: 0x3e00008  jr          $ra
    ctx->pc = 0x20C934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C934u;
        // 0x20c938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C93Cu;
}
