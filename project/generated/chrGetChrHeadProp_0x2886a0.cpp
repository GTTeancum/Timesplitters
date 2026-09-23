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

// Function: chrGetChrHeadProp
// Address: 0x2886a0 - 0x288710
void chrGetChrHeadProp_0x2886a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrGetChrHeadProp_0x2886a0");
#endif

    switch (ctx->pc) {
        case 0x2886f8u: goto label_2886f8;
        default: break;
    }

    ctx->pc = 0x2886a0u;

    // 0x2886a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2886a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886a4: 0x8f829f54  lw          $v0, -0x60AC($gp)
    ctx->pc = 0x2886a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x2886a8: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x2886a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2886ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2886acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2886b0: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x2886b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2886b4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2886b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2886b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2886b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2886bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2886bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2886c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2886C0u;
    {
        const bool branch_taken_0x2886c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2886C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886C0u;
        // 0x2886c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886c0) {
            ctx->pc = 0x2886F0u;
            goto label_2886f0;
        }
    }
    ctx->pc = 0x2886C8u;
    // 0x2886c8: 0x24a3ffd8  addiu       $v1, $a1, -0x28
    ctx->pc = 0x2886c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
    // 0x2886cc: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x2886ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x2886d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2886D0u;
    {
        const bool branch_taken_0x2886d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886D0u;
        // 0x2886d4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886d0) {
            ctx->pc = 0x288700u;
            goto label_288700;
        }
    }
    ctx->pc = 0x2886D8u;
    // 0x2886d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2886d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2886dc: 0x244289b0  addiu       $v0, $v0, -0x7650
    ctx->pc = 0x2886dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937008));
    // 0x2886e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2886e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2886e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2886e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2886e8: 0x800008  jr          $a0
    ctx->pc = 0x2886E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2886F0u: goto label_2886f0;
            case 0x288700u: goto label_288700;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2886E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2886F0u;
label_2886f0:
    // 0x2886f0: 0xc0a2118  jal         func_288460
    ctx->pc = 0x2886F0u;
    SET_GPR_U32(ctx, 31, 0x2886F8u);
    ctx->pc = 0x2886F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2886F0u;
    // 0x2886f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288460u, 0x2886F0u, 0x2886F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886F8u;
label_2886f8:
    // 0x2886f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2886F8u;
    {
        const bool branch_taken_0x2886f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886F8u;
        // 0x2886fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886f8) {
            ctx->pc = 0x288708u;
            goto label_288708;
        }
    }
    ctx->pc = 0x288700u;
label_288700:
    // 0x288700: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_288708:
    // 0x288708: 0x3e00008  jr          $ra
    ctx->pc = 0x288708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288708u;
        // 0x28870c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288710u;
}
