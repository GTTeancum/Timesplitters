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

// Function: __kernel_rem_pio2f
// Address: 0x2db1d0 - 0x2dbb1c
void ps2___kernel_rem_pio2f_0x2db1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_rem_pio2f_0x2db1d0");
#endif

    switch (ctx->pc) {
        case 0x2db280u: goto label_2db280;
        case 0x2db2f0u: goto label_2db2f0;
        case 0x2db310u: goto label_2db310;
        case 0x2db36cu: goto label_2db36c;
        case 0x2db3a0u: goto label_2db3a0;
        case 0x2db3e8u: goto label_2db3e8;
        case 0x2db400u: goto label_2db400;
        case 0x2db4d0u: goto label_2db4d0;
        case 0x2db574u: goto label_2db574;
        case 0x2db5a0u: goto label_2db5a0;
        case 0x2db5e0u: goto label_2db5e0;
        case 0x2db628u: goto label_2db628;
        case 0x2db668u: goto label_2db668;
        case 0x2db6f8u: goto label_2db6f8;
        case 0x2db724u: goto label_2db724;
        case 0x2db7b4u: goto label_2db7b4;
        case 0x2db7d8u: goto label_2db7d8;
        case 0x2db810u: goto label_2db810;
        case 0x2db838u: goto label_2db838;
        case 0x2db8f0u: goto label_2db8f0;
        case 0x2db940u: goto label_2db940;
        case 0x2db990u: goto label_2db990;
        case 0x2db9e0u: goto label_2db9e0;
        case 0x2dba30u: goto label_2dba30;
        case 0x2dba88u: goto label_2dba88;
        default: break;
    }

    ctx->pc = 0x2db1d0u;

    // 0x2db1d0: 0x24ccfffd  addiu       $t4, $a2, -0x3
    ctx->pc = 0x2db1d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x2db1d4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2db1d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2db1d8: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2db1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x2db1dc: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2db1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2db1e0: 0x16c502a  slt         $t2, $t3, $t4
    ctx->pc = 0x2db1e0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2db1e4: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x2db1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x2db1e8: 0x18a100b  movn        $v0, $t4, $t2
    ctx->pc = 0x2db1e8u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x2db1ec: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x2db1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x2db1f0: 0x2b0c3  sra         $s6, $v0, 3
    ctx->pc = 0x2db1f0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2db1f4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2db1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2db1f8: 0x2463b060  addiu       $v1, $v1, -0x4FA0
    ctx->pc = 0x2db1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946912));
    // 0x2db1fc: 0x176582a  slt         $t3, $t3, $s6
    ctx->pc = 0x2db1fcu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2db200: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2db200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2db204: 0xffb701d0  sd          $s7, 0x1D0($sp)
    ctx->pc = 0x2db204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 23));
    // 0x2db208: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x2db208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x2db20c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2db20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db210: 0xffb10170  sd          $s1, 0x170($sp)
    ctx->pc = 0x2db210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 17));
    // 0x2db214: 0xbb00a  movz        $s6, $zero, $t3
    ctx->pc = 0x2db214u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x2db218: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x2db218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x2db21c: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x2db21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2db220: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x2db220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x2db224: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2db224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2db228: 0xffb501b0  sd          $s5, 0x1B0($sp)
    ctx->pc = 0x2db228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 21));
    // 0x2db22c: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x2db22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2db230: 0xffb30190  sd          $s3, 0x190($sp)
    ctx->pc = 0x2db230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 19));
    // 0x2db234: 0xc39023  subu        $s2, $a2, $v1
    ctx->pc = 0x2db234u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2db238: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x2db238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x2db23c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2db23cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db240: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x2db240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2db244: 0x2d12823  subu        $a1, $s6, $s1
    ctx->pc = 0x2db244u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2db248: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x2db248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x2db24c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2db24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db250: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2db250u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db254: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x2db254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x2db258: 0x2343821  addu        $a3, $s1, $s4
    ctx->pc = 0x2db258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2db25c: 0x4e00019  bltz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DB25Cu;
    {
        const bool branch_taken_0x2db25c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2DB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB25Cu;
        // 0x2db260: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db25c) {
            ctx->pc = 0x2DB2C4u;
            goto label_2db2c4;
        }
    }
    ctx->pc = 0x2DB264u;
    // 0x2db264: 0x2a820000  slti        $v0, $s4, 0x0
    ctx->pc = 0x2db264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2db268: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x2db268u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2db26c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x2db26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x2db270: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x2db270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2db274: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x2db274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x2db278: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x2db278u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2db27c: 0x0  nop
    ctx->pc = 0x2db27cu;
    // NOP
label_2db280:
    // 0x2db280: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2db280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db284: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB284u;
    {
        const bool branch_taken_0x2db284 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2DB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB284u;
        // 0x2db288: 0x1221821  addu        $v1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db284) {
            ctx->pc = 0x2DB2A8u;
            goto label_2db2a8;
        }
    }
    ctx->pc = 0x2DB28Cu;
    // 0x2db28c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x2db28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2db290: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2db290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2db294: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2db294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2db298: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2db298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db29c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2db29cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2db2a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB2A0u;
    {
        const bool branch_taken_0x2db2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2A0u;
        // 0x2db2a4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2a0) {
            ctx->pc = 0x2DB2ACu;
            goto label_2db2ac;
        }
    }
    ctx->pc = 0x2DB2A8u;
