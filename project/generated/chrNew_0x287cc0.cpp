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

// Function: chrNew
// Address: 0x287cc0 - 0x287fc0
void chrNew_0x287cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrNew_0x287cc0");
#endif

    switch (ctx->pc) {
        case 0x287d40u: goto label_287d40;
        case 0x287d68u: goto label_287d68;
        case 0x287f64u: goto label_287f64;
        case 0x287f7cu: goto label_287f7c;
        case 0x287f94u: goto label_287f94;
        default: break;
    }

    ctx->pc = 0x287cc0u;

    // 0x287cc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x287cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x287cc4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x287cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x287cc8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x287cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x287ccc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x287cccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x287cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x287cd4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x287cd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287cdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x287cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ce0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x287ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x287ce4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x287ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ce8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x287ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x287cec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x287cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x287cf0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x287cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x287cf4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x287CF4u;
    {
        const bool branch_taken_0x287cf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x287CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CF4u;
        // 0x287cf8: 0xaf94b268  sw          $s4, -0x4D98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947432), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cf4) {
            ctx->pc = 0x287D18u;
            goto label_287d18;
        }
    }
    ctx->pc = 0x287CFCu;
    // 0x287cfc: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x287cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x287d00: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x287d00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x287d04: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x287d04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x287d08: 0x26a250e0  addiu       $v0, $s5, 0x50E0
    ctx->pc = 0x287d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20704));
    // 0x287d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x287d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287d10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x287D10u;
    {
        const bool branch_taken_0x287d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D10u;
        // 0x287d14: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d10) {
            ctx->pc = 0x287D30u;
            goto label_287d30;
        }
    }
    ctx->pc = 0x287D18u;
label_287d18:
    // 0x287d18: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x287d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x287d1c: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x287d1cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x287d20: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x287d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x287d24: 0x26a250e0  addiu       $v0, $s5, 0x50E0
    ctx->pc = 0x287d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20704));
    // 0x287d28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x287d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287d2c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x287d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_287d30:
    // 0x287d30: 0x5010005  bgez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287D30u;
    {
        const bool branch_taken_0x287d30 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x287D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D30u;
        // 0x287d34: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d30) {
            ctx->pc = 0x287D48u;
            goto label_287d48;
        }
    }
    ctx->pc = 0x287D38u;
    // 0x287d38: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x287D38u;
    SET_GPR_U32(ctx, 31, 0x287D40u);
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x287D38u, 0x287D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D40u;
label_287d40:
    // 0x287d40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x287D40u;
    {
        const bool branch_taken_0x287d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D40u;
        // 0x287d44: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d40) {
            ctx->pc = 0x287D6Cu;
            goto label_287d6c;
        }
    }
    ctx->pc = 0x287D48u;
label_287d48:
    // 0x287d48: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x287d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x287d4c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x287d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x287d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x287d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287d54: 0xc44f0018  lwc1        $f15, 0x18($v0)
    ctx->pc = 0x287d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x287d58: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x287d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x287d5c: 0xc44d0010  lwc1        $f13, 0x10($v0)
    ctx->pc = 0x287d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x287d60: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x287D60u;
    SET_GPR_U32(ctx, 31, 0x287D68u);
    ctx->pc = 0x287D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D60u;
    // 0x287d64: 0xc44e0014  lwc1        $f14, 0x14($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x287D60u, 0x287D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D68u;
