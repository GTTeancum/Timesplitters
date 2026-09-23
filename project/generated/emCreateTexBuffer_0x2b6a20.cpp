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

// Function: emCreateTexBuffer
// Address: 0x2b6a20 - 0x2b6aa8
void emCreateTexBuffer_0x2b6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emCreateTexBuffer_0x2b6a20");
#endif

    switch (ctx->pc) {
        case 0x2b6a68u: goto label_2b6a68;
        case 0x2b6a88u: goto label_2b6a88;
        default: break;
    }

    ctx->pc = 0x2b6a20u;

    // 0x2b6a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6a24: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2b6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2b6a28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b6a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b6a2c: 0x24428150  addiu       $v0, $v0, -0x7EB0
    ctx->pc = 0x2b6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934864));
    // 0x2b6a30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6a34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b6a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a38: 0x24101a18  addiu       $s0, $zero, 0x1A18
    ctx->pc = 0x2b6a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6680));
    // 0x2b6a3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b6a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b6a40: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x2b6a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b6a44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b6a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b6a48: 0x721c0  sll         $a0, $a3, 7
    ctx->pc = 0x2b6a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x2b6a4c: 0x2411fff0  addiu       $s1, $zero, -0x10
    ctx->pc = 0x2b6a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2b6a50: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b6a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b6a54: 0xae051a0c  sw          $a1, 0x1A0C($s0)
    ctx->pc = 0x2b6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6668), GPR_U32(ctx, 5));
    // 0x2b6a58: 0xae061a10  sw          $a2, 0x1A10($s0)
    ctx->pc = 0x2b6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6672), GPR_U32(ctx, 6));
    // 0x2b6a5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6a60: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2B6A60u;
    SET_GPR_U32(ctx, 31, 0x2B6A68u);
    ctx->pc = 0x2B6A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A60u;
    // 0x2b6a64: 0xae071a14  sw          $a3, 0x1A14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2B6A60u, 0x2B6A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A68u;
label_2b6a68:
    // 0x2b6a68: 0x8e041a14  lw          $a0, 0x1A14($s0)
    ctx->pc = 0x2b6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x2b6a6c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2b6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b6a70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b6a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b6a74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b6a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6a78: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2b6a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6a7c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2b6a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2b6a80: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2B6A80u;
    SET_GPR_U32(ctx, 31, 0x2B6A88u);
    ctx->pc = 0x2B6A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A80u;
    // 0x2b6a84: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2B6A80u, 0x2B6A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A88u;
label_2b6a88:
    // 0x2b6a88: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2b6a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2b6a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b6a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b6a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6a94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b6a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6a98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b6a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6aa0: 0x80ada6a  j           func_2B69A8
    ctx->pc = 0x2B6AA0u;
    ctx->pc = 0x2B6AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6AA0u;
    // 0x2b6aa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B69A8u;
    emResetTexBuffer_0x2b69a8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B6AA8u;
}