label_2db2a8:
    // 0x2db2a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2db2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2db2ac:
    // 0x2db2ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2db2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2db2b0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2db2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2db2b4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2DB2B4u;
    {
        const bool branch_taken_0x2db2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2B4u;
        // 0x2db2b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2b4) {
            ctx->pc = 0x2DB280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB2BCu;
    // 0x2db2bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB2BCu;
    {
        const bool branch_taken_0x2db2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2BCu;
        // 0x2db2c0: 0x8fa80154  lw          $t0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2bc) {
            ctx->pc = 0x2DB2E0u;
            goto label_2db2e0;
        }
    }
    ctx->pc = 0x2DB2C4u;
label_2db2c4:
    // 0x2db2c4: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x2db2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2db2c8: 0x2a850000  slti        $a1, $s4, 0x0
    ctx->pc = 0x2db2c8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2db2cc: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x2db2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x2db2d0: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x2db2d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2db2d4: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x2db2d4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2db2d8: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x2db2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x2db2dc: 0x8fa80154  lw          $t0, 0x154($sp)
    ctx->pc = 0x2db2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_2db2e0:
    // 0x2db2e0: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DB2E0u;
    {
        const bool branch_taken_0x2db2e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2E0u;
        // 0x2db2e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2e0) {
            ctx->pc = 0x2DB368u;
            goto label_2db368;
        }
    }
    ctx->pc = 0x2DB2E8u;
    // 0x2db2e8: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x2db2e8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2db2ec: 0x0  nop
    ctx->pc = 0x2db2ecu;
    // NOP
label_2db2f0:
    // 0x2db2f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2db2f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db2f4: 0x15600015  bnez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB2F4u;
    {
        const bool branch_taken_0x2db2f4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2F4u;
        // 0x2db2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2f4) {
            ctx->pc = 0x2DB34Cu;
            goto label_2db34c;
        }
    }
    ctx->pc = 0x2DB2FCu;
    // 0x2db2fc: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x2db2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2db300: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2db300u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db304: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x2db304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2db308: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x2db308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2db30c: 0x0  nop
    ctx->pc = 0x2db30cu;
    // NOP
label_2db310:
    // 0x2db310: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x2db310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2db314: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x2db314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2db318: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2db318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2db31c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db320: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2db320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2db324: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2db324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2db328: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2db328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db32c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2db32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2db330: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2db330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db334: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x2db334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2db338: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2db338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2db33c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DB33Cu;
    {
        const bool branch_taken_0x2db33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB33Cu;
        // 0x2db340: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db33c) {
            ctx->pc = 0x2DB310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db310;
        }
    }
    ctx->pc = 0x2DB344u;
    // 0x2db344: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB344u;
    {
        const bool branch_taken_0x2db344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB344u;
        // 0x2db348: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db344) {
            ctx->pc = 0x2DB358u;
            goto label_2db358;
        }
    }
    ctx->pc = 0x2DB34Cu;
label_2db34c:
    // 0x2db34c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x2db34cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2db350: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2db350u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db354: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x2db354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_2db358:
    // 0x2db358: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2db358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db35c: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x2db35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2db360: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2DB360u;
    {
        const bool branch_taken_0x2db360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB360u;
        // 0x2db364: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db360) {
            ctx->pc = 0x2DB2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db2f0;
        }
    }
    ctx->pc = 0x2DB368u;
label_2db368:
    // 0x2db368: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2db368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2db36c:
    // 0x2db36c: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x2db36cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2db370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2db370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db374: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x2db374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x2db378: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DB378u;
    {
        const bool branch_taken_0x2db378 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2DB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB378u;
        // 0x2db37c: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db378) {
            ctx->pc = 0x2DB3DCu;
            goto label_2db3dc;
        }
    }
    ctx->pc = 0x2DB380u;
    // 0x2db380: 0x27c2fffc  addiu       $v0, $fp, -0x4
    ctx->pc = 0x2db380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x2db384: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2db384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2db388: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2db388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2db38c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2db38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2db390: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2db390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2db394: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x2db394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2db398: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2db398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db39c: 0x0  nop
    ctx->pc = 0x2db39cu;
    // NOP
label_2db3a0:
    // 0x2db3a0: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x2db3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x2db3a4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2db3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db3a8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2db3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2db3ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2db3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2db3b0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2db3b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2db3b4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2db3b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2db3b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2db3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db3bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2db3bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2db3c0: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x2db3c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2db3c4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2db3c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2db3c8: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x2db3c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2db3cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2db3ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2db3d0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2db3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2db3d4: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2DB3D4u;
    {
        const bool branch_taken_0x2db3d4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2DB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3D4u;
        // 0x2db3d8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3d4) {
            ctx->pc = 0x2DB3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db3a0;
        }
    }
    ctx->pc = 0x2DB3DCu;
label_2db3dc:
    // 0x2db3dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2db3dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2db3e0: 0xc0b7184  jal         func_2DC610
    ctx->pc = 0x2DB3E0u;
    SET_GPR_U32(ctx, 31, 0x2DB3E8u);
    ctx->pc = 0x2DB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3E0u;
    // 0x2db3e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC610u, 0x2DB3E0u, 0x2DB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3E8u;
label_2db3e8:
    // 0x2db3e8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x2db3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x2db3ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2db3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2db3f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2db3f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2db3f4: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x2db3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x2db3f8: 0xc0b5cac  jal         func_2D72B0
    ctx->pc = 0x2DB3F8u;
    SET_GPR_U32(ctx, 31, 0x2DB400u);
    ctx->pc = 0x2DB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3F8u;
    // 0x2db3fc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D72B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D72B0u, 0x2DB3F8u, 0x2DB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB400u;
