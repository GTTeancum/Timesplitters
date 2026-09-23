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

// Function: makedialog
// Address: 0x251f10 - 0x25259c
void makedialog_0x251f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makedialog_0x251f10");
#endif

    switch (ctx->pc) {
        case 0x251f78u: goto label_251f78;
        case 0x251fa8u: goto label_251fa8;
        case 0x25203cu: goto label_25203c;
        case 0x2520d8u: goto label_2520d8;
        case 0x25215cu: goto label_25215c;
        case 0x2521c8u: goto label_2521c8;
        case 0x252240u: goto label_252240;
        case 0x2522d8u: goto label_2522d8;
        case 0x252370u: goto label_252370;
        case 0x2523b0u: goto label_2523b0;
        case 0x2523c8u: goto label_2523c8;
        case 0x2523f8u: goto label_2523f8;
        case 0x25244cu: goto label_25244c;
        case 0x2524acu: goto label_2524ac;
        case 0x2524d0u: goto label_2524d0;
        case 0x252500u: goto label_252500;
        default: break;
    }

    ctx->pc = 0x251f10u;

    // 0x251f10: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x251f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x251f14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x251f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x251f18: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x251f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x251f1c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x251f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x251f20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x251f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f24: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x251f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x251f28: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x251f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x251f2c: 0x3c1e001b  lui         $fp, 0x1B
    ctx->pc = 0x251f2cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)27 << 16));
    // 0x251f30: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x251f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x251f34: 0x3c1700ad  lui         $s7, 0xAD
    ctx->pc = 0x251f34u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)173 << 16));
    // 0x251f38: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x251f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x251f3c: 0x3c16000f  lui         $s6, 0xF
    ctx->pc = 0x251f3cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)15 << 16));
    // 0x251f40: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x251f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x251f44: 0x3c150035  lui         $s5, 0x35
    ctx->pc = 0x251f44u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)53 << 16));
    // 0x251f48: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x251f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x251f4c: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x251f4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x251f50: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x251f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x251f54: 0x247365e0  addiu       $s3, $v1, 0x65E0
    ctx->pc = 0x251f54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 26080));
    // 0x251f58: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x251f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x251f5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x251f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f60: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x251f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x251f64: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x251f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x251f68: 0xafb20064  sw          $s2, 0x64($sp)
    ctx->pc = 0x251f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 18));
    // 0x251f6c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x251F6Cu;
    {
        const bool branch_taken_0x251f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251f6c) {
            ctx->pc = 0x251F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251F6Cu;
            // 0x251f70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x251F74u;
            goto label_251f74;
        }
    }
    ctx->pc = 0x251F74u;
label_251f74:
    // 0x251f74: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x251f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_251f78:
    // 0x251f78: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x251f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x251f7c: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x251f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x251f80: 0x2629000a  addiu       $t1, $s1, 0xA
    ctx->pc = 0x251f80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x251f84: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x251f84u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x251f88: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x251f88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x251f8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f90: 0x1e3403  sra         $a2, $fp, 16
    ctx->pc = 0x251f90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 30), 16));
    // 0x251f94: 0x173c03  sra         $a3, $s7, 16
    ctx->pc = 0x251f94u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 23), 16));
    // 0x251f98: 0x164403  sra         $t0, $s6, 16
    ctx->pc = 0x251f98u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 22), 16));
    // 0x251f9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x251f9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fa0: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x251FA0u;
    SET_GPR_U32(ctx, 31, 0x251FA8u);
    ctx->pc = 0x251FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FA0u;
    // 0x251fa4: 0x244bfb00  addiu       $t3, $v0, -0x500 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x251FA0u, 0x251FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FA8u;
label_251fa8:
    // 0x251fa8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x251fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x251fac: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x251facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x251fb0: 0x24c62c18  addiu       $a2, $a2, 0x2C18
    ctx->pc = 0x251fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x251fb4: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x251fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x251fb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x251fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x251fbc: 0x8f85a0d4  lw          $a1, -0x5F2C($gp)
    ctx->pc = 0x251fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
    // 0x251fc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x251fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x251fc4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x251fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x251fc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x251fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251fcc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x251fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x251fd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x251fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251fd4: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x251fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x251fd8: 0x10b10002  beq         $a1, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x251FD8u;
    {
        const bool branch_taken_0x251fd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x251FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FD8u;
        // 0x251fdc: 0x26a271e0  addiu       $v0, $s5, 0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fd8) {
            ctx->pc = 0x251FE4u;
            goto label_251fe4;
        }
    }
    ctx->pc = 0x251FE0u;
    // 0x251fe0: 0x268271f0  addiu       $v0, $s4, 0x71F0
    ctx->pc = 0x251fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29168));
