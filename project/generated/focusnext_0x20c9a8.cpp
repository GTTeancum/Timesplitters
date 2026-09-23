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

// Function: focusnext
// Address: 0x20c9a8 - 0x20ca20
void focusnext_0x20c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("focusnext_0x20c9a8");
#endif

    switch (ctx->pc) {
        case 0x20c9d0u: goto label_20c9d0;
        default: break;
    }

    ctx->pc = 0x20c9a8u;

    // 0x20c9a8: 0x8f869c68  lw          $a2, -0x6398($gp)
    ctx->pc = 0x20c9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
    // 0x20c9ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c9b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20c9b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c9b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20c9b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c9b8: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x20c9b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20c9bc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x20c9bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c9c0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20C9C0u;
    {
        const bool branch_taken_0x20c9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9C0u;
        // 0x20c9c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9c0) {
            ctx->pc = 0x20CA14u;
            goto label_20ca14;
        }
    }
    ctx->pc = 0x20C9C8u;
    // 0x20c9c8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x20c9c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c9cc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x20c9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20c9d0:
    // 0x20c9d0: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x20c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x20c9d4: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x20c9d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x20c9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20c9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20c9dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C9DCu;
    {
        const bool branch_taken_0x20c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9DCu;
        // 0x20c9e0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9dc) {
            ctx->pc = 0x20C9FCu;
            goto label_20c9fc;
        }
    }
    ctx->pc = 0x20C9E4u;
    // 0x20c9e4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x20c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20c9e8: 0xa100a  movz        $v0, $zero, $t2
    ctx->pc = 0x20c9e8u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x20c9ec: 0x85280a  movz        $a1, $a0, $a1
    ctx->pc = 0x20c9ecu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x20c9f0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x20c9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x20c9f4: 0x47380a  movz        $a3, $v0, $a3
    ctx->pc = 0x20c9f4u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x20c9f8: 0x163500a  movz        $t2, $t3, $v1
    ctx->pc = 0x20c9f8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 11));
label_20c9fc:
    // 0x20c9fc: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x20c9fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20ca00: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20ca00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20ca04: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x20ca04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x20ca08: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x20ca08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20ca0c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x20CA0Cu;
    {
        const bool branch_taken_0x20ca0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA0Cu;
        // 0x20ca10: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca0c) {
            ctx->pc = 0x20C9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c9d0;
        }
    }
    ctx->pc = 0x20CA14u;
label_20ca14:
    // 0x20ca14: 0xe7280b  movn        $a1, $a3, $a3
    ctx->pc = 0x20ca14u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x20ca18: 0x3e00008  jr          $ra
    ctx->pc = 0x20CA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA18u;
        // 0x20ca1c: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CA20u;
}
