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

// Function: bgPortalCalcBackFace
// Address: 0x2578f0 - 0x2579f8
void bgPortalCalcBackFace_0x2578f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalCalcBackFace_0x2578f0");
#endif

    switch (ctx->pc) {
        case 0x257960u: goto label_257960;
        case 0x2579a0u: goto label_2579a0;
        case 0x2579c0u: goto label_2579c0;
        default: break;
    }

    ctx->pc = 0x2578f0u;

label_2578f0:
    // 0x2578f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2578f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2578f4: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2578f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2578f8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2578f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2578fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2578fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257900: 0x8f85a240  lw          $a1, -0x5DC0($gp)
    ctx->pc = 0x257900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x257904: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x257904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x257908: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x257908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x25790c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x25790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x257910: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x257910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x257914: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x257914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x257918: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x257918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25791c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25791cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x257920: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x257920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x257924: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x257924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x257928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25792c: 0x8f84b894  lw          $a0, -0x476C($gp)
    ctx->pc = 0x25792cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949012)));
    // 0x257930: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x257930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x257934: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x257934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x257938: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x257938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25793c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x25793Cu;
    {
        const bool branch_taken_0x25793c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25793Cu;
        // 0x257940: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25793c) {
            ctx->pc = 0x2579D0u;
            goto label_2579d0;
        }
    }
    ctx->pc = 0x257944u;
    // 0x257944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257948: 0x18800021  blez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x257948u;
    {
        const bool branch_taken_0x257948 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x25794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257948u;
        // 0x25794c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257948) {
            ctx->pc = 0x2579D0u;
            goto label_2579d0;
        }
    }
    ctx->pc = 0x257950u;
    // 0x257950: 0x24740004  addiu       $s4, $v1, 0x4
    ctx->pc = 0x257950u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x257954: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x257954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257958: 0x24160030  addiu       $s6, $zero, 0x30
    ctx->pc = 0x257958u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x25795c: 0x0  nop
    ctx->pc = 0x25795cu;
    // NOP
label_257960:
    // 0x257960: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x257960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x257964: 0x8f85a244  lw          $a1, -0x5DBC($gp)
    ctx->pc = 0x257964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x257968: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x257968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25796c: 0x8f84a230  lw          $a0, -0x5DD0($gp)
    ctx->pc = 0x25796cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x257970: 0x761818  mult        $v1, $v1, $s6
    ctx->pc = 0x257970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x257974: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x257974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x257978: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x257978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25797c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x25797cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x257980: 0x16b10002  bne         $s5, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x257980u;
    {
        const bool branch_taken_0x257980 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        ctx->pc = 0x257984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257980u;
        // 0x257984: 0x839821  addu        $s3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257980) {
            ctx->pc = 0x25798Cu;
            goto label_25798c;
        }
    }
    ctx->pc = 0x257988u;
    // 0x257988: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x257988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25798c:
    // 0x25798c: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x25798cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x257990: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x257990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257994: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x257994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257998: 0xc095e18  jal         func_257860
    ctx->pc = 0x257998u;
    SET_GPR_U32(ctx, 31, 0x2579A0u);
    ctx->pc = 0x25799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257998u;
    // 0x25799c: 0x24a50374  addiu       $a1, $a1, 0x374 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257860u, 0x257998u, 0x2579A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2579A0u;
label_2579a0:
    // 0x2579a0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2579A0u;
    {
        const bool branch_taken_0x2579a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2579a0) {
            ctx->pc = 0x2579A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2579A0u;
            // 0x2579a4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2579C8u;
            goto label_2579c8;
        }
    }
    ctx->pc = 0x2579A8u;
    // 0x2579a8: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x2579a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2579ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2579acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2579b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2579B0u;
    {
        const bool branch_taken_0x2579b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2579b0) {
            ctx->pc = 0x2579B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2579B0u;
            // 0x2579b4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2579C8u;
            goto label_2579c8;
        }
    }
    ctx->pc = 0x2579B8u;
    // 0x2579b8: 0xc095e3c  jal         func_2578F0
    ctx->pc = 0x2579B8u;
    SET_GPR_U32(ctx, 31, 0x2579C0u);
    ctx->pc = 0x2579BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2579B8u;
    // 0x2579bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2578F0u;
    goto label_2578f0;
    ctx->pc = 0x2579C0u;
label_2579c0:
    // 0x2579c0: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x2579c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    // 0x2579c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2579c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2579c8:
    // 0x2579c8: 0x1640ffe5  bnez        $s2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2579C8u;
    {
        const bool branch_taken_0x2579c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2579CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579C8u;
        // 0x2579cc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579c8) {
            ctx->pc = 0x257960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257960;
        }
    }
    ctx->pc = 0x2579D0u;
label_2579d0:
    // 0x2579d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2579d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2579d4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2579d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2579d8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2579d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2579dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2579dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2579e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2579e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2579e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2579e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2579e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2579e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2579ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2579ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2579f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2579F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2579F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579F0u;
        // 0x2579f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2579F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2579F8u;
}
