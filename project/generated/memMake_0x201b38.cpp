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

// Function: memMake
// Address: 0x201b38 - 0x201ba4
void memMake_0x201b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memMake_0x201b38");
#endif

    switch (ctx->pc) {
        case 0x201b90u: goto label_201b90;
        default: break;
    }

    ctx->pc = 0x201b38u;

    // 0x201b38: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x201b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x201b3c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x201b3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b40: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x201b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b44: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x201b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x201b48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x201b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201b4c: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x201b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x201b50: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x201b50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201b54: 0xc22823  subu        $a1, $a2, $v0
    ctx->pc = 0x201b54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x201b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201b5c: 0xaf849a64  sw          $a0, -0x659C($gp)
    ctx->pc = 0x201b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941284), GPR_U32(ctx, 4));
    // 0x201b60: 0xaf859a70  sw          $a1, -0x6590($gp)
    ctx->pc = 0x201b60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 5));
    // 0x201b64: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x201b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201b6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b70: 0xaf869a74  sw          $a2, -0x658C($gp)
    ctx->pc = 0x201b70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941300), GPR_U32(ctx, 6));
    // 0x201b74: 0xaf839a7c  sw          $v1, -0x6584($gp)
    ctx->pc = 0x201b74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941308), GPR_U32(ctx, 3));
    // 0x201b78: 0xaf879a80  sw          $a3, -0x6580($gp)
    ctx->pc = 0x201b78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941312), GPR_U32(ctx, 7));
    // 0x201b7c: 0xaf839a5c  sw          $v1, -0x65A4($gp)
    ctx->pc = 0x201b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941276), GPR_U32(ctx, 3));
    // 0x201b80: 0xaf829a60  sw          $v0, -0x65A0($gp)
    ctx->pc = 0x201b80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941280), GPR_U32(ctx, 2));
    // 0x201b84: 0xaf829a68  sw          $v0, -0x6598($gp)
    ctx->pc = 0x201b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941288), GPR_U32(ctx, 2));
    // 0x201b88: 0xc080698  jal         func_201A60
    ctx->pc = 0x201B88u;
    SET_GPR_U32(ctx, 31, 0x201B90u);
    ctx->pc = 0x201B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B88u;
    // 0x201b8c: 0xaf869a6c  sw          $a2, -0x6594($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941292), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201A60u, 0x201B88u, 0x201B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201B90u;
label_201b90:
    // 0x201b90: 0x8f849a68  lw          $a0, -0x6598($gp)
    ctx->pc = 0x201b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941288)));
    // 0x201b94: 0x8f859a6c  lw          $a1, -0x6594($gp)
    ctx->pc = 0x201b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941292)));
    // 0x201b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201b9c: 0x8080698  j           func_201A60
    ctx->pc = 0x201B9Cu;
    ctx->pc = 0x201BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B9Cu;
    // 0x201ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201A60u;
    memMark_0x201a60(rdram, ctx, runtime); return;
    ctx->pc = 0x201BA4u;
}
