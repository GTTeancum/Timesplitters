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

// Function: emGetNextPos
// Address: 0x2b6c20 - 0x2b7010
void emGetNextPos_0x2b6c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emGetNextPos_0x2b6c20");
#endif

    switch (ctx->pc) {
        case 0x2b6c78u: goto label_2b6c78;
        case 0x2b6ce8u: goto label_2b6ce8;
        case 0x2b6d7cu: goto label_2b6d7c;
        case 0x2b6d84u: goto label_2b6d84;
        case 0x2b6da4u: goto label_2b6da4;
        case 0x2b6de8u: goto label_2b6de8;
        case 0x2b6e20u: goto label_2b6e20;
        case 0x2b6e98u: goto label_2b6e98;
        case 0x2b6ee0u: goto label_2b6ee0;
        case 0x2b6f18u: goto label_2b6f18;
        case 0x2b6f88u: goto label_2b6f88;
        case 0x2b6fb8u: goto label_2b6fb8;
        default: break;
    }

    ctx->pc = 0x2b6c20u;

    // 0x2b6c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b6c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b6c24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b6c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b6c28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b6c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b6c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b6c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c30: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b6c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b6c34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b6c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b6c38: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2B6C38u;
    {
        const bool branch_taken_0x2b6c38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C38u;
        // 0x2b6c3c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c38) {
            ctx->pc = 0x2B6D5Cu;
            goto label_2b6d5c;
        }
    }
    ctx->pc = 0x2B6C40u;
    // 0x2b6c40: 0x8f88b498  lw          $t0, -0x4B68($gp)
    ctx->pc = 0x2b6c40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b6c44: 0x8d021a10  lw          $v0, 0x1A10($t0)
    ctx->pc = 0x2b6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6672)));
    // 0x2b6c48: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x2b6c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b6c4c: 0x4e00019  bltz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B6C4Cu;
    {
        const bool branch_taken_0x2b6c4c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2B6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C4Cu;
        // 0x2b6c50: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c4c) {
            ctx->pc = 0x2B6CB4u;
            goto label_2b6cb4;
        }
    }
    ctx->pc = 0x2B6C54u;
    // 0x2b6c54: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b6c58: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2b6c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6c5c: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x2b6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b6c60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b6c64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6c68: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2B6C68u;
    {
        const bool branch_taken_0x2b6c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6c68) {
            ctx->pc = 0x2B6C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6C68u;
            // 0x2b6c6c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6CA0u;
            goto label_2b6ca0;
        }
    }
    ctx->pc = 0x2B6C70u;
    // 0x2b6c70: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b6c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b6c74: 0x0  nop
    ctx->pc = 0x2b6c74u;
    // NOP
label_2b6c78:
    // 0x2b6c78: 0x4e0000e  bltz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x2B6C78u;
    {
        const bool branch_taken_0x2b6c78 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2B6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C78u;
        // 0x2b6c7c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c78) {
            ctx->pc = 0x2B6CB4u;
            goto label_2b6cb4;
        }
    }
    ctx->pc = 0x2B6C80u;
    // 0x2b6c80: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2b6c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6c84: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x2b6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2b6c88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b6c8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6c90: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B6C90u;
    {
        const bool branch_taken_0x2b6c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6c90) {
            ctx->pc = 0x2B6C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6C90u;
            // 0x2b6c94: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6c78;
        }
    }
    ctx->pc = 0x2B6C98u;
    // 0x2b6c98: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x2b6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b6c9c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2b6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2b6ca0:
    // 0x2b6ca0: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x2b6ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b6ca4: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B6CA4u;
    {
        const bool branch_taken_0x2b6ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6ca4) {
            ctx->pc = 0x2B6CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6CA4u;
            // 0x2b6ca8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6c78;
        }
    }
    ctx->pc = 0x2B6CACu;
    // 0x2b6cac: 0x4e10017  bgez        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B6CACu;
    {
        const bool branch_taken_0x2b6cac = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2B6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CACu;
        // 0x2b6cb0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cac) {
            ctx->pc = 0x2B6D0Cu;
            goto label_2b6d0c;
        }
    }
    ctx->pc = 0x2B6CB4u;
