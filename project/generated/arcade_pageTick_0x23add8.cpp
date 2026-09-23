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

// Function: arcade_pageTick
// Address: 0x23add8 - 0x23b54c
void arcade_pageTick_0x23add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("arcade_pageTick_0x23add8");
#endif

    switch (ctx->pc) {
        case 0x23ae4cu: goto label_23ae4c;
        case 0x23ae54u: goto label_23ae54;
        case 0x23aeb0u: goto label_23aeb0;
        case 0x23aec8u: goto label_23aec8;
        case 0x23aef8u: goto label_23aef8;
        case 0x23af10u: goto label_23af10;
        case 0x23af7cu: goto label_23af7c;
        case 0x23af8cu: goto label_23af8c;
        case 0x23afd0u: goto label_23afd0;
        case 0x23b040u: goto label_23b040;
        case 0x23b088u: goto label_23b088;
        case 0x23b0a0u: goto label_23b0a0;
        case 0x23b130u: goto label_23b130;
        case 0x23b334u: goto label_23b334;
        case 0x23b33cu: goto label_23b33c;
        case 0x23b348u: goto label_23b348;
        case 0x23b35cu: goto label_23b35c;
        case 0x23b380u: goto label_23b380;
        case 0x23b388u: goto label_23b388;
        case 0x23b398u: goto label_23b398;
        case 0x23b3c4u: goto label_23b3c4;
        case 0x23b418u: goto label_23b418;
        case 0x23b420u: goto label_23b420;
        case 0x23b450u: goto label_23b450;
        case 0x23b46cu: goto label_23b46c;
        case 0x23b480u: goto label_23b480;
        case 0x23b490u: goto label_23b490;
        case 0x23b4b4u: goto label_23b4b4;
        case 0x23b4e0u: goto label_23b4e0;
        case 0x23b4f8u: goto label_23b4f8;
        case 0x23b50cu: goto label_23b50c;
        case 0x23b518u: goto label_23b518;
        default: break;
    }

    ctx->pc = 0x23add8u;

    // 0x23add8: 0x8f82b73c  lw          $v0, -0x48C4($gp)
    ctx->pc = 0x23add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x23addc: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x23addcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x23ade0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23ade4: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x23ade4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x23ade8: 0x24a61308  addiu       $a2, $a1, 0x1308
    ctx->pc = 0x23ade8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
    // 0x23adec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23adf0: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x23adf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x23adf4: 0xffb500e0  sd          $s5, 0xE0($sp)
    ctx->pc = 0x23adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x23adf8: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x23adf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x23adfc: 0x24e52c18  addiu       $a1, $a3, 0x2C18
    ctx->pc = 0x23adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 11288));
    // 0x23ae00: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x23ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x23ae04: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23ae08: 0xffb70100  sd          $s7, 0x100($sp)
    ctx->pc = 0x23ae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x23ae0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23ae10: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x23ae10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x23ae14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23ae18: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x23ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x23ae1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23ae20: 0xffb300c0  sd          $s3, 0xC0($sp)
    ctx->pc = 0x23ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x23ae24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23ae24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae28: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x23ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x23ae2c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23ae30: 0xffb100a0  sd          $s1, 0xA0($sp)
    ctx->pc = 0x23ae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x23ae34: 0x24a54c98  addiu       $a1, $a1, 0x4C98
    ctx->pc = 0x23ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19608));
    // 0x23ae38: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x23ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x23ae3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23ae40: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23ae40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ae44: 0xc08c086  jal         func_230218
    ctx->pc = 0x23AE44u;
    SET_GPR_U32(ctx, 31, 0x23AE4Cu);
    ctx->pc = 0x23AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE44u;
    // 0x23ae48: 0x8cc401e4  lw          $a0, 0x1E4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x23AE44u, 0x23AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE4Cu;
label_23ae4c:
    // 0x23ae4c: 0xc08a984  jal         func_22A610
    ctx->pc = 0x23AE4Cu;
    SET_GPR_U32(ctx, 31, 0x23AE54u);
    ctx->pc = 0x23AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE4Cu;
    // 0x23ae50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x23AE4Cu, 0x23AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE54u;
label_23ae54:
    // 0x23ae54: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ae58: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x23ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23ae5c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23ae5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23ae60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23AE60u;
    {
        const bool branch_taken_0x23ae60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ae60) {
            ctx->pc = 0x23AE80u;
            goto label_23ae80;
        }
    }
    ctx->pc = 0x23AE68u;
    // 0x23ae68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23ae6c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23ae70: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x23ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x23ae74: 0x24634a90  addiu       $v1, $v1, 0x4A90
    ctx->pc = 0x23ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19088));
    // 0x23ae78: 0x108301a9  beq         $a0, $v1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x23AE78u;
    {
        const bool branch_taken_0x23ae78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE78u;
        // 0x23ae7c: 0xdfbf0120  ld          $ra, 0x120($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae78) {
            ctx->pc = 0x23B520u;
            goto label_23b520;
        }
    }
    ctx->pc = 0x23AE80u;
