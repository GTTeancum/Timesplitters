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

// Function: enemyDie
// Address: 0x2c6dc8 - 0x2c6ffc
void enemyDie_0x2c6dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyDie_0x2c6dc8");
#endif

    switch (ctx->pc) {
        case 0x2c6e20u: goto label_2c6e20;
        case 0x2c6e2cu: goto label_2c6e2c;
        case 0x2c6e5cu: goto label_2c6e5c;
        case 0x2c6f0cu: goto label_2c6f0c;
        case 0x2c6f2cu: goto label_2c6f2c;
        case 0x2c6f5cu: goto label_2c6f5c;
        case 0x2c6fbcu: goto label_2c6fbc;
        case 0x2c6fccu: goto label_2c6fcc;
        default: break;
    }

    ctx->pc = 0x2c6dc8u;

    // 0x2c6dc8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c6dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c6dcc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2c6dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2c6dd0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2c6dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2c6dd4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2c6dd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6dd8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2c6dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c6ddc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2c6ddcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6de0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c6de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c6de4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2c6de4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6de8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c6de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c6dec: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2c6decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6df0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c6df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c6df4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2c6df4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6df8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c6df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c6dfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c6dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e00: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c6e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c6e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6e08: 0x8e500160  lw          $s0, 0x160($s2)
    ctx->pc = 0x2c6e08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x2c6e0c: 0x8e0411a8  lw          $a0, 0x11A8($s0)
    ctx->pc = 0x2c6e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4520)));
    // 0x2c6e10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6E10u;
    {
        const bool branch_taken_0x2c6e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E10u;
        // 0x2c6e14: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e10) {
            ctx->pc = 0x2C6E24u;
            goto label_2c6e24;
        }
    }
    ctx->pc = 0x2C6E18u;
    // 0x2c6e18: 0xc0aaba2  jal         func_2AAE88
    ctx->pc = 0x2C6E18u;
    SET_GPR_U32(ctx, 31, 0x2C6E20u);
    ctx->pc = 0x2AAE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAE88u, 0x2C6E18u, 0x2C6E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6E20u;
label_2c6e20:
    // 0x2c6e20: 0xae0011a8  sw          $zero, 0x11A8($s0)
    ctx->pc = 0x2c6e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4520), GPR_U32(ctx, 0));
label_2c6e24:
    // 0x2c6e24: 0xc098246  jal         func_260918
    ctx->pc = 0x2C6E24u;
    SET_GPR_U32(ctx, 31, 0x2C6E2Cu);
    ctx->pc = 0x2C6E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6E24u;
    // 0x2c6e28: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260918u, 0x2C6E24u, 0x2C6E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6E2Cu;
label_2c6e2c:
    // 0x2c6e2c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6E2Cu;
    {
        const bool branch_taken_0x2c6e2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E2Cu;
        // 0x2c6e30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e2c) {
            ctx->pc = 0x2C6E44u;
            goto label_2c6e44;
        }
    }
    ctx->pc = 0x2C6E34u;
    // 0x2c6e34: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c6e38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c6e3c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C6E3Cu;
    {
        const bool branch_taken_0x2c6e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c6e3c) {
            ctx->pc = 0x2C6E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6E3Cu;
            // 0x2c6e40: 0x8e240160  lw          $a0, 0x160($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6E44u;
            goto label_2c6e44;
        }
    }
    ctx->pc = 0x2C6E44u;
label_2c6e44:
    // 0x2c6e44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c6e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6e4c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C6E4Cu;
    {
        const bool branch_taken_0x2c6e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E4Cu;
        // 0x2c6e50: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e4c) {
            ctx->pc = 0x2C6E98u;
            goto label_2c6e98;
        }
    }
    ctx->pc = 0x2C6E54u;
    // 0x2c6e54: 0xc0882f2  jal         func_220BC8
    ctx->pc = 0x2C6E54u;
    SET_GPR_U32(ctx, 31, 0x2C6E5Cu);
    ctx->pc = 0x2C6E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6E54u;
    // 0x2c6e58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BC8u, 0x2C6E54u, 0x2C6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6E5Cu;
