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

// Function: story_pageTick
// Address: 0x23bee8 - 0x23c308
void story_pageTick_0x23bee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("story_pageTick_0x23bee8");
#endif

    switch (ctx->pc) {
        case 0x23bf30u: goto label_23bf30;
        case 0x23bf74u: goto label_23bf74;
        case 0x23bf7cu: goto label_23bf7c;
        case 0x23bf8cu: goto label_23bf8c;
        case 0x23bfc4u: goto label_23bfc4;
        case 0x23c04cu: goto label_23c04c;
        case 0x23c05cu: goto label_23c05c;
        case 0x23c0b8u: goto label_23c0b8;
        case 0x23c0e8u: goto label_23c0e8;
        case 0x23c158u: goto label_23c158;
        case 0x23c168u: goto label_23c168;
        case 0x23c170u: goto label_23c170;
        case 0x23c180u: goto label_23c180;
        case 0x23c1b0u: goto label_23c1b0;
        case 0x23c1b8u: goto label_23c1b8;
        case 0x23c1c8u: goto label_23c1c8;
        case 0x23c200u: goto label_23c200;
        case 0x23c294u: goto label_23c294;
        case 0x23c29cu: goto label_23c29c;
        case 0x23c2a4u: goto label_23c2a4;
        case 0x23c2c8u: goto label_23c2c8;
        case 0x23c2d4u: goto label_23c2d4;
        default: break;
    }

    ctx->pc = 0x23bee8u;

    // 0x23bee8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23bee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23beec: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23beecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23bef0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x23bef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x23bef4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x23bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x23bef8: 0x3c1e002f  lui         $fp, 0x2F
    ctx->pc = 0x23bef8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47 << 16));
    // 0x23befc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23bf00: 0x3c1401fc  lui         $s4, 0x1FC
    ctx->pc = 0x23bf00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
    // 0x23bf04: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x23bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x23bf08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23bf08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf0c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x23bf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x23bf10: 0x24444d18  addiu       $a0, $v0, 0x4D18
    ctx->pc = 0x23bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19736));
    // 0x23bf14: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x23bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x23bf18: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x23bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x23bf1c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23bf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x23bf20: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x23bf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23bf24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23bf28: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x23BF28u;
    SET_GPR_U32(ctx, 31, 0x23BF30u);
    ctx->pc = 0x23BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF28u;
    // 0x23bf2c: 0x96450004  lhu         $a1, 0x4($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x23BF28u, 0x23BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF30u;
label_23bf30:
    // 0x23bf30: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23bf34: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x23bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x23bf38: 0x8f82b73c  lw          $v0, -0x48C4($gp)
    ctx->pc = 0x23bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x23bf3c: 0x24851308  addiu       $a1, $a0, 0x1308
    ctx->pc = 0x23bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x23bf40: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23bf44: 0x27c42c18  addiu       $a0, $fp, 0x2C18
    ctx->pc = 0x23bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 11288));
    // 0x23bf48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23bf4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23bf50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23bf54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23bf58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23bf5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23bf60: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23bf60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23bf64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23bf68: 0x24a54e08  addiu       $a1, $a1, 0x4E08
    ctx->pc = 0x23bf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19976));
    // 0x23bf6c: 0xc08c086  jal         func_230218
    ctx->pc = 0x23BF6Cu;
    SET_GPR_U32(ctx, 31, 0x23BF74u);
    ctx->pc = 0x23BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF6Cu;
    // 0x23bf70: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x23BF6Cu, 0x23BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF74u;
label_23bf74:
    // 0x23bf74: 0xc08a984  jal         func_22A610
    ctx->pc = 0x23BF74u;
    SET_GPR_U32(ctx, 31, 0x23BF7Cu);
    ctx->pc = 0x23BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF74u;
    // 0x23bf78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x23BF74u, 0x23BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF7Cu;
label_23bf7c:
    // 0x23bf7c: 0x268211f8  addiu       $v0, $s4, 0x11F8
    ctx->pc = 0x23bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
    // 0x23bf80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bf84: 0xc08ef82  jal         func_23BE08
    ctx->pc = 0x23BF84u;
    SET_GPR_U32(ctx, 31, 0x23BF8Cu);
    ctx->pc = 0x23BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF84u;
    // 0x23bf88: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE08u, 0x23BF84u, 0x23BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF8Cu;
