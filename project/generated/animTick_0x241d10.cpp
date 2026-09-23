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

// Function: animTick
// Address: 0x241d10 - 0x243324
void animTick_0x241d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("animTick_0x241d10");
#endif

    switch (ctx->pc) {
        case 0x241f50u: goto label_241f50;
        case 0x241f78u: goto label_241f78;
        case 0x24202cu: goto label_24202c;
        case 0x242050u: goto label_242050;
        case 0x24206cu: goto label_24206c;
        case 0x2420b4u: goto label_2420b4;
        case 0x2421c0u: goto label_2421c0;
        case 0x242230u: goto label_242230;
        case 0x2422c8u: goto label_2422c8;
        case 0x242314u: goto label_242314;
        case 0x242394u: goto label_242394;
        case 0x242444u: goto label_242444;
        case 0x242490u: goto label_242490;
        case 0x242540u: goto label_242540;
        case 0x2425b0u: goto label_2425b0;
        case 0x2425fcu: goto label_2425fc;
        case 0x2426d4u: goto label_2426d4;
        case 0x242720u: goto label_242720;
        case 0x242744u: goto label_242744;
        case 0x242760u: goto label_242760;
        case 0x242778u: goto label_242778;
        case 0x242808u: goto label_242808;
        case 0x242828u: goto label_242828;
        case 0x242860u: goto label_242860;
        case 0x2428d8u: goto label_2428d8;
        case 0x242964u: goto label_242964;
        case 0x24299cu: goto label_24299c;
        case 0x2429dcu: goto label_2429dc;
        case 0x242a10u: goto label_242a10;
        case 0x242a50u: goto label_242a50;
        case 0x242a9cu: goto label_242a9c;
        case 0x242ad4u: goto label_242ad4;
        case 0x242b14u: goto label_242b14;
        case 0x242ba8u: goto label_242ba8;
        case 0x242e44u: goto label_242e44;
        case 0x242eccu: goto label_242ecc;
        case 0x243118u: goto label_243118;
        case 0x243128u: goto label_243128;
        case 0x243158u: goto label_243158;
        case 0x2431bcu: goto label_2431bc;
        case 0x243268u: goto label_243268;
        default: break;
    }

    ctx->pc = 0x241d10u;

    // 0x241d10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x241d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x241d14: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x241d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x241d18: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x241d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x241d1c: 0x3c0b01fc  lui         $t3, 0x1FC
    ctx->pc = 0x241d1cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)508 << 16));
    // 0x241d20: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x241d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x241d24: 0x25631238  addiu       $v1, $t3, 0x1238
    ctx->pc = 0x241d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4664));
    // 0x241d28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x241d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x241d2c: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x241d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x241d30: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x241d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x241d34: 0x24a51258  addiu       $a1, $a1, 0x1258
    ctx->pc = 0x241d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
    // 0x241d38: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x241d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x241d3c: 0x3c170035  lui         $s7, 0x35
    ctx->pc = 0x241d3cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
    // 0x241d40: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x241d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x241d44: 0x26e93750  addiu       $t1, $s7, 0x3750
    ctx->pc = 0x241d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 14160));
    // 0x241d48: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x241d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x241d4c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x241d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x241d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x241d54: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x241d54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x241d58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x241d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x241d5c: 0x26c63710  addiu       $a2, $s6, 0x3710
    ctx->pc = 0x241d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x241d60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241d64: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x241d64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d68: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x241d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x241d6c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x241d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x241d70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241d78: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x241d78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241d7c: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x241d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x241d80: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x241d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241d84: 0x84540004  lh          $s4, 0x4($v0)
    ctx->pc = 0x241d84u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x241d88: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x241d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
    // 0x241d8c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x241d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x241d90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241d94: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x241d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x241d98: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x241d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x241d9c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x241d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241da0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x241da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x241da4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241da8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x241da8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x241dac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x241dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241db0: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x241db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x241db4: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x241db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241db8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x241db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241dbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x241dbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x241dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241DC0u;
    {
        const bool branch_taken_0x241dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DC0u;
        // 0x241dc4: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241dc0) {
            ctx->pc = 0x241DD8u;
            goto label_241dd8;
        }
    }
    ctx->pc = 0x241DC8u;
    // 0x241dc8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x241dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241dcc: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x241dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241dd0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x241dd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x241dd4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x241dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_241dd8:
    // 0x241dd8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x241dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x241ddc: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x241DDCu;
    {
        const bool branch_taken_0x241ddc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x241DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DDCu;
        // 0x241de0: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ddc) {
            ctx->pc = 0x241E14u;
            goto label_241e14;
        }
    }
    ctx->pc = 0x241DE4u;
    // 0x241de4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x241de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x241de8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x241de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x241dec: 0x248236f0  addiu       $v0, $a0, 0x36F0
    ctx->pc = 0x241decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 14064));
    // 0x241df0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x241df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241df4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241df8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x241df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241dfc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241DFCu;
    {
        const bool branch_taken_0x241dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DFCu;
        // 0x241e00: 0x691021  addu        $v0, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241dfc) {
            ctx->pc = 0x241E10u;
            goto label_241e10;
        }
    }
    ctx->pc = 0x241E04u;
    // 0x241e04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e08: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x241e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241e0c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x241e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_241e10:
    // 0x241e10: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_241e14:
    // 0x241e14: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x241e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x241e18: 0x24423ed8  addiu       $v0, $v0, 0x3ED8
    ctx->pc = 0x241e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16088));
    // 0x241e1c: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x241E1Cu;
    {
        const bool branch_taken_0x241e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x241E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E1Cu;
        // 0x241e20: 0xae200158  sw          $zero, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e1c) {
            ctx->pc = 0x241E58u;
            goto label_241e58;
        }
    }
    ctx->pc = 0x241E24u;
    // 0x241e24: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x241e28: 0x24423ec8  addiu       $v0, $v0, 0x3EC8
    ctx->pc = 0x241e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16072));
    // 0x241e2c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x241E2Cu;
    {
        const bool branch_taken_0x241e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x241E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E2Cu;
        // 0x241e30: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e2c) {
            ctx->pc = 0x241E58u;
            goto label_241e58;
        }
    }
    ctx->pc = 0x241E34u;
    // 0x241e34: 0x24424cf8  addiu       $v0, $v0, 0x4CF8
    ctx->pc = 0x241e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19704));
    // 0x241e38: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241E38u;
    {
        const bool branch_taken_0x241e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x241E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E38u;
        // 0x241e3c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e38) {
            ctx->pc = 0x241E58u;
            goto label_241e58;
        }
    }
    ctx->pc = 0x241E40u;
    // 0x241e40: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x241e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x241e44: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241E44u;
    {
        const bool branch_taken_0x241e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x241E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E44u;
        // 0x241e48: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e44) {
            ctx->pc = 0x241E58u;
            goto label_241e58;
        }
    }
    ctx->pc = 0x241E4Cu;
    // 0x241e4c: 0x24424e18  addiu       $v0, $v0, 0x4E18
    ctx->pc = 0x241e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19992));
    // 0x241e50: 0x14820528  bne         $a0, $v0, . + 4 + (0x528 << 2)
    ctx->pc = 0x241E50u;
    {
        const bool branch_taken_0x241e50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x241E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E50u;
        // 0x241e54: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e50) {
            ctx->pc = 0x2432F4u;
            goto label_2432f4;
        }
    }
    ctx->pc = 0x241E58u;
label_241e58:
    // 0x241e58: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x241e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x241e5c: 0x279eb738  addiu       $fp, $gp, -0x48C8
    ctx->pc = 0x241e5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x241e60: 0xde1021  addu        $v0, $a2, $fp
    ctx->pc = 0x241e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x241e64: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x241e64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e68: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x241e68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x241e6c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x241E6Cu;
    {
        const bool branch_taken_0x241e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E6Cu;
        // 0x241e70: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e6c) {
            ctx->pc = 0x241E8Cu;
            goto label_241e8c;
        }
    }
    ctx->pc = 0x241E74u;
    // 0x241e74: 0x104001b4  beqz        $v0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x241E74u;
    {
        const bool branch_taken_0x241e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E74u;
        // 0x241e78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e74) {
            ctx->pc = 0x242548u;
            goto label_242548;
        }
    }
    ctx->pc = 0x241E7Cu;
    // 0x241e7c: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x241E7Cu;
    {
        const bool branch_taken_0x241e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x241E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E7Cu;
        // 0x241e80: 0x26e33750  addiu       $v1, $s7, 0x3750 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 14160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e7c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241E84u;
    // 0x241e84: 0x1000032b  b           . + 4 + (0x32B << 2)
    ctx->pc = 0x241E84u;
    {
        const bool branch_taken_0x241e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E84u;
        // 0x241e88: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e84) {
            ctx->pc = 0x242B34u;
            goto label_242b34;
        }
    }
    ctx->pc = 0x241E8Cu;
label_241e8c:
    // 0x241e8c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x241e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x241e90: 0x54820328  bnel        $a0, $v0, . + 4 + (0x328 << 2)
    ctx->pc = 0x241E90u;
    {
        const bool branch_taken_0x241e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x241e90) {
            ctx->pc = 0x241E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241E90u;
            // 0x241e94: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242B34u;
            goto label_242b34;
        }
    }
    ctx->pc = 0x241E98u;
    // 0x241e98: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x241e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x241e9c: 0x26c23710  addiu       $v0, $s6, 0x3710
    ctx->pc = 0x241e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x241ea0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x241ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x241ea4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x241ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ea8: 0x10800321  beqz        $a0, . + 4 + (0x321 << 2)
    ctx->pc = 0x241EA8u;
    {
        const bool branch_taken_0x241ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EA8u;
        // 0x241eac: 0x25621238  addiu       $v0, $t3, 0x1238 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ea8) {
            ctx->pc = 0x242B30u;
            goto label_242b30;
        }
    }
    ctx->pc = 0x241EB0u;
    // 0x241eb0: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x241eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x241eb4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x241eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x241eb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x241eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ebc: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x241ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
    // 0x241ec0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x241ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x241ec4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x241ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x241ec8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x241ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x241ecc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241ECCu;
    {
        const bool branch_taken_0x241ecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241ECCu;
        // 0x241ed0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ecc) {
            ctx->pc = 0x241EE0u;
            goto label_241ee0;
        }
    }
    ctx->pc = 0x241ED4u;
    // 0x241ed4: 0xc78c8208  lwc1        $f12, -0x7DF8($gp)
    ctx->pc = 0x241ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x241ed8: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x241ED8u;
    {
        const bool branch_taken_0x241ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241ed8) {
            ctx->pc = 0x242538u;
            goto label_242538;
        }
    }
    ctx->pc = 0x241EE0u;
label_241ee0:
    // 0x241ee0: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x241EE0u;
    {
        const bool branch_taken_0x241ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EE0u;
        // 0x241ee4: 0xc78c820c  lwc1        $f12, -0x7DF4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ee0) {
            ctx->pc = 0x242538u;
            goto label_242538;
        }
    }
    ctx->pc = 0x241EE8u;
label_241ee8:
    // 0x241ee8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x241ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x241eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241ef0: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x241ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241ef4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ef8: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x241ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x241efc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x241efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241f00: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x241f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x241f04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x241f04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x241f08: 0xc4640038  lwc1        $f4, 0x38($v1)
    ctx->pc = 0x241f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x241f0c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x241f0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x241f10: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x241f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241f14: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x241f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x241f18: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x241f18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x241f1c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x241f1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x241f20: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x241f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x241f24: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x241f24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x241f28: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x241f28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x241f2c: 0x0  nop
    ctx->pc = 0x241f2cu;
    // NOP
    // 0x241f30: 0x0  nop
    ctx->pc = 0x241f30u;
    // NOP
    // 0x241f34: 0x460c0504  c1          0xC0504
    ctx->pc = 0x241f34u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[12]);
    // 0x241f38: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x241f38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241f3c: 0x0  nop
    ctx->pc = 0x241f3cu;
    // NOP
    // 0x241f40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x241F40u;
    {
        const bool branch_taken_0x241f40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x241F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F40u;
        // 0x241f44: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f40) {
            ctx->pc = 0x241F58u;
            goto label_241f58;
        }
    }
    ctx->pc = 0x241F48u;
    // 0x241f48: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x241F48u;
    SET_GPR_U32(ctx, 31, 0x241F50u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x241F48u, 0x241F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F50u;
label_241f50:
    // 0x241f50: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x241f50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x241f54: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x241f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_241f58:
    // 0x241f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f5c: 0x2829018  mult        $s2, $s4, $v0
    ctx->pc = 0x241f5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x241f60: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x241f64: 0x24532fe0  addiu       $s3, $v0, 0x2FE0
    ctx->pc = 0x241f64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12256));
    // 0x241f68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x241f68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f6c: 0x2538021  addu        $s0, $s2, $s3
    ctx->pc = 0x241f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x241f70: 0xc085608  jal         func_215820
    ctx->pc = 0x241F70u;
    SET_GPR_U32(ctx, 31, 0x241F78u);
    ctx->pc = 0x241F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F70u;
    // 0x241f74: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x241F70u, 0x241F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F78u;
