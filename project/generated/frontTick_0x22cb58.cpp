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

// Function: frontTick
// Address: 0x22cb58 - 0x22cd30
void frontTick_0x22cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontTick_0x22cb58");
#endif

    switch (ctx->pc) {
        case 0x22cb58u: goto label_22cb58;
        case 0x22cb5cu: goto label_22cb5c;
        case 0x22cb60u: goto label_22cb60;
        case 0x22cb64u: goto label_22cb64;
        case 0x22cb68u: goto label_22cb68;
        case 0x22cb6cu: goto label_22cb6c;
        case 0x22cb70u: goto label_22cb70;
        case 0x22cb74u: goto label_22cb74;
        case 0x22cb78u: goto label_22cb78;
        case 0x22cb7cu: goto label_22cb7c;
        case 0x22cb80u: goto label_22cb80;
        case 0x22cb84u: goto label_22cb84;
        case 0x22cb88u: goto label_22cb88;
        case 0x22cb8cu: goto label_22cb8c;
        case 0x22cb90u: goto label_22cb90;
        case 0x22cb94u: goto label_22cb94;
        case 0x22cb98u: goto label_22cb98;
        case 0x22cb9cu: goto label_22cb9c;
        case 0x22cba0u: goto label_22cba0;
        case 0x22cba4u: goto label_22cba4;
        case 0x22cba8u: goto label_22cba8;
        case 0x22cbacu: goto label_22cbac;
        case 0x22cbb0u: goto label_22cbb0;
        case 0x22cbb4u: goto label_22cbb4;
        case 0x22cbb8u: goto label_22cbb8;
        case 0x22cbbcu: goto label_22cbbc;
        case 0x22cbc0u: goto label_22cbc0;
        case 0x22cbc4u: goto label_22cbc4;
        case 0x22cbc8u: goto label_22cbc8;
        case 0x22cbccu: goto label_22cbcc;
        case 0x22cbd0u: goto label_22cbd0;
        case 0x22cbd4u: goto label_22cbd4;
        case 0x22cbd8u: goto label_22cbd8;
        case 0x22cbdcu: goto label_22cbdc;
        case 0x22cbe0u: goto label_22cbe0;
        case 0x22cbe4u: goto label_22cbe4;
        case 0x22cbe8u: goto label_22cbe8;
        case 0x22cbecu: goto label_22cbec;
        case 0x22cbf0u: goto label_22cbf0;
        case 0x22cbf4u: goto label_22cbf4;
        case 0x22cbf8u: goto label_22cbf8;
        case 0x22cbfcu: goto label_22cbfc;
        case 0x22cc00u: goto label_22cc00;
        case 0x22cc04u: goto label_22cc04;
        case 0x22cc08u: goto label_22cc08;
        case 0x22cc0cu: goto label_22cc0c;
        case 0x22cc10u: goto label_22cc10;
        case 0x22cc14u: goto label_22cc14;
        case 0x22cc18u: goto label_22cc18;
        case 0x22cc1cu: goto label_22cc1c;
        case 0x22cc20u: goto label_22cc20;
        case 0x22cc24u: goto label_22cc24;
        case 0x22cc28u: goto label_22cc28;
        case 0x22cc2cu: goto label_22cc2c;
        case 0x22cc30u: goto label_22cc30;
        case 0x22cc34u: goto label_22cc34;
        case 0x22cc38u: goto label_22cc38;
        case 0x22cc3cu: goto label_22cc3c;
        case 0x22cc40u: goto label_22cc40;
        case 0x22cc44u: goto label_22cc44;
        case 0x22cc48u: goto label_22cc48;
        case 0x22cc4cu: goto label_22cc4c;
        case 0x22cc50u: goto label_22cc50;
        case 0x22cc54u: goto label_22cc54;
        case 0x22cc58u: goto label_22cc58;
        case 0x22cc5cu: goto label_22cc5c;
        case 0x22cc60u: goto label_22cc60;
        case 0x22cc64u: goto label_22cc64;
        case 0x22cc68u: goto label_22cc68;
        case 0x22cc6cu: goto label_22cc6c;
        case 0x22cc70u: goto label_22cc70;
        case 0x22cc74u: goto label_22cc74;
        case 0x22cc78u: goto label_22cc78;
        case 0x22cc7cu: goto label_22cc7c;
        case 0x22cc80u: goto label_22cc80;
        case 0x22cc84u: goto label_22cc84;
        case 0x22cc88u: goto label_22cc88;
        case 0x22cc8cu: goto label_22cc8c;
        case 0x22cc90u: goto label_22cc90;
        case 0x22cc94u: goto label_22cc94;
        case 0x22cc98u: goto label_22cc98;
        case 0x22cc9cu: goto label_22cc9c;
        case 0x22cca0u: goto label_22cca0;
        case 0x22cca4u: goto label_22cca4;
        case 0x22cca8u: goto label_22cca8;
        case 0x22ccacu: goto label_22ccac;
        case 0x22ccb0u: goto label_22ccb0;
        case 0x22ccb4u: goto label_22ccb4;
        case 0x22ccb8u: goto label_22ccb8;
        case 0x22ccbcu: goto label_22ccbc;
        case 0x22ccc0u: goto label_22ccc0;
        case 0x22ccc4u: goto label_22ccc4;
        case 0x22ccc8u: goto label_22ccc8;
        case 0x22ccccu: goto label_22cccc;
        case 0x22ccd0u: goto label_22ccd0;
        case 0x22ccd4u: goto label_22ccd4;
        case 0x22ccd8u: goto label_22ccd8;
        case 0x22ccdcu: goto label_22ccdc;
        case 0x22cce0u: goto label_22cce0;
        case 0x22cce4u: goto label_22cce4;
        case 0x22cce8u: goto label_22cce8;
        case 0x22ccecu: goto label_22ccec;
        case 0x22ccf0u: goto label_22ccf0;
        case 0x22ccf4u: goto label_22ccf4;
        case 0x22ccf8u: goto label_22ccf8;
        case 0x22ccfcu: goto label_22ccfc;
        case 0x22cd00u: goto label_22cd00;
        case 0x22cd04u: goto label_22cd04;
        case 0x22cd08u: goto label_22cd08;
        case 0x22cd0cu: goto label_22cd0c;
        case 0x22cd10u: goto label_22cd10;
        case 0x22cd14u: goto label_22cd14;
        case 0x22cd18u: goto label_22cd18;
        case 0x22cd1cu: goto label_22cd1c;
        case 0x22cd20u: goto label_22cd20;
        case 0x22cd24u: goto label_22cd24;
        case 0x22cd28u: goto label_22cd28;
        case 0x22cd2cu: goto label_22cd2c;
        default: break;
    }

    ctx->pc = 0x22cb58u;

