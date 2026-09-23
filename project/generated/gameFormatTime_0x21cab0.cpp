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

// Function: gameFormatTime
// Address: 0x21cab0 - 0x21cc2c
void gameFormatTime_0x21cab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameFormatTime_0x21cab0");
#endif

    switch (ctx->pc) {
        case 0x21cb70u: goto label_21cb70;
        case 0x21cb7cu: goto label_21cb7c;
        case 0x21cba4u: goto label_21cba4;
        case 0x21cbb0u: goto label_21cbb0;
        case 0x21cbf4u: goto label_21cbf4;
        case 0x21cc00u: goto label_21cc00;
        default: break;
    }

    ctx->pc = 0x21cab0u;

    // 0x21cab0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21cab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21cab4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21cab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cab8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21cabc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x21cabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21cac0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21cac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21cac4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21cac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21cac8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21cacc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21caccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21cad0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21cad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21cad4: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CAD4u;
    {
        const bool branch_taken_0x21cad4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAD4u;
        // 0x21cad8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cad4) {
            ctx->pc = 0x21CAFCu;
            goto label_21cafc;
        }
    }
    ctx->pc = 0x21CADCu;
    // 0x21cadc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21cae0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x21cae4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x21cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x21cae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21caec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21caf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21caf4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x21CAF4u;
    {
        const bool branch_taken_0x21caf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAF4u;
        // 0x21caf8: 0x8c8206e0  lw          $v0, 0x6E0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21caf4) {
            ctx->pc = 0x21CC04u;
            goto label_21cc04;
        }
    }
    ctx->pc = 0x21CAFCu;
label_21cafc:
    // 0x21cafc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x21cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21cb00: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x21cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21cb04: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x21cb04u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21cb08: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21CB08u;
    {
        const bool branch_taken_0x21cb08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cb08) {
            ctx->pc = 0x21CB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB08u;
            // 0x21cb0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CB10u;
            goto label_21cb10;
        }
    }
    ctx->pc = 0x21CB10u;
label_21cb10:
    // 0x21cb10: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x21cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21cb14: 0x3c1401fc  lui         $s4, 0x1FC
    ctx->pc = 0x21cb14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
    // 0x21cb18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21cb1c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x21cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21cb20: 0x2696b9c0  addiu       $s6, $s4, -0x4640
    ctx->pc = 0x21cb20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949312));
    // 0x21cb24: 0x3012  mflo        $a2
    ctx->pc = 0x21cb24u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x21cb28: 0x2810  mfhi        $a1
    ctx->pc = 0x21cb28u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x21cb2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21cb2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb30: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x21cb30u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21cb34: 0x7244001a  div1        $zero, $s2, $a0
    ctx->pc = 0x21cb34u;
    { int32_t divisor = GPR_S32(ctx, 4); int32_t dividend = GPR_S32(ctx, 18); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x21cb38: 0xa812  mflo        $s5
    ctx->pc = 0x21cb38u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x21cb3c: 0x70008812  mflo1       $s1
    ctx->pc = 0x21cb3cu;
    SET_GPR_U64(ctx, 17, ctx->lo1);
    // 0x21cb40: 0x224001a  div         $zero, $s1, $a0
    ctx->pc = 0x21cb40u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21cb44: 0x2012  mflo        $a0
    ctx->pc = 0x21cb44u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x21cb48: 0x9810  mfhi        $s3
    ctx->pc = 0x21cb48u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x21cb4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21cb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb50: 0x2a020064  slti        $v0, $s0, 0x64
    ctx->pc = 0x21cb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x21cb54: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x21cb54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x21cb58: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21CB58u;
    {
        const bool branch_taken_0x21cb58 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x21CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB58u;
        // 0x21cb5c: 0xa280b9c0  sb          $zero, -0x4640($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 4294949312), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb58) {
            ctx->pc = 0x21CB7Cu;
            goto label_21cb7c;
        }
    }
    ctx->pc = 0x21CB60u;
    // 0x21cb60: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21cb64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb68: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21CB68u;
    SET_GPR_U32(ctx, 31, 0x21CB70u);
    ctx->pc = 0x21CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB68u;
    // 0x21cb6c: 0x2484e570  addiu       $a0, $a0, -0x1A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21CB68u, 0x21CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB70u;