label_23ae80:
    // 0x23ae80: 0x3c1601fc  lui         $s6, 0x1FC
    ctx->pc = 0x23ae80u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)508 << 16));
    // 0x23ae84: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x23ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x23ae88: 0x26c311f8  addiu       $v1, $s6, 0x11F8
    ctx->pc = 0x23ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
    // 0x23ae8c: 0x3c170035  lui         $s7, 0x35
    ctx->pc = 0x23ae8cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
    // 0x23ae90: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC1200u));
    // 0x23ae94: 0x26f04aa0  addiu       $s0, $s7, 0x4AA0
    ctx->pc = 0x23ae94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 19104));
    // 0x23ae98: 0x8c710024  lw          $s1, 0x24($v1)
    ctx->pc = 0x23ae98u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x1FC121Cu));
    // 0x23ae9c: 0x3c1e0035  lui         $fp, 0x35
    ctx->pc = 0x23ae9cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)53 << 16));
    // 0x23aea0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23aea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23aea4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x23aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x23aea8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23aea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23aeac: 0x0  nop
    ctx->pc = 0x23aeacu;
    // NOP
label_23aeb0:
    // 0x23aeb0: 0x2a230013  slti        $v1, $s1, 0x13
    ctx->pc = 0x23aeb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x23aeb4: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x23aeb4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x23aeb8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23aebc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23aec0: 0xc089374  jal         func_224DD0
    ctx->pc = 0x23AEC0u;
    SET_GPR_U32(ctx, 31, 0x23AEC8u);
    ctx->pc = 0x23AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEC0u;
    // 0x23aec4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224DD0u, 0x23AEC0u, 0x23AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEC8u;
label_23aec8:
    // 0x23aec8: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23AEC8u;
    {
        const bool branch_taken_0x23aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aec8) {
            ctx->pc = 0x23AECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AEC8u;
            // 0x23aecc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23aeb0;
        }
    }
    ctx->pc = 0x23AED0u;
    // 0x23aed0: 0x26c211f8  addiu       $v0, $s6, 0x11F8
    ctx->pc = 0x23aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
    // 0x23aed4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x23aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x23aed8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23aedc: 0x24944aa0  addiu       $s4, $a0, 0x4AA0
    ctx->pc = 0x23aedcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x23aee0: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x23aee0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x23aee4: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x23aee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23aee8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x23aee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x23aeec: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x23aeecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23aef0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x23aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x23aef4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x23aef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_23aef8:
    // 0x23aef8: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x23aef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23aefc: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x23aefcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x23af00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23af00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23af04: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23af08: 0xc089374  jal         func_224DD0
    ctx->pc = 0x23AF08u;
    SET_GPR_U32(ctx, 31, 0x23AF10u);
    ctx->pc = 0x23AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF08u;
    // 0x23af0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224DD0u, 0x23AF08u, 0x23AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF10u;
label_23af10:
    // 0x23af10: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23AF10u;
    {
        const bool branch_taken_0x23af10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23af10) {
            ctx->pc = 0x23AF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AF10u;
            // 0x23af14: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23aef8;
        }
    }
    ctx->pc = 0x23AF18u;
    // 0x23af18: 0x26c511f8  addiu       $a1, $s6, 0x11F8
    ctx->pc = 0x23af18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
    // 0x23af1c: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x23af1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23af20: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23af24: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23af24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23af28: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x23af28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x23af2c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23AF2Cu;
    {
        const bool branch_taken_0x23af2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF2Cu;
        // 0x23af30: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af2c) {
            ctx->pc = 0x23AF8Cu;
            goto label_23af8c;
        }
    }
    ctx->pc = 0x23AF34u;
    // 0x23af34: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23af34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23af38: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23af38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23af3c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23af3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23af40: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AF40u;
    {
        const bool branch_taken_0x23af40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF40u;
        // 0x23af44: 0x30420020  andi        $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af40) {
            ctx->pc = 0x23AF5Cu;
            goto label_23af5c;
        }
    }
    ctx->pc = 0x23AF48u;
    // 0x23af48: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x23af48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x23af4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23AF4Cu;
    {
        const bool branch_taken_0x23af4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF4Cu;
        // 0x23af50: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af4c) {
            ctx->pc = 0x23AF74u;
            goto label_23af74;
        }
    }
    ctx->pc = 0x23AF54u;
    // 0x23af54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23AF54u;
    {
        const bool branch_taken_0x23af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF54u;
        // 0x23af58: 0xacb00024  sw          $s0, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af54) {
            ctx->pc = 0x23AF70u;
            goto label_23af70;
        }
    }
    ctx->pc = 0x23AF5Cu;
label_23af5c:
    // 0x23af5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23AF5Cu;
    {
        const bool branch_taken_0x23af5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF5Cu;
        // 0x23af60: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af5c) {
            ctx->pc = 0x23AF8Cu;
            goto label_23af8c;
        }
    }
    ctx->pc = 0x23AF64u;
    // 0x23af64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23AF64u;
    {
        const bool branch_taken_0x23af64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF64u;
        // 0x23af68: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af64) {
            ctx->pc = 0x23AF84u;
            goto label_23af84;
        }
    }
    ctx->pc = 0x23AF6Cu;
    // 0x23af6c: 0xacb10024  sw          $s1, 0x24($a1)
    ctx->pc = 0x23af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 17));
