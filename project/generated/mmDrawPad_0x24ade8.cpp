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

// Function: mmDrawPad
// Address: 0x24ade8 - 0x24b0c8
void mmDrawPad_0x24ade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawPad_0x24ade8");
#endif

    switch (ctx->pc) {
        case 0x24ae30u: goto label_24ae30;
        case 0x24ae4cu: goto label_24ae4c;
        case 0x24ae60u: goto label_24ae60;
        case 0x24ae7cu: goto label_24ae7c;
        case 0x24ae98u: goto label_24ae98;
        case 0x24aeb4u: goto label_24aeb4;
        case 0x24aeccu: goto label_24aecc;
        case 0x24aee0u: goto label_24aee0;
        case 0x24aefcu: goto label_24aefc;
        case 0x24af14u: goto label_24af14;
        case 0x24af28u: goto label_24af28;
        case 0x24af54u: goto label_24af54;
        case 0x24af60u: goto label_24af60;
        case 0x24afacu: goto label_24afac;
        case 0x24afccu: goto label_24afcc;
        case 0x24afe8u: goto label_24afe8;
        case 0x24aff0u: goto label_24aff0;
        case 0x24b014u: goto label_24b014;
        case 0x24b02cu: goto label_24b02c;
        case 0x24b044u: goto label_24b044;
        case 0x24b07cu: goto label_24b07c;
        case 0x24b094u: goto label_24b094;
        default: break;
    }

    ctx->pc = 0x24ade8u;

    // 0x24ade8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24ade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24adec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24adf0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24adf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24adf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24adf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24adf8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24adf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24adfc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x24adfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae00: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24ae04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ae08: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24ae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24ae0c: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x24ae0cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x24ae10: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24ae10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24ae14: 0x26716688  addiu       $s1, $s3, 0x6688
    ctx->pc = 0x24ae14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 26248));
    // 0x24ae18: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x24ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x24ae1c: 0x2614fff4  addiu       $s4, $s0, -0xC
    ctx->pc = 0x24ae1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x24ae20: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x24ae24: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24ae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x24ae28: 0xc08089c  jal         func_202270
    ctx->pc = 0x24AE28u;
    SET_GPR_U32(ctx, 31, 0x24AE30u);
    ctx->pc = 0x24AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE28u;
    // 0x24ae2c: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x24AE28u, 0x24AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE30u;
label_24ae30:
    // 0x24ae30: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x24ae34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24ae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae38: 0x26a5ffec  addiu       $a1, $s5, -0x14
    ctx->pc = 0x24ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967276));
    // 0x24ae3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x24ae3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ae40: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x24ae40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24ae44: 0xc08b90a  jal         func_22E428
    ctx->pc = 0x24AE44u;
    SET_GPR_U32(ctx, 31, 0x24AE4Cu);
    ctx->pc = 0x24AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE44u;
    // 0x24ae48: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E428u, 0x24AE44u, 0x24AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE4Cu;
label_24ae4c:
    // 0x24ae4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x24ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24ae50: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24AE50u;
    {
        const bool branch_taken_0x24ae50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE50u;
        // 0x24ae54: 0x8e676688  lw          $a3, 0x6688($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae50) {
            ctx->pc = 0x24AE80u;
            goto label_24ae80;
        }
    }
    ctx->pc = 0x24AE58u;
    // 0x24ae58: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24AE58u;
    SET_GPR_U32(ctx, 31, 0x24AE60u);
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24AE58u, 0x24AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE60u;
label_24ae60:
    // 0x24ae60: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24ae60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x24ae64: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x24ae64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24ae68: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x24ae68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x24ae6c: 0x2022023  subu        $a0, $s0, $v0
    ctx->pc = 0x24ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24ae70: 0x26a5ffe2  addiu       $a1, $s5, -0x1E
    ctx->pc = 0x24ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967266));
    // 0x24ae74: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24AE74u;
    SET_GPR_U32(ctx, 31, 0x24AE7Cu);
    ctx->pc = 0x24AE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE74u;
    // 0x24ae78: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24AE74u, 0x24AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE7Cu;