label_2db400:
    // 0x2db400: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2db400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2db404: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2db404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db408: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2db408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2db40c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2db40cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2db410: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2db410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2db414: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x2db414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x2db418: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2db418u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db41c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2db41cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2db420: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DB420u;
    {
        const bool branch_taken_0x2db420 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2DB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB420u;
        // 0x2db424: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db420) {
            ctx->pc = 0x2DB468u;
            goto label_2db468;
        }
    }
    ctx->pc = 0x2DB428u;
    // 0x2db428: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2db428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2db42c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2db42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2db430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db434: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x2db434u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2db438: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x2db438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2db43c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db440: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2db440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db444: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x2db444u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2db448: 0x623007  srav        $a2, $v0, $v1
    ctx->pc = 0x2db448u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2db44c: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x2db44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x2db450: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x2db450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2db454: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2db454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db458: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x2db458u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2db45c: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x2db45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x2db460: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DB460u;
    {
        const bool branch_taken_0x2db460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB460u;
        // 0x2db464: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db460) {
            ctx->pc = 0x2DB4A4u;
            goto label_2db4a4;
        }
    }
    ctx->pc = 0x2DB468u;
label_2db468:
    // 0x2db468: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB468u;
    {
        const bool branch_taken_0x2db468 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB468u;
        // 0x2db46c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db468) {
            ctx->pc = 0x2DB488u;
            goto label_2db488;
        }
    }
    ctx->pc = 0x2DB470u;
    // 0x2db470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db474: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2db474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2db478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2db478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db47c: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x2db47cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x2db480: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB480u;
    {
        const bool branch_taken_0x2db480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB480u;
        // 0x2db484: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db480) {
            ctx->pc = 0x2DB4A4u;
            goto label_2db4a4;
        }
    }
    ctx->pc = 0x2DB488u;
label_2db488:
    // 0x2db488: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2db488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2db48c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db490: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2db490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db494: 0x0  nop
    ctx->pc = 0x2db494u;
    // NOP
    // 0x2db498: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB498u;
    {
        const bool branch_taken_0x2db498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB498u;
        // 0x2db49c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db498) {
            ctx->pc = 0x2DB4A4u;
            goto label_2db4a4;
        }
    }
    ctx->pc = 0x2DB4A0u;
    // 0x2db4a0: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x2db4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_2db4a4:
    // 0x2db4a4: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x2db4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2db4a8: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DB4A8u;
    {
        const bool branch_taken_0x2db4a8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2db4a8) {
            ctx->pc = 0x2DB578u;
            goto label_2db578;
        }
    }
    ctx->pc = 0x2DB4B0u;
    // 0x2db4b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2db4b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2db4b4: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DB4B4u;
    {
        const bool branch_taken_0x2db4b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2DB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4B4u;
        // 0x2db4b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4b4) {
            ctx->pc = 0x2DB4FCu;
            goto label_2db4fc;
        }
    }
    ctx->pc = 0x2DB4BCu;
    // 0x2db4bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2db4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2db4c0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2db4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2db4c4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2db4c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2db4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4cc: 0x0  nop
    ctx->pc = 0x2db4ccu;
    // NOP
label_2db4d0:
    // 0x2db4d0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB4D0u;
    {
        const bool branch_taken_0x2db4d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4D0u;
        // 0x2db4d4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4d0) {
            ctx->pc = 0x2DB4E8u;
            goto label_2db4e8;
        }
    }
    ctx->pc = 0x2DB4D8u;
    // 0x2db4d8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB4D8u;
    {
        const bool branch_taken_0x2db4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4D8u;
        // 0x2db4dc: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4d8) {
            ctx->pc = 0x2DB4F0u;
            goto label_2db4f0;
        }
    }
    ctx->pc = 0x2DB4E0u;
    // 0x2db4e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB4E0u;
    {
        const bool branch_taken_0x2db4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4E0u;
        // 0x2db4e4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4e0) {
            ctx->pc = 0x2DB4ECu;
            goto label_2db4ec;
        }
    }
    ctx->pc = 0x2DB4E8u;
label_2db4e8:
    // 0x2db4e8: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x2db4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2db4ec:
    // 0x2db4ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2db4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2db4f0:
    // 0x2db4f0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2db4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2db4f4: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DB4F4u;
    {
        const bool branch_taken_0x2db4f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4F4u;
        // 0x2db4f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4f4) {
            ctx->pc = 0x2DB4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db4d0;
        }
    }
    ctx->pc = 0x2DB4FCu;
label_2db4fc:
    // 0x2db4fc: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DB4FCu;
    {
        const bool branch_taken_0x2db4fc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2DB500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4FCu;
        // 0x2db500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4fc) {
            ctx->pc = 0x2DB54Cu;
            goto label_2db54c;
        }
    }
    ctx->pc = 0x2DB504u;
    // 0x2db504: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB504u;
    {
        const bool branch_taken_0x2db504 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DB508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB504u;
        // 0x2db508: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db504) {
            ctx->pc = 0x2DB51Cu;
            goto label_2db51c;
        }
    }
    ctx->pc = 0x2DB50Cu;
    // 0x2db50c: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB50Cu;
    {
        const bool branch_taken_0x2db50c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB50Cu;
        // 0x2db510: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db50c) {
            ctx->pc = 0x2DB534u;
            goto label_2db534;
        }
    }
    ctx->pc = 0x2DB514u;
    // 0x2db514: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DB514u;
    {
        const bool branch_taken_0x2db514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db514) {
            ctx->pc = 0x2DB554u;
            goto label_2db554;
        }
    }
    ctx->pc = 0x2DB51Cu;