label_23af70:
    // 0x23af70: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23af70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_23af74:
    // 0x23af74: 0xc081546  jal         func_205518
    ctx->pc = 0x23AF74u;
    SET_GPR_U32(ctx, 31, 0x23AF7Cu);
    ctx->pc = 0x23AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF74u;
    // 0x23af78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23AF74u, 0x23AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF7Cu;
label_23af7c:
    // 0x23af7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23AF7Cu;
    {
        const bool branch_taken_0x23af7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF7Cu;
        // 0x23af80: 0x26c611f8  addiu       $a2, $s6, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af7c) {
            ctx->pc = 0x23AF90u;
            goto label_23af90;
        }
    }
    ctx->pc = 0x23AF84u;
label_23af84:
    // 0x23af84: 0xc081546  jal         func_205518
    ctx->pc = 0x23AF84u;
    SET_GPR_U32(ctx, 31, 0x23AF8Cu);
    ctx->pc = 0x23AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF84u;
    // 0x23af88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23AF84u, 0x23AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF8Cu;
label_23af8c:
    // 0x23af8c: 0x26c611f8  addiu       $a2, $s6, 0x11F8
    ctx->pc = 0x23af8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
label_23af90:
    // 0x23af90: 0x26e44aa0  addiu       $a0, $s7, 0x4AA0
    ctx->pc = 0x23af90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 19104));
    // 0x23af94: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x23af94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x23af98: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x23af98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23af9c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23afa0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23afa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23afa8: 0x14a70011  bne         $a1, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x23AFA8u;
    {
        const bool branch_taken_0x23afa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x23AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFA8u;
        // 0x23afac: 0xacc30028  sw          $v1, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afa8) {
            ctx->pc = 0x23AFF0u;
            goto label_23aff0;
        }
    }
    ctx->pc = 0x23AFB0u;
    // 0x23afb0: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x23afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x23afb4: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x23afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x23afb8: 0x34424626  ori         $v0, $v0, 0x4626
    ctx->pc = 0x23afb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17958);
    // 0x23afbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23afc0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23AFC0u;
    {
        const bool branch_taken_0x23afc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFC0u;
        // 0x23afc4: 0x27c34b38  addiu       $v1, $fp, 0x4B38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afc0) {
            ctx->pc = 0x23AFF4u;
            goto label_23aff4;
        }
    }
    ctx->pc = 0x23AFC8u;
    // 0x23afc8: 0xc094dc4  jal         func_253710
    ctx->pc = 0x23AFC8u;
    SET_GPR_U32(ctx, 31, 0x23AFD0u);
    ctx->pc = 0x23AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFC8u;
    // 0x23afcc: 0x26d011f8  addiu       $s0, $s6, 0x11F8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253710u, 0x23AFC8u, 0x23AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFD0u;
label_23afd0:
    // 0x23afd0: 0x27c54b38  addiu       $a1, $fp, 0x4B38
    ctx->pc = 0x23afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 19256));
    // 0x23afd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23afd8: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x23afd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x23afdc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x23afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x23afe0: 0xac644278  sw          $a0, 0x4278($v1)
    ctx->pc = 0x23afe0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x334278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x334278u, _value); } while (0);
    // 0x23afe4: 0x3042bdff  andi        $v0, $v0, 0xBDFF
    ctx->pc = 0x23afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48639);
    // 0x23afe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23AFE8u;
    {
        const bool branch_taken_0x23afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFE8u;
        // 0x23afec: 0xa4a2000a  sh          $v0, 0xA($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afe8) {
            ctx->pc = 0x23B004u;
            goto label_23b004;
        }
    }
    ctx->pc = 0x23AFF0u;
label_23aff0:
    // 0x23aff0: 0x27c34b38  addiu       $v1, $fp, 0x4B38
    ctx->pc = 0x23aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19256));
label_23aff4:
    // 0x23aff4: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x23aff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x23aff8: 0x34424200  ori         $v0, $v0, 0x4200
    ctx->pc = 0x23aff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16896);
    // 0x23affc: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x23affcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23b000: 0x26d011f8  addiu       $s0, $s6, 0x11F8
    ctx->pc = 0x23b000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
label_23b004:
    // 0x23b004: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23b008: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x23b008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x23b00c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23B00Cu;
    {
        const bool branch_taken_0x23b00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B00Cu;
        // 0x23b010: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b00c) {
            ctx->pc = 0x23B064u;
            goto label_23b064;
        }
    }
    ctx->pc = 0x23B014u;
    // 0x23b014: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x23b014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x23b018: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23B018u;
    {
        const bool branch_taken_0x23b018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b018) {
            ctx->pc = 0x23B01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B018u;
            // 0x23b01c: 0x27d04b38  addiu       $s0, $fp, 0x4B38 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 19256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B068u;
            goto label_23b068;
        }
    }
    ctx->pc = 0x23B020u;
    // 0x23b020: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x23b020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x23b024: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x23b024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x23b028: 0x34424626  ori         $v0, $v0, 0x4626
    ctx->pc = 0x23b028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17958);
    // 0x23b02c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b030: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23B030u;
    {
        const bool branch_taken_0x23b030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b030) {
            ctx->pc = 0x23B034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B030u;
            // 0x23b034: 0x27d04b38  addiu       $s0, $fp, 0x4B38 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 19256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B068u;
            goto label_23b068;
        }
    }
    ctx->pc = 0x23B038u;
    // 0x23b038: 0xc094dc4  jal         func_253710
    ctx->pc = 0x23B038u;
    SET_GPR_U32(ctx, 31, 0x23B040u);
    ctx->pc = 0x253710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253710u, 0x23B038u, 0x23B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B040u;
