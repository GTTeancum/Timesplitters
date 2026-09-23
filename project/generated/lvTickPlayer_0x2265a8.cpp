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

// Function: lvTickPlayer
// Address: 0x2265a8 - 0x2266f4
void lvTickPlayer_0x2265a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvTickPlayer_0x2265a8");
#endif

    switch (ctx->pc) {
        case 0x2265bcu: goto label_2265bc;
        case 0x2265c4u: goto label_2265c4;
        case 0x2265dcu: goto label_2265dc;
        case 0x2265e4u: goto label_2265e4;
        case 0x226634u: goto label_226634;
        case 0x22663cu: goto label_22663c;
        case 0x226650u: goto label_226650;
        case 0x226670u: goto label_226670;
        case 0x226680u: goto label_226680;
        case 0x226690u: goto label_226690;
        case 0x2266a4u: goto label_2266a4;
        case 0x2266b4u: goto label_2266b4;
        case 0x2266bcu: goto label_2266bc;
        case 0x2266c4u: goto label_2266c4;
        case 0x2266ccu: goto label_2266cc;
        case 0x2266d4u: goto label_2266d4;
        case 0x2266dcu: goto label_2266dc;
        default: break;
    }

    ctx->pc = 0x2265a8u;

    // 0x2265a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2265a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2265ac: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2265acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2265b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2265b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2265b4: 0xc08b2c8  jal         func_22CB20
    ctx->pc = 0x2265B4u;
    SET_GPR_U32(ctx, 31, 0x2265BCu);
    ctx->pc = 0x2265B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2265B4u;
    // 0x2265b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x2265B4u, 0x2265BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265BCu;
label_2265bc:
    // 0x2265bc: 0xc0831f8  jal         func_20C7E0
    ctx->pc = 0x2265BCu;
    SET_GPR_U32(ctx, 31, 0x2265C4u);
    ctx->pc = 0x20C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E0u, 0x2265BCu, 0x2265C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265C4u;
label_2265c4:
    // 0x2265c4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2265c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2265c8: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2265c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2265cc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2265ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2265d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2265d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2265d4: 0xc083108  jal         func_20C420
    ctx->pc = 0x2265D4u;
    SET_GPR_U32(ctx, 31, 0x2265DCu);
    ctx->pc = 0x2265D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2265D4u;
    // 0x2265d8: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x2265D4u, 0x2265DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265DCu;
label_2265dc:
    // 0x2265dc: 0xc08b2d6  jal         func_22CB58
    ctx->pc = 0x2265DCu;
    SET_GPR_U32(ctx, 31, 0x2265E4u);
    ctx->pc = 0x22CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB58u, 0x2265DCu, 0x2265E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265E4u;
label_2265e4:
    // 0x2265e4: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x2265e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2265e8: 0x2444ff9b  addiu       $a0, $v0, -0x65
    ctx->pc = 0x2265e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967195));
    // 0x2265ec: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2265ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2265f0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2265F0u;
    {
        const bool branch_taken_0x2265f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2265F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265F0u;
        // 0x2265f4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265f0) {
            ctx->pc = 0x22661Cu;
            goto label_22661c;
        }
    }
    ctx->pc = 0x2265F8u;
    // 0x2265f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2265f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2265fc: 0x24420e60  addiu       $v0, $v0, 0xE60
    ctx->pc = 0x2265fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3680));
    // 0x226600: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x226600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226604: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x226604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226608: 0x800008  jr          $a0
    ctx->pc = 0x226608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226610u: goto label_226610;
            case 0x2266E8u: goto label_2266e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226608u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x226610u;
label_226610:
    // 0x226610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226614: 0x809f8c8  j           func_27E320
    ctx->pc = 0x226614u;
    ctx->pc = 0x226618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226614u;
    // 0x226618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E320u;
    camTick_0x27e320(rdram, ctx, runtime); return;
    ctx->pc = 0x22661Cu;
label_22661c:
    // 0x22661c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x22661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x226620: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x226620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x226624: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x226624u;
    {
        const bool branch_taken_0x226624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226624) {
            ctx->pc = 0x226634u;
            goto label_226634;
        }
    }
    ctx->pc = 0x22662Cu;
    // 0x22662c: 0xc083386  jal         func_20CE18
    ctx->pc = 0x22662Cu;
    SET_GPR_U32(ctx, 31, 0x226634u);
    ctx->pc = 0x20CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CE18u, 0x22662Cu, 0x226634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226634u;
label_226634:
    // 0x226634: 0xc0836ca  jal         func_20DB28
    ctx->pc = 0x226634u;
    SET_GPR_U32(ctx, 31, 0x22663Cu);
    ctx->pc = 0x20DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB28u, 0x226634u, 0x22663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22663Cu;
label_22663c:
    // 0x22663c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226640: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x226640u;
    {
        const bool branch_taken_0x226640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x226644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226640u;
        // 0x226644: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226640) {
            ctx->pc = 0x2266B4u;
            goto label_2266b4;
        }
    }
    ctx->pc = 0x226648u;
    // 0x226648: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x226648u;
    SET_GPR_U32(ctx, 31, 0x226650u);
    ctx->pc = 0x22664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226648u;
    // 0x22664c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x226648u, 0x226650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226650u;
