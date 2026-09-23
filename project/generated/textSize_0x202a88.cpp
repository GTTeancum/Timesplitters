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

// Function: textSize
// Address: 0x202a88 - 0x202d58
void textSize_0x202a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("textSize_0x202a88");
#endif

    switch (ctx->pc) {
        case 0x202b20u: goto label_202b20;
        case 0x202cc8u: goto label_202cc8;
        default: break;
    }

    ctx->pc = 0x202a88u;

    // 0x202a88: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x202a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x202a8c: 0x8f879a9c  lw          $a3, -0x6564($gp)
    ctx->pc = 0x202a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x202a90: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x202a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x202a94: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x202a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x202a98: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x202a98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a9c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x202a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x202aa0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x202aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202aa4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x202aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x202aa8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x202aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202aac: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x202aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x202ab0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x202ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x202ab4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x202ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ab8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x202ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x202abc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x202abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x202ac0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x202ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x202ac4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x202ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x202ac8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x202ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x202acc: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x202accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x202ad0: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x202ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x202ad4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x202ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x202ad8: 0x30720001  andi        $s2, $v1, 0x1
    ctx->pc = 0x202ad8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x202adc: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x202adcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x202ae0: 0x2421007  srav        $v0, $v0, $s2
    ctx->pc = 0x202ae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x202ae4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x202AE4u;
    {
        const bool branch_taken_0x202ae4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x202AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AE4u;
        // 0x202ae8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ae4) {
            ctx->pc = 0x202AFCu;
            goto label_202afc;
        }
    }
    ctx->pc = 0x202AECu;
    // 0x202aec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x202aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x202af0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x202af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x202af4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x202AF4u;
    {
        const bool branch_taken_0x202af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AF4u;
        // 0x202af8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202af4) {
            ctx->pc = 0x202D28u;
            goto label_202d28;
        }
    }
    ctx->pc = 0x202AFCu;
label_202afc:
    // 0x202afc: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x202afcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202b00: 0x10a00085  beqz        $a1, . + 4 + (0x85 << 2)
    ctx->pc = 0x202B00u;
    {
        const bool branch_taken_0x202b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B00u;
        // 0x202b04: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b00) {
            ctx->pc = 0x202D18u;
            goto label_202d18;
        }
    }
    ctx->pc = 0x202B08u;
    // 0x202b08: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x202b08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x202b0c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x202b0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b10: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x202b10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b14: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x202b14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x202b18: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x202b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x202b1c: 0x0  nop
    ctx->pc = 0x202b1cu;
    // NOP
label_202b20:
    // 0x202b20: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x202b20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202b24: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x202b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x202b28: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x202B28u;
    {
        const bool branch_taken_0x202b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x202B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B28u;
        // 0x202b2c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b28) {
            ctx->pc = 0x202B78u;
            goto label_202b78;
        }
    }
    ctx->pc = 0x202B30u;
    // 0x202b30: 0x2882005f  slti        $v0, $a0, 0x5F
    ctx->pc = 0x202b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)95) ? 1 : 0);
    // 0x202b34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202B34u;
    {
        const bool branch_taken_0x202b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B34u;
        // 0x202b38: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b34) {
            ctx->pc = 0x202B4Cu;
            goto label_202b4c;
        }
    }
    ctx->pc = 0x202B3Cu;
    // 0x202b3c: 0x109e0007  beq         $a0, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x202B3Cu;
    {
        const bool branch_taken_0x202b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 30));
        ctx->pc = 0x202B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B3Cu;
        // 0x202b40: 0x30a20080  andi        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b3c) {
            ctx->pc = 0x202B5Cu;
            goto label_202b5c;
        }
    }
    ctx->pc = 0x202B44u;
    // 0x202b44: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x202B44u;
    {
        const bool branch_taken_0x202b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202b44) {
            ctx->pc = 0x202BE4u;
            goto label_202be4;
        }
    }
    ctx->pc = 0x202B4Cu;
label_202b4c:
    // 0x202b4c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202B4Cu;
    {
        const bool branch_taken_0x202b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x202B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B4Cu;
        // 0x202b50: 0x30a20080  andi        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b4c) {
            ctx->pc = 0x202B6Cu;
            goto label_202b6c;
        }
    }
    ctx->pc = 0x202B54u;
    // 0x202b54: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x202B54u;
    {
        const bool branch_taken_0x202b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202b54) {
            ctx->pc = 0x202BE4u;
            goto label_202be4;
        }
    }
    ctx->pc = 0x202B5Cu;
label_202b5c:
    // 0x202b5c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x202b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202b60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x202b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b64: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x202B64u;
    {
        const bool branch_taken_0x202b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B64u;
        // 0x202b68: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b64) {
            ctx->pc = 0x202D08u;
            goto label_202d08;
        }
    }
    ctx->pc = 0x202B6Cu;
