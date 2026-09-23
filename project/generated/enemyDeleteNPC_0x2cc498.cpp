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

// Function: enemyDeleteNPC
// Address: 0x2cc498 - 0x2cc50c
void enemyDeleteNPC_0x2cc498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyDeleteNPC_0x2cc498");
#endif

    switch (ctx->pc) {
        case 0x2cc4d0u: goto label_2cc4d0;
        default: break;
    }

    ctx->pc = 0x2cc498u;

    // 0x2cc498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc49c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2cc49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2cc4a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc4a4: 0x3463ffde  ori         $v1, $v1, 0xFFDE
    ctx->pc = 0x2cc4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65502);
    // 0x2cc4a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cc4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc4ac: 0x8c900160  lw          $s0, 0x160($a0)
    ctx->pc = 0x2cc4acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2cc4b0: 0xae000a9c  sw          $zero, 0xA9C($s0)
    ctx->pc = 0x2cc4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 0));
    // 0x2cc4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc4b8: 0x8e050bcc  lw          $a1, 0xBCC($s0)
    ctx->pc = 0x2cc4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x2cc4bc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2cc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2cc4c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cc4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cc4c4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2cc4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2cc4c8: 0xc0a224a  jal         func_288928
    ctx->pc = 0x2CC4C8u;
    SET_GPR_U32(ctx, 31, 0x2CC4D0u);
    ctx->pc = 0x2CC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC4C8u;
    // 0x2cc4cc: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288928u, 0x2CC4C8u, 0x2CC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4D0u;
label_2cc4d0:
    // 0x2cc4d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc4d4: 0x8e040bd8  lw          $a0, 0xBD8($s0)
    ctx->pc = 0x2cc4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3032)));
    // 0x2cc4d8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC4D8u;
    {
        const bool branch_taken_0x2cc4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4D8u;
        // 0x2cc4dc: 0xae0202a8  sw          $v0, 0x2A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4d8) {
            ctx->pc = 0x2CC4FCu;
            goto label_2cc4fc;
        }
    }
    ctx->pc = 0x2CC4E0u;
    // 0x2cc4e0: 0x8f82b4c8  lw          $v0, -0x4B38($gp)
    ctx->pc = 0x2cc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948040)));
    // 0x2cc4e4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2cc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2cc4e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cc4ec: 0xae000bd8  sw          $zero, 0xBD8($s0)
    ctx->pc = 0x2cc4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3032), GPR_U32(ctx, 0));
    // 0x2cc4f0: 0xaf82b4c8  sw          $v0, -0x4B38($gp)
    ctx->pc = 0x2cc4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948040), GPR_U32(ctx, 2));
    // 0x2cc4f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cc4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cc4f8: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2cc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_2cc4fc:
    // 0x2cc4fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cc4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc504: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC504u;
        // 0x2cc508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC50Cu;
}
