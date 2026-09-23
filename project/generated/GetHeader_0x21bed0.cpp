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

// Function: GetHeader
// Address: 0x21bed0 - 0x21c130
void GetHeader_0x21bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetHeader_0x21bed0");
#endif

    switch (ctx->pc) {
        case 0x21bf54u: goto label_21bf54;
        case 0x21bf80u: goto label_21bf80;
        case 0x21bfb4u: goto label_21bfb4;
        case 0x21bfc4u: goto label_21bfc4;
        case 0x21c0a8u: goto label_21c0a8;
        case 0x21c0e8u: goto label_21c0e8;
        case 0x21c128u: goto label_21c128;
        default: break;
    }

    ctx->pc = 0x21bed0u;

    // 0x21bed0: 0x8f88b6d0  lw          $t0, -0x4930($gp)
    ctx->pc = 0x21bed0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21bed4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21bed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21bed8: 0x8f85b6cc  lw          $a1, -0x4934($gp)
    ctx->pc = 0x21bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21bedc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21bee0: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x21bee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x21bee4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21BEE4u;
    {
        const bool branch_taken_0x21bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEE4u;
        // 0x21bee8: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bee4) {
            ctx->pc = 0x21BF04u;
            goto label_21bf04;
        }
    }
    ctx->pc = 0x21BEECu;
    // 0x21beec: 0x8f82b6c8  lw          $v0, -0x4938($gp)
    ctx->pc = 0x21beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
    // 0x21bef0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21bef4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21bef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bef8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21bef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21befc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21BEFCu;
    {
        const bool branch_taken_0x21befc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEFCu;
        // 0x21bf00: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21befc) {
            ctx->pc = 0x21BF08u;
            goto label_21bf08;
        }
    }
    ctx->pc = 0x21BF04u;
label_21bf04:
    // 0x21bf04: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x21bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21bf08:
    // 0x21bf08: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x21bf08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21bf0c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x21bf0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x21bf10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21BF10u;
    {
        const bool branch_taken_0x21bf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF10u;
        // 0x21bf14: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf10) {
            ctx->pc = 0x21BF2Cu;
            goto label_21bf2c;
        }
    }
    ctx->pc = 0x21BF18u;
    // 0x21bf18: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21bf1c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x21bf1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bf20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21bf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21bf24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21BF24u;
    {
        const bool branch_taken_0x21bf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF24u;
        // 0x21bf28: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf24) {
            ctx->pc = 0x21BF30u;
            goto label_21bf30;
        }
    }
    ctx->pc = 0x21BF2Cu;
label_21bf2c:
    // 0x21bf2c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x21bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21bf30:
    // 0x21bf30: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x21bf30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bf34: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x21bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x21bf38: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BF38u;
    {
        const bool branch_taken_0x21bf38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF38u;
        // 0x21bf3c: 0xa3a40001  sb          $a0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf38) {
            ctx->pc = 0x21BF4Cu;
            goto label_21bf4c;
        }
    }
    ctx->pc = 0x21BF40u;
    // 0x21bf40: 0x2402008b  addiu       $v0, $zero, 0x8B
    ctx->pc = 0x21bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x21bf44: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BF44u;
    {
        const bool branch_taken_0x21bf44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF44u;
        // 0x21bf48: 0x8f86b6cc  lw          $a2, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf44) {
            ctx->pc = 0x21BF54u;
            goto label_21bf54;
        }
    }
    ctx->pc = 0x21BF4Cu;
label_21bf4c:
    // 0x21bf4c: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21BF4Cu;
    SET_GPR_U32(ctx, 31, 0x21BF54u);
    ctx->pc = 0x21BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF4Cu;
    // 0x21bf50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21BF4Cu, 0x21BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF54u;
label_21bf54:
    // 0x21bf54: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x21bf54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x21bf58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21BF58u;
    {
        const bool branch_taken_0x21bf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF58u;
        // 0x21bf5c: 0x8f8ab6c8  lw          $t2, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf58) {
            ctx->pc = 0x21BF78u;
            goto label_21bf78;
        }
    }
    ctx->pc = 0x21BF60u;
    // 0x21bf60: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x21bf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21bf64: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x21bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21bf68: 0x1461821  addu        $v1, $t2, $a2
    ctx->pc = 0x21bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x21bf6c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x21bf6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21bf70: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BF70u;
    {
        const bool branch_taken_0x21bf70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF70u;
        // 0x21bf74: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf70) {
            ctx->pc = 0x21BF80u;
            goto label_21bf80;
        }
    }
    ctx->pc = 0x21BF78u;
label_21bf78:
    // 0x21bf78: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21BF78u;
    SET_GPR_U32(ctx, 31, 0x21BF80u);
    ctx->pc = 0x21BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF78u;
    // 0x21bf7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21BF78u, 0x21BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF80u;
