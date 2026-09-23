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

// Function: joyBut
// Address: 0x203860 - 0x2038e8
void joyBut_0x203860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyBut_0x203860");
#endif

    switch (ctx->pc) {
        case 0x203884u: goto label_203884;
        case 0x203898u: goto label_203898;
        default: break;
    }

    ctx->pc = 0x203860u;

    // 0x203860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203864: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x203864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x203868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20386c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x20386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x203870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203874: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203874u;
    {
        const bool branch_taken_0x203874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203874u;
        // 0x203878: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203874) {
            ctx->pc = 0x2038A0u;
            goto label_2038a0;
        }
    }
    ctx->pc = 0x20387Cu;
    // 0x20387c: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20387Cu;
    SET_GPR_U32(ctx, 31, 0x203884u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20387Cu, 0x203884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203884u;
label_203884:
    // 0x203884: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x203884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x203888: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203888u;
    {
        const bool branch_taken_0x203888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203888u;
        // 0x20388c: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203888) {
            ctx->pc = 0x2038A4u;
            goto label_2038a4;
        }
    }
    ctx->pc = 0x203890u;
    // 0x203890: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203890u;
    SET_GPR_U32(ctx, 31, 0x203898u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203890u, 0x203898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203898u;
label_203898:
    // 0x203898: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x203898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x20389c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x20389cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2038a0:
    // 0x2038a0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2038a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_2038a4:
    // 0x2038a4: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2038a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2038a8: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x2038a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x2038ac: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x2038acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2038b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2038b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2038b4: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x2038b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x2038b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2038b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2038bc: 0x2484c740  addiu       $a0, $a0, -0x38C0
    ctx->pc = 0x2038bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    // 0x2038c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2038c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2038c4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2038c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2038c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2038c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2038cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2038ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2038d0: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x2038d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x2038d4: 0x8c640120  lw          $a0, 0x120($v1)
    ctx->pc = 0x2038d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x2038d8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2038d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2038dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2038dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2038e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2038E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2038E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038E0u;
        // 0x2038e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2038E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2038E8u;
}
