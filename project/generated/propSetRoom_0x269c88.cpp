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

// Function: propSetRoom
// Address: 0x269c88 - 0x269d78
void propSetRoom_0x269c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propSetRoom_0x269c88");
#endif

    switch (ctx->pc) {
        case 0x269cf8u: goto label_269cf8;
        case 0x269d08u: goto label_269d08;
        case 0x269d28u: goto label_269d28;
        default: break;
    }

    ctx->pc = 0x269c88u;

    // 0x269c88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x269c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x269c8c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x269c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x269c90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x269c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x269c94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x269c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x269c98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x269c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269c9c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x269c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x269ca0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x269ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x269ca4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x269ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x269ca8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x269ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x269cac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x269cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x269cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x269cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x269cb4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x269cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x269cb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x269cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x269cbc: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x269CBCu;
    {
        const bool branch_taken_0x269cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CBCu;
        // 0x269cc0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cbc) {
            ctx->pc = 0x269D54u;
            goto label_269d54;
        }
    }
    ctx->pc = 0x269CC4u;
    // 0x269cc4: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x269cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x269cc8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x269cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x269ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269CCCu;
    {
        const bool branch_taken_0x269ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CCCu;
        // 0x269cd0: 0x241603e7  addiu       $s6, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ccc) {
            ctx->pc = 0x269CE0u;
            goto label_269ce0;
        }
    }
    ctx->pc = 0x269CD4u;
    // 0x269cd4: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x269cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x269cd8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x269CD8u;
    {
        const bool branch_taken_0x269cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CD8u;
        // 0x269cdc: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cd8) {
            ctx->pc = 0x269D54u;
            goto label_269d54;
        }
    }
    ctx->pc = 0x269CE0u;
label_269ce0:
    // 0x269ce0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x269ce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ce4: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x269CE4u;
    {
        const bool branch_taken_0x269ce4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x269CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CE4u;
        // 0x269ce8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ce4) {
            ctx->pc = 0x269D48u;
            goto label_269d48;
        }
    }
    ctx->pc = 0x269CECu;
    // 0x269cec: 0x26550090  addiu       $s5, $s2, 0x90
    ctx->pc = 0x269cecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x269cf0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x269cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x269cf4: 0x0  nop
    ctx->pc = 0x269cf4u;
    // NOP
label_269cf8:
    // 0x269cf8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x269cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x269cfc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x269cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269d00: 0xc095be8  jal         func_256FA0
    ctx->pc = 0x269D00u;
    SET_GPR_U32(ctx, 31, 0x269D08u);
    ctx->pc = 0x269D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D00u;
    // 0x269d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256FA0u, 0x269D00u, 0x269D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D08u;
label_269d08:
    // 0x269d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269d0c: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x269d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x269d10: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x269D10u;
    {
        const bool branch_taken_0x269d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d10) {
            ctx->pc = 0x269D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269D10u;
            // 0x269d14: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269D38u;
            goto label_269d38;
        }
    }
    ctx->pc = 0x269D18u;
    // 0x269d18: 0x6020007  bltzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269D18u;
    {
        const bool branch_taken_0x269d18 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x269d18) {
            ctx->pc = 0x269D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269D18u;
            // 0x269d1c: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269D38u;
            goto label_269d38;
        }
    }
    ctx->pc = 0x269D20u;
    // 0x269d20: 0xc094fe0  jal         func_253F80
    ctx->pc = 0x269D20u;
    SET_GPR_U32(ctx, 31, 0x269D28u);
    ctx->pc = 0x269D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D20u;
    // 0x269d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F80u, 0x269D20u, 0x269D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D28u;
label_269d28:
    // 0x269d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269D28u;
    {
        const bool branch_taken_0x269d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D28u;
        // 0x269d2c: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d28) {
            ctx->pc = 0x269D38u;
            goto label_269d38;
        }
    }
    ctx->pc = 0x269D30u;
    // 0x269d30: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x269d30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269d34: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x269d34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269d38:
    // 0x269d38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x269d38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x269d3c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x269d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x269d40: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x269D40u;
    {
        const bool branch_taken_0x269d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D40u;
        // 0x269d44: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d40) {
            ctx->pc = 0x269CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269cf8;
        }
    }
    ctx->pc = 0x269D48u;
label_269d48:
    // 0x269d48: 0x5e800001  bgtzl       $s4, . + 4 + (0x1 << 2)
    ctx->pc = 0x269D48u;
    {
        const bool branch_taken_0x269d48 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x269d48) {
            ctx->pc = 0x269D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269D48u;
            // 0x269d4c: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269D50u;
            goto label_269d50;
        }
    }
    ctx->pc = 0x269D50u;
label_269d50:
    // 0x269d50: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x269d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_269d54:
    // 0x269d54: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x269d54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x269d58: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x269d58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269d5c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x269d5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269d60: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x269d60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269d64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x269d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269d68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x269d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x269d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269d70: 0x3e00008  jr          $ra
    ctx->pc = 0x269D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D70u;
        // 0x269d74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269D78u;
}
