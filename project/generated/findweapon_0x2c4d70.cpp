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

// Function: findweapon
// Address: 0x2c4d70 - 0x2c4f94
void findweapon_0x2c4d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("findweapon_0x2c4d70");
#endif

    switch (ctx->pc) {
        case 0x2c4e10u: goto label_2c4e10;
        case 0x2c4e34u: goto label_2c4e34;
        case 0x2c4e40u: goto label_2c4e40;
        case 0x2c4e68u: goto label_2c4e68;
        case 0x2c4ea0u: goto label_2c4ea0;
        default: break;
    }

    ctx->pc = 0x2c4d70u;

    // 0x2c4d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c4d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c4d74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c4d78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c4d7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c4d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c4d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c4d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c4d88: 0x8e300160  lw          $s0, 0x160($s1)
    ctx->pc = 0x2c4d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2c4d8c: 0x8e040ae4  lw          $a0, 0xAE4($s0)
    ctx->pc = 0x2c4d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c4d90: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4D90u;
    {
        const bool branch_taken_0x2c4d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D90u;
        // 0x2c4d94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d90) {
            ctx->pc = 0x2C4DB8u;
            goto label_2c4db8;
        }
    }
    ctx->pc = 0x2C4D98u;
    // 0x2c4d98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c4d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c4d9c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2c4d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c4da0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4DA0u;
    {
        const bool branch_taken_0x2c4da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4da0) {
            ctx->pc = 0x2C4DB8u;
            goto label_2c4db8;
        }
    }
    ctx->pc = 0x2C4DA8u;
    // 0x2c4da8: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x2c4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c4dac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4db0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2c4db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x2c4db4: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x2c4db4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c4db8:
    // 0x2c4db8: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C4DB8u;
    {
        const bool branch_taken_0x2c4db8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DB8u;
        // 0x2c4dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4db8) {
            ctx->pc = 0x2C4E60u;
            goto label_2c4e60;
        }
    }
    ctx->pc = 0x2C4DC0u;
    // 0x2c4dc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c4dc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4DC4u;
    {
        const bool branch_taken_0x2c4dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DC4u;
        // 0x2c4dc8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4dc4) {
            ctx->pc = 0x2C4DD4u;
            goto label_2c4dd4;
        }
    }
    ctx->pc = 0x2C4DCCu;
    // 0x2c4dcc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2C4DCCu;
    {
        const bool branch_taken_0x2c4dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DCCu;
        // 0x2c4dd0: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4dcc) {
            ctx->pc = 0x2C4F70u;
            goto label_2c4f70;
        }
    }
    ctx->pc = 0x2C4DD4u;
label_2c4dd4:
    // 0x2c4dd4: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x2c4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x2c4dd8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C4DD8u;
    {
        const bool branch_taken_0x2c4dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DD8u;
        // 0x2c4ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4dd8) {
            ctx->pc = 0x2C4E60u;
            goto label_2c4e60;
        }
    }
    ctx->pc = 0x2C4DE0u;
    // 0x2c4de0: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x2c4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x2c4de4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4DE4u;
    {
        const bool branch_taken_0x2c4de4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2c4de4) {
            ctx->pc = 0x2C4E08u;
            goto label_2c4e08;
        }
    }
    ctx->pc = 0x2C4DECu;
    // 0x2c4dec: 0x8e020ae8  lw          $v0, 0xAE8($s0)
    ctx->pc = 0x2c4decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2792)));
    // 0x2c4df0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C4DF0u;
    {
        const bool branch_taken_0x2c4df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4df0) {
            ctx->pc = 0x2C4E60u;
            goto label_2c4e60;
        }
    }
    ctx->pc = 0x2C4DF8u;
    // 0x2c4df8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2c4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c4dfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c4dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4e00: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C4E00u;
    {
        const bool branch_taken_0x2c4e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e00) {
            ctx->pc = 0x2C4E60u;
            goto label_2c4e60;
        }
    }
    ctx->pc = 0x2C4E08u;
label_2c4e08:
    // 0x2c4e08: 0xc0b13e6  jal         func_2C4F98
    ctx->pc = 0x2C4E08u;
    SET_GPR_U32(ctx, 31, 0x2C4E10u);
    ctx->pc = 0x2C4E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E08u;
    // 0x2c4e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4F98u, 0x2C4E08u, 0x2C4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E10u;
