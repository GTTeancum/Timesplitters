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

// Function: cvt
// Address: 0x2e8b68 - 0x2e8d18
void cvt_0x2e8b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cvt_0x2e8b68");
#endif

    switch (ctx->pc) {
        case 0x2e8bfcu: goto label_2e8bfc;
        case 0x2e8c28u: goto label_2e8c28;
        case 0x2e8c70u: goto label_2e8c70;
        case 0x2e8c94u: goto label_2e8c94;
        case 0x2e8cb0u: goto label_2e8cb0;
        default: break;
    }

    ctx->pc = 0x2e8b68u;

    // 0x2e8b68: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e8b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e8b6c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2e8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2e8b70: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2e8b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2e8b74: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2e8b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2e8b78: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x2e8b78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b7c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2e8b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2e8b80: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2e8b80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b84: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2e8b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2e8b88: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2e8b88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b8c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e8b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2e8b90: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2e8b90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e8b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2e8b98: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e8b98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b9c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2e8b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2e8ba0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e8ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ba4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e8ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e8ba8: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2e8ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e8bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e8bb0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2e8bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bb4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8BB4u;
    {
        const bool branch_taken_0x2e8bb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BB4u;
        // 0x2e8bb8: 0xffb30040  sd          $s3, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bb4) {
            ctx->pc = 0x2E8BC4u;
            goto label_2e8bc4;
        }
    }
    ctx->pc = 0x2E8BBCu;
    // 0x2e8bbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8BBCu;
    {
        const bool branch_taken_0x2e8bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BBCu;
        // 0x2e8bc0: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bbc) {
            ctx->pc = 0x2E8BE0u;
            goto label_2e8be0;
        }
    }
    ctx->pc = 0x2E8BC4u;
label_2e8bc4:
    // 0x2e8bc4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2e8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2e8bc8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8BC8u;
    {
        const bool branch_taken_0x2e8bc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BC8u;
        // 0x2e8bcc: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bc8) {
            ctx->pc = 0x2E8BD8u;
            goto label_2e8bd8;
        }
    }
    ctx->pc = 0x2E8BD0u;
    // 0x2e8bd0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8BD0u;
    {
        const bool branch_taken_0x2e8bd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BD0u;
        // 0x2e8bd4: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bd0) {
            ctx->pc = 0x2E8BE0u;
            goto label_2e8be0;
        }
    }
    ctx->pc = 0x2E8BD8u;
label_2e8bd8:
    // 0x2e8bd8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e8bd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e8bdc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2e8bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e8be0:
    // 0x2e8be0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e8be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8be4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e8be4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e8be8: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8BE8u;
    {
        const bool branch_taken_0x2e8be8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2e8be8) {
            ctx->pc = 0x2E8BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8BE8u;
            // 0x2e8bec: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8C08u;
            goto label_2e8c08;
        }
    }
    ctx->pc = 0x2E8BF0u;
    // 0x2e8bf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e8bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bf4: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2E8BF4u;
    SET_GPR_U32(ctx, 31, 0x2E8BFCu);
    ctx->pc = 0x2E8BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8BF4u;
    // 0x2e8bf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2E8BF4u, 0x2E8BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8BFCu;
label_2e8bfc:
    // 0x2e8bfc: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2e8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2e8c00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e8c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c04: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e8c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2e8c08:
    // 0x2e8c08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e8c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e8c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e8c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c14: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e8c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c18: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2e8c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c1c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2e8c1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c20: 0xc0ba7a0  jal         func_2E9E80
    ctx->pc = 0x2E8C20u;
    SET_GPR_U32(ctx, 31, 0x2E8C28u);
    ctx->pc = 0x2E8C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C20u;
    // 0x2e8c24: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9E80u, 0x2E8C20u, 0x2E8C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C28u;
label_2e8c28:
    // 0x2e8c28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e8c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c2c: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x2e8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2e8c30: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8C30u;
    {
        const bool branch_taken_0x2e8c30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C30u;
        // 0x2e8c34: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c30) {
            ctx->pc = 0x2E8C40u;
            goto label_2e8c40;
        }
    }
    ctx->pc = 0x2E8C38u;
    // 0x2e8c38: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8C38u;
    {
        const bool branch_taken_0x2e8c38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C38u;
        // 0x2e8c3c: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c38) {
            ctx->pc = 0x2E8C4Cu;
            goto label_2e8c4c;
        }
    }
    ctx->pc = 0x2E8C40u;
