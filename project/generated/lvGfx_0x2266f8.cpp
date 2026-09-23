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

// Function: lvGfx
// Address: 0x2266f8 - 0x226bdc
void lvGfx_0x2266f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGfx_0x2266f8");
#endif

    switch (ctx->pc) {
        case 0x226708u: goto label_226708;
        case 0x226710u: goto label_226710;
        case 0x22671cu: goto label_22671c;
        case 0x226734u: goto label_226734;
        case 0x226778u: goto label_226778;
        case 0x226780u: goto label_226780;
        case 0x226788u: goto label_226788;
        case 0x226790u: goto label_226790;
        case 0x2267a0u: goto label_2267a0;
        case 0x2267c0u: goto label_2267c0;
        case 0x2267c8u: goto label_2267c8;
        case 0x2267d0u: goto label_2267d0;
        case 0x2267d8u: goto label_2267d8;
        case 0x2267e0u: goto label_2267e0;
        case 0x226800u: goto label_226800;
        case 0x226808u: goto label_226808;
        case 0x226810u: goto label_226810;
        case 0x226818u: goto label_226818;
        case 0x226838u: goto label_226838;
        case 0x226840u: goto label_226840;
        case 0x226848u: goto label_226848;
        case 0x226890u: goto label_226890;
        case 0x2268a4u: goto label_2268a4;
        case 0x226968u: goto label_226968;
        case 0x2269c4u: goto label_2269c4;
        case 0x2269d8u: goto label_2269d8;
        case 0x2269e0u: goto label_2269e0;
        case 0x226b04u: goto label_226b04;
        case 0x226b0cu: goto label_226b0c;
        case 0x226b14u: goto label_226b14;
        case 0x226b1cu: goto label_226b1c;
        case 0x226b24u: goto label_226b24;
        case 0x226b2cu: goto label_226b2c;
        case 0x226b34u: goto label_226b34;
        case 0x226b48u: goto label_226b48;
        case 0x226b5cu: goto label_226b5c;
        case 0x226b70u: goto label_226b70;
        case 0x226b84u: goto label_226b84;
        case 0x226b98u: goto label_226b98;
        case 0x226ba0u: goto label_226ba0;
        case 0x226ba8u: goto label_226ba8;
        case 0x226bb0u: goto label_226bb0;
        case 0x226bb8u: goto label_226bb8;
        case 0x226bc0u: goto label_226bc0;
        case 0x226bc8u: goto label_226bc8;
        case 0x226bd0u: goto label_226bd0;
        default: break;
    }

    ctx->pc = 0x2266f8u;

    // 0x2266f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2266f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2266fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2266fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x226700: 0xc09a7be  jal         func_269EF8
    ctx->pc = 0x226700u;
    SET_GPR_U32(ctx, 31, 0x226708u);
    ctx->pc = 0x269EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269EF8u, 0x226700u, 0x226708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226708u;
label_226708:
    // 0x226708: 0xc09bf50  jal         func_26FD40
    ctx->pc = 0x226708u;
    SET_GPR_U32(ctx, 31, 0x226710u);
    ctx->pc = 0x26FD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FD40u, 0x226708u, 0x226710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226710u;
label_226710:
    // 0x226710: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x226710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x226714: 0xc08b2c8  jal         func_22CB20
    ctx->pc = 0x226714u;
    SET_GPR_U32(ctx, 31, 0x22671Cu);
    ctx->pc = 0x226718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226714u;
    // 0x226718: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x226714u, 0x22671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22671Cu;
label_22671c:
    // 0x22671c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x22671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x226720: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x226720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x226724: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x226724u;
    {
        const bool branch_taken_0x226724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226724u;
        // 0x226728: 0x8f829f70  lw          $v0, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226724) {
            ctx->pc = 0x226738u;
            goto label_226738;
        }
    }
    ctx->pc = 0x22672Cu;
    // 0x22672c: 0xc08b882  jal         func_22E208
    ctx->pc = 0x22672Cu;
    SET_GPR_U32(ctx, 31, 0x226734u);
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x22672Cu, 0x226734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226734u;
label_226734:
    // 0x226734: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x226734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
