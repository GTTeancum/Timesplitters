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

// Function: splitMessageTick
// Address: 0x230bb0 - 0x230ca4
void splitMessageTick_0x230bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("splitMessageTick_0x230bb0");
#endif

    switch (ctx->pc) {
        case 0x230c18u: goto label_230c18;
        case 0x230c48u: goto label_230c48;
        default: break;
    }

    ctx->pc = 0x230bb0u;

    // 0x230bb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x230bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x230bb4: 0x24030104  addiu       $v1, $zero, 0x104
    ctx->pc = 0x230bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x230bb8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x230bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x230bbc: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x230bc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x230bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230bc4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x230bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x230bc8: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x230bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x230bcc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x230bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x230bd0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x230bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x230bd4: 0x24421488  addiu       $v0, $v0, 0x1488
    ctx->pc = 0x230bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5256));
    // 0x230bd8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x230bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x230bdc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x230be0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x230be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x230be4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230be8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230bec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230bf0: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x230BF0u;
    {
        const bool branch_taken_0x230bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BF0u;
        // 0x230bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bf0) {
            ctx->pc = 0x230C7Cu;
            goto label_230c7c;
        }
    }
    ctx->pc = 0x230BF8u;
    // 0x230bf8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x230bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x230bfc: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x230bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x230c00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x230c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c04: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x230C04u;
    {
        const bool branch_taken_0x230c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C04u;
        // 0x230c08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c04) {
            ctx->pc = 0x230C78u;
            goto label_230c78;
        }
    }
    ctx->pc = 0x230C0Cu;
    // 0x230c0c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x230c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x230c10: 0x2416005e  addiu       $s6, $zero, 0x5E
    ctx->pc = 0x230c10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x230c14: 0x24553760  addiu       $s5, $v0, 0x3760
    ctx->pc = 0x230c14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 14176));
label_230c18:
    // 0x230c18: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x230c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x230c1c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x230c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230c20: 0x1476000f  bne         $v1, $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x230C20u;
    {
        const bool branch_taken_0x230c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x230C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C20u;
        // 0x230c24: 0x24b10001  addiu       $s1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c20) {
            ctx->pc = 0x230C60u;
            goto label_230c60;
        }
    }
    ctx->pc = 0x230C28u;
    // 0x230c28: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x230c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x230c2c: 0x90520000  lbu         $s2, 0x0($v0)
    ctx->pc = 0x230c2cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230c30: 0x2650ffcf  addiu       $s0, $s2, -0x31
    ctx->pc = 0x230c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967247));
    // 0x230c34: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x230c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x230c38: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x230C38u;
    {
        const bool branch_taken_0x230c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C38u;
        // 0x230c3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c38) {
            ctx->pc = 0x230C64u;
            goto label_230c64;
        }
    }
    ctx->pc = 0x230C40u;
    // 0x230c40: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x230C40u;
    SET_GPR_U32(ctx, 31, 0x230C48u);
    ctx->pc = 0x230C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C40u;
    // 0x230c44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x230C40u, 0x230C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C48u;
label_230c48:
    // 0x230c48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x230c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x230c4c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x230c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x230c50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230c54: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x230c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x230c58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230C58u;
    {
        const bool branch_taken_0x230c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C58u;
        // 0x230c5c: 0x2642ffd0  addiu       $v0, $s2, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c58) {
            ctx->pc = 0x230C7Cu;
            goto label_230c7c;
        }
    }
    ctx->pc = 0x230C60u;
label_230c60:
    // 0x230c60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230c64:
    // 0x230c64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x230c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c68: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x230c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x230c6c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x230c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230c70: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x230C70u;
    {
        const bool branch_taken_0x230c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230c70) {
            ctx->pc = 0x230C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230c18;
        }
    }
    ctx->pc = 0x230C78u;
label_230c78:
    // 0x230c78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230c7c:
    // 0x230c7c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x230c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x230c80: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x230c80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x230c84: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x230c84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230c88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x230c88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230c8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x230c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230c90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x230c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230c94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x230c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x230C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C9Cu;
        // 0x230ca0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230CA4u;
}
