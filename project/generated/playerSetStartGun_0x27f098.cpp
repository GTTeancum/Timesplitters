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

// Function: playerSetStartGun
// Address: 0x27f098 - 0x27f138
void playerSetStartGun_0x27f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerSetStartGun_0x27f098");
#endif

    switch (ctx->pc) {
        case 0x27f0c8u: goto label_27f0c8;
        case 0x27f0e4u: goto label_27f0e4;
        default: break;
    }

    ctx->pc = 0x27f098u;

    // 0x27f098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f09c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x27f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x27f0a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27f0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27f0a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27f0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27f0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f0ac: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x27f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x27f0b0: 0x8c44c4f8  lw          $a0, -0x3B08($v0)
    ctx->pc = 0x27f0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x27f0b4: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x27f0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x27f0b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F0B8u;
    {
        const bool branch_taken_0x27f0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0B8u;
        // 0x27f0bc: 0x8c700160  lw          $s0, 0x160($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0b8) {
            ctx->pc = 0x27F0D0u;
            goto label_27f0d0;
        }
    }
    ctx->pc = 0x27F0C0u;
    // 0x27f0c0: 0xc087c18  jal         func_21F060
    ctx->pc = 0x27F0C0u;
    SET_GPR_U32(ctx, 31, 0x27F0C8u);
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x27F0C0u, 0x27F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0C8u;
label_27f0c8:
    // 0x27f0c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27F0C8u;
    {
        const bool branch_taken_0x27f0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0C8u;
        // 0x27f0cc: 0x8c460038  lw          $a2, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0c8) {
            ctx->pc = 0x27F0F4u;
            goto label_27f0f4;
        }
    }
    ctx->pc = 0x27F0D0u;
label_27f0d0:
    // 0x27f0d0: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x27f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x27f0d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F0D4u;
    {
        const bool branch_taken_0x27f0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0D4u;
        // 0x27f0d8: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0d4) {
            ctx->pc = 0x27F0F8u;
            goto label_27f0f8;
        }
    }
    ctx->pc = 0x27F0DCu;
    // 0x27f0dc: 0xc089de4  jal         func_227790
    ctx->pc = 0x27F0DCu;
    SET_GPR_U32(ctx, 31, 0x27F0E4u);
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x27F0DCu, 0x27F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0E4u;
label_27f0e4:
    // 0x27f0e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f0e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27f0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f0ec: 0x28620001  slti        $v0, $v1, 0x1
    ctx->pc = 0x27f0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x27f0f0: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x27f0f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_27f0f4:
    // 0x27f0f4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x27f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_27f0f8:
    // 0x27f0f8: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x27f0f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x27f0fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27F0FCu;
    {
        const bool branch_taken_0x27f0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0FCu;
        // 0x27f100: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0fc) {
            ctx->pc = 0x27F12Cu;
            goto label_27f12c;
        }
    }
    ctx->pc = 0x27F104u;
    // 0x27f104: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x27f104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27f108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27f108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f10c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27f110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f114: 0xac4301e8  sw          $v1, 0x1E8($v0)
    ctx->pc = 0x27f114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 3));
    // 0x27f118: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27f118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f11c: 0xae060104  sw          $a2, 0x104($s0)
    ctx->pc = 0x27f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 6));
    // 0x27f120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27f120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f124: 0x80a34ea  j           func_28D3A8
    ctx->pc = 0x27F124u;
    ctx->pc = 0x27F128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F124u;
    // 0x27f128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D3A8u;
    gunSetAmmoToMax_0x28d3a8(rdram, ctx, runtime); return;
    ctx->pc = 0x27F12Cu;
label_27f12c:
    // 0x27f12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27f12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f130: 0x3e00008  jr          $ra
    ctx->pc = 0x27F130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F130u;
        // 0x27f134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F138u;
}
