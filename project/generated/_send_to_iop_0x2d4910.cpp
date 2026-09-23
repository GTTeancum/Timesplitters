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

// Function: _send_to_iop
// Address: 0x2d4910 - 0x2d4994
void _send_to_iop_0x2d4910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_send_to_iop_0x2d4910");
#endif

    switch (ctx->pc) {
        case 0x2d4974u: goto label_2d4974;
        case 0x2d4988u: goto label_2d4988;
        default: break;
    }

    ctx->pc = 0x2d4910u;

    // 0x2d4910: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2d4910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2d4914: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x2d4914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2d4918: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2d4918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2d491c: 0x70863818  mult1       $a3, $a0, $a2
    ctx->pc = 0x2d491cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2d4920: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2d4920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2d4924: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2d4924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d4928: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2d4928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2d492c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2d492cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2d4930: 0x24630cd0  addiu       $v1, $v1, 0xCD0
    ctx->pc = 0x2d4930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3280));
    // 0x2d4934: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2d4934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2d4938: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2d4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d493c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d493cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2d4940: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2d4940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2d4944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d4944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4948: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2d4948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d494c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2d494cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d4950: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x2d4950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2d4954: 0x24e30020  addiu       $v1, $a3, 0x20
    ctx->pc = 0x2d4954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2d4958: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x2d4958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d495c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4960: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d4960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d4964: 0xace20020  sw          $v0, 0x20($a3)
    ctx->pc = 0x2d4964u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
    // 0x2d4968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d4968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d496c: 0xc0b4138  jal         func_2D04E0
    ctx->pc = 0x2D496Cu;
    SET_GPR_U32(ctx, 31, 0x2D4974u);
    ctx->pc = 0x2D4970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D496Cu;
    // 0x2d4970: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04E0u, 0x2D496Cu, 0x2D4974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4974u;
label_2d4974:
    // 0x2d4974: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4974u;
    {
        const bool branch_taken_0x2d4974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4974u;
        // 0x2d4978: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4974) {
            ctx->pc = 0x2D498Cu;
            goto label_2d498c;
        }
    }
    ctx->pc = 0x2D497Cu;
    // 0x2d497c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d497cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d4980: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2D4980u;
    SET_GPR_U32(ctx, 31, 0x2D4988u);
    ctx->pc = 0x2D4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4980u;
    // 0x2d4984: 0x2484a5c0  addiu       $a0, $a0, -0x5A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2D4980u, 0x2D4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4988u;
label_2d4988:
    // 0x2d4988: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2d4988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2d498c:
    // 0x2d498c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D498Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D498Cu;
        // 0x2d4990: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D498Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4994u;
}
