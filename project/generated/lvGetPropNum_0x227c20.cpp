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

// Function: lvGetPropNum
// Address: 0x227c20 - 0x227f00
void lvGetPropNum_0x227c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetPropNum_0x227c20");
#endif

    switch (ctx->pc) {
        case 0x227c8cu: goto label_227c8c;
        case 0x227dbcu: goto label_227dbc;
        case 0x227e38u: goto label_227e38;
        default: break;
    }

    ctx->pc = 0x227c20u;

    // 0x227c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227c24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x227c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x227c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227c2c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x227c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x227c30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x227c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x227c34: 0x2623c4a8  addiu       $v1, $s1, -0x3B58
    ctx->pc = 0x227c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x227c38: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x227c38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x227c3c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x227c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x227c40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x227C40u;
    {
        const bool branch_taken_0x227c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C40u;
        // 0x227c44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c40) {
            ctx->pc = 0x227C68u;
            goto label_227c68;
        }
    }
    ctx->pc = 0x227C48u;
    // 0x227c48: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x227c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x227c4c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x227c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x227c50: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227C50u;
    {
        const bool branch_taken_0x227c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C50u;
        // 0x227c54: 0x24020144  addiu       $v0, $zero, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c50) {
            ctx->pc = 0x227C68u;
            goto label_227c68;
        }
    }
    ctx->pc = 0x227C58u;
    // 0x227c58: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227C58u;
    {
        const bool branch_taken_0x227c58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x227c58) {
            ctx->pc = 0x227C68u;
            goto label_227c68;
        }
    }
    ctx->pc = 0x227C60u;
label_227c60:
    // 0x227c60: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x227C60u;
    {
        const bool branch_taken_0x227c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C60u;
        // 0x227c64: 0x2402014e  addiu       $v0, $zero, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c60) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227C68u;
label_227c68:
    // 0x227c68: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227C68u;
    {
        const bool branch_taken_0x227c68 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x227C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C68u;
        // 0x227c6c: 0x8f839f70  lw          $v1, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c68) {
            ctx->pc = 0x227C78u;
            goto label_227c78;
        }
    }
    ctx->pc = 0x227C70u;
label_227c70:
    // 0x227c70: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x227C70u;
    {
        const bool branch_taken_0x227c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C70u;
        // 0x227c74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c70) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227C78u;
label_227c78:
    // 0x227c78: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x227c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x227c7c: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x227C7Cu;
    {
        const bool branch_taken_0x227c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C7Cu;
        // 0x227c80: 0x26030021  addiu       $v1, $s0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c7c) {
            ctx->pc = 0x227D90u;
            goto label_227d90;
        }
    }
    ctx->pc = 0x227C84u;
    // 0x227c84: 0xc094dc4  jal         func_253710
    ctx->pc = 0x227C84u;
    SET_GPR_U32(ctx, 31, 0x227C8Cu);
    ctx->pc = 0x227C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C84u;
    // 0x227c88: 0x8f84a0d0  lw          $a0, -0x5F30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253710u, 0x227C84u, 0x227C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C8Cu;
label_227c8c:
    // 0x227c8c: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x227c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x227c90: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x227c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x227c94: 0x1202002c  beq         $s0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x227C94u;
    {
        const bool branch_taken_0x227c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x227C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C94u;
        // 0x227c98: 0x2a02ffe0  slti        $v0, $s0, -0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967264) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c94) {
            ctx->pc = 0x227D48u;
            goto label_227d48;
        }
    }
    ctx->pc = 0x227C9Cu;
    // 0x227c9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227C9Cu;
    {
        const bool branch_taken_0x227c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C9Cu;
        // 0x227ca0: 0x2402ffde  addiu       $v0, $zero, -0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c9c) {
            ctx->pc = 0x227CB4u;
            goto label_227cb4;
        }
    }
    ctx->pc = 0x227CA4u;
    // 0x227ca4: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227CA4u;
    {
        const bool branch_taken_0x227ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x227CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CA4u;
        // 0x227ca8: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ca4) {
            ctx->pc = 0x227CC8u;
            goto label_227cc8;
        }
    }
    ctx->pc = 0x227CACu;
    // 0x227cac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x227CACu;
    {
        const bool branch_taken_0x227cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CACu;
        // 0x227cb0: 0x26030021  addiu       $v1, $s0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cac) {
            ctx->pc = 0x227D90u;
            goto label_227d90;
        }
    }
    ctx->pc = 0x227CB4u;
