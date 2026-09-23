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

// Function: lvGetLevelSetup
// Address: 0x227b90 - 0x227c1c
void lvGetLevelSetup_0x227b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetLevelSetup_0x227b90");
#endif

    switch (ctx->pc) {
        case 0x227bf8u: goto label_227bf8;
        case 0x227c08u: goto label_227c08;
        default: break;
    }

    ctx->pc = 0x227b90u;

    // 0x227b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227b94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x227b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227b9c: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x227b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x227ba0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227BA0u;
    {
        const bool branch_taken_0x227ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BA0u;
        // 0x227ba4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ba0) {
            ctx->pc = 0x227BC4u;
            goto label_227bc4;
        }
    }
    ctx->pc = 0x227BA8u;
    // 0x227ba8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x227ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x227bac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x227BACu;
    {
        const bool branch_taken_0x227bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BACu;
        // 0x227bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bac) {
            ctx->pc = 0x227C0Cu;
            goto label_227c0c;
        }
    }
    ctx->pc = 0x227BB4u;
    // 0x227bb4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227BB4u;
    {
        const bool branch_taken_0x227bb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x227BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BB4u;
        // 0x227bb8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bb4) {
            ctx->pc = 0x227BD8u;
            goto label_227bd8;
        }
    }
    ctx->pc = 0x227BBCu;
    // 0x227bbc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x227BBCu;
    {
        const bool branch_taken_0x227bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BBCu;
        // 0x227bc0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bbc) {
            ctx->pc = 0x227BE4u;
            goto label_227be4;
        }
    }
    ctx->pc = 0x227BC4u;
label_227bc4:
    // 0x227bc4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x227bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x227bc8: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x227BC8u;
    {
        const bool branch_taken_0x227bc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x227BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BC8u;
        // 0x227bcc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bc8) {
            ctx->pc = 0x227C0Cu;
            goto label_227c0c;
        }
    }
    ctx->pc = 0x227BD0u;
    // 0x227bd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x227BD0u;
    {
        const bool branch_taken_0x227bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BD0u;
        // 0x227bd4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bd0) {
            ctx->pc = 0x227BE4u;
            goto label_227be4;
        }
    }
    ctx->pc = 0x227BD8u;
label_227bd8:
    // 0x227bd8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227bdc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x227BDCu;
    {
        const bool branch_taken_0x227bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BDCu;
        // 0x227be0: 0x24433d28  addiu       $v1, $v0, 0x3D28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bdc) {
            ctx->pc = 0x227C0Cu;
            goto label_227c0c;
        }
    }
    ctx->pc = 0x227BE4u;
label_227be4:
    // 0x227be4: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x227be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x227be8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227BE8u;
    {
        const bool branch_taken_0x227be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x227be8) {
            ctx->pc = 0x227C00u;
            goto label_227c00;
        }
    }
    ctx->pc = 0x227BF0u;
    // 0x227bf0: 0xc089ebc  jal         func_227AF0
    ctx->pc = 0x227BF0u;
    SET_GPR_U32(ctx, 31, 0x227BF8u);
    ctx->pc = 0x227BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BF0u;
    // 0x227bf4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227AF0u, 0x227BF0u, 0x227BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BF8u;
label_227bf8:
    // 0x227bf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x227BF8u;
    {
        const bool branch_taken_0x227bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BF8u;
        // 0x227bfc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bf8) {
            ctx->pc = 0x227C0Cu;
            goto label_227c0c;
        }
    }
    ctx->pc = 0x227C00u;
label_227c00:
    // 0x227c00: 0xc089e6e  jal         func_2279B8
    ctx->pc = 0x227C00u;
    SET_GPR_U32(ctx, 31, 0x227C08u);
    ctx->pc = 0x227C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C00u;
    // 0x227c04: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2279B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2279B8u, 0x227C00u, 0x227C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C08u;
label_227c08:
    // 0x227c08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x227c08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227c0c:
    // 0x227c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227c10: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x227c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c14: 0x3e00008  jr          $ra
    ctx->pc = 0x227C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C14u;
        // 0x227c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227C1Cu;
}
