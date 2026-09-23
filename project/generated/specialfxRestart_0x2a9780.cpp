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

// Function: specialfxRestart
// Address: 0x2a9780 - 0x2a9844
void specialfxRestart_0x2a9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxRestart_0x2a9780");
#endif

    switch (ctx->pc) {
        case 0x2a97a4u: goto label_2a97a4;
        case 0x2a97b0u: goto label_2a97b0;
        case 0x2a97e4u: goto label_2a97e4;
        case 0x2a97f0u: goto label_2a97f0;
        case 0x2a9818u: goto label_2a9818;
        case 0x2a982cu: goto label_2a982c;
        default: break;
    }

    ctx->pc = 0x2a9780u;

    // 0x2a9780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a978c: 0x24061420  addiu       $a2, $zero, 0x1420
    ctx->pc = 0x2a978cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5152));
    // 0x2a9790: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2a9790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2a9794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a9794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a9798: 0x2610c268  addiu       $s0, $s0, -0x3D98
    ctx->pc = 0x2a9798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951528));
    // 0x2a979c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2A979Cu;
    SET_GPR_U32(ctx, 31, 0x2A97A4u);
    ctx->pc = 0x2A97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A979Cu;
    // 0x2a97a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2A979Cu, 0x2A97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97A4u;
label_2a97a4:
    // 0x2a97a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a97a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a97a8: 0x261013c4  addiu       $s0, $s0, 0x13C4
    ctx->pc = 0x2a97a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5060));
    // 0x2a97ac: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x2a97acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_2a97b0:
    // 0x2a97b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2a97b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a97b8: 0x2610ffa4  addiu       $s0, $s0, -0x5C
    ctx->pc = 0x2a97b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967204));
    // 0x2a97bc: 0x0  nop
    ctx->pc = 0x2a97bcu;
    // NOP
    // 0x2a97c0: 0x0  nop
    ctx->pc = 0x2a97c0u;
    // NOP
    // 0x2a97c4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A97C4u;
    {
        const bool branch_taken_0x2a97c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a97c4) {
            ctx->pc = 0x2A97B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a97b0;
        }
    }
    ctx->pc = 0x2A97CCu;
    // 0x2a97cc: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2a97ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2a97d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a97d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97d4: 0x2610d688  addiu       $s0, $s0, -0x2978
    ctx->pc = 0x2a97d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956680));
    // 0x2a97d8: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2a97d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2a97dc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2A97DCu;
    SET_GPR_U32(ctx, 31, 0x2A97E4u);
    ctx->pc = 0x2A97E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A97DCu;
    // 0x2a97e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2A97DCu, 0x2A97E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97E4u;
label_2a97e4:
    // 0x2a97e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a97e8: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x2a97e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x2a97ec: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2a97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2a97f0:
    // 0x2a97f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a97f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2a97f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a97f8: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x2a97f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x2a97fc: 0x0  nop
    ctx->pc = 0x2a97fcu;
    // NOP
    // 0x2a9800: 0x0  nop
    ctx->pc = 0x2a9800u;
    // NOP
    // 0x2a9804: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A9804u;
    {
        const bool branch_taken_0x2a9804 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a9804) {
            ctx->pc = 0x2A97F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a97f0;
        }
    }
    ctx->pc = 0x2A980Cu;
    // 0x2a980c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a980cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a9810: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2A9810u;
    SET_GPR_U32(ctx, 31, 0x2A9818u);
    ctx->pc = 0x2A9814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9810u;
    // 0x2a9814: 0x24849690  addiu       $a0, $a0, -0x6970 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2A9810u, 0x2A9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9818u;
label_2a9818:
    // 0x2a9818: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2a9818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a981c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a981cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a9820: 0x248496b0  addiu       $a0, $a0, -0x6950
    ctx->pc = 0x2a9820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940336));
    // 0x2a9824: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2A9824u;
    SET_GPR_U32(ctx, 31, 0x2A982Cu);
    ctx->pc = 0x2A9828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9824u;
    // 0x2a9828: 0xaf83b998  sw          $v1, -0x4668($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2A9824u, 0x2A982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A982Cu;
label_2a982c:
    // 0x2a982c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2a982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a9830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a9830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a9834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9838: 0xaf83b99c  sw          $v1, -0x4664($gp)
    ctx->pc = 0x2a9838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949276), GPR_U32(ctx, 3));
    // 0x2a983c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A983Cu;
        // 0x2a9840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9844u;
}