label_251fe4:
    // 0x251fe4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x251fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x251fe8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x251fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x251fec: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x251fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x251ff0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x251ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x251ff4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x251ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x251ff8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x251FF8u;
    {
        const bool branch_taken_0x251ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FF8u;
        // 0x251ffc: 0x261000b7  addiu       $s0, $s0, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ff8) {
            ctx->pc = 0x251F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251f78;
        }
    }
    ctx->pc = 0x252000u;
    // 0x252000: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x252000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x252004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252008: 0x24e299f0  addiu       $v0, $a3, -0x6610
    ctx->pc = 0x252008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941168));
    // 0x25200c: 0x240600b6  addiu       $a2, $zero, 0xB6
    ctx->pc = 0x25200cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x252010: 0x94450008  lhu         $a1, 0x8($v0)
    ctx->pc = 0x252010u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x3299F8u));
    // 0x252014: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x252014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252018: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x252018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x25201c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x25201cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x252020: 0x24a5ffb0  addiu       $a1, $a1, -0x50
    ctx->pc = 0x252020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
    // 0x252024: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x252024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252028: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x252028u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x25202c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x25202cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252030: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x252030u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x252034: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x252034u;
    SET_GPR_U32(ctx, 31, 0x25203Cu);
    ctx->pc = 0x252038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252034u;
    // 0x252038: 0x244bfb00  addiu       $t3, $v0, -0x500 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x252034u, 0x25203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25203Cu;
label_25203c:
    // 0x25203c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x25203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252040: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x252040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x252044: 0x8f83a224  lw          $v1, -0x5DDC($gp)
    ctx->pc = 0x252044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943268)));
    // 0x252048: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x252048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x25204c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25204Cu;
    {
        const bool branch_taken_0x25204c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x252050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25204Cu;
        // 0x252050: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25204c) {
            ctx->pc = 0x252070u;
            goto label_252070;
        }
    }
    ctx->pc = 0x252054u;
    // 0x252054: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x252054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x252058: 0x24a42c18  addiu       $a0, $a1, 0x2C18
    ctx->pc = 0x252058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x25205c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25205cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x252060: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x252060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x252064: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252068: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x252068u;
    {
        const bool branch_taken_0x252068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252068u;
        // 0x25206c: 0x8c620da8  lw          $v0, 0xDA8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252068) {
            ctx->pc = 0x252088u;
            goto label_252088;
        }
    }
    ctx->pc = 0x252070u;
label_252070:
    // 0x252070: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x252070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x252074: 0x24c42c18  addiu       $a0, $a2, 0x2C18
    ctx->pc = 0x252074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x252078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x252078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25207c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x252080: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252084: 0x8c620dac  lw          $v0, 0xDAC($v1)
    ctx->pc = 0x252084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3500)));
label_252088:
    // 0x252088: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x252088u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x25208c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x25208cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x252090: 0x261071a0  addiu       $s0, $s0, 0x71A0
    ctx->pc = 0x252090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29088));
    // 0x252094: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x252094u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x252098: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x252098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x25209c: 0x24e299f0  addiu       $v0, $a3, -0x6610
    ctx->pc = 0x25209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941168));
    // 0x2520a0: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x2520a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2520a4: 0x240600b6  addiu       $a2, $zero, 0xB6
    ctx->pc = 0x2520a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x2520a8: 0x94450008  lhu         $a1, 0x8($v0)
    ctx->pc = 0x2520a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x3299F8u));
    // 0x2520ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2520acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520b0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2520b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x2520b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2520b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520b8: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x2520b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x2520bc: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x2520bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2520c0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2520c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2520c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2520c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520c8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2520c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2520cc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2520ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2520d0: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x2520D0u;
    SET_GPR_U32(ctx, 31, 0x2520D8u);
    ctx->pc = 0x2520D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520D0u;
    // 0x2520d4: 0x244bfb00  addiu       $t3, $v0, -0x500 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x2520D0u, 0x2520D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520D8u;
