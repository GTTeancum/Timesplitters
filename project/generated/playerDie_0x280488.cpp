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

// Function: playerDie
// Address: 0x280488 - 0x280584
void playerDie_0x280488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerDie_0x280488");
#endif

    switch (ctx->pc) {
        case 0x2804e4u: goto label_2804e4;
        case 0x28050cu: goto label_28050c;
        default: break;
    }

    ctx->pc = 0x280488u;

    // 0x280488: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x280488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28048c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x28048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x280490: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x280490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x280494: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x280494u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280498: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x280498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28049c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x28049cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2804a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2804a4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2804a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2804a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2804ac: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2804acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2804b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2804b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2804b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2804b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2804b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804bc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2804bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2804c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2804c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2804c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2804c8: 0x8e450180  lw          $a1, 0x180($s2)
    ctx->pc = 0x2804c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x2804cc: 0x8cb10160  lw          $s1, 0x160($a1)
    ctx->pc = 0x2804ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x2804d0: 0x8e2411a8  lw          $a0, 0x11A8($s1)
    ctx->pc = 0x2804d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4520)));
    // 0x2804d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2804D4u;
    {
        const bool branch_taken_0x2804d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804D4u;
        // 0x2804d8: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804d4) {
            ctx->pc = 0x2804ECu;
            goto label_2804ec;
        }
    }
    ctx->pc = 0x2804DCu;
    // 0x2804dc: 0xc0aaba2  jal         func_2AAE88
    ctx->pc = 0x2804DCu;
    SET_GPR_U32(ctx, 31, 0x2804E4u);
    ctx->pc = 0x2AAE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAE88u, 0x2804DCu, 0x2804E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804E4u;
label_2804e4:
    // 0x2804e4: 0xae2011a8  sw          $zero, 0x11A8($s1)
    ctx->pc = 0x2804e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4520), GPR_U32(ctx, 0));
    // 0x2804e8: 0x8e450180  lw          $a1, 0x180($s2)
    ctx->pc = 0x2804e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_2804ec:
    // 0x2804ec: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2804ECu;
    {
        const bool branch_taken_0x2804ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804ECu;
        // 0x2804f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804ec) {
            ctx->pc = 0x280504u;
            goto label_280504;
        }
    }
    ctx->pc = 0x2804F4u;
    // 0x2804f4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2804f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2804f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2804f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2804fc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2804FCu;
    {
        const bool branch_taken_0x2804fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2804fc) {
            ctx->pc = 0x280500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2804FCu;
            // 0x280500: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280504u;
            goto label_280504;
        }
    }
    ctx->pc = 0x280504u;
label_280504:
    // 0x280504: 0xc0882f2  jal         func_220BC8
    ctx->pc = 0x280504u;
    SET_GPR_U32(ctx, 31, 0x28050Cu);
    ctx->pc = 0x280508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280504u;
    // 0x280508: 0x8ca50160  lw          $a1, 0x160($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BC8u, 0x280504u, 0x28050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28050Cu;
label_28050c:
    // 0x28050c: 0x8e430128  lw          $v1, 0x128($s2)
    ctx->pc = 0x28050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x280510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x280510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280514: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x280514u;
    {
        const bool branch_taken_0x280514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280514u;
        // 0x280518: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280514) {
            ctx->pc = 0x28055Cu;
            goto label_28055c;
        }
    }
    ctx->pc = 0x28051Cu;
    // 0x28051c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28051cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280520: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x280520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280524: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x280524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280528: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x280528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28052c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x28052cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280530: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x280530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280534: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x280534u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x280538: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x280538u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28053c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28053cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280540: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x280540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280544: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x280544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280548: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x280548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28054c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28054cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280554: 0x80a0162  j           func_280588
    ctx->pc = 0x280554u;
    ctx->pc = 0x280558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280554u;
    // 0x280558: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280588u;
    playerOnGroundDie_0x280588(rdram, ctx, runtime); return;
    ctx->pc = 0x28055Cu;
label_28055c:
    // 0x28055c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x28055cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x280560: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x280560u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x280564: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x280564u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280568: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x280568u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28056c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28056cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280570: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x280570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280574: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x280574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28057c: 0x3e00008  jr          $ra
    ctx->pc = 0x28057Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28057Cu;
        // 0x280580: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28057Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280584u;
}
