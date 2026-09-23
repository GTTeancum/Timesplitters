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

// Function: StatsGetMin
// Address: 0x221338 - 0x2213d4
void StatsGetMin_0x221338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsGetMin_0x221338");
#endif

    switch (ctx->pc) {
        case 0x221378u: goto label_221378;
        case 0x221380u: goto label_221380;
        case 0x22139cu: goto label_22139c;
        default: break;
    }

    ctx->pc = 0x221338u;

    // 0x221338: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x221338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22133c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x221340: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x221340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x221344: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x221344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x221348: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x221348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22134c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x221350: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x221350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x221358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22135c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x22135cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x221360: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x221360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221364: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x221364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x221368: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x221368u;
    {
        const bool branch_taken_0x221368 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x22136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221368u;
        // 0x22136c: 0xc454e5d0  lwc1        $f20, -0x1A30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221368) {
            ctx->pc = 0x2213B0u;
            goto label_2213b0;
        }
    }
    ctx->pc = 0x221370u;
    // 0x221370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221374: 0x0  nop
    ctx->pc = 0x221374u;
    // NOP
label_221378:
    // 0x221378: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221378u;
    SET_GPR_U32(ctx, 31, 0x221380u);
    ctx->pc = 0x22137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221378u;
    // 0x22137c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221378u, 0x221380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221380u;
label_221380:
    // 0x221380: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x221380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221384: 0x0  nop
    ctx->pc = 0x221384u;
    // NOP
    // 0x221388: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x221388u;
    {
        const bool branch_taken_0x221388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221388u;
        // 0x22138c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221388) {
            ctx->pc = 0x2213A0u;
            goto label_2213a0;
        }
    }
    ctx->pc = 0x221390u;
    // 0x221390: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x221390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221394: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x221394u;
    SET_GPR_U32(ctx, 31, 0x22139Cu);
    ctx->pc = 0x221398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221394u;
    // 0x221398: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x221394u, 0x22139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22139Cu;
label_22139c:
    // 0x22139c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22139cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2213a0:
    // 0x2213a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2213a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2213a4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2213a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2213a8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2213A8u;
    {
        const bool branch_taken_0x2213a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2213ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213A8u;
        // 0x2213ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2213a8) {
            ctx->pc = 0x221378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221378;
        }
    }
    ctx->pc = 0x2213B0u;
label_2213b0:
    // 0x2213b0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2213b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2213b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2213b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2213b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2213bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2213bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2213c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2213c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2213c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2213c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2213c8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2213c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2213cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2213CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2213D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213CCu;
        // 0x2213d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2213CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2213D4u;
}
