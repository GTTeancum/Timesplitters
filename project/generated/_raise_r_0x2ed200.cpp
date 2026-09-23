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

// Function: _raise_r
// Address: 0x2ed200 - 0x2ed2f0
void _raise_r_0x2ed200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_raise_r_0x2ed200");
#endif

    switch (ctx->pc) {
        case 0x2ed200u: goto label_2ed200;
        case 0x2ed204u: goto label_2ed204;
        case 0x2ed208u: goto label_2ed208;
        case 0x2ed20cu: goto label_2ed20c;
        case 0x2ed210u: goto label_2ed210;
        case 0x2ed214u: goto label_2ed214;
        case 0x2ed218u: goto label_2ed218;
        case 0x2ed21cu: goto label_2ed21c;
        case 0x2ed220u: goto label_2ed220;
        case 0x2ed224u: goto label_2ed224;
        case 0x2ed228u: goto label_2ed228;
        case 0x2ed22cu: goto label_2ed22c;
        case 0x2ed230u: goto label_2ed230;
        case 0x2ed234u: goto label_2ed234;
        case 0x2ed238u: goto label_2ed238;
        case 0x2ed23cu: goto label_2ed23c;
        case 0x2ed240u: goto label_2ed240;
        case 0x2ed244u: goto label_2ed244;
        case 0x2ed248u: goto label_2ed248;
        case 0x2ed24cu: goto label_2ed24c;
        case 0x2ed250u: goto label_2ed250;
        case 0x2ed254u: goto label_2ed254;
        case 0x2ed258u: goto label_2ed258;
        case 0x2ed25cu: goto label_2ed25c;
        case 0x2ed260u: goto label_2ed260;
        case 0x2ed264u: goto label_2ed264;
        case 0x2ed268u: goto label_2ed268;
        case 0x2ed26cu: goto label_2ed26c;
        case 0x2ed270u: goto label_2ed270;
        case 0x2ed274u: goto label_2ed274;
        case 0x2ed278u: goto label_2ed278;
        case 0x2ed27cu: goto label_2ed27c;
        case 0x2ed280u: goto label_2ed280;
        case 0x2ed284u: goto label_2ed284;
        case 0x2ed288u: goto label_2ed288;
        case 0x2ed28cu: goto label_2ed28c;
        case 0x2ed290u: goto label_2ed290;
        case 0x2ed294u: goto label_2ed294;
        case 0x2ed298u: goto label_2ed298;
        case 0x2ed29cu: goto label_2ed29c;
        case 0x2ed2a0u: goto label_2ed2a0;
        case 0x2ed2a4u: goto label_2ed2a4;
        case 0x2ed2a8u: goto label_2ed2a8;
        case 0x2ed2acu: goto label_2ed2ac;
        case 0x2ed2b0u: goto label_2ed2b0;
        case 0x2ed2b4u: goto label_2ed2b4;
        case 0x2ed2b8u: goto label_2ed2b8;
        case 0x2ed2bcu: goto label_2ed2bc;
        case 0x2ed2c0u: goto label_2ed2c0;
        case 0x2ed2c4u: goto label_2ed2c4;
        case 0x2ed2c8u: goto label_2ed2c8;
        case 0x2ed2ccu: goto label_2ed2cc;
        case 0x2ed2d0u: goto label_2ed2d0;
        case 0x2ed2d4u: goto label_2ed2d4;
        case 0x2ed2d8u: goto label_2ed2d8;
        case 0x2ed2dcu: goto label_2ed2dc;
        case 0x2ed2e0u: goto label_2ed2e0;
        case 0x2ed2e4u: goto label_2ed2e4;
        case 0x2ed2e8u: goto label_2ed2e8;
        case 0x2ed2ecu: goto label_2ed2ec;
        default: break;
    }

    ctx->pc = 0x2ed200u;

label_2ed200:
    // 0x2ed200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ed200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ed204:
    // 0x2ed204: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ed204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2ed208:
    // 0x2ed208: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ed208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ed20c:
    // 0x2ed20c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ed20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ed210:
    // 0x2ed210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ed214:
    // 0x2ed214: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ed214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed218:
    // 0x2ed218: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ed218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2ed21c:
    // 0x2ed21c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x2ed21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2ed220:
    // 0x2ed220: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2ed224:
    if (ctx->pc == 0x2ED224u) {
        ctx->pc = 0x2ED224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED220u;
        // 0x2ed224: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED228u;
        goto label_2ed228;
    }
    ctx->pc = 0x2ED220u;
    {
        const bool branch_taken_0x2ed220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED220u;
        // 0x2ed224: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed220) {
            ctx->pc = 0x2ED238u;
            goto label_2ed238;
        }
    }
    ctx->pc = 0x2ED228u;
label_2ed228:
    // 0x2ed228: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2ed228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2ed22c:
    // 0x2ed22c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ed22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ed230:
    // 0x2ed230: 0x10000029  b           . + 4 + (0x29 << 2)
