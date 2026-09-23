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

// Function: controlActivate
// Address: 0x275170 - 0x2751c0
void controlActivate_0x275170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("controlActivate_0x275170");
#endif

    switch (ctx->pc) {
        case 0x27519cu: goto label_27519c;
        default: break;
    }

    ctx->pc = 0x275170u;

    // 0x275170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275174: 0x8f82a360  lw          $v0, -0x5CA0($gp)
    ctx->pc = 0x275174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943584)));
    // 0x275178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x275178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27517c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27517cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275180: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x275180u;
    {
        const bool branch_taken_0x275180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275180u;
        // 0x275184: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275180) {
            ctx->pc = 0x2751B0u;
            goto label_2751b0;
        }
    }
    ctx->pc = 0x275188u;
    // 0x275188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27518c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x27518cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x275190: 0xaf82a360  sw          $v0, -0x5CA0($gp)
    ctx->pc = 0x275190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943584), GPR_U32(ctx, 2));
    // 0x275194: 0xc081546  jal         func_205518
    ctx->pc = 0x275194u;
    SET_GPR_U32(ctx, 31, 0x27519Cu);
    ctx->pc = 0x275198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275194u;
    // 0x275198: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x275194u, 0x27519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27519Cu;
label_27519c:
    // 0x27519c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x27519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2751a0: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x2751a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x2751a4: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x2751a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x2751a8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2751a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2751ac: 0xa4620124  sh          $v0, 0x124($v1)
    ctx->pc = 0x2751acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 292), (uint16_t)GPR_U32(ctx, 2));
label_2751b0:
    // 0x2751b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2751b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2751b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2751b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2751b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2751B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2751BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751B8u;
        // 0x2751bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2751B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2751C0u;
}
