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

// Function: quorem
// Address: 0x2e9c68 - 0x2e9e7c
void quorem_0x2e9c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quorem_0x2e9c68");
#endif

    switch (ctx->pc) {
        case 0x2e9cf8u: goto label_2e9cf8;
        case 0x2e9d70u: goto label_2e9d70;
        case 0x2e9d9cu: goto label_2e9d9c;
        case 0x2e9db8u: goto label_2e9db8;
        case 0x2e9e30u: goto label_2e9e30;
        default: break;
    }

    ctx->pc = 0x2e9c68u;

    // 0x2e9c68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e9c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e9c6c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2e9c6cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c70: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e9c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e9c74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e9c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e9c78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e9c78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c7c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2e9c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2e9c80: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2e9c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2e9c84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e9c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e9c88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e9c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e9c8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e9c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e9c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9c94: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x2e9c94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2e9c98: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2e9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2e9c9c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2e9c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2e9ca0: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2E9CA0u;
    {
        const bool branch_taken_0x2e9ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9CA0u;
        // 0x2e9ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ca0) {
            ctx->pc = 0x2E9E54u;
            goto label_2e9e54;
        }
    }
    ctx->pc = 0x2E9CA8u;
    // 0x2e9ca8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e9ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e9cac: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x2e9cacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x2e9cb0: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x2e9cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e9cb4: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x2e9cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x2e9cb8: 0x1679821  addu        $s3, $t3, $a3
    ctx->pc = 0x2e9cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2e9cbc: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x2e9cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2e9cc0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e9cc4: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x2e9cc4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e9cc8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2e9cc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ccc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e9cd0: 0x1a2001b  divu        $zero, $t5, $v0
    ctx->pc = 0x2e9cd0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x2e9cd4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E9CD4u;
    {
        const bool branch_taken_0x2e9cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9cd4) {
            ctx->pc = 0x2E9CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9CD4u;
            // 0x2e9cd8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9CDCu;
            goto label_2e9cdc;
        }
    }
    ctx->pc = 0x2E9CDCu;
label_2e9cdc:
    // 0x2e9cdc: 0xa812  mflo        $s5
    ctx->pc = 0x2e9cdcu;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x2e9ce0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2e9ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ce4: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E9CE4u;
    {
        const bool branch_taken_0x2e9ce4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9CE4u;
        // 0x2e9ce8: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ce4) {
            ctx->pc = 0x2E9D90u;
            goto label_2e9d90;
        }
    }
    ctx->pc = 0x2E9CECu;
    // 0x2e9cec: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2e9cecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cf0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e9cf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cf4: 0x0  nop
    ctx->pc = 0x2e9cf4u;
    // NOP
label_2e9cf8:
    // 0x2e9cf8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2e9cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2e9cfc: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x2e9cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2e9d00: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2e9d00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2e9d04: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2e9d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2e9d08: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x2e9d08u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2e9d0c: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x2e9d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2e9d10: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2e9d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2e9d14: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x2e9d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e9d18: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2e9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e9d1c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2e9d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e9d20: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2e9d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2e9d24: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2e9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2e9d28: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2e9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e9d2c: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x2e9d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e9d30: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2e9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2e9d34: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x2e9d34u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2e9d38: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x2e9d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2e9d3c: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x2e9d3cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2e9d40: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x2e9d40u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e9d44: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x2e9d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2e9d48: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x2e9d48u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e9d4c: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x2e9d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e9d50: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x2e9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2e9d54: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x2e9d54u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2e9d58: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2E9D58u;
    {
        const bool branch_taken_0x2e9d58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D58u;
        // 0x2e9d5c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d58) {
            ctx->pc = 0x2E9CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9cf8;
        }
    }
    ctx->pc = 0x2E9D60u;
    // 0x2e9d60: 0x15a0000c  bnez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x2E9D60u;
    {
        const bool branch_taken_0x2e9d60 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D60u;
        // 0x2e9d64: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d60) {
            ctx->pc = 0x2E9D94u;
            goto label_2e9d94;
        }
    }
    ctx->pc = 0x2E9D68u;
    // 0x2e9d68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9D68u;
    {
        const bool branch_taken_0x2e9d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D68u;
        // 0x2e9d6c: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d68) {
            ctx->pc = 0x2E9D74u;
            goto label_2e9d74;
        }
    }
    ctx->pc = 0x2E9D70u;
