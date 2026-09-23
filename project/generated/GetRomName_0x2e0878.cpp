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

// Function: GetRomName
// Address: 0x2e0878 - 0x2e0914
void GetRomName_0x2e0878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRomName_0x2e0878");
#endif

    switch (ctx->pc) {
        case 0x2e08b4u: goto label_2e08b4;
        case 0x2e08ccu: goto label_2e08cc;
        case 0x2e08dcu: goto label_2e08dc;
        case 0x2e08ecu: goto label_2e08ec;
        case 0x2e08f4u: goto label_2e08f4;
        default: break;
    }

    ctx->pc = 0x2e0878u;

    // 0x2e0878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e0878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e087c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e0880: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x2e0880u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x2e0884: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e0884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e0888: 0x82223008  lb          $v0, 0x3008($s1)
    ctx->pc = 0x2e0888u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x383008u));
    // 0x2e088c: 0x26333008  addiu       $s3, $s1, 0x3008
    ctx->pc = 0x2e088cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12296));
    // 0x2e0890: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e0890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e0894: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e0894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e0898: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E0898u;
    {
        const bool branch_taken_0x2e0898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0898u;
        // 0x2e089c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0898) {
            ctx->pc = 0x2E08F4u;
            goto label_2e08f4;
        }
    }
    ctx->pc = 0x2E08A0u;
    // 0x2e08a0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e08a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e08a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e08a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e08a8: 0x2484b678  addiu       $a0, $a0, -0x4988
    ctx->pc = 0x2e08a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948472));
    // 0x2e08ac: 0xc0b4d44  jal         func_2D3510
    ctx->pc = 0x2E08ACu;
    SET_GPR_U32(ctx, 31, 0x2E08B4u);
    ctx->pc = 0x2E08B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08ACu;
    // 0x2e08b0: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3510u, 0x2E08ACu, 0x2E08B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08B4u;
label_2e08b4:
    // 0x2e08b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e08b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08b8: 0x16120005  bne         $s0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E08B8u;
    {
        const bool branch_taken_0x2e08b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08B8u;
        // 0x2e08bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08b8) {
            ctx->pc = 0x2E08D0u;
            goto label_2e08d0;
        }
    }
    ctx->pc = 0x2E08C0u;
    // 0x2e08c0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e08c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e08c4: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2E08C4u;
    SET_GPR_U32(ctx, 31, 0x2E08CCu);
    ctx->pc = 0x2E08C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08C4u;
    // 0x2e08c8: 0x2484b688  addiu       $a0, $a0, -0x4978 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2E08C4u, 0x2E08CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08CCu;
label_2e08cc:
    // 0x2e08cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e08ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e08d0:
    // 0x2e08d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e08d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08d4: 0xc0b4e24  jal         func_2D3890
    ctx->pc = 0x2E08D4u;
    SET_GPR_U32(ctx, 31, 0x2E08DCu);
    ctx->pc = 0x2E08D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08D4u;
    // 0x2e08d8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3890u, 0x2E08D4u, 0x2E08DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08DCu;
label_2e08dc:
    // 0x2e08dc: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E08DCu;
    {
        const bool branch_taken_0x2e08dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08DCu;
        // 0x2e08e0: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08dc) {
            ctx->pc = 0x2E08ECu;
            goto label_2e08ec;
        }
    }
    ctx->pc = 0x2E08E4u;
    // 0x2e08e4: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2E08E4u;
    SET_GPR_U32(ctx, 31, 0x2E08ECu);
    ctx->pc = 0x2E08E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08E4u;
    // 0x2e08e8: 0x2484b6a0  addiu       $a0, $a0, -0x4960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2E08E4u, 0x2E08ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08ECu;
label_2e08ec:
    // 0x2e08ec: 0xc0b4d9a  jal         func_2D3668
    ctx->pc = 0x2E08ECu;
    SET_GPR_U32(ctx, 31, 0x2E08F4u);
    ctx->pc = 0x2E08F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08ECu;
    // 0x2e08f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3668u, 0x2E08ECu, 0x2E08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08F4u;
label_2e08f4:
    // 0x2e08f4: 0x26223008  addiu       $v0, $s1, 0x3008
    ctx->pc = 0x2e08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12296));
    // 0x2e08f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e08f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e08fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e08fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0900: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e0900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0904: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e0904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e090c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E090Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E090Cu;
        // 0x2e0910: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E090Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0914u;
}