label_241f78:
    // 0x241f78: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x241F78u;
    {
        const bool branch_taken_0x241f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F78u;
        // 0x241f7c: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f78) {
            ctx->pc = 0x241FF8u;
            goto label_241ff8;
        }
    }
    ctx->pc = 0x241F80u;
    // 0x241f80: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x241f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241f84: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x241F84u;
    {
        const bool branch_taken_0x241f84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x241F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F84u;
        // 0x241f88: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f84) {
            ctx->pc = 0x241FACu;
            goto label_241fac;
        }
    }
    ctx->pc = 0x241F8Cu;
    // 0x241f8c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x241f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x241f90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x241f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x241f94: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x241f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241f98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x241f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241f9c: 0x0  nop
    ctx->pc = 0x241f9cu;
    // NOP
    // 0x241fa0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x241FA0u;
    {
        const bool branch_taken_0x241fa0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x241FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FA0u;
        // 0x241fa4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fa0) {
            ctx->pc = 0x241FFCu;
            goto label_241ffc;
        }
    }
    ctx->pc = 0x241FA8u;
    // 0x241fa8: 0x2402020d  addiu       $v0, $zero, 0x20D
    ctx->pc = 0x241fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
label_241fac:
    // 0x241fac: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x241FACu;
    {
        const bool branch_taken_0x241fac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x241FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FACu;
        // 0x241fb0: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fac) {
            ctx->pc = 0x241FD4u;
            goto label_241fd4;
        }
    }
    ctx->pc = 0x241FB4u;
    // 0x241fb4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x241fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x241fb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x241fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x241fbc: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x241fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241fc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x241fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241fc4: 0x0  nop
    ctx->pc = 0x241fc4u;
    // NOP
    // 0x241fc8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x241FC8u;
    {
        const bool branch_taken_0x241fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x241FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FC8u;
        // 0x241fcc: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fc8) {
            ctx->pc = 0x241FFCu;
            goto label_241ffc;
        }
    }
    ctx->pc = 0x241FD0u;
    // 0x241fd0: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x241fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_241fd4:
    // 0x241fd4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x241fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x241fd8: 0x14a30037  bne         $a1, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x241FD8u;
    {
        const bool branch_taken_0x241fd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x241FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FD8u;
        // 0x241fdc: 0x8f87a004  lw          $a3, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fd8) {
            ctx->pc = 0x2420B8u;
            goto label_2420b8;
        }
    }
    ctx->pc = 0x241FE0u;
    // 0x241fe0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x241fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x241fe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241fe8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x241fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241fec: 0x0  nop
    ctx->pc = 0x241fecu;
    // NOP
    // 0x241ff0: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x241FF0u;
    {
        const bool branch_taken_0x241ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FF0u;
        // 0x241ff4: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ff0) {
            ctx->pc = 0x2420BCu;
            goto label_2420bc;
        }
    }
    ctx->pc = 0x241FF8u;
label_241ff8:
    // 0x241ff8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x241ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_241ffc:
    // 0x241ffc: 0x26a42fe0  addiu       $a0, $s5, 0x2FE0
    ctx->pc = 0x241ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12256));
    // 0x242000: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x242000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x242004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x242008: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x242008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24200c: 0x24a2fdf4  addiu       $v0, $a1, -0x20C
    ctx->pc = 0x24200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966772));
    // 0x242010: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x242010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x242014: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x242014u;
    {
        const bool branch_taken_0x242014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242014u;
        // 0x242018: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242014) {
            ctx->pc = 0x242034u;
            goto label_242034;
        }
    }
    ctx->pc = 0x24201Cu;
    // 0x24201c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24201cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242024: 0xc08535a  jal         func_214D68
    ctx->pc = 0x242024u;
    SET_GPR_U32(ctx, 31, 0x24202Cu);
    ctx->pc = 0x242028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242024u;
    // 0x242028: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x242024u, 0x24202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24202Cu;
label_24202c:
    // 0x24202c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24202Cu;
    {
        const bool branch_taken_0x24202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24202Cu;
        // 0x242030: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24202c) {
            ctx->pc = 0x242070u;
            goto label_242070;
        }
    }
    ctx->pc = 0x242034u;
label_242034:
    // 0x242034: 0x16820008  bne         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x242034u;
    {
        const bool branch_taken_0x242034 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x242034) {
            ctx->pc = 0x242058u;
            goto label_242058;
        }
    }
    ctx->pc = 0x24203Cu;
    // 0x24203c: 0x8c850244  lw          $a1, 0x244($a0)
    ctx->pc = 0x24203cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x242040: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x242040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242044: 0xc78d8210  lwc1        $f13, -0x7DF0($gp)
    ctx->pc = 0x242044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x242048: 0xc08535a  jal         func_214D68
    ctx->pc = 0x242048u;
    SET_GPR_U32(ctx, 31, 0x242050u);
    ctx->pc = 0x24204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242048u;
    // 0x24204c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x242048u, 0x242050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242050u;
label_242050:
    // 0x242050: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x242050u;
    {
        const bool branch_taken_0x242050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242050u;
        // 0x242054: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242050) {
            ctx->pc = 0x242070u;
            goto label_242070;
        }
    }
    ctx->pc = 0x242058u;
label_242058:
    // 0x242058: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x242058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24205c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24205cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242060: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x242060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x242064: 0xc08535a  jal         func_214D68
    ctx->pc = 0x242064u;
    SET_GPR_U32(ctx, 31, 0x24206Cu);
    ctx->pc = 0x242068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242064u;
    // 0x242068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x242064u, 0x24206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24206Cu;
label_24206c:
    // 0x24206c: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x24206cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_242070:
    // 0x242070: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x242070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x242074: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x242074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x242078: 0x26e63750  addiu       $a2, $s7, 0x3750
    ctx->pc = 0x242078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 14160));
    // 0x24207c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x242080: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x242080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x242084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24208c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x24208cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x242090: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x242090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x242094: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242098: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x242098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24209c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x24209cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2420a0: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x2420a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2420a4: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2420a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2420a8: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2420a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2420ac: 0xc08d96e  jal         func_2365B8
    ctx->pc = 0x2420ACu;
    SET_GPR_U32(ctx, 31, 0x2420B4u);
    ctx->pc = 0x2420B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420ACu;
    // 0x2420b0: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2365B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2365B8u, 0x2420ACu, 0x2420B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420B4u;
label_2420b4:
    // 0x2420b4: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x2420b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_2420b8:
    // 0x2420b8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2420b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_2420bc:
    // 0x2420bc: 0x247036f0  addiu       $s0, $v1, 0x36F0
    ctx->pc = 0x2420bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14064));
    // 0x2420c0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2420c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420c4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2420c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2420c8: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x2420c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2420cc: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x2420ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2420d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2420d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2420d4: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x2420D4u;
    {
        const bool branch_taken_0x2420d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2420d4) {
            ctx->pc = 0x2420D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2420D4u;
            // 0x2420d8: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242268u;
            goto label_242268;
        }
    }
    ctx->pc = 0x2420DCu;
    // 0x2420dc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2420dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2420e0: 0x26a82fe0  addiu       $t0, $s5, 0x2FE0
    ctx->pc = 0x2420e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 12256));
    // 0x2420e4: 0x2822818  mult        $a1, $s4, $v0
    ctx->pc = 0x2420e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2420e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2420e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2420ec: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2420ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2420f0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2420f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2420f4: 0x5483005c  bnel        $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2420F4u;
    {
        const bool branch_taken_0x2420f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2420f4) {
            ctx->pc = 0x2420F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2420F4u;
            // 0x2420f8: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242268u;
            goto label_242268;
        }
    }
    ctx->pc = 0x2420FCu;
    // 0x2420fc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2420fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x242100: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242100u;
    {
        const bool branch_taken_0x242100 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x242100) {
            ctx->pc = 0x242114u;
            goto label_242114;
        }
    }
    ctx->pc = 0x242108u;
    // 0x242108: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x242108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24210c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x24210Cu;
    {
        const bool branch_taken_0x24210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24210Cu;
        // 0x242110: 0x2404017b  addiu       $a0, $zero, 0x17B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 379));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24210c) {
            ctx->pc = 0x2421ACu;
            goto label_2421ac;
        }
    }
    ctx->pc = 0x242114u;
label_242114:
    // 0x242114: 0x16840004  bne         $s4, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242114u;
    {
        const bool branch_taken_0x242114 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x242118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242114u;
        // 0x242118: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242114) {
            ctx->pc = 0x242128u;
            goto label_242128;
        }
    }
    ctx->pc = 0x24211Cu;
    // 0x24211c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24211cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242120: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x242120u;
    {
        const bool branch_taken_0x242120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242120u;
        // 0x242124: 0x24040168  addiu       $a0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242120) {
            ctx->pc = 0x2421ACu;
            goto label_2421ac;
        }
    }
    ctx->pc = 0x242128u;
label_242128:
    // 0x242128: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x242128u;
    {
        const bool branch_taken_0x242128 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x24212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242128u;
        // 0x24212c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242128) {
            ctx->pc = 0x242138u;
            goto label_242138;
        }
    }
    ctx->pc = 0x242130u;
    // 0x242130: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242130u;
    {
        const bool branch_taken_0x242130 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x242134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242130u;
        // 0x242134: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242130) {
            ctx->pc = 0x242144u;
            goto label_242144;
        }
    }
    ctx->pc = 0x242138u;
label_242138:
    // 0x242138: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x242138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24213c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24213Cu;
    {
        const bool branch_taken_0x24213c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24213Cu;
        // 0x242140: 0x24040172  addiu       $a0, $zero, 0x172 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24213c) {
            ctx->pc = 0x2421ACu;
            goto label_2421ac;
        }
    }
    ctx->pc = 0x242144u;
label_242144:
    // 0x242144: 0x240401d9  addiu       $a0, $zero, 0x1D9
    ctx->pc = 0x242144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
    // 0x242148: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x242148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24214c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24214Cu;
    {
        const bool branch_taken_0x24214c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x242150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24214Cu;
        // 0x242150: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24214c) {
            ctx->pc = 0x242160u;
            goto label_242160;
        }
    }
    ctx->pc = 0x242154u;
    // 0x242154: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x242154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242158: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x242158u;
    {
        const bool branch_taken_0x242158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242158u;
        // 0x24215c: 0x2404016f  addiu       $a0, $zero, 0x16F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242158) {
            ctx->pc = 0x2421ACu;
            goto label_2421ac;
        }
    }
    ctx->pc = 0x242160u;
label_242160:
    // 0x242160: 0x1682000c  bne         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x242160u;
    {
        const bool branch_taken_0x242160 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x242164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242160u;
        // 0x242164: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242160) {
            ctx->pc = 0x242194u;
            goto label_242194;
        }
    }
    ctx->pc = 0x242168u;
    // 0x242168: 0x26e23750  addiu       $v0, $s7, 0x3750
    ctx->pc = 0x242168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 14160));
    // 0x24216c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x24216cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x242170: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x242170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x242174: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x242174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x242178: 0xc78e8214  lwc1        $f14, -0x7DEC($gp)
    ctx->pc = 0x242178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24217c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242180: 0x240400a5  addiu       $a0, $zero, 0xA5
    ctx->pc = 0x242180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x242184: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x242184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x242188: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x242188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x24218c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24218Cu;
    {
        const bool branch_taken_0x24218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24218Cu;
        // 0x242190: 0xc46c0030  lwc1        $f12, 0x30($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24218c) {
            ctx->pc = 0x2421B8u;
            goto label_2421b8;
        }
    }
    ctx->pc = 0x242194u;