label_2520d8:
    // 0x2520d8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2520d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2520dc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2520dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2520e0: 0x24642c18  addiu       $a0, $v1, 0x2C18
    ctx->pc = 0x2520e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2520e4: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x2520e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x2520e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2520e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2520ec: 0x8f86a0d4  lw          $a2, -0x5F2C($gp)
    ctx->pc = 0x2520ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
    // 0x2520f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2520f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2520f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2520f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2520f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2520f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2520fc: 0x8c640dec  lw          $a0, 0xDEC($v1)
    ctx->pc = 0x2520fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3564)));
    // 0x252100: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x252100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x252104: 0x10c50113  beq         $a2, $a1, . + 4 + (0x113 << 2)
    ctx->pc = 0x252104u;
    {
        const bool branch_taken_0x252104 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x252108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252104u;
        // 0x252108: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252104) {
            ctx->pc = 0x252554u;
            goto label_252554;
        }
    }
    ctx->pc = 0x25210Cu;
    // 0x25210c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x25210cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x252110: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252110u;
    {
        const bool branch_taken_0x252110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252110u;
        // 0x252114: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252110) {
            ctx->pc = 0x252128u;
            goto label_252128;
        }
    }
    ctx->pc = 0x252118u;
    // 0x252118: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x252118u;
    {
        const bool branch_taken_0x252118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252118u;
        // 0x25211c: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252118) {
            ctx->pc = 0x252138u;
            goto label_252138;
        }
    }
    ctx->pc = 0x252120u;
    // 0x252120: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x252120u;
    {
        const bool branch_taken_0x252120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252120) {
            ctx->pc = 0x252558u;
            goto label_252558;
        }
    }
    ctx->pc = 0x252128u;
label_252128:
    // 0x252128: 0x10c2009e  beq         $a2, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x252128u;
    {
        const bool branch_taken_0x252128 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x25212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252128u;
        // 0x25212c: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252128) {
            ctx->pc = 0x2523A4u;
            goto label_2523a4;
        }
    }
    ctx->pc = 0x252130u;
    // 0x252130: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x252130u;
    {
        const bool branch_taken_0x252130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252130) {
            ctx->pc = 0x252558u;
            goto label_252558;
        }
    }
    ctx->pc = 0x252138u;
label_252138:
    // 0x252138: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x252138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25213c: 0x246323b0  addiu       $v1, $v1, 0x23B0
    ctx->pc = 0x25213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9136));
    // 0x252140: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x252140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x252144: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x252144u;
    {
        const bool branch_taken_0x252144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252144u;
        // 0x252148: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252144) {
            ctx->pc = 0x2521B8u;
            goto label_2521b8;
        }
    }
    ctx->pc = 0x25214Cu;
    // 0x25214c: 0x8f82b86c  lw          $v0, -0x4794($gp)
    ctx->pc = 0x25214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948972)));
    // 0x252150: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x252150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x252154: 0x8f8ba13c  lw          $t3, -0x5EC4($gp)
    ctx->pc = 0x252154u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
    // 0x252158: 0x26540018  addiu       $s4, $s2, 0x18
    ctx->pc = 0x252158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_25215c:
    // 0x25215c: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x25215cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x252160: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x252160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x252164: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x252164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x252168: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x252168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x25216c: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x25216cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x252170: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x252170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x252174: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x252174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x252178: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x252178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x25217c: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x25217cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252180: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x252180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252184: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x252184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252188: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x252188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25218c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x25218cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252190: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x252190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252194: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x252194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252198: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x252198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25219c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x25219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2521a0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2521a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2521a4: 0x0  nop
    ctx->pc = 0x2521a4u;
    // NOP
    // 0x2521a8: 0x1465ffec  bne         $v1, $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2521A8u;
    {
        const bool branch_taken_0x2521a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2521a8) {
            ctx->pc = 0x25215Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25215c;
        }
    }
    ctx->pc = 0x2521B0u;
    // 0x2521b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2521B0u;
    {
        const bool branch_taken_0x2521b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2521B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2521B0u;
        // 0x2521b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2521b0) {
            ctx->pc = 0x252200u;
            goto label_252200;
        }
    }
    ctx->pc = 0x2521B8u;
