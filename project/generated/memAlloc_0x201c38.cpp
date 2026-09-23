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

// Function: memAlloc
// Address: 0x201c38 - 0x201d34
void memAlloc_0x201c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memAlloc_0x201c38");
#endif

    switch (ctx->pc) {
        case 0x201c94u: goto label_201c94;
        case 0x201ce8u: goto label_201ce8;
        case 0x201d14u: goto label_201d14;
        default: break;
    }

    ctx->pc = 0x201c38u;

    // 0x201c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201c3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x201c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201c44: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x201C44u;
    {
        const bool branch_taken_0x201c44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x201C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C44u;
        // 0x201c48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c44) {
            ctx->pc = 0x201CD0u;
            goto label_201cd0;
        }
    }
    ctx->pc = 0x201C4Cu;
    // 0x201c4c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x201c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x201c50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201C50u;
    {
        const bool branch_taken_0x201c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C50u;
        // 0x201c54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c50) {
            ctx->pc = 0x201C68u;
            goto label_201c68;
        }
    }
    ctx->pc = 0x201C58u;
    // 0x201c58: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x201C58u;
    {
        const bool branch_taken_0x201c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C58u;
        // 0x201c5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c58) {
            ctx->pc = 0x201C78u;
            goto label_201c78;
        }
    }
    ctx->pc = 0x201C60u;
    // 0x201c60: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x201C60u;
    {
        const bool branch_taken_0x201c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C60u;
        // 0x201c64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c60) {
            ctx->pc = 0x201D28u;
            goto label_201d28;
        }
    }
    ctx->pc = 0x201C68u;
label_201c68:
    // 0x201c68: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x201C68u;
    {
        const bool branch_taken_0x201c68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x201C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C68u;
        // 0x201c6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c68) {
            ctx->pc = 0x201CFCu;
            goto label_201cfc;
        }
    }
    ctx->pc = 0x201C70u;
    // 0x201c70: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x201C70u;
    {
        const bool branch_taken_0x201c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C70u;
        // 0x201c74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c70) {
            ctx->pc = 0x201D28u;
            goto label_201d28;
        }
    }
    ctx->pc = 0x201C78u;
label_201c78:
    // 0x201c78: 0x8f859a70  lw          $a1, -0x6590($gp)
    ctx->pc = 0x201c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941296)));
    // 0x201c7c: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x201c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x201c80: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x201c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x201c84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201C84u;
    {
        const bool branch_taken_0x201c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C84u;
        // 0x201c88: 0x8f829a74  lw          $v0, -0x658C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c84) {
            ctx->pc = 0x201C94u;
            goto label_201c94;
        }
    }
    ctx->pc = 0x201C8Cu;
    // 0x201c8c: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x201C8Cu;
    SET_GPR_U32(ctx, 31, 0x201C94u);
    ctx->pc = 0x201C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C8Cu;
    // 0x201c90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x201C8Cu, 0x201C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C94u;
label_201c94:
    // 0x201c94: 0x3c034143  lui         $v1, 0x4143
    ctx->pc = 0x201c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16707 << 16));
    // 0x201c98: 0x3c044d45  lui         $a0, 0x4D45
    ctx->pc = 0x201c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19781 << 16));
    // 0x201c9c: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x201c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x201ca0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x201ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x201ca4: 0x34634f4c  ori         $v1, $v1, 0x4F4C
    ctx->pc = 0x201ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20300);
    // 0x201ca8: 0x34844d4c  ori         $a0, $a0, 0x4D4C
    ctx->pc = 0x201ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19788);
    // 0x201cac: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x201cacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x201cb0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x201cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x201cb4: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x201cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x201cb8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x201cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x201cbc: 0xaf829a74  sw          $v0, -0x658C($gp)
    ctx->pc = 0x201cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941300), GPR_U32(ctx, 2));
    // 0x201cc0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x201cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x201cc4: 0xaf859a70  sw          $a1, -0x6590($gp)
    ctx->pc = 0x201cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 5));
    // 0x201cc8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x201CC8u;
    {
        const bool branch_taken_0x201cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CC8u;
        // 0x201ccc: 0xac42000c  sw          $v0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cc8) {
            ctx->pc = 0x201D24u;
            goto label_201d24;
        }
    }
    ctx->pc = 0x201CD0u;
label_201cd0:
    // 0x201cd0: 0x8f839a70  lw          $v1, -0x6590($gp)
    ctx->pc = 0x201cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941296)));
    // 0x201cd4: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x201cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x201cd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201CD8u;
    {
        const bool branch_taken_0x201cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CD8u;
        // 0x201cdc: 0x8f879a68  lw          $a3, -0x6598($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cd8) {
            ctx->pc = 0x201CE8u;
            goto label_201ce8;
        }
    }
    ctx->pc = 0x201CE0u;
    // 0x201ce0: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x201CE0u;
    SET_GPR_U32(ctx, 31, 0x201CE8u);
    ctx->pc = 0x201CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CE0u;
    // 0x201ce4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x201CE0u, 0x201CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CE8u;
label_201ce8:
    // 0x201ce8: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x201ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x201cec: 0xaf829a70  sw          $v0, -0x6590($gp)
    ctx->pc = 0x201cecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 2));
    // 0x201cf0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x201cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x201cf4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x201CF4u;
    {
        const bool branch_taken_0x201cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CF4u;
        // 0x201cf8: 0xaf839a68  sw          $v1, -0x6598($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cf4) {
            ctx->pc = 0x201D24u;
            goto label_201d24;
        }
    }
    ctx->pc = 0x201CFCu;
label_201cfc:
    // 0x201cfc: 0x8f839a64  lw          $v1, -0x659C($gp)
    ctx->pc = 0x201cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x201d00: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x201d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x201d04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201D04u;
    {
        const bool branch_taken_0x201d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D04u;
        // 0x201d08: 0x8f879a5c  lw          $a3, -0x65A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d04) {
            ctx->pc = 0x201D14u;
            goto label_201d14;
        }
    }
    ctx->pc = 0x201D0Cu;
    // 0x201d0c: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x201D0Cu;
    SET_GPR_U32(ctx, 31, 0x201D14u);
    ctx->pc = 0x201D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D0Cu;
    // 0x201d10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x201D0Cu, 0x201D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D14u;
label_201d14:
    // 0x201d14: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x201d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x201d18: 0xaf829a64  sw          $v0, -0x659C($gp)
    ctx->pc = 0x201d18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941284), GPR_U32(ctx, 2));
    // 0x201d1c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x201d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x201d20: 0xaf839a5c  sw          $v1, -0x65A4($gp)
    ctx->pc = 0x201d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941276), GPR_U32(ctx, 3));
label_201d24:
    // 0x201d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201d28:
    // 0x201d28: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x201d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x201D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D2Cu;
        // 0x201d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201D34u;
}
