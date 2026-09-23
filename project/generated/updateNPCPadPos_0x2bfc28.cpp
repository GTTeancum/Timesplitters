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

// Function: updateNPCPadPos
// Address: 0x2bfc28 - 0x2bfc94
void updateNPCPadPos_0x2bfc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("updateNPCPadPos_0x2bfc28");
#endif

    switch (ctx->pc) {
        case 0x2bfc50u: goto label_2bfc50;
        case 0x2bfc68u: goto label_2bfc68;
        default: break;
    }

    ctx->pc = 0x2bfc28u;

    // 0x2bfc28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bfc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bfc2c: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x2bfc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2bfc30: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2bfc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2bfc34: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2bfc34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2bfc38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2bfc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2bfc3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bfc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc40: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2bfc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2bfc44: 0x8e110160  lw          $s1, 0x160($s0)
    ctx->pc = 0x2bfc44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2bfc48: 0xc099286  jal         func_264A18
    ctx->pc = 0x2BFC48u;
    SET_GPR_U32(ctx, 31, 0x2BFC50u);
    ctx->pc = 0x2BFC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC48u;
    // 0x2bfc4c: 0x8e2402a8  lw          $a0, 0x2A8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A18u, 0x2BFC48u, 0x2BFC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC50u;
label_2bfc50:
    // 0x2bfc50: 0x8e2302a8  lw          $v1, 0x2A8($s1)
    ctx->pc = 0x2bfc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2bfc54: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2bfc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2bfc58: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2bfc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bfc5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bfc5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc60: 0xc099b16  jal         func_266C58
    ctx->pc = 0x2BFC60u;
    SET_GPR_U32(ctx, 31, 0x2BFC68u);
    ctx->pc = 0x2BFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC60u;
    // 0x2bfc64: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C58u, 0x2BFC60u, 0x2BFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC68u;
label_2bfc68:
    // 0x2bfc68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bfc68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc6c: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x2bfc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2bfc70: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFC70u;
    {
        const bool branch_taken_0x2bfc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC70u;
        // 0x2bfc74: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc70) {
            ctx->pc = 0x2BFC84u;
            goto label_2bfc84;
        }
    }
    ctx->pc = 0x2BFC78u;
    // 0x2bfc78: 0xae2302a8  sw          $v1, 0x2A8($s1)
    ctx->pc = 0x2bfc78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 3));
    // 0x2bfc7c: 0xae200a84  sw          $zero, 0xA84($s1)
    ctx->pc = 0x2bfc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2692), GPR_U32(ctx, 0));
    // 0x2bfc80: 0xae200698  sw          $zero, 0x698($s1)
    ctx->pc = 0x2bfc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 0));
label_2bfc84:
    // 0x2bfc84: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2bfc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfc88: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2bfc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC8Cu;
        // 0x2bfc90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFC94u;
}