label_2ed234:
    if (ctx->pc == 0x2ED234u) {
        ctx->pc = 0x2ED234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED230u;
        // 0x2ed234: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED238u;
        goto label_2ed238;
    }
    ctx->pc = 0x2ED230u;
    {
        const bool branch_taken_0x2ed230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED230u;
        // 0x2ed234: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed230) {
            ctx->pc = 0x2ED2D8u;
            goto label_2ed2d8;
        }
    }
    ctx->pc = 0x2ED238u;
label_2ed238:
    // 0x2ed238: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x2ed238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_2ed23c:
    // 0x2ed23c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_2ed240:
    if (ctx->pc == 0x2ED240u) {
        ctx->pc = 0x2ED240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED23Cu;
        // 0x2ed240: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED244u;
        goto label_2ed244;
    }
    ctx->pc = 0x2ED23Cu;
    {
        const bool branch_taken_0x2ed23c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED23Cu;
        // 0x2ed240: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed23c) {
            ctx->pc = 0x2ED25Cu;
            goto label_2ed25c;
        }
    }
    ctx->pc = 0x2ED244u;
label_2ed244:
    // 0x2ed244: 0xc0bb440  jal         func_2ED100
label_2ed248:
    if (ctx->pc == 0x2ED248u) {
        ctx->pc = 0x2ED248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED244u;
        // 0x2ed248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED24Cu;
        goto label_2ed24c;
    }
    ctx->pc = 0x2ED244u;
    SET_GPR_U32(ctx, 31, 0x2ED24Cu);
    ctx->pc = 0x2ED248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED244u;
    // 0x2ed248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED100u, 0x2ED244u, 0x2ED24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED24Cu;
label_2ed24c:
    // 0x2ed24c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_2ed250:
    if (ctx->pc == 0x2ED250u) {
        ctx->pc = 0x2ED250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED24Cu;
        // 0x2ed250: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED254u;
        goto label_2ed254;
    }
    ctx->pc = 0x2ED24Cu;
    {
        const bool branch_taken_0x2ed24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED24Cu;
        // 0x2ed250: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed24c) {
            ctx->pc = 0x2ED2D8u;
            goto label_2ed2d8;
        }
    }
    ctx->pc = 0x2ED254u;
label_2ed254:
    // 0x2ed254: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x2ed254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_2ed258:
    // 0x2ed258: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2ed258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2ed25c:
    // 0x2ed25c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2ed25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2ed260:
    // 0x2ed260: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ed260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed264:
    // 0x2ed264: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2ed268:
    if (ctx->pc == 0x2ED268u) {
        ctx->pc = 0x2ED26Cu;
        goto label_2ed26c;
    }
    ctx->pc = 0x2ED264u;
    {
        const bool branch_taken_0x2ed264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed264) {
            ctx->pc = 0x2ED298u;
            goto label_2ed298;
        }
    }
    ctx->pc = 0x2ED26Cu;
label_2ed26c:
    // 0x2ed26c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_2ed270:
    if (ctx->pc == 0x2ED270u) {
        ctx->pc = 0x2ED270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED26Cu;
        // 0x2ed270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED274u;
        goto label_2ed274;
    }
    ctx->pc = 0x2ED26Cu;
    {
        const bool branch_taken_0x2ed26c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2ED270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED26Cu;
        // 0x2ed270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed26c) {
            ctx->pc = 0x2ED288u;
            goto label_2ed288;
        }
    }
    ctx->pc = 0x2ED274u;
label_2ed274:
    // 0x2ed274: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ed274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ed278:
    // 0x2ed278: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2ed27c:
    if (ctx->pc == 0x2ED27Cu) {
        ctx->pc = 0x2ED27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED278u;
        // 0x2ed27c: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED280u;
        goto label_2ed280;
    }
    ctx->pc = 0x2ED278u;
    {
        const bool branch_taken_0x2ed278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED278u;
        // 0x2ed27c: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed278) {
            ctx->pc = 0x2ED2B8u;
            goto label_2ed2b8;
        }
    }
    ctx->pc = 0x2ED280u;
label_2ed280:
    // 0x2ed280: 0x10000011  b           . + 4 + (0x11 << 2)
label_2ed284:
    if (ctx->pc == 0x2ED284u) {
        ctx->pc = 0x2ED284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED280u;
        // 0x2ed284: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED288u;
        goto label_2ed288;
    }
    ctx->pc = 0x2ED280u;
    {
        const bool branch_taken_0x2ed280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED280u;
        // 0x2ed284: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed280) {
            ctx->pc = 0x2ED2C8u;
            goto label_2ed2c8;
        }
    }
    ctx->pc = 0x2ED288u;