label_24ae7c:
    // 0x24ae7c: 0x8e676688  lw          $a3, 0x6688($s3)
    ctx->pc = 0x24ae7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26248)));
label_24ae80:
    // 0x24ae80: 0x26b2fff4  addiu       $s2, $s5, -0xC
    ctx->pc = 0x24ae80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967284));
    // 0x24ae84: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x24ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x24ae88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24ae88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae8c: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x24ae8cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x24ae90: 0xc08b90a  jal         func_22E428
    ctx->pc = 0x24AE90u;
    SET_GPR_U32(ctx, 31, 0x24AE98u);
    ctx->pc = 0x24AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE90u;
    // 0x24ae94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E428u, 0x24AE90u, 0x24AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE98u;
label_24ae98:
    // 0x24ae98: 0x8e666688  lw          $a2, 0x6688($s3)
    ctx->pc = 0x24ae98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26248)));
    // 0x24ae9c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24AE9Cu;
    {
        const bool branch_taken_0x24ae9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE9Cu;
        // 0x24aea0: 0x2604002e  addiu       $a0, $s0, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae9c) {
            ctx->pc = 0x24AEB4u;
            goto label_24aeb4;
        }
    }
    ctx->pc = 0x24AEA4u;
    // 0x24aea4: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x24aea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x24aea8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24aea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aeac: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24AEACu;
    SET_GPR_U32(ctx, 31, 0x24AEB4u);
    ctx->pc = 0x24AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEACu;
    // 0x24aeb0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24AEACu, 0x24AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEB4u;
label_24aeb4:
    // 0x24aeb4: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x24aeb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24aeb8: 0x2604ffdc  addiu       $a0, $s0, -0x24
    ctx->pc = 0x24aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967260));
    // 0x24aebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24aebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aec0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x24aec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24aec4: 0xc08b90a  jal         func_22E428
    ctx->pc = 0x24AEC4u;
    SET_GPR_U32(ctx, 31, 0x24AECCu);
    ctx->pc = 0x24AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEC4u;
    // 0x24aec8: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E428u, 0x24AEC4u, 0x24AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AECCu;
label_24aecc:
    // 0x24aecc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x24aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24aed0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x24AED0u;
    {
        const bool branch_taken_0x24aed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aed0) {
            ctx->pc = 0x24AED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AED0u;
            // 0x24aed4: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AF00u;
            goto label_24af00;
        }
    }
    ctx->pc = 0x24AED8u;
    // 0x24aed8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24AED8u;
    SET_GPR_U32(ctx, 31, 0x24AEE0u);
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24AED8u, 0x24AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEE0u;
label_24aee0:
    // 0x24aee0: 0x2442002e  addiu       $v0, $v0, 0x2E
    ctx->pc = 0x24aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 46));
    // 0x24aee4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x24aee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24aee8: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x24aee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x24aeec: 0x2022023  subu        $a0, $s0, $v0
    ctx->pc = 0x24aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24aef0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24aef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aef4: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24AEF4u;
    SET_GPR_U32(ctx, 31, 0x24AEFCu);
    ctx->pc = 0x24AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEF4u;
    // 0x24aef8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24AEF4u, 0x24AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEFCu;
label_24aefc:
    // 0x24aefc: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x24aefcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24af00:
    // 0x24af00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24af00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af04: 0x26a5fffc  addiu       $a1, $s5, -0x4
    ctx->pc = 0x24af04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x24af08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24af08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24af0c: 0xc08b90a  jal         func_22E428
    ctx->pc = 0x24AF0Cu;
    SET_GPR_U32(ctx, 31, 0x24AF14u);
    ctx->pc = 0x24AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF0Cu;
    // 0x24af10: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E428u, 0x24AF0Cu, 0x24AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF14u;
