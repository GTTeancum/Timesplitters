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

// Function: cdvd_exit
// Address: 0x2de208 - 0x2de264
void cdvd_exit_0x2de208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cdvd_exit_0x2de208");
#endif

    switch (ctx->pc) {
        case 0x2de238u: goto label_2de238;
        case 0x2de244u: goto label_2de244;
        case 0x2de250u: goto label_2de250;
        default: break;
    }

    ctx->pc = 0x2de208u;

    // 0x2de208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de20c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2de20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2de210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de214: 0x8c622f9c  lw          $v0, 0x2F9C($v1)
    ctx->pc = 0x2de214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382F9Cu));
    // 0x2de218: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2de218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2de21c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DE21Cu;
    {
        const bool branch_taken_0x2de21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE21Cu;
        // 0x2de220: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de21c) {
            ctx->pc = 0x2DE238u;
            goto label_2de238;
        }
    }
    ctx->pc = 0x2DE224u;
    // 0x2de224: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2de224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2de228: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2de228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de22c: 0xac622fe0  sw          $v0, 0x2FE0($v1)
    ctx->pc = 0x2de22cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x382FE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382FE0u, _value); } while (0);
    // 0x2de230: 0xc0b4050  jal         func_2D0140
    ctx->pc = 0x2DE230u;
    SET_GPR_U32(ctx, 31, 0x2DE238u);
    ctx->pc = 0x2DE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE230u;
    // 0x2de234: 0x8e042fa8  lw          $a0, 0x2FA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0140u, 0x2DE230u, 0x2DE238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE238u;
label_2de238:
    // 0x2de238: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2de238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2de23c: 0xc0b404c  jal         func_2D0130
    ctx->pc = 0x2DE23Cu;
    SET_GPR_U32(ctx, 31, 0x2DE244u);
    ctx->pc = 0x2DE240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE23Cu;
    // 0x2de240: 0x8c442fa0  lw          $a0, 0x2FA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0130u, 0x2DE23Cu, 0x2DE244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE244u;
label_2de244:
    // 0x2de244: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2de244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2de248: 0xc0b404c  jal         func_2D0130
    ctx->pc = 0x2DE248u;
    SET_GPR_U32(ctx, 31, 0x2DE250u);
    ctx->pc = 0x2DE24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE248u;
    // 0x2de24c: 0x8c642fa4  lw          $a0, 0x2FA4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0130u, 0x2DE248u, 0x2DE250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE250u;
label_2de250:
    // 0x2de250: 0x8e042fa8  lw          $a0, 0x2FA8($s0)
    ctx->pc = 0x2de250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12200)));
    // 0x2de254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de25c: 0x80b404c  j           func_2D0130
    ctx->pc = 0x2DE25Cu;
    ctx->pc = 0x2DE260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE25Cu;
    // 0x2de260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0130u;
    DeleteSema_0x2d0130(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE264u;
}