label_287d68:
    // 0x287d68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x287d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287d6c:
    // 0x287d6c: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x287d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x287d70: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x287d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x287d74: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x287d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x287d78: 0x8f85b238  lw          $a1, -0x4DC8($gp)
    ctx->pc = 0x287d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x287d7c: 0x24020121  addiu       $v0, $zero, 0x121
    ctx->pc = 0x287d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 289));
    // 0x287d80: 0x94c40124  lhu         $a0, 0x124($a2)
    ctx->pc = 0x287d80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x287d84: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x287d84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x287d88: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x287d88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x287d8c: 0x2507c4a8  addiu       $a3, $t0, -0x3B58
    ctx->pc = 0x287d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952104));
    // 0x287d90: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x287d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x287d94: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x287d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x287d98: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x287d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287d9c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x287d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x287da0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x287da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x287da4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x287da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x287da8: 0xa4c40124  sh          $a0, 0x124($a2)
    ctx->pc = 0x287da8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 292), (uint16_t)GPR_U32(ctx, 4));
    // 0x287dac: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x287dacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x287db0: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x287db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x287db4: 0xae720160  sw          $s2, 0x160($s3)
    ctx->pc = 0x287db4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 18));
    // 0x287db8: 0xae530bcc  sw          $s3, 0xBCC($s2)
    ctx->pc = 0x287db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3020), GPR_U32(ctx, 19));
    // 0x287dbc: 0xa6540004  sh          $s4, 0x4($s2)
    ctx->pc = 0x287dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 20));
    // 0x287dc0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x287DC0u;
    {
        const bool branch_taken_0x287dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x287DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DC0u;
        // 0x287dc4: 0xa6510006  sh          $s1, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287dc0) {
            ctx->pc = 0x287DF4u;
            goto label_287df4;
        }
    }
    ctx->pc = 0x287DC8u;
    // 0x287dc8: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x287dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x287dcc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x287dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x287dd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x287DD0u;
    {
        const bool branch_taken_0x287dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DD0u;
        // 0x287dd4: 0x2622ffd8  addiu       $v0, $s1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287dd0) {
            ctx->pc = 0x287DF8u;
            goto label_287df8;
        }
    }
    ctx->pc = 0x287DD8u;
    // 0x287dd8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x287dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x287ddc: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x287DDCu;
    {
        const bool branch_taken_0x287ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x287DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DDCu;
        // 0x287de0: 0x2a22004f  slti        $v0, $s1, 0x4F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)79) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ddc) {
            ctx->pc = 0x287E40u;
            goto label_287e40;
        }
    }
    ctx->pc = 0x287DE4u;
    // 0x287de4: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x287de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x287de8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x287de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x287dec: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x287DECu;
    {
        const bool branch_taken_0x287dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x287DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DECu;
        // 0x287df0: 0x2a22004f  slti        $v0, $s1, 0x4F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)79) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287dec) {
            ctx->pc = 0x287E40u;
            goto label_287e40;
        }
    }
    ctx->pc = 0x287DF4u;
label_287df4:
    // 0x287df4: 0x2622ffd8  addiu       $v0, $s1, -0x28
    ctx->pc = 0x287df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967256));
label_287df8:
    // 0x287df8: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x287df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x287dfc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x287DFCu;
    {
        const bool branch_taken_0x287dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287dfc) {
            ctx->pc = 0x287E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287DFCu;
            // 0x287e00: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287E24u;
            goto label_287e24;
        }
    }
    ctx->pc = 0x287E04u;
    // 0x287e04: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x287e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x287e08: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287E08u;
    {
        const bool branch_taken_0x287e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x287E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E08u;
        // 0x287e0c: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e08) {
            ctx->pc = 0x287E20u;
            goto label_287e20;
        }
    }
    ctx->pc = 0x287E10u;
    // 0x287e10: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287E10u;
    {
        const bool branch_taken_0x287e10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x287E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E10u;
        // 0x287e14: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e10) {
            ctx->pc = 0x287E20u;
            goto label_287e20;
        }
    }
    ctx->pc = 0x287E18u;
    // 0x287e18: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x287E18u;
    {
        const bool branch_taken_0x287e18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x287E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E18u;
        // 0x287e1c: 0x2a22004f  slti        $v0, $s1, 0x4F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)79) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e18) {
            ctx->pc = 0x287E40u;
            goto label_287e40;
        }
    }
    ctx->pc = 0x287E20u;
