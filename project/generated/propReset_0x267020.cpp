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

// Function: propReset
// Address: 0x267020 - 0x267168
void propReset_0x267020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propReset_0x267020");
#endif

    switch (ctx->pc) {
        case 0x267050u: goto label_267050;
        case 0x267060u: goto label_267060;
        case 0x267070u: goto label_267070;
        case 0x267080u: goto label_267080;
        case 0x267090u: goto label_267090;
        case 0x2670a0u: goto label_2670a0;
        case 0x2670b0u: goto label_2670b0;
        case 0x2670c0u: goto label_2670c0;
        case 0x2670d8u: goto label_2670d8;
        case 0x267100u: goto label_267100;
        case 0x267124u: goto label_267124;
        case 0x26712cu: goto label_26712c;
        case 0x267140u: goto label_267140;
        default: break;
    }

    ctx->pc = 0x267020u;

    // 0x267020: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x267020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x267024: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x267024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x267028: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x267028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x26702c: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x26702cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x267030: 0x38630066  xori        $v1, $v1, 0x66
    ctx->pc = 0x267030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)102);
    // 0x267034: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x267034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x267038: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x267038u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x26703c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26703cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267040: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x267040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x267044: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x267044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267048: 0xc08070e  jal         func_201C38
    ctx->pc = 0x267048u;
    SET_GPR_U32(ctx, 31, 0x267050u);
    ctx->pc = 0x26704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267048u;
    // 0x26704c: 0xaf82b078  sw          $v0, -0x4F88($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946936), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x267048u, 0x267050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267050u;
label_267050:
    // 0x267050: 0xaf82b07c  sw          $v0, -0x4F84($gp)
    ctx->pc = 0x267050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946940), GPR_U32(ctx, 2));
    // 0x267054: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x267054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x267058: 0xc08070e  jal         func_201C38
    ctx->pc = 0x267058u;
    SET_GPR_U32(ctx, 31, 0x267060u);
    ctx->pc = 0x26705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267058u;
    // 0x26705c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x267058u, 0x267060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267060u;
label_267060:
    // 0x267060: 0xaf82b080  sw          $v0, -0x4F80($gp)
    ctx->pc = 0x267060u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946944), GPR_U32(ctx, 2));
    // 0x267064: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x267064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x267068: 0xc08070e  jal         func_201C38
    ctx->pc = 0x267068u;
    SET_GPR_U32(ctx, 31, 0x267070u);
    ctx->pc = 0x26706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267068u;
    // 0x26706c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x267068u, 0x267070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267070u;
label_267070:
    // 0x267070: 0xaf82b088  sw          $v0, -0x4F78($gp)
    ctx->pc = 0x267070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946952), GPR_U32(ctx, 2));
    // 0x267074: 0x24040db0  addiu       $a0, $zero, 0xDB0
    ctx->pc = 0x267074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3504));
    // 0x267078: 0xc08070e  jal         func_201C38
    ctx->pc = 0x267078u;
    SET_GPR_U32(ctx, 31, 0x267080u);
    ctx->pc = 0x26707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267078u;
    // 0x26707c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x267078u, 0x267080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267080u;
label_267080:
    // 0x267080: 0xaf82b090  sw          $v0, -0x4F70($gp)
    ctx->pc = 0x267080u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946960), GPR_U32(ctx, 2));
    // 0x267084: 0x24040a90  addiu       $a0, $zero, 0xA90
    ctx->pc = 0x267084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2704));
    // 0x267088: 0xc08070e  jal         func_201C38
    ctx->pc = 0x267088u;
    SET_GPR_U32(ctx, 31, 0x267090u);
    ctx->pc = 0x26708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267088u;
    // 0x26708c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x267088u, 0x267090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267090u;
label_267090:
    // 0x267090: 0xaf82b094  sw          $v0, -0x4F6C($gp)
    ctx->pc = 0x267090u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946964), GPR_U32(ctx, 2));
    // 0x267094: 0x24040690  addiu       $a0, $zero, 0x690
    ctx->pc = 0x267094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
    // 0x267098: 0xc08070e  jal         func_201C38
    ctx->pc = 0x267098u;
    SET_GPR_U32(ctx, 31, 0x2670A0u);
    ctx->pc = 0x26709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267098u;
    // 0x26709c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x267098u, 0x2670A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670A0u;