label_242194:
    // 0x242194: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242194u;
    {
        const bool branch_taken_0x242194 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x242198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242194u;
        // 0x242198: 0x24040169  addiu       $a0, $zero, 0x169 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242194) {
            ctx->pc = 0x2421A8u;
            goto label_2421a8;
        }
    }
    ctx->pc = 0x24219Cu;
    // 0x24219c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24219cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2421a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2421A0u;
    {
        const bool branch_taken_0x2421a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2421A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421A0u;
        // 0x2421a4: 0x2404016e  addiu       $a0, $zero, 0x16E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421a0) {
            ctx->pc = 0x2421ACu;
            goto label_2421ac;
        }
    }
    ctx->pc = 0x2421A8u;
label_2421a8:
    // 0x2421a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2421a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2421ac:
    // 0x2421ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2421acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2421b0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2421b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2421b4: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x2421b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_2421b8:
    // 0x2421b8: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x2421B8u;
    SET_GPR_U32(ctx, 31, 0x2421C0u);
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x2421B8u, 0x2421C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421C0u;
label_2421c0:
    // 0x2421c0: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x2421c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2421c4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2421c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2421c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2421c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2421cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2421ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2421d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2421d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2421d4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2421d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2421d8: 0x265036f0  addiu       $s0, $s2, 0x36F0
    ctx->pc = 0x2421d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 14064));
    // 0x2421dc: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2421dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2421e0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2421e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2421e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2421e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2421e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2421e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2421ec: 0xac640240  sw          $a0, 0x240($v1)
    ctx->pc = 0x2421ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 576), GPR_U32(ctx, 4));
    // 0x2421f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2421f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2421f4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2421f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2421f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2421f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2421fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2421fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242204: 0x1285000b  beq         $s4, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x242204u;
    {
        const bool branch_taken_0x242204 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 5));
        ctx->pc = 0x242208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242204u;
        // 0x242208: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242204) {
            ctx->pc = 0x242234u;
            goto label_242234;
        }
    }
    ctx->pc = 0x24220Cu;
    // 0x24220c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x24220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242210: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x242210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x242214: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x242214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24221c: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x24221cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x242220: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242224: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242228: 0xc09c0b6  jal         func_2702D8
    ctx->pc = 0x242228u;
    SET_GPR_U32(ctx, 31, 0x242230u);
    ctx->pc = 0x24222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242228u;
    // 0x24222c: 0x8c66001c  lw          $a2, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2702D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2702D8u, 0x242228u, 0x242230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242230u;
label_242230:
    // 0x242230: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_242234:
    // 0x242234: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x242234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242238: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x242238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24223c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x24223cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x242240: 0x24843720  addiu       $a0, $a0, 0x3720
    ctx->pc = 0x242240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14112));
    // 0x242244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242248: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24224c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242250: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x242250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x242254: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x242254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24225c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x242260: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x242260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x242264: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x242264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_242268:
    // 0x242268: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x242268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x24226c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x24226cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x242270: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x242270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x242274: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x242274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x242278: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x242278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
    // 0x24227c: 0x265236f0  addiu       $s2, $s2, 0x36F0
    ctx->pc = 0x24227cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 14064));
    // 0x242280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x242284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242288: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x242288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x24228c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x24228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242294: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x242294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x242298: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x242298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24229c: 0x10c00026  beqz        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x24229Cu;
    {
        const bool branch_taken_0x24229c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24229Cu;
        // 0x2422a0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24229c) {
            ctx->pc = 0x242338u;
            goto label_242338;
        }
    }
    ctx->pc = 0x2422A4u;
    // 0x2422a4: 0x26a32fe0  addiu       $v1, $s5, 0x2FE0
    ctx->pc = 0x2422a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12256));
    // 0x2422a8: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x2422a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2422ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2422acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2422b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2422b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2422b4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2422b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2422b8: 0x54850020  bnel        $a0, $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2422B8u;
    {
        const bool branch_taken_0x2422b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2422b8) {
            ctx->pc = 0x2422BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2422B8u;
            // 0x2422bc: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24233Cu;
            goto label_24233c;
        }
    }
    ctx->pc = 0x2422C0u;
    // 0x2422c0: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x2422C0u;
    SET_GPR_U32(ctx, 31, 0x2422C8u);
    ctx->pc = 0x2422C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2422C0u;
    // 0x2422c4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2422C0u, 0x2422C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422C8u;
label_2422c8:
    // 0x2422c8: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x2422c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2422cc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2422ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2422d0: 0x24423720  addiu       $v0, $v0, 0x3720
    ctx->pc = 0x2422d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
    // 0x2422d4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2422d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2422d8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2422d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2422dc: 0x24903700  addiu       $s0, $a0, 0x3700
    ctx->pc = 0x2422dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 14080));
    // 0x2422e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2422e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2422e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2422e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2422e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2422e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2422ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2422ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2422f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2422f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2422f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2422f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2422f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2422f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2422fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2422fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242300: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242304: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x242304u;
    {
        const bool branch_taken_0x242304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242304) {
            ctx->pc = 0x242308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242304u;
            // 0x242308: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24233Cu;
            goto label_24233c;
        }
    }
    ctx->pc = 0x24230Cu;
    // 0x24230c: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x24230Cu;
    SET_GPR_U32(ctx, 31, 0x242314u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x24230Cu, 0x242314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242314u;
label_242314:
    // 0x242314: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242314u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242318: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x242318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24231c: 0x24633730  addiu       $v1, $v1, 0x3730
    ctx->pc = 0x24231cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14128));
    // 0x242320: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x242320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242324: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242328: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x242328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24232c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242330: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x242330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x242334: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x242334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_242338:
    // 0x242338: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x242338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_24233c:
    // 0x24233c: 0x26d23710  addiu       $s2, $s6, 0x3710
    ctx->pc = 0x24233cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x242340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242344: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x242344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x242348: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x242348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24234c: 0x11000020  beqz        $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x24234Cu;
    {
        const bool branch_taken_0x24234c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x242350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24234Cu;
        // 0x242350: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24234c) {
            ctx->pc = 0x2423D0u;
            goto label_2423d0;
        }
    }
    ctx->pc = 0x242354u;
    // 0x242354: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x242354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x242358: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x242358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24235c: 0x26a42fe0  addiu       $a0, $s5, 0x2FE0
    ctx->pc = 0x24235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12256));
    // 0x242360: 0x8c460060  lw          $a2, 0x60($v0)
    ctx->pc = 0x242360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x242364: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x242364u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x242368: 0x26053620  addiu       $a1, $s0, 0x3620
    ctx->pc = 0x242368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13856));
    // 0x24236c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24236cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x242370: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x242370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x242374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x242374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x242378: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x242378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24237c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24237cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x242380: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x242380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x242384: 0x50c3000d  beql        $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x242384u;
    {
        const bool branch_taken_0x242384 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x242384) {
            ctx->pc = 0x242388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242384u;
            // 0x242388: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2423BCu;
            goto label_2423bc;
        }
    }
    ctx->pc = 0x24238Cu;
    // 0x24238c: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x24238Cu;
    SET_GPR_U32(ctx, 31, 0x242394u);
    ctx->pc = 0x242390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24238Cu;
    // 0x242390: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x24238Cu, 0x242394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242394u;
label_242394:
    // 0x242394: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242398: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x242398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24239c: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x24239cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x2423a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2423a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2423a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2423a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2423a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2423a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2423ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2423acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2423b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2423b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2423b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2423b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2423b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2423b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2423bc:
    // 0x2423bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2423bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2423c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2423c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2423c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2423c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2423c8: 0x54600048  bnel        $v1, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x2423C8u;
    {
        const bool branch_taken_0x2423c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2423c8) {
            ctx->pc = 0x2423CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2423C8u;
            // 0x2423cc: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2424ECu;
            goto label_2424ec;
        }
    }
    ctx->pc = 0x2423D0u;
label_2423d0:
    // 0x2423d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2423d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2423d4: 0x26a62fe0  addiu       $a2, $s5, 0x2FE0
    ctx->pc = 0x2423d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12256));
    // 0x2423d8: 0x2822818  mult        $a1, $s4, $v0
    ctx->pc = 0x2423d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2423dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2423dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2423e0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2423e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2423e4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2423e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2423e8: 0x5464003a  bnel        $v1, $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2423E8u;
    {
        const bool branch_taken_0x2423e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2423e8) {
            ctx->pc = 0x2423ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2423E8u;
            // 0x2423ec: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2424D4u;
            goto label_2424d4;
        }
    }
    ctx->pc = 0x2423F0u;
    // 0x2423f0: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x2423f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2423f4: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x2423f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x2423f8: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x2423f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2423fc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2423fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242400: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x242400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x242404: 0x26053620  addiu       $a1, $s0, 0x3620
    ctx->pc = 0x242404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13856));
    // 0x242408: 0x24b30004  addiu       $s3, $a1, 0x4
    ctx->pc = 0x242408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x24240c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x242410: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x242410u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x242414: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x242414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x242418: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24241c: 0x1044002c  beq         $v0, $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x24241Cu;
    {
        const bool branch_taken_0x24241c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x242420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24241Cu;
        // 0x242420: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24241c) {
            ctx->pc = 0x2424D0u;
            goto label_2424d0;
        }
    }
    ctx->pc = 0x242424u;
    // 0x242424: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x242424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x242428: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24242c: 0x26d03710  addiu       $s0, $s6, 0x3710
    ctx->pc = 0x24242cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x242430: 0xc62d0034  lwc1        $f13, 0x34($s1)
    ctx->pc = 0x242430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x242434: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x242434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x242438: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x242438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x24243c: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x24243Cu;
    SET_GPR_U32(ctx, 31, 0x242444u);
    ctx->pc = 0x242440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24243Cu;
    // 0x242440: 0xc62e0038  lwc1        $f14, 0x38($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x24243Cu, 0x242444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242444u;
label_242444:
    // 0x242444: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x242444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242448: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24244c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24244cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242450: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x242450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242454: 0xac440240  sw          $a0, 0x240($v0)
    ctx->pc = 0x242454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 4));
    // 0x242458: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x242458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24245c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x24245cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242460: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x242460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x242464: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x242464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x242468: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x242468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x24246c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24246cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x242470: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x242470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x242474: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x242474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x242478: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x242478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24247c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24247cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x242480: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x242480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x242484: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x242484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x242488: 0xc09829e  jal         func_260A78
    ctx->pc = 0x242488u;
    SET_GPR_U32(ctx, 31, 0x242490u);
    ctx->pc = 0x24248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242488u;
    // 0x24248c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x242488u, 0x242490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242490u;
label_242490:
    // 0x242490: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242494: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x242494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x242498: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x242498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x24249c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x24249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2424a0: 0x24a53740  addiu       $a1, $a1, 0x3740
    ctx->pc = 0x2424a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14144));
    // 0x2424a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2424a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2424a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2424a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2424ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2424acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2424b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2424b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2424b4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2424b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2424b8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2424b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2424bc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2424bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2424c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2424c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2424c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2424c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2424c8: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x2424C8u;
    {
        const bool branch_taken_0x2424c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2424CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424C8u;
        // 0x2424cc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2424c8) {
            ctx->pc = 0x242B30u;
            goto label_242b30;
        }
    }
    ctx->pc = 0x2424D0u;
label_2424d0:
    // 0x2424d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2424d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2424d4:
    // 0x2424d4: 0x26c43710  addiu       $a0, $s6, 0x3710
    ctx->pc = 0x2424d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x2424d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2424d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2424dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2424dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2424e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2424e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2424e4: 0x10600193  beqz        $v1, . + 4 + (0x193 << 2)
    ctx->pc = 0x2424E4u;
    {
        const bool branch_taken_0x2424e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2424E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424E4u;
        // 0x2424e8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2424e4) {
            ctx->pc = 0x242B34u;
            goto label_242b34;
        }
    }
    ctx->pc = 0x2424ECu;