label_2b6cb4:
    // 0x2b6cb4: 0x8d221a10  lw          $v0, 0x1A10($t1)
    ctx->pc = 0x2b6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 6672)));
    // 0x2b6cb8: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x2b6cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b6cbc: 0x4e000cc  bltz        $a3, . + 4 + (0xCC << 2)
    ctx->pc = 0x2B6CBCu;
    {
        const bool branch_taken_0x2b6cbc = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2B6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CBCu;
        // 0x2b6cc0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cbc) {
            ctx->pc = 0x2B6FF0u;
            goto label_2b6ff0;
        }
    }
    ctx->pc = 0x2B6CC4u;
    // 0x2b6cc4: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2b6cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6cc8: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x2b6cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b6ccc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b6cd0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b6cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b6cd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6CD4u;
    {
        const bool branch_taken_0x2b6cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CD4u;
        // 0x2b6cd8: 0x2482000c  addiu       $v0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cd4) {
            ctx->pc = 0x2B6D00u;
            goto label_2b6d00;
        }
    }
    ctx->pc = 0x2B6CDCu;
    // 0x2b6cdc: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x2b6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2b6ce0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b6ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b6ce4: 0x0  nop
    ctx->pc = 0x2b6ce4u;
    // NOP
label_2b6ce8:
    // 0x2b6ce8: 0x4e000c1  bltz        $a3, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2B6CE8u;
    {
        const bool branch_taken_0x2b6ce8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2B6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CE8u;
        // 0x2b6cec: 0x2463fff4  addiu       $v1, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ce8) {
            ctx->pc = 0x2B6FF0u;
            goto label_2b6ff0;
        }
    }
    ctx->pc = 0x2B6CF0u;
    // 0x2b6cf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6cf4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b6cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b6cf8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B6CF8u;
    {
        const bool branch_taken_0x2b6cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6cf8) {
            ctx->pc = 0x2B6CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6CF8u;
            // 0x2b6cfc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6ce8;
        }
    }
    ctx->pc = 0x2B6D00u;
label_2b6d00:
    // 0x2b6d00: 0x4e000bc  bltz        $a3, . + 4 + (0xBC << 2)
    ctx->pc = 0x2B6D00u;
    {
        const bool branch_taken_0x2b6d00 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2B6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D00u;
        // 0x2b6d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d00) {
            ctx->pc = 0x2B6FF4u;
            goto label_2b6ff4;
        }
    }
    ctx->pc = 0x2B6D08u;
    // 0x2b6d08: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b6d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b6d0c:
    // 0x2b6d0c: 0x2525000c  addiu       $a1, $t1, 0xC
    ctx->pc = 0x2b6d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x2b6d10: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x2b6d10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6d14: 0x25260008  addiu       $a2, $t1, 0x8
    ctx->pc = 0x2b6d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2b6d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6d1c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2b6d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b6d20: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2b6d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b6d24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b6d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b6d28: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2b6d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2b6d2c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2b6d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2b6d30: 0x8d241a0c  lw          $a0, 0x1A0C($t1)
    ctx->pc = 0x2b6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 6668)));
    // 0x2b6d34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b6d38: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2b6d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b6d3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b6d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b6d40: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b6d44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b6d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b6d48: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x2b6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x2b6d4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b6d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b6d54: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2B6D54u;
    {
        const bool branch_taken_0x2b6d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D54u;
        // 0x2b6d58: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d54) {
            ctx->pc = 0x2B6FF4u;
            goto label_2b6ff4;
        }
    }
    ctx->pc = 0x2B6D5Cu;
label_2b6d5c:
    // 0x2b6d5c: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x2b6d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2b6d60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6d64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6D64u;
    {
        const bool branch_taken_0x2b6d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D64u;
        // 0x2b6d68: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d64) {
            ctx->pc = 0x2B6D90u;
            goto label_2b6d90;
        }
    }
    ctx->pc = 0x2B6D6Cu;
    // 0x2b6d6c: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x2b6d6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b6d70: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2b6d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b6d74: 0xc0ad230  jal         func_2B48C0
    ctx->pc = 0x2B6D74u;
    SET_GPR_U32(ctx, 31, 0x2B6D7Cu);
    ctx->pc = 0x2B6D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6D74u;
    // 0x2b6d78: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48C0u, 0x2B6D74u, 0x2B6D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D7Cu;
