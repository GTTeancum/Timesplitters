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

// Function: cd_callback
// Address: 0x2dde80 - 0x2ddf34
void cd_callback_0x2dde80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cd_callback_0x2dde80");
#endif

    switch (ctx->pc) {
        case 0x2ddee8u: goto label_2ddee8;
        case 0x2ddf10u: goto label_2ddf10;
        default: break;
    }

    ctx->pc = 0x2dde80u;

    // 0x2dde80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dde80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dde84: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2dde84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2dde88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dde88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dde8c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x2dde8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x2dde90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dde90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dde94: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2dde94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dde98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dde9c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2dde9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ddea0: 0xac622fe0  sw          $v0, 0x2FE0($v1)
    ctx->pc = 0x2ddea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x382FE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382FE0u, _value); } while (0);
    // 0x2ddea4: 0x8c622fe0  lw          $v0, 0x2FE0($v1)
    ctx->pc = 0x2ddea4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382FE0u));
    // 0x2ddea8: 0xaca22fe4  sw          $v0, 0x2FE4($a1)
    ctx->pc = 0x2ddea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x382FE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382FE4u, _value); } while (0);
    // 0x2ddeac: 0x8c832fb0  lw          $v1, 0x2FB0($a0)
    ctx->pc = 0x2ddeacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x382FB0u));
    // 0x2ddeb0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2DDEB0u;
    {
        const bool branch_taken_0x2ddeb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEB0u;
        // 0x2ddeb4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddeb0) {
            ctx->pc = 0x2DDEDCu;
            goto label_2ddedc;
        }
    }
    ctx->pc = 0x2DDEB8u;
    // 0x2ddeb8: 0x8e032fe0  lw          $v1, 0x2FE0($s0)
    ctx->pc = 0x2ddeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12256)));
    // 0x2ddebc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2ddebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ddec0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDEC0u;
    {
        const bool branch_taken_0x2ddec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEC0u;
        // 0x2ddec4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddec0) {
            ctx->pc = 0x2DDEDCu;
            goto label_2ddedc;
        }
    }
    ctx->pc = 0x2DDEC8u;
    // 0x2ddec8: 0xae002fe0  sw          $zero, 0x2FE0($s0)
    ctx->pc = 0x2ddec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12256), GPR_U32(ctx, 0));
    // 0x2ddecc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ddeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2dded0: 0xac402fac  sw          $zero, 0x2FAC($v0)
    ctx->pc = 0x2dded0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382FACu, _value); } while (0);
    // 0x2dded4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DDED4u;
    {
        const bool branch_taken_0x2dded4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDED4u;
        // 0x2dded8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dded4) {
            ctx->pc = 0x2DDF28u;
            goto label_2ddf28;
        }
    }
    ctx->pc = 0x2DDEDCu;
label_2ddedc:
    // 0x2ddedc: 0x8c442fa0  lw          $a0, 0x2FA0($v0)
    ctx->pc = 0x2ddedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12192)));
    // 0x2ddee0: 0xc0b4054  jal         func_2D0150
    ctx->pc = 0x2DDEE0u;
    SET_GPR_U32(ctx, 31, 0x2DDEE8u);
    ctx->pc = 0x2D0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0150u, 0x2DDEE0u, 0x2DDEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEE8u;
label_2ddee8:
    // 0x2ddee8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ddee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ddeec: 0x8c622f9c  lw          $v0, 0x2F9C($v1)
    ctx->pc = 0x2ddeecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382F9Cu));
    // 0x2ddef0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DDEF0u;
    {
        const bool branch_taken_0x2ddef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEF0u;
        // 0x2ddef4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddef0) {
            ctx->pc = 0x2DDF18u;
            goto label_2ddf18;
        }
    }
    ctx->pc = 0x2DDEF8u;
    // 0x2ddef8: 0x8c432fdc  lw          $v1, 0x2FDC($v0)
    ctx->pc = 0x2ddef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12252)));
    // 0x2ddefc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDEFCu;
    {
        const bool branch_taken_0x2ddefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEFCu;
        // 0x2ddf00: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddefc) {
            ctx->pc = 0x2DDF18u;
            goto label_2ddf18;
        }
    }
    ctx->pc = 0x2DDF04u;
    // 0x2ddf04: 0x8c442fa8  lw          $a0, 0x2FA8($v0)
    ctx->pc = 0x2ddf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12200)));
    // 0x2ddf08: 0xc0b4054  jal         func_2D0150
    ctx->pc = 0x2DDF08u;
    SET_GPR_U32(ctx, 31, 0x2DDF10u);
    ctx->pc = 0x2D0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0150u, 0x2DDF08u, 0x2DDF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF10u;
label_2ddf10:
    // 0x2ddf10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDF10u;
    {
        const bool branch_taken_0x2ddf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddf10) {
            ctx->pc = 0x2DDF20u;
            goto label_2ddf20;
        }
    }
    ctx->pc = 0x2DDF18u;
label_2ddf18:
    // 0x2ddf18: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ddf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2ddf1c: 0xac402fac  sw          $zero, 0x2FAC($v0)
    ctx->pc = 0x2ddf1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x382FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x382FACu, _value); } while (0);
label_2ddf20:
    // 0x2ddf20: 0xae002fe0  sw          $zero, 0x2FE0($s0)
    ctx->pc = 0x2ddf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12256), GPR_U32(ctx, 0));
    // 0x2ddf24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ddf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ddf28:
    // 0x2ddf28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddf28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddf2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF2Cu;
        // 0x2ddf30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDF34u;
}
