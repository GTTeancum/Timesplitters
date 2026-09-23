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

// Function: obResetTextures
// Address: 0x25eb98 - 0x25ebe0
void obResetTextures_0x25eb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obResetTextures_0x25eb98");
#endif

    switch (ctx->pc) {
        case 0x25ebc0u: goto label_25ebc0;
        case 0x25ebc8u: goto label_25ebc8;
        case 0x25ebd0u: goto label_25ebd0;
        default: break;
    }

    ctx->pc = 0x25eb98u;

    // 0x25eb98: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x25eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x25eb9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25eb9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25eba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25eba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25eba4: 0x24629020  addiu       $v0, $v1, -0x6FE0
    ctx->pc = 0x25eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938656));
    // 0x25eba8: 0xac609020  sw          $zero, -0x6FE0($v1)
    ctx->pc = 0x25eba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x359020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x359020u, _value); } while (0);
    // 0x25ebac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ebb0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x25ebb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x35902Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x35902Cu, _value); } while (0);
    // 0x25ebb4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25ebb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x359024u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x359024u, _value); } while (0);
    // 0x25ebb8: 0xc0ada6a  jal         func_2B69A8
    ctx->pc = 0x25EBB8u;
    SET_GPR_U32(ctx, 31, 0x25EBC0u);
    ctx->pc = 0x25EBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBB8u;
    // 0x25ebbc: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B69A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69A8u, 0x25EBB8u, 0x25EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBC0u;
label_25ebc0:
    // 0x25ebc0: 0xc0ada6a  jal         func_2B69A8
    ctx->pc = 0x25EBC0u;
    SET_GPR_U32(ctx, 31, 0x25EBC8u);
    ctx->pc = 0x25EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBC0u;
    // 0x25ebc4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B69A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69A8u, 0x25EBC0u, 0x25EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBC8u;
label_25ebc8:
    // 0x25ebc8: 0xc0ada6a  jal         func_2B69A8
    ctx->pc = 0x25EBC8u;
    SET_GPR_U32(ctx, 31, 0x25EBD0u);
    ctx->pc = 0x25EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBC8u;
    // 0x25ebcc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B69A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69A8u, 0x25EBC8u, 0x25EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBD0u;
label_25ebd0:
    // 0x25ebd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ebd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ebd4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ebd8: 0x80ada6a  j           func_2B69A8
    ctx->pc = 0x25EBD8u;
    ctx->pc = 0x25EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBD8u;
    // 0x25ebdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B69A8u;
    emResetTexBuffer_0x2b69a8(rdram, ctx, runtime); return;
    ctx->pc = 0x25EBE0u;
}