label_23b040:
    // 0x23b040: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23b044: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x23b044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x23b048: 0x94460008  lhu         $a2, 0x8($v0)
    ctx->pc = 0x23b048u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23b04c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23b04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23b050: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23b050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23b054: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23b054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x23b058: 0xac464b00  sw          $a2, 0x4B00($v0)
    ctx->pc = 0x23b058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19200), GPR_U32(ctx, 6));
    // 0x23b05c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x23b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x23b060: 0xa6a50004  sh          $a1, 0x4($s5)
    ctx->pc = 0x23b060u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 5));
label_23b064:
    // 0x23b064: 0x27d04b38  addiu       $s0, $fp, 0x4B38
    ctx->pc = 0x23b064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 19256));
label_23b068:
    // 0x23b068: 0x26d111f8  addiu       $s1, $s6, 0x11F8
    ctx->pc = 0x23b068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
    // 0x23b06c: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x23b06cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x23b070: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23b070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b074: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x23b074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x23b078: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x23b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x23b07c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23b080: 0xc089e6e  jal         func_2279B8
    ctx->pc = 0x23B080u;
    SET_GPR_U32(ctx, 31, 0x23B088u);
    ctx->pc = 0x23B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B080u;
    // 0x23b084: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2279B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2279B8u, 0x23B080u, 0x23B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B088u;
label_23b088:
    // 0x23b088: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x23b088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x23b08c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x23b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x23b090: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x23b090u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b094: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x23b094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b098: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x23b098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23b09c: 0x0  nop
    ctx->pc = 0x23b09cu;
    // NOP
label_23b0a0:
    // 0x23b0a0: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x23b0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x23b0a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x23b0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23b0a8: 0x34424240  ori         $v0, $v0, 0x4240
    ctx->pc = 0x23b0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16960);
    // 0x23b0ac: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x23b0acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23b0b0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x23b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x23b0b4: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B0B4u;
    {
        const bool branch_taken_0x23b0b4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x23b0b4) {
            ctx->pc = 0x23B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b0a0;
        }
    }
    ctx->pc = 0x23B0BCu;
    // 0x23b0bc: 0x26c611f8  addiu       $a2, $s6, 0x11F8
    ctx->pc = 0x23b0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
    // 0x23b0c0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x23b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23b0c4: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x23b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x23b0c8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B0C8u;
    {
        const bool branch_taken_0x23b0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0C8u;
        // 0x23b0cc: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0c8) {
            ctx->pc = 0x23B0ECu;
            goto label_23b0ec;
        }
    }
    ctx->pc = 0x23B0D0u;
    // 0x23b0d0: 0x8f82a0d0  lw          $v0, -0x5F30($gp)
    ctx->pc = 0x23b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x23b0d4: 0x3c030132  lui         $v1, 0x132
    ctx->pc = 0x23b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)306 << 16));
    // 0x23b0d8: 0x34634626  ori         $v1, $v1, 0x4626
    ctx->pc = 0x23b0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17958);
    // 0x23b0dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b0e0: 0x14830047  bne         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x23B0E0u;
    {
        const bool branch_taken_0x23b0e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x23B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0E0u;
        // 0x23b0e4: 0x26c211f8  addiu       $v0, $s6, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0e0) {
            ctx->pc = 0x23B200u;
            goto label_23b200;
        }
    }
    ctx->pc = 0x23B0E8u;
    // 0x23b0e8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_23b0ec:
    // 0x23b0ec: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23b0f0: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x23b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x23b0f4: 0x8f84b730  lw          $a0, -0x48D0($gp)
    ctx->pc = 0x23b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23b0f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b0fc: 0x93859ab5  lbu         $a1, -0x654B($gp)
    ctx->pc = 0x23b0fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x23b100: 0x626821  addu        $t5, $v1, $v0
    ctx->pc = 0x23b100u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b104: 0x8f899a9c  lw          $t1, -0x6564($gp)
    ctx->pc = 0x23b104u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x23b108: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23b108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23b10c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23b110: 0x288e0003  slti        $t6, $a0, 0x3
    ctx->pc = 0x23b110u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23b114: 0x30ac0001  andi        $t4, $a1, 0x1
    ctx->pc = 0x23b114u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x23b118: 0x2454c3a8  addiu       $s4, $v0, -0x3C58
    ctx->pc = 0x23b118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951848));
    // 0x23b11c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x23b11cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b120: 0x24684af0  addiu       $t0, $v1, 0x4AF0
    ctx->pc = 0x23b120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19184));
    // 0x23b124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23b124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b128: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x23b128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23b12c: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x23b12cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_23b130:
    // 0x23b130: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x23b130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23b134: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B134u;
    {
        const bool branch_taken_0x23b134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x23b134) {
            ctx->pc = 0x23B144u;
            goto label_23b144;
        }
    }
    ctx->pc = 0x23B13Cu;
    // 0x23b13c: 0x51c0002c  beql        $t6, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x23B13Cu;
    {
        const bool branch_taken_0x23b13c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b13c) {
            ctx->pc = 0x23B140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B13Cu;
            // 0x23b140: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B1F0u;
            goto label_23b1f0;
        }
    }
    ctx->pc = 0x23B144u;
