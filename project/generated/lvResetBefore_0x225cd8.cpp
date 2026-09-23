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

// Function: lvResetBefore
// Address: 0x225cd8 - 0x225d98
void lvResetBefore_0x225cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvResetBefore_0x225cd8");
#endif

    switch (ctx->pc) {
        case 0x225d00u: goto label_225d00;
        case 0x225d08u: goto label_225d08;
        case 0x225d10u: goto label_225d10;
        case 0x225d18u: goto label_225d18;
        case 0x225d20u: goto label_225d20;
        case 0x225d28u: goto label_225d28;
        case 0x225d44u: goto label_225d44;
        case 0x225d4cu: goto label_225d4c;
        case 0x225d54u: goto label_225d54;
        case 0x225d5cu: goto label_225d5c;
        case 0x225d64u: goto label_225d64;
        case 0x225d6cu: goto label_225d6c;
        case 0x225d74u: goto label_225d74;
        case 0x225d7cu: goto label_225d7c;
        case 0x225d84u: goto label_225d84;
        case 0x225d8cu: goto label_225d8c;
        default: break;
    }

    ctx->pc = 0x225cd8u;

    // 0x225cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225cdc: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x225cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x225ce0: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x225ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x225ce4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225CE4u;
    {
        const bool branch_taken_0x225ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x225CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CE4u;
        // 0x225ce8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ce4) {
            ctx->pc = 0x225CF4u;
            goto label_225cf4;
        }
    }
    ctx->pc = 0x225CECu;
    // 0x225cec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x225CECu;
    {
        const bool branch_taken_0x225cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CECu;
        // 0x225cf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cec) {
            ctx->pc = 0x225CF8u;
            goto label_225cf8;
        }
    }
    ctx->pc = 0x225CF4u;
label_225cf4:
    // 0x225cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x225cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_225cf8:
    // 0x225cf8: 0xc0869be  jal         func_21A6F8
    ctx->pc = 0x225CF8u;
    SET_GPR_U32(ctx, 31, 0x225D00u);
    ctx->pc = 0x225CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CF8u;
    // 0x225cfc: 0xaf829f60  sw          $v0, -0x60A0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A6F8u, 0x225CF8u, 0x225D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D00u;
label_225d00:
    // 0x225d00: 0xc08574e  jal         func_215D38
    ctx->pc = 0x225D00u;
    SET_GPR_U32(ctx, 31, 0x225D08u);
    ctx->pc = 0x215D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215D38u, 0x225D00u, 0x225D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D08u;
label_225d08:
    // 0x225d08: 0xc0807be  jal         func_201EF8
    ctx->pc = 0x225D08u;
    SET_GPR_U32(ctx, 31, 0x225D10u);
    ctx->pc = 0x225D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D08u;
    // 0x225d0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201EF8u, 0x225D08u, 0x225D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D10u;
label_225d10:
    // 0x225d10: 0xc0adab4  jal         func_2B6AD0
    ctx->pc = 0x225D10u;
    SET_GPR_U32(ctx, 31, 0x225D18u);
    ctx->pc = 0x2B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6AD0u, 0x225D10u, 0x225D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D18u;
label_225d18:
    // 0x225d18: 0xc08707e  jal         func_21C1F8
    ctx->pc = 0x225D18u;
    SET_GPR_U32(ctx, 31, 0x225D20u);
    ctx->pc = 0x21C1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C1F8u, 0x225D18u, 0x225D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D20u;
label_225d20:
    // 0x225d20: 0xc0a9990  jal         func_2A6640
    ctx->pc = 0x225D20u;
    SET_GPR_U32(ctx, 31, 0x225D28u);
    ctx->pc = 0x2A6640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6640u, 0x225D20u, 0x225D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D28u;
label_225d28:
    // 0x225d28: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x225d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x225d2c: 0x2442ff9a  addiu       $v0, $v0, -0x66
    ctx->pc = 0x225d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967194));
    // 0x225d30: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x225d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x225d34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225D34u;
    {
        const bool branch_taken_0x225d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225d34) {
            ctx->pc = 0x225D44u;
            goto label_225d44;
        }
    }
    ctx->pc = 0x225D3Cu;
    // 0x225d3c: 0xc081e9a  jal         func_207A68
    ctx->pc = 0x225D3Cu;
    SET_GPR_U32(ctx, 31, 0x225D44u);
    ctx->pc = 0x207A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A68u, 0x225D3Cu, 0x225D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D44u;
label_225d44:
    // 0x225d44: 0xc0b36c0  jal         func_2CDB00
    ctx->pc = 0x225D44u;
    SET_GPR_U32(ctx, 31, 0x225D4Cu);
    ctx->pc = 0x2CDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDB00u, 0x225D44u, 0x225D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D4Cu;
label_225d4c:
    // 0x225d4c: 0xc097466  jal         func_25D198
    ctx->pc = 0x225D4Cu;
    SET_GPR_U32(ctx, 31, 0x225D54u);
    ctx->pc = 0x25D198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D198u, 0x225D4Cu, 0x225D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D54u;
label_225d54:
    // 0x225d54: 0xc099c08  jal         func_267020
    ctx->pc = 0x225D54u;
    SET_GPR_U32(ctx, 31, 0x225D5Cu);
    ctx->pc = 0x267020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267020u, 0x225D54u, 0x225D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D5Cu;
label_225d5c:
    // 0x225d5c: 0xc0a13fe  jal         func_284FF8
    ctx->pc = 0x225D5Cu;
    SET_GPR_U32(ctx, 31, 0x225D64u);
    ctx->pc = 0x284FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FF8u, 0x225D5Cu, 0x225D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D64u;
label_225d64:
    // 0x225d64: 0xc09f8c0  jal         func_27E300
    ctx->pc = 0x225D64u;
    SET_GPR_U32(ctx, 31, 0x225D6Cu);
    ctx->pc = 0x27E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E300u, 0x225D64u, 0x225D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D6Cu;
label_225d6c:
    // 0x225d6c: 0xc083104  jal         func_20C410
    ctx->pc = 0x225D6Cu;
    SET_GPR_U32(ctx, 31, 0x225D74u);
    ctx->pc = 0x20C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C410u, 0x225D6Cu, 0x225D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D74u;
label_225d74:
    // 0x225d74: 0xc08b2aa  jal         func_22CAA8
    ctx->pc = 0x225D74u;
    SET_GPR_U32(ctx, 31, 0x225D7Cu);
    ctx->pc = 0x22CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CAA8u, 0x225D74u, 0x225D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D7Cu;
label_225d7c:
    // 0x225d7c: 0xc0ae810  jal         func_2BA040
    ctx->pc = 0x225D7Cu;
    SET_GPR_U32(ctx, 31, 0x225D84u);
    ctx->pc = 0x2BA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA040u, 0x225D7Cu, 0x225D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D84u;
label_225d84:
    // 0x225d84: 0xc081194  jal         func_204650
    ctx->pc = 0x225D84u;
    SET_GPR_U32(ctx, 31, 0x225D8Cu);
    ctx->pc = 0x204650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204650u, 0x225D84u, 0x225D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D8Cu;
label_225d8c:
    // 0x225d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225d90: 0x80969c6  j           func_25A718
    ctx->pc = 0x225D90u;
    ctx->pc = 0x225D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D90u;
    // 0x225d94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A718u;
    bglightReset_0x25a718(rdram, ctx, runtime); return;
    ctx->pc = 0x225D98u;
}
