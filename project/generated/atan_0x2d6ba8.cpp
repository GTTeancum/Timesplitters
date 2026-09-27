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

// Function: atan
// Address: 0x2d6ba8 - 0x2d6fb4
void atan_0x2d6ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atan_0x2d6ba8");
#endif

    switch (ctx->pc) {
        case 0x2d6c28u: goto label_2d6c28;
        case 0x2d6c48u: goto label_2d6c48;
        case 0x2d6c5cu: goto label_2d6c5c;
        case 0x2d6c6cu: goto label_2d6c6c;
        case 0x2d6ca8u: goto label_2d6ca8;
        case 0x2d6cb8u: goto label_2d6cb8;
        case 0x2d6cd0u: goto label_2d6cd0;
        case 0x2d6d00u: goto label_2d6d00;
        case 0x2d6d14u: goto label_2d6d14;
        case 0x2d6d28u: goto label_2d6d28;
        case 0x2d6d48u: goto label_2d6d48;
        case 0x2d6d58u: goto label_2d6d58;
        case 0x2d6d90u: goto label_2d6d90;
        case 0x2d6da0u: goto label_2d6da0;
        case 0x2d6db0u: goto label_2d6db0;
        case 0x2d6dd0u: goto label_2d6dd0;
        case 0x2d6de0u: goto label_2d6de0;
        case 0x2d6df8u: goto label_2d6df8;
        case 0x2d6e08u: goto label_2d6e08;
        case 0x2d6e14u: goto label_2d6e14;
        case 0x2d6e20u: goto label_2d6e20;
        case 0x2d6e2cu: goto label_2d6e2c;
        case 0x2d6e38u: goto label_2d6e38;
        case 0x2d6e44u: goto label_2d6e44;
        case 0x2d6e50u: goto label_2d6e50;
        case 0x2d6e5cu: goto label_2d6e5c;
        case 0x2d6e68u: goto label_2d6e68;
        case 0x2d6e74u: goto label_2d6e74;
        case 0x2d6e80u: goto label_2d6e80;
        case 0x2d6e90u: goto label_2d6e90;
        case 0x2d6e9cu: goto label_2d6e9c;
        case 0x2d6ea8u: goto label_2d6ea8;
        case 0x2d6eb4u: goto label_2d6eb4;
        case 0x2d6ec0u: goto label_2d6ec0;
        case 0x2d6eccu: goto label_2d6ecc;
        case 0x2d6ed8u: goto label_2d6ed8;
        case 0x2d6ee4u: goto label_2d6ee4;
        case 0x2d6ef0u: goto label_2d6ef0;
        case 0x2d6f04u: goto label_2d6f04;
        case 0x2d6f10u: goto label_2d6f10;
        case 0x2d6f1cu: goto label_2d6f1c;
        case 0x2d6f3cu: goto label_2d6f3c;
        case 0x2d6f48u: goto label_2d6f48;
        case 0x2d6f60u: goto label_2d6f60;
        case 0x2d6f6cu: goto label_2d6f6c;
        case 0x2d6f78u: goto label_2d6f78;
        case 0x2d6f8cu: goto label_2d6f8c;
        default: break;
    }

    ctx->pc = 0x2d6ba8u;

    // 0x2d6ba8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d6ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d6bac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d6bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d6bb0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d6bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d6bb4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d6bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6bb8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2d6bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2d6bbc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2d6bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d6bc0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2d6bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d6bc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d6bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d6bc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d6bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d6bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6bd0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2d6bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6bd4: 0x2b03f  dsra32      $s6, $v0, 0
    ctx->pc = 0x2d6bd4u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d6bd8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2d6bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2d6bdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d6bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d6be0: 0x3c02440f  lui         $v0, 0x440F
    ctx->pc = 0x2d6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17423 << 16));
    // 0x2d6be4: 0x2c38024  and         $s0, $s6, $v1
    ctx->pc = 0x2d6be4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x2d6be8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d6be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d6bec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d6becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d6bf0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D6BF0u;
    {
        const bool branch_taken_0x2d6bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BF0u;
        // 0x2d6bf4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6bf0) {
            ctx->pc = 0x2D6C74u;
            goto label_2d6c74;
        }
    }
    ctx->pc = 0x2D6BF8u;
    // 0x2d6bf8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d6bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d6bfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2d6bfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2d6c00: 0x3c047ff0  lui         $a0, 0x7FF0
    ctx->pc = 0x2d6c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32752 << 16));
    // 0x2d6c04: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x2d6c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d6c08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6C08u;
    {
        const bool branch_taken_0x2d6c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6c08) {
            ctx->pc = 0x2D6C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6C08u;
            // 0x2d6c0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6C20u;
            goto label_2d6c20;
        }
    }
    ctx->pc = 0x2D6C10u;
    // 0x2d6c10: 0x16040007  bne         $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D6C10u;
    {
        const bool branch_taken_0x2d6c10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d6c10) {
            ctx->pc = 0x2D6C30u;
            goto label_2d6c30;
        }
    }
    ctx->pc = 0x2D6C18u;
    // 0x2d6c18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6C18u;
    {
        const bool branch_taken_0x2d6c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C18u;
        // 0x2d6c1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c18) {
            ctx->pc = 0x2D6C30u;
            goto label_2d6c30;
        }
    }
    ctx->pc = 0x2D6C20u;
