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

// Function: subhour
// Address: 0x2e1040 - 0x2e10a8
void subhour_0x2e1040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("subhour_0x2e1040");
#endif

    switch (ctx->pc) {
        case 0x2e106cu: goto label_2e106c;
        default: break;
    }

    ctx->pc = 0x2e1040u;

    // 0x2e1040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e104c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E104Cu;
    {
        const bool branch_taken_0x2e104c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E104Cu;
        // 0x2e1050: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e104c) {
            ctx->pc = 0x2E106Cu;
            goto label_2e106c;
        }
    }
    ctx->pc = 0x2E1054u;
    // 0x2e1054: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e1054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e1058: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e1058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e105c: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e1060: 0x24c6b730  addiu       $a2, $a2, -0x48D0
    ctx->pc = 0x2e1060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948656));
    // 0x2e1064: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E1064u;
    SET_GPR_U32(ctx, 31, 0x2E106Cu);
    ctx->pc = 0x2E1068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1064u;
    // 0x2e1068: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E1064u, 0x2E106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E106Cu;
label_2e106c:
    // 0x2e106c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2e106cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2e1070: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1070u;
    {
        const bool branch_taken_0x2e1070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1070u;
        // 0x2e1074: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1070) {
            ctx->pc = 0x2E1094u;
            goto label_2e1094;
        }
    }
    ctx->pc = 0x2E1078u;
    // 0x2e1078: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2e1078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2e107c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1080: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2e1080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e1084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e108c: 0x80b83be  j           func_2E0EF8
    ctx->pc = 0x2E108Cu;
    ctx->pc = 0x2E1090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E108Cu;
    // 0x2e1090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0EF8u;
    subdate_0x2e0ef8(rdram, ctx, runtime); return;
    ctx->pc = 0x2E1094u;
label_2e1094:
    // 0x2e1094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e1094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1098: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2e1098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e109c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e109cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e10a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E10A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10A0u;
        // 0x2e10a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E10A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E10A8u;
}
