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

// Function: __ieee754_sqrt
// Address: 0x2d9510 - 0x2d9814
void ps2___ieee754_sqrt_0x2d9510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_sqrt_0x2d9510");
#endif

    switch (ctx->pc) {
        case 0x2d955cu: goto label_2d955c;
        case 0x2d9568u: goto label_2d9568;
        case 0x2d95a0u: goto label_2d95a0;
        case 0x2d95acu: goto label_2d95ac;
        case 0x2d95c8u: goto label_2d95c8;
        case 0x2d95f8u: goto label_2d95f8;
        case 0x2d9698u: goto label_2d9698;
        case 0x2d96d0u: goto label_2d96d0;
        case 0x2d9764u: goto label_2d9764;
        case 0x2d9790u: goto label_2d9790;
        default: break;
    }

    ctx->pc = 0x2d9510u;

    // 0x2d9510: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d9510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d9514: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2d9514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2d9518: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d9518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d951c: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x2d951cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x2d9520: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d9520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d9524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9528: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2d9528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2d952c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2d952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2d9530: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d9530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d9534: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9538: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x2d9538u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d953c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2d953cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d9540: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2d9540u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2d9544: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2d9544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2d9548: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x2d9548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2d954c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D954Cu;
    {
        const bool branch_taken_0x2d954c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D954Cu;
        // 0x2d9550: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d954c) {
            ctx->pc = 0x2D9570u;
            goto label_2d9570;
        }
    }
    ctx->pc = 0x2D9554u;
    // 0x2d9554: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D9554u;
    SET_GPR_U32(ctx, 31, 0x2D955Cu);
    ctx->pc = 0x2D9558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9554u;
    // 0x2d9558: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D9554u, 0x2D955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D955Cu;
label_2d955c:
    // 0x2d955c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d955cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9560: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D9560u;
    SET_GPR_U32(ctx, 31, 0x2D9568u);
    ctx->pc = 0x2D9564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9560u;
    // 0x2d9564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D9560u, 0x2D9568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9568u;
label_2d9568:
    // 0x2d9568: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2D9568u;
    {
        const bool branch_taken_0x2d9568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9568u;
        // 0x2d956c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9568) {
            ctx->pc = 0x2D97F4u;
            goto label_2d97f4;
        }
    }
    ctx->pc = 0x2D9570u;
label_2d9570:
    // 0x2d9570: 0x1cc00010  bgtz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D9570u;
    {
        const bool branch_taken_0x2d9570 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2D9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9570u;
        // 0x2d9574: 0x62d03  sra         $a1, $a2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9570) {
            ctx->pc = 0x2D95B4u;
            goto label_2d95b4;
        }
    }
    ctx->pc = 0x2D9578u;
    // 0x2d9578: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2d9578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2d957c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d9580: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2d9580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2d9584: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2d9584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2d9588: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2D9588u;
    {
        const bool branch_taken_0x2d9588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9588u;
        // 0x2d958c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9588) {
            ctx->pc = 0x2D97F0u;
            goto label_2d97f0;
        }
    }
    ctx->pc = 0x2D9590u;
    // 0x2d9590: 0x4c10008  bgez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9590u;
    {
        const bool branch_taken_0x2d9590 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2D9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9590u;
        // 0x2d9594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9590) {
            ctx->pc = 0x2D95B4u;
            goto label_2d95b4;
        }
    }
    ctx->pc = 0x2D9598u;
    // 0x2d9598: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D9598u;
    SET_GPR_U32(ctx, 31, 0x2D95A0u);
    ctx->pc = 0x2D959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9598u;
    // 0x2d959c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D9598u, 0x2D95A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95A0u;
label_2d95a0:
    // 0x2d95a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d95a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95a4: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2D95A4u;
    SET_GPR_U32(ctx, 31, 0x2D95ACu);
    ctx->pc = 0x2D95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D95A4u;
    // 0x2d95a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2D95A4u, 0x2D95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95ACu;
