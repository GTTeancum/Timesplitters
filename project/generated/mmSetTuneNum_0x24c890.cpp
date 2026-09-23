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

// Function: mmSetTuneNum
// Address: 0x24c890 - 0x24c904
void mmSetTuneNum_0x24c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmSetTuneNum_0x24c890");
#endif

    switch (ctx->pc) {
        case 0x24c8c0u: goto label_24c8c0;
        case 0x24c8dcu: goto label_24c8dc;
        default: break;
    }

    ctx->pc = 0x24c890u;

    // 0x24c890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24c894: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24c894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24c898: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24c89c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24c8a0: 0x245366f8  addiu       $s3, $v0, 0x66F8
    ctx->pc = 0x24c8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 26360));
    // 0x24c8a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24c8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24c8a8: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x24c8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x24c8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c8b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c8b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24c8b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24c8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c8bc: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x24c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_24c8c0:
    // 0x24c8c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24c8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c8c4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24c8c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c8c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24c8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24c8cc: 0x14710003  bne         $v1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C8CCu;
    {
        const bool branch_taken_0x24c8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x24C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8CCu;
        // 0x24c8d0: 0x26446800  addiu       $a0, $s2, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8cc) {
            ctx->pc = 0x24C8DCu;
            goto label_24c8dc;
        }
    }
    ctx->pc = 0x24C8D4u;
    // 0x24c8d4: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x24C8D4u;
    SET_GPR_U32(ctx, 31, 0x24C8DCu);
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x24C8D4u, 0x24C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8DCu;
label_24c8dc:
    // 0x24c8dc: 0x2e020018  sltiu       $v0, $s0, 0x18
    ctx->pc = 0x24c8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x24c8e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24C8E0u;
    {
        const bool branch_taken_0x24c8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c8e0) {
            ctx->pc = 0x24C8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C8E0u;
            // 0x24c8e4: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c8c0;
        }
    }
    ctx->pc = 0x24C8E8u;
    // 0x24c8e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24c8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c8ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24c8ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c8f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24c8f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c8f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24c8f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c8f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x24C8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8FCu;
        // 0x24c900: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C904u;
}
