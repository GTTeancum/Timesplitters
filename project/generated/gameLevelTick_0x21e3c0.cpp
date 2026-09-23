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

// Function: gameLevelTick
// Address: 0x21e3c0 - 0x21e7a8
void gameLevelTick_0x21e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameLevelTick_0x21e3c0");
#endif

    switch (ctx->pc) {
        case 0x21e408u: goto label_21e408;
        case 0x21e438u: goto label_21e438;
        case 0x21e468u: goto label_21e468;
        case 0x21e4d8u: goto label_21e4d8;
        case 0x21e4f8u: goto label_21e4f8;
        case 0x21e500u: goto label_21e500;
        case 0x21e54cu: goto label_21e54c;
        case 0x21e564u: goto label_21e564;
        case 0x21e5f0u: goto label_21e5f0;
        case 0x21e618u: goto label_21e618;
        case 0x21e658u: goto label_21e658;
        case 0x21e678u: goto label_21e678;
        case 0x21e6a0u: goto label_21e6a0;
        case 0x21e6a8u: goto label_21e6a8;
        case 0x21e6dcu: goto label_21e6dc;
        case 0x21e6e8u: goto label_21e6e8;
        case 0x21e720u: goto label_21e720;
        case 0x21e730u: goto label_21e730;
        case 0x21e740u: goto label_21e740;
        case 0x21e750u: goto label_21e750;
        case 0x21e760u: goto label_21e760;
        case 0x21e770u: goto label_21e770;
        case 0x21e780u: goto label_21e780;
        default: break;
    }

    ctx->pc = 0x21e3c0u;

    // 0x21e3c0: 0x8f829da8  lw          $v0, -0x6258($gp)
    ctx->pc = 0x21e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x21e3c4: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x21e3c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x21e3c8: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x21e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x21e3cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e3d0: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x21e3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x21e3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e3d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e3dc: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x21e3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x21e3e0: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x21e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x21e3e4: 0x2406006d  addiu       $a2, $zero, 0x6D
    ctx->pc = 0x21e3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x21e3e8: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x21e3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x21e3ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21e3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e3f0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x21e3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x21e3f4: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x21e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x21e3f8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x21e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x21e3fc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x21e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x21e400: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x21E400u;
    SET_GPR_U32(ctx, 31, 0x21E408u);
    ctx->pc = 0x21E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E400u;
    // 0x21e404: 0xaf829da8  sw          $v0, -0x6258($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x21E400u, 0x21E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E408u;
label_21e408:
    // 0x21e408: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x21e408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21e40c: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x21e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x21e410: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x21e410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x21e414: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21E414u;
    {
        const bool branch_taken_0x21e414 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E414u;
        // 0x21e418: 0xaf809db0  sw          $zero, -0x6250($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e414) {
            ctx->pc = 0x21E4B0u;
            goto label_21e4b0;
        }
    }
    ctx->pc = 0x21E41Cu;
    // 0x21e41c: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x21e41cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x21e420: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x21e420u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x21e424: 0x3c1501fc  lui         $s5, 0x1FC
    ctx->pc = 0x21e424u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)508 << 16));
    // 0x21e428: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x21e428u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x21e42c: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x21e42cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x21e430: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x21e430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x21e434: 0x0  nop
    ctx->pc = 0x21e434u;
    // NOP
label_21e438:
    // 0x21e438: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x21e438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x21e43c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x21e43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21e440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e444: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x21e444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21e448: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x21e448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x21e44c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21e44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e450: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x21E450u;
    {
        const bool branch_taken_0x21e450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e450) {
            ctx->pc = 0x21E454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E450u;
            // 0x21e454: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E498u;
            goto label_21e498;
        }
    }
    ctx->pc = 0x21E458u;
    // 0x21e458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e460: 0xc0a241e  jal         func_289078
    ctx->pc = 0x21E460u;
    SET_GPR_U32(ctx, 31, 0x21E468u);
    ctx->pc = 0x21E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E460u;
    // 0x21e464: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x21E460u, 0x21E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E468u;