label_2d6c20:
    // 0x2d6c20: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6C20u;
    SET_GPR_U32(ctx, 31, 0x2D6C28u);
    ctx->pc = 0x2D6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C20u;
    // 0x2d6c24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6C20u, 0x2D6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C28u;
label_2d6c28:
    // 0x2d6c28: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x2D6C28u;
    {
        const bool branch_taken_0x2d6c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C28u;
        // 0x2d6c2c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c28) {
            ctx->pc = 0x2D6F90u;
            goto label_2d6f90;
        }
    }
    ctx->pc = 0x2D6C30u;
label_2d6c30:
    // 0x2d6c30: 0x1ac00007  blez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D6C30u;
    {
        const bool branch_taken_0x2d6c30 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x2D6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C30u;
        // 0x2d6c34: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c30) {
            ctx->pc = 0x2D6C50u;
            goto label_2d6c50;
        }
    }
    ctx->pc = 0x2D6C38u;
    // 0x2d6c38: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d6c3c: 0xdc44a7a0  ld          $a0, -0x5860($v0)
    ctx->pc = 0x2d6c3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294944672)));
    // 0x2d6c40: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6C40u;
    SET_GPR_U32(ctx, 31, 0x2D6C48u);
    ctx->pc = 0x2D6C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C40u;
    // 0x2d6c44: 0xdc65a7c0  ld          $a1, -0x5840($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294944704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6C40u, 0x2D6C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C48u;
label_2d6c48:
    // 0x2d6c48: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x2D6C48u;
    {
        const bool branch_taken_0x2d6c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C48u;
        // 0x2d6c4c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c48) {
            ctx->pc = 0x2D6F90u;
            goto label_2d6f90;
        }
    }
    ctx->pc = 0x2D6C50u;
label_2d6c50:
    // 0x2d6c50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d6c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c54: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D6C54u;
    SET_GPR_U32(ctx, 31, 0x2D6C5Cu);
    ctx->pc = 0x2D6C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C54u;
    // 0x2d6c58: 0xdc45a7a0  ld          $a1, -0x5860($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294944672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D6C54u, 0x2D6C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C5Cu;
label_2d6c5c:
    // 0x2d6c5c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d6c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d6c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c64: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D6C64u;
    SET_GPR_U32(ctx, 31, 0x2D6C6Cu);
    ctx->pc = 0x2D6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C64u;
    // 0x2d6c68: 0xdc65a7c0  ld          $a1, -0x5840($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294944704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D6C64u, 0x2D6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C6Cu;
label_2d6c6c:
    // 0x2d6c6c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2D6C6Cu;
    {
        const bool branch_taken_0x2d6c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C6Cu;
        // 0x2d6c70: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c6c) {
            ctx->pc = 0x2D6F90u;
            goto label_2d6f90;
        }
    }
    ctx->pc = 0x2D6C74u;
