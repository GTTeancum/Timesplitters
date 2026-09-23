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

// Function: hudMessage
// Address: 0x2b0990 - 0x2b09e4
void hudMessage_0x2b0990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudMessage_0x2b0990");
#endif

    switch (ctx->pc) {
        case 0x2b09c8u: goto label_2b09c8;
        default: break;
    }

    ctx->pc = 0x2b0990u;

    // 0x2b0990: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x2b0990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x2b0994: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0998: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2b0998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b099c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b09a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b09a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b09a4: 0x2442f838  addiu       $v0, $v0, -0x7C8
    ctx->pc = 0x2b09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965304));
    // 0x2b09a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b09a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b09ac: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B09ACu;
    {
        const bool branch_taken_0x2b09ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09ACu;
        // 0x2b09b0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09ac) {
            ctx->pc = 0x2B09BCu;
            goto label_2b09bc;
        }
    }
    ctx->pc = 0x2B09B4u;
    // 0x2b09b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B09B4u;
    {
        const bool branch_taken_0x2b09b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09B4u;
        // 0x2b09b8: 0xae00015c  sw          $zero, 0x15C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09b4) {
            ctx->pc = 0x2B09D4u;
            goto label_2b09d4;
        }
    }
    ctx->pc = 0x2B09BCu;
label_2b09bc:
    // 0x2b09bc: 0x2604011c  addiu       $a0, $s0, 0x11C
    ctx->pc = 0x2b09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x2b09c0: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2B09C0u;
    SET_GPR_U32(ctx, 31, 0x2B09C8u);
    ctx->pc = 0x2B09C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B09C0u;
    // 0x2b09c4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2B09C0u, 0x2B09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09C8u;
label_2b09c8:
    // 0x2b09c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b09cc: 0xa200015b  sb          $zero, 0x15B($s0)
    ctx->pc = 0x2b09ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 347), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b09d0: 0xae03015c  sw          $v1, 0x15C($s0)
    ctx->pc = 0x2b09d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 3));
label_2b09d4:
    // 0x2b09d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b09d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b09d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b09d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b09dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B09DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09DCu;
        // 0x2b09e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B09DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B09E4u;
}
