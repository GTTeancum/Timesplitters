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

// Function: splitMessageDraw
// Address: 0x230b00 - 0x230bb0
void splitMessageDraw_0x230b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("splitMessageDraw_0x230b00");
#endif

    switch (ctx->pc) {
        case 0x230b6cu: goto label_230b6c;
        case 0x230b74u: goto label_230b74;
        case 0x230ba0u: goto label_230ba0;
        default: break;
    }

    ctx->pc = 0x230b00u;

    // 0x230b00: 0x24030104  addiu       $v1, $zero, 0x104
    ctx->pc = 0x230b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x230b04: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230b08: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x230b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x230b0c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x230b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x230b10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x230b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x230b14: 0x24421488  addiu       $v0, $v0, 0x1488
    ctx->pc = 0x230b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5256));
    // 0x230b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x230b1c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x230b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x230b20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x230b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x230b24: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x230B24u;
    {
        const bool branch_taken_0x230b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B24u;
        // 0x230b28: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b24) {
            ctx->pc = 0x230BA0u;
            goto label_230ba0;
        }
    }
    ctx->pc = 0x230B2Cu;
    // 0x230b2c: 0x240600a7  addiu       $a2, $zero, 0xA7
    ctx->pc = 0x230b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x230b30: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x230b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x230b34: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x230b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x230b38: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x230b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x230b3c: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x230b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x230b40: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x230b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x230b44: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x230b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x230b48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x230b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x230b4c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x230b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x230b50: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x230b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x230b54: 0x2406022f  addiu       $a2, $zero, 0x22F
    ctx->pc = 0x230b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x230b58: 0x240700a7  addiu       $a3, $zero, 0xA7
    ctx->pc = 0x230b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x230b5c: 0x24082880  addiu       $t0, $zero, 0x2880
    ctx->pc = 0x230b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x230b60: 0x35297f80  ori         $t1, $t1, 0x7F80
    ctx->pc = 0x230b60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32640);
    // 0x230b64: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x230B64u;
    SET_GPR_U32(ctx, 31, 0x230B6Cu);
    ctx->pc = 0x230B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B64u;
    // 0x230b68: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x230B64u, 0x230B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B6Cu;
label_230b6c:
    // 0x230b6c: 0xc080a98  jal         func_202A60
    ctx->pc = 0x230B6Cu;
    SET_GPR_U32(ctx, 31, 0x230B74u);
    ctx->pc = 0x230B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B6Cu;
    // 0x230b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A60u, 0x230B6Cu, 0x230B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B74u;
label_230b74:
    // 0x230b74: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x230b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x230b78: 0x8f88a01c  lw          $t0, -0x5FE4($gp)
    ctx->pc = 0x230b78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x230b7c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x230b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x230b80: 0x8f89a020  lw          $t1, -0x5FE0($gp)
    ctx->pc = 0x230b80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x230b84: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x230b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x230b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b8c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x230b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x230b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b94: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x230b94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x230b98: 0xc08ba4c  jal         func_22E930
    ctx->pc = 0x230B98u;
    SET_GPR_U32(ctx, 31, 0x230BA0u);
    ctx->pc = 0x230B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B98u;
    // 0x230b9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E930u, 0x230B98u, 0x230BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BA0u;
label_230ba0:
    // 0x230ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230ba4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x230ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x230BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BA8u;
        // 0x230bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230BB0u;
}