label_2d6c74:
    // 0x2d6c74: 0x3c023fdb  lui         $v0, 0x3FDB
    ctx->pc = 0x2d6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16347 << 16));
    // 0x2d6c78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d6c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d6c7c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d6c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d6c80: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D6C80u;
    {
        const bool branch_taken_0x2d6c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C80u;
        // 0x2d6c84: 0x3c023e1f  lui         $v0, 0x3E1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15903 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c80) {
            ctx->pc = 0x2D6CC8u;
            goto label_2d6cc8;
        }
    }
    ctx->pc = 0x2D6C88u;
    // 0x2d6c88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d6c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d6c8c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d6c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d6c90: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D6C90u;
    {
        const bool branch_taken_0x2d6c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C90u;
        // 0x2d6c94: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c90) {
            ctx->pc = 0x2D6DD4u;
            goto label_2d6dd4;
        }
    }
    ctx->pc = 0x2D6C98u;
    // 0x2d6c98: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d6c9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d6c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ca0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6CA0u;
    SET_GPR_U32(ctx, 31, 0x2D6CA8u);
    ctx->pc = 0x2D6CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6CA0u;
    // 0x2d6ca4: 0xdc45a830  ld          $a1, -0x57D0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294944816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6CA0u, 0x2D6CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6CA8u;
label_2d6ca8:
    // 0x2d6ca8: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2d6ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d6cac: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d6cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2d6cb0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D6CB0u;
    SET_GPR_U32(ctx, 31, 0x2D6CB8u);
    ctx->pc = 0x2D6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6CB0u;
    // 0x2d6cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D6CB0u, 0x2D6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6CB8u;
label_2d6cb8:
    // 0x2d6cb8: 0x1c4000b4  bgtz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2D6CB8u;
    {
        const bool branch_taken_0x2d6cb8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2D6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CB8u;
        // 0x2d6cbc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6cb8) {
            ctx->pc = 0x2D6F8Cu;
            goto label_2d6f8c;
        }
    }
    ctx->pc = 0x2D6CC0u;
    // 0x2d6cc0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2D6CC0u;
    {
        const bool branch_taken_0x2d6cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CC0u;
        // 0x2d6cc4: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6cc0) {
            ctx->pc = 0x2D6DD4u;
            goto label_2d6dd4;
        }
    }
    ctx->pc = 0x2D6CC8u;
label_2d6cc8:
    // 0x2d6cc8: 0xc0b5bee  jal         func_2D6FB8
    ctx->pc = 0x2D6CC8u;
    SET_GPR_U32(ctx, 31, 0x2D6CD0u);
    ctx->pc = 0x2D6CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6CC8u;
    // 0x2d6ccc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FB8u, 0x2D6CC8u, 0x2D6CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6CD0u;
label_2d6cd0:
    // 0x2d6cd0: 0x3c033ff2  lui         $v1, 0x3FF2
    ctx->pc = 0x2d6cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16370 << 16));
    // 0x2d6cd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d6cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d6cd8: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x2d6cd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d6cdc: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D6CDCu;
    {
        const bool branch_taken_0x2d6cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CDCu;
        // 0x2d6ce0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6cdc) {
            ctx->pc = 0x2D6D64u;
            goto label_2d6d64;
        }
    }
    ctx->pc = 0x2D6CE4u;
    // 0x2d6ce4: 0x3c023fe5  lui         $v0, 0x3FE5
    ctx->pc = 0x2d6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16357 << 16));
    // 0x2d6ce8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d6ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d6cec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d6cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d6cf0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D6CF0u;
    {
        const bool branch_taken_0x2d6cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CF0u;
        // 0x2d6cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6cf0) {
            ctx->pc = 0x2D6D34u;
            goto label_2d6d34;
        }
    }
    ctx->pc = 0x2D6CF8u;
    // 0x2d6cf8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6CF8u;
    SET_GPR_U32(ctx, 31, 0x2D6D00u);
    ctx->pc = 0x2D6CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6CF8u;
    // 0x2d6cfc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6CF8u, 0x2D6D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D00u;