label_2424ec:
    // 0x2424ec: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2424ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2424f0: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x2424f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x2424f4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2424f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2424f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2424f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2424fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2424fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242500: 0x5040018c  beql        $v0, $zero, . + 4 + (0x18C << 2)
    ctx->pc = 0x242500u;
    {
        const bool branch_taken_0x242500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242500) {
            ctx->pc = 0x242504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242500u;
            // 0x242504: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242B34u;
            goto label_242b34;
        }
    }
    ctx->pc = 0x242508u;
    // 0x242508: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x242508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x24250c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x24250cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x242510: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x242510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x242514: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242514u;
    {
        const bool branch_taken_0x242514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x242518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242514u;
        // 0x242518: 0x26c23710  addiu       $v0, $s6, 0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242514) {
            ctx->pc = 0x242528u;
            goto label_242528;
        }
    }
    ctx->pc = 0x24251Cu;
    // 0x24251c: 0xc78c8218  lwc1        $f12, -0x7DE8($gp)
    ctx->pc = 0x24251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x242520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x242520u;
    {
        const bool branch_taken_0x242520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242520u;
        // 0x242524: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242520) {
            ctx->pc = 0x242530u;
            goto label_242530;
        }
    }
    ctx->pc = 0x242528u;
label_242528:
    // 0x242528: 0xc78c821c  lwc1        $f12, -0x7DE4($gp)
    ctx->pc = 0x242528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24252c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_242530:
    // 0x242530: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242534: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x242534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_242538:
    // 0x242538: 0xc0850ec  jal         func_2143B0
    ctx->pc = 0x242538u;
    SET_GPR_U32(ctx, 31, 0x242540u);
    ctx->pc = 0x2143B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143B0u, 0x242538u, 0x242540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242540u;
label_242540:
    // 0x242540: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x242540u;
    {
        const bool branch_taken_0x242540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242540u;
        // 0x242544: 0x8f87a004  lw          $a3, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242540) {
            ctx->pc = 0x242B30u;
            goto label_242b30;
        }
    }
    ctx->pc = 0x242548u;
label_242548:
    // 0x242548: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x242548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24254c: 0x3c150035  lui         $s5, 0x35
    ctx->pc = 0x24254cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)53 << 16));
    // 0x242550: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x242550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x242554: 0x26a22fe0  addiu       $v0, $s5, 0x2FE0
    ctx->pc = 0x242554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12256));
    // 0x242558: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x242558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x24255c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24255cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242560: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x242560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x242564: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x242564u;
    {
        const bool branch_taken_0x242564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x242568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242564u;
        // 0x242568: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242564) {
            ctx->pc = 0x24263Cu;
            goto label_24263c;
        }
    }
    ctx->pc = 0x24256Cu;
    // 0x24256c: 0x26d23710  addiu       $s2, $s6, 0x3710
    ctx->pc = 0x24256cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x242570: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x242570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x242574: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242578: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x242578u;
    {
        const bool branch_taken_0x242578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242578u;
        // 0x24257c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242578) {
            ctx->pc = 0x242640u;
            goto label_242640;
        }
    }
    ctx->pc = 0x242580u;
    // 0x242580: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x242580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x242584: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x242584u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x242588: 0x26103620  addiu       $s0, $s0, 0x3620
    ctx->pc = 0x242588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13856));
    // 0x24258c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24258cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x242590: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242594: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x242594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x242598: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24259c: 0xc62d0034  lwc1        $f13, 0x34($s1)
    ctx->pc = 0x24259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2425a0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2425a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2425a4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2425a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2425a8: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x2425A8u;
    SET_GPR_U32(ctx, 31, 0x2425B0u);
    ctx->pc = 0x2425ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2425A8u;
    // 0x2425ac: 0xc62e0038  lwc1        $f14, 0x38($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x2425A8u, 0x2425B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2425B0u;
label_2425b0:
    // 0x2425b0: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x2425b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2425b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2425b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2425b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2425b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2425bc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2425bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2425c0: 0xac430240  sw          $v1, 0x240($v0)
    ctx->pc = 0x2425c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 3));
    // 0x2425c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2425c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2425c8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2425c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2425cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2425ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2425d0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2425d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2425d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2425d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2425d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2425d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2425dc: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2425dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2425e0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2425e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2425e4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2425e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2425e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2425e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2425ec: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2425ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2425f0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2425f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2425f4: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2425F4u;
    SET_GPR_U32(ctx, 31, 0x2425FCu);
    ctx->pc = 0x2425F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2425F4u;
    // 0x2425f8: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2425F4u, 0x2425FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2425FCu;
label_2425fc:
    // 0x2425fc: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x2425fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242600: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x242600u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x242604: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x242604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x242608: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x242608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24260c: 0x24a53740  addiu       $a1, $a1, 0x3740
    ctx->pc = 0x24260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14144));
    // 0x242610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242614: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x242614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x242618: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24261c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x24261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x242620: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x242620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x242624: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x242624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x242628: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x242628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24262c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24262cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242630: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x242630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x242634: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x242634u;
    {
        const bool branch_taken_0x242634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242634u;
        // 0x242638: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242634) {
            ctx->pc = 0x242744u;
            goto label_242744;
        }
    }
    ctx->pc = 0x24263Cu;
label_24263c:
    // 0x24263c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x24263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_242640:
    // 0x242640: 0x26a32fe0  addiu       $v1, $s5, 0x2FE0
    ctx->pc = 0x242640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12256));
    // 0x242644: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x242644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x242648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24264c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x24264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x242650: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x242650u;
    {
        const bool branch_taken_0x242650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x242654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242650u;
        // 0x242654: 0x26c33710  addiu       $v1, $s6, 0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242650) {
            ctx->pc = 0x242744u;
            goto label_242744;
        }
    }
    ctx->pc = 0x242658u;
    // 0x242658: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x242658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x24265c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x24265cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x242660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242664: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x242664u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242668: 0x11200036  beqz        $t1, . + 4 + (0x36 << 2)
    ctx->pc = 0x242668u;
    {
        const bool branch_taken_0x242668 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x24266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242668u;
        // 0x24266c: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242668) {
            ctx->pc = 0x242744u;
            goto label_242744;
        }
    }
    ctx->pc = 0x242670u;
    // 0x242670: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x242670u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x242674: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x242674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x242678: 0x26033620  addiu       $v1, $s0, 0x3620
    ctx->pc = 0x242678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 13856));
    // 0x24267c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x24267cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x242680: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242684: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x242684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x242688: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x242688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x24268c: 0x10450019  beq         $v0, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x24268Cu;
    {
        const bool branch_taken_0x24268c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x242690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24268Cu;
        // 0x242690: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24268c) {
            ctx->pc = 0x2426F4u;
            goto label_2426f4;
        }
    }
    ctx->pc = 0x242694u;
    // 0x242694: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x242694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x242698: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x242698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24269c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x24269cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2426a0: 0x24840cf8  addiu       $a0, $a0, 0xCF8
    ctx->pc = 0x2426a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3320));
    // 0x2426a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2426a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2426a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2426a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2426ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2426acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2426b0: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2426B0u;
    {
        const bool branch_taken_0x2426b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2426b0) {
            ctx->pc = 0x2426B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2426B0u;
            // 0x2426b4: 0x8cc20058  lw          $v0, 0x58($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2426F8u;
            goto label_2426f8;
        }
    }
    ctx->pc = 0x2426B8u;
    // 0x2426b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2426b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2426bc: 0x50a2000e  beql        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2426BCu;
    {
        const bool branch_taken_0x2426bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2426bc) {
            ctx->pc = 0x2426C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2426BCu;
            // 0x2426c0: 0x8cc20058  lw          $v0, 0x58($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2426F8u;
            goto label_2426f8;
        }
    }
    ctx->pc = 0x2426C4u;
    // 0x2426c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2426c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2426c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2426c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2426cc: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2426CCu;
    SET_GPR_U32(ctx, 31, 0x2426D4u);
    ctx->pc = 0x2426D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2426CCu;
    // 0x2426d0: 0x8d240020  lw          $a0, 0x20($t1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2426CCu, 0x2426D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2426D4u;
label_2426d4:
    // 0x2426d4: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x2426d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2426d8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2426d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2426dc: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x2426dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x2426e0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2426e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2426e4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2426e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2426e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2426e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2426ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2426ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2426f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2426f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2426f4:
    // 0x2426f4: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2426f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_2426f8:
    // 0x2426f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2426f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2426fc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2426FCu;
    {
        const bool branch_taken_0x2426fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x242700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426FCu;
        // 0x242700: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426fc) {
            ctx->pc = 0x242728u;
            goto label_242728;
        }
    }
    ctx->pc = 0x242704u;
    // 0x242704: 0x26c43710  addiu       $a0, $s6, 0x3710
    ctx->pc = 0x242704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x242708: 0xc78c8220  lwc1        $f12, -0x7DE0($gp)
    ctx->pc = 0x242708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24270c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24270cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242710: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x242710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x242714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242718: 0xc0850ec  jal         func_2143B0
    ctx->pc = 0x242718u;
    SET_GPR_U32(ctx, 31, 0x242720u);
    ctx->pc = 0x24271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242718u;
    // 0x24271c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2143B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143B0u, 0x242718u, 0x242720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242720u;
label_242720:
    // 0x242720: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x242720u;
    {
        const bool branch_taken_0x242720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242720u;
        // 0x242724: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242720) {
            ctx->pc = 0x242748u;
            goto label_242748;
        }
    }
    ctx->pc = 0x242728u;
label_242728:
    // 0x242728: 0x26c43710  addiu       $a0, $s6, 0x3710
    ctx->pc = 0x242728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x24272c: 0xc78c8224  lwc1        $f12, -0x7DDC($gp)
    ctx->pc = 0x24272cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x242730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242734: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x242734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x242738: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24273c: 0xc0850ec  jal         func_2143B0
    ctx->pc = 0x24273Cu;
    SET_GPR_U32(ctx, 31, 0x242744u);
    ctx->pc = 0x242740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24273Cu;
    // 0x242740: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2143B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143B0u, 0x24273Cu, 0x242744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242744u;
label_242744:
    // 0x242744: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x242744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_242748:
    // 0x242748: 0x26b22fe0  addiu       $s2, $s5, 0x2FE0
    ctx->pc = 0x242748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12256));
    // 0x24274c: 0x2828018  mult        $s0, $s4, $v0
    ctx->pc = 0x24274cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x242750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242754: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x242754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x242758: 0xc085608  jal         func_215820
    ctx->pc = 0x242758u;
    SET_GPR_U32(ctx, 31, 0x242760u);
    ctx->pc = 0x24275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242758u;
    // 0x24275c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x242758u, 0x242760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242760u;
label_242760:
    // 0x242760: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x242760u;
    {
        const bool branch_taken_0x242760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242760u;
        // 0x242764: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242760) {
            ctx->pc = 0x2428F0u;
            goto label_2428f0;
        }
    }
    ctx->pc = 0x242768u;
    // 0x242768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24276c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24276cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x242770: 0xc085608  jal         func_215820
    ctx->pc = 0x242770u;
    SET_GPR_U32(ctx, 31, 0x242778u);
    ctx->pc = 0x242774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242770u;
    // 0x242774: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x242770u, 0x242778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242778u;
label_242778:
    // 0x242778: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x242778u;
    {
        const bool branch_taken_0x242778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242778u;
        // 0x24277c: 0x8f87a004  lw          $a3, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242778) {
            ctx->pc = 0x24279Cu;
            goto label_24279c;
        }
    }
    ctx->pc = 0x242780u;
    // 0x242780: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x242780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x242784: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x242784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x242788: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x242788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24278c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24278cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242790: 0x0  nop
    ctx->pc = 0x242790u;
    // NOP
    // 0x242794: 0x45020058  bc1fl       . + 4 + (0x58 << 2)
    ctx->pc = 0x242794u;
    {
        const bool branch_taken_0x242794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242794) {
            ctx->pc = 0x242798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242794u;
            // 0x242798: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2428F8u;
            goto label_2428f8;
        }
    }
    ctx->pc = 0x24279Cu;
