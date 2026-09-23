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

// Function: joyClearAll
// Address: 0x203a88 - 0x203b30
void joyClearAll_0x203a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyClearAll_0x203a88");
#endif

    switch (ctx->pc) {
        case 0x203ab0u: goto label_203ab0;
        case 0x203ac4u: goto label_203ac4;
        case 0x203ae0u: goto label_203ae0;
        default: break;
    }

    ctx->pc = 0x203a88u;

    // 0x203a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203a8c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x203a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x203a90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203a94: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x203a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x203a98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203aa0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x203AA0u;
    {
        const bool branch_taken_0x203aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA0u;
        // 0x203aa4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203aa0) {
            ctx->pc = 0x203AD0u;
            goto label_203ad0;
        }
    }
    ctx->pc = 0x203AA8u;
    // 0x203aa8: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203AA8u;
    SET_GPR_U32(ctx, 31, 0x203AB0u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203AA8u, 0x203AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AB0u;
label_203ab0:
    // 0x203ab0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x203ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x203ab4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203AB4u;
    {
        const bool branch_taken_0x203ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AB4u;
        // 0x203ab8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ab4) {
            ctx->pc = 0x203AD4u;
            goto label_203ad4;
        }
    }
    ctx->pc = 0x203ABCu;
    // 0x203abc: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203ABCu;
    SET_GPR_U32(ctx, 31, 0x203AC4u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203ABCu, 0x203AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AC4u;
label_203ac4:
    // 0x203ac4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x203ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x203ac8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x203AC8u;
    {
        const bool branch_taken_0x203ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AC8u;
        // 0x203acc: 0x2028823  subu        $s1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ac8) {
            ctx->pc = 0x203AD4u;
            goto label_203ad4;
        }
    }
    ctx->pc = 0x203AD0u;
label_203ad0:
    // 0x203ad0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x203ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203ad4:
    // 0x203ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ad8: 0xc080e7a  jal         func_2039E8
    ctx->pc = 0x203AD8u;
    SET_GPR_U32(ctx, 31, 0x203AE0u);
    ctx->pc = 0x203ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AD8u;
    // 0x203adc: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E8u, 0x203AD8u, 0x203AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AE0u;
label_203ae0:
    // 0x203ae0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x203ae4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x203ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x203ae8: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x203ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x203aec: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x203aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x203af0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x203af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x203af4: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x203af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x203af8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203afc: 0x2484c740  addiu       $a0, $a0, -0x38C0
    ctx->pc = 0x203afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    // 0x203b00: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x203b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x203b04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203b08: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x203b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x203b0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x203b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203b14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x203b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x203b18: 0xac430138  sw          $v1, 0x138($v0)
    ctx->pc = 0x203b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 3));
    // 0x203b1c: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x203b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 3));
    // 0x203b20: 0xac430130  sw          $v1, 0x130($v0)
    ctx->pc = 0x203b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 3));
    // 0x203b24: 0xac430134  sw          $v1, 0x134($v0)
    ctx->pc = 0x203b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 3));
    // 0x203b28: 0x3e00008  jr          $ra
    ctx->pc = 0x203B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B28u;
        // 0x203b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203B30u;
}