label_2b6d7c:
    // 0x2b6d7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B6D7Cu;
    {
        const bool branch_taken_0x2b6d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D7Cu;
        // 0x2b6d80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d7c) {
            ctx->pc = 0x2B6DA8u;
            goto label_2b6da8;
        }
    }
    ctx->pc = 0x2B6D84u;
label_2b6d84:
    // 0x2b6d84: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x2b6d84u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6d88: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2B6D88u;
    {
        const bool branch_taken_0x2b6d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D88u;
        // 0x2b6d8c: 0x8c590008  lw          $t9, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d88) {
            ctx->pc = 0x2B6E14u;
            goto label_2b6e14;
        }
    }
    ctx->pc = 0x2B6D90u;
label_2b6d90:
    // 0x2b6d90: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b6d94: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x2b6d94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b6d98: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x2b6d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b6d9c: 0xc0ad230  jal         func_2B48C0
    ctx->pc = 0x2B6D9Cu;
    SET_GPR_U32(ctx, 31, 0x2B6DA4u);
    ctx->pc = 0x2B6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6D9Cu;
    // 0x2b6da0: 0x28040  sll         $s0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48C0u, 0x2B6D9Cu, 0x2B6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6DA4u;
label_2b6da4:
    // 0x2b6da4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b6da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b6da8:
    // 0x2b6da8: 0x433004  sllv        $a2, $v1, $v0
    ctx->pc = 0x2b6da8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2b6dac: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b6dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b6db0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2b6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b6db4: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x2b6db4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2b6db8: 0x24687c80  addiu       $t0, $v1, 0x7C80
    ctx->pc = 0x2b6db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 31872));
    // 0x2b6dbc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b6dc0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2b6dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2b6dc4: 0x64300a  movz        $a2, $v1, $a0
    ctx->pc = 0x2b6dc4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2b6dc8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2b6dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6dcc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2b6dccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2b6dd0: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2b6dd0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6dd4: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2b6dd4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6dd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b6dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ddc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b6ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6de0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b6de0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6de4: 0x0  nop
    ctx->pc = 0x2b6de4u;
    // NOP
label_2b6de8:
    // 0x2b6de8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b6dec: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6DECu;
    {
        const bool branch_taken_0x2b6dec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DECu;
        // 0x2b6df0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6dec) {
            ctx->pc = 0x2B6E00u;
            goto label_2b6e00;
        }
    }
    ctx->pc = 0x2B6DF4u;
    // 0x2b6df4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b6df8: 0x10c2ffe2  beq         $a2, $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2B6DF8u;
    {
        const bool branch_taken_0x2b6df8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DF8u;
        // 0x2b6dfc: 0x1031021  addu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6df8) {
            ctx->pc = 0x2B6D84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6d84;
        }
    }
    ctx->pc = 0x2B6E00u;
label_2b6e00:
    // 0x2b6e00: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x2b6e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x2b6e04: 0x24a5002c  addiu       $a1, $a1, 0x2C
    ctx->pc = 0x2b6e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x2b6e08: 0x2ce2001c  sltiu       $v0, $a3, 0x1C
    ctx->pc = 0x2b6e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x2b6e0c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B6E0Cu;
    {
        const bool branch_taken_0x2b6e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E0Cu;
        // 0x2b6e10: 0x2463002c  addiu       $v1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e0c) {
            ctx->pc = 0x2B6DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6de8;
        }
    }
    ctx->pc = 0x2B6E14u;