label_226650:
    // 0x226650: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x226650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x226654: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226654u;
    {
        const bool branch_taken_0x226654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226654u;
        // 0x226658: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226654) {
            ctx->pc = 0x226668u;
            goto label_226668;
        }
    }
    ctx->pc = 0x22665Cu;
    // 0x22665c: 0x8f829ad8  lw          $v0, -0x6528($gp)
    ctx->pc = 0x22665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941400)));
    // 0x226660: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226660u;
    {
        const bool branch_taken_0x226660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226660u;
        // 0x226664: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226660) {
            ctx->pc = 0x226688u;
            goto label_226688;
        }
    }
    ctx->pc = 0x226668u;
label_226668:
    // 0x226668: 0xc084a78  jal         func_2129E0
    ctx->pc = 0x226668u;
    SET_GPR_U32(ctx, 31, 0x226670u);
    ctx->pc = 0x22666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226668u;
    // 0x22666c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129E0u, 0x226668u, 0x226670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226670u;
label_226670:
    // 0x226670: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x226670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x226674: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x226674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x226678: 0xc080e7a  jal         func_2039E8
    ctx->pc = 0x226678u;
    SET_GPR_U32(ctx, 31, 0x226680u);
    ctx->pc = 0x22667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226678u;
    // 0x22667c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E8u, 0x226678u, 0x226680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226680u;
label_226680:
    // 0x226680: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x226680u;
    {
        const bool branch_taken_0x226680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226680) {
            ctx->pc = 0x2266B4u;
            goto label_2266b4;
        }
    }
    ctx->pc = 0x226688u;
label_226688:
    // 0x226688: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x226688u;
    SET_GPR_U32(ctx, 31, 0x226690u);
    ctx->pc = 0x22668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226688u;
    // 0x22668c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x226688u, 0x226690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226690u;
label_226690:
    // 0x226690: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x226690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x226694: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226694u;
    {
        const bool branch_taken_0x226694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226694u;
        // 0x226698: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226694) {
            ctx->pc = 0x2266B4u;
            goto label_2266b4;
        }
    }
    ctx->pc = 0x22669Cu;
    // 0x22669c: 0xc084a4c  jal         func_212930
    ctx->pc = 0x22669Cu;
    SET_GPR_U32(ctx, 31, 0x2266A4u);
    ctx->pc = 0x2266A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22669Cu;
    // 0x2266a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212930u, 0x22669Cu, 0x2266A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266A4u;
label_2266a4:
    // 0x2266a4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2266a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2266a8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2266a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2266ac: 0xc080e7a  jal         func_2039E8
    ctx->pc = 0x2266ACu;
    SET_GPR_U32(ctx, 31, 0x2266B4u);
    ctx->pc = 0x2266B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2266ACu;
    // 0x2266b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E8u, 0x2266ACu, 0x2266B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266B4u;
label_2266b4:
    // 0x2266b4: 0xc0a0492  jal         func_281248
    ctx->pc = 0x2266B4u;
    SET_GPR_U32(ctx, 31, 0x2266BCu);
    ctx->pc = 0x281248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281248u, 0x2266B4u, 0x2266BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266BCu;
label_2266bc:
    // 0x2266bc: 0xc0ac3a0  jal         func_2B0E80
    ctx->pc = 0x2266BCu;
    SET_GPR_U32(ctx, 31, 0x2266C4u);
    ctx->pc = 0x2B0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0E80u, 0x2266BCu, 0x2266C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266C4u;
label_2266c4:
    // 0x2266c4: 0xc09f8c8  jal         func_27E320
    ctx->pc = 0x2266C4u;
    SET_GPR_U32(ctx, 31, 0x2266CCu);
    ctx->pc = 0x27E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E320u, 0x2266C4u, 0x2266CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266CCu;
label_2266cc:
    // 0x2266cc: 0xc0a51b0  jal         func_2946C0
    ctx->pc = 0x2266CCu;
    SET_GPR_U32(ctx, 31, 0x2266D4u);
    ctx->pc = 0x2946C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2946C0u, 0x2266CCu, 0x2266D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266D4u;
label_2266d4:
    // 0x2266d4: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x2266D4u;
    SET_GPR_U32(ctx, 31, 0x2266DCu);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x2266D4u, 0x2266DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266DCu;
label_2266dc:
    // 0x2266dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2266dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2266e0: 0x809bf08  j           func_26FC20
    ctx->pc = 0x2266E0u;
    ctx->pc = 0x2266E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2266E0u;
    // 0x2266e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FC20u;
    propTickPlayer_0x26fc20(rdram, ctx, runtime); return;
    ctx->pc = 0x2266E8u;
label_2266e8:
    // 0x2266e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2266e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2266ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2266ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266ECu;
        // 0x2266f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266F4u;
}
