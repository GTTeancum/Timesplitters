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

// Function: enemyFiredAt
// Address: 0x2cc3a0 - 0x2cc498
void enemyFiredAt_0x2cc3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyFiredAt_0x2cc3a0");
#endif

    switch (ctx->pc) {
        case 0x2cc484u: goto label_2cc484;
        default: break;
    }

    ctx->pc = 0x2cc3a0u;

    // 0x2cc3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc3a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2cc3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc3ac: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x2cc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x2cc3b0: 0x8c450ae4  lw          $a1, 0xAE4($v0)
    ctx->pc = 0x2cc3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2788)));
    // 0x2cc3b4: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2CC3B4u;
    {
        const bool branch_taken_0x2cc3b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC3B4u;
        // 0x2cc3b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc3b4) {
            ctx->pc = 0x2CC488u;
            goto label_2cc488;
        }
    }
    ctx->pc = 0x2CC3BCu;
    // 0x2cc3bc: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x2cc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x2cc3c0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CC3C0u;
    {
        const bool branch_taken_0x2cc3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC3C0u;
        // 0x2cc3c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc3c0) {
            ctx->pc = 0x2CC48Cu;
            goto label_2cc48c;
        }
    }
    ctx->pc = 0x2CC3C8u;
    // 0x2cc3c8: 0xc4c30030  lwc1        $f3, 0x30($a2)
    ctx->pc = 0x2cc3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cc3cc: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2cc3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc3d0: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x2cc3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cc3d4: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x2cc3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cc3d8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cc3d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cc3dc: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2cc3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc3e0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2cc3e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2cc3e4: 0xc4c30038  lwc1        $f3, 0x38($a2)
    ctx->pc = 0x2cc3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cc3e8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2cc3e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2cc3ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc3f0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2cc3f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2cc3f4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2cc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cc3f8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2cc3f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2cc3fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2cc3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cc400: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cc400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2cc404: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cc404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cc408: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CC408u;
    {
        const bool branch_taken_0x2cc408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC408u;
        // 0x2cc40c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc408) {
            ctx->pc = 0x2CC434u;
            goto label_2cc434;
        }
    }
    ctx->pc = 0x2CC410u;
    // 0x2cc410: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x2cc410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2cc414: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x2cc414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2cc418: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2cc418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cc41c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cc420: 0x8c430264  lw          $v1, 0x264($v0)
    ctx->pc = 0x2cc420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x2cc424: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CC424u;
    {
        const bool branch_taken_0x2cc424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc424) {
            ctx->pc = 0x2CC428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC424u;
            // 0x2cc428: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC490u;
            goto label_2cc490;
        }
    }
    ctx->pc = 0x2CC42Cu;
    // 0x2cc42c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC42Cu;
    {
        const bool branch_taken_0x2cc42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC42Cu;
        // 0x2cc430: 0x8c4202ec  lw          $v0, 0x2EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc42c) {
            ctx->pc = 0x2CC454u;
            goto label_2cc454;
        }
    }
    ctx->pc = 0x2CC434u;
label_2cc434:
    // 0x2cc434: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2cc434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cc438: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x2cc438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cc43c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2cc43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cc440: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cc440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cc444: 0x8c4301b8  lw          $v1, 0x1B8($v0)
    ctx->pc = 0x2cc444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
    // 0x2cc448: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CC448u;
    {
        const bool branch_taken_0x2cc448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC448u;
        // 0x2cc44c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc448) {
            ctx->pc = 0x2CC48Cu;
            goto label_2cc48c;
        }
    }
    ctx->pc = 0x2CC450u;
    // 0x2cc450: 0x8c4201bc  lw          $v0, 0x1BC($v0)
    ctx->pc = 0x2cc450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_2cc454:
    // 0x2cc454: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2cc454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc458: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CC458u;
    {
        const bool branch_taken_0x2cc458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC458u;
        // 0x2cc45c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc458) {
            ctx->pc = 0x2CC48Cu;
            goto label_2cc48c;
        }
    }
    ctx->pc = 0x2CC460u;
    // 0x2cc460: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2cc460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2cc464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cc464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc468: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cc468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc46c: 0x0  nop
    ctx->pc = 0x2cc46cu;
    // NOP
    // 0x2cc470: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC470u;
    {
        const bool branch_taken_0x2cc470 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC470u;
        // 0x2cc474: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc470) {
            ctx->pc = 0x2CC490u;
            goto label_2cc490;
        }
    }
    ctx->pc = 0x2CC478u;
    // 0x2cc478: 0xc78c9288  lwc1        $f12, -0x6D78($gp)
    ctx->pc = 0x2cc478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cc47c: 0xc0b1ad4  jal         func_2C6B50
    ctx->pc = 0x2CC47Cu;
    SET_GPR_U32(ctx, 31, 0x2CC484u);
    ctx->pc = 0x2CC480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC47Cu;
    // 0x2cc480: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B50u, 0x2CC47Cu, 0x2CC484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC484u;
label_2cc484:
    // 0x2cc484: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x2cc484u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cc488:
    // 0x2cc488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc48c:
    // 0x2cc48c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2cc48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2cc490:
    // 0x2cc490: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC490u;
        // 0x2cc494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC498u;
}
