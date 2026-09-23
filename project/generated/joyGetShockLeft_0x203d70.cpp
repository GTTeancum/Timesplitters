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

// Function: joyGetShockLeft
// Address: 0x203d70 - 0x203dec
void joyGetShockLeft_0x203d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyGetShockLeft_0x203d70");
#endif

    switch (ctx->pc) {
        case 0x203d94u: goto label_203d94;
        case 0x203da8u: goto label_203da8;
        default: break;
    }

    ctx->pc = 0x203d70u;

    // 0x203d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203d74: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x203d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x203d78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203d7c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x203d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x203d80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203d84: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203D84u;
    {
        const bool branch_taken_0x203d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D84u;
        // 0x203d88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d84) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203D8Cu;
    // 0x203d8c: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203D8Cu;
    SET_GPR_U32(ctx, 31, 0x203D94u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203D8Cu, 0x203D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D94u;
label_203d94:
    // 0x203d94: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x203d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x203d98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203D98u;
    {
        const bool branch_taken_0x203d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D98u;
        // 0x203d9c: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d98) {
            ctx->pc = 0x203DB4u;
            goto label_203db4;
        }
    }
    ctx->pc = 0x203DA0u;
    // 0x203da0: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203DA0u;
    SET_GPR_U32(ctx, 31, 0x203DA8u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203DA0u, 0x203DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DA8u;
label_203da8:
    // 0x203da8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x203da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x203dac: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x203dacu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_203db0:
    // 0x203db0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_203db4:
    // 0x203db4: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x203db4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x203db8: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x203db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x203dbc: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x203dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x203dc0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x203dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x203dc4: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x203dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x203dc8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x203dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203dcc: 0x2484c740  addiu       $a0, $a0, -0x38C0
    ctx->pc = 0x203dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    // 0x203dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203dd4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x203dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x203dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203ddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203de0: 0x90620141  lbu         $v0, 0x141($v1)
    ctx->pc = 0x203de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 321)));
    // 0x203de4: 0x3e00008  jr          $ra
    ctx->pc = 0x203DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DE4u;
        // 0x203de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203DECu;
}