label_226738:
    // 0x226738: 0x2444ff9b  addiu       $a0, $v0, -0x65
    ctx->pc = 0x226738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967195));
    // 0x22673c: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x22673cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x226740: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x226740u;
    {
        const bool branch_taken_0x226740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x226744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226740u;
        // 0x226744: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226740) {
            ctx->pc = 0x226820u;
            goto label_226820;
        }
    }
    ctx->pc = 0x226748u;
    // 0x226748: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x226748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22674c: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x22674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
    // 0x226750: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x226750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226754: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x226754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226758: 0x800008  jr          $a0
    ctx->pc = 0x226758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226760u: goto label_226760;
            case 0x226798u: goto label_226798;
            case 0x2267A8u: goto label_2267a8;
            case 0x2267E8u: goto label_2267e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226758u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x226760u;
label_226760:
    // 0x226760: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x226760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x226764: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x226764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x226768: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x226768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22676c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x22676cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x226770: 0xc083108  jal         func_20C420
    ctx->pc = 0x226770u;
    SET_GPR_U32(ctx, 31, 0x226778u);
    ctx->pc = 0x226774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226770u;
    // 0x226774: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x226770u, 0x226778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226778u;
label_226778:
    // 0x226778: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x226778u;
    SET_GPR_U32(ctx, 31, 0x226780u);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x226778u, 0x226780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226780u;
label_226780:
    // 0x226780: 0xc0adf26  jal         func_2B7C98
    ctx->pc = 0x226780u;
    SET_GPR_U32(ctx, 31, 0x226788u);
    ctx->pc = 0x226784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226780u;
    // 0x226784: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C98u, 0x226780u, 0x226788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226788u;
label_226788:
    // 0x226788: 0xc08b34c  jal         func_22CD30
    ctx->pc = 0x226788u;
    SET_GPR_U32(ctx, 31, 0x226790u);
    ctx->pc = 0x22CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CD30u, 0x226788u, 0x226790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226790u;
label_226790:
    // 0x226790: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x226790u;
    {
        const bool branch_taken_0x226790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226790u;
        // 0x226794: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226790) {
            ctx->pc = 0x226BD4u;
            goto label_226bd4;
        }
    }
    ctx->pc = 0x226798u;
label_226798:
    // 0x226798: 0xc08a864  jal         func_22A190
    ctx->pc = 0x226798u;
    SET_GPR_U32(ctx, 31, 0x2267A0u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x226798u, 0x2267A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2267A0u;
label_2267a0:
    // 0x2267a0: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x2267A0u;
    {
        const bool branch_taken_0x2267a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2267A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267A0u;
        // 0x2267a4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267a0) {
            ctx->pc = 0x226BD4u;
            goto label_226bd4;
        }
    }
    ctx->pc = 0x2267A8u;
label_2267a8:
    // 0x2267a8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2267a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2267ac: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2267acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2267b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2267b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2267b4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2267b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2267b8: 0xc083108  jal         func_20C420
    ctx->pc = 0x2267B8u;
    SET_GPR_U32(ctx, 31, 0x2267C0u);
    ctx->pc = 0x2267BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267B8u;
    // 0x2267bc: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x2267B8u, 0x2267C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2267C0u;
label_2267c0:
    // 0x2267c0: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x2267C0u;
    SET_GPR_U32(ctx, 31, 0x2267C8u);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x2267C0u, 0x2267C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2267C8u;
label_2267c8:
    // 0x2267c8: 0xc0adf26  jal         func_2B7C98
    ctx->pc = 0x2267C8u;
    SET_GPR_U32(ctx, 31, 0x2267D0u);
    ctx->pc = 0x2267CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267C8u;
    // 0x2267cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C98u, 0x2267C8u, 0x2267D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2267D0u;
label_2267d0:
    // 0x2267d0: 0xc092da2  jal         func_24B688
    ctx->pc = 0x2267D0u;
    SET_GPR_U32(ctx, 31, 0x2267D8u);
    ctx->pc = 0x24B688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B688u, 0x2267D0u, 0x2267D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2267D8u;