label_24279c:
    // 0x24279c: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x24279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2427a0: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x2427a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x2427a4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2427a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2427a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2427a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2427ac: 0x24840cf8  addiu       $a0, $a0, 0xCF8
    ctx->pc = 0x2427acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3320));
    // 0x2427b0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2427b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2427b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2427b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2427b8: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x2427b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2427bc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2427bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2427c0: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x2427C0u;
    {
        const bool branch_taken_0x2427c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2427c0) {
            ctx->pc = 0x2427C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2427C0u;
            // 0x2427c4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2428F8u;
            goto label_2428f8;
        }
    }
    ctx->pc = 0x2427C8u;
    // 0x2427c8: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2427c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2427cc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2427ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2427d0: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x2427d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2427d4: 0x244250e0  addiu       $v0, $v0, 0x50E0
    ctx->pc = 0x2427d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20704));
    // 0x2427d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2427d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2427dc: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2427dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2427e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2427e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2427e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2427e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2427e8: 0x84730030  lh          $s3, 0x30($v1)
    ctx->pc = 0x2427e8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2427ec: 0x16860008  bne         $s4, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2427ECu;
    {
        const bool branch_taken_0x2427ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 6));
        ctx->pc = 0x2427F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427ECu;
        // 0x2427f0: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427ec) {
            ctx->pc = 0x242810u;
            goto label_242810;
        }
    }
    ctx->pc = 0x2427F4u;
    // 0x2427f4: 0x8e450248  lw          $a1, 0x248($s2)
    ctx->pc = 0x2427f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 584)));
    // 0x2427f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2427f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2427fc: 0xc78d8228  lwc1        $f13, -0x7DD8($gp)
    ctx->pc = 0x2427fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x242800: 0xc08535a  jal         func_214D68
    ctx->pc = 0x242800u;
    SET_GPR_U32(ctx, 31, 0x242808u);
    ctx->pc = 0x242804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242800u;
    // 0x242804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x242800u, 0x242808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242808u;
label_242808:
    // 0x242808: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x242808u;
    {
        const bool branch_taken_0x242808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242808u;
        // 0x24280c: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242808) {
            ctx->pc = 0x24282Cu;
            goto label_24282c;
        }
    }
    ctx->pc = 0x242810u;
label_242810:
    // 0x242810: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x242810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242814: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x242814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24281c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x24281cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x242820: 0xc08535a  jal         func_214D68
    ctx->pc = 0x242820u;
    SET_GPR_U32(ctx, 31, 0x242828u);
    ctx->pc = 0x242824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242820u;
    // 0x242824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x242820u, 0x242828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242828u;
label_242828:
    // 0x242828: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x242828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_24282c:
    // 0x24282c: 0x26e53750  addiu       $a1, $s7, 0x3750
    ctx->pc = 0x24282cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14160));
    // 0x242830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242834: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24283c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x242840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242844: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x242844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242848: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x242848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x24284c: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x24284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242850: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x242850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x242854: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x242854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242858: 0xc08d96e  jal         func_2365B8
    ctx->pc = 0x242858u;
    SET_GPR_U32(ctx, 31, 0x242860u);
    ctx->pc = 0x24285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242858u;
    // 0x24285c: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2365B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2365B8u, 0x242858u, 0x242860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242860u;
label_242860:
    // 0x242860: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242864: 0x26c33710  addiu       $v1, $s6, 0x3710
    ctx->pc = 0x242864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x242868: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x242868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24286c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242874: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242878: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x242878u;
    {
        const bool branch_taken_0x242878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242878) {
            ctx->pc = 0x2428A0u;
            goto label_2428a0;
        }
    }
    ctx->pc = 0x242880u;
    // 0x242880: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x242880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242884: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x242884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x242888: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x242888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x24288c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x24288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242890: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x242890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x242894: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x242894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242898: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x242898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x24289c: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x24289cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
label_2428a0:
    // 0x2428a0: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2428A0u;
    {
        const bool branch_taken_0x2428a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2428A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428A0u;
        // 0x2428a4: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428a0) {
            ctx->pc = 0x2428F4u;
            goto label_2428f4;
        }
    }
    ctx->pc = 0x2428A8u;
    // 0x2428a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2428a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2428ac: 0x247012f8  addiu       $s0, $v1, 0x12F8
    ctx->pc = 0x2428acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4856));
    // 0x2428b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2428b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2428b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2428b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2428b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2428b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2428bc: 0x463000e  bgezl       $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2428BCu;
    {
        const bool branch_taken_0x2428bc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2428bc) {
            ctx->pc = 0x2428C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2428BCu;
            // 0x2428c0: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2428F8u;
            goto label_2428f8;
        }
    }
    ctx->pc = 0x2428C4u;
    // 0x2428c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2428c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2428c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2428ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428d0: 0xc081602  jal         func_205808
    ctx->pc = 0x2428D0u;
    SET_GPR_U32(ctx, 31, 0x2428D8u);
    ctx->pc = 0x2428D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2428D0u;
    // 0x2428d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x2428D0u, 0x2428D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2428D8u;
label_2428d8:
    // 0x2428d8: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x2428d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2428dc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2428dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2428e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2428e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2428e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2428e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2428e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2428E8u;
    {
        const bool branch_taken_0x2428e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2428ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428E8u;
        // 0x2428ec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428e8) {
            ctx->pc = 0x2428F4u;
            goto label_2428f4;
        }
    }
    ctx->pc = 0x2428F0u;
label_2428f0:
    // 0x2428f0: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x2428f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_2428f4:
    // 0x2428f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2428f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2428f8:
    // 0x2428f8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2428f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2428fc: 0x249036f0  addiu       $s0, $a0, 0x36F0
    ctx->pc = 0x2428fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 14064));
    // 0x242900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242904: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242908: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24290c: 0x54600096  bnel        $v1, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x24290Cu;
    {
        const bool branch_taken_0x24290c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24290c) {
            ctx->pc = 0x242910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24290Cu;
            // 0x242910: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242B68u;
            goto label_242b68;
        }
    }
    ctx->pc = 0x242914u;
    // 0x242914: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x242914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x242918: 0x26a62fe0  addiu       $a2, $s5, 0x2FE0
    ctx->pc = 0x242918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12256));
    // 0x24291c: 0x2822818  mult        $a1, $s4, $v0
    ctx->pc = 0x24291cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x242920: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x242920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x242924: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x242924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x242928: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x242928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24292c: 0x54640081  bnel        $v1, $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x24292Cu;
    {
        const bool branch_taken_0x24292c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24292c) {
            ctx->pc = 0x242930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24292Cu;
            // 0x242930: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242B34u;
            goto label_242b34;
        }
    }
    ctx->pc = 0x242934u;
    // 0x242934: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x242934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x242938: 0x240402a3  addiu       $a0, $zero, 0x2A3
    ctx->pc = 0x242938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
    // 0x24293c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24293cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242940: 0x14640050  bne         $v1, $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x242940u;
    {
        const bool branch_taken_0x242940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x242944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242940u;
        // 0x242944: 0x24040172  addiu       $a0, $zero, 0x172 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242940) {
            ctx->pc = 0x242A84u;
            goto label_242a84;
        }
    }
    ctx->pc = 0x242948u;
    // 0x242948: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x242948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24294c: 0x2404017d  addiu       $a0, $zero, 0x17D
    ctx->pc = 0x24294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
    // 0x242950: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x242950u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x242954: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x242954u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x242958: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x242958u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x24295c: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x24295Cu;
    SET_GPR_U32(ctx, 31, 0x242964u);
    ctx->pc = 0x242960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24295Cu;
    // 0x242960: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x24295Cu, 0x242964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242964u;
label_242964:
    // 0x242964: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x242964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24296c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24296cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x242970: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x242970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242974: 0xac440240  sw          $a0, 0x240($v0)
    ctx->pc = 0x242974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 4));
    // 0x242978: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x242978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24297c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24297cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242980: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x242980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x242984: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x242984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x242988: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24298c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x24298cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x242990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242994: 0xc09829e  jal         func_260A78
    ctx->pc = 0x242994u;
    SET_GPR_U32(ctx, 31, 0x24299Cu);
    ctx->pc = 0x242998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242994u;
    // 0x242998: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x242994u, 0x24299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24299Cu;
label_24299c:
    // 0x24299c: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x24299cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2429a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2429a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2429a4: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x2429a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2429a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2429a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2429ac: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2429acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2429b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2429b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2429b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2429b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2429b8: 0x8ca4005c  lw          $a0, 0x5C($a1)
    ctx->pc = 0x2429b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x2429bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2429bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2429c0: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x2429c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x2429c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2429c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2429c8: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x2429c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2429cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2429ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2429d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2429d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2429d4: 0xc09c0b6  jal         func_2702D8
    ctx->pc = 0x2429D4u;
    SET_GPR_U32(ctx, 31, 0x2429DCu);
    ctx->pc = 0x2429D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2429D4u;
    // 0x2429d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2702D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2702D8u, 0x2429D4u, 0x2429DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429DCu;
label_2429dc:
    // 0x2429dc: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x2429dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2429e0: 0x2404017d  addiu       $a0, $zero, 0x17D
    ctx->pc = 0x2429e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
    // 0x2429e4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2429e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2429e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2429e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2429ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2429ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2429f0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2429f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2429f4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2429f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2429f8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2429f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2429fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2429fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242a00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242a04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242a08: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x242A08u;
    SET_GPR_U32(ctx, 31, 0x242A10u);
    ctx->pc = 0x242A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A08u;
    // 0x242a0c: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x242A08u, 0x242A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A10u;
label_242a10:
    // 0x242a10: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x242a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242a14: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x242a14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x242a18: 0x26103700  addiu       $s0, $s0, 0x3700
    ctx->pc = 0x242a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14080));
    // 0x242a1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x242a1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x242a20: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x242a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242a28: 0xac440240  sw          $a0, 0x240($v0)
    ctx->pc = 0x242a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 4));
    // 0x242a2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x242a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x242a30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x242a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242a34: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x242a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x242a38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x242a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x242a3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242a40: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x242a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x242a44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242a48: 0xc09829e  jal         func_260A78
    ctx->pc = 0x242A48u;
    SET_GPR_U32(ctx, 31, 0x242A50u);
    ctx->pc = 0x242A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A48u;
    // 0x242a4c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x242A48u, 0x242A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A50u;
label_242a50:
    // 0x242a50: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x242a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242a54: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x242a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x242a58: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x242a58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x242a5c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x242a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242a60: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x242a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x242a64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242a68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242a6c: 0x8ca4005c  lw          $a0, 0x5C($a1)
    ctx->pc = 0x242a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x242a70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242a74: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x242a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x242a78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x242a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242a7c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x242A7Cu;
    {
        const bool branch_taken_0x242a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A7Cu;
        // 0x242a80: 0x8c860018  lw          $a2, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a7c) {
            ctx->pc = 0x242B04u;
            goto label_242b04;
        }
    }
    ctx->pc = 0x242A84u;
label_242a84:
    // 0x242a84: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x242a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x242a88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x242a88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x242a8c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x242a8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x242a90: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x242a90u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x242a94: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x242A94u;
    SET_GPR_U32(ctx, 31, 0x242A9Cu);
    ctx->pc = 0x242A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A94u;
    // 0x242a98: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x242A94u, 0x242A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A9Cu;
label_242a9c:
    // 0x242a9c: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x242a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242aa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x242aa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x242aa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242aa8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x242aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242aac: 0xac440240  sw          $a0, 0x240($v0)
    ctx->pc = 0x242aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 4));
    // 0x242ab0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x242ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x242ab4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x242ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242ab8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x242ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x242abc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x242abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x242ac0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242ac4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x242ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x242ac8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242acc: 0xc09829e  jal         func_260A78
    ctx->pc = 0x242ACCu;
    SET_GPR_U32(ctx, 31, 0x242AD4u);
    ctx->pc = 0x242AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242ACCu;
    // 0x242ad0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x242ACCu, 0x242AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242AD4u;