label_2b6e14:
    // 0x2b6e14: 0x57000004  bnel        $t8, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6E14u;
    {
        const bool branch_taken_0x2b6e14 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6e14) {
            ctx->pc = 0x2B6E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6E14u;
            // 0x2b6e18: 0x8f030000  lw          $v1, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6E28u;
            goto label_2b6e28;
        }
    }
    ctx->pc = 0x2B6E1Cu;
    // 0x2b6e1c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2b6e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2b6e20:
    // 0x2b6e20: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2B6E20u;
    {
        const bool branch_taken_0x2b6e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E20u;
        // 0x2b6e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e20) {
            ctx->pc = 0x2B6FF4u;
            goto label_2b6ff4;
        }
    }
    ctx->pc = 0x2B6E28u;
label_2b6e28:
    // 0x2b6e28: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x2b6e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b6e2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6E2Cu;
    {
        const bool branch_taken_0x2b6e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E2Cu;
        // 0x2b6e30: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e2c) {
            ctx->pc = 0x2B6E48u;
            goto label_2b6e48;
        }
    }
    ctx->pc = 0x2B6E34u;
    // 0x2b6e34: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x2b6e34u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2b6e38: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6E38u;
    {
        const bool branch_taken_0x2b6e38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6e38) {
            ctx->pc = 0x2B6E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6E38u;
            // 0x2b6e3c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6E40u;
            goto label_2b6e40;
        }
    }
    ctx->pc = 0x2B6E40u;
label_2b6e40:
    // 0x2b6e40: 0x1012  mflo        $v0
    ctx->pc = 0x2b6e40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b6e44: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2b6e44u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6e48:
    // 0x2b6e48: 0x8f030004  lw          $v1, 0x4($t8)
    ctx->pc = 0x2b6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x2b6e4c: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x2b6e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b6e50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6E50u;
    {
        const bool branch_taken_0x2b6e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E50u;
        // 0x2b6e54: 0x8f88b498  lw          $t0, -0x4B68($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e50) {
            ctx->pc = 0x2B6E70u;
            goto label_2b6e70;
        }
    }
    ctx->pc = 0x2B6E58u;
    // 0x2b6e58: 0x73001b  divu        $zero, $v1, $s3
    ctx->pc = 0x2b6e58u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2b6e5c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6E5Cu;
    {
        const bool branch_taken_0x2b6e5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6e5c) {
            ctx->pc = 0x2B6E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6E5Cu;
            // 0x2b6e60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6E64u;
            goto label_2b6e64;
        }
    }
    ctx->pc = 0x2B6E64u;
label_2b6e64:
    // 0x2b6e64: 0x1012  mflo        $v0
    ctx->pc = 0x2b6e64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b6e68: 0x1826018  mult        $t4, $t4, $v0
    ctx->pc = 0x2b6e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2b6e6c: 0x8f88b498  lw          $t0, -0x4B68($gp)
    ctx->pc = 0x2b6e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
label_2b6e70:
    // 0x2b6e70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b6e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e74: 0x8d021a10  lw          $v0, 0x1A10($t0)
    ctx->pc = 0x2b6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6672)));
    // 0x2b6e78: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2b6e78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e7c: 0x1840003c  blez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2B6E7Cu;
    {
        const bool branch_taken_0x2b6e7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E7Cu;
        // 0x2b6e80: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e7c) {
            ctx->pc = 0x2B6F70u;
            goto label_2b6f70;
        }
    }
    ctx->pc = 0x2B6E84u;
    // 0x2b6e84: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2b6e84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2b6e88: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2b6e88u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e8c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2b6e8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x2b6e90: 0x2712000c  addiu       $s2, $t8, 0xC
    ctx->pc = 0x2b6e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 24), 12));
    // 0x2b6e94: 0x250f0008  addiu       $t7, $t0, 0x8
    ctx->pc = 0x2b6e94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_2b6e98:
    // 0x2b6e98: 0x8e1821  addu        $v1, $a0, $t6
    ctx->pc = 0x2b6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x2b6e9c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b6ea0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b6ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b6ea4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B6EA4u;
    {
        const bool branch_taken_0x2b6ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EA4u;
        // 0x2b6ea8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ea4) {
            ctx->pc = 0x2B6F54u;
            goto label_2b6f54;
        }
    }
    ctx->pc = 0x2B6EACu;
    // 0x2b6eac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2b6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b6eb0: 0x54780029  bnel        $v1, $t8, . + 4 + (0x29 << 2)
    ctx->pc = 0x2B6EB0u;
    {
        const bool branch_taken_0x2b6eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        if (branch_taken_0x2b6eb0) {
            ctx->pc = 0x2B6EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6EB0u;
            // 0x2b6eb4: 0x8d421a10  lw          $v0, 0x1A10($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 6672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6F58u;
            goto label_2b6f58;
        }
    }
    ctx->pc = 0x2B6EB8u;
    // 0x2b6eb8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6ebc: 0x10700025  beq         $v1, $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B6EBCu;
    {
        const bool branch_taken_0x2b6ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B6EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EBCu;
        // 0x2b6ec0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ebc) {
            ctx->pc = 0x2B6F54u;
            goto label_2b6f54;
        }
    }
    ctx->pc = 0x2B6EC4u;
    // 0x2b6ec4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b6ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ec8: 0xe26818  mult        $t5, $a3, $v0
    ctx->pc = 0x2b6ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2b6ecc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2b6eccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ed0: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x2b6ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ed4: 0x254b000c  addiu       $t3, $t2, 0xC
    ctx->pc = 0x2b6ed4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x2b6ed8: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x2b6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2b6edc: 0x0  nop
    ctx->pc = 0x2b6edcu;
    // NOP
