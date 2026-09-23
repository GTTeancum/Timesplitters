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

// Function: bgCreateRoomProps
// Address: 0x256548 - 0x2565cc
void bgCreateRoomProps_0x256548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgCreateRoomProps_0x256548");
#endif

    switch (ctx->pc) {
        case 0x256570u: goto label_256570;
        case 0x256588u: goto label_256588;
        default: break;
    }

    ctx->pc = 0x256548u;

    // 0x256548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x256548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25654c: 0x8f83a270  lw          $v1, -0x5D90($gp)
    ctx->pc = 0x25654cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x256550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256558: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x256558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25655c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x25655cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x256560: 0x8f82a264  lw          $v0, -0x5D9C($gp)
    ctx->pc = 0x256560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x256564: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x256564u;
    {
        const bool branch_taken_0x256564 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x256568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256564u;
        // 0x256568: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256564) {
            ctx->pc = 0x2565B8u;
            goto label_2565b8;
        }
    }
    ctx->pc = 0x25656Cu;
    // 0x25656c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25656cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_256570:
    // 0x256570: 0x26040201  addiu       $a0, $s0, 0x201
    ctx->pc = 0x256570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 513));
    // 0x256574: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x256574u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x256578: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x256578u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x25657c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x25657cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x256580: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x256580u;
    SET_GPR_U32(ctx, 31, 0x256588u);
    ctx->pc = 0x256584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256580u;
    // 0x256584: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x256580u, 0x256588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256588u;
label_256588:
    // 0x256588: 0x8f85a270  lw          $a1, -0x5D90($gp)
    ctx->pc = 0x256588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x25658c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x25658cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x256590: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x256590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x256594: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x256594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x256598: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x256598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25659c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25659cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565a0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2565a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2565a4: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x2565a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2565a8: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x2565a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x2565ac: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x2565acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x2565b0: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2565B0u;
    {
        const bool branch_taken_0x2565b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2565B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565B0u;
        // 0x2565b4: 0xac40008c  sw          $zero, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565b0) {
            ctx->pc = 0x256570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256570;
        }
    }
    ctx->pc = 0x2565B8u;
label_2565b8:
    // 0x2565b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2565b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2565bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2565bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2565c0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2565c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2565c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2565C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2565C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565C4u;
        // 0x2565c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2565C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2565CCu;
}
