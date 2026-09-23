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

// Function: playerPreload
// Address: 0x27f4d8 - 0x27f5a8
void playerPreload_0x27f4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerPreload_0x27f4d8");
#endif

    switch (ctx->pc) {
        case 0x27f4ecu: goto label_27f4ec;
        case 0x27f4fcu: goto label_27f4fc;
        case 0x27f510u: goto label_27f510;
        case 0x27f534u: goto label_27f534;
        case 0x27f548u: goto label_27f548;
        case 0x27f568u: goto label_27f568;
        case 0x27f580u: goto label_27f580;
        case 0x27f588u: goto label_27f588;
        case 0x27f590u: goto label_27f590;
        default: break;
    }

    ctx->pc = 0x27f4d8u;

    // 0x27f4d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27f4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27f4dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27f4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27f4e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27f4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27f4e4: 0xc08969c  jal         func_225A70
    ctx->pc = 0x27F4E4u;
    SET_GPR_U32(ctx, 31, 0x27F4ECu);
    ctx->pc = 0x27F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F4E4u;
    // 0x27f4e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225A70u, 0x27F4E4u, 0x27F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4ECu;
label_27f4ec:
    // 0x27f4ec: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F4ECu;
    {
        const bool branch_taken_0x27f4ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27f4ec) {
            ctx->pc = 0x27F4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F4ECu;
            // 0x27f4f0: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F500u;
            goto label_27f500;
        }
    }
    ctx->pc = 0x27F4F4u;
    // 0x27f4f4: 0xc099c88  jal         func_267220
    ctx->pc = 0x27F4F4u;
    SET_GPR_U32(ctx, 31, 0x27F4FCu);
    ctx->pc = 0x27F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F4F4u;
    // 0x27f4f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x27F4F4u, 0x27F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4FCu;
label_27f4fc:
    // 0x27f4fc: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x27f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_27f500:
    // 0x27f500: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x27F500u;
    {
        const bool branch_taken_0x27f500 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F500u;
        // 0x27f504: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f500) {
            ctx->pc = 0x27F578u;
            goto label_27f578;
        }
    }
    ctx->pc = 0x27F508u;
    // 0x27f508: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x27f508u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x27f50c: 0x2622c4a8  addiu       $v0, $s1, -0x3B58
    ctx->pc = 0x27f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
label_27f510:
    // 0x27f510: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x27f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x27f514: 0x30432000  andi        $v1, $v0, 0x2000
    ctx->pc = 0x27f514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x27f518: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27F518u;
    {
        const bool branch_taken_0x27f518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F518u;
        // 0x27f51c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f518) {
            ctx->pc = 0x27F55Cu;
            goto label_27f55c;
        }
    }
    ctx->pc = 0x27F520u;
    // 0x27f520: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x27f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x27f524: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F524u;
    {
        const bool branch_taken_0x27f524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f524) {
            ctx->pc = 0x27F540u;
            goto label_27f540;
        }
    }
    ctx->pc = 0x27F52Cu;
    // 0x27f52c: 0xc087c18  jal         func_21F060
    ctx->pc = 0x27F52Cu;
    SET_GPR_U32(ctx, 31, 0x27F534u);
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x27F52Cu, 0x27F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F534u;
label_27f534:
    // 0x27f534: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x27f534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x27f538: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27F538u;
    {
        const bool branch_taken_0x27f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F538u;
        // 0x27f53c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f538) {
            ctx->pc = 0x27F55Cu;
            goto label_27f55c;
        }
    }
    ctx->pc = 0x27F540u;
label_27f540:
    // 0x27f540: 0xc08828c  jal         func_220A30
    ctx->pc = 0x27F540u;
    SET_GPR_U32(ctx, 31, 0x27F548u);
    ctx->pc = 0x27F544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F540u;
    // 0x27f544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x27F540u, 0x27F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F548u;
label_27f548:
    // 0x27f548: 0x24030b78  addiu       $v1, $zero, 0xB78
    ctx->pc = 0x27f548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x27f54c: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x27f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x27f550: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x27f550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27f554: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27f558: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x27f558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_27f55c:
    // 0x27f55c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27f55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f560: 0xc0a21fa  jal         func_2887E8
    ctx->pc = 0x27F560u;
    SET_GPR_U32(ctx, 31, 0x27F568u);
    ctx->pc = 0x27F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F560u;
    // 0x27f564: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2887E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2887E8u, 0x27F560u, 0x27F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F568u;
label_27f568:
    // 0x27f568: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x27f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x27f56c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27f56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27f570: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x27F570u;
    {
        const bool branch_taken_0x27f570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F570u;
        // 0x27f574: 0x2622c4a8  addiu       $v0, $s1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f570) {
            ctx->pc = 0x27F510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f510;
        }
    }
    ctx->pc = 0x27F578u;
label_27f578:
    // 0x27f578: 0xc099c88  jal         func_267220
    ctx->pc = 0x27F578u;
    SET_GPR_U32(ctx, 31, 0x27F580u);
    ctx->pc = 0x27F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F578u;
    // 0x27f57c: 0x240401ab  addiu       $a0, $zero, 0x1AB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x27F578u, 0x27F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F580u;
label_27f580:
    // 0x27f580: 0xc099c88  jal         func_267220
    ctx->pc = 0x27F580u;
    SET_GPR_U32(ctx, 31, 0x27F588u);
    ctx->pc = 0x27F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F580u;
    // 0x27f584: 0x240401ac  addiu       $a0, $zero, 0x1AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x27F580u, 0x27F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F588u;
label_27f588:
    // 0x27f588: 0xc099c88  jal         func_267220
    ctx->pc = 0x27F588u;
    SET_GPR_U32(ctx, 31, 0x27F590u);
    ctx->pc = 0x27F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F588u;
    // 0x27f58c: 0x240401ad  addiu       $a0, $zero, 0x1AD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 429));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x27F588u, 0x27F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F590u;
label_27f590:
    // 0x27f590: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27f590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f594: 0x240401ae  addiu       $a0, $zero, 0x1AE
    ctx->pc = 0x27f594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x27f598: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27f598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f59c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27f59cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f5a0: 0x8099c88  j           func_267220
    ctx->pc = 0x27F5A0u;
    ctx->pc = 0x27F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F5A0u;
    // 0x27f5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    propAddPreLoad_0x267220(rdram, ctx, runtime); return;
    ctx->pc = 0x27F5A8u;
}
