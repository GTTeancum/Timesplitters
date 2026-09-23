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

// Function: fileLoad
// Address: 0x21a3f8 - 0x21a488
void fileLoad_0x21a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileLoad_0x21a3f8");
#endif

    switch (ctx->pc) {
        case 0x21a428u: goto label_21a428;
        case 0x21a448u: goto label_21a448;
        case 0x21a45cu: goto label_21a45c;
        default: break;
    }

    ctx->pc = 0x21a3f8u;

    // 0x21a3f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21a3fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21a3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21a400: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21a400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21a404: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21a404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a408: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21a408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21a40c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21a40cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a410: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21a410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21a414: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21a414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a41c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21a420: 0xc0868ce  jal         func_21A338
    ctx->pc = 0x21A420u;
    SET_GPR_U32(ctx, 31, 0x21A428u);
    ctx->pc = 0x21A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A420u;
    // 0x21a424: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A338u, 0x21A420u, 0x21A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A428u;
label_21a428:
    // 0x21a428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a42c: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x21A42Cu;
    {
        const bool branch_taken_0x21a42c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x21A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A42Cu;
        // 0x21a430: 0x2602000f  addiu       $v0, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a42c) {
            ctx->pc = 0x21A45Cu;
            goto label_21a45c;
        }
    }
    ctx->pc = 0x21A434u;
    // 0x21a434: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x21a434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x21a438: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x21a438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x21a43c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21a43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a440: 0xc08074e  jal         func_201D38
    ctx->pc = 0x21A440u;
    SET_GPR_U32(ctx, 31, 0x21A448u);
    ctx->pc = 0x21A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A440u;
    // 0x21a444: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D38u, 0x21A440u, 0x21A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A448u;
label_21a448:
    // 0x21a448: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21a448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a44c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a450: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a454: 0xc086922  jal         func_21A488
    ctx->pc = 0x21A454u;
    SET_GPR_U32(ctx, 31, 0x21A45Cu);
    ctx->pc = 0x21A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A454u;
    // 0x21a458: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A488u, 0x21A454u, 0x21A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A45Cu;
label_21a45c:
    // 0x21a45c: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21A45Cu;
    {
        const bool branch_taken_0x21a45c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a45c) {
            ctx->pc = 0x21A460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A45Cu;
            // 0x21a460: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A464u;
            goto label_21a464;
        }
    }
    ctx->pc = 0x21A464u;
label_21a464:
    // 0x21a464: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21a464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a468: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21a468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a46c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21a46cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a470: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21a470u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a474: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21a474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a478: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21a478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a47c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a480: 0x3e00008  jr          $ra
    ctx->pc = 0x21A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A480u;
        // 0x21a484: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A488u;
}
