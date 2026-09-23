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

// Function: mapmakermain_pageTick
// Address: 0x252c50 - 0x252fa0
void mapmakermain_pageTick_0x252c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapmakermain_pageTick_0x252c50");
#endif

    switch (ctx->pc) {
        case 0x252c6cu: goto label_252c6c;
        case 0x252c78u: goto label_252c78;
        case 0x252cb8u: goto label_252cb8;
        case 0x252cecu: goto label_252cec;
        case 0x252d18u: goto label_252d18;
        case 0x252d2cu: goto label_252d2c;
        case 0x252d68u: goto label_252d68;
        case 0x252d78u: goto label_252d78;
        case 0x252d94u: goto label_252d94;
        case 0x252da8u: goto label_252da8;
        case 0x252db0u: goto label_252db0;
        case 0x252db8u: goto label_252db8;
        case 0x252dccu: goto label_252dcc;
        case 0x252ea0u: goto label_252ea0;
        case 0x252eecu: goto label_252eec;
        case 0x252f1cu: goto label_252f1c;
        case 0x252f48u: goto label_252f48;
        case 0x252f88u: goto label_252f88;
        default: break;
    }

    ctx->pc = 0x252c50u;

    // 0x252c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252c54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x252c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x252c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252c60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252c64: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x252C64u;
    SET_GPR_U32(ctx, 31, 0x252C6Cu);
    ctx->pc = 0x252C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C64u;
    // 0x252c68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x252C64u, 0x252C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252C6Cu;
label_252c6c:
    // 0x252c6c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x252c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x252c70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252C70u;
    {
        const bool branch_taken_0x252c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C70u;
        // 0x252c74: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c70) {
            ctx->pc = 0x252C8Cu;
            goto label_252c8c;
        }
    }
    ctx->pc = 0x252C78u;
label_252c78:
    // 0x252c78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252c7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x252c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c84: 0x8093f30  j           func_24FCC0
    ctx->pc = 0x252C84u;
    ctx->pc = 0x252C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C84u;
    // 0x252c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCC0u;
    exitDialogs_0x24fcc0(rdram, ctx, runtime); return;
    ctx->pc = 0x252C8Cu;
label_252c8c:
    // 0x252c8c: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x252c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x252c90: 0x24827240  addiu       $v0, $a0, 0x7240
    ctx->pc = 0x252c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29248));
    // 0x252c94: 0xac857240  sw          $a1, 0x7240($a0)
    ctx->pc = 0x252c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29248), GPR_U32(ctx, 5));
    // 0x252c98: 0x3c0600c4  lui         $a2, 0xC4
    ctx->pc = 0x252c98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)196 << 16));
    // 0x252c9c: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x252c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x252ca0: 0x3c03024d  lui         $v1, 0x24D
    ctx->pc = 0x252ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)589 << 16));
    // 0x252ca4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ca8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x252ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x252cac: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x252cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x252cb0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x252CB0u;
    SET_GPR_U32(ctx, 31, 0x252CB8u);
    ctx->pc = 0x252CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252CB0u;
    // 0x252cb4: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x252CB0u, 0x252CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252CB8u;
label_252cb8:
    // 0x252cb8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x252cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x252cbc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x252CBCu;
    {
        const bool branch_taken_0x252cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CBCu;
        // 0x252cc0: 0x8f83a0d4  lw          $v1, -0x5F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cbc) {
            ctx->pc = 0x252CE4u;
            goto label_252ce4;
        }
    }
    ctx->pc = 0x252CC4u;
    // 0x252cc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x252cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252cc8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252CC8u;
    {
        const bool branch_taken_0x252cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252cc8) {
            ctx->pc = 0x252CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252CC8u;
            // 0x252ccc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252CD0u;
            goto label_252cd0;
        }
    }
    ctx->pc = 0x252CD0u;
label_252cd0:
    // 0x252cd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x252cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x252cd4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x252cd4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x252cd8: 0x1810  mfhi        $v1
    ctx->pc = 0x252cd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x252cdc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x252CDCu;
    {
        const bool branch_taken_0x252cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CDCu;
        // 0x252ce0: 0xaf83a0d4  sw          $v1, -0x5F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cdc) {
            ctx->pc = 0x252D30u;
            goto label_252d30;
        }
    }
    ctx->pc = 0x252CE4u;
label_252ce4:
    // 0x252ce4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x252CE4u;
    SET_GPR_U32(ctx, 31, 0x252CECu);
    ctx->pc = 0x252CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252CE4u;
    // 0x252ce8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x252CE4u, 0x252CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252CECu;