label_2c6e5c:
    // 0x2c6e5c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x2c6e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x2c6e60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c6e64: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x2c6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x2c6e68: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2c6e68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2c6e6c: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C6E6Cu;
    {
        const bool branch_taken_0x2c6e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E6Cu;
        // 0x2c6e70: 0x24a2c4a8  addiu       $v0, $a1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e6c) {
            ctx->pc = 0x2C6E9Cu;
            goto label_2c6e9c;
        }
    }
    ctx->pc = 0x2C6E74u;
    // 0x2c6e74: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6E74u;
    {
        const bool branch_taken_0x2c6e74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E74u;
        // 0x2c6e78: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e74) {
            ctx->pc = 0x2C6E98u;
            goto label_2c6e98;
        }
    }
    ctx->pc = 0x2C6E7Cu;
    // 0x2c6e7c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c6e80: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6E80u;
    {
        const bool branch_taken_0x2c6e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E80u;
        // 0x2c6e84: 0x24a2c4a8  addiu       $v0, $a1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e80) {
            ctx->pc = 0x2C6E9Cu;
            goto label_2c6e9c;
        }
    }
    ctx->pc = 0x2C6E88u;
    // 0x2c6e88: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x2c6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2c6e8c: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x2c6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x2c6e90: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2c6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2c6e94: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x2c6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
label_2c6e98:
    // 0x2c6e98: 0x24a2c4a8  addiu       $v0, $a1, -0x3B58
    ctx->pc = 0x2c6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
label_2c6e9c:
    // 0x2c6e9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6ea0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2c6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c6ea4: 0x5464000f  bnel        $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C6EA4u;
    {
        const bool branch_taken_0x2c6ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c6ea4) {
            ctx->pc = 0x2C6EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6EA4u;
            // 0x2c6ea8: 0x8e020a94  lw          $v0, 0xA94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EE4u;
            goto label_2c6ee4;
        }
    }
    ctx->pc = 0x2C6EACu;
    // 0x2c6eac: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6EACu;
    {
        const bool branch_taken_0x2c6eac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EACu;
        // 0x2c6eb0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6eac) {
            ctx->pc = 0x2C6EE0u;
            goto label_2c6ee0;
        }
    }
    ctx->pc = 0x2C6EB4u;
    // 0x2c6eb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c6eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c6eb8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C6EB8u;
    {
        const bool branch_taken_0x2c6eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6eb8) {
            ctx->pc = 0x2C6EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6EB8u;
            // 0x2c6ebc: 0x8e020a94  lw          $v0, 0xA94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EE4u;
            goto label_2c6ee4;
        }
    }
    ctx->pc = 0x2C6EC0u;
    // 0x2c6ec0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c6ec4: 0x8c432010  lw          $v1, 0x2010($v0)
    ctx->pc = 0x2c6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x382010u));
    // 0x2c6ec8: 0x56430006  bnel        $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6EC8u;
    {
        const bool branch_taken_0x2c6ec8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6ec8) {
            ctx->pc = 0x2C6ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6EC8u;
            // 0x2c6ecc: 0x8e020a94  lw          $v0, 0xA94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EE4u;
            goto label_2c6ee4;
        }
    }
    ctx->pc = 0x2C6ED0u;
    // 0x2c6ed0: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x2c6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2c6ed4: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x2c6ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x2c6ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6edc: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x2c6edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
label_2c6ee0:
    // 0x2c6ee0: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x2c6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
label_2c6ee4:
    // 0x2c6ee4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2c6ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2c6ee8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6EE8u;
    {
        const bool branch_taken_0x2c6ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ee8) {
            ctx->pc = 0x2C6EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6EE8u;
            // 0x2c6eec: 0x8e020a9c  lw          $v0, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6F10u;
            goto label_2c6f10;
        }
    }
    ctx->pc = 0x2C6EF0u;
    // 0x2c6ef0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c6ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ef4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c6ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ef8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2c6ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6efc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c6efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f00: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2c6f00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f04: 0xc0a228c  jal         func_288A30
    ctx->pc = 0x2C6F04u;
    SET_GPR_U32(ctx, 31, 0x2C6F0Cu);
    ctx->pc = 0x2C6F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6F04u;
    // 0x2c6f08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288A30u, 0x2C6F04u, 0x2C6F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F0Cu;
label_2c6f0c:
    // 0x2c6f0c: 0x8e020a9c  lw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2c6f10:
    // 0x2c6f10: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2c6f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c6f14: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c6f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2c6f18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c6f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f1c: 0xae020aa0  sw          $v0, 0xAA0($s0)
    ctx->pc = 0x2c6f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 2));
    // 0x2c6f20: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2c6f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c6f24: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C6F24u;
    SET_GPR_U32(ctx, 31, 0x2C6F2Cu);
    ctx->pc = 0x2C6F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6F24u;
    // 0x2c6f28: 0xae030a9c  sw          $v1, 0xA9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C6F24u, 0x2C6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F2Cu;