label_2267d8:
    // 0x2267d8: 0xc08b34c  jal         func_22CD30
    ctx->pc = 0x2267D8u;
    SET_GPR_U32(ctx, 31, 0x2267E0u);
    ctx->pc = 0x22CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CD30u, 0x2267D8u, 0x2267E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2267E0u;
label_2267e0:
    // 0x2267e0: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x2267E0u;
    {
        const bool branch_taken_0x2267e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2267E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267E0u;
        // 0x2267e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267e0) {
            ctx->pc = 0x226BD4u;
            goto label_226bd4;
        }
    }
    ctx->pc = 0x2267E8u;
label_2267e8:
    // 0x2267e8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2267e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2267ec: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2267ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2267f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2267f4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2267f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2267f8: 0xc083108  jal         func_20C420
    ctx->pc = 0x2267F8u;
    SET_GPR_U32(ctx, 31, 0x226800u);
    ctx->pc = 0x2267FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267F8u;
    // 0x2267fc: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x2267F8u, 0x226800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226800u;
label_226800:
    // 0x226800: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x226800u;
    SET_GPR_U32(ctx, 31, 0x226808u);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x226800u, 0x226808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226808u;
label_226808:
    // 0x226808: 0xc0adf26  jal         func_2B7C98
    ctx->pc = 0x226808u;
    SET_GPR_U32(ctx, 31, 0x226810u);
    ctx->pc = 0x22680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226808u;
    // 0x22680c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C98u, 0x226808u, 0x226810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226810u;
label_226810:
    // 0x226810: 0xc0ab9b2  jal         func_2AE6C8
    ctx->pc = 0x226810u;
    SET_GPR_U32(ctx, 31, 0x226818u);
    ctx->pc = 0x2AE6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE6C8u, 0x226810u, 0x226818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226818u;
label_226818:
    // 0x226818: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x226818u;
    {
        const bool branch_taken_0x226818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226818u;
        // 0x22681c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226818) {
            ctx->pc = 0x226BD4u;
            goto label_226bd4;
        }
    }
    ctx->pc = 0x226820u;
label_226820:
    // 0x226820: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x226820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x226824: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x226824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x226828: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x226828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22682c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x22682cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x226830: 0xc083108  jal         func_20C420
    ctx->pc = 0x226830u;
    SET_GPR_U32(ctx, 31, 0x226838u);
    ctx->pc = 0x226834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226830u;
    // 0x226834: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x226830u, 0x226838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226838u;
label_226838:
    // 0x226838: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x226838u;
    SET_GPR_U32(ctx, 31, 0x226840u);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x226838u, 0x226840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226840u;
label_226840:
    // 0x226840: 0xc0adf26  jal         func_2B7C98
    ctx->pc = 0x226840u;
    SET_GPR_U32(ctx, 31, 0x226848u);
    ctx->pc = 0x226844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226840u;
    // 0x226844: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C98u, 0x226840u, 0x226848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226848u;
label_226848:
    // 0x226848: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x226848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x22684c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22684cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226850: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x226850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x226854: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x226854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x226858: 0x8c65014c  lw          $a1, 0x14C($v1)
    ctx->pc = 0x226858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x22685c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x22685cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x226860: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x226860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x226864: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x226864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x226868: 0x8c6201b8  lw          $v0, 0x1B8($v1)
    ctx->pc = 0x226868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
    // 0x22686c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22686Cu;
    {
        const bool branch_taken_0x22686c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x226870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22686Cu;
        // 0x226870: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22686c) {
            ctx->pc = 0x226878u;
            goto label_226878;
        }
    }
    ctx->pc = 0x226874u;
    // 0x226874: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x226874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_226878:
    // 0x226878: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x226878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x22687c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22687Cu;
    {
        const bool branch_taken_0x22687c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22687Cu;
        // 0x226880: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22687c) {
            ctx->pc = 0x226888u;
            goto label_226888;
        }
    }
    ctx->pc = 0x226884u;
    // 0x226884: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x226884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_226888:
    // 0x226888: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x226888u;
    SET_GPR_U32(ctx, 31, 0x226890u);
    ctx->pc = 0x22688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226888u;
    // 0x22688c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x226888u, 0x226890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226890u;
