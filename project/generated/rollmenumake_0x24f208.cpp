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

// Function: rollmenumake
// Address: 0x24f208 - 0x24f414
void rollmenumake_0x24f208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rollmenumake_0x24f208");
#endif

    switch (ctx->pc) {
        case 0x24f248u: goto label_24f248;
        case 0x24f264u: goto label_24f264;
        case 0x24f274u: goto label_24f274;
        case 0x24f2c0u: goto label_24f2c0;
        case 0x24f2e4u: goto label_24f2e4;
        case 0x24f310u: goto label_24f310;
        case 0x24f330u: goto label_24f330;
        case 0x24f358u: goto label_24f358;
        case 0x24f370u: goto label_24f370;
        case 0x24f394u: goto label_24f394;
        case 0x24f3a8u: goto label_24f3a8;
        default: break;
    }

    ctx->pc = 0x24f208u;

    // 0x24f208: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24f208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24f20c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24f20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24f210: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24f210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24f214: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24f214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f218: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24f218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x24f21c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24f21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f220: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24f220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24f224: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x24f224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f228: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24f228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24f22c: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x24f22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x24f230: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x24f230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x24f234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24f234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f238: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24f23c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x24f23cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f240: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x24F240u;
    SET_GPR_U32(ctx, 31, 0x24F248u);
    ctx->pc = 0x24F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F240u;
    // 0x24f244: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x24F240u, 0x24F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F248u;
label_24f248:
    // 0x24f248: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24f248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f24c: 0x56600003  bnel        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F24Cu;
    {
        const bool branch_taken_0x24f24c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f24c) {
            ctx->pc = 0x24F250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F24Cu;
            // 0x24f250: 0x96650010  lhu         $a1, 0x10($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F25Cu;
            goto label_24f25c;
        }
    }
    ctx->pc = 0x24F254u;
    // 0x24f254: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x24F254u;
    {
        const bool branch_taken_0x24f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F254u;
        // 0x24f258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f254) {
            ctx->pc = 0x24F3ECu;
            goto label_24f3ec;
        }
    }
    ctx->pc = 0x24F25Cu;
label_24f25c:
    // 0x24f25c: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x24F25Cu;
    SET_GPR_U32(ctx, 31, 0x24F264u);
    ctx->pc = 0x24F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F25Cu;
    // 0x24f260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x24F25Cu, 0x24F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F264u;
label_24f264:
    // 0x24f264: 0x96650012  lhu         $a1, 0x12($s3)
    ctx->pc = 0x24f264u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x24f268: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24f268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f26c: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x24F26Cu;
    SET_GPR_U32(ctx, 31, 0x24F274u);
    ctx->pc = 0x24F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F26Cu;
    // 0x24f270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x24F26Cu, 0x24F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F274u;
label_24f274:
    // 0x24f274: 0x8f85a1dc  lw          $a1, -0x5E24($gp)
    ctx->pc = 0x24f274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943196)));
    // 0x24f278: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F278u;
    {
        const bool branch_taken_0x24f278 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x24F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F278u;
        // 0x24f27c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f278) {
            ctx->pc = 0x24F288u;
            goto label_24f288;
        }
    }
    ctx->pc = 0x24F280u;
    // 0x24f280: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F280u;
    {
        const bool branch_taken_0x24f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F280u;
        // 0x24f284: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f280) {
            ctx->pc = 0x24F294u;
            goto label_24f294;
        }
    }
    ctx->pc = 0x24F288u;
