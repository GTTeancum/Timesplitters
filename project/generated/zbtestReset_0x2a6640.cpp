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

// Function: zbtestReset
// Address: 0x2a6640 - 0x2a6724
void zbtestReset_0x2a6640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestReset_0x2a6640");
#endif

    switch (ctx->pc) {
        case 0x2a665cu: goto label_2a665c;
        case 0x2a6688u: goto label_2a6688;
        case 0x2a66a4u: goto label_2a66a4;
        case 0x2a66b0u: goto label_2a66b0;
        case 0x2a66c4u: goto label_2a66c4;
        case 0x2a66d0u: goto label_2a66d0;
        case 0x2a66e4u: goto label_2a66e4;
        case 0x2a66fcu: goto label_2a66fc;
        case 0x2a6714u: goto label_2a6714;
        default: break;
    }

    ctx->pc = 0x2a6640u;

    // 0x2a6640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6644: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x2a6644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x2a6648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a664c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a6654: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2A6654u;
    SET_GPR_U32(ctx, 31, 0x2A665Cu);
    ctx->pc = 0x2A6658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6654u;
    // 0x2a6658: 0x34846040  ori         $a0, $a0, 0x6040 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24640);
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2A6654u, 0x2A665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A665Cu;
label_2a665c:
    // 0x2a665c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a665cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2a6660: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x2a6660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2a6664: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x2a6664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x2a6668: 0x8f859f70  lw          $a1, -0x6090($gp)
    ctx->pc = 0x2a6668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2a666c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6670: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x2a6670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2a6674: 0x10a4001c  beq         $a1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A6674u;
    {
        const bool branch_taken_0x2a6674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6674u;
        // 0x2a6678: 0xaf82b314  sw          $v0, -0x4CEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6674) {
            ctx->pc = 0x2A66E8u;
            goto label_2a66e8;
        }
    }
    ctx->pc = 0x2A667Cu;
    // 0x2a667c: 0x24043cc0  addiu       $a0, $zero, 0x3CC0
    ctx->pc = 0x2a667cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15552));
    // 0x2a6680: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2A6680u;
    SET_GPR_U32(ctx, 31, 0x2A6688u);
    ctx->pc = 0x2A6684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6680u;
    // 0x2a6684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2A6680u, 0x2A6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6688u;
label_2a6688:
    // 0x2a6688: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2a6688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2a668c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a668cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6690: 0xae02a590  sw          $v0, -0x5A70($s0)
    ctx->pc = 0x2a6690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36A590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A590u, _value); } while (0);
    // 0x2a6694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6698: 0x2610a590  addiu       $s0, $s0, -0x5A70
    ctx->pc = 0x2a6698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944144));
    // 0x2a669c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2A669Cu;
    SET_GPR_U32(ctx, 31, 0x2A66A4u);
    ctx->pc = 0x2A66A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A669Cu;
    // 0x2a66a0: 0x24063cc0  addiu       $a2, $zero, 0x3CC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2A669Cu, 0x2A66A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66A4u;
label_2a66a4:
    // 0x2a66a4: 0x24043cc0  addiu       $a0, $zero, 0x3CC0
    ctx->pc = 0x2a66a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15552));
    // 0x2a66a8: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2A66A8u;
    SET_GPR_U32(ctx, 31, 0x2A66B0u);
    ctx->pc = 0x2A66ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66A8u;
    // 0x2a66ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2A66A8u, 0x2A66B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66B0u;
label_2a66b0:
    // 0x2a66b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a66b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a66b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a66b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2a66bc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2A66BCu;
    SET_GPR_U32(ctx, 31, 0x2A66C4u);
    ctx->pc = 0x2A66C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66BCu;
    // 0x2a66c0: 0x24063cc0  addiu       $a2, $zero, 0x3CC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2A66BCu, 0x2A66C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66C4u;
label_2a66c4:
    // 0x2a66c4: 0x24043cc0  addiu       $a0, $zero, 0x3CC0
    ctx->pc = 0x2a66c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15552));
    // 0x2a66c8: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2A66C8u;
    SET_GPR_U32(ctx, 31, 0x2A66D0u);
    ctx->pc = 0x2A66CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66C8u;
    // 0x2a66cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2A66C8u, 0x2A66D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66D0u;
label_2a66d0:
    // 0x2a66d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a66d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2a66d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a66d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66dc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2A66DCu;
    SET_GPR_U32(ctx, 31, 0x2A66E4u);
    ctx->pc = 0x2A66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66DCu;
    // 0x2a66e0: 0x24063cc0  addiu       $a2, $zero, 0x3CC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2A66DCu, 0x2A66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66E4u;
label_2a66e4:
    // 0x2a66e4: 0x8f859f70  lw          $a1, -0x6090($gp)
    ctx->pc = 0x2a66e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
label_2a66e8:
    // 0x2a66e8: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a66ec: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A66ECu;
    {
        const bool branch_taken_0x2a66ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66ECu;
        // 0x2a66f0: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66ec) {
            ctx->pc = 0x2A6714u;
            goto label_2a6714;
        }
    }
    ctx->pc = 0x2A66F4u;
    // 0x2a66f4: 0xc0896c4  jal         func_225B10
    ctx->pc = 0x2A66F4u;
    SET_GPR_U32(ctx, 31, 0x2A66FCu);
    ctx->pc = 0x2A66F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66F4u;
    // 0x2a66f8: 0x2610a5b0  addiu       $s0, $s0, -0x5A50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B10u, 0x2A66F4u, 0x2A66FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66FCu;
label_2a66fc:
    // 0x2a66fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a6700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6704: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a6704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a6708: 0x2786b318  addiu       $a2, $gp, -0x4CE8
    ctx->pc = 0x2a6708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947608));
    // 0x2a670c: 0xc0ade6e  jal         func_2B79B8
    ctx->pc = 0x2A670Cu;
    SET_GPR_U32(ctx, 31, 0x2A6714u);
    ctx->pc = 0x2A6710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A670Cu;
    // 0x2a6710: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79B8u, 0x2A670Cu, 0x2A6714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6714u;
label_2a6714:
    // 0x2a6714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a671c: 0x80a9982  j           func_2A6608
    ctx->pc = 0x2A671Cu;
    ctx->pc = 0x2A6720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A671Cu;
    // 0x2a6720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6608u;
    zbtestRestart_0x2a6608(rdram, ctx, runtime); return;
    ctx->pc = 0x2A6724u;
}