label_2db51c:
    // 0x2db51c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2db51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2db520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db524: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x2db524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2db528: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2db528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2db52c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB52Cu;
    {
        const bool branch_taken_0x2db52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB52Cu;
        // 0x2db530: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db52c) {
            ctx->pc = 0x2DB548u;
            goto label_2db548;
        }
    }
    ctx->pc = 0x2DB534u;
label_2db534:
    // 0x2db534: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2db534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2db538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db53c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x2db53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2db540: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2db540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2db544: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2db544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_2db548:
    // 0x2db548: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2db548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2db54c:
    // 0x2db54c: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x2db54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2db550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2db550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2db554:
    // 0x2db554: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB554u;
    {
        const bool branch_taken_0x2db554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db554) {
            ctx->pc = 0x2DB578u;
            goto label_2db578;
        }
    }
    ctx->pc = 0x2DB55Cu;
    // 0x2db55c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2db55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2db560: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2db560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2db564: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB564u;
    {
        const bool branch_taken_0x2db564 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB564u;
        // 0x2db568: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db564) {
            ctx->pc = 0x2DB578u;
            goto label_2db578;
        }
    }
    ctx->pc = 0x2DB56Cu;
    // 0x2db56c: 0xc0b7184  jal         func_2DC610
    ctx->pc = 0x2DB56Cu;
    SET_GPR_U32(ctx, 31, 0x2DB574u);
    ctx->pc = 0x2DB570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB56Cu;
    // 0x2db570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC610u, 0x2DB56Cu, 0x2DB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB574u;
label_2db574:
    // 0x2db574: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2db574u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2db578:
    // 0x2db578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db57c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2db57cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db580: 0x0  nop
    ctx->pc = 0x2db580u;
    // NOP
    // 0x2db584: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x2DB584u;
    {
        const bool branch_taken_0x2db584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB584u;
        // 0x2db588: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db584) {
            ctx->pc = 0x2DB6D4u;
            goto label_2db6d4;
        }
    }
    ctx->pc = 0x2DB58Cu;
    // 0x2db58c: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x2db58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2db590: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DB590u;
    {
        const bool branch_taken_0x2db590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB590u;
        // 0x2db594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db590) {
            ctx->pc = 0x2DB5BCu;
            goto label_2db5bc;
        }
    }
    ctx->pc = 0x2DB598u;
    // 0x2db598: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2db598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db59c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x2db59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2db5a0:
    // 0x2db5a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2db5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2db5a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2db5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2db5a8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2db5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2db5ac: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x2db5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2db5b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2db5b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2db5b4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB5B4u;
    {
        const bool branch_taken_0x2db5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5b4) {
            ctx->pc = 0x2DB5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db5a0;
        }
    }
    ctx->pc = 0x2DB5BCu;
label_2db5bc:
    // 0x2db5bc: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2DB5BCu;
    {
        const bool branch_taken_0x2db5bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5BCu;
        // 0x2db5c0: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5bc) {
            ctx->pc = 0x2DB6C8u;
            goto label_2db6c8;
        }
    }
    ctx->pc = 0x2DB5C4u;
    // 0x2db5c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db5c8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2db5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2db5cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2db5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db5d0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB5D0u;
    {
        const bool branch_taken_0x2db5d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5D0u;
        // 0x2db5d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5d0) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB5D8u;
    // 0x2db5d8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2db5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2db5dc: 0x0  nop
    ctx->pc = 0x2db5dcu;
    // NOP
label_2db5e0:
    // 0x2db5e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2db5e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2db5e4: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x2db5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x2db5e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db5ec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2db5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2db5f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2db5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db5f4: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB5F4u;
    {
        const bool branch_taken_0x2db5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5f4) {
            ctx->pc = 0x2DB5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db5e0;
        }
    }
    ctx->pc = 0x2DB5FCu;
    // 0x2db5fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB5FCu;
    {
        const bool branch_taken_0x2db5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5FCu;
        // 0x2db600: 0x2082021  addu        $a0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5fc) {
            ctx->pc = 0x2DB60Cu;
            goto label_2db60c;
        }
    }
    ctx->pc = 0x2DB604u;
label_2db604:
    // 0x2db604: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2db604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2db608: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x2db608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_2db60c:
    // 0x2db60c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2db60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db610: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2db610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2db614: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x2DB614u;
    {
        const bool branch_taken_0x2db614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB614u;
        // 0x2db618: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db614) {
            ctx->pc = 0x2DB36Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db36c;
        }
    }
    ctx->pc = 0x2DB61Cu;
    // 0x2db61c: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x2db61cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2db620: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x2db620u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2db624: 0x0  nop
    ctx->pc = 0x2db624u;
    // NOP
label_2db628:
    // 0x2db628: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x2db628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2db62c: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x2db62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x2db630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db634: 0x2265021  addu        $t2, $s1, $a2
    ctx->pc = 0x2db634u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2db638: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2db638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2db63c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2db63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2db640: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2db640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2db644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2db648: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2db648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2db64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2db64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db650: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2db650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db654: 0x15600013  bnez        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DB654u;
    {
        const bool branch_taken_0x2db654 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB654u;
        // 0x2db658: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db654) {
            ctx->pc = 0x2DB6A4u;
            goto label_2db6a4;
        }
    }
    ctx->pc = 0x2DB65Cu;
    // 0x2db65c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x2db65cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2db660: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2db660u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db664: 0x0  nop
    ctx->pc = 0x2db664u;
    // NOP
