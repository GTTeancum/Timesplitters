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

// Function: mmDeleteAllMarked
// Address: 0x245c80 - 0x245cd0
void mmDeleteAllMarked_0x245c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDeleteAllMarked_0x245c80");
#endif

    switch (ctx->pc) {
        case 0x245c90u: goto label_245c90;
        case 0x245ca0u: goto label_245ca0;
        case 0x245cb0u: goto label_245cb0;
        default: break;
    }

    ctx->pc = 0x245c80u;

    // 0x245c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x245c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x245c88: 0xc0920ba  jal         func_2482E8
    ctx->pc = 0x245C88u;
    SET_GPR_U32(ctx, 31, 0x245C90u);
    ctx->pc = 0x245C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C88u;
    // 0x245c8c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2482E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E8u, 0x245C88u, 0x245C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C90u;
label_245c90:
    // 0x245c90: 0x8f84a12c  lw          $a0, -0x5ED4($gp)
    ctx->pc = 0x245c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x245c94: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x245C94u;
    {
        const bool branch_taken_0x245c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C94u;
        // 0x245c98: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c94) {
            ctx->pc = 0x245CC0u;
            goto label_245cc0;
        }
    }
    ctx->pc = 0x245C9Cu;
    // 0x245c9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x245c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_245ca0:
    // 0x245ca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245CA0u;
    {
        const bool branch_taken_0x245ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CA0u;
        // 0x245ca4: 0x8c900038  lw          $s0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ca0) {
            ctx->pc = 0x245CB0u;
            goto label_245cb0;
        }
    }
    ctx->pc = 0x245CA8u;
    // 0x245ca8: 0xc0921a8  jal         func_2486A0
    ctx->pc = 0x245CA8u;
    SET_GPR_U32(ctx, 31, 0x245CB0u);
    ctx->pc = 0x2486A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486A0u, 0x245CA8u, 0x245CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CB0u;
label_245cb0:
    // 0x245cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cb4: 0x5480fffa  bnel        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x245CB4u;
    {
        const bool branch_taken_0x245cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x245cb4) {
            ctx->pc = 0x245CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245CB4u;
            // 0x245cb8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245ca0;
        }
    }
    ctx->pc = 0x245CBCu;
    // 0x245cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_245cc0:
    // 0x245cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245cc4: 0xaf80a108  sw          $zero, -0x5EF8($gp)
    ctx->pc = 0x245cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942984), GPR_U32(ctx, 0));
    // 0x245cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x245CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CC8u;
        // 0x245ccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245CD0u;
}