label_23b144:
    // 0x23b144: 0x5140002a  beql        $t2, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x23B144u;
    {
        const bool branch_taken_0x23b144 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b144) {
            ctx->pc = 0x23B148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B144u;
            // 0x23b148: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B1F0u;
            goto label_23b1f0;
        }
    }
    ctx->pc = 0x23B14Cu;
    // 0x23b14c: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x23b14cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x23b150: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x23b150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x23b154: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x23b154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x23b158: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23B158u;
    {
        const bool branch_taken_0x23b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B158u;
        // 0x23b15c: 0x421c0  sll         $a0, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b158) {
            ctx->pc = 0x23B1ECu;
            goto label_23b1ec;
        }
    }
    ctx->pc = 0x23B160u;
    // 0x23b160: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x23b160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23b164: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x23b164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x23b168: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x23b168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x23b16c: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x23b16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23b170: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x23b170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x23b174: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x23b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23b178: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x23b178u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x23b17c: 0x3046bdbf  andi        $a2, $v0, 0xBDBF
    ctx->pc = 0x23b17cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48575);
    // 0x23b180: 0xa606000a  sh          $a2, 0xA($s0)
    ctx->pc = 0x23b180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x23b184: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x23b184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b18c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23b190: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b194: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B194u;
    {
        const bool branch_taken_0x23b194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B194u;
        // 0x23b198: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b194) {
            ctx->pc = 0x23B1A4u;
            goto label_23b1a4;
        }
    }
    ctx->pc = 0x23B19Cu;
    // 0x23b19c: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x23b19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x23b1a0: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x23b1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_23b1a4:
    // 0x23b1a4: 0x8d620038  lw          $v0, 0x38($t3)
    ctx->pc = 0x23b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x23b1a8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x23b1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x23b1ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b1b0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x23b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x23b1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b1b8: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x23b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x23b1bc: 0x11800005  beqz        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B1BCu;
    {
        const bool branch_taken_0x23b1bc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1BCu;
        // 0x23b1c0: 0xad620038  sw          $v0, 0x38($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1bc) {
            ctx->pc = 0x23B1D4u;
            goto label_23b1d4;
        }
    }
    ctx->pc = 0x23B1C4u;
    // 0x23b1c4: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x23b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x23b1c8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x23b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x23b1cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23B1CCu;
    {
        const bool branch_taken_0x23b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1CCu;
        // 0x23b1d0: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1cc) {
            ctx->pc = 0x23B1DCu;
            goto label_23b1dc;
        }
    }
    ctx->pc = 0x23B1D4u;
label_23b1d4:
    // 0x23b1d4: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x23b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x23b1d8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x23b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23b1dc:
    // 0x23b1dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b1e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23b1e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x23b1e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x23b1e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23b1e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b1ec:
    // 0x23b1ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23b1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23b1f0:
    // 0x23b1f0: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x23b1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x23b1f4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x23B1F4u;
    {
        const bool branch_taken_0x23b1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1F4u;
        // 0x23b1f8: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1f4) {
            ctx->pc = 0x23B130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b130;
        }
    }
    ctx->pc = 0x23B1FCu;
    // 0x23b1fc: 0x26c211f8  addiu       $v0, $s6, 0x11F8
    ctx->pc = 0x23b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
label_23b200:
    // 0x23b200: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x23b200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23b204: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x23b204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x23b208: 0x1464002d  bne         $v1, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x23B208u;
    {
        const bool branch_taken_0x23b208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B208u;
        // 0x23b20c: 0x8c460038  lw          $a2, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b208) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23B210u;
    // 0x23b210: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B210u;
    {
        const bool branch_taken_0x23b210 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x23B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B210u;
        // 0x23b214: 0x26420009  addiu       $v0, $s2, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b210) {
            ctx->pc = 0x23B220u;
            goto label_23b220;
        }
    }
    ctx->pc = 0x23B218u;
    // 0x23b218: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23b218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23b21c: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x23b21cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
label_23b220:
    // 0x23b220: 0x8f879354  lw          $a3, -0x6CAC($gp)
    ctx->pc = 0x23b220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23b224: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x23b224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x23b228: 0x24652c18  addiu       $a1, $v1, 0x2C18
    ctx->pc = 0x23b228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x23b22c: 0x93849ab5  lbu         $a0, -0x654B($gp)
    ctx->pc = 0x23b22cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x23b230: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x23b230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x23b234: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x23b234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x23b238: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23b238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23b23c: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x23b23cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x23b240: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23b240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b244: 0x3063bdbf  andi        $v1, $v1, 0xBDBF
    ctx->pc = 0x23b244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48575);
    // 0x23b248: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x23b248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b24c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x23b24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23b250: 0x8ca20660  lw          $v0, 0x660($a1)
    ctx->pc = 0x23b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1632)));
    // 0x23b254: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23b254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23b258: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B258u;
    {
        const bool branch_taken_0x23b258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B258u;
        // 0x23b25c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b258) {
            ctx->pc = 0x23B278u;
            goto label_23b278;
        }
    }
    ctx->pc = 0x23B260u;
    // 0x23b260: 0x8f849a9c  lw          $a0, -0x6564($gp)
    ctx->pc = 0x23b260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x23b264: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x23b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x23b268: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23b26c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23b26cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x23b270: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23B270u;
    {
        const bool branch_taken_0x23b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B270u;
        // 0x23b274: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b270) {
            ctx->pc = 0x23B288u;
            goto label_23b288;
        }
    }
    ctx->pc = 0x23B278u;