label_2d95ac:
    // 0x2d95ac: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2D95ACu;
    {
        const bool branch_taken_0x2d95ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95ACu;
        // 0x2d95b0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95ac) {
            ctx->pc = 0x2D97F4u;
            goto label_2d97f4;
        }
    }
    ctx->pc = 0x2D95B4u;
label_2d95b4:
    // 0x2d95b4: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D95B4u;
    {
        const bool branch_taken_0x2d95b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95B4u;
        // 0x2d95b8: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95b4) {
            ctx->pc = 0x2D9638u;
            goto label_2d9638;
        }
    }
    ctx->pc = 0x2D95BCu;
    // 0x2d95bc: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2D95BCu;
    {
        const bool branch_taken_0x2d95bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95BCu;
        // 0x2d95c0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95bc) {
            ctx->pc = 0x2D95E8u;
            goto label_2d95e8;
        }
    }
    ctx->pc = 0x2D95C4u;
    // 0x2d95c4: 0x0  nop
    ctx->pc = 0x2d95c4u;
    // NOP
label_2d95c8:
    // 0x2d95c8: 0x712c2  srl         $v0, $a3, 11
    ctx->pc = 0x2d95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x2d95cc: 0x24a5ffeb  addiu       $a1, $a1, -0x15
    ctx->pc = 0x2d95ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967275));
    // 0x2d95d0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2d95d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2d95d4: 0x73d40  sll         $a3, $a3, 21
    ctx->pc = 0x2d95d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x2d95d8: 0x0  nop
    ctx->pc = 0x2d95d8u;
    // NOP
    // 0x2d95dc: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D95DCu;
    {
        const bool branch_taken_0x2d95dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d95dc) {
            ctx->pc = 0x2D95C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d95c8;
        }
    }
    ctx->pc = 0x2D95E4u;
    // 0x2d95e4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2d95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2d95e8:
    // 0x2d95e8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2d95e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2d95ec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D95ECu;
    {
        const bool branch_taken_0x2d95ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95ECu;
        // 0x2d95f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95ec) {
            ctx->pc = 0x2D961Cu;
            goto label_2d961c;
        }
    }
    ctx->pc = 0x2D95F4u;
    // 0x2d95f4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2d95f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2d95f8:
    // 0x2d95f8: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2d95f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2d95fc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2d95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2d9600: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2d9600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2d9604: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d9604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d9608: 0x0  nop
    ctx->pc = 0x2d9608u;
    // NOP
    // 0x2d960c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D960Cu;
    {
        const bool branch_taken_0x2d960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d960c) {
            ctx->pc = 0x2D95F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d95f8;
        }
    }
    ctx->pc = 0x2D9614u;
    // 0x2d9614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9614u;
    {
        const bool branch_taken_0x2d9614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9614u;
        // 0x2d9618: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9614) {
            ctx->pc = 0x2D9624u;
            goto label_2d9624;
        }
    }
    ctx->pc = 0x2D961Cu;
label_2d961c:
    // 0x2d961c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2d961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d9620: 0x41023  negu        $v0, $a0
    ctx->pc = 0x2d9620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_2d9624:
    // 0x2d9624: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x2d9624u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d9628: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x2d9628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d962c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2d962cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2d9630: 0x873804  sllv        $a3, $a3, $a0
    ctx->pc = 0x2d9630u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2d9634: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2d9634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_2d9638:
    // 0x2d9638: 0x24a5fc01  addiu       $a1, $a1, -0x3FF
    ctx->pc = 0x2d9638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966273));
    // 0x2d963c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d963cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d9640: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2d9640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2d9644: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2d9644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2d9648: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2d9648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d964c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D964Cu;
    {
        const bool branch_taken_0x2d964c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D964Cu;
        // 0x2d9650: 0x443025  or          $a2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d964c) {
            ctx->pc = 0x2D9668u;
            goto label_2d9668;
        }
    }
    ctx->pc = 0x2D9654u;
    // 0x2d9654: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x2d9654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x2d9658: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x2d9658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d965c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2d965cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2d9660: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d9660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d9664: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2d9664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2d9668:
    // 0x2d9668: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x2d9668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x2d966c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2d966cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2d9670: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x2d9670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d9674: 0x5ad00  sll         $s5, $a1, 20
    ctx->pc = 0x2d9674u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
    // 0x2d9678: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d9678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d967c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2d967cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2d9680: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2d9680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d9684: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d9684u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9688: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d9688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d968c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d968cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9690: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d9690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9694: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x2d9694u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
