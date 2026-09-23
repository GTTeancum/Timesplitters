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

// Function: dpmul
// Address: 0x2e3240 - 0x2e34e8
void dpmul_0x2e3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpmul_0x2e3240");
#endif

    switch (ctx->pc) {
        case 0x2e327cu: goto label_2e327c;
        case 0x2e328cu: goto label_2e328c;
        case 0x2e3358u: goto label_2e3358;
        case 0x2e3368u: goto label_2e3368;
        case 0x2e3378u: goto label_2e3378;
        case 0x2e3388u: goto label_2e3388;
        case 0x2e3400u: goto label_2e3400;
        case 0x2e3458u: goto label_2e3458;
        case 0x2e34bcu: goto label_2e34bc;
        default: break;
    }

    ctx->pc = 0x2e3240u;

    // 0x2e3240: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2e3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2e3244: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x2e3244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2e3248: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x2e3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2e324c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e324cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3250: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x2e3250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2e3254: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e3254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3258: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2e3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2e325c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2e325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2e3260: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2e3260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2e3264: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2e3264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2e3268: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2e3268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2e326c: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2e326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2e3270: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2e3270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2e3274: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3274u;
    SET_GPR_U32(ctx, 31, 0x2E327Cu);
    ctx->pc = 0x2E3278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3274u;
    // 0x2e3278: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3274u, 0x2E327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E327Cu;
label_2e327c:
    // 0x2e327c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2e327cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3280: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2e3280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2e3284: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3284u;
    SET_GPR_U32(ctx, 31, 0x2E328Cu);
    ctx->pc = 0x2E3288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3284u;
    // 0x2e3288: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3284u, 0x2E328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E328Cu;
label_2e328c:
    // 0x2e328c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2e328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3290: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2e3290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3294: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E3294u;
    {
        const bool branch_taken_0x2e3294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3294u;
        // 0x2e3298: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3294) {
            ctx->pc = 0x2E32F0u;
            goto label_2e32f0;
        }
    }
    ctx->pc = 0x2E329Cu;
    // 0x2e329c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e32a0: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2e32a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e32a4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E32A4u;
    {
        const bool branch_taken_0x2e32a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e32a4) {
            ctx->pc = 0x2E32A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E32A4u;
            // 0x2e32a8: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3318u;
            goto label_2e3318;
        }
    }
    ctx->pc = 0x2E32ACu;
    // 0x2e32ac: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x2e32acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x2e32b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E32B0u;
    {
        const bool branch_taken_0x2e32b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32B0u;
        // 0x2e32b4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32b0) {
            ctx->pc = 0x2E32CCu;
            goto label_2e32cc;
        }
    }
    ctx->pc = 0x2E32B8u;
    // 0x2e32b8: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2e32b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2e32bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E32BCu;
    {
        const bool branch_taken_0x2e32bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32BCu;
        // 0x2e32c0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32bc) {
            ctx->pc = 0x2E32DCu;
            goto label_2e32dc;
        }
    }
    ctx->pc = 0x2E32C4u;
    // 0x2e32c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E32C4u;
    {
        const bool branch_taken_0x2e32c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32C4u;
        // 0x2e32c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32c4) {
            ctx->pc = 0x2E32F8u;
            goto label_2e32f8;
        }
    }
    ctx->pc = 0x2E32CCu;
label_2e32cc:
    // 0x2e32cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E32CCu;
    {
        const bool branch_taken_0x2e32cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32CCu;
        // 0x2e32d0: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32cc) {
            ctx->pc = 0x2E32E8u;
            goto label_2e32e8;
        }
    }
    ctx->pc = 0x2E32D4u;
    // 0x2e32d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E32D4u;
    {
        const bool branch_taken_0x2e32d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32D4u;
        // 0x2e32d8: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32d4) {
            ctx->pc = 0x2E3318u;
            goto label_2e3318;
        }
    }
    ctx->pc = 0x2E32DCu;
label_2e32dc:
    // 0x2e32dc: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2e32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2e32e0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2E32E0u;
    {
        const bool branch_taken_0x2e32e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32E0u;
        // 0x2e32e4: 0x24445368  addiu       $a0, $v0, 0x5368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32e0) {
            ctx->pc = 0x2E34B4u;
            goto label_2e34b4;
        }
    }
    ctx->pc = 0x2E32E8u;