label_23bf8c:
    // 0x23bf8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BF8Cu;
    {
        const bool branch_taken_0x23bf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF8Cu;
        // 0x23bf90: 0x3c170035  lui         $s7, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf8c) {
            ctx->pc = 0x23BFA4u;
            goto label_23bfa4;
        }
    }
    ctx->pc = 0x23BF94u;
    // 0x23bf94: 0x26e34d28  addiu       $v1, $s7, 0x4D28
    ctx->pc = 0x23bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 19752));
    // 0x23bf98: 0x9462004a  lhu         $v0, 0x4A($v1)
    ctx->pc = 0x23bf98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x23bf9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23BF9Cu;
    {
        const bool branch_taken_0x23bf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF9Cu;
        // 0x23bfa0: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf9c) {
            ctx->pc = 0x23BFB0u;
            goto label_23bfb0;
        }
    }
    ctx->pc = 0x23BFA4u;
label_23bfa4:
    // 0x23bfa4: 0x26e34d28  addiu       $v1, $s7, 0x4D28
    ctx->pc = 0x23bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 19752));
    // 0x23bfa8: 0x9462004a  lhu         $v0, 0x4A($v1)
    ctx->pc = 0x23bfa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x23bfac: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x23bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
label_23bfb0:
    // 0x23bfb0: 0xa462004a  sh          $v0, 0x4A($v1)
    ctx->pc = 0x23bfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x23bfb4: 0x268211f8  addiu       $v0, $s4, 0x11F8
    ctx->pc = 0x23bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
    // 0x23bfb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23bfbc: 0xc08ef82  jal         func_23BE08
    ctx->pc = 0x23BFBCu;
    SET_GPR_U32(ctx, 31, 0x23BFC4u);
    ctx->pc = 0x23BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFBCu;
    // 0x23bfc0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE08u, 0x23BFBCu, 0x23BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFC4u;
label_23bfc4:
    // 0x23bfc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BFC4u;
    {
        const bool branch_taken_0x23bfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC4u;
        // 0x23bfc8: 0x26e34d28  addiu       $v1, $s7, 0x4D28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 19752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfc4) {
            ctx->pc = 0x23BFD8u;
            goto label_23bfd8;
        }
    }
    ctx->pc = 0x23BFCCu;
    // 0x23bfcc: 0x9462006a  lhu         $v0, 0x6A($v1)
    ctx->pc = 0x23bfccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x23bfd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23BFD0u;
    {
        const bool branch_taken_0x23bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFD0u;
        // 0x23bfd4: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfd0) {
            ctx->pc = 0x23BFE0u;
            goto label_23bfe0;
        }
    }
    ctx->pc = 0x23BFD8u;
label_23bfd8:
    // 0x23bfd8: 0x9462006a  lhu         $v0, 0x6A($v1)
    ctx->pc = 0x23bfd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x23bfdc: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x23bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
label_23bfe0:
    // 0x23bfe0: 0xa462006a  sh          $v0, 0x6A($v1)
    ctx->pc = 0x23bfe0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x23bfe4: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x23bfe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23bfe8: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x23bfe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23bfec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23BFECu;
    {
        const bool branch_taken_0x23bfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFECu;
        // 0x23bff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfec) {
            ctx->pc = 0x23C038u;
            goto label_23c038;
        }
    }
    ctx->pc = 0x23BFF4u;
    // 0x23bff4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x23bff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23bff8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23BFF8u;
    {
        const bool branch_taken_0x23bff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFF8u;
        // 0x23bffc: 0x26f04d28  addiu       $s0, $s7, 0x4D28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 19752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bff8) {
            ctx->pc = 0x23C03Cu;
            goto label_23c03c;
        }
    }
    ctx->pc = 0x23C000u;
    // 0x23c000: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23c000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23c004: 0x26e44d28  addiu       $a0, $s7, 0x4D28
    ctx->pc = 0x23c004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 19752));
    // 0x23c008: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23c008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23c00c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23c010: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x23c010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x23c014: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x23c014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x23c018: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C018u;
    {
        const bool branch_taken_0x23c018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C018u;
        // 0x23c01c: 0x269511f8  addiu       $s5, $s4, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c018) {
            ctx->pc = 0x23C040u;
            goto label_23c040;
        }
    }
    ctx->pc = 0x23C020u;
    // 0x23c020: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23c024: 0x27c42c18  addiu       $a0, $fp, 0x2C18
    ctx->pc = 0x23c024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 11288));
    // 0x23c028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c02c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23c030: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23c030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c034: 0x8c650200  lw          $a1, 0x200($v1)
    ctx->pc = 0x23c034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