label_242ad4:
    // 0x242ad4: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x242ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242ad8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x242ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242adc: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x242adcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x242ae0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x242ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242ae4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x242ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x242ae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242aec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242af0: 0x8ca4005c  lw          $a0, 0x5C($a1)
    ctx->pc = 0x242af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x242af4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242af8: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x242af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x242afc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x242afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242b00: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x242b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_242b04:
    // 0x242b04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242b08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242b0c: 0xc09c0b6  jal         func_2702D8
    ctx->pc = 0x242B0Cu;
    SET_GPR_U32(ctx, 31, 0x242B14u);
    ctx->pc = 0x242B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242B0Cu;
    // 0x242b10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2702D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2702D8u, 0x242B0Cu, 0x242B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B14u;
label_242b14:
    // 0x242b14: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242b18: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x242b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x242b1c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x242b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242b20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242b24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242b28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242b2c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x242b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_242b30:
    // 0x242b30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x242b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_242b34:
    // 0x242b34: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x242b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x242b38: 0x248336f0  addiu       $v1, $a0, 0x36F0
    ctx->pc = 0x242b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 14064));
    // 0x242b3c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x242b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242b40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x242b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x242b44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242b48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x242B48u;
    {
        const bool branch_taken_0x242b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242b48) {
            ctx->pc = 0x242B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242B48u;
            // 0x242b4c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242B68u;
            goto label_242b68;
        }
    }
    ctx->pc = 0x242B50u;
    // 0x242b50: 0x26c23710  addiu       $v0, $s6, 0x3710
    ctx->pc = 0x242b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x242b54: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x242b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x242b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242b5c: 0x10600167  beqz        $v1, . + 4 + (0x167 << 2)
    ctx->pc = 0x242B5Cu;
    {
        const bool branch_taken_0x242b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B5Cu;
        // 0x242b60: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b5c) {
            ctx->pc = 0x2430FCu;
            goto label_2430fc;
        }
    }
    ctx->pc = 0x242B64u;
    // 0x242b64: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x242b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_242b68:
    // 0x242b68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x242b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b6c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x242b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x242b70: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x242b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242b74: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x242b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x242b78: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x242b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x242b7c: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x242B7Cu;
    {
        const bool branch_taken_0x242b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B7Cu;
        // 0x242b80: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b7c) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242B84u;
    // 0x242b84: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x242b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x242b88: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x242b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x242b8c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x242b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x242b90: 0x24822fe0  addiu       $v0, $a0, 0x2FE0
    ctx->pc = 0x242b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12256));
    // 0x242b94: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x242b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x242b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b9c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x242b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242ba0: 0xc085608  jal         func_215820
    ctx->pc = 0x242BA0u;
    SET_GPR_U32(ctx, 31, 0x242BA8u);
    ctx->pc = 0x242BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242BA0u;
    // 0x242ba4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x242BA0u, 0x242BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242BA8u;
label_242ba8:
    // 0x242ba8: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x242BA8u;
    {
        const bool branch_taken_0x242ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BA8u;
        // 0x242bac: 0x240202b7  addiu       $v0, $zero, 0x2B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 695));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ba8) {
            ctx->pc = 0x242D8Cu;
            goto label_242d8c;
        }
    }
    ctx->pc = 0x242BB0u;
    // 0x242bb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x242bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242bb4: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x242BB4u;
    {
        const bool branch_taken_0x242bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x242BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BB4u;
        // 0x242bb8: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bb4) {
            ctx->pc = 0x242C0Cu;
            goto label_242c0c;
        }
    }
    ctx->pc = 0x242BBCu;
    // 0x242bbc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x242bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x242bc0: 0xc780822c  lwc1        $f0, -0x7DD4($gp)
    ctx->pc = 0x242bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242bc4: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x242bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242bc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242bc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242bcc: 0x0  nop
    ctx->pc = 0x242bccu;
    // NOP
    // 0x242bd0: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
    ctx->pc = 0x242BD0u;
    {
        const bool branch_taken_0x242bd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BD0u;
        // 0x242bd4: 0x8f87a004  lw          $a3, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bd0) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242BD8u;
    // 0x242bd8: 0xc7808230  lwc1        $f0, -0x7DD0($gp)
    ctx->pc = 0x242bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242be0: 0x0  nop
    ctx->pc = 0x242be0u;
    // NOP
    // 0x242be4: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x242BE4u;
    {
        const bool branch_taken_0x242be4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BE4u;
        // 0x242be8: 0x8f83b45c  lw          $v1, -0x4BA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242be4) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242BECu;
    // 0x242bec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x242becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x242bf0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242BF0u;
    {
        const bool branch_taken_0x242bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242bf0) {
            ctx->pc = 0x242BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242BF0u;
            // 0x242bf4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242BF8u;
            goto label_242bf8;
        }
    }
    ctx->pc = 0x242BF8u;
label_242bf8:
    // 0x242bf8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x242bf8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x242bfc: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242c00: 0x2010  mfhi        $a0
    ctx->pc = 0x242c00u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x242c04: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x242C04u;
    {
        const bool branch_taken_0x242c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C04u;
        // 0x242c08: 0x2c920001  sltiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c04) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242C0Cu;
label_242c0c:
    // 0x242c0c: 0x54620045  bnel        $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x242C0Cu;
    {
        const bool branch_taken_0x242c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x242c0c) {
            ctx->pc = 0x242C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C0Cu;
            // 0x242c10: 0x2402029b  addiu       $v0, $zero, 0x29B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 667));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242D24u;
            goto label_242d24;
        }
    }
    ctx->pc = 0x242C14u;
    // 0x242c14: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x242c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x242c18: 0xc7808234  lwc1        $f0, -0x7DCC($gp)
    ctx->pc = 0x242c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242c1c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x242c1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242c20: 0xc4610064  lwc1        $f1, 0x64($v1)
    ctx->pc = 0x242c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242c24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242c28: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x242C28u;
    {
        const bool branch_taken_0x242c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242c28) {
            ctx->pc = 0x242C50u;
            goto label_242c50;
        }
    }
    ctx->pc = 0x242C30u;
    // 0x242c30: 0xc7808238  lwc1        $f0, -0x7DC8($gp)
    ctx->pc = 0x242c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242c34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242c38: 0x0  nop
    ctx->pc = 0x242c38u;
    // NOP
    // 0x242c3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x242C3Cu;
    {
        const bool branch_taken_0x242c3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C3Cu;
        // 0x242c40: 0x8f82b45c  lw          $v0, -0x4BA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c3c) {
            ctx->pc = 0x242C50u;
            goto label_242c50;
        }
    }
    ctx->pc = 0x242C44u;
    // 0x242c44: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x242c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x242c48: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x242c48u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x242c4c: 0xc4610064  lwc1        $f1, 0x64($v1)
    ctx->pc = 0x242c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242c50:
    // 0x242c50: 0xc780823c  lwc1        $f0, -0x7DC4($gp)
    ctx->pc = 0x242c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242c54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242c58: 0x0  nop
    ctx->pc = 0x242c58u;
    // NOP
    // 0x242c5c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x242C5Cu;
    {
        const bool branch_taken_0x242c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242c5c) {
            ctx->pc = 0x242C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C5Cu;
            // 0x242c60: 0xc4610064  lwc1        $f1, 0x64($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x242C84u;
            goto label_242c84;
        }
    }
    ctx->pc = 0x242C64u;
    // 0x242c64: 0xc7808240  lwc1        $f0, -0x7DC0($gp)
    ctx->pc = 0x242c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242c68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242c6c: 0x0  nop
    ctx->pc = 0x242c6cu;
    // NOP
    // 0x242c70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x242C70u;
    {
        const bool branch_taken_0x242c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C70u;
        // 0x242c74: 0x8f82b45c  lw          $v0, -0x4BA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c70) {
            ctx->pc = 0x242C80u;
            goto label_242c80;
        }
    }
    ctx->pc = 0x242C78u;
    // 0x242c78: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x242c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x242c7c: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x242c7cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_242c80:
    // 0x242c80: 0xc4610064  lwc1        $f1, 0x64($v1)
    ctx->pc = 0x242c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242c84:
    // 0x242c84: 0xc7808244  lwc1        $f0, -0x7DBC($gp)
    ctx->pc = 0x242c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242c88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242c88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242c8c: 0x0  nop
    ctx->pc = 0x242c8cu;
    // NOP
    // 0x242c90: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x242C90u;
    {
        const bool branch_taken_0x242c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242c90) {
            ctx->pc = 0x242C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C90u;
            // 0x242c94: 0xc4610064  lwc1        $f1, 0x64($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x242CB8u;
            goto label_242cb8;
        }
    }
    ctx->pc = 0x242C98u;
    // 0x242c98: 0xc7808248  lwc1        $f0, -0x7DB8($gp)
    ctx->pc = 0x242c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242c9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242ca0: 0x0  nop
    ctx->pc = 0x242ca0u;
    // NOP
    // 0x242ca4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x242CA4u;
    {
        const bool branch_taken_0x242ca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CA4u;
        // 0x242ca8: 0x8f82b45c  lw          $v0, -0x4BA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ca4) {
            ctx->pc = 0x242CB4u;
            goto label_242cb4;
        }
    }
    ctx->pc = 0x242CACu;
    // 0x242cac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x242cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x242cb0: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x242cb0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_242cb4:
    // 0x242cb4: 0xc4610064  lwc1        $f1, 0x64($v1)
    ctx->pc = 0x242cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242cb8:
    // 0x242cb8: 0xc780824c  lwc1        $f0, -0x7DB4($gp)
    ctx->pc = 0x242cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242cbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242cbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242cc0: 0x0  nop
    ctx->pc = 0x242cc0u;
    // NOP
    // 0x242cc4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x242CC4u;
    {
        const bool branch_taken_0x242cc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242cc4) {
            ctx->pc = 0x242CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242CC4u;
            // 0x242cc8: 0xc4610064  lwc1        $f1, 0x64($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x242CECu;
            goto label_242cec;
        }
    }
    ctx->pc = 0x242CCCu;
    // 0x242ccc: 0xc7808250  lwc1        $f0, -0x7DB0($gp)
    ctx->pc = 0x242cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242cd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242cd4: 0x0  nop
    ctx->pc = 0x242cd4u;
    // NOP
    // 0x242cd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x242CD8u;
    {
        const bool branch_taken_0x242cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CD8u;
        // 0x242cdc: 0x8f82b45c  lw          $v0, -0x4BA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cd8) {
            ctx->pc = 0x242CE8u;
            goto label_242ce8;
        }
    }
    ctx->pc = 0x242CE0u;
    // 0x242ce0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x242ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x242ce4: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x242ce4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_242ce8:
    // 0x242ce8: 0xc4610064  lwc1        $f1, 0x64($v1)
    ctx->pc = 0x242ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242cec:
    // 0x242cec: 0xc7808254  lwc1        $f0, -0x7DAC($gp)
    ctx->pc = 0x242cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242cf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242cf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242cf4: 0x0  nop
    ctx->pc = 0x242cf4u;
    // NOP
    // 0x242cf8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x242CF8u;
    {
        const bool branch_taken_0x242cf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CF8u;
        // 0x242cfc: 0x8f87a004  lw          $a3, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cf8) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242D00u;
    // 0x242d00: 0xc7808258  lwc1        $f0, -0x7DA8($gp)
    ctx->pc = 0x242d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242d04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242d08: 0x0  nop
    ctx->pc = 0x242d08u;
    // NOP
    // 0x242d0c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x242D0Cu;
    {
        const bool branch_taken_0x242d0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D0Cu;
        // 0x242d10: 0x8f82b45c  lw          $v0, -0x4BA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d0c) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242D14u;
    // 0x242d14: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242d18: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x242d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x242d1c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x242D1Cu;
    {
        const bool branch_taken_0x242d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D1Cu;
        // 0x242d20: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d1c) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242D24u;
label_242d24:
    // 0x242d24: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x242D24u;
    {
        const bool branch_taken_0x242d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x242D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D24u;
        // 0x242d28: 0x8f87a004  lw          $a3, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d24) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242D2Cu;
    // 0x242d2c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x242d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x242d30: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x242d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x242d34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242d38: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x242d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242d3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242d40: 0x0  nop
    ctx->pc = 0x242d40u;
    // NOP
    // 0x242d44: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x242D44u;
    {
        const bool branch_taken_0x242d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242d44) {
            ctx->pc = 0x242D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D44u;
            // 0x242d48: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242D94u;
            goto label_242d94;
        }
    }
    ctx->pc = 0x242D4Cu;
    // 0x242d4c: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x242d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242d50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242d54: 0x0  nop
    ctx->pc = 0x242d54u;
    // NOP
    // 0x242d58: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x242D58u;
    {
        const bool branch_taken_0x242d58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D58u;
        // 0x242d5c: 0x8f84b45c  lw          $a0, -0x4BA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d58) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242D60u;
    // 0x242d60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x242d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x242d64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242D64u;
    {
        const bool branch_taken_0x242d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d64) {
            ctx->pc = 0x242D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D64u;
            // 0x242d68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242D6Cu;
            goto label_242d6c;
        }
    }
    ctx->pc = 0x242D6Cu;
label_242d6c:
    // 0x242d6c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x242d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x242d70: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x242d70u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x242d74: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242d74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242d78: 0x2810  mfhi        $a1
    ctx->pc = 0x242d78u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x242d7c: 0x38a20005  xori        $v0, $a1, 0x5
    ctx->pc = 0x242d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
    // 0x242d80: 0x2cb20001  sltiu       $s2, $a1, 0x1
    ctx->pc = 0x242d80u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x242d84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x242D84u;
    {
        const bool branch_taken_0x242d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D84u;
        // 0x242d88: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d84) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242D8Cu;
label_242d8c:
    // 0x242d8c: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_242d90:
    // 0x242d90: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x242d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_242d94:
    // 0x242d94: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x242d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x242d98: 0x248336f0  addiu       $v1, $a0, 0x36F0
    ctx->pc = 0x242d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 14064));
    // 0x242d9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242da4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x242da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242da8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x242DA8u;
    {
        const bool branch_taken_0x242da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242da8) {
            ctx->pc = 0x242DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242DA8u;
            // 0x242dac: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242DD4u;
            goto label_242dd4;
        }
    }
    ctx->pc = 0x242DB0u;
    // 0x242db0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x242DB0u;
    {
        const bool branch_taken_0x242db0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DB0u;
        // 0x242db4: 0x8c430020  lw          $v1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242db0) {
            ctx->pc = 0x242DC4u;
            goto label_242dc4;
        }
    }
    ctx->pc = 0x242DB8u;
    // 0x242db8: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x242db8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x242dbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x242DBCu;
    {
        const bool branch_taken_0x242dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DBCu;
        // 0x242dc0: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dbc) {
            ctx->pc = 0x242DCCu;
            goto label_242dcc;
        }
    }
    ctx->pc = 0x242DC4u;
