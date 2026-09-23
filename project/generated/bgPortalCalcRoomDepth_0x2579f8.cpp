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

// Function: bgPortalCalcRoomDepth
// Address: 0x2579f8 - 0x257b7c
void bgPortalCalcRoomDepth_0x2579f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalCalcRoomDepth_0x2579f8");
#endif

    switch (ctx->pc) {
        case 0x257a48u: goto label_257a48;
        case 0x257af0u: goto label_257af0;
        case 0x257b30u: goto label_257b30;
        case 0x257b4cu: goto label_257b4c;
        default: break;
    }

    ctx->pc = 0x2579f8u;

label_2579f8:
    // 0x2579f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2579f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2579fc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2579fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x257a00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x257a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x257a04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x257a04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a08: 0x8f83a240  lw          $v1, -0x5DC0($gp)
    ctx->pc = 0x257a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x257a0c: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x257a0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x257a10: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x257a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x257a14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x257a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x257a18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x257a18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a1c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x257a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x257a20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x257a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a24: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x257a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x257a28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x257a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x257a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257a30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257a34: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x257a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x257a38: 0x1a60000c  blez        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x257A38u;
    {
        const bool branch_taken_0x257a38 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x257A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A38u;
        // 0x257a3c: 0x8ce80000  lw          $t0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a38) {
            ctx->pc = 0x257A6Cu;
            goto label_257a6c;
        }
    }
    ctx->pc = 0x257A40u;
    // 0x257a40: 0x8f84b894  lw          $a0, -0x476C($gp)
    ctx->pc = 0x257a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949012)));
    // 0x257a44: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x257a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_257a48:
    // 0x257a48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x257a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x257a4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257a50: 0x10740041  beq         $v1, $s4, . + 4 + (0x41 << 2)
    ctx->pc = 0x257A50u;
    {
        const bool branch_taken_0x257a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x257A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A50u;
        // 0x257a54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a50) {
            ctx->pc = 0x257B58u;
            goto label_257b58;
        }
    }
    ctx->pc = 0x257A58u;
    // 0x257a58: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x257a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x257a5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x257A5Cu;
    {
        const bool branch_taken_0x257a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A5Cu;
        // 0x257a60: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a5c) {
            ctx->pc = 0x257A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257a48;
        }
    }
    ctx->pc = 0x257A64u;
    // 0x257a64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x257A64u;
    {
        const bool branch_taken_0x257a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A64u;
        // 0x257a68: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a64) {
            ctx->pc = 0x257A74u;
            goto label_257a74;
        }
    }
    ctx->pc = 0x257A6Cu;
label_257a6c:
    // 0x257a6c: 0x8f84b894  lw          $a0, -0x476C($gp)
    ctx->pc = 0x257a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949012)));
    // 0x257a70: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x257a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_257a74:
    // 0x257a74: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x257a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x257a78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x257a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x257a7c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x257a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x257a80: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x257a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x257a84: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x257a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x257a88: 0x24847330  addiu       $a0, $a0, 0x7330
    ctx->pc = 0x257a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29488));
    // 0x257a8c: 0x2852818  mult        $a1, $s4, $a1
    ctx->pc = 0x257a8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x257a90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x257a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x257a94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257a98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x257a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x257a9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257aa0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x257aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x257aa4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x257aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x257aa8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x257AA8u;
    {
        const bool branch_taken_0x257aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AA8u;
        // 0x257aac: 0x53102a  slt         $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257aa8) {
            ctx->pc = 0x257B58u;
            goto label_257b58;
        }
    }
    ctx->pc = 0x257AB0u;
    // 0x257ab0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x257AB0u;
    {
        const bool branch_taken_0x257ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AB0u;
        // 0x257ab4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ab0) {
            ctx->pc = 0x257B58u;
            goto label_257b58;
        }
    }
    ctx->pc = 0x257AB8u;
    // 0x257ab8: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x257ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
    // 0x257abc: 0x24427340  addiu       $v0, $v0, 0x7340
    ctx->pc = 0x257abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29504));
    // 0x257ac0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x257ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x257ac4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257ac8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x257ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257acc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x257accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257ad0: 0x93202a  slt         $a0, $a0, $s3
    ctx->pc = 0x257ad0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x257ad4: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x257AD4u;
    {
        const bool branch_taken_0x257ad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x257ad4) {
            ctx->pc = 0x257AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257AD4u;
            // 0x257ad8: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257ADCu;
            goto label_257adc;
        }
    }
    ctx->pc = 0x257ADCu;