label_24af14:
    // 0x24af14: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24af14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24af18: 0x5080005f  beql        $a0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x24AF18u;
    {
        const bool branch_taken_0x24af18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24af18) {
            ctx->pc = 0x24AF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AF18u;
            // 0x24af1c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B098u;
            goto label_24b098;
        }
    }
    ctx->pc = 0x24AF20u;
    // 0x24af20: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24AF20u;
    SET_GPR_U32(ctx, 31, 0x24AF28u);
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24AF20u, 0x24AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF28u;
label_24af28:
    // 0x24af28: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24af28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24af2c: 0x8f85a0d8  lw          $a1, -0x5F28($gp)
    ctx->pc = 0x24af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24af30: 0x2477e930  addiu       $s7, $v1, -0x16D0
    ctx->pc = 0x24af30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961456));
    // 0x24af34: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x24af34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x24af38: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x24af38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x24af3c: 0x249ee938  addiu       $fp, $a0, -0x16C8
    ctx->pc = 0x24af3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961464));
    // 0x24af40: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x24af40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x24af44: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x24AF44u;
    {
        const bool branch_taken_0x24af44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF44u;
        // 0x24af48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af44) {
            ctx->pc = 0x24AF7Cu;
            goto label_24af7c;
        }
    }
    ctx->pc = 0x24AF4Cu;
    // 0x24af4c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24AF4Cu;
    SET_GPR_U32(ctx, 31, 0x24AF54u);
    ctx->pc = 0x24AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF4Cu;
    // 0x24af50: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24AF4Cu, 0x24AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF54u;
label_24af54:
    // 0x24af54: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x24af54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24af58: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24AF58u;
    SET_GPR_U32(ctx, 31, 0x24AF60u);
    ctx->pc = 0x24AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF58u;
    // 0x24af5c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24AF58u, 0x24AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF60u;
label_24af60:
    // 0x24af60: 0x9383a1f8  lbu         $v1, -0x5E08($gp)
    ctx->pc = 0x24af60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943224)));
    // 0x24af64: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x24af64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24af68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AF68u;
    {
        const bool branch_taken_0x24af68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF68u;
        // 0x24af6c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af68) {
            ctx->pc = 0x24AF78u;
            goto label_24af78;
        }
    }
    ctx->pc = 0x24AF70u;
    // 0x24af70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24AF70u;
    {
        const bool branch_taken_0x24af70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF70u;
        // 0x24af74: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af70) {
            ctx->pc = 0x24AF7Cu;
            goto label_24af7c;
        }
    }
    ctx->pc = 0x24AF78u;
label_24af78:
    // 0x24af78: 0x26520032  addiu       $s2, $s2, 0x32
    ctx->pc = 0x24af78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 50));
label_24af7c:
    // 0x24af7c: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x24af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x24af80: 0x26716688  addiu       $s1, $s3, 0x6688
    ctx->pc = 0x24af80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 26248));
    // 0x24af84: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x24af84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24af88: 0x26b60006  addiu       $s6, $s5, 0x6
    ctx->pc = 0x24af88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x24af8c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24af8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x24af90: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x24af90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24af94: 0x202a023  subu        $s4, $s0, $v0
    ctx->pc = 0x24af94u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24af98: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x24af98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x24af9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24af9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afa0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24afa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afa4: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24AFA4u;
    SET_GPR_U32(ctx, 31, 0x24AFACu);
    ctx->pc = 0x24AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFA4u;
    // 0x24afa8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24AFA4u, 0x24AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFACu;
label_24afac:
    // 0x24afac: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24afb0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x24afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x24afb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24afb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24afb8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x24AFB8u;
    {
        const bool branch_taken_0x24afb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFB8u;
        // 0x24afbc: 0x26b30010  addiu       $s3, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24afb8) {
            ctx->pc = 0x24B094u;
            goto label_24b094;
        }
    }
    ctx->pc = 0x24AFC0u;
    // 0x24afc0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24afc4: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24AFC4u;
    SET_GPR_U32(ctx, 31, 0x24AFCCu);
    ctx->pc = 0x24AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFC4u;
    // 0x24afc8: 0x26b20008  addiu       $s2, $s5, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24AFC4u, 0x24AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFCCu;
label_24afcc:
    // 0x24afcc: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x24afccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x24afd0: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x24afd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x24afd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afd8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24afd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afdc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x24afdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afe0: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24AFE0u;
    SET_GPR_U32(ctx, 31, 0x24AFE8u);
    ctx->pc = 0x24AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFE0u;
    // 0x24afe4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24AFE0u, 0x24AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFE8u;