label_2b6ee0:
    // 0x2b6ee0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b6ee4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2b6ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6ee8: 0x793006  srlv        $a2, $t9, $v1
    ctx->pc = 0x2b6ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 3) & 0x1F));
    // 0x2b6eec: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2b6eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2b6ef0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B6EF0u;
    {
        const bool branch_taken_0x2b6ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6ef0) {
            ctx->pc = 0x2B6EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6EF0u;
            // 0x2b6ef4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6F48u;
            goto label_2b6f48;
        }
    }
    ctx->pc = 0x2B6EF8u;
    // 0x2b6ef8: 0x8d021a0c  lw          $v0, 0x1A0C($t0)
    ctx->pc = 0x2b6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6668)));
    // 0x2b6efc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2b6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b6f00: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b6f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b6f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b6f08: 0x1980ffc5  blez        $t4, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2B6F08u;
    {
        const bool branch_taken_0x2b6f08 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x2B6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F08u;
        // 0x2b6f0c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f08) {
            ctx->pc = 0x2B6E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6e20;
        }
    }
    ctx->pc = 0x2B6F10u;
    // 0x2b6f10: 0x1ab2021  addu        $a0, $t5, $t3
    ctx->pc = 0x2b6f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2b6f14: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x2b6f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f18:
    // 0x2b6f18: 0x8c83fffc  lw          $v1, -0x4($a0)
    ctx->pc = 0x2b6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x2b6f1c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2b6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2b6f20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b6f24: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2b6f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2b6f28: 0xac980004  sw          $t8, 0x4($a0)
    ctx->pc = 0x2b6f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 24));
    // 0x2b6f2c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2b6f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2b6f30: 0xac83fffc  sw          $v1, -0x4($a0)
    ctx->pc = 0x2b6f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 3));
    // 0x2b6f34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b6f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b6f38: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B6F38u;
    {
        const bool branch_taken_0x2b6f38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F38u;
        // 0x2b6f3c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f38) {
            ctx->pc = 0x2B6F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6f18;
        }
    }
    ctx->pc = 0x2B6F40u;
    // 0x2b6f40: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2B6F40u;
    {
        const bool branch_taken_0x2b6f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F40u;
        // 0x2b6f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f40) {
            ctx->pc = 0x2B6FF4u;
            goto label_2b6ff4;
        }
    }
    ctx->pc = 0x2B6F48u;
label_2b6f48:
    // 0x2b6f48: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x2b6f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2b6f4c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2B6F4Cu;
    {
        const bool branch_taken_0x2b6f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F4Cu;
        // 0x2b6f50: 0x1241821  addu        $v1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f4c) {
            ctx->pc = 0x2B6EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6ee0;
        }
    }
    ctx->pc = 0x2B6F54u;
