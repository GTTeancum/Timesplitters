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

// Function: musicStart
// Address: 0x205ad8 - 0x205b20
void musicStart_0x205ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicStart_0x205ad8");
#endif

    switch (ctx->pc) {
        case 0x205af8u: goto label_205af8;
        case 0x205b0cu: goto label_205b0c;
        default: break;
    }

    ctx->pc = 0x205ad8u;

    // 0x205ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205adc: 0x8f839b2c  lw          $v1, -0x64D4($gp)
    ctx->pc = 0x205adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941484)));
    // 0x205ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205ae4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205AE4u;
    {
        const bool branch_taken_0x205ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x205AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE4u;
        // 0x205ae8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ae4) {
            ctx->pc = 0x205B00u;
            goto label_205b00;
        }
    }
    ctx->pc = 0x205AECu;
    // 0x205aec: 0x34048060  ori         $a0, $zero, 0x8060
    ctx->pc = 0x205aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32864);
    // 0x205af0: 0xc08177a  jal         func_205DE8
    ctx->pc = 0x205AF0u;
    SET_GPR_U32(ctx, 31, 0x205AF8u);
    ctx->pc = 0x205AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AF0u;
    // 0x205af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DE8u, 0x205AF0u, 0x205AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AF8u;
label_205af8:
    // 0x205af8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x205AF8u;
    {
        const bool branch_taken_0x205af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AF8u;
        // 0x205afc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205af8) {
            ctx->pc = 0x205B10u;
            goto label_205b10;
        }
    }
    ctx->pc = 0x205B00u;
label_205b00:
    // 0x205b00: 0x34048050  ori         $a0, $zero, 0x8050
    ctx->pc = 0x205b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32848);
    // 0x205b04: 0xc08177a  jal         func_205DE8
    ctx->pc = 0x205B04u;
    SET_GPR_U32(ctx, 31, 0x205B0Cu);
    ctx->pc = 0x205B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B04u;
    // 0x205b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DE8u, 0x205B04u, 0x205B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B0Cu;
label_205b0c:
    // 0x205b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205b10:
    // 0x205b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205b14: 0xaf829b2c  sw          $v0, -0x64D4($gp)
    ctx->pc = 0x205b14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941484), GPR_U32(ctx, 2));
    // 0x205b18: 0x3e00008  jr          $ra
    ctx->pc = 0x205B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B18u;
        // 0x205b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205B20u;
}