label_2d6d00:
    // 0x2d6d00: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d6d00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d04: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2d6d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d6d08: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d6d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2d6d0c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D6D0Cu;
    SET_GPR_U32(ctx, 31, 0x2D6D14u);
    ctx->pc = 0x2D6D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D0Cu;
    // 0x2d6d10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D6D0Cu, 0x2D6D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D14u;
label_2d6d14:
    // 0x2d6d14: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d6d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d6d18: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2d6d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2d6d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d20: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6D20u;
    SET_GPR_U32(ctx, 31, 0x2D6D28u);
    ctx->pc = 0x2D6D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D20u;
    // 0x2d6d24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6D20u, 0x2D6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D28u;
label_2d6d28:
    // 0x2d6d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d2c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2D6D2Cu;
    {
        const bool branch_taken_0x2d6d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D2Cu;
        // 0x2d6d30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d2c) {
            ctx->pc = 0x2D6DC8u;
            goto label_2d6dc8;
        }
    }
    ctx->pc = 0x2D6D34u;
label_2d6d34:
    // 0x2d6d34: 0x3411ffc0  ori         $s1, $zero, 0xFFC0
    ctx->pc = 0x2d6d34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d6d38: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x2d6d38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x2d6d3c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d6d3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6d40: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D6D40u;
    SET_GPR_U32(ctx, 31, 0x2D6D48u);
    ctx->pc = 0x2D6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D40u;
    // 0x2d6d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D6D40u, 0x2D6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D48u;
label_2d6d48:
    // 0x2d6d48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d6d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d50: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6D50u;
    SET_GPR_U32(ctx, 31, 0x2D6D58u);
    ctx->pc = 0x2D6D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D50u;
    // 0x2d6d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6D50u, 0x2D6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D58u;
label_2d6d58:
    // 0x2d6d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d5c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2D6D5Cu;
    {
        const bool branch_taken_0x2d6d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D5Cu;
        // 0x2d6d60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d5c) {
            ctx->pc = 0x2D6DC8u;
            goto label_2d6dc8;
        }
    }
    ctx->pc = 0x2D6D64u;
label_2d6d64:
    // 0x2d6d64: 0x3c024003  lui         $v0, 0x4003
    ctx->pc = 0x2d6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16387 << 16));
    // 0x2d6d68: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x2d6d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x2d6d6c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d6d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d6d70: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D6D70u;
    {
        const bool branch_taken_0x2d6d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6d70) {
            ctx->pc = 0x2D6D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6D70u;
            // 0x2d6d74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6DBCu;
            goto label_2d6dbc;
        }
    }
    ctx->pc = 0x2D6D78u;
    // 0x2d6d78: 0x3410ffe0  ori         $s0, $zero, 0xFFE0
    ctx->pc = 0x2d6d78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x2d6d7c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2d6d7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2d6d80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d6d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d84: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2d6d84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d6d88: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D6D88u;
    SET_GPR_U32(ctx, 31, 0x2D6D90u);
    ctx->pc = 0x2D6D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D88u;
    // 0x2d6d8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D6D88u, 0x2D6D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D90u;
label_2d6d90:
    // 0x2d6d90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d6d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d6d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d98: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6D98u;
    SET_GPR_U32(ctx, 31, 0x2D6DA0u);
    ctx->pc = 0x2D6D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D98u;
    // 0x2d6d9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6D98u, 0x2D6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6DA0u;
label_2d6da0:
    // 0x2d6da0: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2d6da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d6da4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d6da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2d6da8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6DA8u;
    SET_GPR_U32(ctx, 31, 0x2D6DB0u);
    ctx->pc = 0x2D6DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6DA8u;
    // 0x2d6dac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6DA8u, 0x2D6DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6DB0u;
label_2d6db0:
    // 0x2d6db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6db4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6DB4u;
    {
        const bool branch_taken_0x2d6db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DB4u;
        // 0x2d6db8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6db4) {
            ctx->pc = 0x2D6DC8u;
            goto label_2d6dc8;
        }
    }
    ctx->pc = 0x2D6DBCu;