label_2db668:
    // 0x2db668: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x2db668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2db66c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x2db66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2db670: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2db670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2db674: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db678: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2db678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2db67c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2db67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2db680: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2db680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2db684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2db688: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2db688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db68c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x2db68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2db690: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2db690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2db694: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DB694u;
    {
        const bool branch_taken_0x2db694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB694u;
        // 0x2db698: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db694) {
            ctx->pc = 0x2DB668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db668;
        }
    }
    ctx->pc = 0x2DB69Cu;
    // 0x2db69c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB69Cu;
    {
        const bool branch_taken_0x2db69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB69Cu;
        // 0x2db6a0: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db69c) {
            ctx->pc = 0x2DB6B0u;
            goto label_2db6b0;
        }
    }
    ctx->pc = 0x2DB6A4u;
label_2db6a4:
    // 0x2db6a4: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x2db6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2db6a8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2db6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db6ac: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x2db6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_2db6b0:
    // 0x2db6b0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2db6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6b4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2db6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2db6b8: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2DB6B8u;
    {
        const bool branch_taken_0x2db6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6B8u;
        // 0x2db6bc: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db6b8) {
            ctx->pc = 0x2DB628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db628;
        }
    }
    ctx->pc = 0x2DB6C0u;
    // 0x2db6c0: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x2DB6C0u;
    {
        const bool branch_taken_0x2db6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6C0u;
        // 0x2db6c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db6c0) {
            ctx->pc = 0x2DB36Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db36c;
        }
    }
    ctx->pc = 0x2DB6C8u;
label_2db6c8:
    // 0x2db6c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db6cc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2db6ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db6d0: 0x0  nop
    ctx->pc = 0x2db6d0u;
    // NOP
label_2db6d4:
    // 0x2db6d4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2DB6D4u;
    {
        const bool branch_taken_0x2db6d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6D4u;
        // 0x2db6d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db6d4) {
            ctx->pc = 0x2DB71Cu;
            goto label_2db71c;
        }
    }
    ctx->pc = 0x2DB6DCu;
    // 0x2db6dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2db6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2db6e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2db6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2db6e4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2db6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2db6e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2db6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db6ec: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DB6ECu;
    {
        const bool branch_taken_0x2db6ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6ECu;
        // 0x2db6f0: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db6ec) {
            ctx->pc = 0x2DB7A0u;
            goto label_2db7a0;
        }
    }
    ctx->pc = 0x2DB6F4u;
    // 0x2db6f4: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x2db6f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_2db6f8:
    // 0x2db6f8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2db6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2db6fc: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x2db6fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x2db700: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2db700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2db704: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2db704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2db708: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2db708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db70c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB70Cu;
    {
        const bool branch_taken_0x2db70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db70c) {
            ctx->pc = 0x2DB6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db6f8;
        }
    }
    ctx->pc = 0x2DB714u;
    // 0x2db714: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB714u;
    {
        const bool branch_taken_0x2db714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db714) {
            ctx->pc = 0x2DB7A4u;
            goto label_2db7a4;
        }
    }
    ctx->pc = 0x2DB71Cu;
label_2db71c:
    // 0x2db71c: 0xc0b7184  jal         func_2DC610
    ctx->pc = 0x2DB71Cu;
    SET_GPR_U32(ctx, 31, 0x2DB724u);
    ctx->pc = 0x2DB720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB71Cu;
    // 0x2db720: 0x122023  negu        $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC610u, 0x2DB71Cu, 0x2DB724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB724u;
label_2db724:
    // 0x2db724: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2db724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2db728: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2db728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db72c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2db72cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2db730: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x2db730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db734: 0x0  nop
    ctx->pc = 0x2db734u;
    // NOP
    // 0x2db738: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2DB738u;
    {
        const bool branch_taken_0x2db738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB738u;
        // 0x2db73c: 0x3be2021  addu        $a0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db738) {
            ctx->pc = 0x2DB78Cu;
            goto label_2db78c;
        }
    }
    ctx->pc = 0x2DB740u;
    // 0x2db740: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2db740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2db744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db748: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2db748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2db74c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2db74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2db750: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2db750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2db754: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2db754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2db758: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x2db758u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x2db75c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2db75cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2db760: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2db760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2db764: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2db764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db768: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2db768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2db76c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x2db76cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2db770: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2db770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2db774: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2db774u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2db778: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2db778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2db77c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2db77cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2db780: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2db780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2db784: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB784u;
    {
        const bool branch_taken_0x2db784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB784u;
        // 0x2db788: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db784) {
            ctx->pc = 0x2DB7A4u;
            goto label_2db7a4;
        }
    }
    ctx->pc = 0x2DB78Cu;
label_2db78c:
    // 0x2db78c: 0x3be1021  addu        $v0, $sp, $fp
    ctx->pc = 0x2db78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
    // 0x2db790: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2db790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2db794: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2db794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2db798: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB798u;
    {
        const bool branch_taken_0x2db798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB798u;
        // 0x2db79c: 0x32710007  andi        $s1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db798) {
            ctx->pc = 0x2DB7A4u;
            goto label_2db7a4;
        }
    }
    ctx->pc = 0x2DB7A0u;
