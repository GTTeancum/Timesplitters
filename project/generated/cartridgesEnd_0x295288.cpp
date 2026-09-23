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

// Function: cartridgesEnd
// Address: 0x295288 - 0x295314
void cartridgesEnd_0x295288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cartridgesEnd_0x295288");
#endif

    switch (ctx->pc) {
        case 0x2952b8u: goto label_2952b8;
        case 0x2952c8u: goto label_2952c8;
        case 0x2952dcu: goto label_2952dc;
        default: break;
    }

    ctx->pc = 0x295288u;

    // 0x295288: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29528c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29528cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x295290: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x295290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x295294: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x295294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295298: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x295298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29529c: 0x245492c0  addiu       $s4, $v0, -0x6D40
    ctx->pc = 0x29529cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2952a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2952a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2952a4: 0x241303d0  addiu       $s3, $zero, 0x3D0
    ctx->pc = 0x2952a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    // 0x2952a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2952a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2952ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2952acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2952b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2952b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2952b4: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x2952b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2952b8:
    // 0x2952b8: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x2952b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2952bc: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x2952bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2952c0: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2952c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2952c4: 0x0  nop
    ctx->pc = 0x2952c4u;
    // NOP
label_2952c8:
    // 0x2952c8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2952c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2952cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2952CCu;
    {
        const bool branch_taken_0x2952cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2952D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952CCu;
        // 0x2952d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952cc) {
            ctx->pc = 0x2952E0u;
            goto label_2952e0;
        }
    }
    ctx->pc = 0x2952D4u;
    // 0x2952d4: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x2952D4u;
    SET_GPR_U32(ctx, 31, 0x2952DCu);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2952D4u, 0x2952DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2952DCu;
label_2952dc:
    // 0x2952dc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2952dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_2952e0:
    // 0x2952e0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2952E0u;
    {
        const bool branch_taken_0x2952e0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2952E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952E0u;
        // 0x2952e4: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952e0) {
            ctx->pc = 0x2952C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2952c8;
        }
    }
    ctx->pc = 0x2952E8u;
    // 0x2952e8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2952e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2952ec: 0x1860fff2  blez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2952ECu;
    {
        const bool branch_taken_0x2952ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2952F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952ECu;
        // 0x2952f0: 0x731018  mult        $v0, $v1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952ec) {
            ctx->pc = 0x2952B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2952b8;
        }
    }
    ctx->pc = 0x2952F4u;
    // 0x2952f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2952f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2952f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2952f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2952fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2952fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295300: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x295300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295304: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29530c: 0x3e00008  jr          $ra
    ctx->pc = 0x29530Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29530Cu;
        // 0x295310: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29530Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295314u;
}