label_2d6dbc:
    // 0x2d6dbc: 0x3404bff0  ori         $a0, $zero, 0xBFF0
    ctx->pc = 0x2d6dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x2d6dc0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2d6dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2d6dc4: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x2d6dc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d6dc8:
    // 0x2d6dc8: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2D6DC8u;
    SET_GPR_U32(ctx, 31, 0x2D6DD0u);
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2D6DC8u, 0x2D6DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6DD0u;
label_2d6dd0:
    // 0x2d6dd0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d6dd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6dd4:
    // 0x2d6dd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d6dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6dd8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6DD8u;
    SET_GPR_U32(ctx, 31, 0x2D6DE0u);
    ctx->pc = 0x2D6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6DD8u;
    // 0x2d6ddc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6DD8u, 0x2D6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6DE0u;
label_2d6de0:
    // 0x2d6de0: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x2d6de0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x2d6de4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6de8: 0x2671a7c8  addiu       $s1, $s3, -0x5838
    ctx->pc = 0x2d6de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944712));
    // 0x2d6dec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d6decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6df0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6DF0u;
    SET_GPR_U32(ctx, 31, 0x2D6DF8u);
    ctx->pc = 0x2D6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6DF0u;
    // 0x2d6df4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6DF0u, 0x2D6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6DF8u;
label_2d6df8:
    // 0x2d6df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6dfc: 0xde250050  ld          $a1, 0x50($s1)
    ctx->pc = 0x2d6dfcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2d6e00: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6E00u;
    SET_GPR_U32(ctx, 31, 0x2D6E08u);
    ctx->pc = 0x2D6E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E00u;
    // 0x2d6e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6E00u, 0x2D6E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E08u;
label_2d6e08:
    // 0x2d6e08: 0xde240040  ld          $a0, 0x40($s1)
    ctx->pc = 0x2d6e08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2d6e0c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6E0Cu;
    SET_GPR_U32(ctx, 31, 0x2D6E14u);
    ctx->pc = 0x2D6E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E0Cu;
    // 0x2d6e10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6E0Cu, 0x2D6E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E14u;
label_2d6e14:
    // 0x2d6e14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e18: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6E18u;
    SET_GPR_U32(ctx, 31, 0x2D6E20u);
    ctx->pc = 0x2D6E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E18u;
    // 0x2d6e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6E18u, 0x2D6E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E20u;
label_2d6e20:
    // 0x2d6e20: 0xde240030  ld          $a0, 0x30($s1)
    ctx->pc = 0x2d6e20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2d6e24: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6E24u;
    SET_GPR_U32(ctx, 31, 0x2D6E2Cu);
    ctx->pc = 0x2D6E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E24u;
    // 0x2d6e28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6E24u, 0x2D6E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E2Cu;
label_2d6e2c:
    // 0x2d6e2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e30: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6E30u;
    SET_GPR_U32(ctx, 31, 0x2D6E38u);
    ctx->pc = 0x2D6E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E30u;
    // 0x2d6e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6E30u, 0x2D6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E38u;
label_2d6e38:
    // 0x2d6e38: 0xde240020  ld          $a0, 0x20($s1)
    ctx->pc = 0x2d6e38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2d6e3c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D6E44u);
    ctx->pc = 0x2D6E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E3Cu;
    // 0x2d6e40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6E3Cu, 0x2D6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E44u;
label_2d6e44:
    // 0x2d6e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e48: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6E48u;
    SET_GPR_U32(ctx, 31, 0x2D6E50u);
    ctx->pc = 0x2D6E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E48u;
    // 0x2d6e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6E48u, 0x2D6E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E50u;
label_2d6e50:
    // 0x2d6e50: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x2d6e50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d6e54: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6E54u;
    SET_GPR_U32(ctx, 31, 0x2D6E5Cu);
    ctx->pc = 0x2D6E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E54u;
    // 0x2d6e58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6E54u, 0x2D6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E5Cu;
label_2d6e5c:
    // 0x2d6e5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e60: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6E60u;
    SET_GPR_U32(ctx, 31, 0x2D6E68u);
    ctx->pc = 0x2D6E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E60u;
    // 0x2d6e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6E60u, 0x2D6E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E68u;