label_287e20:
    // 0x287e20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x287e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_287e24:
    // 0x287e24: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x287e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x287e28: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x287e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x287e2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287E2Cu;
    {
        const bool branch_taken_0x287e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E2Cu;
        // 0x287e30: 0x2a22004f  slti        $v0, $s1, 0x4F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)79) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e2c) {
            ctx->pc = 0x287E40u;
            goto label_287e40;
        }
    }
    ctx->pc = 0x287E34u;
    // 0x287e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287e38: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x287e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x287e3c: 0x2a22004f  slti        $v0, $s1, 0x4F
    ctx->pc = 0x287e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)79) ? 1 : 0);
label_287e40:
    // 0x287e40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287E40u;
    {
        const bool branch_taken_0x287e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E40u;
        // 0x287e44: 0x2504c4a8  addiu       $a0, $t0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e40) {
            ctx->pc = 0x287E50u;
            goto label_287e50;
        }
    }
    ctx->pc = 0x287E48u;
    // 0x287e48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287e4c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x287e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_287e50:
    // 0x287e50: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x287e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x287e54: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x287e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x287e58: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x287E58u;
    {
        const bool branch_taken_0x287e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x287E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E58u;
        // 0x287e5c: 0x2622ffbb  addiu       $v0, $s1, -0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e58) {
            ctx->pc = 0x287E70u;
            goto label_287e70;
        }
    }
    ctx->pc = 0x287E60u;
    // 0x287e60: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x287e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x287e64: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x287e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x287e68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287E68u;
    {
        const bool branch_taken_0x287e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E68u;
        // 0x287e6c: 0x2622ffbb  addiu       $v0, $s1, -0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e68) {
            ctx->pc = 0x287E80u;
            goto label_287e80;
        }
    }
    ctx->pc = 0x287E70u;
label_287e70:
    // 0x287e70: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x287e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x287e74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x287E74u;
    {
        const bool branch_taken_0x287e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E74u;
        // 0x287e78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e74) {
            ctx->pc = 0x287E80u;
            goto label_287e80;
        }
    }
    ctx->pc = 0x287E7Cu;
    // 0x287e7c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x287e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_287e80:
    // 0x287e80: 0x2503c4a8  addiu       $v1, $t0, -0x3B58
    ctx->pc = 0x287e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952104));
    // 0x287e84: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x287e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x287e88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x287e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x287e8c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x287E8Cu;
    {
        const bool branch_taken_0x287e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E8Cu;
        // 0x287e90: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e8c) {
            ctx->pc = 0x287EE4u;
            goto label_287ee4;
        }
    }
    ctx->pc = 0x287E94u;
    // 0x287e94: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x287e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x287e98: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x287E98u;
    {
        const bool branch_taken_0x287e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x287E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E98u;
        // 0x287e9c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e98) {
            ctx->pc = 0x287EBCu;
            goto label_287ebc;
        }
    }
    ctx->pc = 0x287EA0u;
    // 0x287ea0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287EA0u;
    {
        const bool branch_taken_0x287ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x287EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EA0u;
        // 0x287ea4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ea0) {
            ctx->pc = 0x287EC0u;
            goto label_287ec0;
        }
    }
    ctx->pc = 0x287EA8u;
    // 0x287ea8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x287ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x287eac: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x287eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x287eb0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x287eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x287eb4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x287EB4u;
    {
        const bool branch_taken_0x287eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EB4u;
        // 0x287eb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287eb4) {
            ctx->pc = 0x287EC0u;
            goto label_287ec0;
        }
    }
    ctx->pc = 0x287EBCu;
