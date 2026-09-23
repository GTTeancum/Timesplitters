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

// Function: GetControllerNumber
// Address: 0x204390 - 0x2043e4
void GetControllerNumber_0x204390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetControllerNumber_0x204390");
#endif

    switch (ctx->pc) {
        case 0x2043a4u: goto label_2043a4;
        case 0x2043b8u: goto label_2043b8;
        default: break;
    }

    ctx->pc = 0x204390u;

    // 0x204390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20439c: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20439Cu;
    SET_GPR_U32(ctx, 31, 0x2043A4u);
    ctx->pc = 0x2043A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20439Cu;
    // 0x2043a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20439Cu, 0x2043A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043A4u;
label_2043a4:
    // 0x2043a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2043a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2043a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2043A8u;
    {
        const bool branch_taken_0x2043a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043A8u;
        // 0x2043ac: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043a8) {
            ctx->pc = 0x2043C4u;
            goto label_2043c4;
        }
    }
    ctx->pc = 0x2043B0u;
    // 0x2043b0: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2043B0u;
    SET_GPR_U32(ctx, 31, 0x2043B8u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2043B0u, 0x2043B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043B8u;
label_2043b8:
    // 0x2043b8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2043b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2043bc: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2043bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2043c0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2043c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_2043c4:
    // 0x2043c4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2043c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2043c8: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x2043c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x2043cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2043ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2043d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2043d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2043d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2043d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2043d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2043d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2043dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2043DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2043E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043DCu;
        // 0x2043e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2043DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2043E4u;
}
