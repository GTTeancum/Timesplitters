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

// Function: signonLoadRetry
// Address: 0x2316c8 - 0x2317ac
void signonLoadRetry_0x2316c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonLoadRetry_0x2316c8");
#endif

    switch (ctx->pc) {
        case 0x231704u: goto label_231704;
        case 0x23170cu: goto label_23170c;
        case 0x23171cu: goto label_23171c;
        case 0x231724u: goto label_231724;
        case 0x231740u: goto label_231740;
        case 0x231760u: goto label_231760;
        case 0x231768u: goto label_231768;
        default: break;
    }

    ctx->pc = 0x2316c8u;

    // 0x2316c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2316c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2316cc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2316ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2316d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2316d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2316d4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2316d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2316d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2316d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2316dc: 0x24712c18  addiu       $s1, $v1, 0x2C18
    ctx->pc = 0x2316dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2316e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2316e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2316e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2316e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2316e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2316e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2316ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2316ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2316f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2316f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2316f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2316f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2316f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2316fc: 0xc08c56c  jal         func_2315B0
    ctx->pc = 0x2316FCu;
    SET_GPR_U32(ctx, 31, 0x231704u);
    ctx->pc = 0x231700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316FCu;
    // 0x231700: 0x8c65077c  lw          $a1, 0x77C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2315B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2315B0u, 0x2316FCu, 0x231704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231704u;
label_231704:
    // 0x231704: 0xc091368  jal         func_244DA0
    ctx->pc = 0x231704u;
    SET_GPR_U32(ctx, 31, 0x23170Cu);
    ctx->pc = 0x231708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231704u;
    // 0x231708: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA0u, 0x231704u, 0x23170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23170Cu;
label_23170c:
    // 0x23170c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23170Cu;
    {
        const bool branch_taken_0x23170c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x231710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23170Cu;
        // 0x231710: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23170c) {
            ctx->pc = 0x231728u;
            goto label_231728;
        }
    }
    ctx->pc = 0x231714u;
    // 0x231714: 0xc091368  jal         func_244DA0
    ctx->pc = 0x231714u;
    SET_GPR_U32(ctx, 31, 0x23171Cu);
    ctx->pc = 0x244DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA0u, 0x231714u, 0x23171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23171Cu;
label_23171c:
    // 0x23171c: 0xc09136a  jal         func_244DA8
    ctx->pc = 0x23171Cu;
    SET_GPR_U32(ctx, 31, 0x231724u);
    ctx->pc = 0x231720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23171Cu;
    // 0x231720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA8u, 0x23171Cu, 0x231724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231724u;
label_231724:
    // 0x231724: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x231724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_231728:
    // 0x231728: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x231728u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x23172c: 0x26101960  addiu       $s0, $s0, 0x1960
    ctx->pc = 0x23172cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6496));
    // 0x231730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x231730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x231734: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x231734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x231738: 0xc0881e4  jal         func_220790
    ctx->pc = 0x231738u;
    SET_GPR_U32(ctx, 31, 0x231740u);
    ctx->pc = 0x23173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231738u;
    // 0x23173c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220790u, 0x231738u, 0x231740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231740u;
label_231740:
    // 0x231740: 0x8e260760  lw          $a2, 0x760($s1)
    ctx->pc = 0x231740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1888)));
    // 0x231744: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x231744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231748: 0x8f88b74c  lw          $t0, -0x48B4($gp)
    ctx->pc = 0x231748u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
    // 0x23174c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231750: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x231750u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231754: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x231754u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231758: 0xc0912ca  jal         func_244B28
    ctx->pc = 0x231758u;
    SET_GPR_U32(ctx, 31, 0x231760u);
    ctx->pc = 0x23175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231758u;
    // 0x23175c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244B28u, 0x231758u, 0x231760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231760u;
label_231760:
    // 0x231760: 0xc09133c  jal         func_244CF0
    ctx->pc = 0x231760u;
    SET_GPR_U32(ctx, 31, 0x231768u);
    ctx->pc = 0x231764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231760u;
    // 0x231764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244CF0u, 0x231760u, 0x231768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231768u;
label_231768:
    // 0x231768: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x231768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23176c: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x23176cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x231770: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x231770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x231774: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x231774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x231778: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x231778u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23177c: 0xaf80b754  sw          $zero, -0x48AC($gp)
    ctx->pc = 0x23177cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948692), GPR_U32(ctx, 0));
    // 0x231780: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x231780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x231784: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x231784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231788: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x231788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x23178c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23178cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231790: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x231790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x231794: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231798: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23179c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23179cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2317a0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2317a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2317a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2317A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2317A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317A4u;
        // 0x2317a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2317A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2317ACu;
}
