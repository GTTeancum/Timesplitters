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

// Function: levelAvailSTORY
// Address: 0x224d58 - 0x224dcc
void levelAvailSTORY_0x224d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("levelAvailSTORY_0x224d58");
#endif

    switch (ctx->pc) {
        case 0x224da0u: goto label_224da0;
        case 0x224db4u: goto label_224db4;
        default: break;
    }

    ctx->pc = 0x224d58u;

    // 0x224d58: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x224d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x224d5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224d60: 0x8043df88  lb          $v1, -0x2078($v0)
    ctx->pc = 0x224d60u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x31DF88u));
    // 0x224d64: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x224D64u;
    {
        const bool branch_taken_0x224d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D64u;
        // 0x224d68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d64) {
            ctx->pc = 0x224DBCu;
            goto label_224dbc;
        }
    }
    ctx->pc = 0x224D6Cu;
    // 0x224d6c: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x224d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x224d70: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x224d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x224d74: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x224D74u;
    {
        const bool branch_taken_0x224d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D74u;
        // 0x224d78: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d74) {
            ctx->pc = 0x224DBCu;
            goto label_224dbc;
        }
    }
    ctx->pc = 0x224D7Cu;
    // 0x224d7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224d80: 0x24420b30  addiu       $v0, $v0, 0xB30
    ctx->pc = 0x224d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2864));
    // 0x224d84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224d88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224d8c: 0x800008  jr          $a0
    ctx->pc = 0x224D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224D94u: goto label_224d94;
            case 0x224DA8u: goto label_224da8;
            case 0x224DBCu: goto label_224dbc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224D8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224D94u;
label_224d94:
    // 0x224d94: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224d98: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224D98u;
    SET_GPR_U32(ctx, 31, 0x224DA0u);
    ctx->pc = 0x224D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D98u;
    // 0x224d9c: 0x24843728  addiu       $a0, $a0, 0x3728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224D98u, 0x224DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224DA0u;
label_224da0:
    // 0x224da0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x224DA0u;
    {
        const bool branch_taken_0x224da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DA0u;
        // 0x224da4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224da0) {
            ctx->pc = 0x224DC4u;
            goto label_224dc4;
        }
    }
    ctx->pc = 0x224DA8u;
label_224da8:
    // 0x224da8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224dac: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224DACu;
    SET_GPR_U32(ctx, 31, 0x224DB4u);
    ctx->pc = 0x224DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224DACu;
    // 0x224db0: 0x24843738  addiu       $a0, $a0, 0x3738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224DACu, 0x224DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224DB4u;
label_224db4:
    // 0x224db4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x224DB4u;
    {
        const bool branch_taken_0x224db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DB4u;
        // 0x224db8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224db4) {
            ctx->pc = 0x224DC4u;
            goto label_224dc4;
        }
    }
    ctx->pc = 0x224DBCu;
label_224dbc:
    // 0x224dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224dc4:
    // 0x224dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x224DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DC4u;
        // 0x224dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224DCCu;
}