label_22cb58:
    // 0x22cb58: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x22cb58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_22cb5c:
    // 0x22cb5c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_22cb60:
    // 0x22cb60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22cb64:
    // 0x22cb64: 0x24422da0  addiu       $v0, $v0, 0x2DA0
    ctx->pc = 0x22cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
label_22cb68:
    // 0x22cb68: 0x3c03ba2e  lui         $v1, 0xBA2E
    ctx->pc = 0x22cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47662 << 16));
label_22cb6c:
    // 0x22cb6c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22cb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_22cb70:
    // 0x22cb70: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22cb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_22cb74:
    // 0x22cb74: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x22cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_22cb78:
    // 0x22cb78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22cb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_22cb7c:
    // 0x22cb7c: 0x34638ba3  ori         $v1, $v1, 0x8BA3
    ctx->pc = 0x22cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35747);
label_22cb80:
    // 0x22cb80: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x22cb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_22cb84:
    // 0x22cb84: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x22cb84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22cb88:
    // 0x22cb88: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22cb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_22cb8c:
    // 0x22cb8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22cb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22cb90:
    // 0x22cb90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22cb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22cb94:
    // 0x22cb94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22cb98:
    // 0x22cb98: 0x29883  sra         $s3, $v0, 2
    ctx->pc = 0x22cb98u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 2));
label_22cb9c:
    // 0x22cb9c: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x22cb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_22cba0:
    // 0x22cba0: 0x8d050018  lw          $a1, 0x18($t0)
    ctx->pc = 0x22cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_22cba4:
    // 0x22cba4: 0x38940001  xori        $s4, $a0, 0x1
    ctx->pc = 0x22cba4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_22cba8:
    // 0x22cba8: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_22cbac:
    if (ctx->pc == 0x22CBACu) {
        ctx->pc = 0x22CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBA8u;
        // 0x22cbac: 0x32940001  andi        $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBB0u;
        goto label_22cbb0;
    }
    ctx->pc = 0x22CBA8u;
    {
        const bool branch_taken_0x22cba8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBA8u;
        // 0x22cbac: 0x32940001  andi        $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cba8) {
            ctx->pc = 0x22CBF8u;
            goto label_22cbf8;
        }
    }
    ctx->pc = 0x22CBB0u;