label_252cec:
    // 0x252cec: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x252cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x252cf0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x252CF0u;
    {
        const bool branch_taken_0x252cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CF0u;
        // 0x252cf4: 0x8f83a0d4  lw          $v1, -0x5F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cf0) {
            ctx->pc = 0x252D10u;
            goto label_252d10;
        }
    }
    ctx->pc = 0x252CF8u;
    // 0x252cf8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x252cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x252cfc: 0x461000c  bgez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x252CFCu;
    {
        const bool branch_taken_0x252cfc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x252D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CFCu;
        // 0x252d00: 0xaf83a0d4  sw          $v1, -0x5F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cfc) {
            ctx->pc = 0x252D30u;
            goto label_252d30;
        }
    }
    ctx->pc = 0x252D04u;
    // 0x252d04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x252d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252d08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x252D08u;
    {
        const bool branch_taken_0x252d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D08u;
        // 0x252d0c: 0xaf83a0d4  sw          $v1, -0x5F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d08) {
            ctx->pc = 0x252D30u;
            goto label_252d30;
        }
    }
    ctx->pc = 0x252D10u;
label_252d10:
    // 0x252d10: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x252D10u;
    SET_GPR_U32(ctx, 31, 0x252D18u);
    ctx->pc = 0x252D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D10u;
    // 0x252d14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x252D10u, 0x252D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D18u;
label_252d18:
    // 0x252d18: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x252d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x252d1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x252D1Cu;
    {
        const bool branch_taken_0x252d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D1Cu;
        // 0x252d20: 0x8f83a0d4  lw          $v1, -0x5F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d1c) {
            ctx->pc = 0x252D30u;
            goto label_252d30;
        }
    }
    ctx->pc = 0x252D24u;
    // 0x252d24: 0xc094b0a  jal         func_252C28
    ctx->pc = 0x252D24u;
    SET_GPR_U32(ctx, 31, 0x252D2Cu);
    ctx->pc = 0x252C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252C28u, 0x252D24u, 0x252D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D2Cu;
label_252d2c:
    // 0x252d2c: 0x8f83a0d4  lw          $v1, -0x5F2C($gp)
    ctx->pc = 0x252d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
label_252d30:
    // 0x252d30: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x252D30u;
    {
        const bool branch_taken_0x252d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D30u;
        // 0x252d34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d30) {
            ctx->pc = 0x252DC0u;
            goto label_252dc0;
        }
    }
    ctx->pc = 0x252D38u;
    // 0x252d38: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x252d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x252d3c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x252d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x252d40: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x252d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x252d44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x252d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x252d48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x252d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x252d4c: 0x9443fff4  lhu         $v1, -0xC($v0)
    ctx->pc = 0x252d4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967284)));
    // 0x252d50: 0x2470ff38  addiu       $s0, $v1, -0xC8
    ctx->pc = 0x252d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967096));
    // 0x252d54: 0x2e020015  sltiu       $v0, $s0, 0x15
    ctx->pc = 0x252d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x252d58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252D58u;
    {
        const bool branch_taken_0x252d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D58u;
        // 0x252d5c: 0x8f82a210  lw          $v0, -0x5DF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d58) {
            ctx->pc = 0x252D7Cu;
            goto label_252d7c;
        }
    }
    ctx->pc = 0x252D60u;
    // 0x252d60: 0xc094180  jal         func_250600
    ctx->pc = 0x252D60u;
    SET_GPR_U32(ctx, 31, 0x252D68u);
    ctx->pc = 0x252D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D60u;
    // 0x252d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250600u, 0x252D60u, 0x252D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D68u;
label_252d68:
    // 0x252d68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x252d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252d6c: 0xe780a214  swc1        $f0, -0x5DEC($gp)
    ctx->pc = 0x252d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943252), bits); }
    // 0x252d70: 0xc09441a  jal         func_251068
    ctx->pc = 0x252D70u;
    SET_GPR_U32(ctx, 31, 0x252D78u);
    ctx->pc = 0x252D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D70u;
    // 0x252d74: 0xaf82a208  sw          $v0, -0x5DF8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251068u, 0x252D70u, 0x252D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D78u;
label_252d78:
    // 0x252d78: 0x8f82a210  lw          $v0, -0x5DF0($gp)
    ctx->pc = 0x252d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
