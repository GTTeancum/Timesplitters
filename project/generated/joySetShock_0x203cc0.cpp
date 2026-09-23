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

// Function: joySetShock
// Address: 0x203cc0 - 0x203d70
void joySetShock_0x203cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joySetShock_0x203cc0");
#endif

    switch (ctx->pc) {
        case 0x203cf4u: goto label_203cf4;
        case 0x203d08u: goto label_203d08;
        default: break;
    }

    ctx->pc = 0x203cc0u;

    // 0x203cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x203cc4: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x203cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x203cc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x203cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x203ccc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x203cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x203cd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x203cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x203cd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x203cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203cdc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x203cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ce0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x203ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x203ce4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203CE4u;
    {
        const bool branch_taken_0x203ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CE4u;
        // 0x203ce8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ce4) {
            ctx->pc = 0x203D10u;
            goto label_203d10;
        }
    }
    ctx->pc = 0x203CECu;
    // 0x203cec: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203CECu;
    SET_GPR_U32(ctx, 31, 0x203CF4u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203CECu, 0x203CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CF4u;
label_203cf4:
    // 0x203cf4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x203cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x203cf8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203CF8u;
    {
        const bool branch_taken_0x203cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CF8u;
        // 0x203cfc: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cf8) {
            ctx->pc = 0x203D14u;
            goto label_203d14;
        }
    }
    ctx->pc = 0x203D00u;
    // 0x203d00: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203D00u;
    SET_GPR_U32(ctx, 31, 0x203D08u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203D00u, 0x203D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D08u;
label_203d08:
    // 0x203d08: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x203d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x203d0c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x203d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_203d10:
    // 0x203d10: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_203d14:
    // 0x203d14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x203d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x203d18: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x203d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x203d1c: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x203d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x203d20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x203d24: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x203d28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203d2c: 0x2a270080  slti        $a3, $s1, 0x80
    ctx->pc = 0x203d2cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x203d30: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x203d30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d34: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x203d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x203d38: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x203d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x203d3c: 0x227200b  movn        $a0, $s1, $a3
    ctx->pc = 0x203d3cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
    // 0x203d40: 0x2a450080  slti        $a1, $s2, 0x80
    ctx->pc = 0x203d40u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x203d44: 0x24c6c740  addiu       $a2, $a2, -0x38C0
    ctx->pc = 0x203d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952768));
    // 0x203d48: 0x245180b  movn        $v1, $s2, $a1
    ctx->pc = 0x203d48u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x203d4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x203d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203d50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x203d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203d54: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x203d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x203d58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x203d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203d60: 0xa0430141  sb          $v1, 0x141($v0)
    ctx->pc = 0x203d60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 321), (uint8_t)GPR_U32(ctx, 3));
    // 0x203d64: 0xa0440140  sb          $a0, 0x140($v0)
    ctx->pc = 0x203d64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 320), (uint8_t)GPR_U32(ctx, 4));
    // 0x203d68: 0x3e00008  jr          $ra
    ctx->pc = 0x203D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D68u;
        // 0x203d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203D70u;
}
