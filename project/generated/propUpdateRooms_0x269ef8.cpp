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

// Function: propUpdateRooms
// Address: 0x269ef8 - 0x269f70
void propUpdateRooms_0x269ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propUpdateRooms_0x269ef8");
#endif

    switch (ctx->pc) {
        case 0x269f28u: goto label_269f28;
        case 0x269f48u: goto label_269f48;
        default: break;
    }

    ctx->pc = 0x269ef8u;

    // 0x269ef8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x269ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x269efc: 0x8f85b15c  lw          $a1, -0x4EA4($gp)
    ctx->pc = 0x269efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x269f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x269f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x269f04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x269f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x269f08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x269f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x269f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x269f10: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x269F10u;
    {
        const bool branch_taken_0x269f10 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x269F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F10u;
        // 0x269f14: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f10) {
            ctx->pc = 0x269F58u;
            goto label_269f58;
        }
    }
    ctx->pc = 0x269F18u;
    // 0x269f18: 0x3412c000  ori         $s2, $zero, 0xC000
    ctx->pc = 0x269f18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x269f1c: 0x129438  dsll        $s2, $s2, 16
    ctx->pc = 0x269f1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 16);
    // 0x269f20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x269f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f24: 0x0  nop
    ctx->pc = 0x269f24u;
    // NOP
label_269f28:
    // 0x269f28: 0x8f83b07c  lw          $v1, -0x4F84($gp)
    ctx->pc = 0x269f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x269f2c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x269f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x269f30: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x269f30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x269f34: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x269f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x269f38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269F38u;
    {
        const bool branch_taken_0x269f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F38u;
        // 0x269f3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f38) {
            ctx->pc = 0x269F4Cu;
            goto label_269f4c;
        }
    }
    ctx->pc = 0x269F40u;
    // 0x269f40: 0xc09a722  jal         func_269C88
    ctx->pc = 0x269F40u;
    SET_GPR_U32(ctx, 31, 0x269F48u);
    ctx->pc = 0x269C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C88u, 0x269F40u, 0x269F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F48u;
label_269f48:
    // 0x269f48: 0x8f85b15c  lw          $a1, -0x4EA4($gp)
    ctx->pc = 0x269f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_269f4c:
    // 0x269f4c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x269f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x269f50: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x269F50u;
    {
        const bool branch_taken_0x269f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F50u;
        // 0x269f54: 0x26310250  addiu       $s1, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f50) {
            ctx->pc = 0x269F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269f28;
        }
    }
    ctx->pc = 0x269F58u;
label_269f58:
    // 0x269f58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x269f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269f5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x269f5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269f60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x269f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x269f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269f68: 0x3e00008  jr          $ra
    ctx->pc = 0x269F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F68u;
        // 0x269f6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269F70u;
}
