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

// Function: getmostpowerfulcombo
// Address: 0x28d920 - 0x28d9b4
void getmostpowerfulcombo_0x28d920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getmostpowerfulcombo_0x28d920");
#endif

    switch (ctx->pc) {
        case 0x28d958u: goto label_28d958;
        case 0x28d970u: goto label_28d970;
        default: break;
    }

    ctx->pc = 0x28d920u;

    // 0x28d920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28d920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28d924: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x28d924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x28d928: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28d928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28d92c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28d930: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28d930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d934: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28d938: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28d938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d93c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28d93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28d940: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x28d940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28d944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28d948: 0x245190f8  addiu       $s1, $v0, -0x6F08
    ctx->pc = 0x28d948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938872));
    // 0x28d94c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28d94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28d950: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28d950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d954: 0x0  nop
    ctx->pc = 0x28d954u;
    // NOP
label_28d958:
    // 0x28d958: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x28d958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28d95c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x28d95cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x28d960: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28D960u;
    {
        const bool branch_taken_0x28d960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D960u;
        // 0x28d964: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d960) {
            ctx->pc = 0x28D980u;
            goto label_28d980;
        }
    }
    ctx->pc = 0x28D968u;
    // 0x28d968: 0xc0a530c  jal         func_294C30
    ctx->pc = 0x28D968u;
    SET_GPR_U32(ctx, 31, 0x28D970u);
    ctx->pc = 0x28D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D968u;
    // 0x28d96c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294C30u, 0x28D968u, 0x28D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D970u;
label_28d970:
    // 0x28d970: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D970u;
    {
        const bool branch_taken_0x28d970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d970) {
            ctx->pc = 0x28D974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D970u;
            // 0x28d974: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D984u;
            goto label_28d984;
        }
    }
    ctx->pc = 0x28D978u;
    // 0x28d978: 0x86320000  lh          $s2, 0x0($s1)
    ctx->pc = 0x28d978u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28d97c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x28d97cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d980:
    // 0x28d980: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28d980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d984:
    // 0x28d984: 0x2a020021  slti        $v0, $s0, 0x21
    ctx->pc = 0x28d984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x28d988: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x28D988u;
    {
        const bool branch_taken_0x28d988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D988u;
        // 0x28d98c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d988) {
            ctx->pc = 0x28D958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d958;
        }
    }
    ctx->pc = 0x28D990u;
    // 0x28d990: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28d990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d994: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28d994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d998: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28d998u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d99c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28d99cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d9a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28d9a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d9a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28d9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d9a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x28D9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9ACu;
        // 0x28d9b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D9B4u;
}
