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

// Function: mcseqGetState
// Address: 0x244a90 - 0x244b24
void mcseqGetState_0x244a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqGetState_0x244a90");
#endif

    switch (ctx->pc) {
        case 0x244b0cu: goto label_244b0c;
        default: break;
    }

    ctx->pc = 0x244a90u;

    // 0x244a90: 0x8f82a0a8  lw          $v0, -0x5F58($gp)
    ctx->pc = 0x244a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942888)));
    // 0x244a94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244a98: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x244a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x244a9c: 0x2c830018  sltiu       $v1, $a0, 0x18
    ctx->pc = 0x244a9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x244aa0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x244AA0u;
    {
        const bool branch_taken_0x244aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AA0u;
        // 0x244aa4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244aa0) {
            ctx->pc = 0x244B14u;
            goto label_244b14;
        }
    }
    ctx->pc = 0x244AA8u;
    // 0x244aa8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x244aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x244aac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x244aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x244ab0: 0x24421fa0  addiu       $v0, $v0, 0x1FA0
    ctx->pc = 0x244ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8096));
    // 0x244ab4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x244ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244ab8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x244ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244abc: 0x800008  jr          $a0
    ctx->pc = 0x244ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244AC4u: goto label_244ac4;
            case 0x244ACCu: goto label_244acc;
            case 0x244B04u: goto label_244b04;
            case 0x244B14u: goto label_244b14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244ABCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x244AC4u;
label_244ac4:
    // 0x244ac4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x244AC4u;
    {
        const bool branch_taken_0x244ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AC4u;
        // 0x244ac8: 0x8f82b7f0  lw          $v0, -0x4810($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ac4) {
            ctx->pc = 0x244B18u;
            goto label_244b18;
        }
    }
    ctx->pc = 0x244ACCu;
label_244acc:
    // 0x244acc: 0x8f83a0cc  lw          $v1, -0x5F34($gp)
    ctx->pc = 0x244accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942924)));
    // 0x244ad0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x244ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x244ad4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x244AD4u;
    {
        const bool branch_taken_0x244ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AD4u;
        // 0x244ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ad4) {
            ctx->pc = 0x244B18u;
            goto label_244b18;
        }
    }
    ctx->pc = 0x244ADCu;
    // 0x244adc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x244adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x244ae0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x244AE0u;
    {
        const bool branch_taken_0x244ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AE0u;
        // 0x244ae4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ae0) {
            ctx->pc = 0x244B18u;
            goto label_244b18;
        }
    }
    ctx->pc = 0x244AE8u;
    // 0x244ae8: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x244ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x244aec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244AECu;
    {
        const bool branch_taken_0x244aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AECu;
        // 0x244af0: 0x3117a  dsrl        $v0, $v1, 5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244aec) {
            ctx->pc = 0x244AFCu;
            goto label_244afc;
        }
    }
    ctx->pc = 0x244AF4u;
    // 0x244af4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x244AF4u;
    {
        const bool branch_taken_0x244af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AF4u;
        // 0x244af8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244af4) {
            ctx->pc = 0x244B18u;
            goto label_244b18;
        }
    }
    ctx->pc = 0x244AFCu;
label_244afc:
    // 0x244afc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x244AFCu;
    {
        const bool branch_taken_0x244afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AFCu;
        // 0x244b00: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244afc) {
            ctx->pc = 0x244B18u;
            goto label_244b18;
        }
    }
    ctx->pc = 0x244B04u;
label_244b04:
    // 0x244b04: 0xc090d2a  jal         func_2434A8
    ctx->pc = 0x244B04u;
    SET_GPR_U32(ctx, 31, 0x244B0Cu);
    ctx->pc = 0x2434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2434A8u, 0x244B04u, 0x244B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B0Cu;
label_244b0c:
    // 0x244b0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x244B0Cu;
    {
        const bool branch_taken_0x244b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B0Cu;
        // 0x244b10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b0c) {
            ctx->pc = 0x244B1Cu;
            goto label_244b1c;
        }
    }
    ctx->pc = 0x244B14u;
label_244b14:
    // 0x244b14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x244b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_244b18:
    // 0x244b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244b1c:
    // 0x244b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x244B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B1Cu;
        // 0x244b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244B24u;
}