label_226890:
    // 0x226890: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x226890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226894: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x226894u;
    {
        const bool branch_taken_0x226894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x226898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226894u;
        // 0x226898: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226894) {
            ctx->pc = 0x226960u;
            goto label_226960;
        }
    }
    ctx->pc = 0x22689Cu;
    // 0x22689c: 0xc0a34b6  jal         func_28D2D8
    ctx->pc = 0x22689Cu;
    SET_GPR_U32(ctx, 31, 0x2268A4u);
    ctx->pc = 0x2268A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22689Cu;
    // 0x2268a0: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2D8u, 0x22689Cu, 0x2268A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268A4u;
label_2268a4:
    // 0x2268a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2268a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2268a8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2268A8u;
    {
        const bool branch_taken_0x2268a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2268a8) {
            ctx->pc = 0x2268ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2268A8u;
            // 0x2268ac: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2268C8u;
            goto label_2268c8;
        }
    }
    ctx->pc = 0x2268B0u;
    // 0x2268b0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2268b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2268b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2268b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2268b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2268b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2268bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2268bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2268c0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2268c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2268c4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2268c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2268c8:
    // 0x2268c8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2268C8u;
    {
        const bool branch_taken_0x2268c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2268CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268C8u;
        // 0x2268cc: 0x8f85b234  lw          $a1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268c8) {
            ctx->pc = 0x2268E8u;
            goto label_2268e8;
        }
    }
    ctx->pc = 0x2268D0u;
    // 0x2268d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2268d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2268d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2268d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2268d8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2268d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2268dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2268dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2268e0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2268e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2268e4: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2268e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2268e8:
    // 0x2268e8: 0x8ca20180  lw          $v0, 0x180($a1)
    ctx->pc = 0x2268e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x2268ec: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x2268ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2268f0: 0x8c6401e4  lw          $a0, 0x1E4($v1)
    ctx->pc = 0x2268f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x2268f4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2268F4u;
    {
        const bool branch_taken_0x2268f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2268f4) {
            ctx->pc = 0x2268F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2268F4u;
            // 0x2268f8: 0x8c6401b8  lw          $a0, 0x1B8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22691Cu;
            goto label_22691c;
        }
    }
    ctx->pc = 0x2268FCu;
    // 0x2268fc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2268fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x226900: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x226900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x226904: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x226904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x226908: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x226908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22690c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x22690cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x226910: 0x8ca20180  lw          $v0, 0x180($a1)
    ctx->pc = 0x226910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x226914: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x226914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x226918: 0x8c6401b8  lw          $a0, 0x1B8($v1)
    ctx->pc = 0x226918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
label_22691c:
    // 0x22691c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22691Cu;
    {
        const bool branch_taken_0x22691c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22691c) {
            ctx->pc = 0x226920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22691Cu;
            // 0x226920: 0x8ca20180  lw          $v0, 0x180($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22693Cu;
            goto label_22693c;
        }
    }
    ctx->pc = 0x226924u;
    // 0x226924: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x226924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x226928: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x226928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22692c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x22692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x226930: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x226930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x226934: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x226934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x226938: 0x8ca20180  lw          $v0, 0x180($a1)
    ctx->pc = 0x226938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
label_22693c:
    // 0x22693c: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x22693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x226940: 0x8c64014c  lw          $a0, 0x14C($v1)
    ctx->pc = 0x226940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x226944: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226944u;
    {
        const bool branch_taken_0x226944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226944) {
            ctx->pc = 0x226960u;
            goto label_226960;
        }
    }
    ctx->pc = 0x22694Cu;
    // 0x22694c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x22694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x226950: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x226954: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x226954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x226958: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x226958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22695c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x22695cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_226960:
    // 0x226960: 0xc095a0c  jal         func_256830
    ctx->pc = 0x226960u;
    SET_GPR_U32(ctx, 31, 0x226968u);
    ctx->pc = 0x256830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256830u, 0x226960u, 0x226968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226968u;
