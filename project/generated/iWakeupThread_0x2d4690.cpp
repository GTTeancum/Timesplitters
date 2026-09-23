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

// Function: iWakeupThread
// Address: 0x2d4690 - 0x2d4730
void iWakeupThread_0x2d4690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iWakeupThread_0x2d4690");
#endif

    switch (ctx->pc) {
        case 0x2d46acu: goto label_2d46ac;
        case 0x2d46c0u: goto label_2d46c0;
        case 0x2d46d0u: goto label_2d46d0;
        case 0x2d46dcu: goto label_2d46dc;
        case 0x2d46e4u: goto label_2d46e4;
        case 0x2d46ecu: goto label_2d46ec;
        case 0x2d46f4u: goto label_2d46f4;
        case 0x2d4700u: goto label_2d4700;
        case 0x2d4708u: goto label_2d4708;
        case 0x2d4710u: goto label_2d4710;
        default: break;
    }

    ctx->pc = 0x2d4690u;

    // 0x2d4690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d4690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d4694: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d4694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d4698: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d4698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d469c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d469cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46a0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2d46a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2d46a4: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x2d46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x2d46a8: 0xc  syscall     0
    ctx->pc = 0x2d46a8u;
    ctx->pc = 0x2D46ACu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d46ac:
    // 0x2d46ac: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x2d46acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46b0: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D46B0u;
    {
        const bool branch_taken_0x2d46b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D46B0u;
        // 0x2d46b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46b0) {
            ctx->pc = 0x2D46C8u;
            goto label_2d46c8;
        }
    }
    ctx->pc = 0x2D46B8u;
    // 0x2d46b8: 0xc0b4018  jal         func_2D0060
    ctx->pc = 0x2D46B8u;
    SET_GPR_U32(ctx, 31, 0x2D46C0u);
    ctx->pc = 0x2D46BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D46B8u;
    // 0x2d46bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0060u, 0x2D46B8u, 0x2D46C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46C0u;
label_2d46c0:
    // 0x2d46c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D46C0u;
    {
        const bool branch_taken_0x2d46c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D46C0u;
        // 0x2d46c4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46c0) {
            ctx->pc = 0x2D4720u;
            goto label_2d4720;
        }
    }
    ctx->pc = 0x2D46C8u;
label_2d46c8:
    // 0x2d46c8: 0xc0b400c  jal         func_2D0030
    ctx->pc = 0x2D46C8u;
    SET_GPR_U32(ctx, 31, 0x2D46D0u);
    ctx->pc = 0x2D46CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D46C8u;
    // 0x2d46cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0030u, 0x2D46C8u, 0x2D46D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46D0u;
label_2d46d0:
    // 0x2d46d0: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x2d46d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d46d4: 0xc0b4028  jal         func_2D00A0
    ctx->pc = 0x2D46D4u;
    SET_GPR_U32(ctx, 31, 0x2D46DCu);
    ctx->pc = 0x2D46D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D46D4u;
    // 0x2d46d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00A0u, 0x2D46D4u, 0x2D46DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46DCu;
label_2d46dc:
    // 0x2d46dc: 0xc0b4018  jal         func_2D0060
    ctx->pc = 0x2D46DCu;
    SET_GPR_U32(ctx, 31, 0x2D46E4u);
    ctx->pc = 0x2D46E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D46DCu;
    // 0x2d46e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0060u, 0x2D46DCu, 0x2D46E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46E4u;
label_2d46e4:
    // 0x2d46e4: 0xc0b4030  jal         func_2D00C0
    ctx->pc = 0x2D46E4u;
    SET_GPR_U32(ctx, 31, 0x2D46ECu);
    ctx->pc = 0x2D46E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D46E4u;
    // 0x2d46e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00C0u, 0x2D46E4u, 0x2D46ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46ECu;
label_2d46ec:
    // 0x2d46ec: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x2d46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x2d46f0: 0xc  syscall     0
    ctx->pc = 0x2d46f0u;
    ctx->pc = 0x2D46F4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d46f4:
    // 0x2d46f4: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x2d46f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46f8: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D46F8u;
    {
        const bool branch_taken_0x2d46f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D46F8u;
        // 0x2d46fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46f8) {
            ctx->pc = 0x2D471Cu;
            goto label_2d471c;
        }
    }
    ctx->pc = 0x2D4700u;
label_2d4700:
    // 0x2d4700: 0xc0b3ff4  jal         func_2CFFD0
    ctx->pc = 0x2D4700u;
    SET_GPR_U32(ctx, 31, 0x2D4708u);
    ctx->pc = 0x2D4704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4700u;
    // 0x2d4704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFFD0u, 0x2D4700u, 0x2D4708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4708u;
label_2d4708:
    // 0x2d4708: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x2d4708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x2d470c: 0xc  syscall     0
    ctx->pc = 0x2d470cu;
    ctx->pc = 0x2D4710u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2d4710:
    // 0x2d4710: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x2d4710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4714: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D4714u;
    {
        const bool branch_taken_0x2d4714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4714u;
        // 0x2d4718: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4714) {
            ctx->pc = 0x2D4700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4700;
        }
    }
    ctx->pc = 0x2D471Cu;
label_2d471c:
    // 0x2d471c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d471cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d4720:
    // 0x2d4720: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2d4720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4724: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d4724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4728: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4728u;
        // 0x2d472c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4730u;
}