label_24f288:
    // 0x24f288: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F288u;
    {
        const bool branch_taken_0x24f288 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x24f288) {
            ctx->pc = 0x24F28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F288u;
            // 0x24f28c: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F29Cu;
            goto label_24f29c;
        }
    }
    ctx->pc = 0x24F290u;
    // 0x24f290: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24f290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24f294:
    // 0x24f294: 0xaf85a1dc  sw          $a1, -0x5E24($gp)
    ctx->pc = 0x24f294u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943196), GPR_U32(ctx, 5));
    // 0x24f298: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x24f298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_24f29c:
    // 0x24f29c: 0x9783a1dc  lhu         $v1, -0x5E24($gp)
    ctx->pc = 0x24f29cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294943196)));
    // 0x24f2a0: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x24f2a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24f2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24f2a8: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x24f2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x24f2ac: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24F2ACu;
    {
        const bool branch_taken_0x24f2ac = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x24F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2ACu;
        // 0x24f2b0: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2ac) {
            ctx->pc = 0x24F2F0u;
            goto label_24f2f0;
        }
    }
    ctx->pc = 0x24F2B4u;
    // 0x24f2b4: 0x96450010  lhu         $a1, 0x10($s2)
    ctx->pc = 0x24f2b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x24f2b8: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x24F2B8u;
    SET_GPR_U32(ctx, 31, 0x24F2C0u);
    ctx->pc = 0x24F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F2B8u;
    // 0x24f2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x24F2B8u, 0x24F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F2C0u;
label_24f2c0:
    // 0x24f2c0: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x24f2c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x24f2c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24f2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f2c8: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x24f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x24f2cc: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F2CCu;
    {
        const bool branch_taken_0x24f2cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2CCu;
        // 0x24f2d0: 0xa7a30002  sh          $v1, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2cc) {
            ctx->pc = 0x24F2E4u;
            goto label_24f2e4;
        }
    }
    ctx->pc = 0x24F2D4u;
    // 0x24f2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f2d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24f2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f2dc: 0xc092ffe  jal         func_24BFF8
    ctx->pc = 0x24F2DCu;
    SET_GPR_U32(ctx, 31, 0x24F2E4u);
    ctx->pc = 0x24F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F2DCu;
    // 0x24f2e0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFF8u, 0x24F2DCu, 0x24F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F2E4u;
label_24f2e4:
    // 0x24f2e4: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x24f2e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x24f2e8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x24f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x24f2ec: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x24f2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
label_24f2f0:
    // 0x24f2f0: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F2F0u;
    {
        const bool branch_taken_0x24f2f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2F0u;
        // 0x24f2f4: 0x97a20002  lhu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2f0) {
            ctx->pc = 0x24F314u;
            goto label_24f314;
        }
    }
    ctx->pc = 0x24F2F8u;
    // 0x24f2f8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x24F2F8u;
    {
        const bool branch_taken_0x24f2f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2F8u;
        // 0x24f2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2f8) {
            ctx->pc = 0x24F314u;
            goto label_24f314;
        }
    }
    ctx->pc = 0x24F300u;
    // 0x24f300: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24f300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f304: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x24f304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x24f308: 0xc092ffe  jal         func_24BFF8
    ctx->pc = 0x24F308u;
    SET_GPR_U32(ctx, 31, 0x24F310u);
    ctx->pc = 0x24F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F308u;
    // 0x24f30c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFF8u, 0x24F308u, 0x24F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F310u;
label_24f310:
    // 0x24f310: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x24f310u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_24f314:
    // 0x24f314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f318: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24f318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f31c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24f31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f320: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x24f320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x24f324: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x24f324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x24f328: 0xc092ffe  jal         func_24BFF8
    ctx->pc = 0x24F328u;
    SET_GPR_U32(ctx, 31, 0x24F330u);
    ctx->pc = 0x24F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F328u;
    // 0x24f32c: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFF8u, 0x24F328u, 0x24F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F330u;
label_24f330:
    // 0x24f330: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x24f330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x24f334: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x24f334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x24f338: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F338u;
    {
        const bool branch_taken_0x24f338 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F338u;
        // 0x24f33c: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f338) {
            ctx->pc = 0x24F358u;
            goto label_24f358;
        }
    }
    ctx->pc = 0x24F340u;
    // 0x24f340: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F340u;
    {
        const bool branch_taken_0x24f340 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F340u;
        // 0x24f344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f340) {
            ctx->pc = 0x24F358u;
            goto label_24f358;
        }
    }
    ctx->pc = 0x24F348u;
    // 0x24f348: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24f348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f34c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x24f34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x24f350: 0xc092ffe  jal         func_24BFF8
    ctx->pc = 0x24F350u;
    SET_GPR_U32(ctx, 31, 0x24F358u);
    ctx->pc = 0x24F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F350u;
    // 0x24f354: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFF8u, 0x24F350u, 0x24F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F358u;