label_252d7c:
    // 0x252d7c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x252D7Cu;
    {
        const bool branch_taken_0x252d7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x252D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D7Cu;
        // 0x252d80: 0x240401c1  addiu       $a0, $zero, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d7c) {
            ctx->pc = 0x252DA8u;
            goto label_252da8;
        }
    }
    ctx->pc = 0x252D84u;
    // 0x252d84: 0xaf90a210  sw          $s0, -0x5DF0($gp)
    ctx->pc = 0x252d84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943248), GPR_U32(ctx, 16));
    // 0x252d88: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x252d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x252d8c: 0xc094140  jal         func_250500
    ctx->pc = 0x252D8Cu;
    SET_GPR_U32(ctx, 31, 0x252D94u);
    ctx->pc = 0x252D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D8Cu;
    // 0x252d90: 0x2406011a  addiu       $a2, $zero, 0x11A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250500u, 0x252D8Cu, 0x252D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D94u;
label_252d94:
    // 0x252d94: 0x240401c1  addiu       $a0, $zero, 0x1C1
    ctx->pc = 0x252d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
    // 0x252d98: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x252d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x252d9c: 0x24060183  addiu       $a2, $zero, 0x183
    ctx->pc = 0x252d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    // 0x252da0: 0xc09414e  jal         func_250538
    ctx->pc = 0x252DA0u;
    SET_GPR_U32(ctx, 31, 0x252DA8u);
    ctx->pc = 0x252DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DA0u;
    // 0x252da4: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250538u, 0x252DA0u, 0x252DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DA8u;
label_252da8:
    // 0x252da8: 0xc094156  jal         func_250558
    ctx->pc = 0x252DA8u;
    SET_GPR_U32(ctx, 31, 0x252DB0u);
    ctx->pc = 0x252DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DA8u;
    // 0x252dac: 0xaf80a20c  sw          $zero, -0x5DF4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250558u, 0x252DA8u, 0x252DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DB0u;
label_252db0:
    // 0x252db0: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x252DB0u;
    SET_GPR_U32(ctx, 31, 0x252DB8u);
    ctx->pc = 0x2506C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2506C0u, 0x252DB0u, 0x252DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DB8u;
label_252db8:
    // 0x252db8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x252DB8u;
    {
        const bool branch_taken_0x252db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252db8) {
            ctx->pc = 0x252DC4u;
            goto label_252dc4;
        }
    }
    ctx->pc = 0x252DC0u;
label_252dc0:
    // 0x252dc0: 0xaf82a210  sw          $v0, -0x5DF0($gp)
    ctx->pc = 0x252dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943248), GPR_U32(ctx, 2));
label_252dc4:
    // 0x252dc4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x252DC4u;
    SET_GPR_U32(ctx, 31, 0x252DCCu);
    ctx->pc = 0x252DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DC4u;
    // 0x252dc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x252DC4u, 0x252DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DCCu;
label_252dcc:
    // 0x252dcc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x252dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x252dd0: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x252DD0u;
    {
        const bool branch_taken_0x252dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DD0u;
        // 0x252dd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dd0) {
            ctx->pc = 0x252F7Cu;
            goto label_252f7c;
        }
    }
    ctx->pc = 0x252DD8u;
    // 0x252dd8: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x252dd8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x252ddc: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252DDCu;
    {
        const bool branch_taken_0x252ddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x252DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DDCu;
        // 0x252de0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ddc) {
            ctx->pc = 0x252E00u;
            goto label_252e00;
        }
    }
    ctx->pc = 0x252DE4u;
    // 0x252de4: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x252DE4u;
    {
        const bool branch_taken_0x252de4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x252DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DE4u;
        // 0x252de8: 0x24a3fff6  addiu       $v1, $a1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252de4) {
            ctx->pc = 0x252E98u;
            goto label_252e98;
        }
    }
    ctx->pc = 0x252DECu;
    // 0x252dec: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x252decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x252df0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x252DF0u;
    {
        const bool branch_taken_0x252df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DF0u;
        // 0x252df4: 0x8f82a13c  lw          $v0, -0x5EC4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252df0) {
            ctx->pc = 0x252EA8u;
            goto label_252ea8;
        }
    }
    ctx->pc = 0x252DF8u;
    // 0x252df8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x252DF8u;
    {
        const bool branch_taken_0x252df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DF8u;
        // 0x252dfc: 0xaf83a0d4  sw          $v1, -0x5F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252df8) {
            ctx->pc = 0x252F7Cu;
            goto label_252f7c;
        }
    }
    ctx->pc = 0x252E00u;
