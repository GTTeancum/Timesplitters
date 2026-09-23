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

// Function: changeToComboWithAmmo
// Address: 0x28dac8 - 0x28db18
void changeToComboWithAmmo_0x28dac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("changeToComboWithAmmo_0x28dac8");
#endif

    switch (ctx->pc) {
        case 0x28dae0u: goto label_28dae0;
        case 0x28daf0u: goto label_28daf0;
        case 0x28db04u: goto label_28db04;
        default: break;
    }

    ctx->pc = 0x28dac8u;

    // 0x28dac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28dac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28dacc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28daccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28dad0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28dad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28dad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28dad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dad8: 0xc0a5414  jal         func_295050
    ctx->pc = 0x28DAD8u;
    SET_GPR_U32(ctx, 31, 0x28DAE0u);
    ctx->pc = 0x28DADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAD8u;
    // 0x28dadc: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295050u, 0x28DAD8u, 0x28DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAE0u;
label_28dae0:
    // 0x28dae0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28DAE0u;
    {
        const bool branch_taken_0x28dae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAE0u;
        // 0x28dae4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dae0) {
            ctx->pc = 0x28DB0Cu;
            goto label_28db0c;
        }
    }
    ctx->pc = 0x28DAE8u;
    // 0x28dae8: 0xc0a3648  jal         func_28D920
    ctx->pc = 0x28DAE8u;
    SET_GPR_U32(ctx, 31, 0x28DAF0u);
    ctx->pc = 0x28DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAE8u;
    // 0x28daec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D920u, 0x28DAE8u, 0x28DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAF0u;
label_28daf0:
    // 0x28daf0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x28daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x28daf4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DAF4u;
    {
        const bool branch_taken_0x28daf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28daf4) {
            ctx->pc = 0x28DAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DAF4u;
            // 0x28daf8: 0xae000104  sw          $zero, 0x104($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DB08u;
            goto label_28db08;
        }
    }
    ctx->pc = 0x28DAFCu;
    // 0x28dafc: 0xc0a3648  jal         func_28D920
    ctx->pc = 0x28DAFCu;
    SET_GPR_U32(ctx, 31, 0x28DB04u);
    ctx->pc = 0x28DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAFCu;
    // 0x28db00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D920u, 0x28DAFCu, 0x28DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB04u;
label_28db04:
    // 0x28db04: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x28db04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_28db08:
    // 0x28db08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28db08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28db0c:
    // 0x28db0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28db0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28db10: 0x3e00008  jr          $ra
    ctx->pc = 0x28DB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB10u;
        // 0x28db14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB18u;
}