label_2b6f54:
    // 0x2b6f54: 0x8d421a10  lw          $v0, 0x1A10($t2)
    ctx->pc = 0x2b6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 6672)));
label_2b6f58:
    // 0x2b6f58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b6f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b6f5c: 0x25ce000c  addiu       $t6, $t6, 0xC
    ctx->pc = 0x2b6f5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12));
    // 0x2b6f60: 0x25ef000c  addiu       $t7, $t7, 0xC
    ctx->pc = 0x2b6f60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
    // 0x2b6f64: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2b6f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b6f68: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2B6F68u;
    {
        const bool branch_taken_0x2b6f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F68u;
        // 0x2b6f6c: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f68) {
            ctx->pc = 0x2B6E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6e98;
        }
    }
    ctx->pc = 0x2B6F70u;
label_2b6f70:
    // 0x2b6f70: 0x8d421a10  lw          $v0, 0x1A10($t2)
    ctx->pc = 0x2b6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 6672)));
    // 0x2b6f74: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B6F74u;
    {
        const bool branch_taken_0x2b6f74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F74u;
        // 0x2b6f78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f74) {
            ctx->pc = 0x2B6FF0u;
            goto label_2b6ff0;
        }
    }
    ctx->pc = 0x2B6F7Cu;
    // 0x2b6f7c: 0x2543000c  addiu       $v1, $t2, 0xC
    ctx->pc = 0x2b6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x2b6f80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b6f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f84: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b6f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f88:
    // 0x2b6f88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6f8c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b6f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b6f90: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B6F90u;
    {
        const bool branch_taken_0x2b6f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6f90) {
            ctx->pc = 0x2B6F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6F90u;
            // 0x2b6f94: 0x8d021a10  lw          $v0, 0x1A10($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6FDCu;
            goto label_2b6fdc;
        }
    }
    ctx->pc = 0x2B6F98u;
    // 0x2b6f98: 0x8d021a0c  lw          $v0, 0x1A0C($t0)
    ctx->pc = 0x2b6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6668)));
    // 0x2b6f9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2b6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b6fa0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b6fa4: 0x1980ff9e  blez        $t4, . + 4 + (-0x62 << 2)
    ctx->pc = 0x2B6FA4u;
    {
        const bool branch_taken_0x2b6fa4 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x2B6FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FA4u;
        // 0x2b6fa8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fa4) {
            ctx->pc = 0x2B6E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6e20;
        }
    }
    ctx->pc = 0x2B6FACu;
    // 0x2b6fac: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2b6facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b6fb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6fb4: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x2b6fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2b6fb8:
    // 0x2b6fb8: 0xac59fffc  sw          $t9, -0x4($v0)
    ctx->pc = 0x2b6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 25));
    // 0x2b6fbc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2b6fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2b6fc0: 0xac580004  sw          $t8, 0x4($v0)
    ctx->pc = 0x2b6fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 24));
    // 0x2b6fc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b6fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b6fc8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2b6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2b6fcc: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B6FCCu;
    {
        const bool branch_taken_0x2b6fcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6fcc) {
            ctx->pc = 0x2B6FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6fb8;
        }
    }
    ctx->pc = 0x2B6FD4u;
    // 0x2b6fd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6FD4u;
    {
        const bool branch_taken_0x2b6fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FD4u;
        // 0x2b6fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fd4) {
            ctx->pc = 0x2B6FF4u;
            goto label_2b6ff4;
        }
    }
    ctx->pc = 0x2B6FDCu;
label_2b6fdc:
    // 0x2b6fdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b6fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b6fe0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2b6fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2b6fe4: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2b6fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b6fe8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2B6FE8u;
    {
        const bool branch_taken_0x2b6fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FE8u;
        // 0x2b6fec: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fe8) {
            ctx->pc = 0x2B6F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6f88;
        }
    }
    ctx->pc = 0x2B6FF0u;
label_2b6ff0:
    // 0x2b6ff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6ff4:
    // 0x2b6ff4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b6ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6ff8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b6ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6ffc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b6ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7000: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b7000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7008: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7008u;
        // 0x2b700c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7010u;
}