label_23c038:
    // 0x23c038: 0x26f04d28  addiu       $s0, $s7, 0x4D28
    ctx->pc = 0x23c038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 19752));
label_23c03c:
    // 0x23c03c: 0x269511f8  addiu       $s5, $s4, 0x11F8
    ctx->pc = 0x23c03cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
label_23c040:
    // 0x23c040: 0xae0500a0  sw          $a1, 0xA0($s0)
    ctx->pc = 0x23c040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 5));
    // 0x23c044: 0xc089584  jal         func_225610
    ctx->pc = 0x23C044u;
    SET_GPR_U32(ctx, 31, 0x23C04Cu);
    ctx->pc = 0x23C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C044u;
    // 0x23c048: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225610u, 0x23C044u, 0x23C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C04Cu;
label_23c04c:
    // 0x23c04c: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x23c04cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23c050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23c050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c054: 0xc08c4a4  jal         func_231290
    ctx->pc = 0x23C054u;
    SET_GPR_U32(ctx, 31, 0x23C05Cu);
    ctx->pc = 0x23C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C054u;
    // 0x23c058: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231290u, 0x23C054u, 0x23C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C05Cu;
label_23c05c:
    // 0x23c05c: 0x8ea60020  lw          $a2, 0x20($s5)
    ctx->pc = 0x23c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x23c060: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x23c060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x23c064: 0x2484c338  addiu       $a0, $a0, -0x3CC8
    ctx->pc = 0x23c064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951736));
    // 0x23c068: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x23c068u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23c06c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x23c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23c070: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x23c070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x23c074: 0xa3980a  movz        $s3, $a1, $v1
    ctx->pc = 0x23c074u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
    // 0x23c078: 0x24960002  addiu       $s6, $a0, 0x2
    ctx->pc = 0x23c078u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x23c07c: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x23c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23c080: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x23c080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x23c084: 0x1338c0  sll         $a3, $s3, 3
    ctx->pc = 0x23c084u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x23c088: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23c088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23c08c: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x23c08cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x23c090: 0xf63821  addu        $a3, $a3, $s6
    ctx->pc = 0x23c090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x23c094: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x23c094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23c098: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x23c098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23c09c: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x23c09cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x23c0a0: 0x28a50002  slti        $a1, $a1, 0x2
    ctx->pc = 0x23c0a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23c0a4: 0xc3a00a  movz        $s4, $a2, $v1
    ctx->pc = 0x23c0a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
    // 0x23c0a8: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x23c0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x23c0ac: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x23c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x23c0b0: 0xc089356  jal         func_224D58
    ctx->pc = 0x23C0B0u;
    SET_GPR_U32(ctx, 31, 0x23C0B8u);
    ctx->pc = 0x23C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0B0u;
    // 0x23c0b4: 0xae280008  sw          $t0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224D58u, 0x23C0B0u, 0x23C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0B8u;
label_23c0b8:
    // 0x23c0b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C0B8u;
    {
        const bool branch_taken_0x23c0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0B8u;
        // 0x23c0bc: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0b8) {
            ctx->pc = 0x23C0D0u;
            goto label_23c0d0;
        }
    }
    ctx->pc = 0x23C0C0u;
    // 0x23c0c0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23c0c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x23c0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x23c0c8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x23c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x23c0cc: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x23c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_23c0d0:
    // 0x23c0d0: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x23c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23c0d4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x23c0d8: 0x28a50002  slti        $a1, $a1, 0x2
    ctx->pc = 0x23c0d8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23c0dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x23c0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c0e0: 0xc089356  jal         func_224D58
    ctx->pc = 0x23C0E0u;
    SET_GPR_U32(ctx, 31, 0x23C0E8u);
    ctx->pc = 0x23C0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0E0u;
    // 0x23c0e4: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224D58u, 0x23C0E0u, 0x23C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0E8u;