label_2c6f2c:
    // 0x2c6f2c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c6f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6f34: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6F34u;
    {
        const bool branch_taken_0x2c6f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6f34) {
            ctx->pc = 0x2C6F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6F34u;
            // 0x2c6f38: 0x8e0201b8  lw          $v0, 0x1B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6F4Cu;
            goto label_2c6f4c;
        }
    }
    ctx->pc = 0x2C6F3Cu;
    // 0x2c6f3c: 0xae000b68  sw          $zero, 0xB68($s0)
    ctx->pc = 0x2c6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2920), GPR_U32(ctx, 0));
    // 0x2c6f40: 0xae000b6c  sw          $zero, 0xB6C($s0)
    ctx->pc = 0x2c6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2924), GPR_U32(ctx, 0));
    // 0x2c6f44: 0xae000b70  sw          $zero, 0xB70($s0)
    ctx->pc = 0x2c6f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2928), GPR_U32(ctx, 0));
    // 0x2c6f48: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x2c6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_2c6f4c:
    // 0x2c6f4c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C6F4Cu;
    {
        const bool branch_taken_0x2c6f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6f4c) {
            ctx->pc = 0x2C6FB4u;
            goto label_2c6fb4;
        }
    }
    ctx->pc = 0x2C6F54u;
    // 0x2c6f54: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C6F54u;
    SET_GPR_U32(ctx, 31, 0x2C6F5Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C6F54u, 0x2C6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F5Cu;
label_2c6f5c:
    // 0x2c6f5c: 0x8e030178  lw          $v1, 0x178($s0)
    ctx->pc = 0x2c6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x2c6f60: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x2c6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2c6f64: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2c6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2c6f68: 0xc78191a0  lwc1        $f1, -0x6E60($gp)
    ctx->pc = 0x2c6f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6f6c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c6f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c6f70: 0x24a56218  addiu       $a1, $a1, 0x6218
    ctx->pc = 0x2c6f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25112));
    // 0x2c6f74: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2c6f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c6f78: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2c6f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6f7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6f7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6f80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c6f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6f88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6f88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c6f8c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c6f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c6f90: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2c6f90u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c6f94: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C6F94u;
    {
        const bool branch_taken_0x2c6f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6f94) {
            ctx->pc = 0x2C6F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6F94u;
            // 0x2c6f98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6F9Cu;
            goto label_2c6f9c;
        }
    }
    ctx->pc = 0x2C6F9Cu;
label_2c6f9c:
    // 0x2c6f9c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2c6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c6fa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c6fa4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c6fa8: 0x2010  mfhi        $a0
    ctx->pc = 0x2c6fa8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2c6fac: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x2c6facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x2c6fb0: 0xac44026c  sw          $a0, 0x26C($v0)
    ctx->pc = 0x2c6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 4));
label_2c6fb4:
    // 0x2c6fb4: 0xc0a5422  jal         func_295088
    ctx->pc = 0x2C6FB4u;
    SET_GPR_U32(ctx, 31, 0x2C6FBCu);
    ctx->pc = 0x2C6FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6FB4u;
    // 0x2c6fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295088u, 0x2C6FB4u, 0x2C6FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FBCu;
label_2c6fbc:
    // 0x2c6fbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6FBCu;
    {
        const bool branch_taken_0x2c6fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FBCu;
        // 0x2c6fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fbc) {
            ctx->pc = 0x2C6FD0u;
            goto label_2c6fd0;
        }
    }
    ctx->pc = 0x2C6FC4u;
    // 0x2c6fc4: 0xc0a5116  jal         func_294458
    ctx->pc = 0x2C6FC4u;
    SET_GPR_U32(ctx, 31, 0x2C6FCCu);
    ctx->pc = 0x2C6FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6FC4u;
    // 0x2c6fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294458u, 0x2C6FC4u, 0x2C6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FCCu;
label_2c6fcc:
    // 0x2c6fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fd0:
    // 0x2c6fd0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c6fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c6fd4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2c6fd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6fd8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2c6fd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6fdc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2c6fdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c6fe0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c6fe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6fe4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c6fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6fe8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c6fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6fec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c6fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6ff4: 0x80a224a  j           func_288928
    ctx->pc = 0x2C6FF4u;
    ctx->pc = 0x2C6FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6FF4u;
    // 0x2c6ff8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288928u;
    chrClearGuns_0x288928(rdram, ctx, runtime); return;
    ctx->pc = 0x2C6FFCu;
}
