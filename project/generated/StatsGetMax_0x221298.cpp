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

// Function: StatsGetMax
// Address: 0x221298 - 0x221334
void StatsGetMax_0x221298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsGetMax_0x221298");
#endif

    switch (ctx->pc) {
        case 0x2212d8u: goto label_2212d8;
        case 0x2212e0u: goto label_2212e0;
        case 0x2212fcu: goto label_2212fc;
        default: break;
    }

    ctx->pc = 0x221298u;

    // 0x221298: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x221298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22129c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2212a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2212a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2212a4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2212a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2212a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2212a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2212ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2212acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2212b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2212b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2212b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212b8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2212b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2212bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2212bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2212c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2212c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2212c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2212c8: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2212C8u;
    {
        const bool branch_taken_0x2212c8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2212CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212C8u;
        // 0x2212cc: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2212c8) {
            ctx->pc = 0x221310u;
            goto label_221310;
        }
    }
    ctx->pc = 0x2212D0u;
    // 0x2212d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2212d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212d4: 0x0  nop
    ctx->pc = 0x2212d4u;
    // NOP
label_2212d8:
    // 0x2212d8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2212D8u;
    SET_GPR_U32(ctx, 31, 0x2212E0u);
    ctx->pc = 0x2212DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212D8u;
    // 0x2212dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2212D8u, 0x2212E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212E0u;
label_2212e0:
    // 0x2212e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2212e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2212e4: 0x0  nop
    ctx->pc = 0x2212e4u;
    // NOP
    // 0x2212e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2212E8u;
    {
        const bool branch_taken_0x2212e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2212ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212E8u;
        // 0x2212ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2212e8) {
            ctx->pc = 0x221300u;
            goto label_221300;
        }
    }
    ctx->pc = 0x2212F0u;
    // 0x2212f0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2212f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212f4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2212F4u;
    SET_GPR_U32(ctx, 31, 0x2212FCu);
    ctx->pc = 0x2212F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212F4u;
    // 0x2212f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2212F4u, 0x2212FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212FCu;
label_2212fc:
    // 0x2212fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2212fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_221300:
    // 0x221300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x221300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x221304: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x221304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x221308: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x221308u;
    {
        const bool branch_taken_0x221308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221308u;
        // 0x22130c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221308) {
            ctx->pc = 0x2212D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2212d8;
        }
    }
    ctx->pc = 0x221310u;
label_221310:
    // 0x221310: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x221310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221314: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x221314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221318: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x221318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22131c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22131cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221320: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x221320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221328: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x221328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22132c: 0x3e00008  jr          $ra
    ctx->pc = 0x22132Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22132Cu;
        // 0x221330: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22132Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221334u;
}
