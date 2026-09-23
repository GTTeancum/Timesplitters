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

// Function: obReset
// Address: 0x25d198 - 0x25d20c
void obReset_0x25d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obReset_0x25d198");
#endif

    switch (ctx->pc) {
        case 0x25d1d8u: goto label_25d1d8;
        case 0x25d1f8u: goto label_25d1f8;
        default: break;
    }

    ctx->pc = 0x25d198u;

    // 0x25d198: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x25d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x25d19c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d19cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d1a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x25d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25d1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d1a8: 0x38420066  xori        $v0, $v0, 0x66
    ctx->pc = 0x25d1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)102);
    // 0x25d1ac: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x25d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x25d1b0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x25d1b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x25d1b4: 0x24100148  addiu       $s0, $zero, 0x148
    ctx->pc = 0x25d1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x25d1b8: 0x700018  mult        $zero, $v1, $s0
    ctx->pc = 0x25d1b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x25d1bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25d1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25d1c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d1c4: 0xaf83a290  sw          $v1, -0x5D70($gp)
    ctx->pc = 0x25d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943376), GPR_U32(ctx, 3));
    // 0x25d1c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25d1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25d1cc: 0x2012  mflo        $a0
    ctx->pc = 0x25d1ccu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x25d1d0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25D1D0u;
    SET_GPR_U32(ctx, 31, 0x25D1D8u);
    ctx->pc = 0x25D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1D0u;
    // 0x25d1d4: 0x2411fff0  addiu       $s1, $zero, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25D1D0u, 0x25D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1D8u;
label_25d1d8:
    // 0x25d1d8: 0x8f86a290  lw          $a2, -0x5D70($gp)
    ctx->pc = 0x25d1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
    // 0x25d1dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25d1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1e0: 0xaf82a294  sw          $v0, -0x5D6C($gp)
    ctx->pc = 0x25d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943380), GPR_U32(ctx, 2));
    // 0x25d1e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1e8: 0xd03018  mult        $a2, $a2, $s0
    ctx->pc = 0x25d1e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x25d1ec: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x25d1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x25d1f0: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x25D1F0u;
    SET_GPR_U32(ctx, 31, 0x25D1F8u);
    ctx->pc = 0x25D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1F0u;
    // 0x25d1f4: 0xd13024  and         $a2, $a2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x25D1F0u, 0x25D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1F8u;
label_25d1f8:
    // 0x25d1f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25d1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d1fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25d1fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25d200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d204: 0x8097462  j           func_25D188
    ctx->pc = 0x25D204u;
    ctx->pc = 0x25D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D204u;
    // 0x25d208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D188u;
    obRestart_0x25d188(rdram, ctx, runtime); return;
    ctx->pc = 0x25D20Cu;
}