label_2d9698:
    // 0x2d9698: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x2d9698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2d969c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x2d969cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d96a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D96A0u;
    {
        const bool branch_taken_0x2d96a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96A0u;
        // 0x2d96a4: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96a0) {
            ctx->pc = 0x2D96B4u;
            goto label_2d96b4;
        }
    }
    ctx->pc = 0x2D96A8u;
    // 0x2d96a8: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x2d96a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d96ac: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x2d96acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2d96b0: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x2d96b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_2d96b4:
    // 0x2d96b4: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x2d96b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x2d96b8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x2d96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d96bc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2d96bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2d96c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d96c4: 0x1520fff4  bnez        $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D96C4u;
    {
        const bool branch_taken_0x2d96c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96C4u;
        // 0x2d96c8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96c4) {
            ctx->pc = 0x2D9698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9698;
        }
    }
    ctx->pc = 0x2D96CCu;
    // 0x2d96cc: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x2d96ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_2d96d0:
    // 0x2d96d0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2d96d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d96d4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2d96d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d96d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D96D8u;
    {
        const bool branch_taken_0x2d96d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96D8u;
        // 0x2d96dc: 0x1692821  addu        $a1, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96d8) {
            ctx->pc = 0x2D96FCu;
            goto label_2d96fc;
        }
    }
    ctx->pc = 0x2D96E0u;
    // 0x2d96e0: 0x14860012  bne         $a0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D96E0u;
    {
        const bool branch_taken_0x2d96e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96E0u;
        // 0x2d96e4: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96e0) {
            ctx->pc = 0x2D972Cu;
            goto label_2d972c;
        }
    }
    ctx->pc = 0x2D96E8u;
    // 0x2d96e8: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x2d96e8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d96ec: 0x55000010  bnel        $t0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D96ECu;
    {
        const bool branch_taken_0x2d96ec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d96ec) {
            ctx->pc = 0x2D96F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D96ECu;
            // 0x2d96f0: 0x94842  srl         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9730u;
            goto label_2d9730;
        }
    }
    ctx->pc = 0x2D96F4u;
    // 0x2d96f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D96F4u;
    {
        const bool branch_taken_0x2d96f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96F4u;
        // 0x2d96f8: 0xa95821  addu        $t3, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96f4) {
            ctx->pc = 0x2D9704u;
            goto label_2d9704;
        }
    }
    ctx->pc = 0x2D96FCu;
label_2d96fc:
    // 0x2d96fc: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x2d96fcu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d9700: 0xa95821  addu        $t3, $a1, $t1
    ctx->pc = 0x2d9700u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2d9704:
    // 0x2d9704: 0xb31024  and         $v0, $a1, $s3
    ctx->pc = 0x2d9704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x2d9708: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9708u;
    {
        const bool branch_taken_0x2d9708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9708u;
        // 0x2d970c: 0xc43023  subu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9708) {
            ctx->pc = 0x2D971Cu;
            goto label_2d971c;
        }
    }
    ctx->pc = 0x2D9710u;
    // 0x2d9710: 0x1731824  and         $v1, $t3, $s3
    ctx->pc = 0x2d9710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 19));
    // 0x2d9714: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x2d9714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2d9718: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x2d9718u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
label_2d971c:
    // 0x2d971c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x2d971cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2d9720: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x2d9720u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2d9724: 0x2298821  addu        $s1, $s1, $t1
    ctx->pc = 0x2d9724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x2d9728: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x2d9728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