label_23b278:
    // 0x23b278: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x23b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x23b27c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x23b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x23b280: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x23b280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23b284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23b288:
    // 0x23b288: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23b288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23b28c: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x23b28cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23b290: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x23b290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x23b294: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x23b294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x23b298: 0x24832c18  addiu       $v1, $a0, 0x2C18
    ctx->pc = 0x23b298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x23b29c: 0xa6050006  sh          $a1, 0x6($s0)
    ctx->pc = 0x23b29cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b2a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b2a4: 0x9604000a  lhu         $a0, 0xA($s0)
    ctx->pc = 0x23b2a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x23b2a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b2ac: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x23b2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x23b2b0: 0x3084bdbf  andi        $a0, $a0, 0xBDBF
    ctx->pc = 0x23b2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48575);
    // 0x23b2b4: 0x8c620664  lw          $v0, 0x664($v1)
    ctx->pc = 0x23b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1636)));
    // 0x23b2b8: 0xa604000a  sh          $a0, 0xA($s0)
    ctx->pc = 0x23b2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x23b2bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_23b2c0:
    // 0x23b2c0: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x23b2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23b2c4: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x23b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x23b2c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23b2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23b2cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B2CCu;
    {
        const bool branch_taken_0x23b2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b2cc) {
            ctx->pc = 0x23B2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B2CCu;
            // 0x23b2d0: 0x96a20004  lhu         $v0, 0x4($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B2E0u;
            goto label_23b2e0;
        }
    }
    ctx->pc = 0x23B2D4u;
    // 0x23b2d4: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x23b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x23b2d8: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x23b2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x23b2dc: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x23b2dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_23b2e0:
    // 0x23b2e0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x23b2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x23b2e4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23B2E4u;
    {
        const bool branch_taken_0x23b2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2E4u;
        // 0x23b2e8: 0x27d04b38  addiu       $s0, $fp, 0x4B38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 19256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2e4) {
            ctx->pc = 0x23B32Cu;
            goto label_23b32c;
        }
    }
    ctx->pc = 0x23B2ECu;
    // 0x23b2ec: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x23b2ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23b2f0: 0x27c44b38  addiu       $a0, $fp, 0x4B38
    ctx->pc = 0x23b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 19256));
    // 0x23b2f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23b2f8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23b2fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23b300: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x23b300u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x23b304: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x23b304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x23b308: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B308u;
    {
        const bool branch_taken_0x23b308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B308u;
        // 0x23b30c: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b308) {
            ctx->pc = 0x23B32Cu;
            goto label_23b32c;
        }
    }
    ctx->pc = 0x23B310u;
    // 0x23b310: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x23b310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x23b314: 0x24a42c18  addiu       $a0, $a1, 0x2C18
    ctx->pc = 0x23b314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x23b318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b31c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23b320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23b320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b324: 0x8c730200  lw          $s3, 0x200($v1)
    ctx->pc = 0x23b324u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x23b328: 0x27d04b38  addiu       $s0, $fp, 0x4B38
    ctx->pc = 0x23b328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 19256));
label_23b32c:
    // 0x23b32c: 0xc08956c  jal         func_2255B0
    ctx->pc = 0x23B32Cu;
    SET_GPR_U32(ctx, 31, 0x23B334u);
    ctx->pc = 0x23B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B32Cu;
    // 0x23b330: 0xae130120  sw          $s3, 0x120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2255B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2255B0u, 0x23B32Cu, 0x23B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B334u;
label_23b334:
    // 0x23b334: 0xc08c4a4  jal         func_231290
    ctx->pc = 0x23B334u;
    SET_GPR_U32(ctx, 31, 0x23B33Cu);
    ctx->pc = 0x23B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B334u;
    // 0x23b338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231290u, 0x23B334u, 0x23B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B33Cu;
label_23b33c:
    // 0x23b33c: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x23b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x23b340: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23B340u;
    SET_GPR_U32(ctx, 31, 0x23B348u);
    ctx->pc = 0x23B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B340u;
    // 0x23b344: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23B340u, 0x23B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B348u;
label_23b348:
    // 0x23b348: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23b348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x23b34c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23B34Cu;
    {
        const bool branch_taken_0x23b34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b34c) {
            ctx->pc = 0x23B390u;
            goto label_23b390;
        }
    }
    ctx->pc = 0x23B354u;
    // 0x23b354: 0xc08956c  jal         func_2255B0
    ctx->pc = 0x23B354u;
    SET_GPR_U32(ctx, 31, 0x23B35Cu);
    ctx->pc = 0x2255B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2255B0u, 0x23B354u, 0x23B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B35Cu;