label_257adc:
    // 0x257adc: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x257ADCu;
    {
        const bool branch_taken_0x257adc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x257AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257ADCu;
        // 0x257ae0: 0x24f20004  addiu       $s2, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257adc) {
            ctx->pc = 0x257B58u;
            goto label_257b58;
        }
    }
    ctx->pc = 0x257AE4u;
    // 0x257ae4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x257ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ae8: 0x24150030  addiu       $s5, $zero, 0x30
    ctx->pc = 0x257ae8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x257aec: 0x0  nop
    ctx->pc = 0x257aecu;
    // NOP
label_257af0:
    // 0x257af0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x257af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x257af4: 0x8f83a244  lw          $v1, -0x5DBC($gp)
    ctx->pc = 0x257af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x257af8: 0x552818  mult        $a1, $v0, $s5
    ctx->pc = 0x257af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x257afc: 0x8f84a230  lw          $a0, -0x5DD0($gp)
    ctx->pc = 0x257afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x257b00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257b08: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x257b08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257b0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x257b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x257b10: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x257b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x257b14: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x257B14u;
    {
        const bool branch_taken_0x257b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257b14) {
            ctx->pc = 0x257B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257B14u;
            // 0x257b18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257B50u;
            goto label_257b50;
        }
    }
    ctx->pc = 0x257B1Cu;
    // 0x257b1c: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x257b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x257b20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x257b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x257b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b28: 0xc095e18  jal         func_257860
    ctx->pc = 0x257B28u;
    SET_GPR_U32(ctx, 31, 0x257B30u);
    ctx->pc = 0x257B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B28u;
    // 0x257b2c: 0x24a50374  addiu       $a1, $a1, 0x374 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257860u, 0x257B28u, 0x257B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B30u;
label_257b30:
    // 0x257b30: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x257B30u;
    {
        const bool branch_taken_0x257b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257b30) {
            ctx->pc = 0x257B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257B30u;
            // 0x257b34: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257B50u;
            goto label_257b50;
        }
    }
    ctx->pc = 0x257B38u;
    // 0x257b38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x257b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x257b3c: 0x50940001  beql        $a0, $s4, . + 4 + (0x1 << 2)
    ctx->pc = 0x257B3Cu;
    {
        const bool branch_taken_0x257b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x257b3c) {
            ctx->pc = 0x257B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257B3Cu;
            // 0x257b40: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257B44u;
            goto label_257b44;
        }
    }
    ctx->pc = 0x257B44u;
label_257b44:
    // 0x257b44: 0xc095e7e  jal         func_2579F8
    ctx->pc = 0x257B44u;
    SET_GPR_U32(ctx, 31, 0x257B4Cu);
    ctx->pc = 0x257B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B44u;
    // 0x257b48: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2579F8u;
    goto label_2579f8;
    ctx->pc = 0x257B4Cu;
label_257b4c:
    // 0x257b4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x257b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_257b50:
    // 0x257b50: 0x1620ffe7  bnez        $s1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x257B50u;
    {
        const bool branch_taken_0x257b50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x257B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B50u;
        // 0x257b54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b50) {
            ctx->pc = 0x257AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257af0;
        }
    }
    ctx->pc = 0x257B58u;
label_257b58:
    // 0x257b58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x257b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x257b5c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x257b5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257b60: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x257b60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257b64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x257b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257b68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x257b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257b6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x257b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257b74: 0x3e00008  jr          $ra
    ctx->pc = 0x257B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B74u;
        // 0x257b78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257B7Cu;
}
