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

// Function: gunAddAmmo
// Address: 0x294ac8 - 0x294b48
void gunAddAmmo_0x294ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunAddAmmo_0x294ac8");
#endif

    switch (ctx->pc) {
        case 0x294aecu: goto label_294aec;
        default: break;
    }

    ctx->pc = 0x294ac8u;

    // 0x294ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294acc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294ad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ad8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x294ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294adc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294ae0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x294ae4: 0xc0a52d2  jal         func_294B48
    ctx->pc = 0x294AE4u;
    SET_GPR_U32(ctx, 31, 0x294AECu);
    ctx->pc = 0x294AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294AE4u;
    // 0x294ae8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B48u, 0x294AE4u, 0x294AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294AECu;
label_294aec:
    // 0x294aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294af0: 0x2631026c  addiu       $s1, $s1, 0x26C
    ctx->pc = 0x294af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 620));
    // 0x294af4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x294af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x294af8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x294af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x294afc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x294afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x294b00: 0x246361a0  addiu       $v1, $v1, 0x61A0
    ctx->pc = 0x294b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24992));
    // 0x294b04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x294b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x294b08: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x294b08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x294b0c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x294b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x294b10: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x294b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x294b14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x294b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x294b18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x294b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x294b1c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x294b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x294b20: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x294b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x294b24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x294B24u;
    {
        const bool branch_taken_0x294b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B24u;
        // 0x294b28: 0x2041023  subu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b24) {
            ctx->pc = 0x294B30u;
            goto label_294b30;
        }
    }
    ctx->pc = 0x294B2Cu;
    // 0x294b2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x294b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_294b30:
    // 0x294b30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294b34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294b34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294b38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294b3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294b40: 0x3e00008  jr          $ra
    ctx->pc = 0x294B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B40u;
        // 0x294b44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B48u;
}
