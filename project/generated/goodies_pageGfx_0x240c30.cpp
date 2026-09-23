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

// Function: goodies_pageGfx
// Address: 0x240c30 - 0x240d14
void goodies_pageGfx_0x240c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("goodies_pageGfx_0x240c30");
#endif

    switch (ctx->pc) {
        case 0x240c50u: goto label_240c50;
        case 0x240c58u: goto label_240c58;
        case 0x240c60u: goto label_240c60;
        case 0x240c7cu: goto label_240c7c;
        case 0x240c90u: goto label_240c90;
        case 0x240cc8u: goto label_240cc8;
        default: break;
    }

    ctx->pc = 0x240c30u;

    // 0x240c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240c34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x240c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x240c38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x240c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x240c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240c40: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x240c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x240c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x240c48: 0xc08aae4  jal         func_22AB90
    ctx->pc = 0x240C48u;
    SET_GPR_U32(ctx, 31, 0x240C50u);
    ctx->pc = 0x240C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C48u;
    // 0x240c4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AB90u, 0x240C48u, 0x240C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C50u;
label_240c50:
    // 0x240c50: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x240C50u;
    SET_GPR_U32(ctx, 31, 0x240C58u);
    ctx->pc = 0x240C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C50u;
    // 0x240c54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x240C50u, 0x240C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C58u;
label_240c58:
    // 0x240c58: 0x8f84b7c0  lw          $a0, -0x4840($gp)
    ctx->pc = 0x240c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948800)));
    // 0x240c5c: 0x0  nop
    ctx->pc = 0x240c5cu;
    // NOP
label_240c60:
    // 0x240c60: 0x3c051010  lui         $a1, 0x1010
    ctx->pc = 0x240c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4112 << 16));
    // 0x240c64: 0x34a52040  ori         $a1, $a1, 0x2040
    ctx->pc = 0x240c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8256);
    // 0x240c68: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x240c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x240c6c: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x240c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x240c70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240c74: 0xc09022c  jal         func_2408B0
    ctx->pc = 0x240C74u;
    SET_GPR_U32(ctx, 31, 0x240C7Cu);
    ctx->pc = 0x240C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C74u;
    // 0x240c78: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2408B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2408B0u, 0x240C74u, 0x240C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C7Cu;
label_240c7c:
    // 0x240c7c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x240c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x240c80: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x240C80u;
    {
        const bool branch_taken_0x240c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C80u;
        // 0x240c84: 0x8f84b7c0  lw          $a0, -0x4840($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c80) {
            ctx->pc = 0x240C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240c60;
        }
    }
    ctx->pc = 0x240C88u;
    // 0x240c88: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x240C88u;
    SET_GPR_U32(ctx, 31, 0x240C90u);
    ctx->pc = 0x240C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C88u;
    // 0x240c8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x240C88u, 0x240C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C90u;
label_240c90:
    // 0x240c90: 0x8f83b7c0  lw          $v1, -0x4840($gp)
    ctx->pc = 0x240c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948800)));
    // 0x240c94: 0x2463ffc4  addiu       $v1, $v1, -0x3C
    ctx->pc = 0x240c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
    // 0x240c98: 0x2c630078  sltiu       $v1, $v1, 0x78
    ctx->pc = 0x240c98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
    // 0x240c9c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x240C9Cu;
    {
        const bool branch_taken_0x240c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C9Cu;
        // 0x240ca0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c9c) {
            ctx->pc = 0x240D04u;
            goto label_240d04;
        }
    }
    ctx->pc = 0x240CA4u;
    // 0x240ca4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x240ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x240ca8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x240ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x240cac: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x240cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x240cb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240cb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240cb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240cbc: 0x8c90057c  lw          $s0, 0x57C($a0)
    ctx->pc = 0x240cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x240cc0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x240CC0u;
    SET_GPR_U32(ctx, 31, 0x240CC8u);
    ctx->pc = 0x240CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240CC0u;
    // 0x240cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x240CC0u, 0x240CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CC8u;
label_240cc8:
    // 0x240cc8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x240cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x240ccc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x240cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x240cd0: 0x8ca499f8  lw          $a0, -0x6608($a1)
    ctx->pc = 0x240cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941176)));
    // 0x240cd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240cd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x240cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240cdc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x240cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x240ce0: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x240ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x240ce4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x240ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x240ce8: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x240ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x240cec: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x240cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x240cf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x240cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240cf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x240cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240cfc: 0x80808ec  j           func_2023B0
    ctx->pc = 0x240CFCu;
    ctx->pc = 0x240D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240CFCu;
    // 0x240d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    textOutline_0x2023b0(rdram, ctx, runtime); return;
    ctx->pc = 0x240D04u;
label_240d04:
    // 0x240d04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x240d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240d08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x240D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D0Cu;
        // 0x240d10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240D14u;
}
