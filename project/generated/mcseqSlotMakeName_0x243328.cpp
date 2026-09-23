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

// Function: mcseqSlotMakeName
// Address: 0x243328 - 0x243428
void mcseqSlotMakeName_0x243328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqSlotMakeName_0x243328");
#endif

    switch (ctx->pc) {
        case 0x243368u: goto label_243368;
        case 0x243390u: goto label_243390;
        case 0x2433bcu: goto label_2433bc;
        default: break;
    }

    ctx->pc = 0x243328u;

    // 0x243328: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x243328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24332c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243334: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x243334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x243338: 0x32150003  andi        $s5, $s0, 0x3
    ctx->pc = 0x243338u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x24333c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x243340: 0x108083  sra         $s0, $s0, 2
    ctx->pc = 0x243340u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 2));
    // 0x243344: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x243344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x243348: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x243348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24334c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243350: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x243350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x243354: 0x3c1601fc  lui         $s6, 0x1FC
    ctx->pc = 0x243354u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)508 << 16));
    // 0x243358: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x243358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24335c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24335cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x243360: 0xc080d84  jal         func_203610
    ctx->pc = 0x243360u;
    SET_GPR_U32(ctx, 31, 0x243368u);
    ctx->pc = 0x243364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243360u;
    // 0x243364: 0x26d433d0  addiu       $s4, $s6, 0x33D0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 13264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203610u, 0x243360u, 0x243368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243368u;
label_243368:
    // 0x243368: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x243368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24336c: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x24336cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x243370: 0x26312c18  addiu       $s1, $s1, 0x2C18
    ctx->pc = 0x243370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x243374: 0x28520002  slti        $s2, $v0, 0x2
    ctx->pc = 0x243374u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x243378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24337c: 0x3a520001  xori        $s2, $s2, 0x1
    ctx->pc = 0x24337cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x243380: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x243380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x243384: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243388: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x243388u;
    SET_GPR_U32(ctx, 31, 0x243390u);
    ctx->pc = 0x24338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243388u;
    // 0x24338c: 0x8c4405b4  lw          $a0, 0x5B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x243388u, 0x243390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243390u;
label_243390:
    // 0x243390: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x243390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x243394: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x243394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243398: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x243398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x24339c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24339cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2433a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2433a4: 0x24a5e8a0  addiu       $a1, $a1, -0x1760
    ctx->pc = 0x2433a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961312));
    // 0x2433a8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2433a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2433ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2433acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2433b0: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x2433b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2433b4: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2433B4u;
    SET_GPR_U32(ctx, 31, 0x2433BCu);
    ctx->pc = 0x2433B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2433B4u;
    // 0x2433b8: 0x8c4605b4  lw          $a2, 0x5B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2433B4u, 0x2433BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433BCu;
label_2433bc:
    // 0x2433bc: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x2433bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2433c0: 0x26100031  addiu       $s0, $s0, 0x31
    ctx->pc = 0x2433c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 49));
    // 0x2433c4: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x2433c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x2433c8: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2433C8u;
    {
        const bool branch_taken_0x2433c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2433CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2433C8u;
        // 0x2433cc: 0x26710002  addiu       $s1, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2433c8) {
            ctx->pc = 0x2433DCu;
            goto label_2433dc;
        }
    }
    ctx->pc = 0x2433D0u;
    // 0x2433d0: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x2433d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2433d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2433D4u;
    {
        const bool branch_taken_0x2433d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2433D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2433D4u;
        // 0x2433d8: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2433d4) {
            ctx->pc = 0x2433FCu;
            goto label_2433fc;
        }
    }
    ctx->pc = 0x2433DCu;
label_2433dc:
    // 0x2433dc: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x2433dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2433e0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2433e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2433e4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2433e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2433e8: 0x26a40041  addiu       $a0, $s5, 0x41
    ctx->pc = 0x2433e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 65));
    // 0x2433ec: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x2433ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2433f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2433f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433f4: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x2433f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2433f8: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x2433f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_2433fc:
    // 0x2433fc: 0x26c233d0  addiu       $v0, $s6, 0x33D0
    ctx->pc = 0x2433fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 13264));
    // 0x243400: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x243400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x243404: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x243404u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243408: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x243408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24340c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24340cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243410: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x243410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243414: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x243414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243418: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x243418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24341c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24341cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243420: 0x3e00008  jr          $ra
    ctx->pc = 0x243420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243420u;
        // 0x243424: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243428u;
}
