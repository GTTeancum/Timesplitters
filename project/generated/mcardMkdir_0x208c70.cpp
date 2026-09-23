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

// Function: mcardMkdir
// Address: 0x208c70 - 0x208cfc
void mcardMkdir_0x208c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardMkdir_0x208c70");
#endif

    switch (ctx->pc) {
        case 0x208cb4u: goto label_208cb4;
        case 0x208cc4u: goto label_208cc4;
        default: break;
    }

    ctx->pc = 0x208c70u;

    // 0x208c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x208c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x208c74: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x208c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x208c78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x208c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x208c7c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x208c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208c84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x208c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x208c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x208c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c90: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208C90u;
    {
        const bool branch_taken_0x208c90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C90u;
        // 0x208c94: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c90) {
            ctx->pc = 0x208CA4u;
            goto label_208ca4;
        }
    }
    ctx->pc = 0x208C98u;
    // 0x208c98: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x208c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x208c9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208C9Cu;
    {
        const bool branch_taken_0x208c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C9Cu;
        // 0x208ca0: 0x2451a090  addiu       $s1, $v0, -0x5F70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c9c) {
            ctx->pc = 0x208CACu;
            goto label_208cac;
        }
    }
    ctx->pc = 0x208CA4u;
label_208ca4:
    // 0x208ca4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x208ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x208ca8: 0x2451a0a8  addiu       $s1, $v0, -0x5F58
    ctx->pc = 0x208ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942888));
label_208cac:
    // 0x208cac: 0xc081df6  jal         func_2077D8
    ctx->pc = 0x208CACu;
    SET_GPR_U32(ctx, 31, 0x208CB4u);
    ctx->pc = 0x208CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CACu;
    // 0x208cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2077D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2077D8u, 0x208CACu, 0x208CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CB4u;
label_208cb4:
    // 0x208cb4: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x208cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x208cb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x208cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208cbc: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x208CBCu;
    SET_GPR_U32(ctx, 31, 0x208CC4u);
    ctx->pc = 0x208CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CBCu;
    // 0x208cc0: 0x24842940  addiu       $a0, $a0, 0x2940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x208CBCu, 0x208CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CC4u;
label_208cc4:
    // 0x208cc4: 0xaf90b65c  sw          $s0, -0x49A4($gp)
    ctx->pc = 0x208cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948444), GPR_U32(ctx, 16));
    // 0x208cc8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x208cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x208ccc: 0xaf929c0c  sw          $s2, -0x63F4($gp)
    ctx->pc = 0x208cccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941708), GPR_U32(ctx, 18));
    // 0x208cd0: 0xaf939c10  sw          $s3, -0x63F0($gp)
    ctx->pc = 0x208cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941712), GPR_U32(ctx, 19));
    // 0x208cd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x208cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208cd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x208cd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208cdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x208cdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208ce0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x208ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208ce8: 0xaf839bec  sw          $v1, -0x6414($gp)
    ctx->pc = 0x208ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 3));
    // 0x208cec: 0xaf80b678  sw          $zero, -0x4988($gp)
    ctx->pc = 0x208cecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948472), GPR_U32(ctx, 0));
    // 0x208cf0: 0xaf809be8  sw          $zero, -0x6418($gp)
    ctx->pc = 0x208cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 0));
    // 0x208cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x208CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CF4u;
        // 0x208cf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208CFCu;
}