label_24f358:
    // 0x24f358: 0x8f82a1dc  lw          $v0, -0x5E24($gp)
    ctx->pc = 0x24f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943196)));
    // 0x24f35c: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24F35Cu;
    {
        const bool branch_taken_0x24f35c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24f35c) {
            ctx->pc = 0x24F360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F35Cu;
            // 0x24f360: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F398u;
            goto label_24f398;
        }
    }
    ctx->pc = 0x24F364u;
    // 0x24f364: 0x96850012  lhu         $a1, 0x12($s4)
    ctx->pc = 0x24f364u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x24f368: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x24F368u;
    SET_GPR_U32(ctx, 31, 0x24F370u);
    ctx->pc = 0x24F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F368u;
    // 0x24f36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x24F368u, 0x24F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F370u;
label_24f370:
    // 0x24f370: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x24f370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x24f374: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24f374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f378: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x24f378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x24f37c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F37Cu;
    {
        const bool branch_taken_0x24f37c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F37Cu;
        // 0x24f380: 0xa7a30002  sh          $v1, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f37c) {
            ctx->pc = 0x24F394u;
            goto label_24f394;
        }
    }
    ctx->pc = 0x24F384u;
    // 0x24f384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f388: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24f388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f38c: 0xc092ffe  jal         func_24BFF8
    ctx->pc = 0x24F38Cu;
    SET_GPR_U32(ctx, 31, 0x24F394u);
    ctx->pc = 0x24F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F38Cu;
    // 0x24f390: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFF8u, 0x24F38Cu, 0x24F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F394u;
label_24f394:
    // 0x24f394: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x24f394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24f398:
    // 0x24f398: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x24f398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x24f39c: 0x18a0000e  blez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x24F39Cu;
    {
        const bool branch_taken_0x24f39c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x24F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F39Cu;
        // 0x24f3a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f39c) {
            ctx->pc = 0x24F3D8u;
            goto label_24f3d8;
        }
    }
    ctx->pc = 0x24F3A4u;
    // 0x24f3a4: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x24f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_24f3a8:
    // 0x24f3a8: 0x10d30003  beq         $a2, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F3A8u;
    {
        const bool branch_taken_0x24f3a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 19));
        ctx->pc = 0x24F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3A8u;
        // 0x24f3ac: 0x94c2000a  lhu         $v0, 0xA($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3a8) {
            ctx->pc = 0x24F3B8u;
            goto label_24f3b8;
        }
    }
    ctx->pc = 0x24F3B0u;
    // 0x24f3b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24F3B0u;
    {
        const bool branch_taken_0x24f3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3B0u;
        // 0x24f3b4: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3b0) {
            ctx->pc = 0x24F3BCu;
            goto label_24f3bc;
        }
    }
    ctx->pc = 0x24F3B8u;
label_24f3b8:
    // 0x24f3b8: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x24f3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
label_24f3bc:
    // 0x24f3bc: 0xa4c2000a  sh          $v0, 0xA($a2)
    ctx->pc = 0x24f3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f3c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f3c4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x24f3c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24f3c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24F3C8u;
    {
        const bool branch_taken_0x24f3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3C8u;
        // 0x24f3cc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3c8) {
            ctx->pc = 0x24F3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f3a8;
        }
    }
    ctx->pc = 0x24F3D0u;
    // 0x24f3d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24F3D0u;
    {
        const bool branch_taken_0x24f3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f3d0) {
            ctx->pc = 0x24F3DCu;
            goto label_24f3dc;
        }
    }
    ctx->pc = 0x24F3D8u;
label_24f3d8:
    // 0x24f3d8: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x24f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_24f3dc:
    // 0x24f3dc: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x24f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
    // 0x24f3e0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x24f3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x24f3e4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x24f3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24f3e8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x24f3e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_24f3ec:
    // 0x24f3ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x24f3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24f3f0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24f3f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24f3f4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24f3f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24f3f8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24f3f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f3fc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24f3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24f400: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24f400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f404: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24f404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f408: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24f408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f40c: 0x3e00008  jr          $ra
    ctx->pc = 0x24F40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F40Cu;
        // 0x24f410: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F414u;
}