label_21bf80:
    // 0x21bf80: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x21bf80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x21bf84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BF84u;
    {
        const bool branch_taken_0x21bf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF84u;
        // 0x21bf88: 0x1451021  addu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf84) {
            ctx->pc = 0x21BF9Cu;
            goto label_21bf9c;
        }
    }
    ctx->pc = 0x21BF8Cu;
    // 0x21bf8c: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x21bf8cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bf90: 0x24c50002  addiu       $a1, $a2, 0x2
    ctx->pc = 0x21bf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x21bf94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21BF94u;
    {
        const bool branch_taken_0x21bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF94u;
        // 0x21bf98: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf94) {
            ctx->pc = 0x21BFA0u;
            goto label_21bfa0;
        }
    }
    ctx->pc = 0x21BF9Cu;
label_21bf9c:
    // 0x21bf9c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x21bf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21bfa0:
    // 0x21bfa0: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x21bfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x21bfa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BFA4u;
    {
        const bool branch_taken_0x21bfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFA4u;
        // 0x21bfa8: 0x30e20002  andi        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfa4) {
            ctx->pc = 0x21BFB4u;
            goto label_21bfb4;
        }
    }
    ctx->pc = 0x21BFACu;
    // 0x21bfac: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21BFACu;
    SET_GPR_U32(ctx, 31, 0x21BFB4u);
    ctx->pc = 0x21BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFACu;
    // 0x21bfb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21BFACu, 0x21BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFB4u;
label_21bfb4:
    // 0x21bfb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BFB4u;
    {
        const bool branch_taken_0x21bfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFB4u;
        // 0x21bfb8: 0x8f85b6cc  lw          $a1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfb4) {
            ctx->pc = 0x21BFC4u;
            goto label_21bfc4;
        }
    }
    ctx->pc = 0x21BFBCu;
    // 0x21bfbc: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21BFBCu;
    SET_GPR_U32(ctx, 31, 0x21BFC4u);
    ctx->pc = 0x21BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFBCu;
    // 0x21bfc0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21BFBCu, 0x21BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFC4u;
label_21bfc4:
    // 0x21bfc4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x21bfc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x21bfc8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21BFC8u;
    {
        const bool branch_taken_0x21bfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFC8u;
        // 0x21bfcc: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfc8) {
            ctx->pc = 0x21C028u;
            goto label_21c028;
        }
    }
    ctx->pc = 0x21BFD0u;
    // 0x21bfd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21bfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21bfd4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x21bfd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x21bfd8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21BFD8u;
    {
        const bool branch_taken_0x21bfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFD8u;
        // 0x21bfdc: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfd8) {
            ctx->pc = 0x21C028u;
            goto label_21c028;
        }
    }
    ctx->pc = 0x21BFE0u;
    // 0x21bfe0: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x21bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x21bfe4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x21bfe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x21bfe8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21BFE8u;
    {
        const bool branch_taken_0x21bfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFE8u;
        // 0x21bfec: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfe8) {
            ctx->pc = 0x21C028u;
            goto label_21c028;
        }
    }
    ctx->pc = 0x21BFF0u;
    // 0x21bff0: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x21bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21bff4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x21bff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x21bff8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21BFF8u;
    {
        const bool branch_taken_0x21bff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFF8u;
        // 0x21bffc: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bff8) {
            ctx->pc = 0x21C028u;
            goto label_21c028;
        }
    }
    ctx->pc = 0x21C000u;
    // 0x21c000: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x21c000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21c004: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x21c004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x21c008: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C008u;
    {
        const bool branch_taken_0x21c008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C008u;
        // 0x21c00c: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c008) {
            ctx->pc = 0x21C028u;
            goto label_21c028;
        }
    }
    ctx->pc = 0x21C010u;
    // 0x21c010: 0x24650005  addiu       $a1, $v1, 0x5
    ctx->pc = 0x21c010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x21c014: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x21c014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x21c018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C018u;
    {
        const bool branch_taken_0x21c018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C018u;
        // 0x21c01c: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c018) {
            ctx->pc = 0x21C028u;
            goto label_21c028;
        }
    }
    ctx->pc = 0x21C020u;
    // 0x21c020: 0x24650006  addiu       $a1, $v1, 0x6
    ctx->pc = 0x21c020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x21c024: 0xaf85b6cc  sw          $a1, -0x4934($gp)
    ctx->pc = 0x21c024u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
label_21c028:
    // 0x21c028: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x21c028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x21c02c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x21C02Cu;
    {
        const bool branch_taken_0x21c02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C02Cu;
        // 0x21c030: 0x8f85b6cc  lw          $a1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c02c) {
            ctx->pc = 0x21C0D4u;
            goto label_21c0d4;
        }
    }
    ctx->pc = 0x21C034u;
    // 0x21c034: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x21c034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x21c038: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C038u;
    {
        const bool branch_taken_0x21c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C038u;
        // 0x21c03c: 0x1451021  addu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c038) {
            ctx->pc = 0x21C050u;
            goto label_21c050;
        }
    }
    ctx->pc = 0x21C040u;
    // 0x21c040: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x21c040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c044: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21c044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21c048: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21C048u;
    {
        const bool branch_taken_0x21c048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C048u;
        // 0x21c04c: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c048) {
            ctx->pc = 0x21C058u;
            goto label_21c058;
        }
    }
    ctx->pc = 0x21C050u;