label_202b6c:
    // 0x202b6c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x202b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x202b70: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x202B70u;
    {
        const bool branch_taken_0x202b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B70u;
        // 0x202b74: 0x2e3b821  addu        $s7, $s7, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b70) {
            ctx->pc = 0x202D08u;
            goto label_202d08;
        }
    }
    ctx->pc = 0x202B78u;
label_202b78:
    // 0x202b78: 0x8f82b498  lw          $v0, -0x4B68($gp)
    ctx->pc = 0x202b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x202b7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x202b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x202b80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x202b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202b84: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x202b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x202b88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x202b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x202b8c: 0x2d73021  addu        $a2, $s6, $s7
    ctx->pc = 0x202b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x202b90: 0x2463ffcf  addiu       $v1, $v1, -0x31
    ctx->pc = 0x202b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x202b94: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x202b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x202b98: 0x24429a48  addiu       $v0, $v0, -0x65B8
    ctx->pc = 0x202b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941256));
    // 0x202b9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x202ba0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202ba4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x202ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202ba8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x202ba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x202bac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x202bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202bb0: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x202bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x202bb4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x202bb4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202bb8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x202bb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x202bbc: 0x2442007  srav        $a0, $a0, $s2
    ctx->pc = 0x202bbcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 18) & 0x1F));
    // 0x202bc0: 0x2431807  srav        $v1, $v1, $s2
    ctx->pc = 0x202bc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x202bc4: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x202bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x202bc8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x202bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x202bcc: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x202bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x202bd0: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x202bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x202bd4: 0x2a4182a  slt         $v1, $s5, $a0
    ctx->pc = 0x202bd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x202bd8: 0xc2a00b  movn        $s4, $a2, $v0
    ctx->pc = 0x202bd8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
    // 0x202bdc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x202BDCu;
    {
        const bool branch_taken_0x202bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BDCu;
        // 0x202be0: 0x83a80b  movn        $s5, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bdc) {
            ctx->pc = 0x202D08u;
            goto label_202d08;
        }
    }
    ctx->pc = 0x202BE4u;
label_202be4:
    // 0x202be4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202BE4u;
    {
        const bool branch_taken_0x202be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BE4u;
        // 0x202be8: 0x3c030032  lui         $v1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202be4) {
            ctx->pc = 0x202C00u;
            goto label_202c00;
        }
    }
    ctx->pc = 0x202BECu;
    // 0x202bec: 0x30a2007f  andi        $v0, $a1, 0x7F
    ctx->pc = 0x202becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x202bf0: 0x24639920  addiu       $v1, $v1, -0x66E0
    ctx->pc = 0x202bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940960));
    // 0x202bf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202bf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202BF8u;
    {
        const bool branch_taken_0x202bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BF8u;
        // 0x202bfc: 0x90430000  lbu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bf8) {
            ctx->pc = 0x202C04u;
            goto label_202c04;
        }
    }
    ctx->pc = 0x202C00u;
label_202c00:
    // 0x202c00: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x202c00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_202c04:
    // 0x202c04: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x202c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x202c08: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x202C08u;
    {
        const bool branch_taken_0x202c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C08u;
        // 0x202c0c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c08) {
            ctx->pc = 0x202C54u;
            goto label_202c54;
        }
    }
    ctx->pc = 0x202C10u;
    // 0x202c10: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x202C10u;
    {
        const bool branch_taken_0x202c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C10u;
        // 0x202c14: 0x7e1018  mult        $v0, $v1, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c10) {
            ctx->pc = 0x202C58u;
            goto label_202c58;
        }
    }
    ctx->pc = 0x202C18u;
    // 0x202c18: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x202c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x202c1c: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x202c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x202c20: 0x244299a0  addiu       $v0, $v0, -0x6660
    ctx->pc = 0x202c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941088));
    // 0x202c24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202c28: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x202c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202c2c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x202c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x202c30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x202c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202c34: 0x24639a23  addiu       $v1, $v1, -0x65DD
    ctx->pc = 0x202c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941219));
    // 0x202c38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x202c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x202c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202c40: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x202c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202c44: 0x7e1818  mult        $v1, $v1, $fp
    ctx->pc = 0x202c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202c48: 0x2463fec0  addiu       $v1, $v1, -0x140
    ctx->pc = 0x202c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966976));
    // 0x202c4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x202C4Cu;
    {
        const bool branch_taken_0x202c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C4Cu;
        // 0x202c50: 0x1038021  addu        $s0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c4c) {
            ctx->pc = 0x202C60u;
            goto label_202c60;
        }
    }
    ctx->pc = 0x202C54u;
