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

// Function: debugmenuGfx
// Address: 0x20db90 - 0x20dbec
void debugmenuGfx_0x20db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugmenuGfx_0x20db90");
#endif

    switch (ctx->pc) {
        case 0x20dba8u: goto label_20dba8;
        case 0x20dbbcu: goto label_20dbbc;
        case 0x20dbd0u: goto label_20dbd0;
        default: break;
    }

    ctx->pc = 0x20db90u;

    // 0x20db90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20db94: 0x8f829d08  lw          $v0, -0x62F8($gp)
    ctx->pc = 0x20db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941960)));
    // 0x20db98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DB98u;
    {
        const bool branch_taken_0x20db98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB98u;
        // 0x20db9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db98) {
            ctx->pc = 0x20DBA8u;
            goto label_20dba8;
        }
    }
    ctx->pc = 0x20DBA0u;
    // 0x20dba0: 0xc0836cc  jal         func_20DB30
    ctx->pc = 0x20DBA0u;
    SET_GPR_U32(ctx, 31, 0x20DBA8u);
    ctx->pc = 0x20DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB30u, 0x20DBA0u, 0x20DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBA8u;
label_20dba8:
    // 0x20dba8: 0x8f829d0c  lw          $v0, -0x62F4($gp)
    ctx->pc = 0x20dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941964)));
    // 0x20dbac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DBACu;
    {
        const bool branch_taken_0x20dbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBACu;
        // 0x20dbb0: 0x8f829cb8  lw          $v0, -0x6348($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbac) {
            ctx->pc = 0x20DBC0u;
            goto label_20dbc0;
        }
    }
    ctx->pc = 0x20DBB4u;
    // 0x20dbb4: 0xc0836ce  jal         func_20DB38
    ctx->pc = 0x20DBB4u;
    SET_GPR_U32(ctx, 31, 0x20DBBCu);
    ctx->pc = 0x20DB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB38u, 0x20DBB4u, 0x20DBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBBCu;
label_20dbbc:
    // 0x20dbbc: 0x8f829cb8  lw          $v0, -0x6348($gp)
    ctx->pc = 0x20dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941880)));
label_20dbc0:
    // 0x20dbc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DBC0u;
    {
        const bool branch_taken_0x20dbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBC0u;
        // 0x20dbc4: 0x8f829c74  lw          $v0, -0x638C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbc0) {
            ctx->pc = 0x20DBD4u;
            goto label_20dbd4;
        }
    }
    ctx->pc = 0x20DBC8u;
    // 0x20dbc8: 0xc0836d0  jal         func_20DB40
    ctx->pc = 0x20DBC8u;
    SET_GPR_U32(ctx, 31, 0x20DBD0u);
    ctx->pc = 0x20DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB40u, 0x20DBC8u, 0x20DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBD0u;
label_20dbd0:
    // 0x20dbd0: 0x8f829c74  lw          $v0, -0x638C($gp)
    ctx->pc = 0x20dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941812)));
label_20dbd4:
    // 0x20dbd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DBD4u;
    {
        const bool branch_taken_0x20dbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBD4u;
        // 0x20dbd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbd4) {
            ctx->pc = 0x20DBE4u;
            goto label_20dbe4;
        }
    }
    ctx->pc = 0x20DBDCu;
    // 0x20dbdc: 0x8083516  j           func_20D458
    ctx->pc = 0x20DBDCu;
    ctx->pc = 0x20DBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DBDCu;
    // 0x20dbe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D458u;
    menuTextBoxGfx_0x20d458(rdram, ctx, runtime); return;
    ctx->pc = 0x20DBE4u;
label_20dbe4:
    // 0x20dbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x20DBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBE4u;
        // 0x20dbe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DBECu;
}
