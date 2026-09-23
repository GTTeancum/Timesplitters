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

// Function: gunShouldSwitchTo
// Address: 0x294c30 - 0x294e44
void gunShouldSwitchTo_0x294c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunShouldSwitchTo_0x294c30");
#endif

    switch (ctx->pc) {
        case 0x294de0u: goto label_294de0;
        case 0x294df0u: goto label_294df0;
        default: break;
    }

    ctx->pc = 0x294c30u;

    // 0x294c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294c34: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x294c34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294c3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x294c40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294c48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294c4c: 0x11000077  beqz        $t0, . + 4 + (0x77 << 2)
    ctx->pc = 0x294C4Cu;
    {
        const bool branch_taken_0x294c4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C4Cu;
        // 0x294c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c4c) {
            ctx->pc = 0x294E2Cu;
            goto label_294e2c;
        }
    }
    ctx->pc = 0x294C54u;
    // 0x294c54: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x294c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x294c58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x294c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x294c5c: 0x8c4301e8  lw          $v1, 0x1E8($v0)
    ctx->pc = 0x294c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x294c60: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x294C60u;
    {
        const bool branch_taken_0x294c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C60u;
        // 0x294c64: 0x3c120037  lui         $s2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c60) {
            ctx->pc = 0x294E28u;
            goto label_294e28;
        }
    }
    ctx->pc = 0x294C68u;
    // 0x294c68: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x294c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x294c6c: 0x264290f8  addiu       $v0, $s2, -0x6F08
    ctx->pc = 0x294c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938872));
    // 0x294c70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x294c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294c74: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x294c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x294c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x294c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294c80: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x294c80u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c84: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x294c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294c88: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x294c88u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c8c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x294c8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x294c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294c94: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x294C94u;
    {
        const bool branch_taken_0x294c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x294C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C94u;
        // 0x294c98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c94) {
            ctx->pc = 0x294CD8u;
            goto label_294cd8;
        }
    }
    ctx->pc = 0x294C9Cu;
    // 0x294c9c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x294c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294ca0: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x294ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x294ca4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x294CA4u;
    {
        const bool branch_taken_0x294ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CA4u;
        // 0x294ca8: 0x26030178  addiu       $v1, $s0, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ca4) {
            ctx->pc = 0x294CD8u;
            goto label_294cd8;
        }
    }
    ctx->pc = 0x294CACu;
    // 0x294cac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x294CACu;
    {
        const bool branch_taken_0x294cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CACu;
        // 0x294cb0: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294cac) {
            ctx->pc = 0x294CD8u;
            goto label_294cd8;
        }
    }
    ctx->pc = 0x294CB4u;
    // 0x294cb4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x294cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x294cb8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x294cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294cbc: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x294cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x294cc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294cc4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x294cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294cc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294ccc: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x294cccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cd0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x294cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x294cd4: 0x8c6c017c  lw          $t4, 0x17C($v1)
    ctx->pc = 0x294cd4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
label_294cd8:
    // 0x294cd8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x294cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x294cdc: 0x264390f8  addiu       $v1, $s2, -0x6F08
    ctx->pc = 0x294cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938872));
    // 0x294ce0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x294ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x294ce4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x294ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294ce8: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x294ce8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x294cec: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x294CECu;
    {
        const bool branch_taken_0x294cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x294CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CECu;
        // 0x294cf0: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294cec) {
            ctx->pc = 0x294D2Cu;
            goto label_294d2c;
        }
    }
    ctx->pc = 0x294CF4u;
    // 0x294cf4: 0x24420198  addiu       $v0, $v0, 0x198
    ctx->pc = 0x294cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 408));
    // 0x294cf8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x294CF8u;
    {
        const bool branch_taken_0x294cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CF8u;
        // 0x294cfc: 0x2603010c  addiu       $v1, $s0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294cf8) {
            ctx->pc = 0x294D2Cu;
            goto label_294d2c;
        }
    }
    ctx->pc = 0x294D00u;
    // 0x294d00: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x294D00u;
    {
        const bool branch_taken_0x294d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D00u;
        // 0x294d04: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d00) {
            ctx->pc = 0x294D2Cu;
            goto label_294d2c;
        }
    }
    ctx->pc = 0x294D08u;
    // 0x294d08: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x294d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x294d0c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x294d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294d10: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x294d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x294d14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294d18: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x294d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294d1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294d20: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x294d20u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d24: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x294d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x294d28: 0x8c6e0110  lw          $t6, 0x110($v1)
    ctx->pc = 0x294d28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_294d2c:
    // 0x294d2c: 0x264a90f8  addiu       $t2, $s2, -0x6F08
    ctx->pc = 0x294d2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938872));
    // 0x294d30: 0x888c0  sll         $s1, $t0, 3
    ctx->pc = 0x294d30u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x294d34: 0x1511021  addu        $v0, $t2, $s1
    ctx->pc = 0x294d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x294d38: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x294d38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294d3c: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x294d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294d40: 0x10890010  beq         $a0, $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x294D40u;
    {
        const bool branch_taken_0x294d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x294D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D40u;
        // 0x294d44: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d40) {
            ctx->pc = 0x294D84u;
            goto label_294d84;
        }
    }
    ctx->pc = 0x294D48u;
    // 0x294d48: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x294d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x294d4c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x294d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294d50: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x294d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x294d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294d58: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x294d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294d5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294d60: 0x8b2826  xor         $a1, $a0, $t3
    ctx->pc = 0x294d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 11));
    // 0x294d64: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x294d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x294d68: 0x8d2026  xor         $a0, $a0, $t5
    ctx->pc = 0x294d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 13));
    // 0x294d6c: 0x8c67026c  lw          $a3, 0x26C($v1)
    ctx->pc = 0x294d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x294d70: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x294d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x294d74: 0x45380a  movz        $a3, $v0, $a1
    ctx->pc = 0x294d74u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x294d78: 0xee1821  addu        $v1, $a3, $t6
    ctx->pc = 0x294d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x294d7c: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x294d7cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x294d80: 0x1511021  addu        $v0, $t2, $s1
    ctx->pc = 0x294d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