label_21cb70:
    // 0x21cb70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21cb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb74: 0xc0b96d7  jal         func_2E5B5C
    ctx->pc = 0x21CB74u;
    SET_GPR_U32(ctx, 31, 0x21CB7Cu);
    ctx->pc = 0x21CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB74u;
    // 0x21cb78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5B5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B5Cu, 0x21CB74u, 0x21CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB7Cu;
label_21cb7c:
    // 0x21cb7c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CB7Cu;
    {
        const bool branch_taken_0x21cb7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB7Cu;
        // 0x21cb80: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb7c) {
            ctx->pc = 0x21CB8Cu;
            goto label_21cb8c;
        }
    }
    ctx->pc = 0x21CB84u;
    // 0x21cb84: 0x5a20000c  blezl       $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x21CB84u;
    {
        const bool branch_taken_0x21cb84 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x21cb84) {
            ctx->pc = 0x21CB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB84u;
            // 0x21cb88: 0x3c07002f  lui         $a3, 0x2F (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CBB8u;
            goto label_21cbb8;
        }
    }
    ctx->pc = 0x21CB8Cu;
label_21cb8c:
    // 0x21cb8c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21cb90: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21CB90u;
    {
        const bool branch_taken_0x21cb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cb90) {
            ctx->pc = 0x21CB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB90u;
            // 0x21cb94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CB98u;
            goto label_21cb98;
        }
    }
    ctx->pc = 0x21CB98u;
label_21cb98:
    // 0x21cb98: 0x2484e578  addiu       $a0, $a0, -0x1A88
    ctx->pc = 0x21cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960504));
    // 0x21cb9c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21CB9Cu;
    SET_GPR_U32(ctx, 31, 0x21CBA4u);
    ctx->pc = 0x21CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB9Cu;
    // 0x21cba0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21CB9Cu, 0x21CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBA4u;
label_21cba4:
    // 0x21cba4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21cba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cba8: 0xc0b96d7  jal         func_2E5B5C
    ctx->pc = 0x21CBA8u;
    SET_GPR_U32(ctx, 31, 0x21CBB0u);
    ctx->pc = 0x21CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBA8u;
    // 0x21cbac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5B5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B5Cu, 0x21CBA8u, 0x21CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBB0u;
label_21cbb0:
    // 0x21cbb0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x21cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21cbb4: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x21cbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_21cbb8:
    // 0x21cbb8: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x21cbb8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21cbbc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21CBBCu;
    {
        const bool branch_taken_0x21cbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cbbc) {
            ctx->pc = 0x21CBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CBBCu;
            // 0x21cbc0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CBC4u;
            goto label_21cbc4;
        }
    }
    ctx->pc = 0x21CBC4u;
label_21cbc4:
    // 0x21cbc4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x21cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21cbc8: 0x24e72c18  addiu       $a3, $a3, 0x2C18
    ctx->pc = 0x21cbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11288));
    // 0x21cbcc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21cbd0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x21cbd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21cbd8: 0x2484e580  addiu       $a0, $a0, -0x1A80
    ctx->pc = 0x21cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960512));
    // 0x21cbdc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x21cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x21cbe0: 0x2690b9c0  addiu       $s0, $s4, -0x4640
    ctx->pc = 0x21cbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949312));
    // 0x21cbe4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21cbe8: 0x2810  mfhi        $a1
    ctx->pc = 0x21cbe8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x21cbec: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21CBECu;
    SET_GPR_U32(ctx, 31, 0x21CBF4u);
    ctx->pc = 0x21CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBECu;
    // 0x21cbf0: 0x8c470b0c  lw          $a3, 0xB0C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2828)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21CBECu, 0x21CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBF4u;
label_21cbf4:
    // 0x21cbf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21cbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbf8: 0xc0b96d7  jal         func_2E5B5C
    ctx->pc = 0x21CBF8u;
    SET_GPR_U32(ctx, 31, 0x21CC00u);
    ctx->pc = 0x21CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBF8u;
    // 0x21cbfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5B5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B5Cu, 0x21CBF8u, 0x21CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC00u;
label_21cc00:
    // 0x21cc00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21cc00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21cc04:
    // 0x21cc04: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21cc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21cc08: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x21cc08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21cc0c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21cc0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21cc10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21cc10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21cc14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21cc14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cc18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21cc18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cc1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21cc1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cc20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cc24: 0x3e00008  jr          $ra
    ctx->pc = 0x21CC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC24u;
        // 0x21cc28: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CC2Cu;
}
