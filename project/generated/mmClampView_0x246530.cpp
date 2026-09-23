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

// Function: mmClampView
// Address: 0x246530 - 0x2465f8
void mmClampView_0x246530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmClampView_0x246530");
#endif

    switch (ctx->pc) {
        case 0x246584u: goto label_246584;
        case 0x2465a4u: goto label_2465a4;
        default: break;
    }

    ctx->pc = 0x246530u;

    // 0x246530: 0x8f83a178  lw          $v1, -0x5E88($gp)
    ctx->pc = 0x246530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x246534: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246538: 0x8f84a17c  lw          $a0, -0x5E84($gp)
    ctx->pc = 0x246538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x24653c: 0x3c07fd80  lui         $a3, 0xFD80
    ctx->pc = 0x24653cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64896 << 16));
    // 0x246540: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x246540u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x246544: 0x8f86a168  lw          $a2, -0x5E98($gp)
    ctx->pc = 0x246544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x246548: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x246548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24654c: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x24654cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x246550: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x246550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x246554: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x246554u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x246558: 0x8f85a16c  lw          $a1, -0x5E94($gp)
    ctx->pc = 0x246558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x24655c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x24655cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x246560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246564: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x246564u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x246568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x246568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24656c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x24656cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x246570: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246570u;
    {
        const bool branch_taken_0x246570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246570u;
        // 0x246574: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246570) {
            ctx->pc = 0x24658Cu;
            goto label_24658c;
        }
    }
    ctx->pc = 0x246578u;
    // 0x246578: 0xe62023  subu        $a0, $a3, $a2
    ctx->pc = 0x246578u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x24657c: 0xc0926d6  jal         func_249B58
    ctx->pc = 0x24657Cu;
    SET_GPR_U32(ctx, 31, 0x246584u);
    ctx->pc = 0x246580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24657Cu;
    // 0x246580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B58u, 0x24657Cu, 0x246584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246584u;
label_246584:
    // 0x246584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246584u;
    {
        const bool branch_taken_0x246584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246584u;
        // 0x246588: 0x3c05fd80  lui         $a1, 0xFD80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246584) {
            ctx->pc = 0x2465A8u;
            goto label_2465a8;
        }
    }
    ctx->pc = 0x24658Cu;
label_24658c:
    // 0x24658c: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x24658cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x246590: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x246590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x246594: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246594u;
    {
        const bool branch_taken_0x246594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246594u;
        // 0x246598: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246594) {
            ctx->pc = 0x2465A4u;
            goto label_2465a4;
        }
    }
    ctx->pc = 0x24659Cu;
    // 0x24659c: 0xc0926d6  jal         func_249B58
    ctx->pc = 0x24659Cu;
    SET_GPR_U32(ctx, 31, 0x2465A4u);
    ctx->pc = 0x2465A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24659Cu;
    // 0x2465a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B58u, 0x24659Cu, 0x2465A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465A4u;
label_2465a4:
    // 0x2465a4: 0x3c05fd80  lui         $a1, 0xFD80
    ctx->pc = 0x2465a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64896 << 16));
label_2465a8:
    // 0x2465a8: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2465a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2465ac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2465ACu;
    {
        const bool branch_taken_0x2465ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2465ac) {
            ctx->pc = 0x2465B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2465ACu;
            // 0x2465b0: 0x3c050280  lui         $a1, 0x280 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)640 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2465CCu;
            goto label_2465cc;
        }
    }
    ctx->pc = 0x2465B4u;
    // 0x2465b4: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x2465b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2465b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2465b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2465bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2465bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2465c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2465c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465c4: 0x80926d6  j           func_249B58
    ctx->pc = 0x2465C4u;
    ctx->pc = 0x2465C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465C4u;
    // 0x2465c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B58u;
    mmPanWindow_0x249b58(rdram, ctx, runtime); return;
    ctx->pc = 0x2465CCu;
label_2465cc:
    // 0x2465cc: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2465ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2465d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2465D0u;
    {
        const bool branch_taken_0x2465d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2465D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465D0u;
        // 0x2465d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465d0) {
            ctx->pc = 0x2465ECu;
            goto label_2465ec;
        }
    }
    ctx->pc = 0x2465D8u;
    // 0x2465d8: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x2465d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2465dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2465dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2465e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2465e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465e4: 0x80926d6  j           func_249B58
    ctx->pc = 0x2465E4u;
    ctx->pc = 0x2465E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465E4u;
    // 0x2465e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B58u;
    mmPanWindow_0x249b58(rdram, ctx, runtime); return;
    ctx->pc = 0x2465ECu;
label_2465ec:
    // 0x2465ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2465ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2465f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2465F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2465F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465F0u;
        // 0x2465f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2465F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2465F8u;
}