label_227cb4:
    // 0x227cb4: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x227cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x227cb8: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x227CB8u;
    {
        const bool branch_taken_0x227cb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x227CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CB8u;
        // 0x227cbc: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cb8) {
            ctx->pc = 0x227D08u;
            goto label_227d08;
        }
    }
    ctx->pc = 0x227CC0u;
    // 0x227cc0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x227CC0u;
    {
        const bool branch_taken_0x227cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CC0u;
        // 0x227cc4: 0x26030021  addiu       $v1, $s0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cc0) {
            ctx->pc = 0x227D90u;
            goto label_227d90;
        }
    }
    ctx->pc = 0x227CC8u;
label_227cc8:
    // 0x227cc8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x227CC8u;
    {
        const bool branch_taken_0x227cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CC8u;
        // 0x227ccc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cc8) {
            ctx->pc = 0x227D8Cu;
            goto label_227d8c;
        }
    }
    ctx->pc = 0x227CD0u;
    // 0x227cd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227cd4: 0x24421470  addiu       $v0, $v0, 0x1470
    ctx->pc = 0x227cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
    // 0x227cd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227cdc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227ce0: 0x800008  jr          $a0
    ctx->pc = 0x227CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227C60u: goto label_227c60;
            case 0x227CE8u: goto label_227ce8;
            case 0x227CF0u: goto label_227cf0;
            case 0x227CF8u: goto label_227cf8;
            case 0x227D00u: goto label_227d00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227CE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227CE8u;
