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

// Function: decalNewDecalMain
// Address: 0x2a3bd8 - 0x2a4024
void decalNewDecalMain_0x2a3bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalNewDecalMain_0x2a3bd8");
#endif

    switch (ctx->pc) {
        case 0x2a3cf4u: goto label_2a3cf4;
        case 0x2a3db4u: goto label_2a3db4;
        case 0x2a3de4u: goto label_2a3de4;
        case 0x2a3e2cu: goto label_2a3e2c;
        case 0x2a3e38u: goto label_2a3e38;
        case 0x2a3e44u: goto label_2a3e44;
        case 0x2a3e6cu: goto label_2a3e6c;
        case 0x2a3eb4u: goto label_2a3eb4;
        case 0x2a3ec0u: goto label_2a3ec0;
        case 0x2a3eccu: goto label_2a3ecc;
        case 0x2a3f0cu: goto label_2a3f0c;
        case 0x2a3fd0u: goto label_2a3fd0;
        default: break;
    }

    ctx->pc = 0x2a3bd8u;

    // 0x2a3bd8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2a3bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2a3bdc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a3bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3be0: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x2a3be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x2a3be4: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x2a3be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x2a3be8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2a3be8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bec: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x2a3becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x2a3bf0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2a3bf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bf4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2a3bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2a3bf8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a3bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bfc: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x2a3bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x2a3c00: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x2a3c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x2a3c04: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x2a3c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x2a3c08: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2a3c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2a3c0c: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x2a3c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x2a3c10: 0x126000f8  beqz        $s3, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2A3C10u;
    {
        const bool branch_taken_0x2a3c10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C10u;
        // 0x2a3c14: 0xffb000b0  sd          $s0, 0xB0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c10) {
            ctx->pc = 0x2A3FF4u;
            goto label_2a3ff4;
        }
    }
    ctx->pc = 0x2A3C18u;
    // 0x2a3c18: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a3c1c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2a3c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2a3c20: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2A3C20u;
    {
        const bool branch_taken_0x2a3c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C20u;
        // 0x2a3c24: 0xdfbf0140  ld          $ra, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c20) {
            ctx->pc = 0x2A3FF8u;
            goto label_2a3ff8;
        }
    }
    ctx->pc = 0x2A3C28u;
    // 0x2a3c28: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2a3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a3c2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a3c30: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A3C30u;
    {
        const bool branch_taken_0x2a3c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C30u;
        // 0x2a3c34: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c30) {
            ctx->pc = 0x2A3C88u;
            goto label_2a3c88;
        }
    }
    ctx->pc = 0x2A3C38u;
    // 0x2a3c38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3C38u;
    {
        const bool branch_taken_0x2a3c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C38u;
        // 0x2a3c3c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c38) {
            ctx->pc = 0x2A3C58u;
            goto label_2a3c58;
        }
    }
    ctx->pc = 0x2A3C40u;
    // 0x2a3c40: 0x504000ee  beql        $v0, $zero, . + 4 + (0xEE << 2)
    ctx->pc = 0x2A3C40u;
    {
        const bool branch_taken_0x2a3c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3c40) {
            ctx->pc = 0x2A3C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3C40u;
            // 0x2a3c44: 0xdfbe0130  ld          $fp, 0x130($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3FFCu;
            goto label_2a3ffc;
        }
    }
    ctx->pc = 0x2A3C48u;
    // 0x2a3c48: 0x186000eb  blez        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x2A3C48u;
    {
        const bool branch_taken_0x2a3c48 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C48u;
        // 0x2a3c4c: 0x8f85b2fc  lw          $a1, -0x4D04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c48) {
            ctx->pc = 0x2A3FF8u;
            goto label_2a3ff8;
        }
    }
    ctx->pc = 0x2A3C50u;
    // 0x2a3c50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A3C50u;
    {
        const bool branch_taken_0x2a3c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C50u;
        // 0x2a3c54: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c50) {
            ctx->pc = 0x2A3C90u;
            goto label_2a3c90;
        }
    }
    ctx->pc = 0x2A3C58u;
