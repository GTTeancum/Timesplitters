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

// Function: textRestart
// Address: 0x202010 - 0x2020ac
void textRestart_0x202010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("textRestart_0x202010");
#endif

    switch (ctx->pc) {
        case 0x202028u: goto label_202028;
        case 0x202040u: goto label_202040;
        case 0x202050u: goto label_202050;
        case 0x20206cu: goto label_20206c;
        case 0x20207cu: goto label_20207c;
        case 0x202098u: goto label_202098;
        default: break;
    }

    ctx->pc = 0x202010u;

    // 0x202010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202014: 0x8f849aa0  lw          $a0, -0x6560($gp)
    ctx->pc = 0x202014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941344)));
    // 0x202018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20201c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x202020: 0xc08718c  jal         func_21C630
    ctx->pc = 0x202020u;
    SET_GPR_U32(ctx, 31, 0x202028u);
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x202020u, 0x202028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202028u;
label_202028:
    // 0x202028: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x202028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20202c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x20202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x202030: 0x8f849aa4  lw          $a0, -0x655C($gp)
    ctx->pc = 0x202030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941348)));
    // 0x202034: 0x245098a8  addiu       $s0, $v0, -0x6758
    ctx->pc = 0x202034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940840));
    // 0x202038: 0xc08718c  jal         func_21C630
    ctx->pc = 0x202038u;
    SET_GPR_U32(ctx, 31, 0x202040u);
    ctx->pc = 0x20203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202038u;
    // 0x20203c: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x202038u, 0x202040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202040u;
label_202040:
    // 0x202040: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x202040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x202044: 0x8f849aac  lw          $a0, -0x6554($gp)
    ctx->pc = 0x202044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941356)));
    // 0x202048: 0xc08718c  jal         func_21C630
    ctx->pc = 0x202048u;
    SET_GPR_U32(ctx, 31, 0x202050u);
    ctx->pc = 0x20204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202048u;
    // 0x20204c: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x202048u, 0x202050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202050u;
label_202050:
    // 0x202050: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x202050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x202054: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x202054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x202058: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x202058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x20205c: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20205Cu;
    {
        const bool branch_taken_0x20205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x202060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20205Cu;
        // 0x202060: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20205c) {
            ctx->pc = 0x202084u;
            goto label_202084;
        }
    }
    ctx->pc = 0x202064u;
    // 0x202064: 0xc08718c  jal         func_21C630
    ctx->pc = 0x202064u;
    SET_GPR_U32(ctx, 31, 0x20206Cu);
    ctx->pc = 0x202068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202064u;
    // 0x202068: 0x8f849aa8  lw          $a0, -0x6558($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x202064u, 0x20206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20206Cu;
label_20206c:
    // 0x20206c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x20206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x202070: 0x8f849ab0  lw          $a0, -0x6550($gp)
    ctx->pc = 0x202070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941360)));
    // 0x202074: 0xc08718c  jal         func_21C630
    ctx->pc = 0x202074u;
    SET_GPR_U32(ctx, 31, 0x20207Cu);
    ctx->pc = 0x202078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202074u;
    // 0x202078: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x202074u, 0x20207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20207Cu;
label_20207c:
    // 0x20207c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x20207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x202080: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x202080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_202084:
    // 0x202084: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x202084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x202088: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x202088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20208c: 0xa3809ab5  sb          $zero, -0x654B($gp)
    ctx->pc = 0x20208cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 0));
    // 0x202090: 0xc08089c  jal         func_202270
    ctx->pc = 0x202090u;
    SET_GPR_U32(ctx, 31, 0x202098u);
    ctx->pc = 0x202094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202090u;
    // 0x202094: 0xaf82b628  sw          $v0, -0x49D8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948392), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x202090u, 0x202098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202098u;
label_202098:
    // 0x202098: 0xaf909a9c  sw          $s0, -0x6564($gp)
    ctx->pc = 0x202098u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941340), GPR_U32(ctx, 16));
    // 0x20209c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2020a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2020a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2020a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2020A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020A4u;
        // 0x2020a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2020A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2020ACu;
}
