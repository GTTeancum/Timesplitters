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

// Function: getHoursMinutesSeconds
// Address: 0x2b3b88 - 0x2b3c40
void getHoursMinutesSeconds_0x2b3b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getHoursMinutesSeconds_0x2b3b88");
#endif

    switch (ctx->pc) {
        case 0x2b3bc0u: goto label_2b3bc0;
        case 0x2b3bd0u: goto label_2b3bd0;
        case 0x2b3bf0u: goto label_2b3bf0;
        case 0x2b3c0cu: goto label_2b3c0c;
        default: break;
    }

    ctx->pc = 0x2b3b88u;

    // 0x2b3b88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b3b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b3b8c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b3b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b3b90: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b3b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b3b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b3b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b98: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b3b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b3b9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b3b9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ba0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b3ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b3ba4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b3ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ba8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3bac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b3bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bb0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b3bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b3bb4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2b3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2b3bb8: 0xc0b8080  jal         func_2E0200
    ctx->pc = 0x2B3BB8u;
    SET_GPR_U32(ctx, 31, 0x2B3BC0u);
    ctx->pc = 0x2B3BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3BB8u;
    // 0x2b3bbc: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0200u, 0x2B3BB8u, 0x2B3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BC0u;
label_2b3bc0:
    // 0x2b3bc0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B3BC0u;
    {
        const bool branch_taken_0x2b3bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BC0u;
        // 0x2b3bc4: 0x93a40003  lbu         $a0, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bc0) {
            ctx->pc = 0x2B3C24u;
            goto label_2b3c24;
        }
    }
    ctx->pc = 0x2B3BC8u;
    // 0x2b3bc8: 0xc0ace62  jal         func_2B3988
    ctx->pc = 0x2B3BC8u;
    SET_GPR_U32(ctx, 31, 0x2B3BD0u);
    ctx->pc = 0x2B3BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3BC8u;
    // 0x2b3bcc: 0x2410003c  addiu       $s0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3988u, 0x2B3BC8u, 0x2B3BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BD0u;
label_2b3bd0:
    // 0x2b3bd0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2b3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b3bd4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2b3bd4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b3bd8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3BD8u;
    {
        const bool branch_taken_0x2b3bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3bd8) {
            ctx->pc = 0x2B3BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BD8u;
            // 0x2b3bdc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3BE0u;
            goto label_2b3be0;
        }
    }
    ctx->pc = 0x2B3BE0u;
label_2b3be0:
    // 0x2b3be0: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x2b3be0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b3be4: 0x2810  mfhi        $a1
    ctx->pc = 0x2b3be4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2b3be8: 0xc0ace62  jal         func_2B3988
    ctx->pc = 0x2B3BE8u;
    SET_GPR_U32(ctx, 31, 0x2B3BF0u);
    ctx->pc = 0x2B3BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3BE8u;
    // 0x2b3bec: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3988u, 0x2B3BE8u, 0x2B3BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BF0u;
label_2b3bf0:
    // 0x2b3bf0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2b3bf0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b3bf4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3BF4u;
    {
        const bool branch_taken_0x2b3bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3bf4) {
            ctx->pc = 0x2B3BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BF4u;
            // 0x2b3bf8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3BFCu;
            goto label_2b3bfc;
        }
    }
    ctx->pc = 0x2B3BFCu;
label_2b3bfc:
    // 0x2b3bfc: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x2b3bfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2b3c00: 0x1810  mfhi        $v1
    ctx->pc = 0x2b3c00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b3c04: 0xc0ace62  jal         func_2B3988
    ctx->pc = 0x2B3C04u;
    SET_GPR_U32(ctx, 31, 0x2B3C0Cu);
    ctx->pc = 0x2B3C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C04u;
    // 0x2b3c08: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3988u, 0x2B3C04u, 0x2B3C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C0Cu;
label_2b3c0c:
    // 0x2b3c0c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2b3c0cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b3c10: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2b3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b3c14: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3C14u;
    {
        const bool branch_taken_0x2b3c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3c14) {
            ctx->pc = 0x2B3C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3C14u;
            // 0x2b3c18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C1Cu;
            goto label_2b3c1c;
        }
    }
    ctx->pc = 0x2B3C1Cu;
label_2b3c1c:
    // 0x2b3c1c: 0x1810  mfhi        $v1
    ctx->pc = 0x2b3c1cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b3c20: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2b3c24:
    // 0x2b3c24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b3c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3c28: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b3c28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b3c2c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b3c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3c30: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b3c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3c34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b3c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3c38: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C38u;
        // 0x2b3c3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3C40u;
}