label_2d6e68:
    // 0x2d6e68: 0xde64a7c8  ld          $a0, -0x5838($s3)
    ctx->pc = 0x2d6e68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 4294944712)));
    // 0x2d6e6c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6E6Cu;
    SET_GPR_U32(ctx, 31, 0x2D6E74u);
    ctx->pc = 0x2D6E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E6Cu;
    // 0x2d6e70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6E6Cu, 0x2D6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E74u;
label_2d6e74:
    // 0x2d6e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d6e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e78: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6E78u;
    SET_GPR_U32(ctx, 31, 0x2D6E80u);
    ctx->pc = 0x2D6E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E78u;
    // 0x2d6e7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6E78u, 0x2D6E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E80u;
label_2d6e80:
    // 0x2d6e80: 0xde250048  ld          $a1, 0x48($s1)
    ctx->pc = 0x2d6e80u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2d6e84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e88: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6E88u;
    SET_GPR_U32(ctx, 31, 0x2D6E90u);
    ctx->pc = 0x2D6E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E88u;
    // 0x2d6e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6E88u, 0x2D6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E90u;
label_2d6e90:
    // 0x2d6e90: 0xde240038  ld          $a0, 0x38($s1)
    ctx->pc = 0x2d6e90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2d6e94: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6E94u;
    SET_GPR_U32(ctx, 31, 0x2D6E9Cu);
    ctx->pc = 0x2D6E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E94u;
    // 0x2d6e98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6E94u, 0x2D6E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E9Cu;
label_2d6e9c:
    // 0x2d6e9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ea0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6EA0u;
    SET_GPR_U32(ctx, 31, 0x2D6EA8u);
    ctx->pc = 0x2D6EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EA0u;
    // 0x2d6ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6EA0u, 0x2D6EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6EA8u;
label_2d6ea8:
    // 0x2d6ea8: 0xde240028  ld          $a0, 0x28($s1)
    ctx->pc = 0x2d6ea8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d6eac: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6EACu;
    SET_GPR_U32(ctx, 31, 0x2D6EB4u);
    ctx->pc = 0x2D6EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EACu;
    // 0x2d6eb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6EACu, 0x2D6EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6EB4u;
label_2d6eb4:
    // 0x2d6eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6eb8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6EB8u;
    SET_GPR_U32(ctx, 31, 0x2D6EC0u);
    ctx->pc = 0x2D6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EB8u;
    // 0x2d6ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6EB8u, 0x2D6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6EC0u;
label_2d6ec0:
    // 0x2d6ec0: 0xde240018  ld          $a0, 0x18($s1)
    ctx->pc = 0x2d6ec0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d6ec4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6EC4u;
    SET_GPR_U32(ctx, 31, 0x2D6ECCu);
    ctx->pc = 0x2D6EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EC4u;
    // 0x2d6ec8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6EC4u, 0x2D6ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6ECCu;
label_2d6ecc:
    // 0x2d6ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ed0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6ED0u;
    SET_GPR_U32(ctx, 31, 0x2D6ED8u);
    ctx->pc = 0x2D6ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6ED0u;
    // 0x2d6ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6ED0u, 0x2D6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6ED8u;
label_2d6ed8:
    // 0x2d6ed8: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x2d6ed8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d6edc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6EDCu;
    SET_GPR_U32(ctx, 31, 0x2D6EE4u);
    ctx->pc = 0x2D6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EDCu;
    // 0x2d6ee0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6EDCu, 0x2D6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6EE4u;
label_2d6ee4:
    // 0x2d6ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ee8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6EE8u;
    SET_GPR_U32(ctx, 31, 0x2D6EF0u);
    ctx->pc = 0x2D6EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EE8u;
    // 0x2d6eec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6EE8u, 0x2D6EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6EF0u;
