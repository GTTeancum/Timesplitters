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

// Function: dlSetFBMSK
// Address: 0x2b8318 - 0x2b8420
void dlSetFBMSK_0x2b8318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlSetFBMSK_0x2b8318");
#endif

    switch (ctx->pc) {
        case 0x2b8358u: goto label_2b8358;
        default: break;
    }

    ctx->pc = 0x2b8318u;

    // 0x2b8318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b831c: 0x8f829374  lw          $v0, -0x6C8C($gp)
    ctx->pc = 0x2b831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939508)));
    // 0x2b8320: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b8324: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8324u;
    {
        const bool branch_taken_0x2b8324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8324u;
        // 0x2b8328: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8324) {
            ctx->pc = 0x2B8338u;
            goto label_2b8338;
        }
    }
    ctx->pc = 0x2B832Cu;
    // 0x2b832c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x2b832cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x2b8330: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8330u;
    {
        const bool branch_taken_0x2b8330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8330u;
        // 0x2b8334: 0x245035d0  addiu       $s0, $v0, 0x35D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8330) {
            ctx->pc = 0x2B8340u;
            goto label_2b8340;
        }
    }
    ctx->pc = 0x2B8338u;
label_2b8338:
    // 0x2b8338: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x2b8338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x2b833c: 0x245034e0  addiu       $s0, $v0, 0x34E0
    ctx->pc = 0x2b833cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
label_2b8340:
    // 0x2b8340: 0x9e020000  lwu         $v0, 0x0($s0)
    ctx->pc = 0x2b8340u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8344: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2b8344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b8348: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b8348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b834c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b834cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b8350: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B8350u;
    SET_GPR_U32(ctx, 31, 0x2B8358u);
    ctx->pc = 0x2B8354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8350u;
    // 0x2b8354: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B8350u, 0x2B8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8358u;
label_2b8358:
    // 0x2b8358: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b8358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b835c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8360: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x2b8360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x2b8364: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x2b8364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2b8368: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b8368u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b836c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b836cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b8370: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b8374: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2b8374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2b8378: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b8378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b837c: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x2b837cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b8380: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b8380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b8384: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x2b8384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x2b8388: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2b8388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2b838c: 0x34a507fc  ori         $a1, $a1, 0x7FC
    ctx->pc = 0x2b838cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    // 0x2b8390: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8394: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2b8394u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b8398: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b8398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b839c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2b839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b83a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b83a4: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2b83a8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b83a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b83ac: 0x3c061100  lui         $a2, 0x1100
    ctx->pc = 0x2b83acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4352 << 16));
    // 0x2b83b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b83b4: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x2b83b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b83b8: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2b83b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2b83bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b83c0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2b83c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b83c4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2b83c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2b83c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b83c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b83cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b83d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b83d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b83d4: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x2b83d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b83d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b83d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b83dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b83dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b83e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b83e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b83e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b83e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b83e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b83ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b83f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b83f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b83f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b83fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8400: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8404: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8408: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b8408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b840c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8410: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b8410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b8414: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b8414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b8418: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8418u;
        // 0x2b841c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8420u;
}