label_2a3c58:
    // 0x2a3c58: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2a3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a3c5c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A3C5Cu;
    {
        const bool branch_taken_0x2a3c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C5Cu;
        // 0x2a3c60: 0x28620101  slti        $v0, $v1, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c5c) {
            ctx->pc = 0x2A3C88u;
            goto label_2a3c88;
        }
    }
    ctx->pc = 0x2A3C64u;
    // 0x2a3c64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3C64u;
    {
        const bool branch_taken_0x2a3c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C64u;
        // 0x2a3c68: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c64) {
            ctx->pc = 0x2A3C7Cu;
            goto label_2a3c7c;
        }
    }
    ctx->pc = 0x2A3C6Cu;
    // 0x2a3c6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3C6Cu;
    {
        const bool branch_taken_0x2a3c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C6Cu;
        // 0x2a3c70: 0xdfbf0140  ld          $ra, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c6c) {
            ctx->pc = 0x2A3C88u;
            goto label_2a3c88;
        }
    }
    ctx->pc = 0x2A3C74u;
    // 0x2a3c74: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2A3C74u;
    {
        const bool branch_taken_0x2a3c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C74u;
        // 0x2a3c78: 0xdfbe0130  ld          $fp, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c74) {
            ctx->pc = 0x2A3FFCu;
            goto label_2a3ffc;
        }
    }
    ctx->pc = 0x2A3C7Cu;
label_2a3c7c:
    // 0x2a3c7c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2a3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a3c80: 0x146200dd  bne         $v1, $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x2A3C80u;
    {
        const bool branch_taken_0x2a3c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C80u;
        // 0x2a3c84: 0xdfbf0140  ld          $ra, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c80) {
            ctx->pc = 0x2A3FF8u;
            goto label_2a3ff8;
        }
    }
    ctx->pc = 0x2A3C88u;
label_2a3c88:
    // 0x2a3c88: 0x8f85b2fc  lw          $a1, -0x4D04($gp)
    ctx->pc = 0x2a3c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947580)));
    // 0x2a3c8c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2a3c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2a3c90:
    // 0x2a3c90: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A3C90u;
    {
        const bool branch_taken_0x2a3c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3c90) {
            ctx->pc = 0x2A3C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3C90u;
            // 0x2a3c94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3C98u;
            goto label_2a3c98;
        }
    }
    ctx->pc = 0x2A3C98u;
label_2a3c98:
    // 0x2a3c98: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2a3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a3c9c: 0x8f83b2f8  lw          $v1, -0x4D08($gp)
    ctx->pc = 0x2a3c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947576)));
    // 0x2a3ca0: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2a3ca0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a3ca4: 0x1010  mfhi        $v0
    ctx->pc = 0x2a3ca4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2a3ca8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3CA8u;
    {
        const bool branch_taken_0x2a3ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CA8u;
        // 0x2a3cac: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ca8) {
            ctx->pc = 0x2A3CD0u;
            goto label_2a3cd0;
        }
    }
    ctx->pc = 0x2A3CB0u;
    // 0x2a3cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3cb4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2a3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a3cb8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2a3cb8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a3cbc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A3CBCu;
    {
        const bool branch_taken_0x2a3cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3cbc) {
            ctx->pc = 0x2A3CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3CBCu;
            // 0x2a3cc0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3CC4u;
            goto label_2a3cc4;
        }
    }
    ctx->pc = 0x2A3CC4u;
label_2a3cc4:
    // 0x2a3cc4: 0x2010  mfhi        $a0
    ctx->pc = 0x2a3cc4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a3cc8: 0xaf84b2f8  sw          $a0, -0x4D08($gp)
    ctx->pc = 0x2a3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947576), GPR_U32(ctx, 4));
    // 0x2a3ccc: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2a3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2a3cd0:
    // 0x2a3cd0: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2a3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2a3cd4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2a3cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a3cd8: 0x24429a40  addiu       $v0, $v0, -0x65C0
    ctx->pc = 0x2a3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941248));
    // 0x2a3cdc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2a3cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3ce0: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2a3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x2a3ce4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2a3ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a3ce8: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x2a3ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2a3cec: 0xc098dcc  jal         func_263730
    ctx->pc = 0x2A3CECu;
    SET_GPR_U32(ctx, 31, 0x2A3CF4u);
    ctx->pc = 0x2A3CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3CECu;
    // 0x2a3cf0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x2A3CECu, 0x2A3CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CF4u;