label_294d84:
    // 0x294d84: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x294d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x294d88: 0x1089000f  beq         $a0, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x294D88u;
    {
        const bool branch_taken_0x294d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x294D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D88u;
        // 0x294d8c: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d88) {
            ctx->pc = 0x294DC8u;
            goto label_294dc8;
        }
    }
    ctx->pc = 0x294D90u;
    // 0x294d90: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x294d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x294d94: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x294d94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294d98: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x294d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x294d9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294da0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x294da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294da4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294da8: 0x8b2826  xor         $a1, $a0, $t3
    ctx->pc = 0x294da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 11));
    // 0x294dac: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x294dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x294db0: 0x8d2026  xor         $a0, $a0, $t5
    ctx->pc = 0x294db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 13));
    // 0x294db4: 0x8c66026c  lw          $a2, 0x26C($v1)
    ctx->pc = 0x294db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x294db8: 0xcc1021  addu        $v0, $a2, $t4
    ctx->pc = 0x294db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x294dbc: 0x45300a  movz        $a2, $v0, $a1
    ctx->pc = 0x294dbcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x294dc0: 0xce1821  addu        $v1, $a2, $t6
    ctx->pc = 0x294dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x294dc4: 0x64300a  movz        $a2, $v1, $a0
    ctx->pc = 0x294dc4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_294dc8:
    // 0x294dc8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x294DC8u;
    {
        const bool branch_taken_0x294dc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x294DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DC8u;
        // 0x294dcc: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294dc8) {
            ctx->pc = 0x294DD8u;
            goto label_294dd8;
        }
    }
    ctx->pc = 0x294DD0u;
    // 0x294dd0: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x294DD0u;
    {
        const bool branch_taken_0x294dd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x294dd0) {
            ctx->pc = 0x294DE8u;
            goto label_294de8;
        }
    }
    ctx->pc = 0x294DD8u;
label_294dd8:
    // 0x294dd8: 0xc0a5414  jal         func_295050
    ctx->pc = 0x294DD8u;
    SET_GPR_U32(ctx, 31, 0x294DE0u);
    ctx->pc = 0x294DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DD8u;
    // 0x294ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295050u, 0x294DD8u, 0x294DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DE0u;
label_294de0:
    // 0x294de0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x294DE0u;
    {
        const bool branch_taken_0x294de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DE0u;
        // 0x294de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294de0) {
            ctx->pc = 0x294E2Cu;
            goto label_294e2c;
        }
    }
    ctx->pc = 0x294DE8u;
label_294de8:
    // 0x294de8: 0xc0a542e  jal         func_2950B8
    ctx->pc = 0x294DE8u;
    SET_GPR_U32(ctx, 31, 0x294DF0u);
    ctx->pc = 0x294DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DE8u;
    // 0x294dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950B8u, 0x294DE8u, 0x294DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DF0u;
label_294df0:
    // 0x294df0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x294DF0u;
    {
        const bool branch_taken_0x294df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DF0u;
        // 0x294df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294df0) {
            ctx->pc = 0x294E2Cu;
            goto label_294e2c;
        }
    }
    ctx->pc = 0x294DF8u;
    // 0x294df8: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x294df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x294dfc: 0x264390f8  addiu       $v1, $s2, -0x6F08
    ctx->pc = 0x294dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938872));
    // 0x294e00: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x294e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x294e04: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x294e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x294e08: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x294e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x294e0c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x294e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x294e10: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x294e10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x294e14: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x294e14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x294e18: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x294E18u;
    {
        const bool branch_taken_0x294e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x294E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E18u;
        // 0x294e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e18) {
            ctx->pc = 0x294E2Cu;
            goto label_294e2c;
        }
    }
    ctx->pc = 0x294E20u;
    // 0x294e20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294E20u;
    {
        const bool branch_taken_0x294e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E20u;
        // 0x294e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e20) {
            ctx->pc = 0x294E2Cu;
            goto label_294e2c;
        }
    }
    ctx->pc = 0x294E28u;
label_294e28:
    // 0x294e28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x294e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294e2c:
    // 0x294e2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294e30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294e34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x294E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E3Cu;
        // 0x294e40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294E44u;
}
