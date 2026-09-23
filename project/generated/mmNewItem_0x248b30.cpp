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

// Function: mmNewItem
// Address: 0x248b30 - 0x248b94
void mmNewItem_0x248b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmNewItem_0x248b30");
#endif

    switch (ctx->pc) {
        case 0x248b54u: goto label_248b54;
        default: break;
    }

    ctx->pc = 0x248b30u;

    // 0x248b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x248b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x248b34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x248b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x248b38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x248b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x248b3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x248b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248b44: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x248b44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x248b48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x248b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x248b4c: 0xc092278  jal         func_2489E0
    ctx->pc = 0x248B4Cu;
    SET_GPR_U32(ctx, 31, 0x248B54u);
    ctx->pc = 0x248B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B4Cu;
    // 0x248b50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2489E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489E0u, 0x248B4Cu, 0x248B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B54u;
label_248b54:
    // 0x248b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b58: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x248B58u;
    {
        const bool branch_taken_0x248b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x248b58) {
            ctx->pc = 0x248B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248B58u;
            // 0x248b5c: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248B68u;
            goto label_248b68;
        }
    }
    ctx->pc = 0x248B60u;
    // 0x248b60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x248B60u;
    {
        const bool branch_taken_0x248b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B60u;
        // 0x248b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b60) {
            ctx->pc = 0x248B7Cu;
            goto label_248b7c;
        }
    }
    ctx->pc = 0x248B68u;
label_248b68:
    // 0x248b68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x248b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b6c: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x248b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x248b70: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x248b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x248b74: 0xa4910000  sh          $s1, 0x0($a0)
    ctx->pc = 0x248b74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x248b78: 0xa4920002  sh          $s2, 0x2($a0)
    ctx->pc = 0x248b78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 18));
label_248b7c:
    // 0x248b7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x248b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248b80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x248b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248b84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x248b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x248B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B8Cu;
        // 0x248b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248B94u;
}