label_21c050:
    // 0x21c050: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x21c050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x21c054: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21c054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_21c058:
    // 0x21c058: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x21c058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x21c05c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C05Cu;
    {
        const bool branch_taken_0x21c05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C05Cu;
        // 0x21c060: 0x1451021  addu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c05c) {
            ctx->pc = 0x21C07Cu;
            goto label_21c07c;
        }
    }
    ctx->pc = 0x21C064u;
    // 0x21c064: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21c064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c068: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21c068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21c06c: 0xaf85b6cc  sw          $a1, -0x4934($gp)
    ctx->pc = 0x21c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
    // 0x21c070: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x21c070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x21c074: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21C074u;
    {
        const bool branch_taken_0x21c074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C074u;
        // 0x21c078: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c074) {
            ctx->pc = 0x21C088u;
            goto label_21c088;
        }
    }
    ctx->pc = 0x21C07Cu;
label_21c07c:
    // 0x21c07c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21c080: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x21c080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x21c084: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x21c084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_21c088:
    // 0x21c088: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21c088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21c08c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21c090: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c094: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21C094u;
    {
        const bool branch_taken_0x21c094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C094u;
        // 0x21c098: 0x30e60010  andi        $a2, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c094) {
            ctx->pc = 0x21C0D4u;
            goto label_21c0d4;
        }
    }
    ctx->pc = 0x21C09Cu;
    // 0x21c09c: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x21c09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x21c0a0: 0x8f85b6cc  lw          $a1, -0x4934($gp)
    ctx->pc = 0x21c0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21c0a4: 0x0  nop
    ctx->pc = 0x21c0a4u;
    // NOP
label_21c0a8:
    // 0x21c0a8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x21c0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x21c0ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21C0ACu;
    {
        const bool branch_taken_0x21c0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0ACu;
        // 0x21c0b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c0ac) {
            ctx->pc = 0x21C0B8u;
            goto label_21c0b8;
        }
    }
    ctx->pc = 0x21C0B4u;
    // 0x21c0b4: 0xaf85b6cc  sw          $a1, -0x4934($gp)
    ctx->pc = 0x21c0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
label_21c0b8:
    // 0x21c0b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21c0bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21c0c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c0c4: 0x1482fff8  bne         $a0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21C0C4u;
    {
        const bool branch_taken_0x21c0c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0C4u;
        // 0x21c0c8: 0x8f85b6cc  lw          $a1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c0c4) {
            ctx->pc = 0x21C0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c0a8;
        }
    }
    ctx->pc = 0x21C0CCu;
    // 0x21c0cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21C0CCu;
    {
        const bool branch_taken_0x21c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c0cc) {
            ctx->pc = 0x21C0DCu;
            goto label_21c0dc;
        }
    }
    ctx->pc = 0x21C0D4u;
label_21c0d4:
    // 0x21c0d4: 0x30e60010  andi        $a2, $a3, 0x10
    ctx->pc = 0x21c0d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x21c0d8: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x21c0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_21c0dc:
    // 0x21c0dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x21C0DCu;
    {
        const bool branch_taken_0x21c0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c0dc) {
            ctx->pc = 0x21C118u;
            goto label_21c118;
        }
    }
    ctx->pc = 0x21C0E4u;
    // 0x21c0e4: 0x8f85b6cc  lw          $a1, -0x4934($gp)
    ctx->pc = 0x21c0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
label_21c0e8:
    // 0x21c0e8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x21c0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x21c0ec: 0x0  nop
    ctx->pc = 0x21c0ecu;
    // NOP
    // 0x21c0f0: 0x0  nop
    ctx->pc = 0x21c0f0u;
    // NOP
    // 0x21c0f4: 0x0  nop
    ctx->pc = 0x21c0f4u;
    // NOP
    // 0x21c0f8: 0x0  nop
    ctx->pc = 0x21c0f8u;
    // NOP
    // 0x21c0fc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21C0FCu;
    {
        const bool branch_taken_0x21c0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c0fc) {
            ctx->pc = 0x21C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c0e8;
        }
    }
    ctx->pc = 0x21C104u;
    // 0x21c104: 0x1451021  addu        $v0, $t2, $a1
    ctx->pc = 0x21c104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x21c108: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21c108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c10c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21c10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21c110: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21C110u;
    {
        const bool branch_taken_0x21c110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C110u;
        // 0x21c114: 0xaf85b6cc  sw          $a1, -0x4934($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c110) {
            ctx->pc = 0x21C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c0e8;
        }
    }
    ctx->pc = 0x21C118u;
label_21c118:
    // 0x21c118: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C118u;
    {
        const bool branch_taken_0x21c118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C118u;
        // 0x21c11c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c118) {
            ctx->pc = 0x21C128u;
            goto label_21c128;
        }
    }
    ctx->pc = 0x21C120u;
    // 0x21c120: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21C120u;
    SET_GPR_U32(ctx, 31, 0x21C128u);
    ctx->pc = 0x21C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C120u;
    // 0x21c124: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21C120u, 0x21C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C128u;
label_21c128:
    // 0x21c128: 0x3e00008  jr          $ra
    ctx->pc = 0x21C128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C128u;
        // 0x21c12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C130u;
}
