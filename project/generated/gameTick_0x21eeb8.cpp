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

// Function: gameTick
// Address: 0x21eeb8 - 0x21f038
void gameTick_0x21eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameTick_0x21eeb8");
#endif

    switch (ctx->pc) {
        case 0x21ef0cu: goto label_21ef0c;
        case 0x21ef28u: goto label_21ef28;
        case 0x21ef38u: goto label_21ef38;
        case 0x21ef50u: goto label_21ef50;
        case 0x21ef88u: goto label_21ef88;
        case 0x21efa4u: goto label_21efa4;
        case 0x21efacu: goto label_21efac;
        case 0x21efc0u: goto label_21efc0;
        case 0x21efc8u: goto label_21efc8;
        case 0x21efdcu: goto label_21efdc;
        case 0x21f008u: goto label_21f008;
        default: break;
    }

    ctx->pc = 0x21eeb8u;

    // 0x21eeb8: 0x8f829dac  lw          $v0, -0x6254($gp)
    ctx->pc = 0x21eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x21eebc: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x21eebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21eec0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21eec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21eec4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x21eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21eec8: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x21eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x21eecc: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x21eeccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x21eed0: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x21EED0u;
    {
        const bool branch_taken_0x21eed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EED0u;
        // 0x21eed4: 0xffb00070  sd          $s0, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eed0) {
            ctx->pc = 0x21F024u;
            goto label_21f024;
        }
    }
    ctx->pc = 0x21EED8u;
    // 0x21eed8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x21eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x21eedc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21eee0: 0x244208f0  addiu       $v0, $v0, 0x8F0
    ctx->pc = 0x21eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x21eee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21eee8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21eeec: 0x800008  jr          $a0
    ctx->pc = 0x21EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EEF4u: goto label_21eef4;
            case 0x21EF20u: goto label_21ef20;
            case 0x21EF40u: goto label_21ef40;
            case 0x21EFB8u: goto label_21efb8;
            case 0x21F024u: goto label_21f024;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EEECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21EEF4u;
label_21eef4:
    // 0x21eef4: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x21eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21eef8: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x21eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x21eefc: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x21EEFCu;
    {
        const bool branch_taken_0x21eefc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEFCu;
        // 0x21ef00: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eefc) {
            ctx->pc = 0x21F028u;
            goto label_21f028;
        }
    }
    ctx->pc = 0x21EF04u;
    // 0x21ef04: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x21EF04u;
    SET_GPR_U32(ctx, 31, 0x21EF0Cu);
    ctx->pc = 0x21EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF04u;
    // 0x21ef08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x21EF04u, 0x21EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF0Cu;
label_21ef0c:
    // 0x21ef0c: 0x304209f0  andi        $v0, $v0, 0x9F0
    ctx->pc = 0x21ef0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2544);
    // 0x21ef10: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x21EF10u;
    {
        const bool branch_taken_0x21ef10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF10u;
        // 0x21ef14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef10) {
            ctx->pc = 0x21F024u;
            goto label_21f024;
        }
    }
    ctx->pc = 0x21EF18u;
    // 0x21ef18: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x21EF18u;
    {
        const bool branch_taken_0x21ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF18u;
        // 0x21ef1c: 0xaf829dac  sw          $v0, -0x6254($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef18) {
            ctx->pc = 0x21F024u;
            goto label_21f024;
        }
    }
    ctx->pc = 0x21EF20u;
label_21ef20:
    // 0x21ef20: 0xc0ada14  jal         func_2B6850
    ctx->pc = 0x21EF20u;
    SET_GPR_U32(ctx, 31, 0x21EF28u);
    ctx->pc = 0x2B6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6850u, 0x21EF20u, 0x21EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF28u;
label_21ef28:
    // 0x21ef28: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x21EF28u;
    {
        const bool branch_taken_0x21ef28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF28u;
        // 0x21ef2c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef28) {
            ctx->pc = 0x21F028u;
            goto label_21f028;
        }
    }
    ctx->pc = 0x21EF30u;
    // 0x21ef30: 0xc0878f0  jal         func_21E3C0
    ctx->pc = 0x21EF30u;
    SET_GPR_U32(ctx, 31, 0x21EF38u);
    ctx->pc = 0x21E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3C0u, 0x21EF30u, 0x21EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF38u;
label_21ef38:
    // 0x21ef38: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x21EF38u;
    {
        const bool branch_taken_0x21ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF38u;
        // 0x21ef3c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef38) {
            ctx->pc = 0x21F028u;
            goto label_21f028;
        }
    }
    ctx->pc = 0x21EF40u;
label_21ef40:
    // 0x21ef40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21ef40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21ef44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef48: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x21EF48u;
    SET_GPR_U32(ctx, 31, 0x21EF50u);
    ctx->pc = 0x21EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF48u;
    // 0x21ef4c: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x21EF48u, 0x21EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF50u;