label_21e468:
    // 0x21e468: 0x8f869db0  lw          $a2, -0x6250($gp)
    ctx->pc = 0x21e468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942128)));
    // 0x21e46c: 0x2643ba28  addiu       $v1, $s2, -0x45D8
    ctx->pc = 0x21e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949416));
    // 0x21e470: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x21e470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21e474: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x21e474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x21e478: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x21e478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21e47c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21e47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21e480: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x21e480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x21e484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21e488: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x21e488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x21e48c: 0xaf869db0  sw          $a2, -0x6250($gp)
    ctx->pc = 0x21e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942128), GPR_U32(ctx, 6));
    // 0x21e490: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x21e490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x21e494: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21e494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21e498:
    // 0x21e498: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x21e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x21e49c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x21e49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21e4a0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x21E4A0u;
    {
        const bool branch_taken_0x21e4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4A0u;
        // 0x21e4a4: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4a0) {
            ctx->pc = 0x21E438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e438;
        }
    }
    ctx->pc = 0x21E4A8u;
    // 0x21e4a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21E4A8u;
    {
        const bool branch_taken_0x21e4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4A8u;
        // 0x21e4ac: 0x8f869db0  lw          $a2, -0x6250($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4a8) {
            ctx->pc = 0x21E4C8u;
            goto label_21e4c8;
        }
    }
    ctx->pc = 0x21E4B0u;
label_21e4b0:
    // 0x21e4b0: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x21e4b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x21e4b4: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x21e4b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x21e4b8: 0x3c1501fc  lui         $s5, 0x1FC
    ctx->pc = 0x21e4b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)508 << 16));
    // 0x21e4bc: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x21e4bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x21e4c0: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x21e4c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x21e4c4: 0x8f869db0  lw          $a2, -0x6250($gp)
    ctx->pc = 0x21e4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942128)));
label_21e4c8:
    // 0x21e4c8: 0x2644ba28  addiu       $a0, $s2, -0x45D8
    ctx->pc = 0x21e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949416));
    // 0x21e4cc: 0x2665c518  addiu       $a1, $s3, -0x3AE8
    ctx->pc = 0x21e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952216));
    // 0x21e4d0: 0xc0ad23e  jal         func_2B48F8
    ctx->pc = 0x21E4D0u;
    SET_GPR_U32(ctx, 31, 0x21E4D8u);
    ctx->pc = 0x21E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E4D0u;
    // 0x21e4d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48F8u, 0x21E4D0u, 0x21E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E4D8u;
label_21e4d8:
    // 0x21e4d8: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x21e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21e4dc: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x21e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x21e4e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e4e4: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21E4E4u;
    {
        const bool branch_taken_0x21e4e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4E4u;
        // 0x21e4e8: 0xaf809db4  sw          $zero, -0x624C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4e4) {
            ctx->pc = 0x21E538u;
            goto label_21e538;
        }
    }
    ctx->pc = 0x21E4ECu;
    // 0x21e4ec: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x21e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x21e4f0: 0x2450bd88  addiu       $s0, $v0, -0x4278
    ctx->pc = 0x21e4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950280));
    // 0x21e4f4: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x21e4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21e4f8:
    // 0x21e4f8: 0xc0a2458  jal         func_289160
    ctx->pc = 0x21E4F8u;
    SET_GPR_U32(ctx, 31, 0x21E500u);
    ctx->pc = 0x21E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E4F8u;
    // 0x21e4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289160u, 0x21E4F8u, 0x21E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E500u;
label_21e500:
    // 0x21e500: 0x8f869db4  lw          $a2, -0x624C($gp)
    ctx->pc = 0x21e500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942132)));
    // 0x21e504: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x21e504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21e508: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x21e508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x21e50c: 0x8f87b59c  lw          $a3, -0x4A64($gp)
    ctx->pc = 0x21e50cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x21e510: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x21e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x21e514: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21e514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21e518: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21e518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21e51c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x21e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21e520: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x21e520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x21e524: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x21e524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21e528: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21e528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21e52c: 0x225282a  slt         $a1, $s1, $a1
    ctx->pc = 0x21e52cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21e530: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x21E530u;
    {
        const bool branch_taken_0x21e530 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E530u;
        // 0x21e534: 0xaf869db4  sw          $a2, -0x624C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e530) {
            ctx->pc = 0x21E4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e4f8;
        }
    }
    ctx->pc = 0x21E538u;