label_24afe8:
    // 0x24afe8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24AFE8u;
    SET_GPR_U32(ctx, 31, 0x24AFF0u);
    ctx->pc = 0x24AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFE8u;
    // 0x24afec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24AFE8u, 0x24AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFF0u;
label_24aff0:
    // 0x24aff0: 0x26830004  addiu       $v1, $s4, 0x4
    ctx->pc = 0x24aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x24aff4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24aff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aff8: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x24aff8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24affc: 0x26a70012  addiu       $a3, $s5, 0x12
    ctx->pc = 0x24affcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 18));
    // 0x24b000: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24b000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b004: 0x26860018  addiu       $a2, $s4, 0x18
    ctx->pc = 0x24b004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x24b008: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x24b008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24b00c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24B00Cu;
    SET_GPR_U32(ctx, 31, 0x24B014u);
    ctx->pc = 0x24B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B00Cu;
    // 0x24b010: 0x26900004  addiu       $s0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24B00Cu, 0x24B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B014u;
label_24b014:
    // 0x24b014: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x24b014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x24b018: 0xc78ea204  lwc1        $f14, -0x5DFC($gp)
    ctx->pc = 0x24b018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24b01c: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x24b01cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x24b020: 0xc78ca1fc  lwc1        $f12, -0x5E04($gp)
    ctx->pc = 0x24b020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24b024: 0xc08b984  jal         func_22E610
    ctx->pc = 0x24B024u;
    SET_GPR_U32(ctx, 31, 0x24B02Cu);
    ctx->pc = 0x24B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B024u;
    // 0x24b028: 0xc78da200  lwc1        $f13, -0x5E00($gp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E610u, 0x24B024u, 0x24B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B02Cu;
label_24b02c:
    // 0x24b02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b030: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24b030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b034: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24b034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b038: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x24b038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b03c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24B03Cu;
    SET_GPR_U32(ctx, 31, 0x24B044u);
    ctx->pc = 0x24B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B03Cu;
    // 0x24b040: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24B03Cu, 0x24B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B044u;
label_24b044:
    // 0x24b044: 0x9382a1f8  lbu         $v0, -0x5E08($gp)
    ctx->pc = 0x24b044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943224)));
    // 0x24b048: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24b048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24b04c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24B04Cu;
    {
        const bool branch_taken_0x24b04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B04Cu;
        // 0x24b050: 0x8f87a01c  lw          $a3, -0x5FE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b04c) {
            ctx->pc = 0x24B080u;
            goto label_24b080;
        }
    }
    ctx->pc = 0x24B054u;
    // 0x24b054: 0x9384a1f9  lbu         $a0, -0x5E07($gp)
    ctx->pc = 0x24b054u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943225)));
    // 0x24b058: 0x44946000  mtc1        $s4, $f12
    ctx->pc = 0x24b058u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b05c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24b05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24b060: 0x44966800  mtc1        $s6, $f13
    ctx->pc = 0x24b060u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24b064: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24b064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24b068: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x24b068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x24b06c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x24b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x24b070: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x24b070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x24b074: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24B074u;
    SET_GPR_U32(ctx, 31, 0x24B07Cu);
    ctx->pc = 0x24B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B074u;
    // 0x24b078: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24B074u, 0x24B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B07Cu;
label_24b07c:
    // 0x24b07c: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x24b07cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
label_24b080:
    // 0x24b080: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24b080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b084: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24b084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b088: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x24b088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b08c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24B08Cu;
    SET_GPR_U32(ctx, 31, 0x24B094u);
    ctx->pc = 0x24B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B08Cu;
    // 0x24b090: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24B08Cu, 0x24B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B094u;
label_24b094:
    // 0x24b094: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24b094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24b098:
    // 0x24b098: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24b098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24b09c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24b09cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24b0a0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24b0a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24b0a4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24b0a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24b0a8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24b0a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24b0ac: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24b0acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b0b0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24b0b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b0b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24b0b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b0b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24b0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b0bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24b0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b0c0: 0x808089c  j           func_202270
    ctx->pc = 0x24B0C0u;
    ctx->pc = 0x24B0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0C0u;
    // 0x24b0c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x24B0C8u;
}