label_22cbb0:
    // 0x22cbb0: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x22cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_22cbb4:
    // 0x22cbb4: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x22cbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_22cbb8:
    // 0x22cbb8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_22cbbc:
    // 0x22cbbc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22cbc0:
    // 0x22cbc0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x22cbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_22cbc4:
    // 0x22cbc4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x22cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_22cbc8:
    // 0x22cbc8: 0x8d09001c  lw          $t1, 0x1C($t0)
    ctx->pc = 0x22cbc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_22cbcc:
    // 0x22cbcc: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x22cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_22cbd0:
    // 0x22cbd0: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x22cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_22cbd4:
    // 0x22cbd4: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x22cbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_22cbd8:
    // 0x22cbd8: 0x94850008  lhu         $a1, 0x8($a0)
    ctx->pc = 0x22cbd8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_22cbdc:
    // 0x22cbdc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x22cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_22cbe0:
    // 0x22cbe0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x22cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_22cbe4:
    // 0x22cbe4: 0x15260003  bne         $t1, $a2, . + 4 + (0x3 << 2)
label_22cbe8:
    if (ctx->pc == 0x22CBE8u) {
        ctx->pc = 0x22CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBE4u;
        // 0x22cbe8: 0xa4650004  sh          $a1, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBECu;
        goto label_22cbec;
    }
    ctx->pc = 0x22CBE4u;
    {
        const bool branch_taken_0x22cbe4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        ctx->pc = 0x22CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBE4u;
        // 0x22cbe8: 0xa4650004  sh          $a1, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbe4) {
            ctx->pc = 0x22CBF4u;
            goto label_22cbf4;
        }
    }
    ctx->pc = 0x22CBECu;
label_22cbec:
    // 0x22cbec: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x22cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_22cbf0:
    // 0x22cbf0: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x22cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_22cbf4:
    // 0x22cbf4: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x22cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
label_22cbf8:
    // 0x22cbf8: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
label_22cbfc:
    if (ctx->pc == 0x22CBFCu) {
        ctx->pc = 0x22CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBF8u;
        // 0x22cbfc: 0x8d020014  lw          $v0, 0x14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC00u;
        goto label_22cc00;
    }
    ctx->pc = 0x22CBF8u;
    {
        const bool branch_taken_0x22cbf8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cbf8) {
            ctx->pc = 0x22CBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CBF8u;
            // 0x22cbfc: 0x8d020014  lw          $v0, 0x14($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CC10u;
            goto label_22cc10;
        }
    }
    ctx->pc = 0x22CC00u;
label_22cc00:
    // 0x22cc00: 0xc08b21a  jal         func_22C868
label_22cc04:
    if (ctx->pc == 0x22CC04u) {
        ctx->pc = 0x22CC08u;
        goto label_22cc08;
    }
    ctx->pc = 0x22CC00u;
    SET_GPR_U32(ctx, 31, 0x22CC08u);
    ctx->pc = 0x22C868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C868u, 0x22CC00u, 0x22CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC08u;
label_22cc08:
    // 0x22cc08: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x22cc08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_22cc0c:
    // 0x22cc0c: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x22cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_22cc10:
    // 0x22cc10: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_22cc14:
    if (ctx->pc == 0x22CC14u) {
        ctx->pc = 0x22CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC10u;
        // 0x22cc14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC18u;
        goto label_22cc18;
    }
    ctx->pc = 0x22CC10u;
    {
        const bool branch_taken_0x22cc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC10u;
        // 0x22cc14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc10) {
            ctx->pc = 0x22CD08u;
            goto label_22cd08;
        }
    }
    ctx->pc = 0x22CC18u;
label_22cc18:
    // 0x22cc18: 0xc08b12c  jal         func_22C4B0
label_22cc1c:
    if (ctx->pc == 0x22CC1Cu) {
        ctx->pc = 0x22CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC18u;
        // 0x22cc1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC20u;
        goto label_22cc20;
    }
    ctx->pc = 0x22CC18u;
    SET_GPR_U32(ctx, 31, 0x22CC20u);
    ctx->pc = 0x22CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC18u;
    // 0x22cc1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C4B0u, 0x22CC18u, 0x22CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC20u;
label_22cc20:
    // 0x22cc20: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x22cc20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_22cc24:
    // 0x22cc24: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x22cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_22cc28:
    // 0x22cc28: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x22cc28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22cc2c:
    // 0x22cc2c: 0x622001e  bltzl       $s1, . + 4 + (0x1E << 2)