label_21e538:
    // 0x21e538: 0x8f869db4  lw          $a2, -0x624C($gp)
    ctx->pc = 0x21e538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942132)));
    // 0x21e53c: 0x26a4bd88  addiu       $a0, $s5, -0x4278
    ctx->pc = 0x21e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950280));
    // 0x21e540: 0x2685c6c8  addiu       $a1, $s4, -0x3938
    ctx->pc = 0x21e540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952648));
    // 0x21e544: 0xc0ad23e  jal         func_2B48F8
    ctx->pc = 0x21E544u;
    SET_GPR_U32(ctx, 31, 0x21E54Cu);
    ctx->pc = 0x21E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E544u;
    // 0x21e548: 0x26d0c4a8  addiu       $s0, $s6, -0x3B58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48F8u, 0x21E544u, 0x21E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E54Cu;
label_21e54c:
    // 0x21e54c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x21e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21e550: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x21e550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x21e554: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21E554u;
    {
        const bool branch_taken_0x21e554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E554u;
        // 0x21e558: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e554) {
            ctx->pc = 0x21E57Cu;
            goto label_21e57c;
        }
    }
    ctx->pc = 0x21E55Cu;
    // 0x21e55c: 0xc087e42  jal         func_21F908
    ctx->pc = 0x21E55Cu;
    SET_GPR_U32(ctx, 31, 0x21E564u);
    ctx->pc = 0x21F908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F908u, 0x21E55Cu, 0x21E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E564u;
label_21e564:
    // 0x21e564: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x21e564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21e568: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x21e568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x21e56c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21e56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21e570: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x21E570u;
    {
        const bool branch_taken_0x21e570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E570u;
        // 0x21e574: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e570) {
            ctx->pc = 0x21E784u;
            goto label_21e784;
        }
    }
    ctx->pc = 0x21E578u;
    // 0x21e578: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x21e578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_21e57c:
    // 0x21e57c: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x21E57Cu;
    {
        const bool branch_taken_0x21e57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E57Cu;
        // 0x21e580: 0x26c2c4a8  addiu       $v0, $s6, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e57c) {
            ctx->pc = 0x21E6ECu;
            goto label_21e6ec;
        }
    }
    ctx->pc = 0x21E584u;
    // 0x21e584: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x21e584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x21e588: 0x18600057  blez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x21E588u;
    {
        const bool branch_taken_0x21e588 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x21E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E588u;
        // 0x21e58c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e588) {
            ctx->pc = 0x21E6E8u;
            goto label_21e6e8;
        }
    }
    ctx->pc = 0x21E590u;
    // 0x21e590: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21e590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e594: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x21e594u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21e598: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21E598u;
    {
        const bool branch_taken_0x21e598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e598) {
            ctx->pc = 0x21E59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E598u;
            // 0x21e59c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E5A0u;
            goto label_21e5a0;
        }
    }
    ctx->pc = 0x21E5A0u;