label_2db7a0:
    // 0x2db7a0: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x2db7a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_2db7a4:
    // 0x2db7a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2db7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2db7a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2db7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2db7ac: 0xc0b7184  jal         func_2DC610
    ctx->pc = 0x2DB7ACu;
    SET_GPR_U32(ctx, 31, 0x2DB7B4u);
    ctx->pc = 0x2DB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB7ACu;
    // 0x2db7b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC610u, 0x2DB7ACu, 0x2DB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB7B4u;
label_2db7b4:
    // 0x2db7b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2db7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7b8: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DB7B8u;
    {
        const bool branch_taken_0x2db7b8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2DB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7B8u;
        // 0x2db7bc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db7b8) {
            ctx->pc = 0x2DB800u;
            goto label_2db800;
        }
    }
    ctx->pc = 0x2DB7C0u;
    // 0x2db7c0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2db7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db7c4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2db7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2db7c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2db7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db7cc: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2db7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2db7d0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2db7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2db7d4: 0x0  nop
    ctx->pc = 0x2db7d4u;
    // NOP
label_2db7d8:
    // 0x2db7d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2db7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db7dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2db7dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2db7e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2db7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2db7e4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2db7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2db7e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2db7e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2db7ec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2db7ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2db7f0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2db7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2db7f4: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DB7F4u;
    {
        const bool branch_taken_0x2db7f4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2DB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7F4u;
        // 0x2db7f8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db7f4) {
            ctx->pc = 0x2DB7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db7d8;
        }
    }
    ctx->pc = 0x2DB7FCu;
    // 0x2db7fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2db7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db800:
    // 0x2db800: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DB800u;
    {
        const bool branch_taken_0x2db800 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2db800) {
            ctx->pc = 0x2DB804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB800u;
            // 0x2db804: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB8A0u;
            goto label_2db8a0;
        }
    }
    ctx->pc = 0x2DB808u;
    // 0x2db808: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2db808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2db80c: 0x0  nop
    ctx->pc = 0x2db80cu;
    // NOP
label_2db810:
    // 0x2db810: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x2db810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2db814: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2db814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db818: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DB818u;
    {
        const bool branch_taken_0x2db818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB818u;
        // 0x2db81c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db818) {
            ctx->pc = 0x2DB880u;
            goto label_2db880;
        }
    }
    ctx->pc = 0x2DB820u;
    // 0x2db820: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x2db820u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2db824: 0x5200017  bltz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DB824u;
    {
        const bool branch_taken_0x2db824 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2DB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB824u;
        // 0x2db828: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db824) {
            ctx->pc = 0x2DB884u;
            goto label_2db884;
        }
    }
    ctx->pc = 0x2DB82Cu;
    // 0x2db82c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x2db82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2db830: 0x3c0b003b  lui         $t3, 0x3B
    ctx->pc = 0x2db830u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59 << 16));
    // 0x2db834: 0x0  nop
    ctx->pc = 0x2db834u;
    // NOP
label_2db838:
    // 0x2db838: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x2db838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2db83c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x2db83cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2db840: 0x2562b070  addiu       $v0, $t3, -0x4F90
    ctx->pc = 0x2db840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294946928));
    // 0x2db844: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2db844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2db848: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2db848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2db84c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2db84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2db850: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2db850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db854: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2db854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2db858: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2db858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db85c: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x2db85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2db860: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2db860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2db864: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB864u;
    {
        const bool branch_taken_0x2db864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB864u;
        // 0x2db868: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db864) {
            ctx->pc = 0x2DB888u;
            goto label_2db888;
        }
    }
    ctx->pc = 0x2DB86Cu;
    // 0x2db86c: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x2db86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2db870: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2DB870u;
    {
        const bool branch_taken_0x2db870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB870u;
        // 0x2db874: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db870) {
            ctx->pc = 0x2DB838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db838;
        }
    }
    ctx->pc = 0x2DB878u;
    // 0x2db878: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB878u;
    {
        const bool branch_taken_0x2db878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB878u;
        // 0x2db87c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db878) {
            ctx->pc = 0x2DB890u;
            goto label_2db890;
        }
    }
    ctx->pc = 0x2DB880u;
label_2db880:
    // 0x2db880: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x2db880u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_2db884:
    // 0x2db884: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x2db884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2db888:
    // 0x2db888: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2db888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2db88c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2db88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2db890:
    // 0x2db890: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2db890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2db894: 0x4c1ffde  bgez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2DB894u;
    {
        const bool branch_taken_0x2db894 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2DB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB894u;
        // 0x2db898: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db894) {
            ctx->pc = 0x2DB810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db810;
        }
    }
    ctx->pc = 0x2DB89Cu;
    // 0x2db89c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x2db89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2db8a0:
    // 0x2db8a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB8A0u;
    {
        const bool branch_taken_0x2db8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8A0u;
        // 0x2db8a4: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8a0) {
            ctx->pc = 0x2DB8C0u;
            goto label_2db8c0;
        }
    }
    ctx->pc = 0x2DB8A8u;
    // 0x2db8a8: 0x5c80001f  bgtzl       $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2DB8A8u;
    {
        const bool branch_taken_0x2db8a8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2db8a8) {
            ctx->pc = 0x2DB8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB8A8u;
            // 0x2db8ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB928u;
            goto label_2db928;
        }
    }
    ctx->pc = 0x2DB8B0u;
    // 0x2db8b0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB8B0u;
    {
        const bool branch_taken_0x2db8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8B0u;
        // 0x2db8b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8b0) {
            ctx->pc = 0x2DB8D8u;
            goto label_2db8d8;
        }
    }
    ctx->pc = 0x2DB8B8u;
    // 0x2db8b8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2DB8B8u;
    {
        const bool branch_taken_0x2db8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8B8u;
        // 0x2db8bc: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8b8) {
            ctx->pc = 0x2DBAECu;
            goto label_2dbaec;
        }
    }
    ctx->pc = 0x2DB8C0u;