label_22cc30:
    if (ctx->pc == 0x22CC30u) {
        ctx->pc = 0x22CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC2Cu;
        // 0x22cc30: 0x8d040014  lw          $a0, 0x14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC34u;
        goto label_22cc34;
    }
    ctx->pc = 0x22CC2Cu;
    {
        const bool branch_taken_0x22cc2c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x22cc2c) {
            ctx->pc = 0x22CC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CC2Cu;
            // 0x22cc30: 0x8d040014  lw          $a0, 0x14($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CCA8u;
            goto label_22cca8;
        }
    }
    ctx->pc = 0x22CC34u;
label_22cc34:
    // 0x22cc34: 0x24160018  addiu       $s6, $zero, 0x18
    ctx->pc = 0x22cc34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_22cc38:
    // 0x22cc38: 0x2415ffc3  addiu       $s5, $zero, -0x3D
    ctx->pc = 0x22cc38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
label_22cc3c:
    // 0x22cc3c: 0x0  nop
    ctx->pc = 0x22cc3cu;
    // NOP
label_22cc40:
    // 0x22cc40: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x22cc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_22cc44:
    // 0x22cc44: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x22cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_22cc48:
    // 0x22cc48: 0x2563018  mult        $a2, $s2, $s6
    ctx->pc = 0x22cc48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_22cc4c:
    // 0x22cc4c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x22cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_22cc50:
    // 0x22cc50: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x22cc50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_22cc54:
    // 0x22cc54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22cc58:
    // 0x22cc58: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x22cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_22cc5c:
    // 0x22cc5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22cc60:
    // 0x22cc60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22cc64:
    // 0x22cc64: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_22cc68:
    if (ctx->pc == 0x22CC68u) {
        ctx->pc = 0x22CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC64u;
        // 0x22cc68: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC6Cu;
        goto label_22cc6c;
    }
    ctx->pc = 0x22CC64u;
    {
        const bool branch_taken_0x22cc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC64u;
        // 0x22cc68: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc64) {
            ctx->pc = 0x22CC8Cu;
            goto label_22cc8c;
        }
    }
    ctx->pc = 0x22CC6Cu;
label_22cc6c:
    // 0x22cc6c: 0x60f809  jalr        $v1
label_22cc70:
    if (ctx->pc == 0x22CC70u) {
        ctx->pc = 0x22CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC6Cu;
        // 0x22cc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC74u;
        goto label_22cc74;
    }
    ctx->pc = 0x22CC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22CC74u);
        ctx->pc = 0x22CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC6Cu;
        // 0x22cc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CC6Cu, 0x22CC74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CC74u;
label_22cc74:
    // 0x22cc74: 0xc080ea2  jal         func_203A88
label_22cc78:
    if (ctx->pc == 0x22CC78u) {
        ctx->pc = 0x22CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC74u;
        // 0x22cc78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC7Cu;
        goto label_22cc7c;
    }
    ctx->pc = 0x22CC74u;
    SET_GPR_U32(ctx, 31, 0x22CC7Cu);
    ctx->pc = 0x22CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC74u;
    // 0x22cc78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x22CC74u, 0x22CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC7Cu;
label_22cc7c:
    // 0x22cc7c: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x22cc7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_22cc80:
    // 0x22cc80: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x22cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_22cc84:
    // 0x22cc84: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x22cc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_22cc88:
    // 0x22cc88: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x22cc88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_22cc8c:
    // 0x22cc8c: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x22cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_22cc90:
    // 0x22cc90: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_22cc94:
    if (ctx->pc == 0x22CC94u) {
        ctx->pc = 0x22CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC90u;
        // 0x22cc94: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC98u;
        goto label_22cc98;
    }
    ctx->pc = 0x22CC90u;
    {
        const bool branch_taken_0x22cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC90u;
        // 0x22cc94: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc90) {
            ctx->pc = 0x22CD08u;
            goto label_22cd08;
        }
    }
    ctx->pc = 0x22CC98u;
label_22cc98:
    // 0x22cc98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x22cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22cc9c:
    // 0x22cc9c: 0x621ffe8  bgez        $s1, . + 4 + (-0x18 << 2)
label_22cca0:
    if (ctx->pc == 0x22CCA0u) {
        ctx->pc = 0x22CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC9Cu;
        // 0x22cca0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCA4u;
        goto label_22cca4;
    }
    ctx->pc = 0x22CC9Cu;
    {
        const bool branch_taken_0x22cc9c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x22CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC9Cu;
        // 0x22cca0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc9c) {
            ctx->pc = 0x22CC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cc40;
        }
    }
    ctx->pc = 0x22CCA4u;
label_22cca4:
    // 0x22cca4: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x22cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_22cca8:
    // 0x22cca8: 0x18800018  blez        $a0, . + 4 + (0x18 << 2)