label_2521b8:
    // 0x2521b8: 0x8f82b86c  lw          $v0, -0x4794($gp)
    ctx->pc = 0x2521b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948972)));
    // 0x2521bc: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x2521bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2521c0: 0x8f8ba13c  lw          $t3, -0x5EC4($gp)
    ctx->pc = 0x2521c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
    // 0x2521c4: 0x26540018  addiu       $s4, $s2, 0x18
    ctx->pc = 0x2521c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2521c8:
    // 0x2521c8: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x2521c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2521cc: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x2521ccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2521d0: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x2521d0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2521d4: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x2521d4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2521d8: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x2521d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x2521dc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x2521dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x2521e0: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x2521e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x2521e4: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x2521e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x2521e8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2521e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2521ec: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2521ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2521f0: 0x0  nop
    ctx->pc = 0x2521f0u;
    // NOP
    // 0x2521f4: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2521F4u;
    {
        const bool branch_taken_0x2521f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2521f4) {
            ctx->pc = 0x2521C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2521c8;
        }
    }
    ctx->pc = 0x2521FCu;
    // 0x2521fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2521fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252200:
    // 0x252200: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x252200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x252204: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x252204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x252208: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x252208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x25220c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x25220cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x252210: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x252210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x252214: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x252214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252218: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x252218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25221c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x25221cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252220: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x252220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252224: 0x24170032  addiu       $s7, $zero, 0x32
    ctx->pc = 0x252224u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x252228: 0x24160032  addiu       $s6, $zero, 0x32
    ctx->pc = 0x252228u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x25222c: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x25222cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252230: 0x22b102a  slt         $v0, $s1, $t3
    ctx->pc = 0x252230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x252234: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x252234u;
    {
        const bool branch_taken_0x252234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252234u;
        // 0x252238: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252234) {
            ctx->pc = 0x252338u;
            goto label_252338;
        }
    }
    ctx->pc = 0x25223Cu;
    // 0x25223c: 0x3c1e0035  lui         $fp, 0x35
    ctx->pc = 0x25223cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)53 << 16));
label_252240:
    // 0x252240: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x252240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x252244: 0x27c66588  addiu       $a2, $fp, 0x6588
    ctx->pc = 0x252244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 25992));
    // 0x252248: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x252248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x25224c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25224cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252250: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x252250u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252254: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x252254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x252258: 0x171c00  sll         $v1, $s7, 16
    ctx->pc = 0x252258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x25225c: 0x162400  sll         $a0, $s6, 16
    ctx->pc = 0x25225cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x252260: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x252260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x252264: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x252264u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x252268: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x252268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25226c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252270: 0x43403  sra         $a2, $a0, 16
    ctx->pc = 0x252270u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
    // 0x252274: 0x14b202a  slt         $a0, $t2, $t3
    ctx->pc = 0x252274u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x252278: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25227c: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x25227cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x252280: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x252280u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x252284: 0xe5800a  movz        $s0, $a3, $a1
    ctx->pc = 0x252284u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    // 0x252288: 0x109843  sra         $s3, $s0, 1
    ctx->pc = 0x252288u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 16), 1));
    // 0x25228c: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x25228cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x252290: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x252290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x252294: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x252294u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x252298: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x252298u;
    {
        const bool branch_taken_0x252298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252298u;
        // 0x25229c: 0x34403  sra         $t0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252298) {
            ctx->pc = 0x2522ACu;
            goto label_2522ac;
        }
    }
    ctx->pc = 0x2522A0u;
    // 0x2522a0: 0x254200c8  addiu       $v0, $t2, 0xC8
    ctx->pc = 0x2522a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 200));
    // 0x2522a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2522A4u;
    {
        const bool branch_taken_0x2522a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522A4u;
        // 0x2522a8: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522a4) {
            ctx->pc = 0x2522B0u;
            goto label_2522b0;
        }
    }
    ctx->pc = 0x2522ACu;
