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

// Function: __sinit
// Address: 0x2e48f0 - 0x2e497c
void ps2___sinit_0x2e48f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_0x2e48f0");
#endif

    switch (ctx->pc) {
        case 0x2e4930u: goto label_2e4930;
        case 0x2e4944u: goto label_2e4944;
        case 0x2e4958u: goto label_2e4958;
        default: break;
    }

    ctx->pc = 0x2e48f0u;

    // 0x2e48f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e48f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e48f4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e48f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e48f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e48fc: 0x244248d0  addiu       $v0, $v0, 0x48D0
    ctx->pc = 0x2e48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18640));
    // 0x2e4900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4904: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e4904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e4908: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x2e4908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x2e490c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e490cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e4910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4914: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2e4914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2e4918: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2e4918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2e491c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4920: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e4920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4924: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e4924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e4928: 0xc0b91ca  jal         func_2E4728
    ctx->pc = 0x2E4928u;
    SET_GPR_U32(ctx, 31, 0x2E4930u);
    ctx->pc = 0x2E492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4928u;
    // 0x2e492c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4728u, 0x2E4928u, 0x2E4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4930u;
label_2e4930:
    // 0x2e4930: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x2e4930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x2e4934: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e4934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4938: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e4938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e493c: 0xc0b91ca  jal         func_2E4728
    ctx->pc = 0x2E493Cu;
    SET_GPR_U32(ctx, 31, 0x2E4944u);
    ctx->pc = 0x2E4940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E493Cu;
    // 0x2e4940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4728u, 0x2E493Cu, 0x2E4944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4944u;
label_2e4944:
    // 0x2e4944: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x2e4944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x2e4948: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e4948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e494c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2e494cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e4950: 0xc0b91ca  jal         func_2E4728
    ctx->pc = 0x2E4950u;
    SET_GPR_U32(ctx, 31, 0x2E4958u);
    ctx->pc = 0x2E4954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4950u;
    // 0x2e4954: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4728u, 0x2E4950u, 0x2E4958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4958u;
label_2e4958:
    // 0x2e4958: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e495c: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x2e495cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x2e4960: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x2e4960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x2e4964: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x2e4964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x2e4968: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e4968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e496c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e496cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4974: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4974u;
        // 0x2e4978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E497Cu;
}
