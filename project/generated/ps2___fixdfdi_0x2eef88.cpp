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

// Function: __fixdfdi
// Address: 0x2eef88 - 0x2eefe4
void ps2___fixdfdi_0x2eef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fixdfdi_0x2eef88");
#endif

    switch (ctx->pc) {
        case 0x2eefa8u: goto label_2eefa8;
        case 0x2eefb8u: goto label_2eefb8;
        case 0x2eefc0u: goto label_2eefc0;
        case 0x2eefd0u: goto label_2eefd0;
        default: break;
    }

    ctx->pc = 0x2eef88u;

    // 0x2eef88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eef88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eef8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2eef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2eef90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eef94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2eef94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eef98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2eef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2eefa0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2EEFA0u;
    SET_GPR_U32(ctx, 31, 0x2EEFA8u);
    ctx->pc = 0x2EEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEFA0u;
    // 0x2eefa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2EEFA0u, 0x2EEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFA8u;
label_2eefa8:
    // 0x2eefa8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EEFA8u;
    {
        const bool branch_taken_0x2eefa8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFA8u;
        // 0x2eefac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefa8) {
            ctx->pc = 0x2EEFC8u;
            goto label_2eefc8;
        }
    }
    ctx->pc = 0x2EEFB0u;
    // 0x2eefb0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2EEFB0u;
    SET_GPR_U32(ctx, 31, 0x2EEFB8u);
    ctx->pc = 0x2EEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEFB0u;
    // 0x2eefb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2EEFB0u, 0x2EEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFB8u;
label_2eefb8:
    // 0x2eefb8: 0xc0b869c  jal         func_2E1A70
    ctx->pc = 0x2EEFB8u;
    SET_GPR_U32(ctx, 31, 0x2EEFC0u);
    ctx->pc = 0x2EEFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEFB8u;
    // 0x2eefbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A70u, 0x2EEFB8u, 0x2EEFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFC0u;
label_2eefc0:
    // 0x2eefc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEFC0u;
    {
        const bool branch_taken_0x2eefc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFC0u;
        // 0x2eefc4: 0x2102f  dsubu       $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefc0) {
            ctx->pc = 0x2EEFD0u;
            goto label_2eefd0;
        }
    }
    ctx->pc = 0x2EEFC8u;
label_2eefc8:
    // 0x2eefc8: 0xc0b869c  jal         func_2E1A70
    ctx->pc = 0x2EEFC8u;
    SET_GPR_U32(ctx, 31, 0x2EEFD0u);
    ctx->pc = 0x2EEFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEFC8u;
    // 0x2eefcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A70u, 0x2EEFC8u, 0x2EEFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFD0u;
label_2eefd0:
    // 0x2eefd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2eefd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eefd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2eefd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eefd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eefd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eefdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFDCu;
        // 0x2eefe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEFE4u;
}