label_226968:
    // 0x226968: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x226968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22696c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22696Cu;
    {
        const bool branch_taken_0x22696c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x226970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22696Cu;
        // 0x226970: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22696c) {
            ctx->pc = 0x226978u;
            goto label_226978;
        }
    }
    ctx->pc = 0x226974u;
    // 0x226974: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x226974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_226978:
    // 0x226978: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x226978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22697c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22697Cu;
    {
        const bool branch_taken_0x22697c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x226980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22697Cu;
        // 0x226980: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22697c) {
            ctx->pc = 0x226988u;
            goto label_226988;
        }
    }
    ctx->pc = 0x226984u;
    // 0x226984: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x226984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_226988:
    // 0x226988: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x226988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x22698c: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x22698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x226990: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x226990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x226994: 0x8c6301e4  lw          $v1, 0x1E4($v1)
    ctx->pc = 0x226994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x226998: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x226998u;
    {
        const bool branch_taken_0x226998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226998) {
            ctx->pc = 0x22699Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226998u;
            // 0x22699c: 0x8c830128  lw          $v1, 0x128($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2269B0u;
            goto label_2269b0;
        }
    }
    ctx->pc = 0x2269A0u;
    // 0x2269a0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2269a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2269a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2269a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2269a8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2269a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2269ac: 0x8c830128  lw          $v1, 0x128($a0)
    ctx->pc = 0x2269acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_2269b0:
    // 0x2269b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2269b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2269b4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2269B4u;
    {
        const bool branch_taken_0x2269b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2269b4) {
            ctx->pc = 0x2269D8u;
            goto label_2269d8;
        }
    }
    ctx->pc = 0x2269BCu;
    // 0x2269bc: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x2269BCu;
    SET_GPR_U32(ctx, 31, 0x2269C4u);
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x2269BCu, 0x2269C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269C4u;
label_2269c4:
    // 0x2269c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2269c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2269c8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2269C8u;
    {
        const bool branch_taken_0x2269c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2269c8) {
            ctx->pc = 0x2269D8u;
            goto label_2269d8;
        }
    }
    ctx->pc = 0x2269D0u;
    // 0x2269d0: 0xc0a5278  jal         func_2949E0
    ctx->pc = 0x2269D0u;
    SET_GPR_U32(ctx, 31, 0x2269D8u);
    ctx->pc = 0x2949E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2949E0u, 0x2269D0u, 0x2269D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269D8u;
label_2269d8:
    // 0x2269d8: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2269D8u;
    SET_GPR_U32(ctx, 31, 0x2269E0u);
    ctx->pc = 0x2269DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2269D8u;
    // 0x2269dc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2269D8u, 0x2269E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269E0u;
label_2269e0:
    // 0x2269e0: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2269e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2269e4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2269e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2269e8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2269e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2269ec: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2269ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2269f0: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2269f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2269f4: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x2269f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x2269f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2269f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2269fc: 0x3c056c04  lui         $a1, 0x6C04
    ctx->pc = 0x2269fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27652 << 16));
    // 0x226a00: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x226a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x226a04: 0x34a58004  ori         $a1, $a1, 0x8004
    ctx->pc = 0x226a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32772);
    // 0x226a08: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x226a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x226a0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x226a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x226a10: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x226a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x226a14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226a18: 0x8cc406e4  lw          $a0, 0x6E4($a2)
    ctx->pc = 0x226a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1764)));
    // 0x226a1c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x226a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x226a20: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x226a20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x226a24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226a28: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x226a28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x226a2c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x226a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226a30: 0x34c607a8  ori         $a2, $a2, 0x7A8
    ctx->pc = 0x226a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1960);
    // 0x226a34: 0xaf8893a0  sw          $t0, -0x6C60($gp)
    ctx->pc = 0x226a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 8));
    // 0x226a38: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x226a38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x226a3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x226a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x226a40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226a44: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x226a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x226a48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226a4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226a50: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x226a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x226a54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226a58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226a5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x226a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x226a60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226a64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226a68: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x226a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x226a6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226a70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226a74: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x226a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x226a78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226a7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226a80: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x226a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x226a84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226a88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226a8c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x226a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x226a90: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226a94: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226a98: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x226a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x226a9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226aa0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226aa4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x226aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x226aa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226aac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226ab0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x226ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x226ab4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226ab8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226abc: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x226abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x226ac0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226ac4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x226ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x226ac8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226acc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x226accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x226ad0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226ad4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x226ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x226ad8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226adc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226ae0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x226ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x226ae4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226ae8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226aec: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x226aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x226af0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226af4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x226af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x226af8: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x226af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x226afc: 0xc09cb32  jal         func_272CC8
    ctx->pc = 0x226AFCu;
    SET_GPR_U32(ctx, 31, 0x226B04u);
    ctx->pc = 0x226B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AFCu;
    // 0x226b00: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272CC8u, 0x226AFCu, 0x226B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B04u;
