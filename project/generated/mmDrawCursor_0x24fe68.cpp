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

// Function: mmDrawCursor
// Address: 0x24fe68 - 0x2500c8
void mmDrawCursor_0x24fe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawCursor_0x24fe68");
#endif

    switch (ctx->pc) {
        case 0x24fec0u: goto label_24fec0;
        case 0x24ff48u: goto label_24ff48;
        case 0x24ff64u: goto label_24ff64;
        case 0x24ff7cu: goto label_24ff7c;
        case 0x24ff94u: goto label_24ff94;
        default: break;
    }

    ctx->pc = 0x24fe68u;

    // 0x24fe68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24fe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24fe6c: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x24fe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24fe70: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x24fe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x24fe74: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x24fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x24fe78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24fe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fe7c: 0x34637f00  ori         $v1, $v1, 0x7F00
    ctx->pc = 0x24fe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32512);
    // 0x24fe80: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24fe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24fe84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24fe84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe88: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x24fe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x24fe8c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24fe90: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24fe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24fe94: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24fe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24fe98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24fe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24fe9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24fe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24fea0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24fea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24fea4: 0x9386a02c  lbu         $a2, -0x5FD4($gp)
    ctx->pc = 0x24fea4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24fea8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x24fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24feac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24feacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24feb0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x24FEB0u;
    {
        const bool branch_taken_0x24feb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEB0u;
        // 0x24feb4: 0xc3f025  or          $fp, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24feb0) {
            ctx->pc = 0x250098u;
            goto label_250098;
        }
    }
    ctx->pc = 0x24FEB8u;
    // 0x24feb8: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x24FEB8u;
    SET_GPR_U32(ctx, 31, 0x24FEC0u);
    ctx->pc = 0x24FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEB8u;
    // 0x24febc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x24FEB8u, 0x24FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FEC0u;
label_24fec0:
    // 0x24fec0: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x24FEC0u;
    {
        const bool branch_taken_0x24fec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEC0u;
        // 0x24fec4: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fec0) {
            ctx->pc = 0x24FF98u;
            goto label_24ff98;
        }
    }
    ctx->pc = 0x24FEC8u;
    // 0x24fec8: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x24fec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x24fecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24feccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24fed0: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x24FED0u;
    {
        const bool branch_taken_0x24fed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fed0) {
            ctx->pc = 0x24FED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FED0u;
            // 0x24fed4: 0x8f84a1f4  lw          $a0, -0x5E0C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF9Cu;
            goto label_24ff9c;
        }
    }
    ctx->pc = 0x24FED8u;
    // 0x24fed8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x24fedc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x24fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24fee0: 0x244212b0  addiu       $v0, $v0, 0x12B0
    ctx->pc = 0x24fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x24fee4: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x24FEE4u;
    {
        const bool branch_taken_0x24fee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEE4u;
        // 0x24fee8: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fee4) {
            ctx->pc = 0x24FF94u;
            goto label_24ff94;
        }
    }
    ctx->pc = 0x24FEECu;
    // 0x24feec: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x24feecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x24fef0: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x24FEF0u;
    {
        const bool branch_taken_0x24fef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEF0u;
        // 0x24fef4: 0x9382a02c  lbu         $v0, -0x5FD4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fef0) {
            ctx->pc = 0x24FF94u;
            goto label_24ff94;
        }
    }
    ctx->pc = 0x24FEF8u;
    // 0x24fef8: 0x96170000  lhu         $s7, 0x0($s0)
    ctx->pc = 0x24fef8u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24fefc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x24fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24ff00: 0x96150004  lhu         $s5, 0x4($s0)
    ctx->pc = 0x24ff00u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24ff04: 0x28e00  sll         $s1, $v0, 24
    ctx->pc = 0x24ff04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x24ff08: 0x96160002  lhu         $s6, 0x2($s0)
    ctx->pc = 0x24ff08u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24ff0c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x24ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x24ff10: 0x2f5a821  addu        $s5, $s7, $s5
    ctx->pc = 0x24ff10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x24ff14: 0x96130006  lhu         $s3, 0x6($s0)
    ctx->pc = 0x24ff14u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x24ff18: 0x36310080  ori         $s1, $s1, 0x80
    ctx->pc = 0x24ff18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)128);
    // 0x24ff1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24ff1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24ff20: 0x26f2fffe  addiu       $s2, $s7, -0x2
    ctx->pc = 0x24ff20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967294));
    // 0x24ff24: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x24ff24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x24ff28: 0x26c5ffff  addiu       $a1, $s6, -0x1
    ctx->pc = 0x24ff28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x24ff2c: 0x26b40002  addiu       $s4, $s5, 0x2
    ctx->pc = 0x24ff2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x24ff30: 0x2d39821  addu        $s3, $s6, $s3
    ctx->pc = 0x24ff30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x24ff34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ff34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff38: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24ff38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff3c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24ff3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff40: 0xc0ae226  jal         func_2B8898
    ctx->pc = 0x24FF40u;
    SET_GPR_U32(ctx, 31, 0x24FF48u);
    ctx->pc = 0x24FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF40u;
    // 0x24ff44: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8898u, 0x24FF40u, 0x24FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF48u;
