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

// Function: playerCampingDetection
// Address: 0x2cd7f8 - 0x2cd8c0
void playerCampingDetection_0x2cd7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerCampingDetection_0x2cd7f8");
#endif

    switch (ctx->pc) {
        case 0x2cd810u: goto label_2cd810;
        default: break;
    }

    ctx->pc = 0x2cd7f8u;

    // 0x2cd7f8: 0x8f8a9f74  lw          $t2, -0x608C($gp)
    ctx->pc = 0x2cd7f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cd7fc: 0x1940002e  blez        $t2, . + 4 + (0x2E << 2)
    ctx->pc = 0x2CD7FCu;
    {
        const bool branch_taken_0x2cd7fc = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2CD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7FCu;
        // 0x2cd800: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7fc) {
            ctx->pc = 0x2CD8B8u;
            goto label_2cd8b8;
        }
    }
    ctx->pc = 0x2CD804u;
    // 0x2cd804: 0x8f89b230  lw          $t1, -0x4DD0($gp)
    ctx->pc = 0x2cd804u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2cd808: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x2cd808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2cd80c: 0x0  nop
    ctx->pc = 0x2cd80cu;
    // NOP
label_2cd810:
    // 0x2cd810: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2cd810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2cd814: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2cd814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2cd818: 0x1021818  mult        $v1, $t0, $v0
    ctx->pc = 0x2cd818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cd81c: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x2cd81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2cd820: 0xc4e30364  lwc1        $f3, 0x364($a3)
    ctx->pc = 0x2cd820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd824: 0xc4e0008c  lwc1        $f0, 0x8C($a3)
    ctx->pc = 0x2cd824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd828: 0xc4e20090  lwc1        $f2, 0x90($a3)
    ctx->pc = 0x2cd828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd82c: 0xc4e40368  lwc1        $f4, 0x368($a3)
    ctx->pc = 0x2cd82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd830: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cd830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cd834: 0xc4e10094  lwc1        $f1, 0x94($a3)
    ctx->pc = 0x2cd834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd838: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cd838u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cd83c: 0xc4e3036c  lwc1        $f3, 0x36C($a3)
    ctx->pc = 0x2cd83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd840: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2cd840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2cd844: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2cd844u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2cd848: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2cd848u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2cd84c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cd84cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2cd850: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cd850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cd854: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cd854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd858: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2cd858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd85c: 0x0  nop
    ctx->pc = 0x2cd85cu;
    // NOP
    // 0x2cd860: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2CD860u;
    {
        const bool branch_taken_0x2cd860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD860u;
        // 0x2cd864: 0xace00370  sw          $zero, 0x370($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd860) {
            ctx->pc = 0x2CD8A8u;
            goto label_2cd8a8;
        }
    }
    ctx->pc = 0x2CD868u;
    // 0x2cd868: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2cd868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cd86c: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x2cd86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cd870: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x2cd870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cd874: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2cd874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2cd878: 0x8f86a2ec  lw          $a2, -0x5D14($gp)
    ctx->pc = 0x2cd878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2cd87c: 0xace00370  sw          $zero, 0x370($a3)
    ctx->pc = 0x2cd87cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 0));
    // 0x2cd880: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cd880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cd884: 0x8c6202a8  lw          $v0, 0x2A8($v1)
    ctx->pc = 0x2cd884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 680)));
    // 0x2cd888: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2cd888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cd88c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cd890: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2cd890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd894: 0xe4e00364  swc1        $f0, 0x364($a3)
    ctx->pc = 0x2cd894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 868), bits); }
    // 0x2cd898: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2cd898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd89c: 0xe4e10368  swc1        $f1, 0x368($a3)
    ctx->pc = 0x2cd89cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 872), bits); }
    // 0x2cd8a0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2cd8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd8a4: 0xe4e0036c  swc1        $f0, 0x36C($a3)
    ctx->pc = 0x2cd8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 876), bits); }
label_2cd8a8:
    // 0x2cd8a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2cd8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2cd8ac: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x2cd8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2cd8b0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2CD8B0u;
    {
        const bool branch_taken_0x2cd8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8B0u;
        // 0x2cd8b4: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8b0) {
            ctx->pc = 0x2CD810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd810;
        }
    }
    ctx->pc = 0x2CD8B8u;
label_2cd8b8:
    // 0x2cd8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD8C0u;
}
