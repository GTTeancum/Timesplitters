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

// Function: moveFindFloorRoom
// Address: 0x27c798 - 0x27c86c
void moveFindFloorRoom_0x27c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("moveFindFloorRoom_0x27c798");
#endif

    switch (ctx->pc) {
        case 0x27c7c8u: goto label_27c7c8;
        case 0x27c7f4u: goto label_27c7f4;
        case 0x27c80cu: goto label_27c80c;
        default: break;
    }

    ctx->pc = 0x27c798u;

    // 0x27c798: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27c798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27c79c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27c7a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7a4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27c7a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27c7ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27c7acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27c7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27c7b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x27c7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7b8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x27c7b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27c7bc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27c7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27c7c0: 0xc095d7c  jal         func_2575F0
    ctx->pc = 0x27C7C0u;
    SET_GPR_U32(ctx, 31, 0x27C7C8u);
    ctx->pc = 0x27C7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C7C0u;
    // 0x27c7c4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2575F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2575F0u, 0x27C7C0u, 0x27C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7C8u;
label_27c7c8:
    // 0x27c7c8: 0x8f85a270  lw          $a1, -0x5D90($gp)
    ctx->pc = 0x27c7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x27c7cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x27c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27c7d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27c7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27c7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27c7dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27c7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x27c7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c7e4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x27c7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7e8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x27c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x27c7ec: 0xc09f15e  jal         func_27C578
    ctx->pc = 0x27C7ECu;
    SET_GPR_U32(ctx, 31, 0x27C7F4u);
    ctx->pc = 0x27C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C7ECu;
    // 0x27c7f0: 0x94450124  lhu         $a1, 0x124($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C578u, 0x27C7ECu, 0x27C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7F4u;
label_27c7f4:
    // 0x27c7f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27c7f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27c7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27c7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c800: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x27c800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x27c804: 0xc09c538  jal         func_2714E0
    ctx->pc = 0x27C804u;
    SET_GPR_U32(ctx, 31, 0x27C80Cu);
    ctx->pc = 0x27C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C804u;
    // 0x27c808: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2714E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2714E0u, 0x27C804u, 0x27C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C80Cu;
label_27c80c:
    // 0x27c80c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27c80cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c810: 0x0  nop
    ctx->pc = 0x27c810u;
    // NOP
    // 0x27c814: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x27C814u;
    {
        const bool branch_taken_0x27c814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C814u;
        // 0x27c818: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c814) {
            ctx->pc = 0x27C834u;
            goto label_27c834;
        }
    }
    ctx->pc = 0x27C81Cu;
    // 0x27c81c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27c81cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27c820: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C820u;
    {
        const bool branch_taken_0x27c820 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C820u;
        // 0x27c824: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c820) {
            ctx->pc = 0x27C83Cu;
            goto label_27c83c;
        }
    }
    ctx->pc = 0x27C828u;
    // 0x27c828: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x27c828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27c82c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27C82Cu;
    {
        const bool branch_taken_0x27c82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C82Cu;
        // 0x27c830: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c82c) {
            ctx->pc = 0x27C83Cu;
            goto label_27c83c;
        }
    }
    ctx->pc = 0x27C834u;
label_27c834:
    // 0x27c834: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27C834u;
    {
        const bool branch_taken_0x27c834 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c834) {
            ctx->pc = 0x27C838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C834u;
            // 0x27c838: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C83Cu;
            goto label_27c83c;
        }
    }
    ctx->pc = 0x27C83Cu;
label_27c83c:
    // 0x27c83c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C83Cu;
    {
        const bool branch_taken_0x27c83c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C83Cu;
        // 0x27c840: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c83c) {
            ctx->pc = 0x27C848u;
            goto label_27c848;
        }
    }
    ctx->pc = 0x27C844u;
    // 0x27c844: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x27c844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_27c848:
    // 0x27c848: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x27c848u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x27c84c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27c84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27c850: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27c850u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c854: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27c854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c858: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27c858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c85c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27c85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c860: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x27c860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27c864: 0x3e00008  jr          $ra
    ctx->pc = 0x27C864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C864u;
        // 0x27c868: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C86Cu;
}