label_2e9d70:
    // 0x2e9d70: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e9d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2e9d74:
    // 0x2e9d74: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x2e9d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e9d78: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9D78u;
    {
        const bool branch_taken_0x2e9d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d78) {
            ctx->pc = 0x2E9D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9D78u;
            // 0x2e9d7c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9D90u;
            goto label_2e9d90;
        }
    }
    ctx->pc = 0x2E9D80u;
    // 0x2e9d80: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2e9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e9d84: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E9D84u;
    {
        const bool branch_taken_0x2e9d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D84u;
        // 0x2e9d88: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d84) {
            ctx->pc = 0x2E9D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9d70;
        }
    }
    ctx->pc = 0x2E9D8Cu;
    // 0x2e9d8c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x2e9d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2e9d90:
    // 0x2e9d90: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x2e9d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2e9d94:
    // 0x2e9d94: 0xc0bb200  jal         func_2EC800
    ctx->pc = 0x2E9D94u;
    SET_GPR_U32(ctx, 31, 0x2E9D9Cu);
    ctx->pc = 0x2E9D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D94u;
    // 0x2e9d98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC800u, 0x2E9D94u, 0x2E9D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D9Cu;
label_2e9d9c:
    // 0x2e9d9c: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E9D9Cu;
    {
        const bool branch_taken_0x2e9d9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D9Cu;
        // 0x2e9da0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d9c) {
            ctx->pc = 0x2E9E50u;
            goto label_2e9e50;
        }
    }
    ctx->pc = 0x2E9DA4u;
    // 0x2e9da4: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x2e9da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e9da8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2e9da8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9dac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e9dacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9db0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2e9db0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9db4: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x2e9db4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2e9db8:
    // 0x2e9db8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2e9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2e9dbc: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x2e9dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2e9dc0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2e9dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2e9dc4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2e9dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2e9dc8: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x2e9dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2e9dcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9dd0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2e9dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e9dd4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2e9dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2e9dd8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2e9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2e9ddc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2e9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e9de0: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x2e9de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e9de4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2e9de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2e9de8: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x2e9de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2e9dec: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x2e9decu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2e9df0: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x2e9df0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2e9df4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2e9df4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e9df8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x2e9df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2e9dfc: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x2e9dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e9e00: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x2e9e00u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e9e04: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x2e9e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2e9e08: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x2e9e08u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2e9e0c: 0x26b102b  sltu        $v0, $s3, $t3
    ctx->pc = 0x2e9e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2e9e10: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E9E10u;
    {
        const bool branch_taken_0x2e9e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E10u;
        // 0x2e9e14: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e10) {
            ctx->pc = 0x2E9DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9db8;
        }
    }
    ctx->pc = 0x2E9E18u;
    // 0x2e9e18: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x2e9e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2e9e1c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2e9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e9e20: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E9E20u;
    {
        const bool branch_taken_0x2e9e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E20u;
        // 0x2e9e24: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e20) {
            ctx->pc = 0x2E9E54u;
            goto label_2e9e54;
        }
    }
    ctx->pc = 0x2E9E28u;
    // 0x2e9e28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9E28u;
    {
        const bool branch_taken_0x2e9e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E28u;
        // 0x2e9e2c: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e28) {
            ctx->pc = 0x2E9E34u;
            goto label_2e9e34;
        }
    }
    ctx->pc = 0x2E9E30u;
label_2e9e30:
    // 0x2e9e30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e9e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2e9e34:
    // 0x2e9e34: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x2e9e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e9e38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9E38u;
    {
        const bool branch_taken_0x2e9e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e38) {
            ctx->pc = 0x2E9E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9E38u;
            // 0x2e9e3c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9E50u;
            goto label_2e9e50;
        }
    }
    ctx->pc = 0x2E9E40u;
    // 0x2e9e40: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2e9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e9e44: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E9E44u;
    {
        const bool branch_taken_0x2e9e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e44) {
            ctx->pc = 0x2E9E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9E44u;
            // 0x2e9e48: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9e30;
        }
    }
    ctx->pc = 0x2E9E4Cu;
    // 0x2e9e4c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x2e9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2e9e50:
    // 0x2e9e50: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e9e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e9e54:
    // 0x2e9e54: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e9e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e9e58: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2e9e58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e9e5c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e9e5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e9e60: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e9e60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e9e64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e9e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9e68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e9e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9e6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e9e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9e74: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E74u;
        // 0x2e9e78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9E7Cu;
}