label_252e00:
    // 0x252e00: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x252e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x252e04: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x252e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x252e08: 0x24477160  addiu       $a3, $v0, 0x7160
    ctx->pc = 0x252e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 29024));
    // 0x252e0c: 0x24664040  addiu       $a2, $v1, 0x4040
    ctx->pc = 0x252e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16448));
    // 0x252e10: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x252e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x252e14: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x252e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x252e18: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x252e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x252e1c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x252e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x252e20: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x252e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e24: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x252e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e28: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x252e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e2c: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x252e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e30: 0x68e40017  ldl         $a0, 0x17($a3)
    ctx->pc = 0x252e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x252e34: 0x6ce40010  ldr         $a0, 0x10($a3)
    ctx->pc = 0x252e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x252e38: 0x68e5001f  ldl         $a1, 0x1F($a3)
    ctx->pc = 0x252e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x252e3c: 0x6ce50018  ldr         $a1, 0x18($a3)
    ctx->pc = 0x252e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x252e40: 0xb0c40017  sdl         $a0, 0x17($a2)
    ctx->pc = 0x252e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e44: 0xb4c40010  sdr         $a0, 0x10($a2)
    ctx->pc = 0x252e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e48: 0xb0c5001f  sdl         $a1, 0x1F($a2)
    ctx->pc = 0x252e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e4c: 0xb4c50018  sdr         $a1, 0x18($a2)
    ctx->pc = 0x252e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e50: 0x68e40027  ldl         $a0, 0x27($a3)
    ctx->pc = 0x252e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x252e54: 0x6ce40020  ldr         $a0, 0x20($a3)
    ctx->pc = 0x252e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x252e58: 0x68e5002f  ldl         $a1, 0x2F($a3)
    ctx->pc = 0x252e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x252e5c: 0x6ce50028  ldr         $a1, 0x28($a3)
    ctx->pc = 0x252e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x252e60: 0xb0c40027  sdl         $a0, 0x27($a2)
    ctx->pc = 0x252e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e64: 0xb4c40020  sdr         $a0, 0x20($a2)
    ctx->pc = 0x252e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e68: 0xb0c5002f  sdl         $a1, 0x2F($a2)
    ctx->pc = 0x252e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e6c: 0xb4c50028  sdr         $a1, 0x28($a2)
    ctx->pc = 0x252e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e70: 0x68e40037  ldl         $a0, 0x37($a3)
    ctx->pc = 0x252e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x252e74: 0x6ce40030  ldr         $a0, 0x30($a3)
    ctx->pc = 0x252e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x252e78: 0x68e5003f  ldl         $a1, 0x3F($a3)
    ctx->pc = 0x252e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x252e7c: 0x6ce50038  ldr         $a1, 0x38($a3)
    ctx->pc = 0x252e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x252e80: 0xb0c40037  sdl         $a0, 0x37($a2)
    ctx->pc = 0x252e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e84: 0xb4c40030  sdr         $a0, 0x30($a2)
    ctx->pc = 0x252e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e88: 0xb0c5003f  sdl         $a1, 0x3F($a2)
    ctx->pc = 0x252e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e8c: 0xb4c50038  sdr         $a1, 0x38($a2)
    ctx->pc = 0x252e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e90: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x252E90u;
    {
        const bool branch_taken_0x252e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E90u;
        // 0x252e94: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e90) {
            ctx->pc = 0x252F80u;
            goto label_252f80;
        }
    }
    ctx->pc = 0x252E98u;
label_252e98:
    // 0x252e98: 0xc094b0a  jal         func_252C28
    ctx->pc = 0x252E98u;
    SET_GPR_U32(ctx, 31, 0x252EA0u);
    ctx->pc = 0x252C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252C28u, 0x252E98u, 0x252EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252EA0u;
label_252ea0:
    // 0x252ea0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x252EA0u;
    {
        const bool branch_taken_0x252ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EA0u;
        // 0x252ea4: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ea0) {
            ctx->pc = 0x252F80u;
            goto label_252f80;
        }
    }
    ctx->pc = 0x252EA8u;
label_252ea8:
    // 0x252ea8: 0x24a4ff38  addiu       $a0, $a1, -0xC8
    ctx->pc = 0x252ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967096));
    // 0x252eac: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x252eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x252eb0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x252EB0u;
    {
        const bool branch_taken_0x252eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EB0u;
        // 0x252eb4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252eb0) {
            ctx->pc = 0x252EF4u;
            goto label_252ef4;
        }
    }
    ctx->pc = 0x252EB8u;
    // 0x252eb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x252eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252ebc: 0x24426588  addiu       $v0, $v0, 0x6588
    ctx->pc = 0x252ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25992));
    // 0x252ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x252ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ec4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252ec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x252ec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ecc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252ed0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x252ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252ed4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x252ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252ed8: 0x63500  sll         $a2, $a2, 20
    ctx->pc = 0x252ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 20));
    // 0x252edc: 0x52d00  sll         $a1, $a1, 20
    ctx->pc = 0x252edcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
    // 0x252ee0: 0x63023  negu        $a2, $a2
    ctx->pc = 0x252ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x252ee4: 0xc092244  jal         func_248910
    ctx->pc = 0x252EE4u;
    SET_GPR_U32(ctx, 31, 0x252EECu);
    ctx->pc = 0x252EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252EE4u;
    // 0x252ee8: 0x52823  negu        $a1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248910u, 0x252EE4u, 0x252EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252EECu;