label_24ff48:
    // 0x24ff48: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x24ff48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24ff4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24ff4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff50: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24ff50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ff54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff58: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24ff58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff5c: 0xc0ae226  jal         func_2B8898
    ctx->pc = 0x24FF5Cu;
    SET_GPR_U32(ctx, 31, 0x24FF64u);
    ctx->pc = 0x24FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF5Cu;
    // 0x24ff60: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8898u, 0x24FF5Cu, 0x24FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF64u;
label_24ff64:
    // 0x24ff64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff68: 0x26e6ffff  addiu       $a2, $s7, -0x1
    ctx->pc = 0x24ff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x24ff6c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24ff6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff70: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x24ff70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff74: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24FF74u;
    SET_GPR_U32(ctx, 31, 0x24FF7Cu);
    ctx->pc = 0x24FF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF74u;
    // 0x24ff78: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24FF74u, 0x24FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF7Cu;
label_24ff7c:
    // 0x24ff7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24ff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff80: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24ff80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff84: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x24ff84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff88: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x24ff88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff8c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24FF8Cu;
    SET_GPR_U32(ctx, 31, 0x24FF94u);
    ctx->pc = 0x24FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF8Cu;
    // 0x24ff90: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24FF8Cu, 0x24FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF94u;
label_24ff94:
    // 0x24ff94: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x24ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_24ff98:
    // 0x24ff98: 0x8f84a1f4  lw          $a0, -0x5E0C($gp)
    ctx->pc = 0x24ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943220)));
label_24ff9c:
    // 0x24ff9c: 0x84680026  lh          $t0, 0x26($v1)
    ctx->pc = 0x24ff9cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x24ffa0: 0x2c820011  sltiu       $v0, $a0, 0x11
    ctx->pc = 0x24ffa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x24ffa4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x24FFA4u;
    {
        const bool branch_taken_0x24ffa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA4u;
        // 0x24ffa8: 0x84670022  lh          $a3, 0x22($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffa4) {
            ctx->pc = 0x250038u;
            goto label_250038;
        }
    }
    ctx->pc = 0x24FFACu;
    // 0x24ffac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24ffb0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24ffb4: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x24ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x24ffb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ffbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ffc0: 0x800008  jr          $a0
    ctx->pc = 0x24FFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24FFC8u: goto label_24ffc8;
            case 0x24FFD4u: goto label_24ffd4;
            case 0x24FFECu: goto label_24ffec;
            case 0x24FFF8u: goto label_24fff8;
            case 0x250004u: goto label_250004;
            case 0x250020u: goto label_250020;
            case 0x250034u: goto label_250034;
            case 0x250038u: goto label_250038;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FFC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24FFC8u;
label_24ffc8:
    // 0x24ffc8: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x24ffc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x24ffcc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x24FFCCu;
    {
        const bool branch_taken_0x24ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFCCu;
        // 0x24ffd0: 0x2508fffa  addiu       $t0, $t0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffcc) {
            ctx->pc = 0x250038u;
            goto label_250038;
        }
    }
    ctx->pc = 0x24FFD4u;