label_21e5a0:
    // 0x21e5a0: 0x3012  mflo        $a2
    ctx->pc = 0x21e5a0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x21e5a4: 0x28c3003c  slti        $v1, $a2, 0x3C
    ctx->pc = 0x21e5a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x21e5a8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E5A8u;
    {
        const bool branch_taken_0x21e5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5A8u;
        // 0x21e5ac: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5a8) {
            ctx->pc = 0x21E5F8u;
            goto label_21e5f8;
        }
    }
    ctx->pc = 0x21E5B0u;
    // 0x21e5b0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x21e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21e5b4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x21e5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x21e5b8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21E5B8u;
    {
        const bool branch_taken_0x21e5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5B8u;
        // 0x21e5bc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5b8) {
            ctx->pc = 0x21E5F8u;
            goto label_21e5f8;
        }
    }
    ctx->pc = 0x21E5C0u;
    // 0x21e5c0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x21e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21e5c4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21e5c8: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x21e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21e5cc: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x21e5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x21e5d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e5d4: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x21e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x21e5d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e5dc: 0x240400c7  addiu       $a0, $zero, 0xC7
    ctx->pc = 0x21e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x21e5e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e5e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5e8: 0xc081546  jal         func_205518
    ctx->pc = 0x21E5E8u;
    SET_GPR_U32(ctx, 31, 0x21E5F0u);
    ctx->pc = 0x21E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5E8u;
    // 0x21e5ec: 0x8c5106e4  lw          $s1, 0x6E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x21E5E8u, 0x21E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E5F0u;
label_21e5f0:
    // 0x21e5f0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21E5F0u;
    {
        const bool branch_taken_0x21e5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e5f0) {
            ctx->pc = 0x21E68Cu;
            goto label_21e68c;
        }
    }
    ctx->pc = 0x21E5F8u;
label_21e5f8:
    // 0x21e5f8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x21e5fc: 0x2452c4a8  addiu       $s2, $v0, -0x3B58
    ctx->pc = 0x21e5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x21e600: 0x24682c18  addiu       $t0, $v1, 0x2C18
    ctx->pc = 0x21e600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x21e604: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x21e604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21e608: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x21e608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e60c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x21e60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21e610: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21e610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21e614: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x21e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21e618:
    // 0x21e618: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x21e618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21e61c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21E61Cu;
    {
        const bool branch_taken_0x21e61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E61Cu;
        // 0x21e620: 0x2131804  sllv        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e61c) {
            ctx->pc = 0x21E680u;
            goto label_21e680;
        }
    }
    ctx->pc = 0x21E624u;
    // 0x21e624: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x21e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x21e628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21e628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21e62c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x21E62Cu;
    {
        const bool branch_taken_0x21e62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e62c) {
            ctx->pc = 0x21E630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E62Cu;
            // 0x21e630: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E684u;
            goto label_21e684;
        }
    }
    ctx->pc = 0x21E634u;
    // 0x21e634: 0x14a70006  bne         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E634u;
    {
        const bool branch_taken_0x21e634 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x21E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E634u;
        // 0x21e638: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e634) {
            ctx->pc = 0x21E650u;
            goto label_21e650;
        }
    }
    ctx->pc = 0x21E63Cu;
    // 0x21e63c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e640: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x21e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x21e644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21e644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e648: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21E648u;
    {
        const bool branch_taken_0x21e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E648u;
        // 0x21e64c: 0x8c7106e8  lw          $s1, 0x6E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e648) {
            ctx->pc = 0x21E65Cu;
            goto label_21e65c;
        }
    }
    ctx->pc = 0x21E650u;
label_21e650:
    // 0x21e650: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21E650u;
    SET_GPR_U32(ctx, 31, 0x21E658u);
    ctx->pc = 0x21E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E650u;
    // 0x21e654: 0x2484e590  addiu       $a0, $a0, -0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21E650u, 0x21E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E658u;
label_21e658:
    // 0x21e658: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21e658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e65c:
    // 0x21e65c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x21e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x21e660: 0x2131804  sllv        $v1, $s3, $s0
    ctx->pc = 0x21e660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 16) & 0x1F));
    // 0x21e664: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x21e664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x21e668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e66c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21e670: 0xc081546  jal         func_205518
    ctx->pc = 0x21E670u;
    SET_GPR_U32(ctx, 31, 0x21E678u);
    ctx->pc = 0x21E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E670u;
    // 0x21e674: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x21E670u, 0x21E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E678u;
label_21e678:
    // 0x21e678: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21E678u;
    {
        const bool branch_taken_0x21e678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e678) {
            ctx->pc = 0x21E68Cu;
            goto label_21e68c;
        }
    }
    ctx->pc = 0x21E680u;