label_2c4e10:
    // 0x2c4e10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4E10u;
    {
        const bool branch_taken_0x2c4e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E10u;
        // 0x2c4e14: 0xae020ae8  sw          $v0, 0xAE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e10) {
            ctx->pc = 0x2C4E28u;
            goto label_2c4e28;
        }
    }
    ctx->pc = 0x2C4E18u;
    // 0x2c4e18: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x2c4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2c4e1c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2c4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c4e20: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C4E20u;
    {
        const bool branch_taken_0x2c4e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E20u;
        // 0x2c4e24: 0xae0302ac  sw          $v1, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e20) {
            ctx->pc = 0x2C4E5Cu;
            goto label_2c4e5c;
        }
    }
    ctx->pc = 0x2C4E28u;
label_2c4e28:
    // 0x2c4e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e2c: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C4E2Cu;
    SET_GPR_U32(ctx, 31, 0x2C4E34u);
    ctx->pc = 0x2C4E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E2Cu;
    // 0x2c4e30: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C4E2Cu, 0x2C4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E34u;
label_2c4e34:
    // 0x2c4e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e38: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C4E38u;
    SET_GPR_U32(ctx, 31, 0x2C4E40u);
    ctx->pc = 0x2C4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E38u;
    // 0x2c4e3c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C4E38u, 0x2C4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E40u;
label_2c4e40:
    // 0x2c4e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c4e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4e48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c4e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4e4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c4e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4e50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4e54: 0x80b2d92  j           func_2CB648
    ctx->pc = 0x2C4E54u;
    ctx->pc = 0x2C4E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E54u;
    // 0x2c4e58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB648u;
    enemySetIdleAnimation_0x2cb648(rdram, ctx, runtime); return;
    ctx->pc = 0x2C4E5Cu;
label_2c4e5c:
    // 0x2c4e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4e60:
    // 0x2c4e60: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C4E60u;
    SET_GPR_U32(ctx, 31, 0x2C4E68u);
    ctx->pc = 0x2C4E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E60u;
    // 0x2c4e64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C4E60u, 0x2C4E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E68u;
label_2c4e68:
    // 0x2c4e68: 0xc6000b28  lwc1        $f0, 0xB28($s0)
    ctx->pc = 0x2c4e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4e6c: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2C4E6Cu;
    {
        const bool branch_taken_0x2c4e6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E6Cu;
        // 0x2c4e70: 0xe6000b38  swc1        $f0, 0xB38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e6c) {
            ctx->pc = 0x2C4E98u;
            goto label_2c4e98;
        }
    }
    ctx->pc = 0x2C4E74u;
    // 0x2c4e74: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x2c4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x2c4e78: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4E78u;
    {
        const bool branch_taken_0x2c4e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e78) {
            ctx->pc = 0x2C4E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4E78u;
            // 0x2c4e7c: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4E90u;
            goto label_2c4e90;
        }
    }
    ctx->pc = 0x2C4E80u;
    // 0x2c4e80: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x2c4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x2c4e84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4E84u;
    {
        const bool branch_taken_0x2c4e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e84) {
            ctx->pc = 0x2C4E98u;
            goto label_2c4e98;
        }
    }
    ctx->pc = 0x2C4E8Cu;
    // 0x2c4e8c: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c4e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2c4e90:
    // 0x2c4e90: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2C4E90u;
    {
        const bool branch_taken_0x2c4e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E90u;
        // 0x2c4e94: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e90) {
            ctx->pc = 0x2C4F70u;
            goto label_2c4f70;
        }
    }
    ctx->pc = 0x2C4E98u;
label_2c4e98:
    // 0x2c4e98: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C4E98u;
    SET_GPR_U32(ctx, 31, 0x2C4EA0u);
    ctx->pc = 0x2C4E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E98u;
    // 0x2c4e9c: 0x260402a8  addiu       $a0, $s0, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C4E98u, 0x2C4EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4EA0u;
label_2c4ea0:
    // 0x2c4ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ea4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2c4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c4ea8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4EA8u;
    {
        const bool branch_taken_0x2c4ea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EA8u;
        // 0x2c4eac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ea8) {
            ctx->pc = 0x2C4EC8u;
            goto label_2c4ec8;
        }
    }
    ctx->pc = 0x2C4EB0u;
    // 0x2c4eb0: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c4eb4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2c4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c4eb8: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2c4ebc: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2c4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
    // 0x2c4ec0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2C4EC0u;
    {
        const bool branch_taken_0x2c4ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EC0u;
        // 0x2c4ec4: 0xae000ae8  sw          $zero, 0xAE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ec0) {
            ctx->pc = 0x2C4F78u;
            goto label_2c4f78;
        }
    }
    ctx->pc = 0x2C4EC8u;
