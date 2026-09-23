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

// Function: _b2d
// Address: 0x2eca90 - 0x2ecc0c
void _b2d_0x2eca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_b2d_0x2eca90");
#endif

    switch (ctx->pc) {
        case 0x2ecad0u: goto label_2ecad0;
        default: break;
    }

    ctx->pc = 0x2eca90u;

    // 0x2eca90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2eca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2eca94: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2eca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2eca98: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2eca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2eca9c: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x2eca9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2ecaa0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ecaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ecaa4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ecaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ecaa8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ecaa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecaac: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ecaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ecab0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ecab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ecab4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2ecab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ecab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ecab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ecabc: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x2ecabcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ecac0: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x2ecac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x2ecac4: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x2ecac4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ecac8: 0xc0bb076  jal         func_2EC1D8
    ctx->pc = 0x2ECAC8u;
    SET_GPR_U32(ctx, 31, 0x2ECAD0u);
    ctx->pc = 0x2ECACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAC8u;
    // 0x2ecacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC1D8u, 0x2ECAC8u, 0x2ECAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAD0u;
label_2ecad0:
    // 0x2ecad0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ecad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecad4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ecad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ecad8: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x2ecad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2ecadc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ecadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ecae0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ECAE0u;
    {
        const bool branch_taken_0x2ecae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAE0u;
        // 0x2ecae4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecae0) {
            ctx->pc = 0x2ECB4Cu;
            goto label_2ecb4c;
        }
    }
    ctx->pc = 0x2ECAE8u;
    // 0x2ecae8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2ecae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ecaec: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x2ecaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x2ecaf0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ecaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ecaf4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ecaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ecaf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ecaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ecafc: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x2ecafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ecb00: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x2ecb00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2ecb04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ecb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ecb08: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x2ecb08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2ecb0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ecb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecb10: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2ecb10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2ecb14: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECB14u;
    {
        const bool branch_taken_0x2ecb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB14u;
        // 0x2ecb18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb14) {
            ctx->pc = 0x2ECB20u;
            goto label_2ecb20;
        }
    }
    ctx->pc = 0x2ECB1Cu;
    // 0x2ecb1c: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x2ecb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_2ecb20:
    // 0x2ecb20: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2ecb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ecb24: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x2ecb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x2ecb28: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ecb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ecb2c: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x2ecb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x2ecb30: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x2ecb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ecb34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ecb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ecb38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ecb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ecb3c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2ecb3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ecb40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ecb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ecb44: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2ECB44u;
    {
        const bool branch_taken_0x2ecb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB44u;
        // 0x2ecb48: 0x2248824  and         $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb44) {
            ctx->pc = 0x2ECBC4u;
            goto label_2ecbc4;
        }
    }
    ctx->pc = 0x2ECB4Cu;
label_2ecb4c:
    // 0x2ecb4c: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x2ecb4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2ecb50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECB50u;
    {
        const bool branch_taken_0x2ecb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB50u;
        // 0x2ecb54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb50) {
            ctx->pc = 0x2ECB60u;
            goto label_2ecb60;
        }
    }
    ctx->pc = 0x2ECB58u;
    // 0x2ecb58: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x2ecb58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x2ecb5c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2ecb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ecb60:
    // 0x2ecb60: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x2ecb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x2ecb64: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ECB64u;
    {
        const bool branch_taken_0x2ecb64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB64u;
        // 0x2ecb68: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb64) {
            ctx->pc = 0x2ECBD0u;
            goto label_2ecbd0;
        }
    }
    ctx->pc = 0x2ECB6Cu;
    // 0x2ecb6c: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x2ecb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x2ecb70: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x2ecb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ecb74: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x2ecb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x2ecb78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ecb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ecb7c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2ecb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2ecb80: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ecb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ecb84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ecb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ecb88: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x2ecb88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x2ecb8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ecb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ecb90: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x2ecb90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2ecb94: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2ecb94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2ecb98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECB98u;
    {
        const bool branch_taken_0x2ecb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB98u;
        // 0x2ecb9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb98) {
            ctx->pc = 0x2ECBA4u;
            goto label_2ecba4;
        }
    }
    ctx->pc = 0x2ECBA0u;
    // 0x2ecba0: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x2ecba0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_2ecba4:
    // 0x2ecba4: 0x61023  negu        $v0, $a2
    ctx->pc = 0x2ecba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2ecba8: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x2ecba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x2ecbac: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x2ecbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ecbb0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ecbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ecbb4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2ecbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ecbb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ecbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ecbbc: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x2ecbbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x2ecbc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ecbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2ecbc4:
    // 0x2ecbc4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ecbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ecbc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2ECBC8u;
    {
        const bool branch_taken_0x2ecbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBC8u;
        // 0x2ecbcc: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbc8) {
            ctx->pc = 0x2ECBE8u;
            goto label_2ecbe8;
        }
    }
    ctx->pc = 0x2ECBD0u;
label_2ecbd0:
    // 0x2ecbd0: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x2ecbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x2ecbd4: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x2ecbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x2ecbd8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2ecbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ecbdc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ecbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ecbe0: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x2ecbe0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ecbe4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2ecbe4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2ecbe8:
    // 0x2ecbe8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ecbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ecbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ecbf0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ecbf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ecbf4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ecbf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ecbf8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ecbf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ecbfc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ecbfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ecc00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ecc00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecc04: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC04u;
        // 0x2ecc08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECC0Cu;
}