label_227ce8:
    // 0x227ce8: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x227CE8u;
    {
        const bool branch_taken_0x227ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CE8u;
        // 0x227cec: 0x24020144  addiu       $v0, $zero, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ce8) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227CF0u;
label_227cf0:
    // 0x227cf0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x227CF0u;
    {
        const bool branch_taken_0x227cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CF0u;
        // 0x227cf4: 0x2402014f  addiu       $v0, $zero, 0x14F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cf0) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227CF8u;
label_227cf8:
    // 0x227cf8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x227CF8u;
    {
        const bool branch_taken_0x227cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CF8u;
        // 0x227cfc: 0x2402014d  addiu       $v0, $zero, 0x14D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cf8) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227D00u;
label_227d00:
    // 0x227d00: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x227D00u;
    {
        const bool branch_taken_0x227d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D00u;
        // 0x227d04: 0x24020151  addiu       $v0, $zero, 0x151 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d00) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227D08u;
label_227d08:
    // 0x227d08: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x227D08u;
    {
        const bool branch_taken_0x227d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D08u;
        // 0x227d0c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d08) {
            ctx->pc = 0x227D8Cu;
            goto label_227d8c;
        }
    }
    ctx->pc = 0x227D10u;
    // 0x227d10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227d14: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x227d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
    // 0x227d18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227d1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227d20: 0x800008  jr          $a0
    ctx->pc = 0x227D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227D28u: goto label_227d28;
            case 0x227D30u: goto label_227d30;
            case 0x227D38u: goto label_227d38;
            case 0x227D40u: goto label_227d40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227D20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227D28u;
label_227d28:
    // 0x227d28: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x227D28u;
    {
        const bool branch_taken_0x227d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D28u;
        // 0x227d2c: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d28) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227D30u;
label_227d30:
    // 0x227d30: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x227D30u;
    {
        const bool branch_taken_0x227d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D30u;
        // 0x227d34: 0x24020162  addiu       $v0, $zero, 0x162 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d30) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227D38u;
label_227d38:
    // 0x227d38: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x227D38u;
    {
        const bool branch_taken_0x227d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D38u;
        // 0x227d3c: 0x24020164  addiu       $v0, $zero, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d38) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227D40u;
label_227d40:
    // 0x227d40: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x227D40u;
    {
        const bool branch_taken_0x227d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D40u;
        // 0x227d44: 0x24020166  addiu       $v0, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d40) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227D48u;
label_227d48:
    // 0x227d48: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x227d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x227d4c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x227D4Cu;
    {
        const bool branch_taken_0x227d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D4Cu;
        // 0x227d50: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d4c) {
            ctx->pc = 0x227D8Cu;
            goto label_227d8c;
        }
    }
    ctx->pc = 0x227D54u;
    // 0x227d54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227d58: 0x244214b0  addiu       $v0, $v0, 0x14B0
    ctx->pc = 0x227d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x227d5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227d60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227d64: 0x800008  jr          $a0
    ctx->pc = 0x227D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227D6Cu: goto label_227d6c;
            case 0x227D74u: goto label_227d74;
            case 0x227D7Cu: goto label_227d7c;
            case 0x227D84u: goto label_227d84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227D64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227D6Cu;
label_227d6c:
    // 0x227d6c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x227D6Cu;
    {
        const bool branch_taken_0x227d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D6Cu;
        // 0x227d70: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d6c) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227D74u;
label_227d74:
    // 0x227d74: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x227D74u;
    {
        const bool branch_taken_0x227d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D74u;
        // 0x227d78: 0x24020163  addiu       $v0, $zero, 0x163 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d74) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227D7Cu;
label_227d7c:
    // 0x227d7c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x227D7Cu;
    {
        const bool branch_taken_0x227d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D7Cu;
        // 0x227d80: 0x24020165  addiu       $v0, $zero, 0x165 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d7c) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227D84u;
label_227d84:
    // 0x227d84: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x227D84u;
    {
        const bool branch_taken_0x227d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D84u;
        // 0x227d88: 0x24020167  addiu       $v0, $zero, 0x167 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 359));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d84) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227D8Cu;
label_227d8c:
    // 0x227d8c: 0x26030021  addiu       $v1, $s0, 0x21
    ctx->pc = 0x227d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 33));
label_227d90:
    // 0x227d90: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x227d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x227d94: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x227D94u;
    {
        const bool branch_taken_0x227d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D94u;
        // 0x227d98: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d94) {
            ctx->pc = 0x227EE8u;
            goto label_227ee8;
        }
    }
    ctx->pc = 0x227D9Cu;
    // 0x227d9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227da0: 0x244214d0  addiu       $v0, $v0, 0x14D0
    ctx->pc = 0x227da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5328));
    // 0x227da4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227da8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227dac: 0x800008  jr          $a0
    ctx->pc = 0x227DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227C70u: goto label_227c70;
            case 0x227DB4u: goto label_227db4;
            case 0x227E08u: goto label_227e08;
            case 0x227E6Cu: goto label_227e6c;
            case 0x227E74u: goto label_227e74;
            case 0x227EE8u: goto label_227ee8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227DACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227DB4u;
label_227db4:
    // 0x227db4: 0xc089de4  jal         func_227790
    ctx->pc = 0x227DB4u;
    SET_GPR_U32(ctx, 31, 0x227DBCu);
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x227DB4u, 0x227DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DBCu;
label_227dbc:
    // 0x227dbc: 0x101827  nor         $v1, $zero, $s0
    ctx->pc = 0x227dbcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x227dc0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227dc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227dc8: 0x248490f8  addiu       $a0, $a0, -0x6F08
    ctx->pc = 0x227dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938872));
    // 0x227dcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227dd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x227dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227dd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x227dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227dd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x227dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x227ddc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x227ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x227de0: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x227de0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x227de4: 0x10850041  beq         $a0, $a1, . + 4 + (0x41 << 2)
    ctx->pc = 0x227DE4u;
    {
        const bool branch_taken_0x227de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x227DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DE4u;
        // 0x227de8: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227de4) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227DECu;
    // 0x227dec: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x227decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x227df0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x227df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x227df4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x227df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x227df8: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x227df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x227dfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227e00: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x227E00u;
    {
        const bool branch_taken_0x227e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E00u;
        // 0x227e04: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e00) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227E08u;
label_227e08:
    // 0x227e08: 0x2626c4a8  addiu       $a2, $s1, -0x3B58
    ctx->pc = 0x227e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x227e0c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x227e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x227e10: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x227e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x227e14: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x227e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x227e18: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x227E18u;
    {
        const bool branch_taken_0x227e18 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x227E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E18u;
        // 0x227e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e18) {
            ctx->pc = 0x227EE8u;
            goto label_227ee8;
        }
    }
    ctx->pc = 0x227E20u;
    // 0x227e20: 0x90c20010  lbu         $v0, 0x10($a2)
    ctx->pc = 0x227e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x227e24: 0x5044000b  beql        $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x227E24u;
    {
        const bool branch_taken_0x227e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x227e24) {
            ctx->pc = 0x227E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227E24u;
            // 0x227e28: 0x2623c4a8  addiu       $v1, $s1, -0x3B58 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227E54u;
            goto label_227e54;
        }
    }
    ctx->pc = 0x227E2Cu;
    // 0x227e2c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x227e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e30: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x227e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x227e34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x227e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_227e38:
    // 0x227e38: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x227e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x227e3c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x227E3Cu;
    {
        const bool branch_taken_0x227e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E3Cu;
        // 0x227e40: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e3c) {
            ctx->pc = 0x227EE8u;
            goto label_227ee8;
        }
    }
    ctx->pc = 0x227E44u;
    // 0x227e44: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x227e44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227e48: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x227E48u;
    {
        const bool branch_taken_0x227e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x227e48) {
            ctx->pc = 0x227E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227E48u;
            // 0x227e4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227e38;
        }
    }
    ctx->pc = 0x227E50u;
    // 0x227e50: 0x2623c4a8  addiu       $v1, $s1, -0x3B58
    ctx->pc = 0x227e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
label_227e54:
    // 0x227e54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x227e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x227e58: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x227e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x227e5c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x227E5Cu;
    {
        const bool branch_taken_0x227e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E5Cu;
        // 0x227e60: 0x24820151  addiu       $v0, $a0, 0x151 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 337));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e5c) {
            ctx->pc = 0x227EE8u;
            goto label_227ee8;
        }
    }
    ctx->pc = 0x227E64u;
    // 0x227e64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x227E64u;
    {
        const bool branch_taken_0x227e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E64u;
        // 0x227e68: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e64) {
            ctx->pc = 0x227EF0u;
            goto label_227ef0;
        }
    }
    ctx->pc = 0x227E6Cu;