label_2a3cf4:
    // 0x2a3cf4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2a3cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3cf8: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2a3cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2a3cfc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a3cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a3d00: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a3d00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3d04: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2a3d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2a3d08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a3d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a3d0c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2a3d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3d10: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2a3d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a3d14: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2a3d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a3d18: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2a3d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2a3d1c: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x2a3d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a3d20: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x2a3d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a3d24: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2a3d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3d28: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2a3d28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a3d2c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2a3d30: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2a3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2a3d34: 0xa4f021  addu        $fp, $a1, $a0
    ctx->pc = 0x2a3d34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a3d38: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2a3d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3d3c: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x2a3d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2a3d40: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x2a3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3d44: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2a3d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2a3d48: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2a3d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3d4c: 0x10e8007e  beq         $a3, $t0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2A3D4Cu;
    {
        const bool branch_taken_0x2a3d4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        ctx->pc = 0x2A3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D4Cu;
        // 0x2a3d50: 0xe6010028  swc1        $f1, 0x28($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3d4c) {
            ctx->pc = 0x2A3F48u;
            goto label_2a3f48;
        }
    }
    ctx->pc = 0x2A3D54u;
    // 0x2a3d54: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x2a3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x2a3d58: 0x54480018  bnel        $v0, $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A3D58u;
    {
        const bool branch_taken_0x2a3d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x2a3d58) {
            ctx->pc = 0x2A3D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3D58u;
            // 0x2a3d5c: 0xc66c004c  lwc1        $f12, 0x4C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3DBCu;
            goto label_2a3dbc;
        }
    }
    ctx->pc = 0x2A3D60u;
    // 0x2a3d60: 0xc7818dd8  lwc1        $f1, -0x7228($gp)
    ctx->pc = 0x2a3d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3d64: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2a3d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3d68: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x2a3d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a3d6c: 0xc66d004c  lwc1        $f13, 0x4C($s3)
    ctx->pc = 0x2a3d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a3d70: 0xc66e0058  lwc1        $f14, 0x58($s3)
    ctx->pc = 0x2a3d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a3d74: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2a3d74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2a3d78: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x2a3d78u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2a3d7c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2a3d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2a3d80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a3d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3d84: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x2a3d84u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x2a3d88: 0x0  nop
    ctx->pc = 0x2a3d88u;
    // NOP
    // 0x2a3d8c: 0x0  nop
    ctx->pc = 0x2a3d8cu;
    // NOP
    // 0x2a3d90: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2a3d90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2a3d94: 0x0  nop
    ctx->pc = 0x2a3d94u;
    // NOP
    // 0x2a3d98: 0x0  nop
    ctx->pc = 0x2a3d98u;
    // NOP
    // 0x2a3d9c: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x2a3d9cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x2a3da0: 0x0  nop
    ctx->pc = 0x2a3da0u;
    // NOP
    // 0x2a3da4: 0x0  nop
    ctx->pc = 0x2a3da4u;
    // NOP
    // 0x2a3da8: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x2a3da8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
    // 0x2a3dac: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x2A3DACu;
    SET_GPR_U32(ctx, 31, 0x2A3DB4u);
    ctx->pc = 0x2A3DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3DACu;
    // 0x2a3db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x2A3DACu, 0x2A3DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DB4u;
label_2a3db4:
    // 0x2a3db4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A3DB4u;
    {
        const bool branch_taken_0x2a3db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DB4u;
        // 0x2a3db8: 0xc6600030  lwc1        $f0, 0x30($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3db4) {
            ctx->pc = 0x2A3DE8u;
            goto label_2a3de8;
        }
    }
    ctx->pc = 0x2A3DBCu;
label_2a3dbc:
    // 0x2a3dbc: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2a3dbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3dc0: 0xc7818ddc  lwc1        $f1, -0x7224($gp)
    ctx->pc = 0x2a3dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3dc4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2a3dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2a3dc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a3dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3dcc: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2a3dccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2a3dd0: 0x0  nop
    ctx->pc = 0x2a3dd0u;
    // NOP
    // 0x2a3dd4: 0x0  nop
    ctx->pc = 0x2a3dd4u;
    // NOP
    // 0x2a3dd8: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2a3dd8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2a3ddc: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2A3DDCu;
    SET_GPR_U32(ctx, 31, 0x2A3DE4u);
    ctx->pc = 0x2A3DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3DDCu;
    // 0x2a3de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2A3DDCu, 0x2A3DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DE4u;
label_2a3de4:
    // 0x2a3de4: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x2a3de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a3de8:
    // 0x2a3de8: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x2a3de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3dec: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2a3decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3df4: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2a3df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a3df8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a3df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3dfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a3dfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a3e00: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x2a3e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a3e04: 0x26160014  addiu       $s6, $s0, 0x14
    ctx->pc = 0x2a3e04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2a3e08: 0x26170020  addiu       $s7, $s0, 0x20
    ctx->pc = 0x2a3e08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2a3e0c: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2a3e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2a3e10: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x2a3e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3e14: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a3e14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a3e18: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x2a3e18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2a3e1c: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x2a3e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3e20: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2a3e20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2a3e24: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x2A3E24u;
    SET_GPR_U32(ctx, 31, 0x2A3E2Cu);
    ctx->pc = 0x2A3E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E24u;
    // 0x2a3e28: 0xe603001c  swc1        $f3, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x2A3E24u, 0x2A3E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E2Cu;