label_2e32e8:
    // 0x2e32e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E32E8u;
    {
        const bool branch_taken_0x2e32e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32E8u;
        // 0x2e32ec: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32e8) {
            ctx->pc = 0x2E330Cu;
            goto label_2e330c;
        }
    }
    ctx->pc = 0x2E32F0u;
label_2e32f0:
    // 0x2e32f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e32f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e32f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e32f8:
    // 0x2e32f8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2e32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2e32fc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2e32fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2e3300: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e3300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e3304: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2E3304u;
    {
        const bool branch_taken_0x2e3304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3304u;
        // 0x2e3308: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3304) {
            ctx->pc = 0x2E34B4u;
            goto label_2e34b4;
        }
    }
    ctx->pc = 0x2E330Cu;
label_2e330c:
    // 0x2e330c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E330Cu;
    {
        const bool branch_taken_0x2e330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E330Cu;
        // 0x2e3310: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e330c) {
            ctx->pc = 0x2E3330u;
            goto label_2e3330;
        }
    }
    ctx->pc = 0x2E3314u;
    // 0x2e3314: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2e3314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2e3318:
    // 0x2e3318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e331c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e3320: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2e3320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2e3324: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e3324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e3328: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2E3328u;
    {
        const bool branch_taken_0x2e3328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3328u;
        // 0x2e332c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3328) {
            ctx->pc = 0x2E34B4u;
            goto label_2e34b4;
        }
    }
    ctx->pc = 0x2E3330u;
label_2e3330:
    // 0x2e3330: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x2e3330u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x2e3334: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x2e3334u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x2e3338: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e3338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e333c: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x2e333cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x2e3340: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x2e3340u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x2e3344: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x2e3344u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x2e3348: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x2e3348u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x2e334c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e334cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3350: 0xc0b9192  jal         func_2E4648
    ctx->pc = 0x2E3350u;
    SET_GPR_U32(ctx, 31, 0x2E3358u);
    ctx->pc = 0x2E3354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3350u;
    // 0x2e3354: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4648u, 0x2E3350u, 0x2E3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3358u;
label_2e3358:
    // 0x2e3358: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e3358u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e335c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e335cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3360: 0xc0b9192  jal         func_2E4648
    ctx->pc = 0x2E3360u;
    SET_GPR_U32(ctx, 31, 0x2E3368u);
    ctx->pc = 0x2E3364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3360u;
    // 0x2e3364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4648u, 0x2E3360u, 0x2E3368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3368u;
label_2e3368:
    // 0x2e3368: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e3368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e336c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e336cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3370: 0xc0b9192  jal         func_2E4648
    ctx->pc = 0x2E3370u;
    SET_GPR_U32(ctx, 31, 0x2E3378u);
    ctx->pc = 0x2E3374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3370u;
    // 0x2e3374: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4648u, 0x2E3370u, 0x2E3378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3378u;
label_2e3378:
    // 0x2e3378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e3378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e337c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3380: 0xc0b9192  jal         func_2E4648
    ctx->pc = 0x2E3380u;
    SET_GPR_U32(ctx, 31, 0x2E3388u);
    ctx->pc = 0x2E3384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3380u;
    // 0x2e3384: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4648u, 0x2E3380u, 0x2E3388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3388u;