label_227e6c:
    // 0x227e6c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x227E6Cu;
    {
        const bool branch_taken_0x227e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E6Cu;
        // 0x227e70: 0x24020161  addiu       $v0, $zero, 0x161 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e6c) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227E74u;
label_227e74:
    // 0x227e74: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x227e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x227e78: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x227e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x227e7c: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x227e7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x227e80: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x227E80u;
    {
        const bool branch_taken_0x227e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E80u;
        // 0x227e84: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e80) {
            ctx->pc = 0x227ED0u;
            goto label_227ed0;
        }
    }
    ctx->pc = 0x227E88u;
    // 0x227e88: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x227e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x227e8c: 0x24421560  addiu       $v0, $v0, 0x1560
    ctx->pc = 0x227e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5472));
    // 0x227e90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227e94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227e98: 0x800008  jr          $a0
    ctx->pc = 0x227E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227EA0u: goto label_227ea0;
            case 0x227EB8u: goto label_227eb8;
            case 0x227ED0u: goto label_227ed0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227EA0u;
label_227ea0:
    // 0x227ea0: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x227ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x227ea4: 0x24040162  addiu       $a0, $zero, 0x162
    ctx->pc = 0x227ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
    // 0x227ea8: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x227ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x227eac: 0x24020163  addiu       $v0, $zero, 0x163
    ctx->pc = 0x227eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
    // 0x227eb0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x227EB0u;
    {
        const bool branch_taken_0x227eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EB0u;
        // 0x227eb4: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227eb0) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227EB8u;
label_227eb8:
    // 0x227eb8: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x227eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x227ebc: 0x24040164  addiu       $a0, $zero, 0x164
    ctx->pc = 0x227ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x227ec0: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x227ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x227ec4: 0x24020165  addiu       $v0, $zero, 0x165
    ctx->pc = 0x227ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
    // 0x227ec8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x227EC8u;
    {
        const bool branch_taken_0x227ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EC8u;
        // 0x227ecc: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ec8) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227ED0u;
label_227ed0:
    // 0x227ed0: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x227ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x227ed4: 0x24040166  addiu       $a0, $zero, 0x166
    ctx->pc = 0x227ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x227ed8: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x227ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x227edc: 0x24020167  addiu       $v0, $zero, 0x167
    ctx->pc = 0x227edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 359));
    // 0x227ee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227EE0u;
    {
        const bool branch_taken_0x227ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EE0u;
        // 0x227ee4: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ee0) {
            ctx->pc = 0x227EECu;
            goto label_227eec;
        }
    }
    ctx->pc = 0x227EE8u;
label_227ee8:
    // 0x227ee8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x227ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_227eec:
    // 0x227eec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_227ef0:
    // 0x227ef0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x227ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227ef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x227EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EF8u;
        // 0x227efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227F00u;
}