label_23c0e8:
    // 0x23c0e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C0E8u;
    {
        const bool branch_taken_0x23c0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c0e8) {
            ctx->pc = 0x23C0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C0E8u;
            // 0x23c0ec: 0x96420004  lhu         $v0, 0x4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C100u;
            goto label_23c100;
        }
    }
    ctx->pc = 0x23C0F0u;
    // 0x23c0f0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23c0f4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x23c0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x23c0f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x23c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x23c0fc: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x23c0fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_23c100:
    // 0x23c100: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23C100u;
    {
        const bool branch_taken_0x23c100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C100u;
        // 0x23c104: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c100) {
            ctx->pc = 0x23C168u;
            goto label_23c168;
        }
    }
    ctx->pc = 0x23C108u;
    // 0x23c108: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23c10c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23c10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23c110: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C110u;
    {
        const bool branch_taken_0x23c110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C110u;
        // 0x23c114: 0x30420020  andi        $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c110) {
            ctx->pc = 0x23C130u;
            goto label_23c130;
        }
    }
    ctx->pc = 0x23C118u;
    // 0x23c118: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23c11c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23c11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23c120: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23C120u;
    {
        const bool branch_taken_0x23c120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C120u;
        // 0x23c124: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c120) {
            ctx->pc = 0x23C150u;
            goto label_23c150;
        }
    }
    ctx->pc = 0x23C128u;
    // 0x23c128: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23C128u;
    {
        const bool branch_taken_0x23c128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C128u;
        // 0x23c12c: 0xae330020  sw          $s3, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c128) {
            ctx->pc = 0x23C14Cu;
            goto label_23c14c;
        }
    }
    ctx->pc = 0x23C130u;
label_23c130:
    // 0x23c130: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23C130u;
    {
        const bool branch_taken_0x23c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c130) {
            ctx->pc = 0x23C168u;
            goto label_23c168;
        }
    }
    ctx->pc = 0x23C138u;
    // 0x23c138: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x23c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x23c13c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23c13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x23c140: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C140u;
    {
        const bool branch_taken_0x23c140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C140u;
        // 0x23c144: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c140) {
            ctx->pc = 0x23C160u;
            goto label_23c160;
        }
    }
    ctx->pc = 0x23C148u;
    // 0x23c148: 0xaeb40020  sw          $s4, 0x20($s5)
    ctx->pc = 0x23c148u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 20));
label_23c14c:
    // 0x23c14c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_23c150:
    // 0x23c150: 0xc081546  jal         func_205518
    ctx->pc = 0x23C150u;
    SET_GPR_U32(ctx, 31, 0x23C158u);
    ctx->pc = 0x23C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C150u;
    // 0x23c154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23C150u, 0x23C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C158u;
label_23c158:
    // 0x23c158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23C158u;
    {
        const bool branch_taken_0x23c158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c158) {
            ctx->pc = 0x23C168u;
            goto label_23c168;
        }
    }
    ctx->pc = 0x23C160u;
label_23c160:
    // 0x23c160: 0xc081546  jal         func_205518
    ctx->pc = 0x23C160u;
    SET_GPR_U32(ctx, 31, 0x23C168u);
    ctx->pc = 0x23C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C160u;
    // 0x23c164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23C160u, 0x23C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C168u;
label_23c168:
    // 0x23c168: 0xc089584  jal         func_225610
    ctx->pc = 0x23C168u;
    SET_GPR_U32(ctx, 31, 0x23C170u);
    ctx->pc = 0x225610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225610u, 0x23C168u, 0x23C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C170u;
label_23c170:
    // 0x23c170: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23C170u;
    {
        const bool branch_taken_0x23c170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c170) {
            ctx->pc = 0x23C1C0u;
            goto label_23c1c0;
        }
    }
    ctx->pc = 0x23C178u;
    // 0x23c178: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23C178u;
    SET_GPR_U32(ctx, 31, 0x23C180u);
    ctx->pc = 0x23C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C178u;
    // 0x23c17c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23C178u, 0x23C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C180u;