label_2670a0:
    // 0x2670a0: 0xaf82b09c  sw          $v0, -0x4F64($gp)
    ctx->pc = 0x2670a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946972), GPR_U32(ctx, 2));
    // 0x2670a4: 0x24043840  addiu       $a0, $zero, 0x3840
    ctx->pc = 0x2670a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14400));
    // 0x2670a8: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2670A8u;
    SET_GPR_U32(ctx, 31, 0x2670B0u);
    ctx->pc = 0x2670ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670A8u;
    // 0x2670ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2670A8u, 0x2670B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670B0u;
label_2670b0:
    // 0x2670b0: 0xaf82b0a8  sw          $v0, -0x4F58($gp)
    ctx->pc = 0x2670b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946984), GPR_U32(ctx, 2));
    // 0x2670b4: 0x240412c0  addiu       $a0, $zero, 0x12C0
    ctx->pc = 0x2670b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4800));
    // 0x2670b8: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2670B8u;
    SET_GPR_U32(ctx, 31, 0x2670C0u);
    ctx->pc = 0x2670BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670B8u;
    // 0x2670bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2670B8u, 0x2670C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670C0u;
label_2670c0:
    // 0x2670c0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2670c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2670c4: 0xaf82b0a0  sw          $v0, -0x4F60($gp)
    ctx->pc = 0x2670c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946976), GPR_U32(ctx, 2));
    // 0x2670c8: 0x246390c0  addiu       $v1, $v1, -0x6F40
    ctx->pc = 0x2670c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938816));
    // 0x2670cc: 0x240402c8  addiu       $a0, $zero, 0x2C8
    ctx->pc = 0x2670ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
    // 0x2670d0: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x2670d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2670d4: 0x0  nop
    ctx->pc = 0x2670d4u;
    // NOP
label_2670d8:
    // 0x2670d8: 0xac60fff0  sw          $zero, -0x10($v1)
    ctx->pc = 0x2670d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 0));
    // 0x2670dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2670dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2670e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2670e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2670e4: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x2670e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2670e8: 0x0  nop
    ctx->pc = 0x2670e8u;
    // NOP
    // 0x2670ec: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2670ECu;
    {
        const bool branch_taken_0x2670ec = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2670ec) {
            ctx->pc = 0x2670D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2670d8;
        }
    }
    ctx->pc = 0x2670F4u;
    // 0x2670f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2670f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2670f8: 0x240402c8  addiu       $a0, $zero, 0x2C8
    ctx->pc = 0x2670f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
    // 0x2670fc: 0x2442ebd8  addiu       $v0, $v0, -0x1428
    ctx->pc = 0x2670fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962136));
label_267100:
    // 0x267100: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x267100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x267104: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x267104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x267108: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x267108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x26710c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x26710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x267110: 0x0  nop
    ctx->pc = 0x267110u;
    // NOP
    // 0x267114: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x267114u;
    {
        const bool branch_taken_0x267114 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x267114) {
            ctx->pc = 0x267100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267100;
        }
    }
    ctx->pc = 0x26711Cu;
    // 0x26711c: 0xc099b66  jal         func_266D98
    ctx->pc = 0x26711Cu;
    SET_GPR_U32(ctx, 31, 0x267124u);
    ctx->pc = 0x266D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D98u, 0x26711Cu, 0x267124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267124u;
label_267124:
    // 0x267124: 0xc099bb0  jal         func_266EC0
    ctx->pc = 0x267124u;
    SET_GPR_U32(ctx, 31, 0x26712Cu);
    ctx->pc = 0x266EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266EC0u, 0x267124u, 0x26712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26712Cu;
label_26712c:
    // 0x26712c: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x26712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x267130: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x267130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x267134: 0x24420d50  addiu       $v0, $v0, 0xD50
    ctx->pc = 0x267134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3408));
    // 0x267138: 0x2442004f  addiu       $v0, $v0, 0x4F
    ctx->pc = 0x267138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
    // 0x26713c: 0x0  nop
    ctx->pc = 0x26713cu;
    // NOP
label_267140:
    // 0x267140: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x267140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x267144: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x267144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x267148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x267148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26714c: 0x0  nop
    ctx->pc = 0x26714cu;
    // NOP
    // 0x267150: 0x0  nop
    ctx->pc = 0x267150u;
    // NOP
    // 0x267154: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x267154u;
    {
        const bool branch_taken_0x267154 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x267154) {
            ctx->pc = 0x267140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267140;
        }
    }
    ctx->pc = 0x26715Cu;
    // 0x26715c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26715cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267160: 0x3e00008  jr          $ra
    ctx->pc = 0x267160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267160u;
        // 0x267164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267168u;
}
