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

// Function: enemyAIScifiHandler1
// Address: 0x2cc050 - 0x2cc180
void enemyAIScifiHandler1_0x2cc050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAIScifiHandler1_0x2cc050");
#endif

    switch (ctx->pc) {
        case 0x2cc084u: goto label_2cc084;
        case 0x2cc094u: goto label_2cc094;
        case 0x2cc09cu: goto label_2cc09c;
        case 0x2cc0a8u: goto label_2cc0a8;
        case 0x2cc0b0u: goto label_2cc0b0;
        case 0x2cc0b8u: goto label_2cc0b8;
        case 0x2cc0c0u: goto label_2cc0c0;
        case 0x2cc0ccu: goto label_2cc0cc;
        case 0x2cc0d4u: goto label_2cc0d4;
        case 0x2cc0dcu: goto label_2cc0dc;
        case 0x2cc0e4u: goto label_2cc0e4;
        case 0x2cc0f0u: goto label_2cc0f0;
        case 0x2cc0f8u: goto label_2cc0f8;
        case 0x2cc118u: goto label_2cc118;
        case 0x2cc14cu: goto label_2cc14c;
        case 0x2cc154u: goto label_2cc154;
        case 0x2cc160u: goto label_2cc160;
        case 0x2cc168u: goto label_2cc168;
        default: break;
    }

    ctx->pc = 0x2cc050u;

    // 0x2cc050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc054: 0x8f839f78  lw          $v1, -0x6088($gp)
    ctx->pc = 0x2cc054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942584)));
    // 0x2cc058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cc058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc05c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2cc05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc060: 0x10700027  beq         $v1, $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CC060u;
    {
        const bool branch_taken_0x2cc060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2CC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC060u;
        // 0x2cc064: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc060) {
            ctx->pc = 0x2CC100u;
            goto label_2cc100;
        }
    }
    ctx->pc = 0x2CC068u;
    // 0x2cc068: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2cc068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cc06c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2CC06Cu;
    {
        const bool branch_taken_0x2cc06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC06Cu;
        // 0x2cc070: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc06c) {
            ctx->pc = 0x2CC174u;
            goto label_2cc174;
        }
    }
    ctx->pc = 0x2CC074u;
    // 0x2cc074: 0x54600040  bnel        $v1, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2CC074u;
    {
        const bool branch_taken_0x2cc074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc074) {
            ctx->pc = 0x2CC078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC074u;
            // 0x2cc078: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC178u;
            goto label_2cc178;
        }
    }
    ctx->pc = 0x2CC07Cu;
    // 0x2cc07c: 0xc099b56  jal         func_266D58
    ctx->pc = 0x2CC07Cu;
    SET_GPR_U32(ctx, 31, 0x2CC084u);
    ctx->pc = 0x266D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D58u, 0x2CC07Cu, 0x2CC084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC084u;
label_2cc084:
    // 0x2cc084: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2CC084u;
    {
        const bool branch_taken_0x2cc084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC084u;
        // 0x2cc088: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc084) {
            ctx->pc = 0x2CC174u;
            goto label_2cc174;
        }
    }
    ctx->pc = 0x2CC08Cu;
    // 0x2cc08c: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2CC08Cu;
    SET_GPR_U32(ctx, 31, 0x2CC094u);
    ctx->pc = 0x2CC090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC08Cu;
    // 0x2cc090: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2CC08Cu, 0x2CC094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC094u;
label_2cc094:
    // 0x2cc094: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2CC094u;
    SET_GPR_U32(ctx, 31, 0x2CC09Cu);
    ctx->pc = 0x2CC098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC094u;
    // 0x2cc098: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2CC094u, 0x2CC09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC09Cu;
label_2cc09c:
    // 0x2cc09c: 0x240404bf  addiu       $a0, $zero, 0x4BF
    ctx->pc = 0x2cc09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1215));
    // 0x2cc0a0: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CC0A0u;
    SET_GPR_U32(ctx, 31, 0x2CC0A8u);
    ctx->pc = 0x2CC0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0A0u;
    // 0x2cc0a4: 0x240504c0  addiu       $a1, $zero, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CC0A0u, 0x2CC0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0A8u;
label_2cc0a8:
    // 0x2cc0a8: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2CC0A8u;
    SET_GPR_U32(ctx, 31, 0x2CC0B0u);
    ctx->pc = 0x2CC0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0A8u;
    // 0x2cc0ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2CC0A8u, 0x2CC0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0B0u;
label_2cc0b0:
    // 0x2cc0b0: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC0B0u;
    SET_GPR_U32(ctx, 31, 0x2CC0B8u);
    ctx->pc = 0x2CC0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0B0u;
    // 0x2cc0b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC0B0u, 0x2CC0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0B8u;
label_2cc0b8:
    // 0x2cc0b8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2CC0B8u;
    SET_GPR_U32(ctx, 31, 0x2CC0C0u);
    ctx->pc = 0x2CC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0B8u;
    // 0x2cc0bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2CC0B8u, 0x2CC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0C0u;
label_2cc0c0:
    // 0x2cc0c0: 0x24040475  addiu       $a0, $zero, 0x475
    ctx->pc = 0x2cc0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1141));
    // 0x2cc0c4: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CC0C4u;
    SET_GPR_U32(ctx, 31, 0x2CC0CCu);
    ctx->pc = 0x2CC0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0C4u;
    // 0x2cc0c8: 0x24050565  addiu       $a1, $zero, 0x565 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1381));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CC0C4u, 0x2CC0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0CCu;