label_23b35c:
    // 0x23b35c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23B35Cu;
    {
        const bool branch_taken_0x23b35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B35Cu;
        // 0x23b360: 0x26c311f8  addiu       $v1, $s6, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b35c) {
            ctx->pc = 0x23B390u;
            goto label_23b390;
        }
    }
    ctx->pc = 0x23B364u;
    // 0x23b364: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23b364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23b368: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23b36c: 0x24a54830  addiu       $a1, $a1, 0x4830
    ctx->pc = 0x23b36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18480));
    // 0x23b370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b374: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23b374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23b378: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x23B378u;
    SET_GPR_U32(ctx, 31, 0x23B380u);
    ctx->pc = 0x23B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B378u;
    // 0x23b37c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x23B378u, 0x23B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B380u;
label_23b380:
    // 0x23b380: 0xc08c070  jal         func_2301C0
    ctx->pc = 0x23B380u;
    SET_GPR_U32(ctx, 31, 0x23B388u);
    ctx->pc = 0x23B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B380u;
    // 0x23b384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301C0u, 0x23B380u, 0x23B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B388u;
label_23b388:
    // 0x23b388: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x23B388u;
    {
        const bool branch_taken_0x23b388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B388u;
        // 0x23b38c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b388) {
            ctx->pc = 0x23B4FCu;
            goto label_23b4fc;
        }
    }
    ctx->pc = 0x23B390u;
label_23b390:
    // 0x23b390: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23B390u;
    SET_GPR_U32(ctx, 31, 0x23B398u);
    ctx->pc = 0x23B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B390u;
    // 0x23b394: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23B390u, 0x23B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B398u;
label_23b398:
    // 0x23b398: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x23b398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x23b39c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x23B39Cu;
    {
        const bool branch_taken_0x23b39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B39Cu;
        // 0x23b3a0: 0x26d111f8  addiu       $s1, $s6, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b39c) {
            ctx->pc = 0x23B4F8u;
            goto label_23b4f8;
        }
    }
    ctx->pc = 0x23B3A4u;
    // 0x23b3a4: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x23b3a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23b3a8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x23b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x23b3ac: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x23b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x23b3b0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x23b3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x23b3b4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23B3B4u;
    {
        const bool branch_taken_0x23b3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3B4u;
        // 0x23b3b8: 0x3c070035  lui         $a3, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3b4) {
            ctx->pc = 0x23B458u;
            goto label_23b458;
        }
    }
    ctx->pc = 0x23B3BCu;
    // 0x23b3bc: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x23B3BCu;
    SET_GPR_U32(ctx, 31, 0x23B3C4u);
    ctx->pc = 0x23B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B3BCu;
    // 0x23b3c0: 0x24e44b28  addiu       $a0, $a3, 0x4B28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 19240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x23B3BCu, 0x23B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B3C4u;
label_23b3c4:
    // 0x23b3c4: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x23b3c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x23b3c8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x23b3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x23b3cc: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x23B3CCu;
    {
        const bool branch_taken_0x23b3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3CCu;
        // 0x23b3d0: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3cc) {
            ctx->pc = 0x23B4FCu;
            goto label_23b4fc;
        }
    }
    ctx->pc = 0x23B3D4u;
    // 0x23b3d4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23b3d8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x23b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x23b3dc: 0x24642c18  addiu       $a0, $v1, 0x2C18
    ctx->pc = 0x23b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x23b3e0: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x23b3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x23b3e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b3e8: 0x8f83b73c  lw          $v1, -0x48C4($gp)
    ctx->pc = 0x23b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x23b3ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23b3f0: 0x24a71308  addiu       $a3, $a1, 0x1308
    ctx->pc = 0x23b3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
    // 0x23b3f4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x23b3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b3f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x23b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23b3fc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23b400: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23b400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23b404: 0x8cc203f0  lw          $v0, 0x3F0($a2)
    ctx->pc = 0x23b404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1008)));
    // 0x23b408: 0x24a545b8  addiu       $a1, $a1, 0x45B8
    ctx->pc = 0x23b408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17848));
    // 0x23b40c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23b40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b410: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x23B410u;
    SET_GPR_U32(ctx, 31, 0x23B418u);
    ctx->pc = 0x23B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B410u;
    // 0x23b414: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x23B410u, 0x23B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B418u;
label_23b418:
    // 0x23b418: 0xc08c070  jal         func_2301C0
    ctx->pc = 0x23B418u;
    SET_GPR_U32(ctx, 31, 0x23B420u);
    ctx->pc = 0x23B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B418u;
    // 0x23b41c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301C0u, 0x23B418u, 0x23B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B420u;
label_23b420:
    // 0x23b420: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x23b420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23b424: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23b424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23b428: 0x24a54af0  addiu       $a1, $a1, 0x4AF0
    ctx->pc = 0x23b428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19184));
    // 0x23b42c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x23b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x23b430: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b434: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x23b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x23b438: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b43c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23b440: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23b444: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x23b444u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b448: 0xc08e3d0  jal         func_238F40
    ctx->pc = 0x23B448u;
    SET_GPR_U32(ctx, 31, 0x23B450u);
    ctx->pc = 0x23B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B448u;
    // 0x23b44c: 0xae240030  sw          $a0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238F40u, 0x23B448u, 0x23B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B450u;
