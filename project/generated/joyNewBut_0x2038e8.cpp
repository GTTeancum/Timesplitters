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

// Function: joyNewBut
// Address: 0x2038e8 - 0x203964
void joyNewBut_0x2038e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyNewBut_0x2038e8");
#endif

    switch (ctx->pc) {
        case 0x20390cu: goto label_20390c;
        case 0x203920u: goto label_203920;
        default: break;
    }

    ctx->pc = 0x2038e8u;

    // 0x2038e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2038e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2038ec: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2038ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2038f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2038f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2038f4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2038f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2038f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2038f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2038fc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2038FCu;
    {
        const bool branch_taken_0x2038fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038FCu;
        // 0x203900: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038fc) {
            ctx->pc = 0x203928u;
            goto label_203928;
        }
    }
    ctx->pc = 0x203904u;
    // 0x203904: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203904u;
    SET_GPR_U32(ctx, 31, 0x20390Cu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203904u, 0x20390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20390Cu;
label_20390c:
    // 0x20390c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20390cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x203910: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203910u;
    {
        const bool branch_taken_0x203910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203910u;
        // 0x203914: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203910) {
            ctx->pc = 0x20392Cu;
            goto label_20392c;
        }
    }
    ctx->pc = 0x203918u;
    // 0x203918: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203918u;
    SET_GPR_U32(ctx, 31, 0x203920u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203918u, 0x203920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203920u;
label_203920:
    // 0x203920: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x203920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x203924: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x203924u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_203928:
    // 0x203928: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_20392c:
    // 0x20392c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x20392cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x203930: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x203930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x203934: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x203934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x203938: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x203938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20393c: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x20393cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x203940: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x203940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203944: 0x2484c740  addiu       $a0, $a0, -0x38C0
    ctx->pc = 0x203944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    // 0x203948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20394c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x20394cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x203950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203954: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203958: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x20395c: 0x3e00008  jr          $ra
    ctx->pc = 0x20395Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20395Cu;
        // 0x203960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20395Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203964u;
}