label_21e680:
    // 0x21e680: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21e680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_21e684:
    // 0x21e684: 0x601ffe4  bgez        $s0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x21E684u;
    {
        const bool branch_taken_0x21e684 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x21E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E684u;
        // 0x21e688: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e684) {
            ctx->pc = 0x21E618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e618;
        }
    }
    ctx->pc = 0x21E68Cu;
label_21e68c:
    // 0x21e68c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x21E68Cu;
    {
        const bool branch_taken_0x21e68c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E68Cu;
        // 0x21e690: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e68c) {
            ctx->pc = 0x21E6BCu;
            goto label_21e6bc;
        }
    }
    ctx->pc = 0x21E694u;
    // 0x21e694: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21E694u;
    {
        const bool branch_taken_0x21e694 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E694u;
        // 0x21e698: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e694) {
            ctx->pc = 0x21E6BCu;
            goto label_21e6bc;
        }
    }
    ctx->pc = 0x21E69Cu;
    // 0x21e69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e6a0:
    // 0x21e6a0: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x21E6A0u;
    SET_GPR_U32(ctx, 31, 0x21E6A8u);
    ctx->pc = 0x21E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E6A0u;
    // 0x21e6a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x21E6A0u, 0x21E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6A8u;
label_21e6a8:
    // 0x21e6a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21e6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21e6ac: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x21e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21e6b0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21e6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21e6b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21E6B4u;
    {
        const bool branch_taken_0x21e6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6B4u;
        // 0x21e6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6b4) {
            ctx->pc = 0x21E6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e6a0;
        }
    }
    ctx->pc = 0x21E6BCu;
label_21e6bc:
    // 0x21e6bc: 0x26c4c4a8  addiu       $a0, $s6, -0x3B58
    ctx->pc = 0x21e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952104));
    // 0x21e6c0: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x21e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x21e6c4: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x21e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x21e6c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e6cc: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E6CCu;
    {
        const bool branch_taken_0x21e6cc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6CCu;
        // 0x21e6d0: 0xac820058  sw          $v0, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6cc) {
            ctx->pc = 0x21E6E8u;
            goto label_21e6e8;
        }
    }
    ctx->pc = 0x21E6D4u;
    // 0x21e6d4: 0xc0874d2  jal         func_21D348
    ctx->pc = 0x21E6D4u;
    SET_GPR_U32(ctx, 31, 0x21E6DCu);
    ctx->pc = 0x21D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D348u, 0x21E6D4u, 0x21E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6DCu;
label_21e6dc:
    // 0x21e6dc: 0x240400c6  addiu       $a0, $zero, 0xC6
    ctx->pc = 0x21e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x21e6e0: 0xc081546  jal         func_205518
    ctx->pc = 0x21E6E0u;
    SET_GPR_U32(ctx, 31, 0x21E6E8u);
    ctx->pc = 0x21E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E6E0u;
    // 0x21e6e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x21E6E0u, 0x21E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6E8u;
label_21e6e8:
    // 0x21e6e8: 0x26c2c4a8  addiu       $v0, $s6, -0x3B58
    ctx->pc = 0x21e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952104));
label_21e6ec:
    // 0x21e6ec: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x21e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x21e6f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21e6f4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x21e6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x21e6f8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21E6F8u;
    {
        const bool branch_taken_0x21e6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6F8u;
        // 0x21e6fc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6f8) {
            ctx->pc = 0x21E780u;
            goto label_21e780;
        }
    }
    ctx->pc = 0x21E700u;
    // 0x21e700: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e704: 0x24420890  addiu       $v0, $v0, 0x890
    ctx->pc = 0x21e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
    // 0x21e708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e70c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e710: 0x800008  jr          $a0
    ctx->pc = 0x21E710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E718u: goto label_21e718;
            case 0x21E728u: goto label_21e728;
            case 0x21E738u: goto label_21e738;
            case 0x21E748u: goto label_21e748;
            case 0x21E758u: goto label_21e758;
            case 0x21E768u: goto label_21e768;
            case 0x21E778u: goto label_21e778;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E710u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21E718u;