label_23c180:
    // 0x23c180: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23c180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x23c184: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23C184u;
    {
        const bool branch_taken_0x23c184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C184u;
        // 0x23c188: 0x3c0501fc  lui         $a1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c184) {
            ctx->pc = 0x23C1C0u;
            goto label_23c1c0;
        }
    }
    ctx->pc = 0x23C18Cu;
    // 0x23c18c: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x23c18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x23c190: 0x24a311f8  addiu       $v1, $a1, 0x11F8
    ctx->pc = 0x23c190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
    // 0x23c194: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23c194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c198: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23c19c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23c19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23c1a0: 0x24a54830  addiu       $a1, $a1, 0x4830
    ctx->pc = 0x23c1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18480));
    // 0x23c1a4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x23c1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x23c1a8: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x23C1A8u;
    SET_GPR_U32(ctx, 31, 0x23C1B0u);
    ctx->pc = 0x23C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C1A8u;
    // 0x23c1ac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x23C1A8u, 0x23C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1B0u;
label_23c1b0:
    // 0x23c1b0: 0xc08c070  jal         func_2301C0
    ctx->pc = 0x23C1B0u;
    SET_GPR_U32(ctx, 31, 0x23C1B8u);
    ctx->pc = 0x23C1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C1B0u;
    // 0x23c1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301C0u, 0x23C1B0u, 0x23C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1B8u;
label_23c1b8:
    // 0x23c1b8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x23C1B8u;
    {
        const bool branch_taken_0x23c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B8u;
        // 0x23c1bc: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1b8) {
            ctx->pc = 0x23C2B8u;
            goto label_23c2b8;
        }
    }
    ctx->pc = 0x23C1C0u;
label_23c1c0:
    // 0x23c1c0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23C1C0u;
    SET_GPR_U32(ctx, 31, 0x23C1C8u);
    ctx->pc = 0x23C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C1C0u;
    // 0x23c1c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23C1C0u, 0x23C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1C8u;
label_23c1c8:
    // 0x23c1c8: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x23c1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x23c1cc: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x23C1CCu;
    {
        const bool branch_taken_0x23c1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1CCu;
        // 0x23c1d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1cc) {
            ctx->pc = 0x23C2B4u;
            goto label_23c2b4;
        }
    }
    ctx->pc = 0x23C1D4u;
    // 0x23c1d4: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x23c1d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23c1d8: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23C1D8u;
    {
        const bool branch_taken_0x23c1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c1d8) {
            ctx->pc = 0x23C1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C1D8u;
            // 0x23c1dc: 0x96420004  lhu         $v0, 0x4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C234u;
            goto label_23c234;
        }
    }
    ctx->pc = 0x23C1E0u;
    // 0x23c1e0: 0x26e34d28  addiu       $v1, $s7, 0x4D28
    ctx->pc = 0x23c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 19752));
    // 0x23c1e4: 0x9462006a  lhu         $v0, 0x6A($v1)
    ctx->pc = 0x23c1e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x23c1e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23c1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23c1ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23C1ECu;
    {
        const bool branch_taken_0x23c1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1ECu;
        // 0x23c1f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1ec) {
            ctx->pc = 0x23C22Cu;
            goto label_23c22c;
        }
    }
    ctx->pc = 0x23C1F4u;
    // 0x23c1f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23c1f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23c1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c1fc: 0x0  nop
    ctx->pc = 0x23c1fcu;
    // NOP
label_23c200:
    // 0x23c200: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x23c200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23c204: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C204u;
    {
        const bool branch_taken_0x23c204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C204u;
        // 0x23c208: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c204) {
            ctx->pc = 0x23C22Cu;
            goto label_23c22c;
        }
    }
    ctx->pc = 0x23C20Cu;
    // 0x23c20c: 0x26e44d28  addiu       $a0, $s7, 0x4D28
    ctx->pc = 0x23c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 19752));
    // 0x23c210: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x23c210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c214: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x23c214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x23c218: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23c21c: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x23c21cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x23c220: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x23c220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x23c224: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x23C224u;
    {
        const bool branch_taken_0x23c224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c224) {
            ctx->pc = 0x23C228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C224u;
            // 0x23c228: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c200;
        }
    }
    ctx->pc = 0x23C22Cu;