label_242dc4:
    // 0x242dc4: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x242dc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x242dc8: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x242dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_242dcc:
    // 0x242dcc: 0xa4620124  sh          $v0, 0x124($v1)
    ctx->pc = 0x242dccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x242dd0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x242dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_242dd4:
    // 0x242dd4: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x242dd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x242dd8: 0x26633700  addiu       $v1, $s3, 0x3700
    ctx->pc = 0x242dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 14080));
    // 0x242ddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242de4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x242de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242de8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x242DE8u;
    {
        const bool branch_taken_0x242de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242de8) {
            ctx->pc = 0x242DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242DE8u;
            // 0x242dec: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E14u;
            goto label_242e14;
        }
    }
    ctx->pc = 0x242DF0u;
    // 0x242df0: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x242DF0u;
    {
        const bool branch_taken_0x242df0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DF0u;
        // 0x242df4: 0x8c430020  lw          $v1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242df0) {
            ctx->pc = 0x242E04u;
            goto label_242e04;
        }
    }
    ctx->pc = 0x242DF8u;
    // 0x242df8: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x242df8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x242dfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x242DFCu;
    {
        const bool branch_taken_0x242dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DFCu;
        // 0x242e00: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dfc) {
            ctx->pc = 0x242E0Cu;
            goto label_242e0c;
        }
    }
    ctx->pc = 0x242E04u;
label_242e04:
    // 0x242e04: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x242e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x242e08: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x242e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_242e0c:
    // 0x242e0c: 0xa4620124  sh          $v0, 0x124($v1)
    ctx->pc = 0x242e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x242e10: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x242e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_242e14:
    // 0x242e14: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x242e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x242e18: 0x2828018  mult        $s0, $s4, $v0
    ctx->pc = 0x242e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x242e1c: 0x24722fe0  addiu       $s2, $v1, 0x2FE0
    ctx->pc = 0x242e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12256));
    // 0x242e20: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x242e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x242e24: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x242e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x242e28: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x242e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x242e2c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x242e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x242e30: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x242E30u;
    {
        const bool branch_taken_0x242e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E30u;
        // 0x242e34: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e30) {
            ctx->pc = 0x243078u;
            goto label_243078;
        }
    }
    ctx->pc = 0x242E38u;
    // 0x242e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242e3c: 0xc085608  jal         func_215820
    ctx->pc = 0x242E3Cu;
    SET_GPR_U32(ctx, 31, 0x242E44u);
    ctx->pc = 0x242E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E3Cu;
    // 0x242e40: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x242E3Cu, 0x242E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E44u;
label_242e44:
    // 0x242e44: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x242E44u;
    {
        const bool branch_taken_0x242e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E44u;
        // 0x242e48: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e44) {
            ctx->pc = 0x2430F8u;
            goto label_2430f8;
        }
    }
    ctx->pc = 0x242E4Cu;
    // 0x242e4c: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x242e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x242e50: 0x2463b690  addiu       $v1, $v1, -0x4970
    ctx->pc = 0x242e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948496));
    // 0x242e54: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x242e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x242e58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x242e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x242e5c: 0x8d020060  lw          $v0, 0x60($t0)
    ctx->pc = 0x242e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x242e60: 0xc5020064  lwc1        $f2, 0x64($t0)
    ctx->pc = 0x242e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x242e64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242e68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242e6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x242e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242e70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x242e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x242e74: 0x0  nop
    ctx->pc = 0x242e74u;
    // NOP
    // 0x242e78: 0x0  nop
    ctx->pc = 0x242e78u;
    // NOP
    // 0x242e7c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x242e7cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x242e80: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x242e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242e84: 0x0  nop
    ctx->pc = 0x242e84u;
    // NOP
    // 0x242e88: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x242E88u;
    {
        const bool branch_taken_0x242e88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E88u;
        // 0x242e8c: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e88) {
            ctx->pc = 0x243034u;
            goto label_243034;
        }
    }
    ctx->pc = 0x242E90u;
    // 0x242e90: 0x24040289  addiu       $a0, $zero, 0x289
    ctx->pc = 0x242e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 649));
    // 0x242e94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242e98: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x242E98u;
    {
        const bool branch_taken_0x242e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x242E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E98u;
        // 0x242e9c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e98) {
            ctx->pc = 0x242EF4u;
            goto label_242ef4;
        }
    }
    ctx->pc = 0x242EA0u;
    // 0x242ea0: 0xc7808260  lwc1        $f0, -0x7DA0($gp)
    ctx->pc = 0x242ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242ea4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x242ea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242ea8: 0x0  nop
    ctx->pc = 0x242ea8u;
    // NOP
    // 0x242eac: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x242EACu;
    {
        const bool branch_taken_0x242eac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EACu;
        // 0x242eb0: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242eac) {
            ctx->pc = 0x242EF4u;
            goto label_242ef4;
        }
    }
    ctx->pc = 0x242EB4u;
    // 0x242eb4: 0x26d03710  addiu       $s0, $s6, 0x3710
    ctx->pc = 0x242eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x242eb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242ebc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242ec0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242ec4: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x242EC4u;
    SET_GPR_U32(ctx, 31, 0x242ECCu);
    ctx->pc = 0x242EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242EC4u;
    // 0x242ec8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x242EC4u, 0x242ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242ECCu;
label_242ecc:
    // 0x242ecc: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x242eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242ed0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x242ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x242ed4: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x242ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x242ed8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x242ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x242edc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242ee0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x242ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242ee4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242ee8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x242ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x242eec: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x242EECu;
    {
        const bool branch_taken_0x242eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EECu;
        // 0x242ef0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242eec) {
            ctx->pc = 0x2430F8u;
            goto label_2430f8;
        }
    }
    ctx->pc = 0x242EF4u;
label_242ef4:
    // 0x242ef4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x242ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x242ef8: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x242ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x242efc: 0x24832fe0  addiu       $v1, $a0, 0x2FE0
    ctx->pc = 0x242efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12256));
    // 0x242f00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x242f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x242f04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242f08: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x242f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x242f0c: 0x1485002a  bne         $a0, $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x242F0Cu;
    {
        const bool branch_taken_0x242f0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x242F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F0Cu;
        // 0x242f10: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f0c) {
            ctx->pc = 0x242FB8u;
            goto label_242fb8;
        }
    }
    ctx->pc = 0x242F14u;
    // 0x242f14: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x242f14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x242f18: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x242f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x242f1c: 0x246236f0  addiu       $v0, $v1, 0x36F0
    ctx->pc = 0x242f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 14064));
    // 0x242f20: 0x3c090100  lui         $t1, 0x100
    ctx->pc = 0x242f20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)256 << 16));
    // 0x242f24: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x242f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242f28: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x242f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x242f2c: 0x24a53720  addiu       $a1, $a1, 0x3720
    ctx->pc = 0x242f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14112));
    // 0x242f30: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x242f30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242f34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242f38: 0x26663700  addiu       $a2, $s3, 0x3700
    ctx->pc = 0x242f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 14080));
    // 0x242f3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242f40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242f44: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x242f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x242f48: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x242f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x242f4c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x242f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x242f50: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x242f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242f54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242f58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x242f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x242f5c: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x242f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x242f60: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x242f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242f64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x242f68: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x242f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x242f6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242f70: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x242F70u;
    {
        const bool branch_taken_0x242f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F70u;
        // 0x242f74: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f70) {
            ctx->pc = 0x2430FCu;
            goto label_2430fc;
        }
    }
    ctx->pc = 0x242F78u;
    // 0x242f78: 0xc5010064  lwc1        $f1, 0x64($t0)
    ctx->pc = 0x242f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242f7c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x242f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x242f80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242f84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242f84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242f88: 0x0  nop
    ctx->pc = 0x242f88u;
    // NOP
    // 0x242f8c: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
    ctx->pc = 0x242F8Cu;
    {
        const bool branch_taken_0x242f8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F8Cu;
        // 0x242f90: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f8c) {
            ctx->pc = 0x2430FCu;
            goto label_2430fc;
        }
    }
    ctx->pc = 0x242F94u;
    // 0x242f94: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x242f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x242f98: 0x24843730  addiu       $a0, $a0, 0x3730
    ctx->pc = 0x242f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14128));
    // 0x242f9c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x242f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x242fa0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x242fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x242fa4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x242fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242fa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x242fb0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x242FB0u;
    {
        const bool branch_taken_0x242fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FB0u;
        // 0x242fb4: 0xac6a0000  sw          $t2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242fb0) {
            ctx->pc = 0x2430F8u;
            goto label_2430f8;
        }
    }
    ctx->pc = 0x242FB8u;
label_242fb8:
    // 0x242fb8: 0x26c23710  addiu       $v0, $s6, 0x3710
    ctx->pc = 0x242fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x242fbc: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x242fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x242fc0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x242fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x242fc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242fc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242fcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242fd0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x242fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x242fd4: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x242fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x242fd8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x242FD8u;
    {
        const bool branch_taken_0x242fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FD8u;
        // 0x242fdc: 0x661025  or          $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242fd8) {
            ctx->pc = 0x243010u;
            goto label_243010;
        }
    }
    ctx->pc = 0x242FE0u;
    // 0x242fe0: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x242fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x242fe4: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x242FE4u;
    {
        const bool branch_taken_0x242fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FE4u;
        // 0x242fe8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242fe4) {
            ctx->pc = 0x2430FCu;
            goto label_2430fc;
        }
    }
    ctx->pc = 0x242FECu;
    // 0x242fec: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x242fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x242ff0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x242ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x242ff4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x242ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x242ff8: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x242ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x242ffc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x242ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x243000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x243004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x243008: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x243008u;
    {
        const bool branch_taken_0x243008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243008u;
        // 0x24300c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243008) {
            ctx->pc = 0x2430F8u;
            goto label_2430f8;
        }
    }
    ctx->pc = 0x243010u;