label_2d6ef0:
    // 0x2d6ef0: 0x6a1000c  bgez        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x2D6EF0u;
    {
        const bool branch_taken_0x2d6ef0 = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x2D6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EF0u;
        // 0x2d6ef4: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ef0) {
            ctx->pc = 0x2D6F24u;
            goto label_2d6f24;
        }
    }
    ctx->pc = 0x2D6EF8u;
    // 0x2d6ef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d6ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6efc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6EFCu;
    SET_GPR_U32(ctx, 31, 0x2D6F04u);
    ctx->pc = 0x2D6F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EFCu;
    // 0x2d6f00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6EFCu, 0x2D6F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F04u;
label_2d6f04:
    // 0x2d6f04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f08: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6F08u;
    SET_GPR_U32(ctx, 31, 0x2D6F10u);
    ctx->pc = 0x2D6F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F08u;
    // 0x2d6f0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6F08u, 0x2D6F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F10u;
label_2d6f10:
    // 0x2d6f10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d6f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f14: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D6F14u;
    SET_GPR_U32(ctx, 31, 0x2D6F1Cu);
    ctx->pc = 0x2D6F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F14u;
    // 0x2d6f18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D6F14u, 0x2D6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F1Cu;
label_2d6f1c:
    // 0x2d6f1c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D6F1Cu;
    {
        const bool branch_taken_0x2d6f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F1Cu;
        // 0x2d6f20: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f1c) {
            ctx->pc = 0x2D6F90u;
            goto label_2d6f90;
        }
    }
    ctx->pc = 0x2D6F24u;
label_2d6f24:
    // 0x2d6f24: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x2d6f24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2d6f28: 0x2631a788  addiu       $s1, $s1, -0x5878
    ctx->pc = 0x2d6f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944648));
    // 0x2d6f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d6f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f30: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x2d6f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2d6f34: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D6F34u;
    SET_GPR_U32(ctx, 31, 0x2D6F3Cu);
    ctx->pc = 0x2D6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F34u;
    // 0x2d6f38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D6F34u, 0x2D6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F3Cu;
label_2d6f3c:
    // 0x2d6f3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f40: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D6F40u;
    SET_GPR_U32(ctx, 31, 0x2D6F48u);
    ctx->pc = 0x2D6F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F40u;
    // 0x2d6f44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D6F40u, 0x2D6F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F48u;
label_2d6f48:
    // 0x2d6f48: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d6f4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d6f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f50: 0x2463a7a8  addiu       $v1, $v1, -0x5858
    ctx->pc = 0x2d6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944680));
    // 0x2d6f54: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2d6f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d6f58: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D6F58u;
    SET_GPR_U32(ctx, 31, 0x2D6F60u);
    ctx->pc = 0x2D6F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F58u;
    // 0x2d6f5c: 0xde050000  ld          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D6F58u, 0x2D6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F60u;
label_2d6f60:
    // 0x2d6f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d6f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f64: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D6F64u;
    SET_GPR_U32(ctx, 31, 0x2D6F6Cu);
    ctx->pc = 0x2D6F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F64u;
    // 0x2d6f68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D6F64u, 0x2D6F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F6Cu;
label_2d6f6c:
    // 0x2d6f6c: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x2d6f6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d6f70: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D6F70u;
    SET_GPR_U32(ctx, 31, 0x2D6F78u);
    ctx->pc = 0x2D6F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F70u;
    // 0x2d6f74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D6F70u, 0x2D6F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F78u;
label_2d6f78:
    // 0x2d6f78: 0x6c10005  bgez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6F78u;
    {
        const bool branch_taken_0x2d6f78 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x2D6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F78u;
        // 0x2d6f7c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f78) {
            ctx->pc = 0x2D6F90u;
            goto label_2d6f90;
        }
    }
    ctx->pc = 0x2D6F80u;
    // 0x2d6f80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f84: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D6F84u;
    SET_GPR_U32(ctx, 31, 0x2D6F8Cu);
    ctx->pc = 0x2D6F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F84u;
    // 0x2d6f88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D6F84u, 0x2D6F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F8Cu;
label_2d6f8c:
    // 0x2d6f8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d6f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2d6f90:
    // 0x2d6f90: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2d6f90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6f94: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2d6f94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6f98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d6f98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6f9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2d6f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6fa0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d6fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6fa4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d6fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6fac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FACu;
        // 0x2d6fb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6FB4u;
}
