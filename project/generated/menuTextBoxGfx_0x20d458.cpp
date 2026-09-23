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

// Function: menuTextBoxGfx
// Address: 0x20d458 - 0x20d524
void menuTextBoxGfx_0x20d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuTextBoxGfx_0x20d458");
#endif

    switch (ctx->pc) {
        case 0x20d474u: goto label_20d474;
        case 0x20d4e8u: goto label_20d4e8;
        case 0x20d518u: goto label_20d518;
        default: break;
    }

    ctx->pc = 0x20d458u;

    // 0x20d458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20d45c: 0x8f869c74  lw          $a2, -0x638C($gp)
    ctx->pc = 0x20d45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941812)));
    // 0x20d460: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x20D460u;
    {
        const bool branch_taken_0x20d460 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D460u;
        // 0x20d464: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d460) {
            ctx->pc = 0x20D518u;
            goto label_20d518;
        }
    }
    ctx->pc = 0x20D468u;
    // 0x20d468: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d46c: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x20D46Cu;
    SET_GPR_U32(ctx, 31, 0x20D474u);
    ctx->pc = 0x20D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D46Cu;
    // 0x20d470: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x20D46Cu, 0x20D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D474u;
label_20d474:
    // 0x20d474: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20d474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20d478: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x20d478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d47c: 0x24a499f0  addiu       $a0, $a1, -0x6610
    ctx->pc = 0x20d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x20d480: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x20d480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20d484: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x20d484u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3299FCu));
    // 0x20d488: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x20d488u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x20d48c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x20d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x329A10u));
    // 0x20d490: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x20d490u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x20d494: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x20d494u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20d498: 0x8c8a0014  lw          $t2, 0x14($a0)
    ctx->pc = 0x20d498u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x20d49c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x20d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20d4a0: 0x8cab99f0  lw          $t3, -0x6610($a1)
    ctx->pc = 0x20d4a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941168)));
    // 0x20d4a4: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x20d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x20d4a8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x20d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x20d4ac: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x20d4acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20d4b0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20d4b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20d4b4: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x20d4b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x20d4b8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x20d4b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x20d4bc: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x20d4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x20d4c0: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x20d4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x20d4c4: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x20d4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d4c8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x20d4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d4cc: 0x24c6000b  addiu       $a2, $a2, 0xB
    ctx->pc = 0x20d4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11));
    // 0x20d4d0: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x20d4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x20d4d4: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x20d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x20d4d8: 0x35080070  ori         $t0, $t0, 0x70
    ctx->pc = 0x20d4d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)112);
    // 0x20d4dc: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x20d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x20d4e0: 0xc08bab8  jal         func_22EAE0
    ctx->pc = 0x20D4E0u;
    SET_GPR_U32(ctx, 31, 0x20D4E8u);
    ctx->pc = 0x20D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D4E0u;
    // 0x20d4e4: 0x35290060  ori         $t1, $t1, 0x60 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)96);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EAE0u, 0x20D4E0u, 0x20D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4E8u;
label_20d4e8:
    // 0x20d4e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x20d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20d4ec: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x20d4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x20d4f0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x20d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x20d4f4: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x20d4f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x20d4f8: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x20d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x20d4fc: 0x8f869c74  lw          $a2, -0x638C($gp)
    ctx->pc = 0x20d4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941812)));
    // 0x20d500: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x20d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x20d504: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x20d504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x20d508: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x20d508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x20d50c: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x20d50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x20d510: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x20D510u;
    SET_GPR_U32(ctx, 31, 0x20D518u);
    ctx->pc = 0x20D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D510u;
    // 0x20d514: 0x34e70070  ori         $a3, $a3, 0x70 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x20D510u, 0x20D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D518u;
label_20d518:
    // 0x20d518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d51c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D51Cu;
        // 0x20d520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D524u;
}
