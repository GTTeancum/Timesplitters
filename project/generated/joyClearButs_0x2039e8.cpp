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

// Function: joyClearButs
// Address: 0x2039e8 - 0x203a88
void joyClearButs_0x2039e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyClearButs_0x2039e8");
#endif

    switch (ctx->pc) {
        case 0x203a14u: goto label_203a14;
        case 0x203a28u: goto label_203a28;
        default: break;
    }

    ctx->pc = 0x2039e8u;

    // 0x2039e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2039e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2039ec: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2039ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2039f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2039f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2039f4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2039f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2039f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2039f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2039fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2039fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203a04: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203A04u;
    {
        const bool branch_taken_0x203a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A04u;
        // 0x203a08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a04) {
            ctx->pc = 0x203A30u;
            goto label_203a30;
        }
    }
    ctx->pc = 0x203A0Cu;
    // 0x203a0c: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203A0Cu;
    SET_GPR_U32(ctx, 31, 0x203A14u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203A0Cu, 0x203A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A14u;
label_203a14:
    // 0x203a14: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x203a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x203a18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203A18u;
    {
        const bool branch_taken_0x203a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A18u;
        // 0x203a1c: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a18) {
            ctx->pc = 0x203A34u;
            goto label_203a34;
        }
    }
    ctx->pc = 0x203A20u;
    // 0x203a20: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203A20u;
    SET_GPR_U32(ctx, 31, 0x203A28u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203A20u, 0x203A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A28u;
label_203a28:
    // 0x203a28: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x203a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x203a2c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x203a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_203a30:
    // 0x203a30: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_203a34:
    // 0x203a34: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x203a38: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x203a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x203a3c: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x203a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x203a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x203a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x203a44: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x203a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x203a48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203a4c: 0x2484c740  addiu       $a0, $a0, -0x38C0
    ctx->pc = 0x203a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    // 0x203a50: 0x113027  nor         $a2, $zero, $s1
    ctx->pc = 0x203a50u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x203a54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203a58: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x203a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x203a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203a60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x203a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x203a64: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x203a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x203a68: 0x8c440124  lw          $a0, 0x124($v0)
    ctx->pc = 0x203a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x203a6c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x203a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x203a70: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x203a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x203a74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x203a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203a78: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x203a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
    // 0x203a7c: 0xac440124  sw          $a0, 0x124($v0)
    ctx->pc = 0x203a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 4));
    // 0x203a80: 0x3e00008  jr          $ra
    ctx->pc = 0x203A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A80u;
        // 0x203a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203A88u;
}
