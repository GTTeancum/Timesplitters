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

// Function: clock2u32
// Address: 0x2b39c8 - 0x2b3a88
void clock2u32_0x2b39c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("clock2u32_0x2b39c8");
#endif

    switch (ctx->pc) {
        case 0x2b39f4u: goto label_2b39f4;
        case 0x2b3a08u: goto label_2b3a08;
        case 0x2b3a1cu: goto label_2b3a1c;
        case 0x2b3a30u: goto label_2b3a30;
        case 0x2b3a40u: goto label_2b3a40;
        case 0x2b3a50u: goto label_2b3a50;
        default: break;
    }

    ctx->pc = 0x2b39c8u;

    // 0x2b39c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b39c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b39cc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b39ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b39d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b39d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b39d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b39d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b39d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b39dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b39dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b39e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b39e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b39e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b39e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b39e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b39e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b39ec: 0xc0ace62  jal         func_2B3988
    ctx->pc = 0x2B39ECu;
    SET_GPR_U32(ctx, 31, 0x2B39F4u);
    ctx->pc = 0x2B39F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B39ECu;
    // 0x2b39f0: 0x92240007  lbu         $a0, 0x7($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3988u, 0x2B39ECu, 0x2B39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B39F4u;
label_2b39f4:
    // 0x2b39f4: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x2b39f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
    // 0x2b39f8: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x2b39f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2b39fc: 0x34636e00  ori         $v1, $v1, 0x6E00
    ctx->pc = 0x2b39fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28160);
    // 0x2b3a00: 0xc0ace62  jal         func_2B3988
    ctx->pc = 0x2B3A00u;
    SET_GPR_U32(ctx, 31, 0x2B3A08u);
    ctx->pc = 0x2B3A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A00u;
    // 0x2b3a04: 0x439018  mult        $s2, $v0, $v1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3988u, 0x2B3A00u, 0x2B3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A08u;
label_2b3a08:
    // 0x2b3a08: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x2b3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x2b3a0c: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x2b3a0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2b3a10: 0x3463de80  ori         $v1, $v1, 0xDE80
    ctx->pc = 0x2b3a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56960);
    // 0x2b3a14: 0xc0ace62  jal         func_2B3988
    ctx->pc = 0x2B3A14u;
    SET_GPR_U32(ctx, 31, 0x2B3A1Cu);
    ctx->pc = 0x2B3A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A14u;
    // 0x2b3a18: 0x439818  mult        $s3, $v0, $v1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3988u, 0x2B3A14u, 0x2B3A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A1Cu;
label_2b3a1c:
    // 0x2b3a1c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2b3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2b3a20: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x2b3a20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2b3a24: 0x34635180  ori         $v1, $v1, 0x5180
    ctx->pc = 0x2b3a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20864);
    // 0x2b3a28: 0xc0ace62  jal         func_2B3988
    ctx->pc = 0x2B3A28u;
    SET_GPR_U32(ctx, 31, 0x2B3A30u);
    ctx->pc = 0x2B3A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A28u;
    // 0x2b3a2c: 0x43a818  mult        $s5, $v0, $v1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3988u, 0x2B3A28u, 0x2B3A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A30u;
label_2b3a30:
    // 0x2b3a30: 0x24030e10  addiu       $v1, $zero, 0xE10
    ctx->pc = 0x2b3a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x2b3a34: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x2b3a34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b3a38: 0xc0ace62  jal         func_2B3988
    ctx->pc = 0x2B3A38u;
    SET_GPR_U32(ctx, 31, 0x2B3A40u);
    ctx->pc = 0x2B3A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A38u;
    // 0x2b3a3c: 0x438018  mult        $s0, $v0, $v1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3988u, 0x2B3A38u, 0x2B3A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A40u;
label_2b3a40:
    // 0x2b3a40: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2b3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b3a44: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x2b3a44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2b3a48: 0xc0ace62  jal         func_2B3988
    ctx->pc = 0x2B3A48u;
    SET_GPR_U32(ctx, 31, 0x2B3A50u);
    ctx->pc = 0x2B3A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A48u;
    // 0x2b3a4c: 0x43a018  mult        $s4, $v0, $v1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3988u, 0x2B3A48u, 0x2B3A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A50u;
label_2b3a50:
    // 0x2b3a50: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x2b3a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2b3a54: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2b3a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b3a58: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2b3a58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2b3a5c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b3a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b3a60: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x2b3a60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2b3a64: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b3a64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3a68: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x2b3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2b3a6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b3a6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b3a70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b3a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3a74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b3a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3a78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b3a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3a80: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A80u;
        // 0x2b3a84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3A88u;
}
