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

// Function: mcardCheckDir
// Address: 0x208d00 - 0x208d6c
void mcardCheckDir_0x208d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardCheckDir_0x208d00");
#endif

    switch (ctx->pc) {
        case 0x208d34u: goto label_208d34;
        case 0x208d44u: goto label_208d44;
        default: break;
    }

    ctx->pc = 0x208d00u;

    // 0x208d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208d08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x208d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x208d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d10: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208D10u;
    {
        const bool branch_taken_0x208d10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D10u;
        // 0x208d14: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d10) {
            ctx->pc = 0x208D24u;
            goto label_208d24;
        }
    }
    ctx->pc = 0x208D18u;
    // 0x208d18: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x208d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x208d1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208D1Cu;
    {
        const bool branch_taken_0x208d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D1Cu;
        // 0x208d20: 0x2451a090  addiu       $s1, $v0, -0x5F70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d1c) {
            ctx->pc = 0x208D2Cu;
            goto label_208d2c;
        }
    }
    ctx->pc = 0x208D24u;
label_208d24:
    // 0x208d24: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x208d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x208d28: 0x2451a0a8  addiu       $s1, $v0, -0x5F58
    ctx->pc = 0x208d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942888));
label_208d2c:
    // 0x208d2c: 0xc081df6  jal         func_2077D8
    ctx->pc = 0x208D2Cu;
    SET_GPR_U32(ctx, 31, 0x208D34u);
    ctx->pc = 0x208D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D2Cu;
    // 0x208d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2077D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2077D8u, 0x208D2Cu, 0x208D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D34u;
label_208d34:
    // 0x208d34: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x208d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x208d38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x208d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d3c: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x208D3Cu;
    SET_GPR_U32(ctx, 31, 0x208D44u);
    ctx->pc = 0x208D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D3Cu;
    // 0x208d40: 0x24842940  addiu       $a0, $a0, 0x2940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x208D3Cu, 0x208D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D44u;
label_208d44:
    // 0x208d44: 0xaf90b65c  sw          $s0, -0x49A4($gp)
    ctx->pc = 0x208d44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948444), GPR_U32(ctx, 16));
    // 0x208d48: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x208d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x208d4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x208d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208d50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x208d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208d58: 0xaf839bec  sw          $v1, -0x6414($gp)
    ctx->pc = 0x208d58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 3));
    // 0x208d5c: 0xaf80b678  sw          $zero, -0x4988($gp)
    ctx->pc = 0x208d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948472), GPR_U32(ctx, 0));
    // 0x208d60: 0xaf809be8  sw          $zero, -0x6418($gp)
    ctx->pc = 0x208d60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 0));
    // 0x208d64: 0x3e00008  jr          $ra
    ctx->pc = 0x208D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D64u;
        // 0x208d68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208D6Cu;
}