label_2db8c0:
    // 0x2db8c0: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x2db8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2db8c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2db8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db8c8: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2DB8C8u;
    {
        const bool branch_taken_0x2db8c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8C8u;
        // 0x2db8cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8c8) {
            ctx->pc = 0x2DB9CCu;
            goto label_2db9cc;
        }
    }
    ctx->pc = 0x2DB8D0u;
    // 0x2db8d0: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2DB8D0u;
    {
        const bool branch_taken_0x2db8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8D0u;
        // 0x2db8d4: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8d0) {
            ctx->pc = 0x2DBAECu;
            goto label_2dbaec;
        }
    }
    ctx->pc = 0x2DB8D8u;
label_2db8d8:
    // 0x2db8d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2db8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2db8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db8e0: 0x4c2000b  bltzl       $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB8E0u;
    {
        const bool branch_taken_0x2db8e0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2db8e0) {
            ctx->pc = 0x2DB8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB8E0u;
            // 0x2db8e4: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB910u;
            goto label_2db910;
        }
    }
    ctx->pc = 0x2DB8E8u;
    // 0x2db8e8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2db8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2db8ec: 0x0  nop
    ctx->pc = 0x2db8ecu;
    // NOP
label_2db8f0:
    // 0x2db8f0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2db8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db8f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2db8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2db8f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2db8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2db8fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2db8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db900: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2db900u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2db904: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB904u;
    {
        const bool branch_taken_0x2db904 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2db904) {
            ctx->pc = 0x2DB8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db8f0;
        }
    }
    ctx->pc = 0x2DB90Cu;
    // 0x2db90c: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2db90cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_2db910:
    // 0x2db910: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x2db910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2db914: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x2DB914u;
    {
        const bool branch_taken_0x2db914 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB914u;
        // 0x2db918: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db914) {
            ctx->pc = 0x2DBAE8u;
            goto label_2dbae8;
        }
    }
    ctx->pc = 0x2DB91Cu;
    // 0x2db91c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2db91cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2db920: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2DB920u;
    {
        const bool branch_taken_0x2db920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB920u;
        // 0x2db924: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db920) {
            ctx->pc = 0x2DBAE8u;
            goto label_2dbae8;
        }
    }
    ctx->pc = 0x2DB928u;
label_2db928:
    // 0x2db928: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2db928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db92c: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB92Cu;
    {
        const bool branch_taken_0x2db92c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2DB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB92Cu;
        // 0x2db930: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db92c) {
            ctx->pc = 0x2DB964u;
            goto label_2db964;
        }
    }
    ctx->pc = 0x2DB934u;
    // 0x2db934: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2db934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2db938: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x2db938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x2db93c: 0x0  nop
    ctx->pc = 0x2db93cu;
    // NOP
label_2db940:
    // 0x2db940: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2db940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db944: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2db944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2db948: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2db948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2db94c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2db94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db950: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2db950u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2db954: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB954u;
    {
        const bool branch_taken_0x2db954 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2db954) {
            ctx->pc = 0x2DB940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db940;
        }
    }
    ctx->pc = 0x2DB95Cu;
    // 0x2db95c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB95Cu;
    {
        const bool branch_taken_0x2db95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB95Cu;
        // 0x2db960: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db95c) {
            ctx->pc = 0x2DB96Cu;
            goto label_2db96c;
        }
    }
    ctx->pc = 0x2DB964u;
label_2db964:
    // 0x2db964: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x2db964u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x2db968: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2db968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_2db96c:
    // 0x2db96c: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x2db96cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2db970: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB970u;
    {
        const bool branch_taken_0x2db970 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db970) {
            ctx->pc = 0x2DB974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB970u;
            // 0x2db974: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB984u;
            goto label_2db984;
        }
    }
    ctx->pc = 0x2DB978u;
    // 0x2db978: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2db978u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2db97c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x2db97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2db980: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2db980u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2db984:
    // 0x2db984: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2DB984u;
    {
        const bool branch_taken_0x2db984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB984u;
        // 0x2db988: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db984) {
            ctx->pc = 0x2DB9B0u;
            goto label_2db9b0;
        }
    }
    ctx->pc = 0x2DB98Cu;
    // 0x2db98c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2db98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2db990:
    // 0x2db990: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2db990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db994: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2db994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2db998: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2db998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2db99c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2db99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db9a0: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x2db9a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2db9a4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2db9a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2db9a8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DB9A8u;
    {
        const bool branch_taken_0x2db9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db9a8) {
            ctx->pc = 0x2DB990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db990;
        }
    }
    ctx->pc = 0x2DB9B0u;
label_2db9b0:
    // 0x2db9b0: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x2db9b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2db9b4: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x2db9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2db9b8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2DB9B8u;
    {
        const bool branch_taken_0x2db9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9B8u;
        // 0x2db9bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9b8) {
            ctx->pc = 0x2DBAE8u;
            goto label_2dbae8;
        }
    }
    ctx->pc = 0x2DB9C0u;
    // 0x2db9c0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2db9c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2db9c4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2DB9C4u;
    {
        const bool branch_taken_0x2db9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9C4u;
        // 0x2db9c8: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9c4) {
            ctx->pc = 0x2DBAE8u;
            goto label_2dbae8;
        }
    }
    ctx->pc = 0x2DB9CCu;