label_2522ac:
    // 0x2522ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2522acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2522b0:
    // 0x2522b0: 0x14b102a  slt         $v0, $t2, $t3
    ctx->pc = 0x2522b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2522b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2522B4u;
    {
        const bool branch_taken_0x2522b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522B4u;
        // 0x2522b8: 0x384a0001  xori        $t2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522b4) {
            ctx->pc = 0x2522C8u;
            goto label_2522c8;
        }
    }
    ctx->pc = 0x2522BCu;
    // 0x2522bc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2522bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x2522c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2522C0u;
    {
        const bool branch_taken_0x2522c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522C0u;
        // 0x2522c4: 0x244b1be0  addiu       $t3, $v0, 0x1BE0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 7136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522c0) {
            ctx->pc = 0x2522CCu;
            goto label_2522cc;
        }
    }
    ctx->pc = 0x2522C8u;
label_2522c8:
    // 0x2522c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2522c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2522cc:
    // 0x2522cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2522ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2522d0: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x2522D0u;
    SET_GPR_U32(ctx, 31, 0x2522D8u);
    ctx->pc = 0x2522D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2522D0u;
    // 0x2522d4: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x2522D0u, 0x2522D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2522D8u;
label_2522d8:
    // 0x2522d8: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2522d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2522dc: 0x235001a  div         $zero, $s1, $s5
    ctx->pc = 0x2522dcu;
    { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2522e0: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2522E0u;
    {
        const bool branch_taken_0x2522e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2522e0) {
            ctx->pc = 0x2522E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2522E0u;
            // 0x2522e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2522E8u;
            goto label_2522e8;
        }
    }
    ctx->pc = 0x2522E8u;
label_2522e8:
    // 0x2522e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2522e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2522ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2522ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2522f0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2522F0u;
    {
        const bool branch_taken_0x2522f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2522F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522F0u;
        // 0x2522f4: 0x2602000a  addiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522f0) {
            ctx->pc = 0x252308u;
            goto label_252308;
        }
    }
    ctx->pc = 0x2522F8u;
    // 0x2522f8: 0x26620005  addiu       $v0, $s3, 0x5
    ctx->pc = 0x2522f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x2522fc: 0x24170032  addiu       $s7, $zero, 0x32
    ctx->pc = 0x2522fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x252300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x252300u;
    {
        const bool branch_taken_0x252300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252300u;
        // 0x252304: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252300) {
            ctx->pc = 0x25230Cu;
            goto label_25230c;
        }
    }
    ctx->pc = 0x252308u;
label_252308:
    // 0x252308: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x252308u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_25230c:
    // 0x25230c: 0x8f83a13c  lw          $v1, -0x5EC4($gp)
    ctx->pc = 0x25230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
    // 0x252310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x252310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x252314: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x252314u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252318: 0x22b102a  slt         $v0, $s1, $t3
    ctx->pc = 0x252318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x25231c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25231Cu;
    {
        const bool branch_taken_0x25231c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25231Cu;
        // 0x252320: 0x8f82b86c  lw          $v0, -0x4794($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25231c) {
            ctx->pc = 0x252334u;
            goto label_252334;
        }
    }
    ctx->pc = 0x252324u;
    // 0x252324: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x252324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x252328: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x252328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x25232c: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x25232Cu;
    {
        const bool branch_taken_0x25232c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25232c) {
            ctx->pc = 0x252330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25232Cu;
            // 0x252330: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252240;
        }
    }
    ctx->pc = 0x252334u;
label_252334:
    // 0x252334: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x252334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_252338:
    // 0x252338: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x252338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x25233c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25233cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252340: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x252340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x252344: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x252344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x252348: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x252348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x25234c: 0x248bfb00  addiu       $t3, $a0, -0x500
    ctx->pc = 0x25234cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966016));
    // 0x252350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252354: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x252354u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x252358: 0x240700de  addiu       $a3, $zero, 0xDE
    ctx->pc = 0x252358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x25235c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x25235cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x252360: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x252360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x252364: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x252364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252368: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x252368u;
    SET_GPR_U32(ctx, 31, 0x252370u);
    ctx->pc = 0x25236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252368u;
    // 0x25236c: 0x24c60032  addiu       $a2, $a2, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x252368u, 0x252370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252370u;
