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

// Function: ImageLoad
// Address: 0x2b9bf0 - 0x2b9c90
void ImageLoad_0x2b9bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImageLoad_0x2b9bf0");
#endif

    switch (ctx->pc) {
        case 0x2b9c0cu: goto label_2b9c0c;
        default: break;
    }

    ctx->pc = 0x2b9bf0u;

    // 0x2b9bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b9bf4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b9bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b9bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9bfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b9c04: 0xc0ae6e6  jal         func_2B9B98
    ctx->pc = 0x2B9C04u;
    SET_GPR_U32(ctx, 31, 0x2B9C0Cu);
    ctx->pc = 0x2B9C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C04u;
    // 0x2b9c08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9B98u, 0x2B9C04u, 0x2B9C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C0Cu;
label_2b9c0c:
    // 0x2b9c0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b9c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b9c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b9c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9c18: 0x2cc30008  sltiu       $v1, $a2, 0x8
    ctx->pc = 0x2b9c18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b9c1c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B9C1Cu;
    {
        const bool branch_taken_0x2b9c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C1Cu;
        // 0x2b9c20: 0xa2020025  sb          $v0, 0x25($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c1c) {
            ctx->pc = 0x2B9C78u;
            goto label_2b9c78;
        }
    }
    ctx->pc = 0x2B9C24u;
    // 0x2b9c24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b9c28: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2b9c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b9c2c: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x2b9c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
    // 0x2b9c30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b9c34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9c38: 0x800008  jr          $a0
    ctx->pc = 0x2B9C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9C40u: goto label_2b9c40;
            case 0x2B9C5Cu: goto label_2b9c5c;
            case 0x2B9C78u: goto label_2b9c78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9C38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B9C40u;
label_2b9c40:
    // 0x2b9c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9c4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b9c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9c54: 0x80ae594  j           func_2B9650
    ctx->pc = 0x2B9C54u;
    ctx->pc = 0x2B9C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C54u;
    // 0x2b9c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9650u;
    OpenRGB_0x2b9650(rdram, ctx, runtime); return;
    ctx->pc = 0x2B9C5Cu;
label_2b9c5c:
    // 0x2b9c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9c68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b9c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9c70: 0x80ae460  j           func_2B9180
    ctx->pc = 0x2B9C70u;
    ctx->pc = 0x2B9C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C70u;
    // 0x2b9c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9180u;
    OpenXPM_0x2b9180(rdram, ctx, runtime); return;
    ctx->pc = 0x2B9C78u;
label_2b9c78:
    // 0x2b9c78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9c7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9c80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b9c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9c88: 0x80b8690  j           func_2E1A40
    ctx->pc = 0x2B9C88u;
    ctx->pc = 0x2B9C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C88u;
    // 0x2b9c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    exit_0x2e1a40(rdram, ctx, runtime); return;
    ctx->pc = 0x2B9C90u;
}