label_243010:
    // 0x243010: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x243010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x243014: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x243014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x243018: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x243018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x24301c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243020: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x243020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x243024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x243028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24302c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x24302Cu;
    {
        const bool branch_taken_0x24302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24302Cu;
        // 0x243030: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24302c) {
            ctx->pc = 0x2430F8u;
            goto label_2430f8;
        }
    }
    ctx->pc = 0x243034u;
label_243034:
    // 0x243034: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x243034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x243038: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x243038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24303c: 0x24423720  addiu       $v0, $v0, 0x3720
    ctx->pc = 0x24303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
    // 0x243040: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x243040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x243044: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x243044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x243048: 0x24843730  addiu       $a0, $a0, 0x3730
    ctx->pc = 0x243048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14128));
    // 0x24304c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x24304cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x243050: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243054: 0x24a53740  addiu       $a1, $a1, 0x3740
    ctx->pc = 0x243054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14144));
    // 0x243058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24305c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x24305cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x243060: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x243060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x243064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x243068: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x243068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24306c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24306cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x243070: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x243070u;
    {
        const bool branch_taken_0x243070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243070u;
        // 0x243074: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243070) {
            ctx->pc = 0x2430ECu;
            goto label_2430ec;
        }
    }
    ctx->pc = 0x243078u;
label_243078:
    // 0x243078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24307c: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24307Cu;
    {
        const bool branch_taken_0x24307c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x243080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24307Cu;
        // 0x243080: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24307c) {
            ctx->pc = 0x2430B4u;
            goto label_2430b4;
        }
    }
    ctx->pc = 0x243084u;
    // 0x243084: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x243084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x243088: 0x24423720  addiu       $v0, $v0, 0x3720
    ctx->pc = 0x243088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
    // 0x24308c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24308cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x243090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243094: 0x24843730  addiu       $a0, $a0, 0x3730
    ctx->pc = 0x243094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14128));
    // 0x243098: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24309c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x24309cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2430a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2430a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2430a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2430a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2430a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2430a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2430ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2430ACu;
    {
        const bool branch_taken_0x2430ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430ACu;
        // 0x2430b0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430ac) {
            ctx->pc = 0x2430F8u;
            goto label_2430f8;
        }
    }
    ctx->pc = 0x2430B4u;
label_2430b4:
    // 0x2430b4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2430b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2430b8: 0x24423720  addiu       $v0, $v0, 0x3720
    ctx->pc = 0x2430b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
    // 0x2430bc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2430bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2430c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2430c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2430c4: 0x24843730  addiu       $a0, $a0, 0x3730
    ctx->pc = 0x2430c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14128));
    // 0x2430c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2430c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2430cc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2430ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2430d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2430d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2430d4: 0x24a53740  addiu       $a1, $a1, 0x3740
    ctx->pc = 0x2430d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14144));
    // 0x2430d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2430d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2430dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2430dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2430e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2430e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2430e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2430e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2430e8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2430e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2430ec:
    // 0x2430ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2430ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2430f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2430f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2430f4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2430f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2430f8:
    // 0x2430f8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2430f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2430fc:
    // 0x2430fc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2430fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x243100: 0x2828018  mult        $s0, $s4, $v0
    ctx->pc = 0x243100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x243104: 0x24932fe0  addiu       $s3, $a0, 0x2FE0
    ctx->pc = 0x243104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 12256));
    // 0x243108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24310c: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x24310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x243110: 0xc085608  jal         func_215820
    ctx->pc = 0x243110u;
    SET_GPR_U32(ctx, 31, 0x243118u);
    ctx->pc = 0x243114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243110u;
    // 0x243114: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x243110u, 0x243118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243118u;
label_243118:
    // 0x243118: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x243118u;
    {
        const bool branch_taken_0x243118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243118u;
        // 0x24311c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243118) {
            ctx->pc = 0x243288u;
            goto label_243288;
        }
    }
    ctx->pc = 0x243120u;
    // 0x243120: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x243120u;
    SET_GPR_U32(ctx, 31, 0x243128u);
    ctx->pc = 0x243124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243120u;
    // 0x243124: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x243120u, 0x243128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243128u;
label_243128:
    // 0x243128: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x243128u;
    {
        const bool branch_taken_0x243128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243128u;
        // 0x24312c: 0x26620008  addiu       $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243128) {
            ctx->pc = 0x243284u;
            goto label_243284;
        }
    }
    ctx->pc = 0x243130u;
    // 0x243130: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x243130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x243134: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x243134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x243138: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x243138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24313c: 0x10b50021  beq         $a1, $s5, . + 4 + (0x21 << 2)
    ctx->pc = 0x24313Cu;
    {
        const bool branch_taken_0x24313c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        ctx->pc = 0x243140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24313Cu;
        // 0x243140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24313c) {
            ctx->pc = 0x2431C4u;
            goto label_2431c4;
        }
    }
    ctx->pc = 0x243144u;
    // 0x243144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243148: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x243148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24314c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24314cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243150: 0xc08535a  jal         func_214D68
    ctx->pc = 0x243150u;
    SET_GPR_U32(ctx, 31, 0x243158u);
    ctx->pc = 0x243154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243150u;
    // 0x243154: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x243150u, 0x243158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243158u;
label_243158:
    // 0x243158: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x243158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24315c: 0x26c43710  addiu       $a0, $s6, 0x3710
    ctx->pc = 0x24315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x243160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x243160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243164: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243168: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x243168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24316c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x24316cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243170: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x243170u;
    {
        const bool branch_taken_0x243170 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x243174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243170u;
        // 0x243174: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243170) {
            ctx->pc = 0x2431E8u;
            goto label_2431e8;
        }
    }
    ctx->pc = 0x243178u;
    // 0x243178: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x243178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24317c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24317cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243180: 0x5464001a  bnel        $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x243180u;
    {
        const bool branch_taken_0x243180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x243180) {
            ctx->pc = 0x243184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243180u;
            // 0x243184: 0x3c100035  lui         $s0, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2431ECu;
            goto label_2431ec;
        }
    }
    ctx->pc = 0x243188u;
    // 0x243188: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x243188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x24318c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x24318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x243190: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x243190u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x243194: 0x26043620  addiu       $a0, $s0, 0x3620
    ctx->pc = 0x243194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13856));
    // 0x243198: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x243198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24319c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24319cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2431a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2431a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2431a4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2431a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2431a8: 0x10b50011  beq         $a1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x2431A8u;
    {
        const bool branch_taken_0x2431a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        ctx->pc = 0x2431ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431A8u;
        // 0x2431ac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2431a8) {
            ctx->pc = 0x2431F0u;
            goto label_2431f0;
        }
    }
    ctx->pc = 0x2431B0u;
    // 0x2431b0: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x2431b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2431b4: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2431B4u;
    SET_GPR_U32(ctx, 31, 0x2431BCu);
    ctx->pc = 0x2431B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431B4u;
    // 0x2431b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2431B4u, 0x2431BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2431BCu;
label_2431bc:
    // 0x2431bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2431BCu;
    {
        const bool branch_taken_0x2431bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2431C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431BCu;
        // 0x2431c0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2431bc) {
            ctx->pc = 0x2431F0u;
            goto label_2431f0;
        }
    }
    ctx->pc = 0x2431C4u;
label_2431c4:
    // 0x2431c4: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x2431c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2431c8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2431c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2431cc: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x2431ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x2431d0: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x2431d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x2431d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2431d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2431d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2431d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2431dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2431dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2431e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2431E0u;
    {
        const bool branch_taken_0x2431e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2431E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431E0u;
        // 0x2431e4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2431e0) {
            ctx->pc = 0x2431ECu;
            goto label_2431ec;
        }
    }
    ctx->pc = 0x2431E8u;
label_2431e8:
    // 0x2431e8: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x2431e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
label_2431ec:
    // 0x2431ec: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2431ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2431f0:
    // 0x2431f0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2431f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2431f4: 0x2823818  mult        $a3, $s4, $v0
    ctx->pc = 0x2431f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2431f8: 0x24682fe0  addiu       $t0, $v1, 0x2FE0
    ctx->pc = 0x2431f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 12256));
    // 0x2431fc: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2431fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x243200: 0x26043620  addiu       $a0, $s0, 0x3620
    ctx->pc = 0x243200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13856));
    // 0x243204: 0x8ca60060  lw          $a2, 0x60($a1)
    ctx->pc = 0x243204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x243208: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x243208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x24320c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x24320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x243210: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x243214: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x243214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x243218: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x243218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24321c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x24321cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x243220: 0x10c50019  beq         $a2, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x243220u;
    {
        const bool branch_taken_0x243220 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x243224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243220u;
        // 0x243224: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243220) {
            ctx->pc = 0x243288u;
            goto label_243288;
        }
    }
    ctx->pc = 0x243228u;
    // 0x243228: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x243228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24322c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x24322cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x243230: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x243230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x243234: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x243234u;
    {
        const bool branch_taken_0x243234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243234u;
        // 0x243238: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243234) {
            ctx->pc = 0x243284u;
            goto label_243284;
        }
    }
    ctx->pc = 0x24323Cu;
    // 0x24323c: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24323Cu;
    {
        const bool branch_taken_0x24323c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x243240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24323Cu;
        // 0x243240: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24323c) {
            ctx->pc = 0x243284u;
            goto label_243284;
        }
    }
    ctx->pc = 0x243244u;
    // 0x243244: 0x26c43710  addiu       $a0, $s6, 0x3710
    ctx->pc = 0x243244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x243248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24324c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24324cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243250: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243254: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x243258: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x243258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24325c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243260: 0xc09829e  jal         func_260A78
    ctx->pc = 0x243260u;
    SET_GPR_U32(ctx, 31, 0x243268u);
    ctx->pc = 0x243264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243260u;
    // 0x243264: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x243260u, 0x243268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243268u;
label_243268:
    // 0x243268: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x243268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24326c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24326cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x243270: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x243270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x243274: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x243274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x243278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24327c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x243280: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x243280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_243284:
    // 0x243284: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x243284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_243288:
    // 0x243288: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x243288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24328c: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x24328cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x243290: 0x24832fe0  addiu       $v1, $a0, 0x2FE0
    ctx->pc = 0x243290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12256));
    // 0x243294: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x243294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x243298: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24329c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x24329cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2432a0: 0x14850014  bne         $a0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2432A0u;
    {
        const bool branch_taken_0x2432a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2432A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432A0u;
        // 0x2432a4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432a0) {
            ctx->pc = 0x2432F4u;
            goto label_2432f4;
        }
    }
    ctx->pc = 0x2432A8u;
    // 0x2432a8: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x2432a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2432ac: 0x26c33710  addiu       $v1, $s6, 0x3710
    ctx->pc = 0x2432acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 14096));
    // 0x2432b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2432b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2432b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2432b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2432b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2432b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2432bc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2432bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2432c0: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2432C0u;
    {
        const bool branch_taken_0x2432c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2432C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432C0u;
        // 0x2432c4: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432c0) {
            ctx->pc = 0x2432F4u;
            goto label_2432f4;
        }
    }
    ctx->pc = 0x2432C8u;
    // 0x2432c8: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2432c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2432cc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2432ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2432d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2432d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2432d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2432d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2432d8: 0x24843740  addiu       $a0, $a0, 0x3740
    ctx->pc = 0x2432d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14144));
    // 0x2432dc: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2432dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x2432e0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2432e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2432e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2432e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2432e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2432e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2432ec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2432ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2432f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2432f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2432f4:
    // 0x2432f4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2432f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2432f8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2432f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2432fc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2432fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243300: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x243300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243304: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x243304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243308: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x243308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24330c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24330cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243310: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x243310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243318: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x243318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24331c: 0x3e00008  jr          $ra
    ctx->pc = 0x24331Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24331Cu;
        // 0x243320: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24331Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243324u;
}