label_23b450:
    // 0x23b450: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23B450u;
    {
        const bool branch_taken_0x23b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B450u;
        // 0x23b454: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b450) {
            ctx->pc = 0x23B4FCu;
            goto label_23b4fc;
        }
    }
    ctx->pc = 0x23B458u;
label_23b458:
    // 0x23b458: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x23b458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x23b45c: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23B45Cu;
    {
        const bool branch_taken_0x23b45c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B45Cu;
        // 0x23b460: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b45c) {
            ctx->pc = 0x23B498u;
            goto label_23b498;
        }
    }
    ctx->pc = 0x23B464u;
    // 0x23b464: 0xc094e46  jal         func_253918
    ctx->pc = 0x23B464u;
    SET_GPR_U32(ctx, 31, 0x23B46Cu);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x23B464u, 0x23B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B46Cu;
label_23b46c:
    // 0x23b46c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b470: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23b470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23b474: 0x24a54a90  addiu       $a1, $a1, 0x4A90
    ctx->pc = 0x23b474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19088));
    // 0x23b478: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x23B478u;
    SET_GPR_U32(ctx, 31, 0x23B480u);
    ctx->pc = 0x23B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B478u;
    // 0x23b47c: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x23B478u, 0x23B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B480u;
label_23b480:
    // 0x23b480: 0xa380b788  sb          $zero, -0x4878($gp)
    ctx->pc = 0x23b480u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b484: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23b484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x23b488: 0xc081546  jal         func_205518
    ctx->pc = 0x23B488u;
    SET_GPR_U32(ctx, 31, 0x23B490u);
    ctx->pc = 0x23B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B488u;
    // 0x23b48c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23B488u, 0x23B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B490u;
label_23b490:
    // 0x23b490: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x23B490u;
    {
        const bool branch_taken_0x23b490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B490u;
        // 0x23b494: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b490) {
            ctx->pc = 0x23B4FCu;
            goto label_23b4fc;
        }
    }
    ctx->pc = 0x23B498u;
label_23b498:
    // 0x23b498: 0x14a20018  bne         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23B498u;
    {
        const bool branch_taken_0x23b498 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B498u;
        // 0x23b49c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b498) {
            ctx->pc = 0x23B4FCu;
            goto label_23b4fc;
        }
    }
    ctx->pc = 0x23B4A0u;
    // 0x23b4a0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x23b4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23b4a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23b4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b4ac: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x23B4ACu;
    SET_GPR_U32(ctx, 31, 0x23B4B4u);
    ctx->pc = 0x23B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4ACu;
    // 0x23b4b0: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x23B4ACu, 0x23B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4B4u;
label_23b4b4:
    // 0x23b4b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b4b8: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x23b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x23b4bc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x23b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x23b4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b4c4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x23b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x23b4c8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x23b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x23b4cc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x23b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x23b4d0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x23b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x23b4d4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x23b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x23b4d8: 0xc0879ea  jal         func_21E7A8
    ctx->pc = 0x23B4D8u;
    SET_GPR_U32(ctx, 31, 0x23B4E0u);
    ctx->pc = 0x23B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4D8u;
    // 0x23b4dc: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7A8u, 0x23B4D8u, 0x23B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4E0u;
label_23b4e0:
    // 0x23b4e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23b4e4: 0x3c0701fc  lui         $a3, 0x1FC
    ctx->pc = 0x23b4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)508 << 16));
    // 0x23b4e8: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x23b4ec: 0xace211f8  sw          $v0, 0x11F8($a3)
    ctx->pc = 0x23b4ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1FC11F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC11F8u, _value); } while (0);
    // 0x23b4f0: 0xc081546  jal         func_205518
    ctx->pc = 0x23B4F0u;
    SET_GPR_U32(ctx, 31, 0x23B4F8u);
    ctx->pc = 0x23B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4F0u;
    // 0x23b4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23B4F0u, 0x23B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4F8u;
label_23b4f8:
    // 0x23b4f8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_23b4fc:
    // 0x23b4fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23b4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b500: 0x24504b28  addiu       $s0, $v0, 0x4B28
    ctx->pc = 0x23b500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19240));
    // 0x23b504: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23B504u;
    SET_GPR_U32(ctx, 31, 0x23B50Cu);
    ctx->pc = 0x23B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B504u;
    // 0x23b508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23B504u, 0x23B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B50Cu;
label_23b50c:
    // 0x23b50c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x23b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x23b510: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23B510u;
    SET_GPR_U32(ctx, 31, 0x23B518u);
    ctx->pc = 0x23B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B510u;
    // 0x23b514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23B510u, 0x23B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B518u;
label_23b518:
    // 0x23b518: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x23b518u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x23b51c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x23b51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_23b520:
    // 0x23b520: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x23b520u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23b524: 0xdfb70100  ld          $s7, 0x100($sp)
    ctx->pc = 0x23b524u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x23b528: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x23b528u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x23b52c: 0xdfb500e0  ld          $s5, 0xE0($sp)
    ctx->pc = 0x23b52cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x23b530: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x23b530u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23b534: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x23b534u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23b538: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x23b538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23b53c: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x23b53cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23b540: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x23b540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23b544: 0x3e00008  jr          $ra
    ctx->pc = 0x23B544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B544u;
        // 0x23b548: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B54Cu;
}