label_226b04:
    // 0x226b04: 0xc0aa41a  jal         func_2A9068
    ctx->pc = 0x226B04u;
    SET_GPR_U32(ctx, 31, 0x226B0Cu);
    ctx->pc = 0x2A9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9068u, 0x226B04u, 0x226B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B0Cu;
label_226b0c:
    // 0x226b0c: 0xc0aa188  jal         func_2A8620
    ctx->pc = 0x226B0Cu;
    SET_GPR_U32(ctx, 31, 0x226B14u);
    ctx->pc = 0x2A8620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8620u, 0x226B0Cu, 0x226B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B14u;
label_226b14:
    // 0x226b14: 0xc0a3400  jal         func_28D000
    ctx->pc = 0x226B14u;
    SET_GPR_U32(ctx, 31, 0x226B1Cu);
    ctx->pc = 0x28D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D000u, 0x226B14u, 0x226B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B1Cu;
label_226b1c:
    // 0x226b1c: 0xc0a8642  jal         func_2A1908
    ctx->pc = 0x226B1Cu;
    SET_GPR_U32(ctx, 31, 0x226B24u);
    ctx->pc = 0x2A1908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1908u, 0x226B1Cu, 0x226B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B24u;
label_226b24:
    // 0x226b24: 0xc0aaf7e  jal         func_2ABDF8
    ctx->pc = 0x226B24u;
    SET_GPR_U32(ctx, 31, 0x226B2Cu);
    ctx->pc = 0x2ABDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABDF8u, 0x226B24u, 0x226B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B2Cu;
label_226b2c:
    // 0x226b2c: 0xc0a9ade  jal         func_2A6B78
    ctx->pc = 0x226B2Cu;
    SET_GPR_U32(ctx, 31, 0x226B34u);
    ctx->pc = 0x2A6B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B78u, 0x226B2Cu, 0x226B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B34u;
label_226b34:
    // 0x226b34: 0x8f829ca4  lw          $v0, -0x635C($gp)
    ctx->pc = 0x226b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941860)));
    // 0x226b38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226B38u;
    {
        const bool branch_taken_0x226b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B38u;
        // 0x226b3c: 0x8f829ca8  lw          $v0, -0x6358($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b38) {
            ctx->pc = 0x226B4Cu;
            goto label_226b4c;
        }
    }
    ctx->pc = 0x226B40u;
    // 0x226b40: 0xc09621a  jal         func_258868
    ctx->pc = 0x226B40u;
    SET_GPR_U32(ctx, 31, 0x226B48u);
    ctx->pc = 0x258868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258868u, 0x226B40u, 0x226B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B48u;
label_226b48:
    // 0x226b48: 0x8f829ca8  lw          $v0, -0x6358($gp)
    ctx->pc = 0x226b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941864)));
label_226b4c:
    // 0x226b4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226B4Cu;
    {
        const bool branch_taken_0x226b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B4Cu;
        // 0x226b50: 0x8f829cac  lw          $v0, -0x6354($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b4c) {
            ctx->pc = 0x226B60u;
            goto label_226b60;
        }
    }
    ctx->pc = 0x226B54u;
    // 0x226b54: 0xc09621e  jal         func_258878
    ctx->pc = 0x226B54u;
    SET_GPR_U32(ctx, 31, 0x226B5Cu);
    ctx->pc = 0x258878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258878u, 0x226B54u, 0x226B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B5Cu;
label_226b5c:
    // 0x226b5c: 0x8f829cac  lw          $v0, -0x6354($gp)
    ctx->pc = 0x226b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941868)));
