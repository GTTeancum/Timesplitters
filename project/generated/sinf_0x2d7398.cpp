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

// Function: sinf
// Address: 0x2d7398 - 0x2d7488
void sinf_0x2d7398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sinf_0x2d7398");
#endif

    switch (ctx->pc) {
        case 0x2d73d0u: goto label_2d73d0;
        case 0x2d73fcu: goto label_2d73fc;
        case 0x2d7440u: goto label_2d7440;
        case 0x2d7454u: goto label_2d7454;
        case 0x2d7468u: goto label_2d7468;
        case 0x2d7478u: goto label_2d7478;
        default: break;
    }

    ctx->pc = 0x2d7398u;

    // 0x2d7398: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2d7398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d739c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d739cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d73a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d73a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73a4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2d73a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2d73a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d73a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d73ac: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2d73acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2d73b0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2d73b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d73b4: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x2d73b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x2d73b8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d73b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d73bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D73BCu;
    {
        const bool branch_taken_0x2d73bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73BCu;
        // 0x2d73c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d73bc) {
            ctx->pc = 0x2D73D8u;
            goto label_2d73d8;
        }
    }
    ctx->pc = 0x2D73C4u;
    // 0x2d73c4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2d73c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d73c8: 0xc0b6ec8  jal         func_2DBB20
    ctx->pc = 0x2D73C8u;
    SET_GPR_U32(ctx, 31, 0x2D73D0u);
    ctx->pc = 0x2D73CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D73C8u;
    // 0x2d73cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBB20u, 0x2D73C8u, 0x2D73D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D73D0u;
label_2d73d0:
    // 0x2d73d0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2D73D0u;
    {
        const bool branch_taken_0x2d73d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D73D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73D0u;
        // 0x2d73d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d73d0) {
            ctx->pc = 0x2D7480u;
            goto label_2d7480;
        }
    }
    ctx->pc = 0x2D73D8u;
label_2d73d8:
    // 0x2d73d8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2d73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2d73dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d73e0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d73e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d73e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D73E4u;
    {
        const bool branch_taken_0x2d73e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d73e4) {
            ctx->pc = 0x2D73F4u;
            goto label_2d73f4;
        }
    }
    ctx->pc = 0x2D73ECu;
    // 0x2d73ec: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2D73ECu;
    {
        const bool branch_taken_0x2d73ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73ECu;
        // 0x2d73f0: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d73ec) {
            ctx->pc = 0x2D747Cu;
            goto label_2d747c;
        }
    }
    ctx->pc = 0x2D73F4u;
label_2d73f4:
    // 0x2d73f4: 0xc0b6ad8  jal         func_2DAB60
    ctx->pc = 0x2D73F4u;
    SET_GPR_U32(ctx, 31, 0x2D73FCu);
    ctx->pc = 0x2D73F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D73F4u;
    // 0x2d73f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB60u, 0x2D73F4u, 0x2D73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D73FCu;
label_2d73fc:
    // 0x2d73fc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2d73fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d7400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7404: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D7404u;
    {
        const bool branch_taken_0x2d7404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7404u;
        // 0x2d7408: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7404) {
            ctx->pc = 0x2D7448u;
            goto label_2d7448;
        }
    }
    ctx->pc = 0x2D740Cu;
    // 0x2d740c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D740Cu;
    {
        const bool branch_taken_0x2d740c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D740Cu;
        // 0x2d7410: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d740c) {
            ctx->pc = 0x2D7424u;
            goto label_2d7424;
        }
    }
    ctx->pc = 0x2D7414u;
    // 0x2d7414: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7414u;
    {
        const bool branch_taken_0x2d7414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7414u;
        // 0x2d7418: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7414) {
            ctx->pc = 0x2D7434u;
            goto label_2d7434;
        }
    }
    ctx->pc = 0x2D741Cu;
    // 0x2d741c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D741Cu;
    {
        const bool branch_taken_0x2d741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d741c) {
            ctx->pc = 0x2D7470u;
            goto label_2d7470;
        }
    }
    ctx->pc = 0x2D7424u;
label_2d7424:
    // 0x2d7424: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7424u;
    {
        const bool branch_taken_0x2d7424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7424u;
        // 0x2d7428: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7424) {
            ctx->pc = 0x2D745Cu;
            goto label_2d745c;
        }
    }
    ctx->pc = 0x2D742Cu;
    // 0x2d742c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D742Cu;
    {
        const bool branch_taken_0x2d742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d742c) {
            ctx->pc = 0x2D7470u;
            goto label_2d7470;
        }
    }
    ctx->pc = 0x2D7434u;
label_2d7434:
    // 0x2d7434: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7438: 0xc0b6ec8  jal         func_2DBB20
    ctx->pc = 0x2D7438u;
    SET_GPR_U32(ctx, 31, 0x2D7440u);
    ctx->pc = 0x2D743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7438u;
    // 0x2d743c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBB20u, 0x2D7438u, 0x2D7440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7440u;
label_2d7440:
    // 0x2d7440: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D7440u;
    {
        const bool branch_taken_0x2d7440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7440u;
        // 0x2d7444: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7440) {
            ctx->pc = 0x2D7480u;
            goto label_2d7480;
        }
    }
    ctx->pc = 0x2D7448u;
label_2d7448:
    // 0x2d7448: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2d7448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d744c: 0xc0b6c1e  jal         func_2DB078
    ctx->pc = 0x2D744Cu;
    SET_GPR_U32(ctx, 31, 0x2D7454u);
    ctx->pc = 0x2D7450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D744Cu;
    // 0x2d7450: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB078u, 0x2D744Cu, 0x2D7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7454u;
label_2d7454:
    // 0x2d7454: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D7454u;
    {
        const bool branch_taken_0x2d7454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7454u;
        // 0x2d7458: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7454) {
            ctx->pc = 0x2D7480u;
            goto label_2d7480;
        }
    }
    ctx->pc = 0x2D745Cu;
label_2d745c:
    // 0x2d745c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7460: 0xc0b6ec8  jal         func_2DBB20
    ctx->pc = 0x2D7460u;
    SET_GPR_U32(ctx, 31, 0x2D7468u);
    ctx->pc = 0x2D7464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7460u;
    // 0x2d7464: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBB20u, 0x2D7460u, 0x2D7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7468u;
label_2d7468:
    // 0x2d7468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7468u;
    {
        const bool branch_taken_0x2d7468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7468u;
        // 0x2d746c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7468) {
            ctx->pc = 0x2D747Cu;
            goto label_2d747c;
        }
    }
    ctx->pc = 0x2D7470u;
label_2d7470:
    // 0x2d7470: 0xc0b6c1e  jal         func_2DB078
    ctx->pc = 0x2D7470u;
    SET_GPR_U32(ctx, 31, 0x2D7478u);
    ctx->pc = 0x2D7474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7470u;
    // 0x2d7474: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB078u, 0x2D7470u, 0x2D7478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7478u;
label_2d7478:
    // 0x2d7478: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d7478u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2d747c:
    // 0x2d747c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d747cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d7480:
    // 0x2d7480: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7480u;
        // 0x2d7484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7488u;
}