label_2ed288:
    // 0x2ed288: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_2ed28c:
    if (ctx->pc == 0x2ED28Cu) {
        ctx->pc = 0x2ED28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED288u;
        // 0x2ed28c: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED290u;
        goto label_2ed290;
    }
    ctx->pc = 0x2ED288u;
    {
        const bool branch_taken_0x2ed288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED288u;
        // 0x2ed28c: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed288) {
            ctx->pc = 0x2ED2D4u;
            goto label_2ed2d4;
        }
    }
    ctx->pc = 0x2ED290u;
label_2ed290:
    // 0x2ed290: 0x1000000d  b           . + 4 + (0xD << 2)
label_2ed294:
    if (ctx->pc == 0x2ED294u) {
        ctx->pc = 0x2ED294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED290u;
        // 0x2ed294: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED298u;
        goto label_2ed298;
    }
    ctx->pc = 0x2ED290u;
    {
        const bool branch_taken_0x2ed290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED290u;
        // 0x2ed294: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed290) {
            ctx->pc = 0x2ED2C8u;
            goto label_2ed2c8;
        }
    }
    ctx->pc = 0x2ED298u;
label_2ed298:
    // 0x2ed298: 0xc0bb52c  jal         func_2ED4B0
label_2ed29c:
    if (ctx->pc == 0x2ED29Cu) {
        ctx->pc = 0x2ED29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED298u;
        // 0x2ed29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED2A0u;
        goto label_2ed2a0;
    }
    ctx->pc = 0x2ED298u;
    SET_GPR_U32(ctx, 31, 0x2ED2A0u);
    ctx->pc = 0x2ED29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED298u;
    // 0x2ed29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED4B0u, 0x2ED298u, 0x2ED2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED2A0u;
label_2ed2a0:
    // 0x2ed2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed2a4:
    // 0x2ed2a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ed2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed2a8:
    // 0x2ed2a8: 0xc0bb514  jal         func_2ED450
label_2ed2ac:
    if (ctx->pc == 0x2ED2ACu) {
        ctx->pc = 0x2ED2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2A8u;
        // 0x2ed2ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED2B0u;
        goto label_2ed2b0;
    }
    ctx->pc = 0x2ED2A8u;
    SET_GPR_U32(ctx, 31, 0x2ED2B0u);
    ctx->pc = 0x2ED2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED2A8u;
    // 0x2ed2ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED450u, 0x2ED2A8u, 0x2ED2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED2B0u;
label_2ed2b0:
    // 0x2ed2b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ed2b4:
    if (ctx->pc == 0x2ED2B4u) {
        ctx->pc = 0x2ED2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2B0u;
        // 0x2ed2b4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED2B8u;
        goto label_2ed2b8;
    }
    ctx->pc = 0x2ED2B0u;
    {
        const bool branch_taken_0x2ed2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2B0u;
        // 0x2ed2b4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed2b0) {
            ctx->pc = 0x2ED2DCu;
            goto label_2ed2dc;
        }
    }
    ctx->pc = 0x2ED2B8u;
label_2ed2b8:
    // 0x2ed2b8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2ed2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2ed2bc:
    // 0x2ed2bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ed2bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed2c0:
    // 0x2ed2c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ed2c4:
    if (ctx->pc == 0x2ED2C4u) {
        ctx->pc = 0x2ED2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2C0u;
        // 0x2ed2c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED2C8u;
        goto label_2ed2c8;
    }
    ctx->pc = 0x2ED2C0u;
    {
        const bool branch_taken_0x2ed2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2C0u;
        // 0x2ed2c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed2c0) {
            ctx->pc = 0x2ED2D4u;
            goto label_2ed2d4;
        }
    }
    ctx->pc = 0x2ED2C8u;
label_2ed2c8:
    // 0x2ed2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ed2cc:
    // 0x2ed2cc: 0x60f809  jalr        $v1
label_2ed2d0:
    if (ctx->pc == 0x2ED2D0u) {
        ctx->pc = 0x2ED2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2CCu;
        // 0x2ed2d0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED2D4u;
        goto label_2ed2d4;
    }
    ctx->pc = 0x2ED2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2ED2D4u);
        ctx->pc = 0x2ED2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2CCu;
        // 0x2ed2d0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED2CCu, 0x2ED2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED2D4u;
label_2ed2d4:
    // 0x2ed2d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ed2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ed2d8:
    // 0x2ed2d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ed2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ed2dc:
    // 0x2ed2dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ed2dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ed2e0:
    // 0x2ed2e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ed2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ed2e4:
    // 0x2ed2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed2e8:
    // 0x2ed2e8: 0x3e00008  jr          $ra
label_2ed2ec:
    if (ctx->pc == 0x2ED2ECu) {
        ctx->pc = 0x2ED2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2E8u;
        // 0x2ed2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED2F0u;
        goto label_fallthrough_0x2ed2e8;
    }
    ctx->pc = 0x2ED2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2E8u;
        // 0x2ed2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ed2e8:
    ctx->pc = 0x2ED2F0u;
}