label_2e3388:
    // 0x2e3388: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x2e3388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2e338c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2e338cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3390: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x2e3390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2e3394: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x2e3394u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e3398: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x2e3398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2e339c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2e339cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2e33a0: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2e33a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e33a4: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x2e33a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x2e33a8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2e33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e33ac: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x2e33acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2e33b0: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x2e33b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2e33b4: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x2e33b4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2e33b8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2e33b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2e33bc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2e33bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2e33c0: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x2e33c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x2e33c4: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x2e33c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x2e33c8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e33c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e33cc: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2e33ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2e33d0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2e33d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e33d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e33d8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2e33d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2e33dc: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2e33dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x2e33e0: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2e33e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e33e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E33E4u;
    {
        const bool branch_taken_0x2e33e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E33E4u;
        // 0x2e33e8: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33e4) {
            ctx->pc = 0x2E342Cu;
            goto label_2e342c;
        }
    }
    ctx->pc = 0x2E33ECu;
    // 0x2e33ec: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2e33ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e33f0: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2e33f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2e33f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e33f8: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x2e33f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x2e33fc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2e33fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2e3400:
    // 0x2e3400: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e3400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e3404: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e3404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e3408: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3408u;
    {
        const bool branch_taken_0x2e3408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3408u;
        // 0x2e340c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3408) {
            ctx->pc = 0x2E3418u;
            goto label_2e3418;
        }
    }
    ctx->pc = 0x2E3410u;
    // 0x2e3410: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x2e3410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x2e3414: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2e3414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_2e3418:
    // 0x2e3418: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x2e3418u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x2e341c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x2e341cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e3420: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E3420u;
    {
        const bool branch_taken_0x2e3420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3420u;
        // 0x2e3424: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3420) {
            ctx->pc = 0x2E3400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3400;
        }
    }
    ctx->pc = 0x2E3428u;
    // 0x2e3428: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2e3428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_2e342c:
    // 0x2e342c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3430: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2e3430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2e3434: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2e3434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e3438: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E3438u;
    {
        const bool branch_taken_0x2e3438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3438u;
        // 0x2e343c: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3438) {
            ctx->pc = 0x2E3480u;
            goto label_2e3480;
        }
    }
    ctx->pc = 0x2E3440u;
    // 0x2e3440: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2e3440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3444: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x2e3444u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e3448: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x2e3448u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2e344c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e344cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3450: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e3450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3454: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2e3454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_2e3458:
    // 0x2e3458: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x2e3458u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x2e345c: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x2e345cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x2e3460: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x2e3460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x2e3464: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2e3464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2e3468: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x2e3468u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2e346c: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x2e346cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e3470: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E3470u;
    {
        const bool branch_taken_0x2e3470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3470u;
        // 0x2e3474: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3470) {
            ctx->pc = 0x2E3458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3458;
        }
    }
    ctx->pc = 0x2E3478u;
    // 0x2e3478: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2e3478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2e347c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2e347cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2e3480:
    // 0x2e3480: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2e3480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e3484: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3484u;
    {
        const bool branch_taken_0x2e3484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3484) {
            ctx->pc = 0x2E3488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3484u;
            // 0x2e3488: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E34A8u;
            goto label_2e34a8;
        }
    }
    ctx->pc = 0x2E348Cu;
    // 0x2e348c: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x2e348cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x2e3490: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3490u;
    {
        const bool branch_taken_0x2e3490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3490u;
        // 0x2e3494: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3490) {
            ctx->pc = 0x2E34A0u;
            goto label_2e34a0;
        }
    }
    ctx->pc = 0x2E3498u;
    // 0x2e3498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3498u;
    {
        const bool branch_taken_0x2e3498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3498u;
        // 0x2e349c: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3498) {
            ctx->pc = 0x2E34A4u;
            goto label_2e34a4;
        }
    }
    ctx->pc = 0x2E34A0u;
label_2e34a0:
    // 0x2e34a0: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x2e34a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_2e34a4:
    // 0x2e34a4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2e34a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_2e34a8:
    // 0x2e34a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e34ac: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2e34acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2e34b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e34b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e34b4:
    // 0x2e34b4: 0xc0b8b5c  jal         func_2E2D70
    ctx->pc = 0x2E34B4u;
    SET_GPR_U32(ctx, 31, 0x2E34BCu);
    ctx->pc = 0x2E2D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2D70u, 0x2E34B4u, 0x2E34BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E34BCu;
label_2e34bc:
    // 0x2e34bc: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2e34bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e34c0: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x2e34c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e34c4: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2e34c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e34c8: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x2e34c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e34cc: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2e34ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e34d0: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2e34d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e34d4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2e34d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e34d8: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2e34d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e34dc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2e34dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e34e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E34E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34E0u;
        // 0x2e34e4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E34E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E34E8u;
}