label_24ffd4:
    // 0x24ffd4: 0x9383a02c  lbu         $v1, -0x5FD4($gp)
    ctx->pc = 0x24ffd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24ffd8: 0x3c027f3f  lui         $v0, 0x7F3F
    ctx->pc = 0x24ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32575 << 16));
    // 0x24ffdc: 0x2508fffd  addiu       $t0, $t0, -0x3
    ctx->pc = 0x24ffdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
    // 0x24ffe0: 0x24e7fffa  addiu       $a3, $a3, -0x6
    ctx->pc = 0x24ffe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967290));
    // 0x24ffe4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24FFE4u;
    {
        const bool branch_taken_0x24ffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFE4u;
        // 0x24ffe8: 0x62f025  or          $fp, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffe4) {
            ctx->pc = 0x250038u;
            goto label_250038;
        }
    }
    ctx->pc = 0x24FFECu;
label_24ffec:
    // 0x24ffec: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x24ffecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x24fff0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24FFF0u;
    {
        const bool branch_taken_0x24fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFF0u;
        // 0x24fff4: 0x24e7fff8  addiu       $a3, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fff0) {
            ctx->pc = 0x250038u;
            goto label_250038;
        }
    }
    ctx->pc = 0x24FFF8u;
label_24fff8:
    // 0x24fff8: 0x24e7fffb  addiu       $a3, $a3, -0x5
    ctx->pc = 0x24fff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967291));
    // 0x24fffc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24FFFCu;
    {
        const bool branch_taken_0x24fffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFFCu;
        // 0x250000: 0x2508fffd  addiu       $t0, $t0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fffc) {
            ctx->pc = 0x250038u;
            goto label_250038;
        }
    }
    ctx->pc = 0x250004u;
label_250004:
    // 0x250004: 0x9383a02c  lbu         $v1, -0x5FD4($gp)
    ctx->pc = 0x250004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x250008: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x250008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x25000c: 0x34427f00  ori         $v0, $v0, 0x7F00
    ctx->pc = 0x25000cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32512);
    // 0x250010: 0x24e7fffa  addiu       $a3, $a3, -0x6
    ctx->pc = 0x250010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967290));
    // 0x250014: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x250014u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x250018: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x250018u;
    {
        const bool branch_taken_0x250018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250018u;
        // 0x25001c: 0x2508fffd  addiu       $t0, $t0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250018) {
            ctx->pc = 0x250038u;
            goto label_250038;
        }
    }
    ctx->pc = 0x250020u;
label_250020:
    // 0x250020: 0x9383a02c  lbu         $v1, -0x5FD4($gp)
    ctx->pc = 0x250020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x250024: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x250024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x250028: 0x34427f00  ori         $v0, $v0, 0x7F00
    ctx->pc = 0x250028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32512);
    // 0x25002c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25002Cu;
    {
        const bool branch_taken_0x25002c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25002Cu;
        // 0x250030: 0x62f025  or          $fp, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25002c) {
            ctx->pc = 0x250038u;
            goto label_250038;
        }
    }
    ctx->pc = 0x250034u;
label_250034:
    // 0x250034: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x250034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_250038:
    // 0x250038: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x250038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x25003c: 0x8f84a1f4  lw          $a0, -0x5E0C($gp)
    ctx->pc = 0x25003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943220)));
    // 0x250040: 0x24a699f0  addiu       $a2, $a1, -0x6610
    ctx->pc = 0x250040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x250044: 0x8ca299f0  lw          $v0, -0x6610($a1)
    ctx->pc = 0x250044u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299F0u));
    // 0x250048: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x250048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A04u));
    // 0x25004c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x25004cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250050: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x250050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x250054: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x250054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250058: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x250058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x25005c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25005cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x250060: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x250060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x250064: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x250064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x250068: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x250068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x25006c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x25006cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250070: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x250070u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250074: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x250074u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250078: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x250078u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25007c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25007cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250080: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x250080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250084: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x250084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250088: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x250088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25008c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25008cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250090: 0x808b952  j           func_22E548
    ctx->pc = 0x250090u;
    ctx->pc = 0x250094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250090u;
    // 0x250094: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    guiDrawImage_0x22e548(rdram, ctx, runtime); return;
    ctx->pc = 0x250098u;
label_250098:
    // 0x250098: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x250098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25009c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x25009cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2500a0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2500a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2500a4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2500a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2500a8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2500a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2500ac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2500acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2500b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2500b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2500b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2500b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2500b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2500b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2500bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2500bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2500c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2500C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2500C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500C0u;
        // 0x2500c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2500C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2500C8u;
}