label_2c4ec8:
    // 0x2c4ec8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4EC8u;
    {
        const bool branch_taken_0x2c4ec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EC8u;
        // 0x2c4ecc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ec8) {
            ctx->pc = 0x2C4EE8u;
            goto label_2c4ee8;
        }
    }
    ctx->pc = 0x2C4ED0u;
    // 0x2c4ed0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4ED0u;
    {
        const bool branch_taken_0x2c4ed0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4ED0u;
        // 0x2c4ed4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ed0) {
            ctx->pc = 0x2C4EE0u;
            goto label_2c4ee0;
        }
    }
    ctx->pc = 0x2C4ED8u;
    // 0x2c4ed8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2C4ED8u;
    {
        const bool branch_taken_0x2c4ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4ED8u;
        // 0x2c4edc: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ed8) {
            ctx->pc = 0x2C4F70u;
            goto label_2c4f70;
        }
    }
    ctx->pc = 0x2C4EE0u;
label_2c4ee0:
    // 0x2c4ee0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C4EE0u;
    {
        const bool branch_taken_0x2c4ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EE0u;
        // 0x2c4ee4: 0xae0402ac  sw          $a0, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ee0) {
            ctx->pc = 0x2C4F7Cu;
            goto label_2c4f7c;
        }
    }
    ctx->pc = 0x2C4EE8u;
label_2c4ee8:
    // 0x2c4ee8: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c4ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c4eec: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2c4eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c4ef0: 0xc7869178  lwc1        $f6, -0x6E88($gp)
    ctx->pc = 0x2c4ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c4ef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4ef8: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x2c4ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c4efc: 0xe6040aec  swc1        $f4, 0xAEC($s0)
    ctx->pc = 0x2c4efcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x2c4f00: 0xc4450010  lwc1        $f5, 0x10($v0)
    ctx->pc = 0x2c4f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c4f04: 0xe6050af0  swc1        $f5, 0xAF0($s0)
    ctx->pc = 0x2c4f04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x2c4f08: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2c4f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c4f0c: 0xe6030af4  swc1        $f3, 0xAF4($s0)
    ctx->pc = 0x2c4f0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
    // 0x2c4f10: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2c4f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4f14: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2c4f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4f18: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c4f18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c4f1c: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c4f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4f20: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c4f20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c4f24: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c4f24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c4f28: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c4f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c4f2c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c4f2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c4f30: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c4f30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c4f34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c4f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c4f38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c4f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c4f3c: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2c4f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4f40: 0x0  nop
    ctx->pc = 0x2c4f40u;
    // NOP
    // 0x2c4f44: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4F44u;
    {
        const bool branch_taken_0x2c4f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4f44) {
            ctx->pc = 0x2C4F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4F44u;
            // 0x2c4f48: 0x8e020a90  lw          $v0, 0xA90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4F60u;
            goto label_2c4f60;
        }
    }
    ctx->pc = 0x2C4F4Cu;
    // 0x2c4f4c: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x2c4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x2c4f50: 0xae0402a8  sw          $a0, 0x2A8($s0)
    ctx->pc = 0x2c4f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 4));
    // 0x2c4f54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c4f58: 0xae020698  sw          $v0, 0x698($s0)
    ctx->pc = 0x2c4f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 2));
    // 0x2c4f5c: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
label_2c4f60:
    // 0x2c4f60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c4f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4f64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4F64u;
    {
        const bool branch_taken_0x2c4f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F64u;
        // 0x2c4f68: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f64) {
            ctx->pc = 0x2C4F7Cu;
            goto label_2c4f7c;
        }
    }
    ctx->pc = 0x2C4F6Cu;
    // 0x2c4f6c: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2c4f70:
    // 0x2c4f70: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c4f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2c4f74: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2c4f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
label_2c4f78:
    // 0x2c4f78: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c4f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
label_2c4f7c:
    // 0x2c4f7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c4f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4f80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c4f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4f84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c4f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F8Cu;
        // 0x2c4f90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4F94u;
}
