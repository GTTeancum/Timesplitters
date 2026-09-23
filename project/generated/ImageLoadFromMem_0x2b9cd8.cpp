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

// Function: ImageLoadFromMem
// Address: 0x2b9cd8 - 0x2b9d6c
void ImageLoadFromMem_0x2b9cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImageLoadFromMem_0x2b9cd8");
#endif

    switch (ctx->pc) {
        case 0x2b9cecu: goto label_2b9cec;
        default: break;
    }

    ctx->pc = 0x2b9cd8u;

    // 0x2b9cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9ce0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b9ce4: 0xc0ae724  jal         func_2B9C90
    ctx->pc = 0x2B9CE4u;
    SET_GPR_U32(ctx, 31, 0x2B9CECu);
    ctx->pc = 0x2B9CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CE4u;
    // 0x2b9ce8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9C90u, 0x2B9CE4u, 0x2B9CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CECu;
label_2b9cec:
    // 0x2b9cec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b9cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9cf0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b9cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b9cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9cf8: 0x2cc30008  sltiu       $v1, $a2, 0x8
    ctx->pc = 0x2b9cf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b9cfc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B9CFCu;
    {
        const bool branch_taken_0x2b9cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CFCu;
        // 0x2b9d00: 0xa2020025  sb          $v0, 0x25($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cfc) {
            ctx->pc = 0x2B9D58u;
            goto label_2b9d58;
        }
    }
    ctx->pc = 0x2B9D04u;
    // 0x2b9d04: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b9d08: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2b9d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b9d0c: 0x24429be0  addiu       $v0, $v0, -0x6420
    ctx->pc = 0x2b9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941664));
    // 0x2b9d10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b9d14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9d18: 0x800008  jr          $a0
    ctx->pc = 0x2B9D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9D20u: goto label_2b9d20;
            case 0x2B9D3Cu: goto label_2b9d3c;
            case 0x2B9D58u: goto label_2b9d58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9D18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B9D20u;
label_2b9d20:
    // 0x2b9d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9d24: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b9d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b9d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9d2c: 0x2484fcb0  addiu       $a0, $a0, -0x350
    ctx->pc = 0x2b9d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x2b9d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9d34: 0x80ae594  j           func_2B9650
    ctx->pc = 0x2B9D34u;
    ctx->pc = 0x2B9D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D34u;
    // 0x2b9d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9650u;
    OpenRGB_0x2b9650(rdram, ctx, runtime); return;
    ctx->pc = 0x2B9D3Cu;
label_2b9d3c:
    // 0x2b9d3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9d40: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b9d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b9d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9d48: 0x2484fcb0  addiu       $a0, $a0, -0x350
    ctx->pc = 0x2b9d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x2b9d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9d50: 0x80ae460  j           func_2B9180
    ctx->pc = 0x2B9D50u;
    ctx->pc = 0x2B9D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D50u;
    // 0x2b9d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9180u;
    OpenXPM_0x2b9180(rdram, ctx, runtime); return;
    ctx->pc = 0x2B9D58u;
label_2b9d58:
    // 0x2b9d58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9d5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9d64: 0x80b8690  j           func_2E1A40
    ctx->pc = 0x2B9D64u;
    ctx->pc = 0x2B9D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D64u;
    // 0x2b9d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    exit_0x2e1a40(rdram, ctx, runtime); return;
    ctx->pc = 0x2B9D6Cu;
}
