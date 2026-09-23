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

// Function: addhour
// Address: 0x2e0fd0 - 0x2e103c
void addhour_0x2e0fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("addhour_0x2e0fd0");
#endif

    switch (ctx->pc) {
        case 0x2e0ffcu: goto label_2e0ffc;
        default: break;
    }

    ctx->pc = 0x2e0fd0u;

    // 0x2e0fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0fd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0fdc: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0FDCu;
    {
        const bool branch_taken_0x2e0fdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FDCu;
        // 0x2e0fe0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fdc) {
            ctx->pc = 0x2E0FFCu;
            goto label_2e0ffc;
        }
    }
    ctx->pc = 0x2E0FE4u;
    // 0x2e0fe4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e0fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e0fe8: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e0fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e0fec: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e0ff0: 0x24c6b730  addiu       $a2, $a2, -0x48D0
    ctx->pc = 0x2e0ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948656));
    // 0x2e0ff4: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E0FF4u;
    SET_GPR_U32(ctx, 31, 0x2E0FFCu);
    ctx->pc = 0x2E0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0FF4u;
    // 0x2e0ff8: 0x24050183  addiu       $a1, $zero, 0x183 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E0FF4u, 0x2E0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FFCu;
label_2e0ffc:
    // 0x2e0ffc: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2e0ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2e1000: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2e1000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e1004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1008: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e1008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e100c: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E100Cu;
    {
        const bool branch_taken_0x2e100c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E100Cu;
        // 0x2e1010: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e100c) {
            ctx->pc = 0x2E102Cu;
            goto label_2e102c;
        }
    }
    ctx->pc = 0x2E1014u;
    // 0x2e1014: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2e1014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e101c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e101cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1024: 0x80b8384  j           func_2E0E10
    ctx->pc = 0x2E1024u;
    ctx->pc = 0x2E1028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1024u;
    // 0x2e1028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E10u;
    adddate_0x2e0e10(rdram, ctx, runtime); return;
    ctx->pc = 0x2E102Cu;
label_2e102c:
    // 0x2e102c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e102cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1034: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1034u;
        // 0x2e1038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E103Cu;
}