label_287ebc:
    // 0x287ebc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x287ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_287ec0:
    // 0x287ec0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x287ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x287ec4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x287ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x287ec8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x287ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x287ecc: 0x2463c378  addiu       $v1, $v1, -0x3C88
    ctx->pc = 0x287eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951800));
    // 0x287ed0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x287ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x287ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x287ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287ed8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x287ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x287edc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x287EDCu;
    {
        const bool branch_taken_0x287edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EDCu;
        // 0x287ee0: 0xae440014  sw          $a0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287edc) {
            ctx->pc = 0x287F18u;
            goto label_287f18;
        }
    }
    ctx->pc = 0x287EE4u;
label_287ee4:
    // 0x287ee4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x287ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x287ee8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x287ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x287eec: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x287eecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x287ef0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x287ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x287ef4: 0xae450018  sw          $a1, 0x18($s2)
    ctx->pc = 0x287ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 5));
    // 0x287ef8: 0x2484c408  addiu       $a0, $a0, -0x3BF8
    ctx->pc = 0x287ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951944));
    // 0x287efc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287EFCu;
    {
        const bool branch_taken_0x287efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287efc) {
            ctx->pc = 0x287F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287EFCu;
            // 0x287f00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x287F04u;
            goto label_287f04;
        }
    }
    ctx->pc = 0x287F04u;
label_287f04:
    // 0x287f04: 0x1810  mfhi        $v1
    ctx->pc = 0x287f04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287f08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x287f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x287f0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x287f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x287f10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x287f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287f14: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x287f14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_287f18:
    // 0x287f18: 0x2411002c  addiu       $s1, $zero, 0x2C
    ctx->pc = 0x287f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x287f1c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x287f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x287f20: 0x2918818  mult        $s1, $s4, $s1
    ctx->pc = 0x287f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x287f24: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x287f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x287f28: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x287f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x287f2c: 0x26b050e0  addiu       $s0, $s5, 0x50E0
    ctx->pc = 0x287f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20704));
    // 0x287f30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x287f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x287f34: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x287f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x287f38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x287f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x287f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x287f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f40: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x287f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x287f44: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x287f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287f48: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x287f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x287f4c: 0x240600d8  addiu       $a2, $zero, 0xD8
    ctx->pc = 0x287f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x287f50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x287f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x287f54: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x287f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x287f58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x287f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287f5c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x287F5Cu;
    SET_GPR_U32(ctx, 31, 0x287F64u);
    ctx->pc = 0x287F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F5Cu;
    // 0x287f60: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x287F5Cu, 0x287F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F64u;
label_287f64:
    // 0x287f64: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x287f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
    // 0x287f68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f6c: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x287f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
    // 0x287f70: 0xae40014c  sw          $zero, 0x14C($s2)
    ctx->pc = 0x287f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 0));
    // 0x287f74: 0xc0a1ff0  jal         func_287FC0
    ctx->pc = 0x287F74u;
    SET_GPR_U32(ctx, 31, 0x287F7Cu);
    ctx->pc = 0x287F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F74u;
    // 0x287f78: 0xae4001e4  sw          $zero, 0x1E4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287FC0u, 0x287F74u, 0x287F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F7Cu;
label_287f7c:
    // 0x287f7c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x287f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x287f80: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x287f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f84: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x287F84u;
    {
        const bool branch_taken_0x287f84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F84u;
        // 0x287f88: 0xe6400b18  swc1        $f0, 0xB18($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2840), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f84) {
            ctx->pc = 0x287F94u;
            goto label_287f94;
        }
    }
    ctx->pc = 0x287F8Cu;
    // 0x287f8c: 0xc0a1694  jal         func_285A50
    ctx->pc = 0x287F8Cu;
    SET_GPR_U32(ctx, 31, 0x287F94u);
    ctx->pc = 0x287F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F8Cu;
    // 0x287f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285A50u, 0x287F8Cu, 0x287F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F94u;
label_287f94:
    // 0x287f94: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x287f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x287f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287f9c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x287f9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287fa0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x287fa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287fa4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x287fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287fa8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x287fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287fac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x287facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287fb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x287fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x287FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FB8u;
        // 0x287fbc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287FC0u;
}