label_2cc0cc:
    // 0x2cc0cc: 0xc099392  jal         func_264E48
    ctx->pc = 0x2CC0CCu;
    SET_GPR_U32(ctx, 31, 0x2CC0D4u);
    ctx->pc = 0x2CC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0CCu;
    // 0x2cc0d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E48u, 0x2CC0CCu, 0x2CC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0D4u;
label_2cc0d4:
    // 0x2cc0d4: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC0D4u;
    SET_GPR_U32(ctx, 31, 0x2CC0DCu);
    ctx->pc = 0x2CC0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0D4u;
    // 0x2cc0d8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC0D4u, 0x2CC0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0DCu;
label_2cc0dc:
    // 0x2cc0dc: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2CC0DCu;
    SET_GPR_U32(ctx, 31, 0x2CC0E4u);
    ctx->pc = 0x2CC0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0DCu;
    // 0x2cc0e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2CC0DCu, 0x2CC0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0E4u;
label_2cc0e4:
    // 0x2cc0e4: 0x240404d5  addiu       $a0, $zero, 0x4D5
    ctx->pc = 0x2cc0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1237));
    // 0x2cc0e8: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CC0E8u;
    SET_GPR_U32(ctx, 31, 0x2CC0F0u);
    ctx->pc = 0x2CC0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0E8u;
    // 0x2cc0ec: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CC0E8u, 0x2CC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0F0u;
label_2cc0f0:
    // 0x2cc0f0: 0xc099392  jal         func_264E48
    ctx->pc = 0x2CC0F0u;
    SET_GPR_U32(ctx, 31, 0x2CC0F8u);
    ctx->pc = 0x2CC0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0F0u;
    // 0x2cc0f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E48u, 0x2CC0F0u, 0x2CC0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0F8u;
label_2cc0f8:
    // 0x2cc0f8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2CC0F8u;
    {
        const bool branch_taken_0x2cc0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0F8u;
        // 0x2cc0fc: 0xaf909f78  sw          $s0, -0x6088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0f8) {
            ctx->pc = 0x2CC170u;
            goto label_2cc170;
        }
    }
    ctx->pc = 0x2CC100u;
label_2cc100:
    // 0x2cc100: 0x8f899f74  lw          $t1, -0x608C($gp)
    ctx->pc = 0x2cc100u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cc104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc108: 0x1920000c  blez        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CC108u;
    {
        const bool branch_taken_0x2cc108 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2CC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC108u;
        // 0x2cc10c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc108) {
            ctx->pc = 0x2CC13Cu;
            goto label_2cc13c;
        }
    }
    ctx->pc = 0x2CC110u;
    // 0x2cc110: 0x8f88b238  lw          $t0, -0x4DC8($gp)
    ctx->pc = 0x2cc110u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cc114: 0x0  nop
    ctx->pc = 0x2cc114u;
    // NOP
label_2cc118:
    // 0x2cc118: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2cc118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cc11c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cc11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc120: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x2cc120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cc124: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cc124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cc128: 0xc9202a  slt         $a0, $a2, $t1
    ctx->pc = 0x2cc128u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2cc12c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2cc12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cc130: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x2cc130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x2cc134: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CC134u;
    {
        const bool branch_taken_0x2cc134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC134u;
        // 0x2cc138: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc134) {
            ctx->pc = 0x2CC118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc118;
        }
    }
    ctx->pc = 0x2CC13Cu;
label_2cc13c:
    // 0x2cc13c: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2CC13Cu;
    {
        const bool branch_taken_0x2cc13c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC13Cu;
        // 0x2cc140: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc13c) {
            ctx->pc = 0x2CC174u;
            goto label_2cc174;
        }
    }
    ctx->pc = 0x2CC144u;
    // 0x2cc144: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2CC144u;
    SET_GPR_U32(ctx, 31, 0x2CC14Cu);
    ctx->pc = 0x2CC148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC144u;
    // 0x2cc148: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2CC144u, 0x2CC14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC14Cu;
label_2cc14c:
    // 0x2cc14c: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2CC14Cu;
    SET_GPR_U32(ctx, 31, 0x2CC154u);
    ctx->pc = 0x2CC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC14Cu;
    // 0x2cc150: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2CC14Cu, 0x2CC154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC154u;
label_2cc154:
    // 0x2cc154: 0x24040433  addiu       $a0, $zero, 0x433
    ctx->pc = 0x2cc154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1075));
    // 0x2cc158: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CC158u;
    SET_GPR_U32(ctx, 31, 0x2CC160u);
    ctx->pc = 0x2CC15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC158u;
    // 0x2cc15c: 0x24050434  addiu       $a1, $zero, 0x434 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CC158u, 0x2CC160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC160u;
label_2cc160:
    // 0x2cc160: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2CC160u;
    SET_GPR_U32(ctx, 31, 0x2CC168u);
    ctx->pc = 0x2CC164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC160u;
    // 0x2cc164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2CC160u, 0x2CC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC168u;
label_2cc168:
    // 0x2cc168: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc16c: 0xaf829f78  sw          $v0, -0x6088($gp)
    ctx->pc = 0x2cc16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 2));
label_2cc170:
    // 0x2cc170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cc170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc174:
    // 0x2cc174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc178:
    // 0x2cc178: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC178u;
        // 0x2cc17c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC180u;
}
