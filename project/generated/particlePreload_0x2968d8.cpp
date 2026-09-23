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

// Function: particlePreload
// Address: 0x2968d8 - 0x296924
void particlePreload_0x2968d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particlePreload_0x2968d8");
#endif

    switch (ctx->pc) {
        case 0x2968f8u: goto label_2968f8;
        case 0x296908u: goto label_296908;
        default: break;
    }

    ctx->pc = 0x2968d8u;

    // 0x2968d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2968d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2968dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2968dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2968e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2968e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2968e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2968e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2968e8: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x2968e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2968ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2968ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2968f0: 0x24509810  addiu       $s0, $v0, -0x67F0
    ctx->pc = 0x2968f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940688));
    // 0x2968f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2968f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x369810u));
label_2968f8:
    // 0x2968f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2968f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968fc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2968fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x296900: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x296900u;
    SET_GPR_U32(ctx, 31, 0x296908u);
    ctx->pc = 0x296904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296900u;
    // 0x296904: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x296900u, 0x296908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296908u;
label_296908:
    // 0x296908: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x296908u;
    {
        const bool branch_taken_0x296908 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x296908) {
            ctx->pc = 0x29690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296908u;
            // 0x29690c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2968F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2968f8;
        }
    }
    ctx->pc = 0x296910u;
    // 0x296910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296914: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29691c: 0x3e00008  jr          $ra
    ctx->pc = 0x29691Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29691Cu;
        // 0x296920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29691Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296924u;
}
