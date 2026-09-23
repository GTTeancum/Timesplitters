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

// Function: mmClearObjects
// Address: 0x2485b8 - 0x248650
void mmClearObjects_0x2485b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmClearObjects_0x2485b8");
#endif

    switch (ctx->pc) {
        case 0x2485d8u: goto label_2485d8;
        case 0x248620u: goto label_248620;
        default: break;
    }

    ctx->pc = 0x2485b8u;

    // 0x2485b8: 0x8f86a130  lw          $a2, -0x5ED0($gp)
    ctx->pc = 0x2485b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x2485bc: 0x3402efc0  ori         $v0, $zero, 0xEFC0
    ctx->pc = 0x2485bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61376);
    // 0x2485c0: 0x3403efc4  ori         $v1, $zero, 0xEFC4
    ctx->pc = 0x2485c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61380);
    // 0x2485c4: 0x8f87a134  lw          $a3, -0x5ECC($gp)
    ctx->pc = 0x2485c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
    // 0x2485c8: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x2485c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2485cc: 0x240503fe  addiu       $a1, $zero, 0x3FE
    ctx->pc = 0x2485ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x2485d0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x2485d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2485d4: 0x0  nop
    ctx->pc = 0x2485d4u;
    // NOP
label_2485d8:
    // 0x2485d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2485d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2485dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2485dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2485e0: 0x2484ffc4  addiu       $a0, $a0, -0x3C
    ctx->pc = 0x2485e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x2485e4: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x2485e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x2485e8: 0x0  nop
    ctx->pc = 0x2485e8u;
    // NOP
    // 0x2485ec: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2485ECu;
    {
        const bool branch_taken_0x2485ec = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2485ec) {
            ctx->pc = 0x2485D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2485d8;
        }
    }
    ctx->pc = 0x2485F4u;
    // 0x2485f4: 0x3402efc4  ori         $v0, $zero, 0xEFC4
    ctx->pc = 0x2485f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61380);
    // 0x2485f8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x2485f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2485fc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2485fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x248600: 0xaf83a138  sw          $v1, -0x5EC8($gp)
    ctx->pc = 0x248600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943032), GPR_U32(ctx, 3));
    // 0x248604: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x248604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x248608: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x248608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24860c: 0xaf86b824  sw          $a2, -0x47DC($gp)
    ctx->pc = 0x24860cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948900), GPR_U32(ctx, 6));
    // 0x248610: 0x24e30808  addiu       $v1, $a3, 0x808
    ctx->pc = 0x248610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2056));
    // 0x248614: 0xaf80a0f8  sw          $zero, -0x5F08($gp)
    ctx->pc = 0x248614u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 0));
    // 0x248618: 0x24e20800  addiu       $v0, $a3, 0x800
    ctx->pc = 0x248618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2048));
    // 0x24861c: 0x0  nop
    ctx->pc = 0x24861cu;
    // NOP
label_248620:
    // 0x248620: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x248620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x248624: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x248624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x248628: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x248628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x24862c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x24862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x248630: 0x0  nop
    ctx->pc = 0x248630u;
    // NOP
    // 0x248634: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x248634u;
    {
        const bool branch_taken_0x248634 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x248634) {
            ctx->pc = 0x248620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248620;
        }
    }
    ctx->pc = 0x24863Cu;
    // 0x24863c: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x24863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x248640: 0xaf87b828  sw          $a3, -0x47D8($gp)
    ctx->pc = 0x248640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948904), GPR_U32(ctx, 7));
    // 0x248644: 0xaf82b82c  sw          $v0, -0x47D4($gp)
    ctx->pc = 0x248644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948908), GPR_U32(ctx, 2));
    // 0x248648: 0x3e00008  jr          $ra
    ctx->pc = 0x248648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248648u;
        // 0x24864c: 0xace0080c  sw          $zero, 0x80C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248650u;
}