label_226b60:
    // 0x226b60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226B60u;
    {
        const bool branch_taken_0x226b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B60u;
        // 0x226b64: 0x8f829c9c  lw          $v0, -0x6364($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b60) {
            ctx->pc = 0x226B74u;
            goto label_226b74;
        }
    }
    ctx->pc = 0x226B68u;
    // 0x226b68: 0xc096218  jal         func_258860
    ctx->pc = 0x226B68u;
    SET_GPR_U32(ctx, 31, 0x226B70u);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x226B68u, 0x226B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B70u;
label_226b70:
    // 0x226b70: 0x8f829c9c  lw          $v0, -0x6364($gp)
    ctx->pc = 0x226b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941852)));
label_226b74:
    // 0x226b74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226B74u;
    {
        const bool branch_taken_0x226b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B74u;
        // 0x226b78: 0x8f829ca0  lw          $v0, -0x6360($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b74) {
            ctx->pc = 0x226B88u;
            goto label_226b88;
        }
    }
    ctx->pc = 0x226B7Cu;
    // 0x226b7c: 0xc096210  jal         func_258840
    ctx->pc = 0x226B7Cu;
    SET_GPR_U32(ctx, 31, 0x226B84u);
    ctx->pc = 0x258840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258840u, 0x226B7Cu, 0x226B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B84u;
label_226b84:
    // 0x226b84: 0x8f829ca0  lw          $v0, -0x6360($gp)
    ctx->pc = 0x226b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941856)));
label_226b88:
    // 0x226b88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226B88u;
    {
        const bool branch_taken_0x226b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b88) {
            ctx->pc = 0x226B98u;
            goto label_226b98;
        }
    }
    ctx->pc = 0x226B90u;
    // 0x226b90: 0xc096214  jal         func_258850
    ctx->pc = 0x226B90u;
    SET_GPR_U32(ctx, 31, 0x226B98u);
    ctx->pc = 0x258850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258850u, 0x226B90u, 0x226B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B98u;
label_226b98:
    // 0x226b98: 0xc09937e  jal         func_264DF8
    ctx->pc = 0x226B98u;
    SET_GPR_U32(ctx, 31, 0x226BA0u);
    ctx->pc = 0x264DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264DF8u, 0x226B98u, 0x226BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BA0u;
label_226ba0:
    // 0x226ba0: 0xc09f128  jal         func_27C4A0
    ctx->pc = 0x226BA0u;
    SET_GPR_U32(ctx, 31, 0x226BA8u);
    ctx->pc = 0x27C4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C4A0u, 0x226BA0u, 0x226BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BA8u;
label_226ba8:
    // 0x226ba8: 0xc0a599e  jal         func_296678
    ctx->pc = 0x226BA8u;
    SET_GPR_U32(ctx, 31, 0x226BB0u);
    ctx->pc = 0x296678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296678u, 0x226BA8u, 0x226BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BB0u;
label_226bb0:
    // 0x226bb0: 0xc0a0fa2  jal         func_283E88
    ctx->pc = 0x226BB0u;
    SET_GPR_U32(ctx, 31, 0x226BB8u);
    ctx->pc = 0x283E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283E88u, 0x226BB0u, 0x226BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BB8u;
label_226bb8:
    // 0x226bb8: 0xc0acb5a  jal         func_2B2D68
    ctx->pc = 0x226BB8u;
    SET_GPR_U32(ctx, 31, 0x226BC0u);
    ctx->pc = 0x2B2D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2D68u, 0x226BB8u, 0x226BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BC0u;
label_226bc0:
    // 0x226bc0: 0xc0833fe  jal         func_20CFF8
    ctx->pc = 0x226BC0u;
    SET_GPR_U32(ctx, 31, 0x226BC8u);
    ctx->pc = 0x20CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CFF8u, 0x226BC0u, 0x226BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BC8u;
label_226bc8:
    // 0x226bc8: 0xc08b34c  jal         func_22CD30
    ctx->pc = 0x226BC8u;
    SET_GPR_U32(ctx, 31, 0x226BD0u);
    ctx->pc = 0x22CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CD30u, 0x226BC8u, 0x226BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BD0u;
label_226bd0:
    // 0x226bd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_226bd4:
    // 0x226bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x226BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BD4u;
        // 0x226bd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226BDCu;
}
