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

// Function: __sseek
// Address: 0x2e5a20 - 0x2e5a88
void ps2___sseek_0x2e5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sseek_0x2e5a20");
#endif

    switch (ctx->pc) {
        case 0x2e5a48u: goto label_2e5a48;
        default: break;
    }

    ctx->pc = 0x2e5a20u;

    // 0x2e5a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e5a24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2e5a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5a2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2e5a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e5a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e5a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a3c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2e5a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e5a40: 0xc0baef4  jal         func_2EBBD0
    ctx->pc = 0x2E5A40u;
    SET_GPR_U32(ctx, 31, 0x2E5A48u);
    ctx->pc = 0x2E5A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A40u;
    // 0x2e5a44: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBBD0u, 0x2E5A40u, 0x2E5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A48u;
label_2e5a48:
    // 0x2e5a48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e5a50: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5A50u;
    {
        const bool branch_taken_0x2e5a50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A50u;
        // 0x2e5a54: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a50) {
            ctx->pc = 0x2E5A60u;
            goto label_2e5a60;
        }
    }
    ctx->pc = 0x2E5A58u;
    // 0x2e5a58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5A58u;
    {
        const bool branch_taken_0x2e5a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A58u;
        // 0x2e5a5c: 0x3042efff  andi        $v0, $v0, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a58) {
            ctx->pc = 0x2E5A70u;
            goto label_2e5a70;
        }
    }
    ctx->pc = 0x2E5A60u;
label_2e5a60:
    // 0x2e5a60: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2e5a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e5a64: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e5a64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e5a68: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x2e5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2e5a6c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2e5a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_2e5a70:
    // 0x2e5a70: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2e5a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e5a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e5a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5a80: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A80u;
        // 0x2e5a84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5A88u;
}
