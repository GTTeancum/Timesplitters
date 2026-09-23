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

// Function: loadingPreload
// Address: 0x22a0c0 - 0x22a148
void loadingPreload_0x22a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loadingPreload_0x22a0c0");
#endif

    switch (ctx->pc) {
        case 0x22a0f8u: goto label_22a0f8;
        case 0x22a110u: goto label_22a110;
        case 0x22a11cu: goto label_22a11c;
        default: break;
    }

    ctx->pc = 0x22a0c0u;

    // 0x22a0c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a0c4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22a0c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22a0cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22a0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22a0d0: 0x2454d078  addiu       $s4, $v0, -0x2F88
    ctx->pc = 0x22a0d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955128));
    // 0x22a0d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a0d8: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x22a0d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x22a0dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a0e0: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x22a0e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22a0e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22a0e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a0e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a0f0: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x22a0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a0f4: 0x0  nop
    ctx->pc = 0x22a0f4u;
    // NOP
label_22a0f8:
    // 0x22a0f8: 0x26651698  addiu       $a1, $s3, 0x1698
    ctx->pc = 0x22a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 5784));
    // 0x22a0fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22a0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22a100: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a104: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x22a104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22a108: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x22A108u;
    SET_GPR_U32(ctx, 31, 0x22A110u);
    ctx->pc = 0x22A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A108u;
    // 0x22a10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x22A108u, 0x22A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A110u;
label_22a110:
    // 0x22a110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a114: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x22A114u;
    SET_GPR_U32(ctx, 31, 0x22A11Cu);
    ctx->pc = 0x22A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A114u;
    // 0x22a118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x22A114u, 0x22A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A11Cu;
label_22a11c:
    // 0x22a11c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x22a11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22a120: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x22A120u;
    {
        const bool branch_taken_0x22a120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a120) {
            ctx->pc = 0x22A124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A120u;
            // 0x22a124: 0x2321018  mult        $v0, $s1, $s2 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a0f8;
        }
    }
    ctx->pc = 0x22A128u;
    // 0x22a128: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22a128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a12c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22a12cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a130: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a134: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a138: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a13c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a140: 0x3e00008  jr          $ra
    ctx->pc = 0x22A140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A140u;
        // 0x22a144: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A148u;
}