label_2d972c:
    // 0x2d972c: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x2d972cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_2d9730:
    // 0x2d9730: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x2d9730u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d9734: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2d9734u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2d9738: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d9738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d973c: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2D973Cu;
    {
        const bool branch_taken_0x2d973c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D973Cu;
        // 0x2d9740: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d973c) {
            ctx->pc = 0x2D96D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d96d0;
        }
    }
    ctx->pc = 0x2D9744u;
    // 0x2d9744: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x2d9744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2d9748: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D9748u;
    {
        const bool branch_taken_0x2d9748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9748u;
        // 0x2d974c: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9748) {
            ctx->pc = 0x2D97BCu;
            goto label_2d97bc;
        }
    }
    ctx->pc = 0x2D9750u;
    // 0x2d9750: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x2d9750u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d9754: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2d9754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2d9758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d975c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D975Cu;
    SET_GPR_U32(ctx, 31, 0x2D9764u);
    ctx->pc = 0x2D9760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D975Cu;
    // 0x2d9760: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D975Cu, 0x2D9764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9764u;
label_2d9764:
    // 0x2d9764: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D9764u;
    {
        const bool branch_taken_0x2d9764 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9764u;
        // 0x2d9768: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9764) {
            ctx->pc = 0x2D97BCu;
            goto label_2d97bc;
        }
    }
    ctx->pc = 0x2D976Cu;
    // 0x2d976c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d9770: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d9770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d9774: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9774u;
    {
        const bool branch_taken_0x2d9774 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9774u;
        // 0x2d9778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9774) {
            ctx->pc = 0x2D9788u;
            goto label_2d9788;
        }
    }
    ctx->pc = 0x2D977Cu;
    // 0x2d977c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d977cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9780: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D9780u;
    {
        const bool branch_taken_0x2d9780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9780u;
        // 0x2d9784: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9780) {
            ctx->pc = 0x2D97B8u;
            goto label_2d97b8;
        }
    }
    ctx->pc = 0x2D9788u;
label_2d9788:
    // 0x2d9788: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D9788u;
    SET_GPR_U32(ctx, 31, 0x2D9790u);
    ctx->pc = 0x2D978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9788u;
    // 0x2d978c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D9788u, 0x2D9790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9790u;
label_2d9790:
    // 0x2d9790: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9790u;
    {
        const bool branch_taken_0x2d9790 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D9794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9790u;
        // 0x2d9794: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9790) {
            ctx->pc = 0x2D97B0u;
            goto label_2d97b0;
        }
    }
    ctx->pc = 0x2D9798u;
    // 0x2d9798: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d9798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d979c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2d979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2d97a0: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x2d97a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x2d97a4: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x2d97a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x2d97a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D97A8u;
    {
        const bool branch_taken_0x2d97a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97A8u;
        // 0x2d97ac: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97a8) {
            ctx->pc = 0x2D97B8u;
            goto label_2d97b8;
        }
    }
    ctx->pc = 0x2D97B0u;
label_2d97b0:
    // 0x2d97b0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2d97b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2d97b4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2d97b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2d97b8:
    // 0x2d97b8: 0x113842  srl         $a3, $s1, 1
    ctx->pc = 0x2d97b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_2d97bc:
    // 0x2d97bc: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x2d97bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x2d97c0: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x2d97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x2d97c4: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x2d97c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2d97c8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2d97c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d97cc: 0xf32025  or          $a0, $a3, $s3
    ctx->pc = 0x2d97ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x2d97d0: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x2d97d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x2d97d4: 0x85380b  movn        $a3, $a0, $a1
    ctx->pc = 0x2d97d4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x2d97d8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2d97d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2d97dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2d97dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2d97e0: 0x6a03c  dsll32      $s4, $a2, 0
    ctx->pc = 0x2d97e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2d97e4: 0x2828025  or          $s0, $s4, $v0
    ctx->pc = 0x2d97e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x2d97e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d97e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97ec: 0x0  nop
    ctx->pc = 0x2d97ecu;
    // NOP
label_2d97f0:
    // 0x2d97f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d97f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2d97f4:
    // 0x2d97f4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2d97f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d97f8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2d97f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d97fc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2d97fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9800: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d9800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9804: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2d9804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9808: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d9808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d980c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D980Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D980Cu;
        // 0x2d9810: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D980Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9814u;
}