label_21ef50:
    // 0x21ef50: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21ef54: 0x8c63c4f8  lw          $v1, -0x3B08($v1)
    ctx->pc = 0x21ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21ef58: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x21ef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x21ef5c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21EF5Cu;
    {
        const bool branch_taken_0x21ef5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF5Cu;
        // 0x21ef60: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef5c) {
            ctx->pc = 0x21EF94u;
            goto label_21ef94;
        }
    }
    ctx->pc = 0x21EF64u;
    // 0x21ef64: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x21ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x21ef68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21ef68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ef6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EF6Cu;
    {
        const bool branch_taken_0x21ef6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF6Cu;
        // 0x21ef70: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef6c) {
            ctx->pc = 0x21EF94u;
            goto label_21ef94;
        }
    }
    ctx->pc = 0x21EF74u;
    // 0x21ef74: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x21ef74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x21ef78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EF78u;
    {
        const bool branch_taken_0x21ef78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF78u;
        // 0x21ef7c: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef78) {
            ctx->pc = 0x21EF94u;
            goto label_21ef94;
        }
    }
    ctx->pc = 0x21EF80u;
    // 0x21ef80: 0xc089374  jal         func_224DD0
    ctx->pc = 0x21EF80u;
    SET_GPR_U32(ctx, 31, 0x21EF88u);
    ctx->pc = 0x21EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF80u;
    // 0x21ef84: 0x24040069  addiu       $a0, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224DD0u, 0x21EF80u, 0x21EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF88u;
label_21ef88:
    // 0x21ef88: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21EF88u;
    {
        const bool branch_taken_0x21ef88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF88u;
        // 0x21ef8c: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef88) {
            ctx->pc = 0x21EF94u;
            goto label_21ef94;
        }
    }
    ctx->pc = 0x21EF90u;
    // 0x21ef90: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x21ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_21ef94:
    // 0x21ef94: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x21ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x21ef98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ef9c: 0xc08173c  jal         func_205CF0
    ctx->pc = 0x21EF9Cu;
    SET_GPR_U32(ctx, 31, 0x21EFA4u);
    ctx->pc = 0x21EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF9Cu;
    // 0x21efa0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CF0u, 0x21EF9Cu, 0x21EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFA4u;
label_21efa4:
    // 0x21efa4: 0xc0879ea  jal         func_21E7A8
    ctx->pc = 0x21EFA4u;
    SET_GPR_U32(ctx, 31, 0x21EFACu);
    ctx->pc = 0x21EFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EFA4u;
    // 0x21efa8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7A8u, 0x21EFA4u, 0x21EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFACu;
label_21efac:
    // 0x21efac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21efb0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21EFB0u;
    {
        const bool branch_taken_0x21efb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFB0u;
        // 0x21efb4: 0xaf829dac  sw          $v0, -0x6254($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efb0) {
            ctx->pc = 0x21F024u;
            goto label_21f024;
        }
    }
    ctx->pc = 0x21EFB8u;
label_21efb8:
    // 0x21efb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21efb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efbc: 0x24110066  addiu       $s1, $zero, 0x66
    ctx->pc = 0x21efbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_21efc0:
    // 0x21efc0: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x21EFC0u;
    SET_GPR_U32(ctx, 31, 0x21EFC8u);
    ctx->pc = 0x21EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EFC0u;
    // 0x21efc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x21EFC0u, 0x21EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFC8u;
label_21efc8:
    // 0x21efc8: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x21efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21efcc: 0x50510007  beql        $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21EFCCu;
    {
        const bool branch_taken_0x21efcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x21efcc) {
            ctx->pc = 0x21EFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EFCCu;
            // 0x21efd0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EFECu;
            goto label_21efec;
        }
    }
    ctx->pc = 0x21EFD4u;
    // 0x21efd4: 0xc08b2c8  jal         func_22CB20
    ctx->pc = 0x21EFD4u;
    SET_GPR_U32(ctx, 31, 0x21EFDCu);
    ctx->pc = 0x21EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EFD4u;
    // 0x21efd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x21EFD4u, 0x21EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFDCu;
label_21efdc:
    // 0x21efdc: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x21efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x21efe0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x21efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x21efe4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x21efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x21efe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21efe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21efec:
    // 0x21efec: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x21efecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21eff0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x21EFF0u;
    {
        const bool branch_taken_0x21eff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFF0u;
        // 0x21eff4: 0x8f82b70c  lw          $v0, -0x48F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eff0) {
            ctx->pc = 0x21EFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21efc0;
        }
    }
    ctx->pc = 0x21EFF8u;
    // 0x21eff8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21EFF8u;
    {
        const bool branch_taken_0x21eff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFF8u;
        // 0x21effc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eff8) {
            ctx->pc = 0x21F028u;
            goto label_21f028;
        }
    }
    ctx->pc = 0x21F000u;
    // 0x21f000: 0xc0816da  jal         func_205B68
    ctx->pc = 0x21F000u;
    SET_GPR_U32(ctx, 31, 0x21F008u);
    ctx->pc = 0x205B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B68u, 0x21F000u, 0x21F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F008u;
label_21f008:
    // 0x21f008: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F008u;
    {
        const bool branch_taken_0x21f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F008u;
        // 0x21f00c: 0x8f82b70c  lw          $v0, -0x48F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f008) {
            ctx->pc = 0x21F024u;
            goto label_21f024;
        }
    }
    ctx->pc = 0x21F010u;
    // 0x21f010: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21f014: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F014u;
    {
        const bool branch_taken_0x21f014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F014u;
        // 0x21f018: 0xaf82b70c  sw          $v0, -0x48F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f014) {
            ctx->pc = 0x21F024u;
            goto label_21f024;
        }
    }
    ctx->pc = 0x21F01Cu;
    // 0x21f01c: 0x2402029a  addiu       $v0, $zero, 0x29A
    ctx->pc = 0x21f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x21f020: 0xaf8293a4  sw          $v0, -0x6C5C($gp)
    ctx->pc = 0x21f020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939556), GPR_U32(ctx, 2));
label_21f024:
    // 0x21f024: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21f024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21f028:
    // 0x21f028: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x21f028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21f02c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x21f02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21f030: 0x3e00008  jr          $ra
    ctx->pc = 0x21F030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F030u;
        // 0x21f034: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F038u;
}