label_2db9cc:
    // 0x2db9cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2db9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9d0: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DB9D0u;
    {
        const bool branch_taken_0x2db9d0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2DB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9D0u;
        // 0x2db9d4: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9d0) {
            ctx->pc = 0x2DBA20u;
            goto label_2dba20;
        }
    }
    ctx->pc = 0x2DB9D8u;
    // 0x2db9d8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2db9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2db9dc: 0x0  nop
    ctx->pc = 0x2db9dcu;
    // NOP
label_2db9e0:
    // 0x2db9e0: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x2db9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2db9e4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2db9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2db9e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2db9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2db9ec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2db9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2db9f0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2db9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2db9f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2db9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db9f8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2db9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db9fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2db9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba00: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2dba00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dba04: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2dba04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2dba08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2dba08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dba0c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2dba0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2dba10: 0x1cc0fff3  bgtz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x2DBA10u;
    {
        const bool branch_taken_0x2dba10 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2DBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA10u;
        // 0x2dba14: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba10) {
            ctx->pc = 0x2DB9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db9e0;
        }
    }
    ctx->pc = 0x2DBA18u;
    // 0x2dba18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dba18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba1c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2dba1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_2dba20:
    // 0x2dba20: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DBA20u;
    {
        const bool branch_taken_0x2dba20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dba20) {
            ctx->pc = 0x2DBA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBA20u;
            // 0x2dba24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBA70u;
            goto label_2dba70;
        }
    }
    ctx->pc = 0x2DBA28u;
    // 0x2dba28: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2dba28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dba2c: 0x0  nop
    ctx->pc = 0x2dba2cu;
    // NOP
label_2dba30:
    // 0x2dba30: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x2dba30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2dba34: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2dba34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2dba38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2dba38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2dba3c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2dba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2dba40: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2dba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2dba44: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2dba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dba48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2dba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dba4c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2dba4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba50: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x2dba50u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dba54: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2dba54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dba58: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2dba58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2dba5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2dba5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dba60: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2dba60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2dba64: 0x10a0fff2  beqz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2DBA64u;
    {
        const bool branch_taken_0x2dba64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA64u;
        // 0x2dba68: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba64) {
            ctx->pc = 0x2DBA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dba30;
        }
    }
    ctx->pc = 0x2DBA6Cu;
    // 0x2dba6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dba6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dba70:
    // 0x2dba70: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2dba70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dba74: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2dba74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dba78: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DBA78u;
    {
        const bool branch_taken_0x2dba78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA78u;
        // 0x2dba7c: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba78) {
            ctx->pc = 0x2DBAB0u;
            goto label_2dbab0;
        }
    }
    ctx->pc = 0x2DBA80u;
    // 0x2dba80: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2dba80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dba84: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2dba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dba88:
    // 0x2dba88: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2dba88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2dba8c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2dba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2dba90: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2dba90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2dba94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2dba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dba98: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x2dba98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dba9c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2dba9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2dbaa0: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DBAA0u;
    {
        const bool branch_taken_0x2dbaa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbaa0) {
            ctx->pc = 0x2DBA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dba88;
        }
    }
    ctx->pc = 0x2DBAA8u;
    // 0x2dbaa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBAA8u;
    {
        const bool branch_taken_0x2dbaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAA8u;
        // 0x2dbaac: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbaa8) {
            ctx->pc = 0x2DBAB8u;
            goto label_2dbab8;
        }
    }
    ctx->pc = 0x2DBAB0u;
label_2dbab0:
    // 0x2dbab0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2dbab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbab4: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x2dbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_2dbab8:
    // 0x2dbab8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBAB8u;
    {
        const bool branch_taken_0x2dbab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbab8) {
            ctx->pc = 0x2DBABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBAB8u;
            // 0x2dbabc: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBAD0u;
            goto label_2dbad0;
        }
    }
    ctx->pc = 0x2DBAC0u;
    // 0x2dbac0: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x2dbac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2dbac4: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x2dbac4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2dbac8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DBAC8u;
    {
        const bool branch_taken_0x2dbac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAC8u;
        // 0x2dbacc: 0xe6e10004  swc1        $f1, 0x4($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbac8) {
            ctx->pc = 0x2DBAE4u;
            goto label_2dbae4;
        }
    }
    ctx->pc = 0x2DBAD0u;
label_2dbad0:
    // 0x2dbad0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2dbad0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2dbad4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2dbad4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2dbad8: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x2dbad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2dbadc: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2dbadcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2dbae0: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x2dbae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_2dbae4:
    // 0x2dbae4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dbae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dbae8:
    // 0x2dbae8: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x2dbae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_2dbaec:
    // 0x2dbaec: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x2dbaecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2dbaf0: 0xdfb701d0  ld          $s7, 0x1D0($sp)
    ctx->pc = 0x2dbaf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2dbaf4: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x2dbaf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2dbaf8: 0xdfb501b0  ld          $s5, 0x1B0($sp)
    ctx->pc = 0x2dbaf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2dbafc: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x2dbafcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2dbb00: 0xdfb30190  ld          $s3, 0x190($sp)
    ctx->pc = 0x2dbb00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2dbb04: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x2dbb04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2dbb08: 0xdfb10170  ld          $s1, 0x170($sp)
    ctx->pc = 0x2dbb08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dbb0c: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x2dbb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2dbb10: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x2dbb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dbb14: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB14u;
        // 0x2dbb18: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBB1Cu;
}