label_252370:
    // 0x252370: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x252370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x252374: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x252374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x252378: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x252378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x25237c: 0x24a42c18  addiu       $a0, $a1, 0x2C18
    ctx->pc = 0x25237cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x252380: 0x24c37200  addiu       $v1, $a2, 0x7200
    ctx->pc = 0x252380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29184));
    // 0x252384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x252384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x252388: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x252388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x25238c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x252390: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252394: 0x8c640db0  lw          $a0, 0xDB0($v1)
    ctx->pc = 0x252394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
    // 0x252398: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x252398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x25239c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x25239Cu;
    {
        const bool branch_taken_0x25239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25239Cu;
        // 0x2523a0: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25239c) {
            ctx->pc = 0x252554u;
            goto label_252554;
        }
    }
    ctx->pc = 0x2523A4u;
label_2523a4:
    // 0x2523a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2523a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523a8: 0x24110032  addiu       $s1, $zero, 0x32
    ctx->pc = 0x2523a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2523ac: 0x26540018  addiu       $s4, $s2, 0x18
    ctx->pc = 0x2523acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2523b0:
    // 0x2523b0: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x2523b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2523b4: 0x119c00  sll         $s3, $s1, 16
    ctx->pc = 0x2523b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2523b8: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x2523b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2523bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2523BCu;
    {
        const bool branch_taken_0x2523bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523BCu;
        // 0x2523c0: 0x3c160025  lui         $s6, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523bc) {
            ctx->pc = 0x2523CCu;
            goto label_2523cc;
        }
    }
    ctx->pc = 0x2523C4u;
    // 0x2523c4: 0x0  nop
    ctx->pc = 0x2523c4u;
    // NOP
label_2523c8:
    // 0x2523c8: 0x26540018  addiu       $s4, $s2, 0x18
    ctx->pc = 0x2523c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2523cc:
    // 0x2523cc: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x2523ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2523d0: 0x26a90040  addiu       $t1, $s5, 0x40
    ctx->pc = 0x2523d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2523d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2523d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523d8: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2523d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2523dc: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x2523dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2523e0: 0x133403  sra         $a2, $s3, 16
    ctx->pc = 0x2523e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 19), 16));
    // 0x2523e4: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x2523e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2523e8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2523e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2523ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2523ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523f0: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x2523F0u;
    SET_GPR_U32(ctx, 31, 0x2523F8u);
    ctx->pc = 0x2523F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2523F0u;
    // 0x2523f4: 0x26cb1e70  addiu       $t3, $s6, 0x1E70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 22), 7792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x2523F0u, 0x2523F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523F8u;
label_2523f8:
    // 0x2523f8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2523f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2523fc: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2523fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252400: 0x2a0200f2  slti        $v0, $s0, 0xF2
    ctx->pc = 0x252400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)242) ? 1 : 0);
    // 0x252404: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x252404u;
    {
        const bool branch_taken_0x252404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252404u;
        // 0x252408: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252404) {
            ctx->pc = 0x2523C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2523c8;
        }
    }
    ctx->pc = 0x25240Cu;
    // 0x25240c: 0x2a220092  slti        $v0, $s1, 0x92
    ctx->pc = 0x25240cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)146) ? 1 : 0);
    // 0x252410: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x252410u;
    {
        const bool branch_taken_0x252410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252410u;
        // 0x252414: 0x26540018  addiu       $s4, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252410) {
            ctx->pc = 0x2523B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2523b0;
        }
    }
    ctx->pc = 0x252418u;
    // 0x252418: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x252418u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25241c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x25241cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x252420: 0x24f1fb00  addiu       $s1, $a3, -0x500
    ctx->pc = 0x252420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966016));
    // 0x252424: 0x24502c18  addiu       $s0, $v0, 0x2C18
    ctx->pc = 0x252424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x252428: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25242c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x25242cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252430: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x252430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x252434: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x252434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x252438: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x252438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x25243c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x25243cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x252440: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x252440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252444: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x252444u;
    SET_GPR_U32(ctx, 31, 0x25244Cu);
    ctx->pc = 0x252448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252444u;
    // 0x252448: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x252444u, 0x25244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25244Cu;