label_202c54:
    // 0x202c54: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x202c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_202c58:
    // 0x202c58: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x202c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x202c5c: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x202c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_202c60:
    // 0x202c60: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x202c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x202c64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x202c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x202c68: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x202C68u;
    {
        const bool branch_taken_0x202c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C68u;
        // 0x202c6c: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c68) {
            ctx->pc = 0x202CBCu;
            goto label_202cbc;
        }
    }
    ctx->pc = 0x202C70u;
    // 0x202c70: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x202C70u;
    {
        const bool branch_taken_0x202c70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x202C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C70u;
        // 0x202c74: 0x28820030  slti        $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c70) {
            ctx->pc = 0x202CA4u;
            goto label_202ca4;
        }
    }
    ctx->pc = 0x202C78u;
    // 0x202c78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202C78u;
    {
        const bool branch_taken_0x202c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C78u;
        // 0x202c7c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c78) {
            ctx->pc = 0x202C90u;
            goto label_202c90;
        }
    }
    ctx->pc = 0x202C80u;
    // 0x202c80: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202C80u;
    {
        const bool branch_taken_0x202c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x202C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C80u;
        // 0x202c84: 0x8f839a9c  lw          $v1, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c80) {
            ctx->pc = 0x202C9Cu;
            goto label_202c9c;
        }
    }
    ctx->pc = 0x202C88u;
    // 0x202c88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x202C88u;
    {
        const bool branch_taken_0x202c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C88u;
        // 0x202c8c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c88) {
            ctx->pc = 0x202CB0u;
            goto label_202cb0;
        }
    }
    ctx->pc = 0x202C90u;
label_202c90:
    // 0x202c90: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x202c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x202c94: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202C94u;
    {
        const bool branch_taken_0x202c94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x202C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C94u;
        // 0x202c98: 0x8f839a9c  lw          $v1, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c94) {
            ctx->pc = 0x202CACu;
            goto label_202cac;
        }
    }
    ctx->pc = 0x202C9Cu;
label_202c9c:
    // 0x202c9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x202C9Cu;
    {
        const bool branch_taken_0x202c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C9Cu;
        // 0x202ca0: 0x26730005  addiu       $s3, $s3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c9c) {
            ctx->pc = 0x202CDCu;
            goto label_202cdc;
        }
    }
    ctx->pc = 0x202CA4u;
label_202ca4:
    // 0x202ca4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x202CA4u;
    {
        const bool branch_taken_0x202ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CA4u;
        // 0x202ca8: 0x26730006  addiu       $s3, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ca4) {
            ctx->pc = 0x202CDCu;
            goto label_202cdc;
        }
    }
    ctx->pc = 0x202CACu;
label_202cac:
    // 0x202cac: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x202cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_202cb0:
    // 0x202cb0: 0x2421007  srav        $v0, $v0, $s2
    ctx->pc = 0x202cb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x202cb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x202CB4u;
    {
        const bool branch_taken_0x202cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CB4u;
        // 0x202cb8: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cb4) {
            ctx->pc = 0x202CDCu;
            goto label_202cdc;
        }
    }
    ctx->pc = 0x202CBCu;
label_202cbc:
    // 0x202cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cc0: 0xc0808aa  jal         func_2022A8
    ctx->pc = 0x202CC0u;
    SET_GPR_U32(ctx, 31, 0x202CC8u);
    ctx->pc = 0x202CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CC0u;
    // 0x202cc4: 0x7fa80010  sq          $t0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2022A8u, 0x202CC0u, 0x202CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CC8u;
label_202cc8:
    // 0x202cc8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x202cc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202ccc: 0x7ba80010  lq          $t0, 0x10($sp)
    ctx->pc = 0x202cccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202cd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202cd4: 0x2431807  srav        $v1, $v1, $s2
    ctx->pc = 0x202cd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x202cd8: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x202cd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_202cdc:
    // 0x202cdc: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x202cdcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x202ce0: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x202ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x202ce4: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x202ce4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x202ce8: 0x2a2202a  slt         $a0, $s5, $v0
    ctx->pc = 0x202ce8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x202cec: 0x2d73021  addu        $a2, $s6, $s7
    ctx->pc = 0x202cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x202cf0: 0x44a80b  movn        $s5, $v0, $a0
    ctx->pc = 0x202cf0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x202cf4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x202cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x202cf8: 0x2431807  srav        $v1, $v1, $s2
    ctx->pc = 0x202cf8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x202cfc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x202cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x202d00: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x202d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x202d04: 0xc2a00b  movn        $s4, $a2, $v0
    ctx->pc = 0x202d04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
label_202d08:
    // 0x202d08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x202d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x202d0c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x202d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202d10: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x202D10u;
    {
        const bool branch_taken_0x202d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D10u;
        // 0x202d14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d10) {
            ctx->pc = 0x202B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202b20;
        }
    }
    ctx->pc = 0x202D18u;
label_202d18:
    // 0x202d18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x202d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202d1c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x202d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x202d20: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x202d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x202d24: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x202d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
label_202d28:
    // 0x202d28: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x202d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x202d2c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x202d2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x202d30: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x202d30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x202d34: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x202d34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x202d38: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x202d38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202d3c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x202d3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202d40: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x202d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202d44: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x202d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202d48: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x202d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202d4c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x202d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202d50: 0x3e00008  jr          $ra
    ctx->pc = 0x202D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D50u;
        // 0x202d54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D58u;
}