label_2a3e2c:
    // 0x2a3e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e30: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2A3E30u;
    SET_GPR_U32(ctx, 31, 0x2A3E38u);
    ctx->pc = 0x2A3E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E30u;
    // 0x2a3e34: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2A3E30u, 0x2A3E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E38u;
label_2a3e38:
    // 0x2a3e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e3c: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2A3E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A3E44u);
    ctx->pc = 0x2A3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E3Cu;
    // 0x2a3e40: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2A3E3Cu, 0x2A3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E44u;
label_2a3e44:
    // 0x2a3e44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a3e48: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a3e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a3e4c: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A3E4Cu;
    {
        const bool branch_taken_0x2a3e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3e4c) {
            ctx->pc = 0x2A3E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3E4Cu;
            // 0x2a3e50: 0xc6050020  lwc1        $f5, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3ED0u;
            goto label_2a3ed0;
        }
    }
    ctx->pc = 0x2A3E54u;
    // 0x2a3e54: 0x83c50001  lb          $a1, 0x1($fp)
    ctx->pc = 0x2a3e54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x2a3e58: 0x4a0001c  bltz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A3E58u;
    {
        const bool branch_taken_0x2a3e58 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E58u;
        // 0x2a3e5c: 0x52980  sll         $a1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e58) {
            ctx->pc = 0x2A3ECCu;
            goto label_2a3ecc;
        }
    }
    ctx->pc = 0x2A3E60u;
    // 0x2a3e60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a3e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e64: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2A3E64u;
    SET_GPR_U32(ctx, 31, 0x2A3E6Cu);
    ctx->pc = 0x2A3E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E64u;
    // 0x2a3e68: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2A3E64u, 0x2A3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E6Cu;
label_2a3e6c:
    // 0x2a3e6c: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x2a3e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a3e70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a3e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e74: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2a3e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a3e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e7c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2a3e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3e80: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x2a3e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a3e84: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2a3e84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2a3e88: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2a3e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3e8c: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x2a3e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a3e90: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2a3e90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2a3e94: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x2a3e94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2a3e98: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2a3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2a3e9c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a3e9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a3ea0: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2a3ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2a3ea4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2a3ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2a3ea8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2a3ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2a3eac: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x2A3EACu;
    SET_GPR_U32(ctx, 31, 0x2A3EB4u);
    ctx->pc = 0x2A3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EACu;
    // 0x2a3eb0: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x2A3EACu, 0x2A3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3EB4u;
label_2a3eb4:
    // 0x2a3eb4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a3eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3eb8: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2A3EB8u;
    SET_GPR_U32(ctx, 31, 0x2A3EC0u);
    ctx->pc = 0x2A3EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EB8u;
    // 0x2a3ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2A3EB8u, 0x2A3EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3EC0u;
label_2a3ec0:
    // 0x2a3ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ec4: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2A3EC4u;
    SET_GPR_U32(ctx, 31, 0x2A3ECCu);
    ctx->pc = 0x2A3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EC4u;
    // 0x2a3ec8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2A3EC4u, 0x2A3ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3ECCu;