label_252eec:
    // 0x252eec: 0x1000ff62  b           . + 4 + (-0x9E << 2)
    ctx->pc = 0x252EECu;
    {
        const bool branch_taken_0x252eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EECu;
        // 0x252ef0: 0xaf82a0f8  sw          $v0, -0x5F08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252eec) {
            ctx->pc = 0x252C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252c78;
        }
    }
    ctx->pc = 0x252EF4u;
label_252ef4:
    // 0x252ef4: 0x24a3ffc0  addiu       $v1, $a1, -0x40
    ctx->pc = 0x252ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    // 0x252ef8: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x252ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x252efc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x252EFCu;
    {
        const bool branch_taken_0x252efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EFCu;
        // 0x252f00: 0x8f82a224  lw          $v0, -0x5DDC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252efc) {
            ctx->pc = 0x252F58u;
            goto label_252f58;
        }
    }
    ctx->pc = 0x252F04u;
    // 0x252f04: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x252F04u;
    {
        const bool branch_taken_0x252f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x252F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F04u;
        // 0x252f08: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f04) {
            ctx->pc = 0x252F34u;
            goto label_252f34;
        }
    }
    ctx->pc = 0x252F0Cu;
    // 0x252f0c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x252f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x252f10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252f14: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x252F14u;
    SET_GPR_U32(ctx, 31, 0x252F1Cu);
    ctx->pc = 0x252F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F14u;
    // 0x252f18: 0x24a57210  addiu       $a1, $a1, 0x7210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x252F14u, 0x252F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F1Cu;
label_252f1c:
    // 0x252f1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252f20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x252f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252f28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252f2c: 0x8080ea2  j           func_203A88
    ctx->pc = 0x252F2Cu;
    ctx->pc = 0x252F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F2Cu;
    // 0x252f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    joyClearAll_0x203a88(rdram, ctx, runtime); return;
    ctx->pc = 0x252F34u;
label_252f34:
    // 0x252f34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252f38: 0x24424040  addiu       $v0, $v0, 0x4040
    ctx->pc = 0x252f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16448));
    // 0x252f3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252f40: 0xc0918c6  jal         func_246318
    ctx->pc = 0x252F40u;
    SET_GPR_U32(ctx, 31, 0x252F48u);
    ctx->pc = 0x252F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F40u;
    // 0x252f44: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246318u, 0x252F40u, 0x252F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F48u;
label_252f48:
    // 0x252f48: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x252f48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x252f4c: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x252f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x252f50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x252F50u;
    {
        const bool branch_taken_0x252f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F50u;
        // 0x252f54: 0xaf82a224  sw          $v0, -0x5DDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f50) {
            ctx->pc = 0x252F7Cu;
            goto label_252f7c;
        }
    }
    ctx->pc = 0x252F58u;
label_252f58:
    // 0x252f58: 0x24a3ff9c  addiu       $v1, $a1, -0x64
    ctx->pc = 0x252f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967196));
    // 0x252f5c: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x252f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x252f60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252F60u;
    {
        const bool branch_taken_0x252f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F60u;
        // 0x252f64: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f60) {
            ctx->pc = 0x252F7Cu;
            goto label_252f7c;
        }
    }
    ctx->pc = 0x252F68u;
    // 0x252f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252f6c: 0x244282c8  addiu       $v0, $v0, -0x7D38
    ctx->pc = 0x252f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935240));
    // 0x252f70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252f74: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x252f74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x252f78: 0xa384a1f8  sb          $a0, -0x5E08($gp)
    ctx->pc = 0x252f78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943224), (uint8_t)GPR_U32(ctx, 4));
label_252f7c:
    // 0x252f7c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x252f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_252f80:
    // 0x252f80: 0xc0947c4  jal         func_251F10
    ctx->pc = 0x252F80u;
    SET_GPR_U32(ctx, 31, 0x252F88u);
    ctx->pc = 0x252F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F80u;
    // 0x252f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251F10u, 0x252F80u, 0x252F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F88u;
label_252f88:
    // 0x252f88: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x252f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x252f8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252f90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x252f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252f98: 0x3e00008  jr          $ra
    ctx->pc = 0x252F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F98u;
        // 0x252f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252FA0u;
}
