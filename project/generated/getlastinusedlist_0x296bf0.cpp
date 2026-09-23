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

// Function: getlastinusedlist
// Address: 0x296bf0 - 0x296c3c
void getlastinusedlist_0x296bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getlastinusedlist_0x296bf0");
#endif

    switch (ctx->pc) {
        case 0x296c18u: goto label_296c18;
        default: break;
    }

    ctx->pc = 0x296bf0u;

    // 0x296bf0: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x296bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x296bf4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x296bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x296bf8: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x296bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x296bfc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x296bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x296c00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x296c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x296c04: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x296C04u;
    {
        const bool branch_taken_0x296c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c04) {
            ctx->pc = 0x296C34u;
            goto label_296c34;
        }
    }
    ctx->pc = 0x296C0Cu;
    // 0x296c0c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x296c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x296c10: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x296C10u;
    {
        const bool branch_taken_0x296c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c10) {
            ctx->pc = 0x296C34u;
            goto label_296c34;
        }
    }
    ctx->pc = 0x296C18u;
label_296c18:
    // 0x296c18: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x296c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c1c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x296c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x296c20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x296c20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c24: 0x0  nop
    ctx->pc = 0x296c24u;
    // NOP
    // 0x296c28: 0x0  nop
    ctx->pc = 0x296c28u;
    // NOP
    // 0x296c2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296C2Cu;
    {
        const bool branch_taken_0x296c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296c2c) {
            ctx->pc = 0x296C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296c18;
        }
    }
    ctx->pc = 0x296C34u;
label_296c34:
    // 0x296c34: 0x3e00008  jr          $ra
    ctx->pc = 0x296C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C34u;
        // 0x296c38: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296C3Cu;
}