label_25244c:
    // 0x25244c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x25244cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252450: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x252450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x252454: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x252454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x252458: 0x24827200  addiu       $v0, $a0, 0x7200
    ctx->pc = 0x252458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
    // 0x25245c: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x25245cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x252460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252464: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x252464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x252468: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x252468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25246c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x25246cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252470: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252474: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x252474u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x252478: 0x24050132  addiu       $a1, $zero, 0x132
    ctx->pc = 0x252478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x25247c: 0x24070118  addiu       $a3, $zero, 0x118
    ctx->pc = 0x25247cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x252480: 0x8c430db4  lw          $v1, 0xDB4($v0)
    ctx->pc = 0x252480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3508)));
    // 0x252484: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x252484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x252488: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x252488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25248c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x25248cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252490: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x252490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x252494: 0x3c160132  lui         $s6, 0x132
    ctx->pc = 0x252494u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)306 << 16));
    // 0x252498: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x252498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25249c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x25249cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2524a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524a4: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x2524A4u;
    SET_GPR_U32(ctx, 31, 0x2524ACu);
    ctx->pc = 0x2524A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2524A4u;
    // 0x2524a8: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x2524A4u, 0x2524ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2524ACu;
label_2524ac:
    // 0x2524ac: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x2524acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x2524b0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2524b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2524b4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2524b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2524b8: 0x244271d0  addiu       $v0, $v0, 0x71D0
    ctx->pc = 0x2524b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29136));
    // 0x2524bc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2524bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2524c0: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2524c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x2524c4: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x2524c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x2524c8: 0x247082c8  addiu       $s0, $v1, -0x7D38
    ctx->pc = 0x2524c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935240));
    // 0x2524cc: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x2524ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2524d0:
    // 0x2524d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2524d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x2524d4: 0x113400  sll         $a2, $s1, 16
    ctx->pc = 0x2524d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2524d8: 0x26a90064  addiu       $t1, $s5, 0x64
    ctx->pc = 0x2524d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    // 0x2524dc: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2524dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2524e0: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x2524e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2524e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2524e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524e8: 0x162c03  sra         $a1, $s6, 16
    ctx->pc = 0x2524e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 22), 16));
    // 0x2524ec: 0x24070118  addiu       $a3, $zero, 0x118
    ctx->pc = 0x2524ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2524f0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2524f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2524f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2524f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524f8: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x2524F8u;
    SET_GPR_U32(ctx, 31, 0x252500u);
    ctx->pc = 0x2524FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2524F8u;
    // 0x2524fc: 0x244bfb00  addiu       $t3, $v0, -0x500 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x2524F8u, 0x252500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252500u;
label_252500:
    // 0x252500: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x252500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x252504: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x252504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252508: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25250c: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x25250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x252510: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x252510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252514: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252518: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x252518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25251c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252520: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x252520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x252524: 0x9384a1f8  lbu         $a0, -0x5E08($gp)
    ctx->pc = 0x252524u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943224)));
    // 0x252528: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x252528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25252c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25252Cu;
    {
        const bool branch_taken_0x25252c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x252530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25252Cu;
        // 0x252530: 0x266271c0  addiu       $v0, $s3, 0x71C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 29120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25252c) {
            ctx->pc = 0x252538u;
            goto label_252538;
        }
    }
    ctx->pc = 0x252534u;
    // 0x252534: 0x268271b0  addiu       $v0, $s4, 0x71B0
    ctx->pc = 0x252534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29104));
label_252538:
    // 0x252538: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x252538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x25253c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x25253cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x252540: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x252540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x252544: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x252544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x252548: 0x2aa2000b  slti        $v0, $s5, 0xB
    ctx->pc = 0x252548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x25254c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x25254Cu;
    {
        const bool branch_taken_0x25254c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25254Cu;
        // 0x252550: 0x2631000a  addiu       $s1, $s1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25254c) {
            ctx->pc = 0x2524D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2524d0;
        }
    }
    ctx->pc = 0x252554u;
label_252554:
    // 0x252554: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x252554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_252558:
    // 0x252558: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x252558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x25255c: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x25255cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x252560: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x252560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x252564: 0x2441023  subu        $v0, $s2, $a0
    ctx->pc = 0x252564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x252568: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x252568u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25256c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x25256cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x252570: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x252570u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x252574: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x252574u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x252578: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x252578u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25257c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x25257cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x252580: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x252580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x252584: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x252584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x252588: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x252588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25258c: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x25258cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252590: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x252590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252594: 0x3e00008  jr          $ra
    ctx->pc = 0x252594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252594u;
        // 0x252598: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25259Cu;
}