label_21e718:
    // 0x21e718: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x21E718u;
    SET_GPR_U32(ctx, 31, 0x21E720u);
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x21E718u, 0x21E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E720u;
label_21e720:
    // 0x21e720: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21E720u;
    {
        const bool branch_taken_0x21e720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E720u;
        // 0x21e724: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e720) {
            ctx->pc = 0x21E784u;
            goto label_21e784;
        }
    }
    ctx->pc = 0x21E728u;
label_21e728:
    // 0x21e728: 0xc08751a  jal         func_21D468
    ctx->pc = 0x21E728u;
    SET_GPR_U32(ctx, 31, 0x21E730u);
    ctx->pc = 0x21D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D468u, 0x21E728u, 0x21E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E730u;
label_21e730:
    // 0x21e730: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21E730u;
    {
        const bool branch_taken_0x21e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E730u;
        // 0x21e734: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e730) {
            ctx->pc = 0x21E784u;
            goto label_21e784;
        }
    }
    ctx->pc = 0x21E738u;
label_21e738:
    // 0x21e738: 0xc0875e2  jal         func_21D788
    ctx->pc = 0x21E738u;
    SET_GPR_U32(ctx, 31, 0x21E740u);
    ctx->pc = 0x21D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D788u, 0x21E738u, 0x21E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E740u;
label_21e740:
    // 0x21e740: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21E740u;
    {
        const bool branch_taken_0x21e740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E740u;
        // 0x21e744: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e740) {
            ctx->pc = 0x21E784u;
            goto label_21e784;
        }
    }
    ctx->pc = 0x21E748u;
label_21e748:
    // 0x21e748: 0xc08764e  jal         func_21D938
    ctx->pc = 0x21E748u;
    SET_GPR_U32(ctx, 31, 0x21E750u);
    ctx->pc = 0x21D938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D938u, 0x21E748u, 0x21E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E750u;
label_21e750:
    // 0x21e750: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21E750u;
    {
        const bool branch_taken_0x21e750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E750u;
        // 0x21e754: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e750) {
            ctx->pc = 0x21E784u;
            goto label_21e784;
        }
    }
    ctx->pc = 0x21E758u;
label_21e758:
    // 0x21e758: 0xc0876ac  jal         func_21DAB0
    ctx->pc = 0x21E758u;
    SET_GPR_U32(ctx, 31, 0x21E760u);
    ctx->pc = 0x21DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DAB0u, 0x21E758u, 0x21E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E760u;
label_21e760:
    // 0x21e760: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21E760u;
    {
        const bool branch_taken_0x21e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E760u;
        // 0x21e764: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e760) {
            ctx->pc = 0x21E784u;
            goto label_21e784;
        }
    }
    ctx->pc = 0x21E768u;
label_21e768:
    // 0x21e768: 0xc08779a  jal         func_21DE68
    ctx->pc = 0x21E768u;
    SET_GPR_U32(ctx, 31, 0x21E770u);
    ctx->pc = 0x21DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DE68u, 0x21E768u, 0x21E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E770u;
label_21e770:
    // 0x21e770: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21E770u;
    {
        const bool branch_taken_0x21e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E770u;
        // 0x21e774: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e770) {
            ctx->pc = 0x21E784u;
            goto label_21e784;
        }
    }
    ctx->pc = 0x21E778u;
label_21e778:
    // 0x21e778: 0xc087806  jal         func_21E018
    ctx->pc = 0x21E778u;
    SET_GPR_U32(ctx, 31, 0x21E780u);
    ctx->pc = 0x21E018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E018u, 0x21E778u, 0x21E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E780u;
label_21e780:
    // 0x21e780: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x21e780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_21e784:
    // 0x21e784: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x21e784u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21e788: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x21e788u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21e78c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x21e78cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21e790: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x21e790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21e794: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x21e794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21e798: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x21e798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21e79c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x21e79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21e7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x21E7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7A0u;
        // 0x21e7a4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E7A8u;
}
