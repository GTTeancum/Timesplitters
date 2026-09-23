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

// Function: playerOnGroundDie
// Address: 0x280588 - 0x28068c
void playerOnGroundDie_0x280588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerOnGroundDie_0x280588");
#endif

    switch (ctx->pc) {
        case 0x2805e4u: goto label_2805e4;
        case 0x280600u: goto label_280600;
        case 0x280618u: goto label_280618;
        case 0x280624u: goto label_280624;
        case 0x28062cu: goto label_28062c;
        case 0x280634u: goto label_280634;
        default: break;
    }

    ctx->pc = 0x280588u;

    // 0x280588: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x280588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28058c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x28058cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x280590: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x280590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x280594: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x280594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x280598: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x280598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28059c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28059cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2805a0: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x2805a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2805a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2805a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2805a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2805a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2805acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2805b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2805b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2805b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2805b8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2805b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2805bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2805c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2805c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805c4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2805c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805c8: 0xaeaa0128  sw          $t2, 0x128($s5)
    ctx->pc = 0x2805c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 10));
    // 0x2805cc: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2805ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x2805d0: 0x8ea30180  lw          $v1, 0x180($s5)
    ctx->pc = 0x2805d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
    // 0x2805d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2805d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2805d8: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2805d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2805dc: 0xc098246  jal         func_260918
    ctx->pc = 0x2805DCu;
    SET_GPR_U32(ctx, 31, 0x2805E4u);
    ctx->pc = 0x2805E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805DCu;
    // 0x2805e0: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260918u, 0x2805DCu, 0x2805E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805E4u;
label_2805e4:
    // 0x2805e4: 0x8ea40180  lw          $a0, 0x180($s5)
    ctx->pc = 0x2805e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
    // 0x2805e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2805e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2805ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2805f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805f4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2805f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805f8: 0xc0a228c  jal         func_288A30
    ctx->pc = 0x2805F8u;
    SET_GPR_U32(ctx, 31, 0x280600u);
    ctx->pc = 0x2805FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805F8u;
    // 0x2805fc: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288A30u, 0x2805F8u, 0x280600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280600u;
label_280600:
    // 0x280600: 0x8ea30180  lw          $v1, 0x180($s5)
    ctx->pc = 0x280600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
    // 0x280604: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x280604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x280608: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x280608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28060c: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x28060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x280610: 0xc0a00f2  jal         func_2803C8
    ctx->pc = 0x280610u;
    SET_GPR_U32(ctx, 31, 0x280618u);
    ctx->pc = 0x280614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280610u;
    // 0x280614: 0xac450a94  sw          $a1, 0xA94($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 2708), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2803C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2803C8u, 0x280610u, 0x280618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280618u;
label_280618:
    // 0x280618: 0x8ea20180  lw          $v0, 0x180($s5)
    ctx->pc = 0x280618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
    // 0x28061c: 0xc0a224a  jal         func_288928
    ctx->pc = 0x28061Cu;
    SET_GPR_U32(ctx, 31, 0x280624u);
    ctx->pc = 0x280620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28061Cu;
    // 0x280620: 0x8c440160  lw          $a0, 0x160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288928u, 0x28061Cu, 0x280624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280624u;
label_280624:
    // 0x280624: 0xc0a0006  jal         func_280018
    ctx->pc = 0x280624u;
    SET_GPR_U32(ctx, 31, 0x28062Cu);
    ctx->pc = 0x280628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280624u;
    // 0x280628: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280018u, 0x280624u, 0x28062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28062Cu;
label_28062c:
    // 0x28062c: 0xc09f8c4  jal         func_27E310
    ctx->pc = 0x28062Cu;
    SET_GPR_U32(ctx, 31, 0x280634u);
    ctx->pc = 0x280630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28062Cu;
    // 0x280630: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E310u, 0x28062Cu, 0x280634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280634u;
label_280634:
    // 0x280634: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x280634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x280638: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x280638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28063c: 0x8c62c4f0  lw          $v0, -0x3B10($v1)
    ctx->pc = 0x28063cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x280640: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x280640u;
    {
        const bool branch_taken_0x280640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x280644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280640u;
        // 0x280644: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280640) {
            ctx->pc = 0x28066Cu;
            goto label_28066c;
        }
    }
    ctx->pc = 0x280648u;
    // 0x280648: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x280648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28064c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28064cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280650: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x280650u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280654: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x280654u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280658: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x280658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28065c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28065cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280664: 0x8084a4c  j           func_212930
    ctx->pc = 0x280664u;
    ctx->pc = 0x280668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280664u;
    // 0x280668: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212930u;
    ingamemenuStart_0x212930(rdram, ctx, runtime); return;
    ctx->pc = 0x28066Cu;
label_28066c:
    // 0x28066c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28066cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280670: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x280670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280674: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x280674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280678: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x280678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28067c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28067cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280684: 0x3e00008  jr          $ra
    ctx->pc = 0x280684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280684u;
        // 0x280688: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28068Cu;
}