label_2a3ecc:
    // 0x2a3ecc: 0xc6050020  lwc1        $f5, 0x20($s0)
    ctx->pc = 0x2a3eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a3ed0:
    // 0x2a3ed0: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x2a3ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a3ed4: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2a3ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2a3ed8: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x2a3ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a3edc: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2a3edcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2a3ee0: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2a3ee0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2a3ee4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a3ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3ee8: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2a3ee8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a3eec: 0x0  nop
    ctx->pc = 0x2a3eecu;
    // NOP
    // 0x2a3ef0: 0x0  nop
    ctx->pc = 0x2a3ef0u;
    // NOP
    // 0x2a3ef4: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2a3ef4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a3ef8: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2a3ef8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a3efc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3EFCu;
    {
        const bool branch_taken_0x2a3efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a3efc) {
            ctx->pc = 0x2A3F1Cu;
            goto label_2a3f1c;
        }
    }
    ctx->pc = 0x2A3F04u;
    // 0x2a3f04: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A3F04u;
    SET_GPR_U32(ctx, 31, 0x2A3F0Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A3F04u, 0x2A3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F0Cu;
label_2a3f0c:
    // 0x2a3f0c: 0xc6050020  lwc1        $f5, 0x20($s0)
    ctx->pc = 0x2a3f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a3f10: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a3f10u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2a3f14: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x2a3f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a3f18: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x2a3f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a3f1c:
    // 0x2a3f1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a3f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3f20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a3f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3f24: 0x0  nop
    ctx->pc = 0x2a3f24u;
    // NOP
    // 0x2a3f28: 0x0  nop
    ctx->pc = 0x2a3f28u;
    // NOP
    // 0x2a3f2c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2a3f2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a3f30: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x2a3f30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a3f34: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2a3f34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a3f38: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2a3f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a3f3c: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x2a3f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2a3f40: 0xe6020020  swc1        $f2, 0x20($s0)
    ctx->pc = 0x2a3f40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2a3f44: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2a3f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_2a3f48:
    // 0x2a3f48: 0xc6850008  lwc1        $f5, 0x8($s4)
    ctx->pc = 0x2a3f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a3f4c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a3f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3f50: 0xc6860000  lwc1        $f6, 0x0($s4)
    ctx->pc = 0x2a3f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a3f54: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a3f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3f58: 0xc7828de0  lwc1        $f2, -0x7220($gp)
    ctx->pc = 0x2a3f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a3f5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f60: 0xc6870004  lwc1        $f7, 0x4($s4)
    ctx->pc = 0x2a3f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a3f64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a3f64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f68: 0x46022a02  mul.s       $f8, $f5, $f2
    ctx->pc = 0x2a3f68u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2a3f6c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2a3f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3f70: 0x46023242  mul.s       $f9, $f6, $f2
    ctx->pc = 0x2a3f70u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2a3f74: 0xc6a40000  lwc1        $f4, 0x0($s5)
    ctx->pc = 0x2a3f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a3f78: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x2a3f78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2a3f7c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2a3f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3f80: 0xc7838de4  lwc1        $f3, -0x721C($gp)
    ctx->pc = 0x2a3f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a3f84: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2a3f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2a3f88: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x2a3f88u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x2a3f8c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x2a3f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2a3f90: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x2a3f90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2a3f94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a3f94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a3f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a3f9c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a3f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a3fa0: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x2a3fa0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2a3fa4: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2a3fa4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a3fa8: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x2a3fa8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x2a3fac: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2a3facu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a3fb0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2a3fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a3fb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a3fb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fb8: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2a3fb8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a3fbc: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x2a3fbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a3fc0: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x2a3fc0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a3fc4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a3fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a3fc8: 0xc09640e  jal         func_259038
    ctx->pc = 0x2A3FC8u;
    SET_GPR_U32(ctx, 31, 0x2A3FD0u);
    ctx->pc = 0x2A3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3FC8u;
    // 0x2a3fcc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2A3FC8u, 0x2A3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FD0u;
label_2a3fd0:
    // 0x2a3fd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3FD0u;
    {
        const bool branch_taken_0x2a3fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FD0u;
        // 0x2a3fd4: 0x8f83b2fc  lw          $v1, -0x4D04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fd0) {
            ctx->pc = 0x2A3FF4u;
            goto label_2a3ff4;
        }
    }
    ctx->pc = 0x2A3FD8u;
    // 0x2a3fd8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2a3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a3fdc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A3FDCu;
    {
        const bool branch_taken_0x2a3fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3fdc) {
            ctx->pc = 0x2A3FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3FDCu;
            // 0x2a3fe0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3FE4u;
            goto label_2a3fe4;
        }
    }
    ctx->pc = 0x2A3FE4u;
label_2a3fe4:
    // 0x2a3fe4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a3fe8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2a3fe8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a3fec: 0x2010  mfhi        $a0
    ctx->pc = 0x2a3fecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a3ff0: 0xaf84b2fc  sw          $a0, -0x4D04($gp)
    ctx->pc = 0x2a3ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947580), GPR_U32(ctx, 4));
label_2a3ff4:
    // 0x2a3ff4: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2a3ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2a3ff8:
    // 0x2a3ff8: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x2a3ff8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_2a3ffc:
    // 0x2a3ffc: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x2a3ffcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a4000: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x2a4000u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a4004: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x2a4004u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a4008: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2a4008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a400c: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x2a400cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a4010: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2a4010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a4014: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x2a4014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a4018: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2a4018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a401c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A401Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A401Cu;
        // 0x2a4020: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A401Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4024u;
}
