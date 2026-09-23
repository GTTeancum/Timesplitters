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

// Function: enemyExplosionNearby
// Address: 0x2cd718 - 0x2cd7f4
void enemyExplosionNearby_0x2cd718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyExplosionNearby_0x2cd718");
#endif

    switch (ctx->pc) {
        case 0x2cd748u: goto label_2cd748;
        case 0x2cd7e4u: goto label_2cd7e4;
        default: break;
    }

    ctx->pc = 0x2cd718u;

    // 0x2cd718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd71c: 0x8f88b9bc  lw          $t0, -0x4644($gp)
    ctx->pc = 0x2cd71cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949308)));
    // 0x2cd720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd724: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2cd724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd728: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2cd728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2cd72c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2cd72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2cd730: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2cd730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd734: 0x1900001c  blez        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CD734u;
    {
        const bool branch_taken_0x2cd734 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2CD738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD734u;
        // 0x2cd738: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd734) {
            ctx->pc = 0x2CD7A8u;
            goto label_2cd7a8;
        }
    }
    ctx->pc = 0x2CD73Cu;
    // 0x2cd73c: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x2cd73cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x2cd740: 0xc4e20030  lwc1        $f2, 0x30($a3)
    ctx->pc = 0x2cd740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd744: 0x0  nop
    ctx->pc = 0x2cd744u;
    // NOP
label_2cd748:
    // 0x2cd748: 0x252424d8  addiu       $a0, $t1, 0x24D8
    ctx->pc = 0x2cd748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 9432));
    // 0x2cd74c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2cd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2cd750: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2cd750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cd754: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2cd754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cd758: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2cd758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2cd75c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cd75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd760: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2cd760u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2cd764: 0xc4e00034  lwc1        $f0, 0x34($a3)
    ctx->pc = 0x2cd764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd768: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2cd768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2cd76c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2cd76cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2cd770: 0xc4e10038  lwc1        $f1, 0x38($a3)
    ctx->pc = 0x2cd770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd774: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2cd774u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cd778: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x2cd778u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2cd77c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2cd77cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2cd780: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x2cd780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd784: 0x0  nop
    ctx->pc = 0x2cd784u;
    // NOP
    // 0x2cd788: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD788u;
    {
        const bool branch_taken_0x2cd788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD788u;
        // 0x2cd78c: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd788) {
            ctx->pc = 0x2CD798u;
            goto label_2cd798;
        }
    }
    ctx->pc = 0x2CD790u;
    // 0x2cd790: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x2cd790u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
    // 0x2cd794: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2cd794u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cd798:
    // 0x2cd798: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cd798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cd79c: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x2cd79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2cd7a0: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2CD7A0u;
    {
        const bool branch_taken_0x2cd7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7a0) {
            ctx->pc = 0x2CD7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD7A0u;
            // 0x2cd7a4: 0xc4e20030  lwc1        $f2, 0x30($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd748;
        }
    }
    ctx->pc = 0x2CD7A8u;
label_2cd7a8:
    // 0x2cd7a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd7ac: 0x1142000f  beq         $t2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CD7ACu;
    {
        const bool branch_taken_0x2cd7ac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7ACu;
        // 0x2cd7b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7ac) {
            ctx->pc = 0x2CD7ECu;
            goto label_2cd7ec;
        }
    }
    ctx->pc = 0x2CD7B4u;
    // 0x2cd7b4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2cd7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2cd7b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cd7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd7bc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2cd7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd7c0: 0x0  nop
    ctx->pc = 0x2cd7c0u;
    // NOP
    // 0x2cd7c4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD7C4u;
    {
        const bool branch_taken_0x2cd7c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7C4u;
        // 0x2cd7c8: 0x3c050038  lui         $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7c4) {
            ctx->pc = 0x2CD7ECu;
            goto label_2cd7ec;
        }
    }
    ctx->pc = 0x2CD7CCu;
    // 0x2cd7cc: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x2cd7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2cd7d0: 0x24a524d8  addiu       $a1, $a1, 0x24D8
    ctx->pc = 0x2cd7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9432));
    // 0x2cd7d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cd7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd7d8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2cd7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cd7dc: 0xc0b1a02  jal         func_2C6808
    ctx->pc = 0x2CD7DCu;
    SET_GPR_U32(ctx, 31, 0x2CD7E4u);
    ctx->pc = 0x2CD7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD7DCu;
    // 0x2cd7e0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6808u, 0x2CD7DCu, 0x2CD7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7E4u;
label_2cd7e4:
    // 0x2cd7e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cd7e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cd7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd7ec:
    // 0x2cd7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7ECu;
        // 0x2cd7f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD7F4u;
}