label_22ccac:
    if (ctx->pc == 0x22CCACu) {
        ctx->pc = 0x22CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCA8u;
        // 0x22ccac: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCB0u;
        goto label_22ccb0;
    }
    ctx->pc = 0x22CCA8u;
    {
        const bool branch_taken_0x22cca8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x22CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCA8u;
        // 0x22ccac: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cca8) {
            ctx->pc = 0x22CD0Cu;
            goto label_22cd0c;
        }
    }
    ctx->pc = 0x22CCB0u;
label_22ccb0:
    // 0x22ccb0: 0x56800017  bnel        $s4, $zero, . + 4 + (0x17 << 2)
label_22ccb4:
    if (ctx->pc == 0x22CCB4u) {
        ctx->pc = 0x22CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCB0u;
        // 0x22ccb4: 0xdfb60060  ld          $s6, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCB8u;
        goto label_22ccb8;
    }
    ctx->pc = 0x22CCB0u;
    {
        const bool branch_taken_0x22ccb0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ccb0) {
            ctx->pc = 0x22CCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CCB0u;
            // 0x22ccb4: 0xdfb60060  ld          $s6, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CD10u;
            goto label_22cd10;
        }
    }
    ctx->pc = 0x22CCB8u;
label_22ccb8:
    // 0x22ccb8: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x22ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_22ccbc:
    // 0x22ccbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22ccc0:
    // 0x22ccc0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_22ccc4:
    if (ctx->pc == 0x22CCC4u) {
        ctx->pc = 0x22CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCC0u;
        // 0x22ccc4: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCC8u;
        goto label_22ccc8;
    }
    ctx->pc = 0x22CCC0u;
    {
        const bool branch_taken_0x22ccc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCC0u;
        // 0x22ccc4: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccc0) {
            ctx->pc = 0x22CD0Cu;
            goto label_22cd0c;
        }
    }
    ctx->pc = 0x22CCC8u;
label_22ccc8:
    // 0x22ccc8: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x22ccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_22cccc:
    // 0x22cccc: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x22ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22ccd0:
    // 0x22ccd0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x22ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_22ccd4:
    // 0x22ccd4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_22ccd8:
    if (ctx->pc == 0x22CCD8u) {
        ctx->pc = 0x22CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCD4u;
        // 0x22ccd8: 0xdfb60060  ld          $s6, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCDCu;
        goto label_22ccdc;
    }
    ctx->pc = 0x22CCD4u;
    {
        const bool branch_taken_0x22ccd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCD4u;
        // 0x22ccd8: 0xdfb60060  ld          $s6, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccd4) {
            ctx->pc = 0x22CD10u;
            goto label_22cd10;
        }
    }
    ctx->pc = 0x22CCDCu;
label_22ccdc:
    // 0x22ccdc: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x22ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_22cce0:
    // 0x22cce0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22cce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22cce4:
    // 0x22cce4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x22cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_22cce8:
    // 0x22cce8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22cce8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22ccec:
    // 0x22ccec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22ccecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22ccf0:
    // 0x22ccf0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22ccf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22ccf4:
    // 0x22ccf4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22ccf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22ccf8:
    // 0x22ccf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22ccf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22ccfc:
    // 0x22ccfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ccfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22cd00:
    // 0x22cd00: 0x808b27a  j           func_22C9E8
label_22cd04:
    if (ctx->pc == 0x22CD04u) {
        ctx->pc = 0x22CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD00u;
        // 0x22cd04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD08u;
        goto label_22cd08;
    }
    ctx->pc = 0x22CD00u;
    ctx->pc = 0x22CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD00u;
    // 0x22cd04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C9E8u;
    frontFocusTick_0x22c9e8(rdram, ctx, runtime); return;
    ctx->pc = 0x22CD08u;
label_22cd08:
    // 0x22cd08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22cd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22cd0c:
    // 0x22cd0c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22cd0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22cd10:
    // 0x22cd10: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22cd10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22cd14:
    // 0x22cd14: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22cd14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22cd18:
    // 0x22cd18: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22cd18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22cd1c:
    // 0x22cd1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22cd1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22cd20:
    // 0x22cd20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22cd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22cd24:
    // 0x22cd24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22cd24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22cd28:
    // 0x22cd28: 0x3e00008  jr          $ra
label_22cd2c:
    if (ctx->pc == 0x22CD2Cu) {
        ctx->pc = 0x22CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD28u;
        // 0x22cd2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD30u;
        goto label_fallthrough_0x22cd28;
    }
    ctx->pc = 0x22CD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD28u;
        // 0x22cd2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22cd28:
    ctx->pc = 0x22CD30u;
}
