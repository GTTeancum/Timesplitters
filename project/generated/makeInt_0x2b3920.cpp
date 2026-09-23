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

// Function: makeInt
// Address: 0x2b3920 - 0x2b3984
void makeInt_0x2b3920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makeInt_0x2b3920");
#endif

    ctx->pc = 0x2b3920u;

    // 0x2b3920: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x2b3920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x2b3924: 0x2c82000c  sltiu       $v0, $a0, 0xC
    ctx->pc = 0x2b3924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2b3928: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3928u;
    {
        const bool branch_taken_0x2b3928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3928u;
        // 0x2b392c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3928) {
            ctx->pc = 0x2B3938u;
            goto label_2b3938;
        }
    }
    ctx->pc = 0x2B3930u;
    // 0x2b3930: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3930u;
        // 0x2b3934: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3938u;
label_2b3938:
    // 0x2b3938: 0x412c0  sll         $v0, $a0, 11
    ctx->pc = 0x2b3938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x2b393c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b393cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b3940: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2b3940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2b3944: 0x2463fdc0  addiu       $v1, $v1, -0x240
    ctx->pc = 0x2b3944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966720));
    // 0x2b3948: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x2b3948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b394c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2b394cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3950: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b3950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3954: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x2b3954u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2b3958: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x2b3958u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b395c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b395cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3960: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x2b3960u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2b3964: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2b3964u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2b3968: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2b3968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b396c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2b396cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2b3970: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2b3970u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2b3974: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b3974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b3978: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b3978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b397c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B397Cu;
        // 0x2b3980: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B397Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3984u;
}
