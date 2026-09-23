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

// Function: sceScfGetLanguage
// Address: 0x2e0958 - 0x2e09b8
void sceScfGetLanguage_0x2e0958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceScfGetLanguage_0x2e0958");
#endif

    switch (ctx->pc) {
        case 0x2e0968u: goto label_2e0968;
        case 0x2e0970u: goto label_2e0970;
        case 0x2e0988u: goto label_2e0988;
        default: break;
    }

    ctx->pc = 0x2e0958u;

    // 0x2e0958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e095c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0960: 0xc0b4074  jal         func_2D01D0
    ctx->pc = 0x2E0960u;
    SET_GPR_U32(ctx, 31, 0x2E0968u);
    ctx->pc = 0x2E0964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0960u;
    // 0x2e0964: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D01D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D01D0u, 0x2E0960u, 0x2E0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0968u;
label_2e0968:
    // 0x2e0968: 0xc0b8246  jal         func_2E0918
    ctx->pc = 0x2E0968u;
    SET_GPR_U32(ctx, 31, 0x2E0970u);
    ctx->pc = 0x2E0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0918u, 0x2E0968u, 0x2E0970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0970u;
label_2e0970:
    // 0x2e0970: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0970u;
    {
        const bool branch_taken_0x2e0970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0970u;
        // 0x2e0974: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0970) {
            ctx->pc = 0x2E0980u;
            goto label_2e0980;
        }
    }
    ctx->pc = 0x2E0978u;
    // 0x2e0978: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E0978u;
    {
        const bool branch_taken_0x2e0978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0978u;
        // 0x2e097c: 0x90423004  lbu         $v0, 0x3004($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0978) {
            ctx->pc = 0x2E09ACu;
            goto label_2e09ac;
        }
    }
    ctx->pc = 0x2E0980u;
label_2e0980:
    // 0x2e0980: 0xc0b4074  jal         func_2D01D0
    ctx->pc = 0x2E0980u;
    SET_GPR_U32(ctx, 31, 0x2E0988u);
    ctx->pc = 0x2E0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0980u;
    // 0x2e0984: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D01D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D01D0u, 0x2E0980u, 0x2E0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0988u;
label_2e0988:
    // 0x2e0988: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e0988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e098c: 0x31342  srl         $v0, $v1, 13
    ctx->pc = 0x2e098cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
    // 0x2e0990: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e0990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e0994: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0994u;
    {
        const bool branch_taken_0x2e0994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0994) {
            ctx->pc = 0x2E0998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0994u;
            // 0x2e0998: 0x31402  srl         $v0, $v1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E09A8u;
            goto label_2e09a8;
        }
    }
    ctx->pc = 0x2E099Cu;
    // 0x2e099c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2e099cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2e09a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E09A0u;
    {
        const bool branch_taken_0x2e09a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09A0u;
        // 0x2e09a4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09a0) {
            ctx->pc = 0x2E09ACu;
            goto label_2e09ac;
        }
    }
    ctx->pc = 0x2E09A8u;
label_2e09a8:
    // 0x2e09a8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2e09a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2e09ac:
    // 0x2e09ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e09acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e09b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E09B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09B0u;
        // 0x2e09b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E09B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E09B8u;
}
