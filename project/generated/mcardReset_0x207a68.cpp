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

// Function: mcardReset
// Address: 0x207a68 - 0x207ac8
void mcardReset_0x207a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardReset_0x207a68");
#endif

    switch (ctx->pc) {
        case 0x207a9cu: goto label_207a9c;
        case 0x207ab4u: goto label_207ab4;
        default: break;
    }

    ctx->pc = 0x207a68u;

    // 0x207a68: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x207a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x207a6c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x207a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x207a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207a74: 0x24429c20  addiu       $v0, $v0, -0x63E0
    ctx->pc = 0x207a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941728));
    // 0x207a78: 0x24639c68  addiu       $v1, $v1, -0x6398
    ctx->pc = 0x207a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941800));
    // 0x207a7c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x207a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x207a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207a84: 0x24849c78  addiu       $a0, $a0, -0x6388
    ctx->pc = 0x207a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941816));
    // 0x207a88: 0xaf82b660  sw          $v0, -0x49A0($gp)
    ctx->pc = 0x207a88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948448), GPR_U32(ctx, 2));
    // 0x207a8c: 0xaf83b664  sw          $v1, -0x499C($gp)
    ctx->pc = 0x207a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948452), GPR_U32(ctx, 3));
    // 0x207a90: 0x2786b670  addiu       $a2, $gp, -0x4990
    ctx->pc = 0x207a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948464));
    // 0x207a94: 0xc0868fe  jal         func_21A3F8
    ctx->pc = 0x207A94u;
    SET_GPR_U32(ctx, 31, 0x207A9Cu);
    ctx->pc = 0x207A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207A94u;
    // 0x207a98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A3F8u, 0x207A94u, 0x207A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A9Cu;
label_207a9c:
    // 0x207a9c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x207a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x207aa0: 0xaf82b668  sw          $v0, -0x4998($gp)
    ctx->pc = 0x207aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948456), GPR_U32(ctx, 2));
    // 0x207aa4: 0x24849c90  addiu       $a0, $a0, -0x6370
    ctx->pc = 0x207aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941840));
    // 0x207aa8: 0x2786b674  addiu       $a2, $gp, -0x498C
    ctx->pc = 0x207aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948468));
    // 0x207aac: 0xc0868fe  jal         func_21A3F8
    ctx->pc = 0x207AACu;
    SET_GPR_U32(ctx, 31, 0x207AB4u);
    ctx->pc = 0x207AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207AACu;
    // 0x207ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A3F8u, 0x207AACu, 0x207AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207AB4u;
label_207ab4:
    // 0x207ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207ab8: 0xaf82b66c  sw          $v0, -0x4994($gp)
    ctx->pc = 0x207ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948460), GPR_U32(ctx, 2));
    // 0x207abc: 0xaf809bec  sw          $zero, -0x6414($gp)
    ctx->pc = 0x207abcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 0));
    // 0x207ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x207AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AC0u;
        // 0x207ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207AC8u;
}