label_23c22c:
    // 0x23c22c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x23C22Cu;
    {
        const bool branch_taken_0x23c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C22Cu;
        // 0x23c230: 0xa6460004  sh          $a2, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c22c) {
            ctx->pc = 0x23C2B4u;
            goto label_23c2b4;
        }
    }
    ctx->pc = 0x23C234u;
label_23c234:
    // 0x23c234: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x23c234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x23c238: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x23c238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x23c23c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x23C23Cu;
    {
        const bool branch_taken_0x23c23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C23Cu;
        // 0x23c240: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c23c) {
            ctx->pc = 0x23C2B4u;
            goto label_23c2b4;
        }
    }
    ctx->pc = 0x23C244u;
    // 0x23c244: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x23c244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x23c248: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23c248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23c24c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23C24Cu;
    {
        const bool branch_taken_0x23c24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C24Cu;
        // 0x23c250: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c24c) {
            ctx->pc = 0x23C2B8u;
            goto label_23c2b8;
        }
    }
    ctx->pc = 0x23C254u;
    // 0x23c254: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23c258: 0x27c42c18  addiu       $a0, $fp, 0x2C18
    ctx->pc = 0x23c258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 11288));
    // 0x23c25c: 0x8f83b73c  lw          $v1, -0x48C4($gp)
    ctx->pc = 0x23c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x23c260: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x23c260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x23c264: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c268: 0x24a71308  addiu       $a3, $a1, 0x1308
    ctx->pc = 0x23c268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
    // 0x23c26c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23c270: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x23c270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23c274: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x23c274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c278: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23c278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23c27c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23c27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23c280: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c284: 0x8cc20408  lw          $v0, 0x408($a2)
    ctx->pc = 0x23c284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1032)));
    // 0x23c288: 0x24a54d08  addiu       $a1, $a1, 0x4D08
    ctx->pc = 0x23c288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19720));
    // 0x23c28c: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x23C28Cu;
    SET_GPR_U32(ctx, 31, 0x23C294u);
    ctx->pc = 0x23C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C28Cu;
    // 0x23c290: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x23C28Cu, 0x23C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C294u;
label_23c294:
    // 0x23c294: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x23C294u;
    SET_GPR_U32(ctx, 31, 0x23C29Cu);
    ctx->pc = 0x23C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C294u;
    // 0x23c298: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x23C294u, 0x23C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C29Cu;
label_23c29c:
    // 0x23c29c: 0xc08c070  jal         func_2301C0
    ctx->pc = 0x23C29Cu;
    SET_GPR_U32(ctx, 31, 0x23C2A4u);
    ctx->pc = 0x23C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C29Cu;
    // 0x23c2a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301C0u, 0x23C29Cu, 0x23C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2A4u;
label_23c2a4:
    // 0x23c2a4: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x23c2a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23c2a8: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23c2ac: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x23c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x23c2b0: 0xac6218e4  sw          $v0, 0x18E4($v1)
    ctx->pc = 0x23c2b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1FC18E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC18E4u, _value); } while (0);
label_23c2b4:
    // 0x23c2b4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_23c2b8:
    // 0x23c2b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c2bc: 0x24504d18  addiu       $s0, $v0, 0x4D18
    ctx->pc = 0x23c2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19736));
    // 0x23c2c0: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23C2C0u;
    SET_GPR_U32(ctx, 31, 0x23C2C8u);
    ctx->pc = 0x23C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2C0u;
    // 0x23c2c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23C2C0u, 0x23C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2C8u;
label_23c2c8:
    // 0x23c2c8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x23c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23c2cc: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23C2CCu;
    SET_GPR_U32(ctx, 31, 0x23C2D4u);
    ctx->pc = 0x23C2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2CCu;
    // 0x23c2d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23C2CCu, 0x23C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2D4u;
label_23c2d4:
    // 0x23c2d4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x23c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x23c2d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x23c2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23c2dc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x23c2dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23c2e0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x23c2e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23c2e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x23c2e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23c2e8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x23c2e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23c2ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23c2ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23c2f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x23c2f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c2f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23c2f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c2f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x23c2f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c2fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23c2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c300: 0x3e00008  jr          $ra
    ctx->pc = 0x23C300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C300u;
        // 0x23c304: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C308u;
}