label_2e8c40:
    // 0x2e8c40: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2e8c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x2e8c44: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E8C44u;
    {
        const bool branch_taken_0x2e8c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C44u;
        // 0x2e8c48: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c44) {
            ctx->pc = 0x2E8CD8u;
            goto label_2e8cd8;
        }
    }
    ctx->pc = 0x2E8C4Cu;
label_2e8c4c:
    // 0x2e8c4c: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E8C4Cu;
    {
        const bool branch_taken_0x2e8c4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C4Cu;
        // 0x2e8c50: 0x2748021  addu        $s0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c4c) {
            ctx->pc = 0x2E8C88u;
            goto label_2e8c88;
        }
    }
    ctx->pc = 0x2E8C54u;
    // 0x2e8c54: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x2e8c54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e8c58: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2e8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e8c5c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8C5Cu;
    {
        const bool branch_taken_0x2e8c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8c5c) {
            ctx->pc = 0x2E8C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8C5Cu;
            // 0x2e8c60: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8C84u;
            goto label_2e8c84;
        }
    }
    ctx->pc = 0x2E8C64u;
    // 0x2e8c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c68: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2E8C68u;
    SET_GPR_U32(ctx, 31, 0x2E8C70u);
    ctx->pc = 0x2E8C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C68u;
    // 0x2e8c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2E8C68u, 0x2E8C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C70u;
label_2e8c70:
    // 0x2e8c70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8C70u;
    {
        const bool branch_taken_0x2e8c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C70u;
        // 0x2e8c74: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c70) {
            ctx->pc = 0x2E8C80u;
            goto label_2e8c80;
        }
    }
    ctx->pc = 0x2E8C78u;
    // 0x2e8c78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e8c7c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2e8c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2e8c80:
    // 0x2e8c80: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e8c84:
    // 0x2e8c84: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2e8c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e8c88:
    // 0x2e8c88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c8c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2E8C8Cu;
    SET_GPR_U32(ctx, 31, 0x2E8C94u);
    ctx->pc = 0x2E8C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C8Cu;
    // 0x2e8c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2E8C8Cu, 0x2E8C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C94u;
label_2e8c94:
    // 0x2e8c94: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E8C94u;
    {
        const bool branch_taken_0x2e8c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8c94) {
            ctx->pc = 0x2E8C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8C94u;
            // 0x2e8c98: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8C9Cu;
            goto label_2e8c9c;
        }
    }
    ctx->pc = 0x2E8C9Cu;
label_2e8c9c:
    // 0x2e8c9c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2e8c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e8ca0: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x2e8ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2e8ca4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E8CA4u;
    {
        const bool branch_taken_0x2e8ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CA4u;
        // 0x2e8ca8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ca4) {
            ctx->pc = 0x2E8CDCu;
            goto label_2e8cdc;
        }
    }
    ctx->pc = 0x2E8CACu;
    // 0x2e8cac: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2e8cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2e8cb0:
    // 0x2e8cb0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2e8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e8cb4: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x2e8cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e8cb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e8cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cbc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2e8cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e8cc0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e8cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cc4: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x2e8cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2e8cc8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E8CC8u;
    {
        const bool branch_taken_0x2e8cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8cc8) {
            ctx->pc = 0x2E8CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8cb0;
        }
    }
    ctx->pc = 0x2E8CD0u;
    // 0x2e8cd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8CD0u;
    {
        const bool branch_taken_0x2e8cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CD0u;
        // 0x2e8cd4: 0x731823  subu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cd0) {
            ctx->pc = 0x2E8CE0u;
            goto label_2e8ce0;
        }
    }
    ctx->pc = 0x2E8CD8u;
label_2e8cd8:
    // 0x2e8cd8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2e8cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2e8cdc:
    // 0x2e8cdc: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x2e8cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2e8ce0:
    // 0x2e8ce0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e8ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ce4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2e8ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2e8ce8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e8ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e8cec: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2e8cecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e8cf0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2e8cf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e8cf4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2e8cf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8cf8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2e8cf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8cfc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2e8cfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8d00: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2e8d00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8d04: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e8d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8d08: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2e8d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8d0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e8d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8d10: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D10u;
        // 0x2e8d14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8D18u;
}
