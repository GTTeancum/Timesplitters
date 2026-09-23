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

// Function: partGfx
// Address: 0x260ae0 - 0x262a60
void partGfx_0x260ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("partGfx_0x260ae0");
#endif

    switch (ctx->pc) {
        case 0x260dbcu: goto label_260dbc;
        case 0x260e04u: goto label_260e04;
        case 0x260e40u: goto label_260e40;
        case 0x260ea4u: goto label_260ea4;
        case 0x260ec8u: goto label_260ec8;
        case 0x260f04u: goto label_260f04;
        case 0x260f3cu: goto label_260f3c;
        case 0x260f50u: goto label_260f50;
        case 0x260f78u: goto label_260f78;
        case 0x260f94u: goto label_260f94;
        case 0x260fd0u: goto label_260fd0;
        case 0x260fe4u: goto label_260fe4;
        case 0x260ff8u: goto label_260ff8;
        case 0x26102cu: goto label_26102c;
        case 0x261040u: goto label_261040;
        case 0x261200u: goto label_261200;
        case 0x261650u: goto label_261650;
        case 0x261ca8u: goto label_261ca8;
        case 0x261fb4u: goto label_261fb4;
        case 0x261ff0u: goto label_261ff0;
        case 0x262024u: goto label_262024;
        case 0x26209cu: goto label_26209c;
        case 0x2620e4u: goto label_2620e4;
        case 0x262120u: goto label_262120;
        case 0x262158u: goto label_262158;
        case 0x262184u: goto label_262184;
        case 0x2621c4u: goto label_2621c4;
        case 0x2621d8u: goto label_2621d8;
        case 0x2621ecu: goto label_2621ec;
        case 0x262224u: goto label_262224;
        case 0x262248u: goto label_262248;
        case 0x262268u: goto label_262268;
        case 0x262298u: goto label_262298;
        case 0x2622c4u: goto label_2622c4;
        case 0x262328u: goto label_262328;
        case 0x262388u: goto label_262388;
        case 0x262414u: goto label_262414;
        case 0x262440u: goto label_262440;
        case 0x262498u: goto label_262498;
        case 0x2624acu: goto label_2624ac;
        case 0x2625e8u: goto label_2625e8;
        case 0x262684u: goto label_262684;
        case 0x262740u: goto label_262740;
        case 0x2627c8u: goto label_2627c8;
        case 0x2627ecu: goto label_2627ec;
        case 0x262858u: goto label_262858;
        case 0x2628acu: goto label_2628ac;
        case 0x262900u: goto label_262900;
        case 0x262934u: goto label_262934;
        case 0x262994u: goto label_262994;
        case 0x2629c0u: goto label_2629c0;
        case 0x262a10u: goto label_262a10;
        case 0x262a28u: goto label_262a28;
        default: break;
    }

    ctx->pc = 0x260ae0u;

label_260ae0:
    // 0x260ae0: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x260ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x260ae4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x260ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x260ae8: 0xafa402b8  sw          $a0, 0x2B8($sp)
    ctx->pc = 0x260ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 4));
    // 0x260aec: 0xffbf0390  sd          $ra, 0x390($sp)
    ctx->pc = 0x260aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 31));
    // 0x260af0: 0xffbe0380  sd          $fp, 0x380($sp)
    ctx->pc = 0x260af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 30));
    // 0x260af4: 0xffb70370  sd          $s7, 0x370($sp)
    ctx->pc = 0x260af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 23));
    // 0x260af8: 0xffb60360  sd          $s6, 0x360($sp)
    ctx->pc = 0x260af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 22));
    // 0x260afc: 0xffb50350  sd          $s5, 0x350($sp)
    ctx->pc = 0x260afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 21));
    // 0x260b00: 0xffb40340  sd          $s4, 0x340($sp)
    ctx->pc = 0x260b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 20));
    // 0x260b04: 0xffb30330  sd          $s3, 0x330($sp)
    ctx->pc = 0x260b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 19));
    // 0x260b08: 0xffb20320  sd          $s2, 0x320($sp)
    ctx->pc = 0x260b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 18));
    // 0x260b0c: 0xffb10310  sd          $s1, 0x310($sp)
    ctx->pc = 0x260b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 17));
    // 0x260b10: 0xffb00300  sd          $s0, 0x300($sp)
    ctx->pc = 0x260b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 16));
    // 0x260b14: 0xe7b503a8  swc1        $f21, 0x3A8($sp)
    ctx->pc = 0x260b14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
    // 0x260b18: 0xe7b403a0  swc1        $f20, 0x3A0($sp)
    ctx->pc = 0x260b18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
    // 0x260b1c: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x260b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260b20: 0xafa502bc  sw          $a1, 0x2BC($sp)
    ctx->pc = 0x260b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 5));
    // 0x260b24: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x260b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x260b28: 0x8c9500f4  lw          $s5, 0xF4($a0)
    ctx->pc = 0x260b28u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x260b2c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x260b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x260b30: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x260b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x260b34: 0xafa602c0  sw          $a2, 0x2C0($sp)
    ctx->pc = 0x260b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 6));
    // 0x260b38: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x260b38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260b3c: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x260b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x260b40: 0x1027023  subu        $t6, $t0, $v0
    ctx->pc = 0x260b40u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x260b44: 0x1c42021  addu        $a0, $t6, $a0
    ctx->pc = 0x260b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x260b48: 0xafa502c8  sw          $a1, 0x2C8($sp)
    ctx->pc = 0x260b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 5));
    // 0x260b4c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x260B4Cu;
    {
        const bool branch_taken_0x260b4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x260B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B4Cu;
        // 0x260b50: 0xafa402c4  sw          $a0, 0x2C4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b4c) {
            ctx->pc = 0x260B5Cu;
            goto label_260b5c;
        }
    }
    ctx->pc = 0x260B54u;
    // 0x260b54: 0x8d0c000c  lw          $t4, 0xC($t0)
    ctx->pc = 0x260b54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x260b58: 0xafac02c8  sw          $t4, 0x2C8($sp)
    ctx->pc = 0x260b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 12));
label_260b5c:
    // 0x260b5c: 0x8fa202b8  lw          $v0, 0x2B8($sp)
    ctx->pc = 0x260b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x260b60: 0x8c4400f8  lw          $a0, 0xF8($v0)
    ctx->pc = 0x260b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x260b64: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x260B64u;
    {
        const bool branch_taken_0x260b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B64u;
        // 0x260b68: 0x8fa502c0  lw          $a1, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b64) {
            ctx->pc = 0x260B8Cu;
            goto label_260b8c;
        }
    }
    ctx->pc = 0x260B6Cu;
    // 0x260b6c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x260b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x260b70: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x260b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x260b74: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x260b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x260b78: 0x8fa502bc  lw          $a1, 0x2BC($sp)
    ctx->pc = 0x260b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x260b7c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x260b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x260b80: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x260b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x260b84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260B84u;
    {
        const bool branch_taken_0x260b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B84u;
        // 0x260b88: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b84) {
            ctx->pc = 0x260B90u;
            goto label_260b90;
        }
    }
    ctx->pc = 0x260B8Cu;
label_260b8c:
    // 0x260b8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x260b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260b90:
    // 0x260b90: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x260b90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260b94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x260b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260b98: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x260B98u;
    {
        const bool branch_taken_0x260b98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B98u;
        // 0x260b9c: 0xafa002d4  sw          $zero, 0x2D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b98) {
            ctx->pc = 0x260BECu;
            goto label_260bec;
        }
    }
    ctx->pc = 0x260BA0u;
    // 0x260ba0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x260ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x260ba4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x260BA4u;
    {
        const bool branch_taken_0x260ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BA4u;
        // 0x260ba8: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ba4) {
            ctx->pc = 0x260BE8u;
            goto label_260be8;
        }
    }
    ctx->pc = 0x260BACu;
    // 0x260bac: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x260bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x260bb0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x260BB0u;
    {
        const bool branch_taken_0x260bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260bb0) {
            ctx->pc = 0x260BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260BB0u;
            // 0x260bb4: 0xafac02d4  sw          $t4, 0x2D4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260BECu;
            goto label_260bec;
        }
    }
    ctx->pc = 0x260BB8u;
    // 0x260bb8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x260bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x260bbc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x260BBCu;
    {
        const bool branch_taken_0x260bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260bbc) {
            ctx->pc = 0x260BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260BBCu;
            // 0x260bc0: 0xafac02d4  sw          $t4, 0x2D4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260BECu;
            goto label_260bec;
        }
    }
    ctx->pc = 0x260BC4u;
    // 0x260bc4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x260bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x260bc8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x260BC8u;
    {
        const bool branch_taken_0x260bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260bc8) {
            ctx->pc = 0x260BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260BC8u;
            // 0x260bcc: 0xafac02d4  sw          $t4, 0x2D4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260BECu;
            goto label_260bec;
        }
    }
    ctx->pc = 0x260BD0u;
    // 0x260bd0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x260bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x260bd4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x260BD4u;
    {
        const bool branch_taken_0x260bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260bd4) {
            ctx->pc = 0x260BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260BD4u;
            // 0x260bd8: 0xafac02d4  sw          $t4, 0x2D4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260BECu;
            goto label_260bec;
        }
    }
    ctx->pc = 0x260BDCu;
    // 0x260bdc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x260bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x260be0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x260BE0u;
    {
        const bool branch_taken_0x260be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BE0u;
        // 0x260be4: 0x8fa202c0  lw          $v0, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260be0) {
            ctx->pc = 0x260BF0u;
            goto label_260bf0;
        }
    }
    ctx->pc = 0x260BE8u;
label_260be8:
    // 0x260be8: 0xafac02d4  sw          $t4, 0x2D4($sp)
    ctx->pc = 0x260be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 12));
label_260bec:
    // 0x260bec: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x260becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_260bf0:
    // 0x260bf0: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x260bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x260bf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x260bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x260bf8: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x260bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x260bfc: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x260bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x260c00: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x260c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x260c04: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x260c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260c08: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x260c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x260c0c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x260c0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260c10: 0x8fa402bc  lw          $a0, 0x2BC($sp)
    ctx->pc = 0x260c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x260c14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x260c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x260c18: 0xafa402dc  sw          $a0, 0x2DC($sp)
    ctx->pc = 0x260c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 4));
    // 0x260c1c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x260c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x260c20: 0x8fac02dc  lw          $t4, 0x2DC($sp)
    ctx->pc = 0x260c20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x260c24: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x260c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x260c28: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x260c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x260c2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260c30: 0xafa202cc  sw          $v0, 0x2CC($sp)
    ctx->pc = 0x260c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 2));
    // 0x260c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260c38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x260c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260c3c: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x260C3Cu;
    {
        const bool branch_taken_0x260c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x260C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C3Cu;
        // 0x260c40: 0xafa302d0  sw          $v1, 0x2D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c3c) {
            ctx->pc = 0x260C84u;
            goto label_260c84;
        }
    }
    ctx->pc = 0x260C44u;
    // 0x260c44: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x260c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x260c48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260C48u;
    {
        const bool branch_taken_0x260c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C48u;
        // 0x260c4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c48) {
            ctx->pc = 0x260C60u;
            goto label_260c60;
        }
    }
    ctx->pc = 0x260C50u;
    // 0x260c50: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x260C50u;
    {
        const bool branch_taken_0x260c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C50u;
        // 0x260c54: 0x8fa202c4  lw          $v0, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c50) {
            ctx->pc = 0x260C78u;
            goto label_260c78;
        }
    }
    ctx->pc = 0x260C58u;
    // 0x260c58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x260C58u;
    {
        const bool branch_taken_0x260c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C58u;
        // 0x260c5c: 0x94430044  lhu         $v1, 0x44($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c58) {
            ctx->pc = 0x260CACu;
            goto label_260cac;
        }
    }
    ctx->pc = 0x260C60u;
label_260c60:
    // 0x260c60: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x260C60u;
    {
        const bool branch_taken_0x260c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x260C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C60u;
        // 0x260c64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c60) {
            ctx->pc = 0x260C90u;
            goto label_260c90;
        }
    }
    ctx->pc = 0x260C68u;
    // 0x260c68: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x260C68u;
    {
        const bool branch_taken_0x260c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x260C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C68u;
        // 0x260c6c: 0x8fa202c4  lw          $v0, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c68) {
            ctx->pc = 0x260C9Cu;
            goto label_260c9c;
        }
    }
    ctx->pc = 0x260C70u;
    // 0x260c70: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x260C70u;
    {
        const bool branch_taken_0x260c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C70u;
        // 0x260c74: 0x94430044  lhu         $v1, 0x44($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c70) {
            ctx->pc = 0x260CACu;
            goto label_260cac;
        }
    }
    ctx->pc = 0x260C78u;
label_260c78:
    // 0x260c78: 0x8fa202b8  lw          $v0, 0x2B8($sp)
    ctx->pc = 0x260c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x260c7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x260C7Cu;
    {
        const bool branch_taken_0x260c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C7Cu;
        // 0x260c80: 0x8c4b0008  lw          $t3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c7c) {
            ctx->pc = 0x260CA4u;
            goto label_260ca4;
        }
    }
    ctx->pc = 0x260C84u;
label_260c84:
    // 0x260c84: 0x8fa302b8  lw          $v1, 0x2B8($sp)
    ctx->pc = 0x260c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x260c88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x260C88u;
    {
        const bool branch_taken_0x260c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C88u;
        // 0x260c8c: 0x8c6b000c  lw          $t3, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c88) {
            ctx->pc = 0x260CA4u;
            goto label_260ca4;
        }
    }
    ctx->pc = 0x260C90u;
label_260c90:
    // 0x260c90: 0x8fa402b8  lw          $a0, 0x2B8($sp)
    ctx->pc = 0x260c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x260c94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x260C94u;
    {
        const bool branch_taken_0x260c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C94u;
        // 0x260c98: 0x8c8b0010  lw          $t3, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c94) {
            ctx->pc = 0x260CA4u;
            goto label_260ca4;
        }
    }
    ctx->pc = 0x260C9Cu;
label_260c9c:
    // 0x260c9c: 0x8fac02b8  lw          $t4, 0x2B8($sp)
    ctx->pc = 0x260c9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x260ca0: 0x8d8b0014  lw          $t3, 0x14($t4)
    ctx->pc = 0x260ca0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
label_260ca4:
    // 0x260ca4: 0x8fa202c4  lw          $v0, 0x2C4($sp)
    ctx->pc = 0x260ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x260ca8: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x260ca8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
label_260cac:
    // 0x260cac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260CACu;
    {
        const bool branch_taken_0x260cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CACu;
        // 0x260cb0: 0x8fa402b8  lw          $a0, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260cac) {
            ctx->pc = 0x260CC0u;
            goto label_260cc0;
        }
    }
    ctx->pc = 0x260CB4u;
    // 0x260cb4: 0x94820124  lhu         $v0, 0x124($a0)
    ctx->pc = 0x260cb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x260cb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x260cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x260cbc: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x260cbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_260cc0:
    // 0x260cc0: 0x10c0074a  beqz        $a2, . + 4 + (0x74A << 2)
    ctx->pc = 0x260CC0u;
    {
        const bool branch_taken_0x260cc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x260CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CC0u;
        // 0x260cc4: 0x8fac02c0  lw          $t4, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260cc0) {
            ctx->pc = 0x2629ECu;
            goto label_2629ec;
        }
    }
    ctx->pc = 0x260CC8u;
    // 0x260cc8: 0x5580001d  bnel        $t4, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x260CC8u;
    {
        const bool branch_taken_0x260cc8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x260cc8) {
            ctx->pc = 0x260CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260CC8u;
            // 0x260ccc: 0x8fac02c4  lw          $t4, 0x2C4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260D40u;
            goto label_260d40;
        }
    }
    ctx->pc = 0x260CD0u;
    // 0x260cd0: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x260cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x260cd4: 0x8f829320  lw          $v0, -0x6CE0($gp)
    ctx->pc = 0x260cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939424)));
    // 0x260cd8: 0x94660046  lhu         $a2, 0x46($v1)
    ctx->pc = 0x260cd8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x260cdc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x260cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x260ce0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x260ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x260ce4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x260CE4u;
    {
        const bool branch_taken_0x260ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x260CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CE4u;
        // 0x260ce8: 0xaf829320  sw          $v0, -0x6CE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ce4) {
            ctx->pc = 0x260D24u;
            goto label_260d24;
        }
    }
    ctx->pc = 0x260CECu;
    // 0x260cec: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x260cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x260cf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x260cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260cf4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x260CF4u;
    {
        const bool branch_taken_0x260cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x260CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CF4u;
        // 0x260cf8: 0x8fa402c0  lw          $a0, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260cf4) {
            ctx->pc = 0x260D28u;
            goto label_260d28;
        }
    }
    ctx->pc = 0x260CFCu;
    // 0x260cfc: 0x8f829324  lw          $v0, -0x6CDC($gp)
    ctx->pc = 0x260cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939428)));
    // 0x260d00: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x260d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x260d04: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x260d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x260d08: 0x8ca4031c  lw          $a0, 0x31C($a1)
    ctx->pc = 0x260d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 796)));
    // 0x260d0c: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x260d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x260d10: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260D10u;
    {
        const bool branch_taken_0x260d10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x260D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D10u;
        // 0x260d14: 0xaf829324  sw          $v0, -0x6CDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d10) {
            ctx->pc = 0x260D24u;
            goto label_260d24;
        }
    }
    ctx->pc = 0x260D18u;
    // 0x260d18: 0x8f829328  lw          $v0, -0x6CD8($gp)
    ctx->pc = 0x260d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939432)));
    // 0x260d1c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x260d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x260d20: 0xaf829328  sw          $v0, -0x6CD8($gp)
    ctx->pc = 0x260d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939432), GPR_U32(ctx, 2));
label_260d24:
    // 0x260d24: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x260d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_260d28:
    // 0x260d28: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260D28u;
    {
        const bool branch_taken_0x260d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x260D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D28u;
        // 0x260d2c: 0x8fac02c4  lw          $t4, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d28) {
            ctx->pc = 0x260D40u;
            goto label_260d40;
        }
    }
    ctx->pc = 0x260D30u;
    // 0x260d30: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x260d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x260d34: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x260d34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x260d38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x260D38u;
    {
        const bool branch_taken_0x260d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D38u;
        // 0x260d3c: 0x24b30014  addiu       $s3, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d38) {
            ctx->pc = 0x260D48u;
            goto label_260d48;
        }
    }
    ctx->pc = 0x260D40u;
label_260d40:
    // 0x260d40: 0x8d91000c  lw          $s1, 0xC($t4)
    ctx->pc = 0x260d40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x260d44: 0x2593002c  addiu       $s3, $t4, 0x2C
    ctx->pc = 0x260d44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 12), 44));
label_260d48:
    // 0x260d48: 0x12200481  beqz        $s1, . + 4 + (0x481 << 2)
    ctx->pc = 0x260D48u;
    {
        const bool branch_taken_0x260d48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D48u;
        // 0x260d4c: 0x8fac02c0  lw          $t4, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d48) {
            ctx->pc = 0x261F50u;
            goto label_261f50;
        }
    }
    ctx->pc = 0x260D50u;
    // 0x260d50: 0x50e00004  beql        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x260D50u;
    {
        const bool branch_taken_0x260d50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x260d50) {
            ctx->pc = 0x260D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260D50u;
            // 0x260d54: 0x8e7e0004  lw          $fp, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260D64u;
            goto label_260d64;
        }
    }
    ctx->pc = 0x260D58u;
    // 0x260d58: 0x8cfe0004  lw          $fp, 0x4($a3)
    ctx->pc = 0x260d58u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x260d5c: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x260D5Cu;
    {
        const bool branch_taken_0x260d5c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x260d5c) {
            ctx->pc = 0x260D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260D5Cu;
            // 0x260d60: 0x8e7e0004  lw          $fp, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260D64u;
            goto label_260d64;
        }
    }
    ctx->pc = 0x260D64u;
label_260d64:
    // 0x260d64: 0x50e00004  beql        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x260D64u;
    {
        const bool branch_taken_0x260d64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x260d64) {
            ctx->pc = 0x260D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260D64u;
            // 0x260d68: 0x8e770008  lw          $s7, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260D78u;
            goto label_260d78;
        }
    }
    ctx->pc = 0x260D6Cu;
    // 0x260d6c: 0x8cf70008  lw          $s7, 0x8($a3)
    ctx->pc = 0x260d6cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x260d70: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x260D70u;
    {
        const bool branch_taken_0x260d70 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x260d70) {
            ctx->pc = 0x260D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260D70u;
            // 0x260d74: 0x8e770008  lw          $s7, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260D78u;
            goto label_260d78;
        }
    }
    ctx->pc = 0x260D78u;
label_260d78:
    // 0x260d78: 0x50e00005  beql        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x260D78u;
    {
        const bool branch_taken_0x260d78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x260d78) {
            ctx->pc = 0x260D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260D78u;
            // 0x260d7c: 0x8e76000c  lw          $s6, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260D90u;
            goto label_260d90;
        }
    }
    ctx->pc = 0x260D80u;
    // 0x260d80: 0x8cf6000c  lw          $s6, 0xC($a3)
    ctx->pc = 0x260d80u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x260d84: 0x56c00003  bnel        $s6, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x260D84u;
    {
        const bool branch_taken_0x260d84 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x260d84) {
            ctx->pc = 0x260D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260D84u;
            // 0x260d88: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260D94u;
            goto label_260d94;
        }
    }
    ctx->pc = 0x260D8Cu;
    // 0x260d8c: 0x8e76000c  lw          $s6, 0xC($s3)
    ctx->pc = 0x260d8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_260d90:
    // 0x260d90: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x260d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_260d94:
    // 0x260d94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x260D94u;
    {
        const bool branch_taken_0x260d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D94u;
        // 0x260d98: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d94) {
            ctx->pc = 0x260DB4u;
            goto label_260db4;
        }
    }
    ctx->pc = 0x260D9Cu;
    // 0x260d9c: 0x8ea200bc  lw          $v0, 0xBC($s5)
    ctx->pc = 0x260d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
    // 0x260da0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260DA0u;
    {
        const bool branch_taken_0x260da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DA0u;
        // 0x260da4: 0x240c0004  addiu       $t4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260da0) {
            ctx->pc = 0x260DB4u;
            goto label_260db4;
        }
    }
    ctx->pc = 0x260DA8u;
    // 0x260da8: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x260da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x260dac: 0x144c01ab  bne         $v0, $t4, . + 4 + (0x1AB << 2)
    ctx->pc = 0x260DACu;
    {
        const bool branch_taken_0x260dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x260DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DACu;
        // 0x260db0: 0x8fa302c4  lw          $v1, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260dac) {
            ctx->pc = 0x26145Cu;
            goto label_26145c;
        }
    }
    ctx->pc = 0x260DB4u;
label_260db4:
    // 0x260db4: 0xc0807de  jal         func_201F78
    ctx->pc = 0x260DB4u;
    SET_GPR_U32(ctx, 31, 0x260DBCu);
    ctx->pc = 0x260DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260DB4u;
    // 0x260db8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x260DB4u, 0x260DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DBCu;
label_260dbc:
    // 0x260dbc: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x260dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x260dc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x260dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260dc4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x260dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x260dc8: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x260DC8u;
    {
        const bool branch_taken_0x260dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DC8u;
        // 0x260dcc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260dc8) {
            ctx->pc = 0x261040u;
            goto label_261040;
        }
    }
    ctx->pc = 0x260DD0u;
    // 0x260dd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x260dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x260dd4: 0x244226a0  addiu       $v0, $v0, 0x26A0
    ctx->pc = 0x260dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9888));
    // 0x260dd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x260dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260ddc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x260ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260de0: 0x800008  jr          $a0
    ctx->pc = 0x260DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260DE8u: goto label_260de8;
            case 0x260E0Cu: goto label_260e0c;
            case 0x260E48u: goto label_260e48;
            case 0x260ED0u: goto label_260ed0;
            case 0x260F9Cu: goto label_260f9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260DE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260DE8u;
label_260de8:
    // 0x260de8: 0x8ea20088  lw          $v0, 0x88($s5)
    ctx->pc = 0x260de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x260dec: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x260DECu;
    {
        const bool branch_taken_0x260dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DECu;
        // 0x260df0: 0x8f8293a0  lw          $v0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260dec) {
            ctx->pc = 0x261044u;
            goto label_261044;
        }
    }
    ctx->pc = 0x260DF4u;
    // 0x260df4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x260df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x260df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260dfc: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x260DFCu;
    SET_GPR_U32(ctx, 31, 0x260E04u);
    ctx->pc = 0x260E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260DFCu;
    // 0x260e00: 0x8c4506e4  lw          $a1, 0x6E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x260DFCu, 0x260E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E04u;
label_260e04:
    // 0x260e04: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x260E04u;
    {
        const bool branch_taken_0x260e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E04u;
        // 0x260e08: 0x8f8293a0  lw          $v0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e04) {
            ctx->pc = 0x261044u;
            goto label_261044;
        }
    }
    ctx->pc = 0x260E0Cu;
label_260e0c:
    // 0x260e0c: 0xc6af004c  lwc1        $f15, 0x4C($s5)
    ctx->pc = 0x260e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x260e10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x260e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260e14: 0xc7808370  lwc1        $f0, -0x7C90($gp)
    ctx->pc = 0x260e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260e18: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x260e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x260e1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260e20: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x260e20u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x260e24: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x260e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260e28: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x260e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x260e2c: 0x0  nop
    ctx->pc = 0x260e2cu;
    // NOP
    // 0x260e30: 0x0  nop
    ctx->pc = 0x260e30u;
    // NOP
    // 0x260e34: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x260e34u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x260e38: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x260E38u;
    SET_GPR_U32(ctx, 31, 0x260E40u);
    ctx->pc = 0x260E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E38u;
    // 0x260e3c: 0xc6ae0038  lwc1        $f14, 0x38($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x260E38u, 0x260E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E40u;
label_260e40:
    // 0x260e40: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x260E40u;
    {
        const bool branch_taken_0x260e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E40u;
        // 0x260e44: 0x8ea30088  lw          $v1, 0x88($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e40) {
            ctx->pc = 0x260EA8u;
            goto label_260ea8;
        }
    }
    ctx->pc = 0x260E48u;
label_260e48:
    // 0x260e48: 0xc7818374  lwc1        $f1, -0x7C8C($gp)
    ctx->pc = 0x260e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260e4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x260e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260e50: 0xc6af0048  lwc1        $f15, 0x48($s5)
    ctx->pc = 0x260e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x260e54: 0xc6b0004c  lwc1        $f16, 0x4C($s5)
    ctx->pc = 0x260e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x260e58: 0xc6b10058  lwc1        $f17, 0x58($s5)
    ctx->pc = 0x260e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x260e5c: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x260e5cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x260e60: 0x46018402  mul.s       $f16, $f16, $f1
    ctx->pc = 0x260e60u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x260e64: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x260e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x260e68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260e6c: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x260e6cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x260e70: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x260e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260e74: 0x0  nop
    ctx->pc = 0x260e74u;
    // NOP
    // 0x260e78: 0x0  nop
    ctx->pc = 0x260e78u;
    // NOP
    // 0x260e7c: 0x46007bc3  div.s       $f15, $f15, $f0
    ctx->pc = 0x260e7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[0];
    // 0x260e80: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x260e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x260e84: 0x0  nop
    ctx->pc = 0x260e84u;
    // NOP
    // 0x260e88: 0x0  nop
    ctx->pc = 0x260e88u;
    // NOP
    // 0x260e8c: 0x46008403  div.s       $f16, $f16, $f0
    ctx->pc = 0x260e8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[0];
    // 0x260e90: 0x0  nop
    ctx->pc = 0x260e90u;
    // NOP
    // 0x260e94: 0x0  nop
    ctx->pc = 0x260e94u;
    // NOP
    // 0x260e98: 0x46008c43  div.s       $f17, $f17, $f0
    ctx->pc = 0x260e98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[0];
    // 0x260e9c: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x260E9Cu;
    SET_GPR_U32(ctx, 31, 0x260EA4u);
    ctx->pc = 0x260EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E9Cu;
    // 0x260ea0: 0xc6ae0038  lwc1        $f14, 0x38($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x260E9Cu, 0x260EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EA4u;
label_260ea4:
    // 0x260ea4: 0x8ea30088  lw          $v1, 0x88($s5)
    ctx->pc = 0x260ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_260ea8:
    // 0x260ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260eac: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x260EACu;
    {
        const bool branch_taken_0x260eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EACu;
        // 0x260eb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260eac) {
            ctx->pc = 0x261018u;
            goto label_261018;
        }
    }
    ctx->pc = 0x260EB4u;
    // 0x260eb4: 0x14620063  bne         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x260EB4u;
    {
        const bool branch_taken_0x260eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x260EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EB4u;
        // 0x260eb8: 0x8f8293a0  lw          $v0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260eb4) {
            ctx->pc = 0x261044u;
            goto label_261044;
        }
    }
    ctx->pc = 0x260EBCu;
    // 0x260ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ec0: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x260EC0u;
    SET_GPR_U32(ctx, 31, 0x260EC8u);
    ctx->pc = 0x260EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EC0u;
    // 0x260ec4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x260EC0u, 0x260EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EC8u;
label_260ec8:
    // 0x260ec8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x260EC8u;
    {
        const bool branch_taken_0x260ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EC8u;
        // 0x260ecc: 0x8f8293a0  lw          $v0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ec8) {
            ctx->pc = 0x261044u;
            goto label_261044;
        }
    }
    ctx->pc = 0x260ED0u;
label_260ed0:
    // 0x260ed0: 0xc6af004c  lwc1        $f15, 0x4C($s5)
    ctx->pc = 0x260ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x260ed4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x260ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ed8: 0xc7808378  lwc1        $f0, -0x7C88($gp)
    ctx->pc = 0x260ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260edc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x260edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x260ee0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260ee4: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x260ee4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x260ee8: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x260ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260eec: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x260eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x260ef0: 0x0  nop
    ctx->pc = 0x260ef0u;
    // NOP
    // 0x260ef4: 0x0  nop
    ctx->pc = 0x260ef4u;
    // NOP
    // 0x260ef8: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x260ef8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x260efc: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x260EFCu;
    SET_GPR_U32(ctx, 31, 0x260F04u);
    ctx->pc = 0x260F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EFCu;
    // 0x260f00: 0xc6ae0038  lwc1        $f14, 0x38($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x260EFCu, 0x260F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F04u;
label_260f04:
    // 0x260f04: 0x8ea30088  lw          $v1, 0x88($s5)
    ctx->pc = 0x260f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x260f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260f0c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260F0Cu;
    {
        const bool branch_taken_0x260f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F0Cu;
        // 0x260f10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f0c) {
            ctx->pc = 0x260F24u;
            goto label_260f24;
        }
    }
    ctx->pc = 0x260F14u;
    // 0x260f14: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x260F14u;
    {
        const bool branch_taken_0x260f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F14u;
        // 0x260f18: 0x8f8293a0  lw          $v0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f14) {
            ctx->pc = 0x260F80u;
            goto label_260f80;
        }
    }
    ctx->pc = 0x260F1Cu;
    // 0x260f1c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x260F1Cu;
    {
        const bool branch_taken_0x260f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F1Cu;
        // 0x260f20: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f1c) {
            ctx->pc = 0x261048u;
            goto label_261048;
        }
    }
    ctx->pc = 0x260F24u;
label_260f24:
    // 0x260f24: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x260f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x260f28: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x260f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x260f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x260f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f34: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x260F34u;
    SET_GPR_U32(ctx, 31, 0x260F3Cu);
    ctx->pc = 0x260F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F34u;
    // 0x260f38: 0x8c4506e4  lw          $a1, 0x6E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x260F34u, 0x260F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F3Cu;
label_260f3c:
    // 0x260f3c: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x260f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x260f40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f48: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x260F48u;
    SET_GPR_U32(ctx, 31, 0x260F50u);
    ctx->pc = 0x260F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F48u;
    // 0x260f4c: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x260F48u, 0x260F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F50u;
label_260f50:
    // 0x260f50: 0x8fa202bc  lw          $v0, 0x2BC($sp)
    ctx->pc = 0x260f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x260f54: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x260F54u;
    {
        const bool branch_taken_0x260f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F54u;
        // 0x260f58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f54) {
            ctx->pc = 0x261040u;
            goto label_261040;
        }
    }
    ctx->pc = 0x260F5Cu;
    // 0x260f5c: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x260f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x260f60: 0x8fa402bc  lw          $a0, 0x2BC($sp)
    ctx->pc = 0x260f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x260f64: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x260f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x260f68: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x260f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x260f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f70: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x260F70u;
    SET_GPR_U32(ctx, 31, 0x260F78u);
    ctx->pc = 0x260F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F70u;
    // 0x260f74: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x260F70u, 0x260F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F78u;
label_260f78:
    // 0x260f78: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x260F78u;
    {
        const bool branch_taken_0x260f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F78u;
        // 0x260f7c: 0x8f8293a0  lw          $v0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f78) {
            ctx->pc = 0x261044u;
            goto label_261044;
        }
    }
    ctx->pc = 0x260F80u;
label_260f80:
    // 0x260f80: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x260f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x260f84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f8c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x260F8Cu;
    SET_GPR_U32(ctx, 31, 0x260F94u);
    ctx->pc = 0x260F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F8Cu;
    // 0x260f90: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x260F8Cu, 0x260F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F94u;
label_260f94:
    // 0x260f94: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x260F94u;
    {
        const bool branch_taken_0x260f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F94u;
        // 0x260f98: 0x8f8293a0  lw          $v0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f94) {
            ctx->pc = 0x261044u;
            goto label_261044;
        }
    }
    ctx->pc = 0x260F9Cu;
label_260f9c:
    // 0x260f9c: 0xc6af004c  lwc1        $f15, 0x4C($s5)
    ctx->pc = 0x260f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x260fa0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x260fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260fa4: 0xc780837c  lwc1        $f0, -0x7C84($gp)
    ctx->pc = 0x260fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260fa8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x260fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x260fac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260fb0: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x260fb0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x260fb4: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x260fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260fb8: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x260fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x260fbc: 0x0  nop
    ctx->pc = 0x260fbcu;
    // NOP
    // 0x260fc0: 0x0  nop
    ctx->pc = 0x260fc0u;
    // NOP
    // 0x260fc4: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x260fc4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x260fc8: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x260FC8u;
    SET_GPR_U32(ctx, 31, 0x260FD0u);
    ctx->pc = 0x260FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260FC8u;
    // 0x260fcc: 0xc6ae0038  lwc1        $f14, 0x38($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x260FC8u, 0x260FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FD0u;
label_260fd0:
    // 0x260fd0: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x260fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x260fd4: 0x26a50064  addiu       $a1, $s5, 0x64
    ctx->pc = 0x260fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    // 0x260fd8: 0xc6ac005c  lwc1        $f12, 0x5C($s5)
    ctx->pc = 0x260fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260fdc: 0xc0ad70a  jal         func_2B5C28
    ctx->pc = 0x260FDCu;
    SET_GPR_U32(ctx, 31, 0x260FE4u);
    ctx->pc = 0x260FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260FDCu;
    // 0x260fe0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C28u, 0x260FDCu, 0x260FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FE4u;
label_260fe4:
    // 0x260fe4: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x260fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x260fe8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x260fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260fec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ff0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x260FF0u;
    SET_GPR_U32(ctx, 31, 0x260FF8u);
    ctx->pc = 0x260FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260FF0u;
    // 0x260ff4: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x260FF0u, 0x260FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FF8u;
label_260ff8:
    // 0x260ff8: 0x8ea30088  lw          $v1, 0x88($s5)
    ctx->pc = 0x260ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x260ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261000: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x261000u;
    {
        const bool branch_taken_0x261000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x261004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261000u;
        // 0x261004: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261000) {
            ctx->pc = 0x261018u;
            goto label_261018;
        }
    }
    ctx->pc = 0x261008u;
    // 0x261008: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x261008u;
    {
        const bool branch_taken_0x261008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261008u;
        // 0x26100c: 0x8f8293a0  lw          $v0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261008) {
            ctx->pc = 0x261034u;
            goto label_261034;
        }
    }
    ctx->pc = 0x261010u;
    // 0x261010: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x261010u;
    {
        const bool branch_taken_0x261010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261010u;
        // 0x261014: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261010) {
            ctx->pc = 0x261048u;
            goto label_261048;
        }
    }
    ctx->pc = 0x261018u;
label_261018:
    // 0x261018: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x261018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x26101c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26101cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261020: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x261020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261024: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x261024u;
    SET_GPR_U32(ctx, 31, 0x26102Cu);
    ctx->pc = 0x261028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261024u;
    // 0x261028: 0x8c4506e4  lw          $a1, 0x6E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x261024u, 0x26102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26102Cu;
label_26102c:
    // 0x26102c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26102Cu;
    {
        const bool branch_taken_0x26102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26102Cu;
        // 0x261030: 0x8f8293a0  lw          $v0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26102c) {
            ctx->pc = 0x261044u;
            goto label_261044;
        }
    }
    ctx->pc = 0x261034u;
label_261034:
    // 0x261034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261038: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x261038u;
    SET_GPR_U32(ctx, 31, 0x261040u);
    ctx->pc = 0x26103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261038u;
    // 0x26103c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x261038u, 0x261040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261040u;
label_261040:
    // 0x261040: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
label_261044:
    // 0x261044: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x261044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_261048:
    // 0x261048: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x261048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x26104c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x26104cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261050: 0xa0490003  sb          $t1, 0x3($v0)
    ctx->pc = 0x261050u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261054: 0x24638fc0  addiu       $v1, $v1, -0x7040
    ctx->pc = 0x261054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938560));
    // 0x261058: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x261058u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26105c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x26105cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x261060: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261064: 0x24a58ff0  addiu       $a1, $a1, -0x7010
    ctx->pc = 0x261064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938608));
    // 0x261068: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26106c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x26106cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261070: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261074: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261074u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261078: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261078u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26107c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x26107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261080: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261084: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x261084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x261088: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x26108c: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x26108cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261090: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261094: 0x8fac02b8  lw          $t4, 0x2B8($sp)
    ctx->pc = 0x261094u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x261098: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26109c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x26109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2610a0: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x2610a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2610a4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2610a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2610a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2610a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2610ac: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x2610acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2610b0: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2610B0u;
    {
        const bool branch_taken_0x2610b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610B0u;
        // 0x2610b4: 0xaf8693a0  sw          $a2, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610b0) {
            ctx->pc = 0x261184u;
            goto label_261184;
        }
    }
    ctx->pc = 0x2610B8u;
    // 0x2610b8: 0x8d820018  lw          $v0, 0x18($t4)
    ctx->pc = 0x2610b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x2610bc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2610BCu;
    {
        const bool branch_taken_0x2610bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610BCu;
        // 0x2610c0: 0x8fa202d4  lw          $v0, 0x2D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610bc) {
            ctx->pc = 0x261188u;
            goto label_261188;
        }
    }
    ctx->pc = 0x2610C4u;
    // 0x2610c4: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x2610c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x2610c8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2610C8u;
    {
        const bool branch_taken_0x2610c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610C8u;
        // 0x2610cc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610c8) {
            ctx->pc = 0x261184u;
            goto label_261184;
        }
    }
    ctx->pc = 0x2610D0u;
    // 0x2610d0: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x2610d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2610d4: 0x24428f40  addiu       $v0, $v0, -0x70C0
    ctx->pc = 0x2610d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938432));
    // 0x2610d8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2610d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2610dc: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2610dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2610e0: 0x24a58f90  addiu       $a1, $a1, -0x7070
    ctx->pc = 0x2610e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938512));
    // 0x2610e4: 0x8d880018  lw          $t0, 0x18($t4)
    ctx->pc = 0x2610e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x2610e8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x2610e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x2610ec: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2610ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2610f0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2610f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2610f4: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2610f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2610f8: 0x24c68f70  addiu       $a2, $a2, -0x7090
    ctx->pc = 0x2610f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938480));
    // 0x2610fc: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x2610fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261100: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x261100u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x261104: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261108: 0x24e78f80  addiu       $a3, $a3, -0x7080
    ctx->pc = 0x261108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938496));
    // 0x26110c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x26110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261110: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261114: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x261114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x261118: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x26111c: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x26111cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261120: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261124: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261128: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26112c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x26112cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261130: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x261134: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261134u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261138: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26113c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x26113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261140: 0x8d84001c  lw          $a0, 0x1C($t4)
    ctx->pc = 0x261140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x261144: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261148: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x261148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x26114c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x26114cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x261150: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261150u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261154: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261158: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26115c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x26115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261160: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x261160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x261164: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x261168: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x261168u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x26116c: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x26116cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261170: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261174: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261178: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x261178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x26117c: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x26117cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261180: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_261184:
    // 0x261184: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x261184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_261188:
    // 0x261188: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x261188u;
    {
        const bool branch_taken_0x261188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261188u;
        // 0x26118c: 0x8fa502b8  lw          $a1, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261188) {
            ctx->pc = 0x2611B8u;
            goto label_2611b8;
        }
    }
    ctx->pc = 0x261190u;
    // 0x261190: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x261190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x261194: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x261194u;
    {
        const bool branch_taken_0x261194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261194u;
        // 0x261198: 0x8f8493a0  lw          $a0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261194) {
            ctx->pc = 0x2611B8u;
            goto label_2611b8;
        }
    }
    ctx->pc = 0x26119Cu;
    // 0x26119c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x26119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2611a0: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x2611a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2611a4: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x2611a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2611a8: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2611a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2611ac: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2611acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2611b0: 0x100002a1  b           . + 4 + (0x2A1 << 2)
    ctx->pc = 0x2611B0u;
    {
        const bool branch_taken_0x2611b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611B0u;
        // 0x2611b4: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611b0) {
            ctx->pc = 0x261C38u;
            goto label_261c38;
        }
    }
    ctx->pc = 0x2611B8u;
label_2611b8:
    // 0x2611b8: 0x8ca2011c  lw          $v0, 0x11C($a1)
    ctx->pc = 0x2611b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 284)));
    // 0x2611bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2611BCu;
    {
        const bool branch_taken_0x2611bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611BCu;
        // 0x2611c0: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611bc) {
            ctx->pc = 0x2611F0u;
            goto label_2611f0;
        }
    }
    ctx->pc = 0x2611C4u;
    // 0x2611c4: 0x8ca20120  lw          $v0, 0x120($a1)
    ctx->pc = 0x2611c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x2611c8: 0x8fac02d8  lw          $t4, 0x2D8($sp)
    ctx->pc = 0x2611c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2611cc: 0x8fa302b8  lw          $v1, 0x2B8($sp)
    ctx->pc = 0x2611ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2611d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2611d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2611d4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2611d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2611d8: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x2611d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x2611dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2611dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2611e0: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2611e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2611e4: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x2611e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x2611e8: 0x100002a2  b           . + 4 + (0x2A2 << 2)
    ctx->pc = 0x2611E8u;
    {
        const bool branch_taken_0x2611e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611E8u;
        // 0x2611ec: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611e8) {
            ctx->pc = 0x261C74u;
            goto label_261c74;
        }
    }
    ctx->pc = 0x2611F0u;
label_2611f0:
    // 0x2611f0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2611f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2611f4: 0x4400356  bltz        $v0, . + 4 + (0x356 << 2)
    ctx->pc = 0x2611F4u;
    {
        const bool branch_taken_0x2611f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2611F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611F4u;
        // 0x2611f8: 0x8fac02c0  lw          $t4, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611f4) {
            ctx->pc = 0x261F50u;
            goto label_261f50;
        }
    }
    ctx->pc = 0x2611FCu;
    // 0x2611fc: 0x3c0d0038  lui         $t5, 0x38
    ctx->pc = 0x2611fcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)56 << 16));
label_261200:
    // 0x261200: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261204: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x261204u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x261208: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x261208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26120c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26120cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261210: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261214: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x261214u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x261218: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x261218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x26121c: 0x354afffc  ori         $t2, $t2, 0xFFFC
    ctx->pc = 0x26121cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65532);
    // 0x261220: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x261220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x261224: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x261224u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x261228: 0x600013  mtlo        $v1
    ctx->pc = 0x261228u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x26122c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x26122cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x261230: 0x72824000  madd        $t0, $s4, $v0
    ctx->pc = 0x261230u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x261234: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x261234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x261238: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26123c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x26123cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x261240: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x261240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x261244: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x261244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x261248: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26124c: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x26124cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261250: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261254: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x261254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x261258: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261258u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26125c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x26125cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x261260: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261264: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261268: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x26126c: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x26126cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261270: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x261270u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x261274: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261274u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261278: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x261278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26127c: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x26127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261280: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x261280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x261284: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x261284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x261288: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x261288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x26128c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x26128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261290: 0xa46b0000  sh          $t3, 0x0($v1)
    ctx->pc = 0x261290u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261294: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x261294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x261298: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x261298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26129c: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x26129cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2612a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2612a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2612a4: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x2612a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2612a8: 0xac1018  mult        $v0, $a1, $t4
    ctx->pc = 0x2612a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2612ac: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2612acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x2612b0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2612b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2612b4: 0x5e2821  addu        $a1, $v0, $fp
    ctx->pc = 0x2612b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2612b8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2612b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2612bc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2612bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2612c0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2612c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2612c4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2612c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2612c8: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2612c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2612cc: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x2612ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2612d0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2612d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2612d4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2612d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2612d8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2612d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2612dc: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x2612dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x2612e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2612e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2612e4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2612e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2612e8: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x2612e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2612ec: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2612ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2612f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2612f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2612f4: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x2612f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2612f8: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2612f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2612fc: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2612fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261300: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261304: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x261304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261308: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x26130c: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x26130cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x261310: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261310u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261314: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261318: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x261318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26131c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x26131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261320: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x261320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x261324: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x261324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x261328: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x261328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26132c: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x26132cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261330: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x261330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x261334: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x261334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x261338: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x261338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x26133c: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x26133cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261340: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x261340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x261344: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261348: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x261348u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x26134c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x26134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x261350: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x261350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261354: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x261354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x261358: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x261358u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x26135c: 0x14a70017  bne         $a1, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x26135Cu;
    {
        const bool branch_taken_0x26135c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x261360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26135Cu;
        // 0x261360: 0xaf8693a0  sw          $a2, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26135c) {
            ctx->pc = 0x2613BCu;
            goto label_2613bc;
        }
    }
    ctx->pc = 0x261364u;
    // 0x261364: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x261364u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261368: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26136c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x26136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x261370: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x261370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x261374: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x261374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261378: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x261378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x26137c: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x26137cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x261380: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x261380u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x261384: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x261384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x261388: 0xa46b0000  sh          $t3, 0x0($v1)
    ctx->pc = 0x261388u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x26138c: 0xac2818  mult        $a1, $a1, $t4
    ctx->pc = 0x26138cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x261390: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x261390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x261394: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x261394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x261398: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x261398u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26139c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2613a0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2613a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x2613a4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2613a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2613a8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2613a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2613ac: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2613acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2613b0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2613b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2613b4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2613b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2613b8: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2613b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_2613bc:
    // 0x2613bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2613bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2613c0: 0x4600015  bltz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2613C0u;
    {
        const bool branch_taken_0x2613c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2613C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613C0u;
        // 0x2613c4: 0x8fa502c8  lw          $a1, 0x2C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2613c0) {
            ctx->pc = 0x261418u;
            goto label_261418;
        }
    }
    ctx->pc = 0x2613C8u;
    // 0x2613c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2613c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2613cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2613ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2613d0: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x2613d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2613d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2613d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2613d8: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x2613d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2613dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2613dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2613e0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2613e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2613e4: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x2613e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2613e8: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2613e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2613ec: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x2613ecu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2613f0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2613f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2613f4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2613f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2613f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2613f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2613fc: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2613fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x261400: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x261400u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261404: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261408: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26140c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x26140cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x261410: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x261410u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x261414: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261414u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_261418:
    // 0x261418: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26141c: 0x25a40460  addiu       $a0, $t5, 0x460
    ctx->pc = 0x26141cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1120));
    // 0x261420: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x261420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x261424: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x261424u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x261428: 0xa0490003  sb          $t1, 0x3($v0)
    ctx->pc = 0x261428u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26142c: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x26142cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x261430: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x261430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x261434: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261438: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26143c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x26143cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x261440: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261444: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x261444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261448: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x261448u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x26144c: 0x4a1ff6c  bgez        $a1, . + 4 + (-0x94 << 2)
    ctx->pc = 0x26144Cu;
    {
        const bool branch_taken_0x26144c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x261450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26144Cu;
        // 0x261450: 0xaf8493a0  sw          $a0, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26144c) {
            ctx->pc = 0x261200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261200;
        }
    }
    ctx->pc = 0x261454u;
    // 0x261454: 0x100002be  b           . + 4 + (0x2BE << 2)
    ctx->pc = 0x261454u;
    {
        const bool branch_taken_0x261454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261454u;
        // 0x261458: 0x8fac02c0  lw          $t4, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261454) {
            ctx->pc = 0x261F50u;
            goto label_261f50;
        }
    }
    ctx->pc = 0x26145Cu;
label_26145c:
    // 0x26145c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x26145cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261460: 0x14400112  bnez        $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x261460u;
    {
        const bool branch_taken_0x261460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261460u;
        // 0x261464: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261460) {
            ctx->pc = 0x2618ACu;
            goto label_2618ac;
        }
    }
    ctx->pc = 0x261468u;
    // 0x261468: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26146c: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x26146cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x261470: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x261470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x261474: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x261474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261478: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26147c: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x26147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x261480: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x261480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x261484: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261488: 0x24a58ff0  addiu       $a1, $a1, -0x7010
    ctx->pc = 0x261488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938608));
    // 0x26148c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x26148cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x261490: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x261490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261494: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x261494u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261498: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261498u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x26149c: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x26149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x2614a0: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x2614a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2614a4: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x2614a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2614a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2614a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2614ac: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2614acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2614b0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2614b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2614b4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2614b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2614b8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2614b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2614bc: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2614bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2614c0: 0xa46c0000  sh          $t4, 0x0($v1)
    ctx->pc = 0x2614c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x2614c4: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x2614c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2614c8: 0x8fa402b8  lw          $a0, 0x2B8($sp)
    ctx->pc = 0x2614c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2614cc: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2614ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2614d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2614d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2614d4: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x2614d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2614d8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2614d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2614dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2614dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2614e0: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x2614e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2614e4: 0x1080003b  beqz        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2614E4u;
    {
        const bool branch_taken_0x2614e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2614E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614E4u;
        // 0x2614e8: 0xaf8693a0  sw          $a2, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2614e4) {
            ctx->pc = 0x2615D4u;
            goto label_2615d4;
        }
    }
    ctx->pc = 0x2614ECu;
    // 0x2614ec: 0x8fa502b8  lw          $a1, 0x2B8($sp)
    ctx->pc = 0x2614ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2614f0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2614f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2614f4: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x2614F4u;
    {
        const bool branch_taken_0x2614f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2614f4) {
            ctx->pc = 0x2614F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2614F4u;
            // 0x2614f8: 0x8fac02d4  lw          $t4, 0x2D4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2615D8u;
            goto label_2615d8;
        }
    }
    ctx->pc = 0x2614FCu;
    // 0x2614fc: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2614fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x261500: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x261500u;
    {
        const bool branch_taken_0x261500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261500u;
        // 0x261504: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261500) {
            ctx->pc = 0x2615D4u;
            goto label_2615d4;
        }
    }
    ctx->pc = 0x261508u;
    // 0x261508: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x261508u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26150c: 0x24428f40  addiu       $v0, $v0, -0x70C0
    ctx->pc = 0x26150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938432));
    // 0x261510: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x261510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x261514: 0x8fa402b8  lw          $a0, 0x2B8($sp)
    ctx->pc = 0x261514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x261518: 0x24a58f90  addiu       $a1, $a1, -0x7070
    ctx->pc = 0x261518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938512));
    // 0x26151c: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x26151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261520: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x261520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x261524: 0x8c880018  lw          $t0, 0x18($a0)
    ctx->pc = 0x261524u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x261528: 0x24c68f70  addiu       $a2, $a2, -0x7090
    ctx->pc = 0x261528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938480));
    // 0x26152c: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x26152cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261530: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x261530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261534: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x261534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x261538: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x261538u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x26153c: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x26153cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261540: 0x24e78f80  addiu       $a3, $a3, -0x7080
    ctx->pc = 0x261540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938496));
    // 0x261544: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x261544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x261548: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x261548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x26154c: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x26154cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261550: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x261550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x261554: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261558: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x261558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x26155c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x26155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261560: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x261560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x261564: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261564u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261568: 0xa46c0000  sh          $t4, 0x0($v1)
    ctx->pc = 0x261568u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x26156c: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x26156cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261570: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261574: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261578: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261578u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x26157c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x26157cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x261580: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261584: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261588: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26158c: 0x8fa502b8  lw          $a1, 0x2B8($sp)
    ctx->pc = 0x26158cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x261590: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261594: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261594u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261598: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261598u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x26159c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x26159cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2615a0: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2615a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2615a4: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x2615a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2615a8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2615a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2615ac: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2615acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2615b0: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x2615b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x2615b4: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2615b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2615b8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2615b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2615bc: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x2615bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2615c0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2615c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2615c4: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x2615c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x2615c8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2615c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2615cc: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x2615ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2615d0: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2615d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_2615d4:
    // 0x2615d4: 0x8fac02d4  lw          $t4, 0x2D4($sp)
    ctx->pc = 0x2615d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_2615d8:
    // 0x2615d8: 0x1580000b  bnez        $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x2615D8u;
    {
        const bool branch_taken_0x2615d8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2615DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615D8u;
        // 0x2615dc: 0x8fa502b8  lw          $a1, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615d8) {
            ctx->pc = 0x261608u;
            goto label_261608;
        }
    }
    ctx->pc = 0x2615E0u;
    // 0x2615e0: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x2615e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2615e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2615E4u;
    {
        const bool branch_taken_0x2615e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615E4u;
        // 0x2615e8: 0x8f8493a0  lw          $a0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615e4) {
            ctx->pc = 0x261608u;
            goto label_261608;
        }
    }
    ctx->pc = 0x2615ECu;
    // 0x2615ec: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2615ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2615f0: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x2615f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2615f4: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x2615f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2615f8: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2615f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2615fc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2615fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261600: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x261600u;
    {
        const bool branch_taken_0x261600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261600u;
        // 0x261604: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261600) {
            ctx->pc = 0x261C38u;
            goto label_261c38;
        }
    }
    ctx->pc = 0x261608u;
label_261608:
    // 0x261608: 0x8ca2011c  lw          $v0, 0x11C($a1)
    ctx->pc = 0x261608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 284)));
    // 0x26160c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26160Cu;
    {
        const bool branch_taken_0x26160c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26160Cu;
        // 0x261610: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26160c) {
            ctx->pc = 0x261640u;
            goto label_261640;
        }
    }
    ctx->pc = 0x261614u;
    // 0x261614: 0x8ca20120  lw          $v0, 0x120($a1)
    ctx->pc = 0x261614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x261618: 0x8fac02d8  lw          $t4, 0x2D8($sp)
    ctx->pc = 0x261618u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x26161c: 0x8fa302b8  lw          $v1, 0x2B8($sp)
    ctx->pc = 0x26161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x261620: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x261620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x261624: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x261624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x261628: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x261628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x26162c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261630: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x261630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261634: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x261634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x261638: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x261638u;
    {
        const bool branch_taken_0x261638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261638u;
        // 0x26163c: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261638) {
            ctx->pc = 0x261C74u;
            goto label_261c74;
        }
    }
    ctx->pc = 0x261640u;
label_261640:
    // 0x261640: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x261640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x261644: 0x4400242  bltz        $v0, . + 4 + (0x242 << 2)
    ctx->pc = 0x261644u;
    {
        const bool branch_taken_0x261644 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x261648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261644u;
        // 0x261648: 0x8fac02c0  lw          $t4, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261644) {
            ctx->pc = 0x261F50u;
            goto label_261f50;
        }
    }
    ctx->pc = 0x26164Cu;
    // 0x26164c: 0x3c0d0038  lui         $t5, 0x38
    ctx->pc = 0x26164cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)56 << 16));
label_261650:
    // 0x261650: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261654: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x261654u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x261658: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x261658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26165c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26165cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261660: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261664: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x261664u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x261668: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x261668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x26166c: 0x354afffc  ori         $t2, $t2, 0xFFFC
    ctx->pc = 0x26166cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65532);
    // 0x261670: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x261670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x261674: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x261674u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x261678: 0x600013  mtlo        $v1
    ctx->pc = 0x261678u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x26167c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x26167cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x261680: 0x72824000  madd        $t0, $s4, $v0
    ctx->pc = 0x261680u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x261684: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x261684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x261688: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26168c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x26168cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x261690: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x261690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x261694: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x261694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x261698: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26169c: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x26169cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2616a0: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2616a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2616a4: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x2616a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x2616a8: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x2616a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2616ac: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2616acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2616b0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2616b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2616b4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2616b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2616b8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2616b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2616bc: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2616bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2616c0: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x2616c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2616c4: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x2616c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2616c8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2616c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2616cc: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2616ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2616d0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2616d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2616d4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2616d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2616d8: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x2616d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x2616dc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2616dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2616e0: 0xa46b0000  sh          $t3, 0x0($v1)
    ctx->pc = 0x2616e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2616e4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2616e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2616e8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2616e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2616ec: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2616ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2616f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2616f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2616f4: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x2616f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2616f8: 0xac1018  mult        $v0, $a1, $t4
    ctx->pc = 0x2616f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2616fc: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2616fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x261700: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x261700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x261704: 0x5e2821  addu        $a1, $v0, $fp
    ctx->pc = 0x261704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x261708: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26170c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x26170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261710: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x261710u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x261714: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261718: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x26171c: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x26171cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261720: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261724: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x261724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x261728: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26172c: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x26172cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x261730: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x261730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x261734: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x261734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x261738: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x261738u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x26173c: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x26173cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261740: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x261740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x261744: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261748: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x261748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x26174c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x26174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261750: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261754: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x261754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261758: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261758u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x26175c: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x26175cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x261760: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261764: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261768: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x261768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26176c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x26176cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261770: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x261770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x261774: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x261774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x261778: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x261778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26177c: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x26177cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261780: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x261780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x261784: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x261784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x261788: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x261788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x26178c: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x26178cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261790: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x261790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x261794: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261798: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x261798u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x26179c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x26179cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2617a0: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x2617a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2617a4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2617a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2617a8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2617a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2617ac: 0x14a70017  bne         $a1, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2617ACu;
    {
        const bool branch_taken_0x2617ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x2617B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617ACu;
        // 0x2617b0: 0xaf8693a0  sw          $a2, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617ac) {
            ctx->pc = 0x26180Cu;
            goto label_26180c;
        }
    }
    ctx->pc = 0x2617B4u;
    // 0x2617b4: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x2617b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2617b8: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2617b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2617bc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2617bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2617c0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2617c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2617c4: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x2617c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2617c8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2617c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2617cc: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x2617ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x2617d0: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x2617d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x2617d4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2617d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2617d8: 0xa46b0000  sh          $t3, 0x0($v1)
    ctx->pc = 0x2617d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2617dc: 0xac2818  mult        $a1, $a1, $t4
    ctx->pc = 0x2617dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2617e0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x2617e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2617e4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2617e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2617e8: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x2617e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2617ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2617ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2617f0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2617f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x2617f4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2617f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2617f8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2617f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2617fc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2617fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261800: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261804: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x261804u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x261808: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_26180c:
    // 0x26180c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x261810: 0x4600015  bltz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x261810u;
    {
        const bool branch_taken_0x261810 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x261814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261810u;
        // 0x261814: 0x8fa502c8  lw          $a1, 0x2C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261810) {
            ctx->pc = 0x261868u;
            goto label_261868;
        }
    }
    ctx->pc = 0x261818u;
    // 0x261818: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x261818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x26181c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x26181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x261820: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x261820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x261824: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x261824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261828: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x261828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26182c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261830: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x261830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x261834: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x261834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x261838: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x261838u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26183c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x26183cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x261840: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x261840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x261844: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x261844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x261848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26184c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x26184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x261850: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x261850u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261854: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261858: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26185c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x26185cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x261860: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x261860u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x261864: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_261868:
    // 0x261868: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x26186c: 0x25a40460  addiu       $a0, $t5, 0x460
    ctx->pc = 0x26186cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1120));
    // 0x261870: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x261870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x261874: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x261874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x261878: 0xa0490003  sb          $t1, 0x3($v0)
    ctx->pc = 0x261878u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26187c: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x26187cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x261880: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x261880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x261884: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26188c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x26188cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x261890: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261894: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x261894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261898: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x261898u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x26189c: 0x4a1ff6c  bgez        $a1, . + 4 + (-0x94 << 2)
    ctx->pc = 0x26189Cu;
    {
        const bool branch_taken_0x26189c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2618A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26189Cu;
        // 0x2618a0: 0xaf8493a0  sw          $a0, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26189c) {
            ctx->pc = 0x261650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261650;
        }
    }
    ctx->pc = 0x2618A4u;
    // 0x2618a4: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x2618A4u;
    {
        const bool branch_taken_0x2618a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2618A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618A4u;
        // 0x2618a8: 0x8fac02c0  lw          $t4, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618a4) {
            ctx->pc = 0x261F50u;
            goto label_261f50;
        }
    }
    ctx->pc = 0x2618ACu;
label_2618ac:
    // 0x2618ac: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2618acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2618b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2618b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2618b4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2618b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2618b8: 0x104001a4  beqz        $v0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x2618B8u;
    {
        const bool branch_taken_0x2618b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2618BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618B8u;
        // 0x2618bc: 0x8f8293a0  lw          $v0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618b8) {
            ctx->pc = 0x261F4Cu;
            goto label_261f4c;
        }
    }
    ctx->pc = 0x2618C0u;
    // 0x2618c0: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x2618c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2618c4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2618c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2618c8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2618c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2618cc: 0xa0490003  sb          $t1, 0x3($v0)
    ctx->pc = 0x2618ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2618d0: 0x24638fc0  addiu       $v1, $v1, -0x7040
    ctx->pc = 0x2618d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938560));
    // 0x2618d4: 0x240d0050  addiu       $t5, $zero, 0x50
    ctx->pc = 0x2618d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2618d8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2618d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2618dc: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2618dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2618e0: 0x24a58ff0  addiu       $a1, $a1, -0x7010
    ctx->pc = 0x2618e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938608));
    // 0x2618e4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x2618e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x2618e8: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x2618e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x2618ec: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x2618ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2618f0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2618f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2618f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2618f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2618f8: 0x24c68fd0  addiu       $a2, $a2, -0x7030
    ctx->pc = 0x2618f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938576));
    // 0x2618fc: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2618fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261900: 0x24e79000  addiu       $a3, $a3, -0x7000
    ctx->pc = 0x261900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938624));
    // 0x261904: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x261904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x261908: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x261908u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26190c: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x26190cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x261910: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x261910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x261914: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x261914u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x261918: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26191c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x26191cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x261920: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261924: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x261924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x261928: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26192c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x26192cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261930: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261930u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261934: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x261934u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x261938: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26193c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x26193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261940: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261944: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261948: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x26194c: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x26194cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261950: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261954: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261958: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x261958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x26195c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x26195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261960: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x261960u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261964: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261968: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x261968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x26196c: 0x80a20003  lb          $v0, 0x3($a1)
    ctx->pc = 0x26196cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x261970: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x261970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x261974: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x261974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x261978: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x261978u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x26197c: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x26197cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261980: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x261980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x261984: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261988: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x261988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x26198c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x26198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261990: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x261990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261994: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261998: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x261998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x26199c: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x26199cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2619a0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2619a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2619a4: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x2619a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x2619a8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2619a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2619ac: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x2619acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2619b0: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2619b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2619b4: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x2619b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2619b8: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2619B8u;
    {
        const bool branch_taken_0x2619b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2619BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619B8u;
        // 0x2619bc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619b8) {
            ctx->pc = 0x261A24u;
            goto label_261a24;
        }
    }
    ctx->pc = 0x2619C0u;
    // 0x2619c0: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x2619c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2619c4: 0x24428fe0  addiu       $v0, $v0, -0x7020
    ctx->pc = 0x2619c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938592));
    // 0x2619c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2619c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2619cc: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2619ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2619d0: 0x24a59010  addiu       $a1, $a1, -0x6FF0
    ctx->pc = 0x2619d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938640));
    // 0x2619d4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2619d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2619d8: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2619d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2619dc: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x2619dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2619e0: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2619e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2619e4: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x2619e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x2619e8: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x2619e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2619ec: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x2619ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2619f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2619f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2619f4: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2619f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2619f8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2619f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2619fc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2619fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261a00: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x261a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x261a04: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261a08: 0xa46c0000  sh          $t4, 0x0($v1)
    ctx->pc = 0x261a08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x261a0c: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261a10: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261a14: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261a18: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261a1c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x261a20: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261a20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
label_261a24:
    // 0x261a24: 0x8fa402b8  lw          $a0, 0x2B8($sp)
    ctx->pc = 0x261a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x261a28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x261a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x261a2c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x261a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x261a30: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x261A30u;
    {
        const bool branch_taken_0x261a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A30u;
        // 0x261a34: 0x8f8393a0  lw          $v1, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a30) {
            ctx->pc = 0x261C0Cu;
            goto label_261c0c;
        }
    }
    ctx->pc = 0x261A38u;
    // 0x261a38: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x261a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x261a3c: 0x24428f40  addiu       $v0, $v0, -0x70C0
    ctx->pc = 0x261a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938432));
    // 0x261a40: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x261a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x261a44: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261a48: 0x24a58f90  addiu       $a1, $a1, -0x7070
    ctx->pc = 0x261a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938512));
    // 0x261a4c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x261a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x261a50: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x261a50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x261a54: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261a58: 0x24c68f50  addiu       $a2, $a2, -0x70B0
    ctx->pc = 0x261a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938448));
    // 0x261a5c: 0x8c880018  lw          $t0, 0x18($a0)
    ctx->pc = 0x261a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x261a60: 0x24e78fa0  addiu       $a3, $a3, -0x7060
    ctx->pc = 0x261a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938528));
    // 0x261a64: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x261a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x261a68: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x261a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261a6c: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x261a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261a70: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261a70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261a74: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x261a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x261a78: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x261a78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x261a7c: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x261a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x261a80: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x261a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x261a84: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x261a84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x261a88: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261a8c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x261a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x261a90: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261a94: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x261a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x261a98: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261a9c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x261a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261aa0: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261aa4: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x261aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x261aa8: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261aac: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261ab0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261ab4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261ab8: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261abc: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261abcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261ac0: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261ac4: 0x8fa402b8  lw          $a0, 0x2B8($sp)
    ctx->pc = 0x261ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x261ac8: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261acc: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x261accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x261ad0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x261ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x261ad4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x261ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261ad8: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x261ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261adc: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261adcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261ae0: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x261ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x261ae4: 0x80620003  lb          $v0, 0x3($v1)
    ctx->pc = 0x261ae4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x261ae8: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x261ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x261aec: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x261aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x261af0: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x261af0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x261af4: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261af4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261af8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x261af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x261afc: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261b00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x261b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261b04: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x261b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261b08: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261b0c: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261b10: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x261b10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x261b14: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261b14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261b18: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261b1c: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x261b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x261b20: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261b24: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261b24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261b28: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261b28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x261b2c: 0x8fa402c4  lw          $a0, 0x2C4($sp)
    ctx->pc = 0x261b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x261b30: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x261b30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x261b34: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x261B34u;
    {
        const bool branch_taken_0x261b34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x261B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B34u;
        // 0x261b38: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b34) {
            ctx->pc = 0x261BA8u;
            goto label_261ba8;
        }
    }
    ctx->pc = 0x261B3Cu;
    // 0x261b3c: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261b40: 0x24428f60  addiu       $v0, $v0, -0x70A0
    ctx->pc = 0x261b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938464));
    // 0x261b44: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x261b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x261b48: 0x8fa402b8  lw          $a0, 0x2B8($sp)
    ctx->pc = 0x261b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x261b4c: 0x24a58fb0  addiu       $a1, $a1, -0x7050
    ctx->pc = 0x261b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
    // 0x261b50: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261b54: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x261b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x261b58: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x261b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x261b5c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x261b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261b60: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x261b60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261b64: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261b64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261b68: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x261b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x261b6c: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x261b6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x261b70: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261b70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261b74: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x261b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x261b78: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261b7c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x261b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x261b80: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x261b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261b84: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x261b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x261b88: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261b88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261b8c: 0xa46c0000  sh          $t4, 0x0($v1)
    ctx->pc = 0x261b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x261b90: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261b90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261b94: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261b98: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261b9c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261ba0: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x261ba4: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
label_261ba8:
    // 0x261ba8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261bac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x261bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x261bb0: 0x24638f70  addiu       $v1, $v1, -0x7090
    ctx->pc = 0x261bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938480));
    // 0x261bb4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x261bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x261bb8: 0xa0490003  sb          $t1, 0x3($v0)
    ctx->pc = 0x261bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261bbc: 0x24a58f80  addiu       $a1, $a1, -0x7080
    ctx->pc = 0x261bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938496));
    // 0x261bc0: 0x8fa402b8  lw          $a0, 0x2B8($sp)
    ctx->pc = 0x261bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x261bc4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261bc8: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x261bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x261bcc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261bd0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x261bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261bd4: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261bd8: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261bdc: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261be0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261be4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261be8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x261be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x261bec: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x261bf0: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x261bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x261bf4: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261bf8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261bfc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261c00: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261c04: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x261c04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x261c08: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261c08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_261c0c:
    // 0x261c0c: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x261c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x261c10: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x261C10u;
    {
        const bool branch_taken_0x261c10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x261C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C10u;
        // 0x261c14: 0x8fa302b8  lw          $v1, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c10) {
            ctx->pc = 0x261C44u;
            goto label_261c44;
        }
    }
    ctx->pc = 0x261C18u;
    // 0x261c18: 0x8fac02d0  lw          $t4, 0x2D0($sp)
    ctx->pc = 0x261c18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x261c1c: 0x11800009  beqz        $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x261C1Cu;
    {
        const bool branch_taken_0x261c1c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C1Cu;
        // 0x261c20: 0x8f8493a0  lw          $a0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c1c) {
            ctx->pc = 0x261C44u;
            goto label_261c44;
        }
    }
    ctx->pc = 0x261C24u;
    // 0x261c24: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x261c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x261c28: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x261c28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x261c2c: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261c30: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x261c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261c34: 0xac6c0004  sw          $t4, 0x4($v1)
    ctx->pc = 0x261c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 12));
label_261c38:
    // 0x261c38: 0xaf8293a0  sw          $v0, -0x6C60($gp)
    ctx->pc = 0x261c38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 2));
    // 0x261c3c: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x261C3Cu;
    {
        const bool branch_taken_0x261c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C3Cu;
        // 0x261c40: 0xa4600000  sh          $zero, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c3c) {
            ctx->pc = 0x261F4Cu;
            goto label_261f4c;
        }
    }
    ctx->pc = 0x261C44u;
label_261c44:
    // 0x261c44: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x261c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x261c48: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x261C48u;
    {
        const bool branch_taken_0x261c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C48u;
        // 0x261c4c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c48) {
            ctx->pc = 0x261C94u;
            goto label_261c94;
        }
    }
    ctx->pc = 0x261C50u;
    // 0x261c50: 0x8c620120  lw          $v0, 0x120($v1)
    ctx->pc = 0x261c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x261c54: 0x8fa402d8  lw          $a0, 0x2D8($sp)
    ctx->pc = 0x261c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x261c58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x261c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x261c5c: 0x8fac02dc  lw          $t4, 0x2DC($sp)
    ctx->pc = 0x261c5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x261c60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x261c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x261c64: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x261c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261c68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x261c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261c6c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x261c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x261c70: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x261c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_261c74:
    // 0x261c74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x261c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261c78: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x261c78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x261c7c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261c80: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261c84: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x261c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x261c88: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261c88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x261c8c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x261C8Cu;
    {
        const bool branch_taken_0x261c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C8Cu;
        // 0x261c90: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c8c) {
            ctx->pc = 0x261F4Cu;
            goto label_261f4c;
        }
    }
    ctx->pc = 0x261C94u;
label_261c94:
    // 0x261c94: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x261c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x261c98: 0x44000ad  bltz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x261C98u;
    {
        const bool branch_taken_0x261c98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x261C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C98u;
        // 0x261c9c: 0x8fac02c0  lw          $t4, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c98) {
            ctx->pc = 0x261F50u;
            goto label_261f50;
        }
    }
    ctx->pc = 0x261CA0u;
    // 0x261ca0: 0x3c0d0038  lui         $t5, 0x38
    ctx->pc = 0x261ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)56 << 16));
    // 0x261ca4: 0x0  nop
    ctx->pc = 0x261ca4u;
    // NOP
label_261ca8:
    // 0x261ca8: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261cac: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x261cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x261cb0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x261cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x261cb4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x261cb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261cb8: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x261cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261cbc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x261cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x261cc0: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x261cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x261cc4: 0x354afffc  ori         $t2, $t2, 0xFFFC
    ctx->pc = 0x261cc4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65532);
    // 0x261cc8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x261cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x261ccc: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x261cccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x261cd0: 0x600013  mtlo        $v1
    ctx->pc = 0x261cd0u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x261cd4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x261cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x261cd8: 0x72824000  madd        $t0, $s4, $v0
    ctx->pc = 0x261cd8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x261cdc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x261cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x261ce0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261ce4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x261ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x261ce8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x261ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x261cec: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x261cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x261cf0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261cf4: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x261cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261cf8: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261cfc: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x261cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x261d00: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261d00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261d04: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x261d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x261d08: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261d0c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261d10: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261d14: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261d14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261d18: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x261d18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x261d1c: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261d20: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x261d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x261d24: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261d28: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x261d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x261d2c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x261d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x261d30: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x261d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x261d34: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x261d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261d38: 0xa46b0000  sh          $t3, 0x0($v1)
    ctx->pc = 0x261d38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261d3c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x261d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x261d40: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x261d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x261d44: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261d44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261d48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x261d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261d4c: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261d50: 0xac1018  mult        $v0, $a1, $t4
    ctx->pc = 0x261d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x261d54: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x261d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x261d58: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x261d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x261d5c: 0x5e2821  addu        $a1, $v0, $fp
    ctx->pc = 0x261d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x261d60: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261d64: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261d68: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261d6c: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261d70: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x261d70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x261d74: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261d74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261d78: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261d7c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x261d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x261d80: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x261d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x261d84: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x261d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261d88: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x261d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x261d8c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x261d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x261d90: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x261d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x261d94: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x261d94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261d98: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x261d98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x261d9c: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x261d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x261da0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x261da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x261da4: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x261da4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261da8: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x261da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x261dac: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261db0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x261db0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x261db4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261db8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261dbc: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261dc0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x261dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x261dc4: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261dc8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261dcc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x261dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x261dd0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261dd4: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x261dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x261dd8: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261ddc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x261ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x261de0: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x261de0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261de4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x261de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x261de8: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261de8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261dec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x261decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x261df0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261df4: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x261df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x261df8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261dfc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x261dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261e00: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261e00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x261e04: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x261e04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x261e08: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x261e08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261e0c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261e10: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x261e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x261e14: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x261e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261e18: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x261e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x261e1c: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x261e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x261e20: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x261e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x261e24: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x261e24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261e28: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x261e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x261e2c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x261e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x261e30: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x261e30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x261e34: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x261e34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261e38: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x261e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x261e3c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261e40: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x261e40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x261e44: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x261e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x261e48: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x261e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261e4c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x261e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x261e50: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x261e50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x261e54: 0x14a70017  bne         $a1, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x261E54u;
    {
        const bool branch_taken_0x261e54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x261E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E54u;
        // 0x261e58: 0xaf8693a0  sw          $a2, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e54) {
            ctx->pc = 0x261EB4u;
            goto label_261eb4;
        }
    }
    ctx->pc = 0x261E5Cu;
    // 0x261e5c: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x261e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261e60: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x261e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261e64: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x261e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x261e68: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x261e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x261e6c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x261e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x261e70: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x261e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x261e74: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x261e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x261e78: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x261e78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x261e7c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x261e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x261e80: 0xa46b0000  sh          $t3, 0x0($v1)
    ctx->pc = 0x261e80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261e84: 0xac2818  mult        $a1, $a1, $t4
    ctx->pc = 0x261e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x261e88: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x261e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x261e8c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x261e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x261e90: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x261e90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261e94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x261e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261e98: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x261e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x261e9c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261ea0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x261ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x261ea4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261ea8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x261ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x261eac: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x261eacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x261eb0: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x261eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_261eb4:
    // 0x261eb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x261eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x261eb8: 0x4600015  bltz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x261EB8u;
    {
        const bool branch_taken_0x261eb8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x261EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EB8u;
        // 0x261ebc: 0x8fa502c8  lw          $a1, 0x2C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261eb8) {
            ctx->pc = 0x261F10u;
            goto label_261f10;
        }
    }
    ctx->pc = 0x261EC0u;
    // 0x261ec0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x261ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x261ec4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x261ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x261ec8: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x261ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x261ecc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x261eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261ed0: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x261ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261ed4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x261ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261ed8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x261ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x261edc: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x261edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x261ee0: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x261ee0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x261ee4: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x261ee4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x261ee8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x261ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x261eec: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x261eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x261ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261ef4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x261ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x261ef8: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x261ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261efc: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261f00: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x261f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261f04: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x261f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x261f08: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x261f08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x261f0c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x261f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_261f10:
    // 0x261f10: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261f14: 0x25a40460  addiu       $a0, $t5, 0x460
    ctx->pc = 0x261f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1120));
    // 0x261f18: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x261f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x261f1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x261f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x261f20: 0xa0490003  sb          $t1, 0x3($v0)
    ctx->pc = 0x261f20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x261f24: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x261f24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x261f28: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x261f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x261f2c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x261f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x261f30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x261f34: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x261f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x261f38: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x261f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x261f3c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x261f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x261f40: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x261f40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x261f44: 0x4a1ff58  bgez        $a1, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x261F44u;
    {
        const bool branch_taken_0x261f44 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x261F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F44u;
        // 0x261f48: 0xaf8493a0  sw          $a0, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f44) {
            ctx->pc = 0x261CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261ca8;
        }
    }
    ctx->pc = 0x261F4Cu;
label_261f4c:
    // 0x261f4c: 0x8fac02c0  lw          $t4, 0x2C0($sp)
    ctx->pc = 0x261f4cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_261f50:
    // 0x261f50: 0x158002a7  bnez        $t4, . + 4 + (0x2A7 << 2)
    ctx->pc = 0x261F50u;
    {
        const bool branch_taken_0x261f50 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x261F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F50u;
        // 0x261f54: 0x8fa402c4  lw          $a0, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f50) {
            ctx->pc = 0x2629F0u;
            goto label_2629f0;
        }
    }
    ctx->pc = 0x261F58u;
    // 0x261f58: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x261f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x261f5c: 0x80620006  lb          $v0, 0x6($v1)
    ctx->pc = 0x261f5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x261f60: 0x184002a3  blez        $v0, . + 4 + (0x2A3 << 2)
    ctx->pc = 0x261F60u;
    {
        const bool branch_taken_0x261f60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x261F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F60u;
        // 0x261f64: 0x90650006  lbu         $a1, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f60) {
            ctx->pc = 0x2629F0u;
            goto label_2629f0;
        }
    }
    ctx->pc = 0x261F68u;
    // 0x261f68: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x261f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x261f6c: 0x8fa402c4  lw          $a0, 0x2C4($sp)
    ctx->pc = 0x261f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x261f70: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x261f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x261f74: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x261F74u;
    {
        const bool branch_taken_0x261f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F74u;
        // 0x261f78: 0x8c920010  lw          $s2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f74) {
            ctx->pc = 0x262250u;
            goto label_262250;
        }
    }
    ctx->pc = 0x261F7Cu;
    // 0x261f7c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x261f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x261f80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x261f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x261f84: 0x244226c0  addiu       $v0, $v0, 0x26C0
    ctx->pc = 0x261f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    // 0x261f88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x261f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261f8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x261f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261f90: 0x800008  jr          $a0
    ctx->pc = 0x261F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261F98u: goto label_261f98;
            case 0x261FBCu: goto label_261fbc;
            case 0x262040u: goto label_262040;
            case 0x2620ECu: goto label_2620ec;
            case 0x262190u: goto label_262190;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261F90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x261F98u;
label_261f98:
    // 0x261f98: 0x8ea20088  lw          $v0, 0x88($s5)
    ctx->pc = 0x261f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x261f9c: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x261F9Cu;
    {
        const bool branch_taken_0x261f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F9Cu;
        // 0x261fa0: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f9c) {
            ctx->pc = 0x262254u;
            goto label_262254;
        }
    }
    ctx->pc = 0x261FA4u;
    // 0x261fa4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x261fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x261fa8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x261fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x261fac: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x261FACu;
    SET_GPR_U32(ctx, 31, 0x261FB4u);
    ctx->pc = 0x261FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261FACu;
    // 0x261fb0: 0x8c4506e8  lw          $a1, 0x6E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x261FACu, 0x261FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FB4u;
label_261fb4:
    // 0x261fb4: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x261FB4u;
    {
        const bool branch_taken_0x261fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FB4u;
        // 0x261fb8: 0x8fac02c4  lw          $t4, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fb4) {
            ctx->pc = 0x26224Cu;
            goto label_26224c;
        }
    }
    ctx->pc = 0x261FBCu;
label_261fbc:
    // 0x261fbc: 0xc6af004c  lwc1        $f15, 0x4C($s5)
    ctx->pc = 0x261fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x261fc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x261fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261fc4: 0xc7808380  lwc1        $f0, -0x7C80($gp)
    ctx->pc = 0x261fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261fc8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x261fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x261fcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261fd0: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x261fd0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x261fd4: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x261fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x261fd8: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x261fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x261fdc: 0x0  nop
    ctx->pc = 0x261fdcu;
    // NOP
    // 0x261fe0: 0x0  nop
    ctx->pc = 0x261fe0u;
    // NOP
    // 0x261fe4: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x261fe4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x261fe8: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x261FE8u;
    SET_GPR_U32(ctx, 31, 0x261FF0u);
    ctx->pc = 0x261FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261FE8u;
    // 0x261fec: 0xc6ae0038  lwc1        $f14, 0x38($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x261FE8u, 0x261FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FF0u;
label_261ff0:
    // 0x261ff0: 0x8ea30088  lw          $v1, 0x88($s5)
    ctx->pc = 0x261ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x261ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261ff8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x261FF8u;
    {
        const bool branch_taken_0x261ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x261FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FF8u;
        // 0x261ffc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ff8) {
            ctx->pc = 0x262010u;
            goto label_262010;
        }
    }
    ctx->pc = 0x262000u;
    // 0x262000: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x262000u;
    {
        const bool branch_taken_0x262000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262000u;
        // 0x262004: 0x8fa202c4  lw          $v0, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262000) {
            ctx->pc = 0x26202Cu;
            goto label_26202c;
        }
    }
    ctx->pc = 0x262008u;
    // 0x262008: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x262008u;
    {
        const bool branch_taken_0x262008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262008u;
        // 0x26200c: 0x90450006  lbu         $a1, 0x6($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262008) {
            ctx->pc = 0x262250u;
            goto label_262250;
        }
    }
    ctx->pc = 0x262010u;
label_262010:
    // 0x262010: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x262010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x262014: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x262014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262018: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x262018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26201c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26201Cu;
    SET_GPR_U32(ctx, 31, 0x262024u);
    ctx->pc = 0x262020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26201Cu;
    // 0x262020: 0x8c4506e8  lw          $a1, 0x6E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26201Cu, 0x262024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262024u;
label_262024:
    // 0x262024: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x262024u;
    {
        const bool branch_taken_0x262024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262024u;
        // 0x262028: 0x8fa302c4  lw          $v1, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262024) {
            ctx->pc = 0x262204u;
            goto label_262204;
        }
    }
    ctx->pc = 0x26202Cu;
label_26202c:
    // 0x26202c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x26202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x262030: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x262030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262034: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x262034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262038: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x262038u;
    {
        const bool branch_taken_0x262038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262038u;
        // 0x26203c: 0x8c4506e0  lw          $a1, 0x6E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262038) {
            ctx->pc = 0x26221Cu;
            goto label_26221c;
        }
    }
    ctx->pc = 0x262040u;
label_262040:
    // 0x262040: 0xc7818384  lwc1        $f1, -0x7C7C($gp)
    ctx->pc = 0x262040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262044: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x262044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262048: 0xc6af0048  lwc1        $f15, 0x48($s5)
    ctx->pc = 0x262048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x26204c: 0xc6b0004c  lwc1        $f16, 0x4C($s5)
    ctx->pc = 0x26204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x262050: 0xc6b10058  lwc1        $f17, 0x58($s5)
    ctx->pc = 0x262050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x262054: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x262054u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x262058: 0x46018402  mul.s       $f16, $f16, $f1
    ctx->pc = 0x262058u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x26205c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26205cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x262060: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262064: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x262064u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x262068: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x262068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26206c: 0x0  nop
    ctx->pc = 0x26206cu;
    // NOP
    // 0x262070: 0x0  nop
    ctx->pc = 0x262070u;
    // NOP
    // 0x262074: 0x46007bc3  div.s       $f15, $f15, $f0
    ctx->pc = 0x262074u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[0];
    // 0x262078: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x262078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26207c: 0x0  nop
    ctx->pc = 0x26207cu;
    // NOP
    // 0x262080: 0x0  nop
    ctx->pc = 0x262080u;
    // NOP
    // 0x262084: 0x46008403  div.s       $f16, $f16, $f0
    ctx->pc = 0x262084u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[0];
    // 0x262088: 0x0  nop
    ctx->pc = 0x262088u;
    // NOP
    // 0x26208c: 0x0  nop
    ctx->pc = 0x26208cu;
    // NOP
    // 0x262090: 0x46008c43  div.s       $f17, $f17, $f0
    ctx->pc = 0x262090u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[0];
    // 0x262094: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x262094u;
    SET_GPR_U32(ctx, 31, 0x26209Cu);
    ctx->pc = 0x262098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262094u;
    // 0x262098: 0xc6ae0038  lwc1        $f14, 0x38($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x262094u, 0x26209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26209Cu;
label_26209c:
    // 0x26209c: 0x8ea30088  lw          $v1, 0x88($s5)
    ctx->pc = 0x26209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x2620a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2620a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2620a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2620A4u;
    {
        const bool branch_taken_0x2620a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2620A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620A4u;
        // 0x2620a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620a4) {
            ctx->pc = 0x2620BCu;
            goto label_2620bc;
        }
    }
    ctx->pc = 0x2620ACu;
    // 0x2620ac: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2620ACu;
    {
        const bool branch_taken_0x2620ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2620B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620ACu;
        // 0x2620b0: 0x8fac02c4  lw          $t4, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620ac) {
            ctx->pc = 0x2620D0u;
            goto label_2620d0;
        }
    }
    ctx->pc = 0x2620B4u;
    // 0x2620b4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2620B4u;
    {
        const bool branch_taken_0x2620b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620B4u;
        // 0x2620b8: 0x91850006  lbu         $a1, 0x6($t4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620b4) {
            ctx->pc = 0x262250u;
            goto label_262250;
        }
    }
    ctx->pc = 0x2620BCu;
label_2620bc:
    // 0x2620bc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2620bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2620c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2620c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2620c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2620c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620c8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2620C8u;
    {
        const bool branch_taken_0x2620c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620C8u;
        // 0x2620cc: 0x8c4506e8  lw          $a1, 0x6E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620c8) {
            ctx->pc = 0x26217Cu;
            goto label_26217c;
        }
    }
    ctx->pc = 0x2620D0u;
label_2620d0:
    // 0x2620d0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2620d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2620d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2620d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2620d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2620d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620dc: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2620DCu;
    SET_GPR_U32(ctx, 31, 0x2620E4u);
    ctx->pc = 0x2620E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2620DCu;
    // 0x2620e0: 0x8c4506e0  lw          $a1, 0x6E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2620DCu, 0x2620E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2620E4u;
label_2620e4:
    // 0x2620e4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2620E4u;
    {
        const bool branch_taken_0x2620e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620E4u;
        // 0x2620e8: 0x8fa302c4  lw          $v1, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620e4) {
            ctx->pc = 0x262204u;
            goto label_262204;
        }
    }
    ctx->pc = 0x2620ECu;
label_2620ec:
    // 0x2620ec: 0xc6af004c  lwc1        $f15, 0x4C($s5)
    ctx->pc = 0x2620ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2620f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2620f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620f4: 0xc7808388  lwc1        $f0, -0x7C78($gp)
    ctx->pc = 0x2620f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2620f8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2620f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2620fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2620fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262100: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x262100u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x262104: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x262104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262108: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x262108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26210c: 0x0  nop
    ctx->pc = 0x26210cu;
    // NOP
    // 0x262110: 0x0  nop
    ctx->pc = 0x262110u;
    // NOP
    // 0x262114: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x262114u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x262118: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x262118u;
    SET_GPR_U32(ctx, 31, 0x262120u);
    ctx->pc = 0x26211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262118u;
    // 0x26211c: 0xc6ae0038  lwc1        $f14, 0x38($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x262118u, 0x262120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262120u;
label_262120:
    // 0x262120: 0x8ea30088  lw          $v1, 0x88($s5)
    ctx->pc = 0x262120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x262124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262128: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262128u;
    {
        const bool branch_taken_0x262128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262128u;
        // 0x26212c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262128) {
            ctx->pc = 0x262140u;
            goto label_262140;
        }
    }
    ctx->pc = 0x262130u;
    // 0x262130: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x262130u;
    {
        const bool branch_taken_0x262130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262130u;
        // 0x262134: 0x8fa402c4  lw          $a0, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262130) {
            ctx->pc = 0x26216Cu;
            goto label_26216c;
        }
    }
    ctx->pc = 0x262138u;
    // 0x262138: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x262138u;
    {
        const bool branch_taken_0x262138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262138u;
        // 0x26213c: 0x90850006  lbu         $a1, 0x6($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262138) {
            ctx->pc = 0x262250u;
            goto label_262250;
        }
    }
    ctx->pc = 0x262140u;
label_262140:
    // 0x262140: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x262140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x262144: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x262144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26214c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26214cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262150: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x262150u;
    SET_GPR_U32(ctx, 31, 0x262158u);
    ctx->pc = 0x262154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262150u;
    // 0x262154: 0x8c4506e4  lw          $a1, 0x6E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x262150u, 0x262158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262158u;
label_262158:
    // 0x262158: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x262158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x26215c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262160: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x262160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262164: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x262164u;
    {
        const bool branch_taken_0x262164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262164u;
        // 0x262168: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262164) {
            ctx->pc = 0x262240u;
            goto label_262240;
        }
    }
    ctx->pc = 0x26216Cu;
label_26216c:
    // 0x26216c: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x26216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x262170: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x262170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262174: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262178: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x262178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26217c:
    // 0x26217c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26217Cu;
    SET_GPR_U32(ctx, 31, 0x262184u);
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26217Cu, 0x262184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262184u;
label_262184:
    // 0x262184: 0x8fa202c4  lw          $v0, 0x2C4($sp)
    ctx->pc = 0x262184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x262188: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x262188u;
    {
        const bool branch_taken_0x262188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262188u;
        // 0x26218c: 0x90450006  lbu         $a1, 0x6($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262188) {
            ctx->pc = 0x262250u;
            goto label_262250;
        }
    }
    ctx->pc = 0x262190u;
label_262190:
    // 0x262190: 0xc6af004c  lwc1        $f15, 0x4C($s5)
    ctx->pc = 0x262190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x262194: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x262194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262198: 0xc780838c  lwc1        $f0, -0x7C74($gp)
    ctx->pc = 0x262198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26219c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26219cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2621a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2621a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2621a4: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2621a4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2621a8: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x2621a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2621ac: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x2621acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2621b0: 0x0  nop
    ctx->pc = 0x2621b0u;
    // NOP
    // 0x2621b4: 0x0  nop
    ctx->pc = 0x2621b4u;
    // NOP
    // 0x2621b8: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x2621b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x2621bc: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x2621BCu;
    SET_GPR_U32(ctx, 31, 0x2621C4u);
    ctx->pc = 0x2621C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621BCu;
    // 0x2621c0: 0xc6ae0038  lwc1        $f14, 0x38($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x2621BCu, 0x2621C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621C4u;
label_2621c4:
    // 0x2621c4: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2621c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2621c8: 0x26a50064  addiu       $a1, $s5, 0x64
    ctx->pc = 0x2621c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    // 0x2621cc: 0xc6ac005c  lwc1        $f12, 0x5C($s5)
    ctx->pc = 0x2621ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2621d0: 0xc0ad70a  jal         func_2B5C28
    ctx->pc = 0x2621D0u;
    SET_GPR_U32(ctx, 31, 0x2621D8u);
    ctx->pc = 0x2621D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621D0u;
    // 0x2621d4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C28u, 0x2621D0u, 0x2621D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621D8u;
label_2621d8:
    // 0x2621d8: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2621d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2621dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2621dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2621e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621e4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2621E4u;
    SET_GPR_U32(ctx, 31, 0x2621ECu);
    ctx->pc = 0x2621E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621E4u;
    // 0x2621e8: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2621E4u, 0x2621ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621ECu;
label_2621ec:
    // 0x2621ec: 0x8ea30088  lw          $v1, 0x88($s5)
    ctx->pc = 0x2621ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x2621f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2621f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2621f4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2621F4u;
    {
        const bool branch_taken_0x2621f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2621F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621F4u;
        // 0x2621f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621f4) {
            ctx->pc = 0x26220Cu;
            goto label_26220c;
        }
    }
    ctx->pc = 0x2621FCu;
    // 0x2621fc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2621FCu;
    {
        const bool branch_taken_0x2621fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621FCu;
        // 0x262200: 0x8fa302c4  lw          $v1, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621fc) {
            ctx->pc = 0x262230u;
            goto label_262230;
        }
    }
    ctx->pc = 0x262204u;
label_262204:
    // 0x262204: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x262204u;
    {
        const bool branch_taken_0x262204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262204u;
        // 0x262208: 0x90650006  lbu         $a1, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262204) {
            ctx->pc = 0x262250u;
            goto label_262250;
        }
    }
    ctx->pc = 0x26220Cu;
label_26220c:
    // 0x26220c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x26220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x262210: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x262210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262214: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x262214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262218: 0x8c4506e8  lw          $a1, 0x6E8($v0)
    ctx->pc = 0x262218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
label_26221c:
    // 0x26221c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26221Cu;
    SET_GPR_U32(ctx, 31, 0x262224u);
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26221Cu, 0x262224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262224u;
label_262224:
    // 0x262224: 0x8fa402c4  lw          $a0, 0x2C4($sp)
    ctx->pc = 0x262224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x262228: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x262228u;
    {
        const bool branch_taken_0x262228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262228u;
        // 0x26222c: 0x90850006  lbu         $a1, 0x6($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262228) {
            ctx->pc = 0x262250u;
            goto label_262250;
        }
    }
    ctx->pc = 0x262230u;
label_262230:
    // 0x262230: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x262230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x262234: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x262234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262238: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x262238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26223c: 0x8c4506e0  lw          $a1, 0x6E0($v0)
    ctx->pc = 0x26223cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
label_262240:
    // 0x262240: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x262240u;
    SET_GPR_U32(ctx, 31, 0x262248u);
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x262240u, 0x262248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262248u;
label_262248:
    // 0x262248: 0x8fac02c4  lw          $t4, 0x2C4($sp)
    ctx->pc = 0x262248u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_26224c:
    // 0x26224c: 0x91850006  lbu         $a1, 0x6($t4)
    ctx->pc = 0x26224cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
label_262250:
    // 0x262250: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x262250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_262254:
    // 0x262254: 0x184001e5  blez        $v0, . + 4 + (0x1E5 << 2)
    ctx->pc = 0x262254u;
    {
        const bool branch_taken_0x262254 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x262258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262254u;
        // 0x262258: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262254) {
            ctx->pc = 0x2629ECu;
            goto label_2629ec;
        }
    }
    ctx->pc = 0x26225Cu;
    // 0x26225c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x26225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x262260: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x262260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
    // 0x262264: 0x0  nop
    ctx->pc = 0x262264u;
    // NOP
label_262268:
    // 0x262268: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x262268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26226c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262270: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x262270u;
    {
        const bool branch_taken_0x262270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262270u;
        // 0x262274: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262270) {
            ctx->pc = 0x262290u;
            goto label_262290;
        }
    }
    ctx->pc = 0x262278u;
    // 0x262278: 0x26430098  addiu       $v1, $s2, 0x98
    ctx->pc = 0x262278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x26227c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x26227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x262280: 0xafa302f0  sw          $v1, 0x2F0($sp)
    ctx->pc = 0x262280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 3));
    // 0x262284: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x262284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x262288: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x262288u;
    {
        const bool branch_taken_0x262288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262288u;
        // 0x26228c: 0xa2420094  sb          $v0, 0x94($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262288) {
            ctx->pc = 0x2629D0u;
            goto label_2629d0;
        }
    }
    ctx->pc = 0x262290u;
label_262290:
    // 0x262290: 0xc0a9b6c  jal         func_2A6DB0
    ctx->pc = 0x262290u;
    SET_GPR_U32(ctx, 31, 0x262298u);
    ctx->pc = 0x262294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262290u;
    // 0x262294: 0xafa402e4  sw          $a0, 0x2E4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6DB0u, 0x262290u, 0x262298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262298u;
label_262298:
    // 0x262298: 0x504001cb  beql        $v0, $zero, . + 4 + (0x1CB << 2)
    ctx->pc = 0x262298u;
    {
        const bool branch_taken_0x262298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262298) {
            ctx->pc = 0x26229Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262298u;
            // 0x26229c: 0x26520098  addiu       $s2, $s2, 0x98 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2629C8u;
            goto label_2629c8;
        }
    }
    ctx->pc = 0x2622A0u;
    // 0x2622a0: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2622a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2622a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2622a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2622a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2622A8u;
    {
        const bool branch_taken_0x2622a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2622ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622A8u;
        // 0x2622ac: 0x8fa502bc  lw          $a1, 0x2BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622a8) {
            ctx->pc = 0x2622D0u;
            goto label_2622d0;
        }
    }
    ctx->pc = 0x2622B0u;
    // 0x2622b0: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x2622b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2622b4: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x2622b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2622b8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2622b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2622bc: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2622BCu;
    SET_GPR_U32(ctx, 31, 0x2622C4u);
    ctx->pc = 0x2622C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622BCu;
    // 0x2622c0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2622BCu, 0x2622C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622C4u;
label_2622c4:
    // 0x2622c4: 0x8fac02e8  lw          $t4, 0x2E8($sp)
    ctx->pc = 0x2622c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2622c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2622C8u;
    {
        const bool branch_taken_0x2622c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2622CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622C8u;
        // 0x2622cc: 0xafac02e0  sw          $t4, 0x2E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622c8) {
            ctx->pc = 0x2622D8u;
            goto label_2622d8;
        }
    }
    ctx->pc = 0x2622D0u;
label_2622d0:
    // 0x2622d0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2622d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2622d4: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x2622d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_2622d8:
    // 0x2622d8: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x2622d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2622dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2622dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2622e0: 0x26430098  addiu       $v1, $s2, 0x98
    ctx->pc = 0x2622e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x2622e4: 0x27b10190  addiu       $s1, $sp, 0x190
    ctx->pc = 0x2622e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2622e8: 0x264c0044  addiu       $t4, $s2, 0x44
    ctx->pc = 0x2622e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x2622ec: 0x27aa0194  addiu       $t2, $sp, 0x194
    ctx->pc = 0x2622ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2622f0: 0x264b0048  addiu       $t3, $s2, 0x48
    ctx->pc = 0x2622f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x2622f4: 0x27a80198  addiu       $t0, $sp, 0x198
    ctx->pc = 0x2622f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x2622f8: 0x2649004c  addiu       $t1, $s2, 0x4C
    ctx->pc = 0x2622f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x2622fc: 0xafb002ec  sw          $s0, 0x2EC($sp)
    ctx->pc = 0x2622fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 16));
    // 0x262300: 0xafa302f0  sw          $v1, 0x2F0($sp)
    ctx->pc = 0x262300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 3));
    // 0x262304: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x262304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x262308: 0x27b0010c  addiu       $s0, $sp, 0x10C
    ctx->pc = 0x262308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x26230c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x26230cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262310: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x262310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262314: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x262314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262318: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x262318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26231c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26231cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262320: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x262320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262324: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x262324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_262328:
    // 0x262328: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x262328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26232c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x26232cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x262330: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x262330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x262334: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x262334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x262338: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x262338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x26233c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x26233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262340: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x262340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x262344: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x262344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x262348: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x262348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x26234c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x26234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262350: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x262350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x262354: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x262354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x262358: 0x681fff3  bgez        $s4, . + 4 + (-0xD << 2)
    ctx->pc = 0x262358u;
    {
        const bool branch_taken_0x262358 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x26235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262358u;
        // 0x26235c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262358) {
            ctx->pc = 0x262328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262328;
        }
    }
    ctx->pc = 0x262360u;
    // 0x262360: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x262360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x262364: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x262364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x262368: 0x25080050  addiu       $t0, $t0, 0x50
    ctx->pc = 0x262368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x26236c: 0x2527000c  addiu       $a3, $t1, 0xC
    ctx->pc = 0x26236cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x262370: 0x25460050  addiu       $a2, $t2, 0x50
    ctx->pc = 0x262370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
    // 0x262374: 0x2565000c  addiu       $a1, $t3, 0xC
    ctx->pc = 0x262374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x262378: 0x2584000c  addiu       $a0, $t4, 0xC
    ctx->pc = 0x262378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x26237c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26237cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262380: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x262380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x262384: 0x0  nop
    ctx->pc = 0x262384u;
    // NOP
label_262388:
    // 0x262388: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x262388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26238c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26238cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x262390: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x262390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262394: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x262394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x262398: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x262398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26239c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26239cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2623a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2623a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2623a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2623a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2623a8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2623a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2623ac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2623acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2623b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2623b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2623b4: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x2623b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2623b8: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2623b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2623bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2623bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2623c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2623c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2623c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2623c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2623c8: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2623c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2623cc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2623ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2623d0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2623d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2623d4: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x2623d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2623d8: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x2623d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2623dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2623dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2623e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2623e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2623e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2623e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2623e8: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2623e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2623ec: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2623ECu;
    {
        const bool branch_taken_0x2623ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2623F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623ECu;
        // 0x2623f0: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623ec) {
            ctx->pc = 0x262388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262388;
        }
    }
    ctx->pc = 0x2623F4u;
    // 0x2623f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2623f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2623f8: 0x11a2000c  beq         $t5, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2623F8u;
    {
        const bool branch_taken_0x2623f8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        ctx->pc = 0x2623FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623F8u;
        // 0x2623fc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623f8) {
            ctx->pc = 0x26242Cu;
            goto label_26242c;
        }
    }
    ctx->pc = 0x262400u;
    // 0x262400: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x262400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x262404: 0xa2420094  sb          $v0, 0x94($s2)
    ctx->pc = 0x262404u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 148), (uint8_t)GPR_U32(ctx, 2));
    // 0x262408: 0x27a602b4  addiu       $a2, $sp, 0x2B4
    ctx->pc = 0x262408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
    // 0x26240c: 0xc0a9f32  jal         func_2A7CC8
    ctx->pc = 0x26240Cu;
    SET_GPR_U32(ctx, 31, 0x262414u);
    ctx->pc = 0x262410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26240Cu;
    // 0x262410: 0x8ea4000c  lw          $a0, 0xC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CC8u, 0x26240Cu, 0x262414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262414u;
label_262414:
    // 0x262414: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x262414u;
    {
        const bool branch_taken_0x262414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262414u;
        // 0x262418: 0x8fa202b0  lw          $v0, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262414) {
            ctx->pc = 0x262480u;
            goto label_262480;
        }
    }
    ctx->pc = 0x26241Cu;
    // 0x26241c: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x26241cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    // 0x262420: 0x93a302b4  lbu         $v1, 0x2B4($sp)
    ctx->pc = 0x262420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x262424: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x262424u;
    {
        const bool branch_taken_0x262424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262424u;
        // 0x262428: 0xa2430094  sb          $v1, 0x94($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 148), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262424) {
            ctx->pc = 0x262480u;
            goto label_262480;
        }
    }
    ctx->pc = 0x26242Cu;
label_26242c:
    // 0x26242c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x26242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x262430: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x262430u;
    {
        const bool branch_taken_0x262430 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x262430) {
            ctx->pc = 0x262480u;
            goto label_262480;
        }
    }
    ctx->pc = 0x262438u;
    // 0x262438: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x262438u;
    SET_GPR_U32(ctx, 31, 0x262440u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x262438u, 0x262440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262440u;
label_262440:
    // 0x262440: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x262440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x262444: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x262444u;
    {
        const bool branch_taken_0x262444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262444) {
            ctx->pc = 0x262448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262444u;
            // 0x262448: 0x92420094  lbu         $v0, 0x94($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262458u;
            goto label_262458;
        }
    }
    ctx->pc = 0x26244Cu;
    // 0x26244c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x26244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x262450: 0xa2420094  sb          $v0, 0x94($s2)
    ctx->pc = 0x262450u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 148), (uint8_t)GPR_U32(ctx, 2));
    // 0x262454: 0x92420094  lbu         $v0, 0x94($s2)
    ctx->pc = 0x262454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
label_262458:
    // 0x262458: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x262458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26245c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x26245cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x262460: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x262460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x262464: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x262464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x262468: 0xa2430095  sb          $v1, 0x95($s2)
    ctx->pc = 0x262468u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x26246c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x26246cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x262470: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x262470u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x262474: 0x28430100  slti        $v1, $v0, 0x100
    ctx->pc = 0x262474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x262478: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x262478u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x26247c: 0xa2420094  sb          $v0, 0x94($s2)
    ctx->pc = 0x26247cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 148), (uint8_t)GPR_U32(ctx, 2));
label_262480:
    // 0x262480: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x262480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x262484: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x262484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x262488: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x262488u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26248c: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x26248cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262490: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x262490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262494: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x262494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262498:
    // 0x262498: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x262498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x26249c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26249cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2624a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2624a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2624a4: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x2624A4u;
    SET_GPR_U32(ctx, 31, 0x2624ACu);
    ctx->pc = 0x2624A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624A4u;
    // 0x2624a8: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x2624A4u, 0x2624ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624ACu;
label_2624ac:
    // 0x2624ac: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x2624acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2624b0: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x2624b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2624b4: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2624b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2624b8: 0x0  nop
    ctx->pc = 0x2624b8u;
    // NOP
    // 0x2624bc: 0x45020136  bc1fl       . + 4 + (0x136 << 2)
    ctx->pc = 0x2624BCu;
    {
        const bool branch_taken_0x2624bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2624bc) {
            ctx->pc = 0x2624C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2624BCu;
            // 0x2624c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262998u;
            goto label_262998;
        }
    }
    ctx->pc = 0x2624C4u;
    // 0x2624c4: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2624c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2624c8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2624c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2624cc: 0x0  nop
    ctx->pc = 0x2624ccu;
    // NOP
    // 0x2624d0: 0x45000130  bc1f        . + 4 + (0x130 << 2)
    ctx->pc = 0x2624D0u;
    {
        const bool branch_taken_0x2624d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2624D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624D0u;
        // 0x2624d4: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624d0) {
            ctx->pc = 0x262994u;
            goto label_262994;
        }
    }
    ctx->pc = 0x2624D8u;
    // 0x2624d8: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x2624d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2624dc: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2624dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2624e0: 0x0  nop
    ctx->pc = 0x2624e0u;
    // NOP
    // 0x2624e4: 0x4502012c  bc1fl       . + 4 + (0x12C << 2)
    ctx->pc = 0x2624E4u;
    {
        const bool branch_taken_0x2624e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2624e4) {
            ctx->pc = 0x2624E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2624E4u;
            // 0x2624e8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262998u;
            goto label_262998;
        }
    }
    ctx->pc = 0x2624ECu;
    // 0x2624ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2624ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2624f0: 0x0  nop
    ctx->pc = 0x2624f0u;
    // NOP
    // 0x2624f4: 0x45020128  bc1fl       . + 4 + (0x128 << 2)
    ctx->pc = 0x2624F4u;
    {
        const bool branch_taken_0x2624f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2624f4) {
            ctx->pc = 0x2624F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2624F4u;
            // 0x2624f8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262998u;
            goto label_262998;
        }
    }
    ctx->pc = 0x2624FCu;
    // 0x2624fc: 0xc4490108  lwc1        $f9, 0x108($v0)
    ctx->pc = 0x2624fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x262500: 0x46034834  c.lt.s      $f9, $f3
    ctx->pc = 0x262500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262504: 0x0  nop
    ctx->pc = 0x262504u;
    // NOP
    // 0x262508: 0x45020123  bc1fl       . + 4 + (0x123 << 2)
    ctx->pc = 0x262508u;
    {
        const bool branch_taken_0x262508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262508) {
            ctx->pc = 0x26250Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262508u;
            // 0x26250c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262998u;
            goto label_262998;
        }
    }
    ctx->pc = 0x262510u;
    // 0x262510: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x262510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262514: 0x0  nop
    ctx->pc = 0x262514u;
    // NOP
    // 0x262518: 0x4500011e  bc1f        . + 4 + (0x11E << 2)
    ctx->pc = 0x262518u;
    {
        const bool branch_taken_0x262518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262518u;
        // 0x26251c: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262518) {
            ctx->pc = 0x262994u;
            goto label_262994;
        }
    }
    ctx->pc = 0x262520u;
    // 0x262520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262528: 0x248499f0  addiu       $a0, $a0, -0x6610
    ctx->pc = 0x262528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x26252c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x262530: 0x0  nop
    ctx->pc = 0x262530u;
    // NOP
    // 0x262534: 0x0  nop
    ctx->pc = 0x262534u;
    // NOP
    // 0x262538: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x262538u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x26253c: 0xc7888390  lwc1        $f8, -0x7C70($gp)
    ctx->pc = 0x26253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x262540: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x262540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x262544: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x262544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x262548: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x262548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26254c: 0xc4860024  lwc1        $f6, 0x24($a0)
    ctx->pc = 0x26254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x262550: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x262550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x262554: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x262554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x262558: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x262558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x26255c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x26255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x262560: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x262560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x262564: 0x27b10220  addiu       $s1, $sp, 0x220
    ctx->pc = 0x262564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x262568: 0xc483001c  lwc1        $f3, 0x1C($a0)
    ctx->pc = 0x262568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26256c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x26256cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x262570: 0x27b30224  addiu       $s3, $sp, 0x224
    ctx->pc = 0x262570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x262574: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x262574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x262578: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x262578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x26257c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26257cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x262580: 0x27b00228  addiu       $s0, $sp, 0x228
    ctx->pc = 0x262580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x262584: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x262584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262588: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x262588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26258c: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x26258cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x262590: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x262590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x262594: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x262594u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x262598: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x262598u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x26259c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x26259cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2625a0: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2625a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2625a4: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2625a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2625a8: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x2625a8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x2625ac: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x2625acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2625b0: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2625b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2625b4: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2625B4u;
    {
        const bool branch_taken_0x2625b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2625B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625B4u;
        // 0x2625b8: 0xe4470000  swc1        $f7, 0x0($v0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625b4) {
            ctx->pc = 0x26261Cu;
            goto label_26261c;
        }
    }
    ctx->pc = 0x2625BCu;
    // 0x2625bc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2625bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2625c0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2625c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2625c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2625c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2625c8: 0xc4420104  lwc1        $f2, 0x104($v0)
    ctx->pc = 0x2625c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2625cc: 0xc7808394  lwc1        $f0, -0x7C6C($gp)
    ctx->pc = 0x2625ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2625d0: 0x0  nop
    ctx->pc = 0x2625d0u;
    // NOP
    // 0x2625d4: 0x0  nop
    ctx->pc = 0x2625d4u;
    // NOP
    // 0x2625d8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2625d8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2625dc: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2625dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2625e0: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2625E0u;
    SET_GPR_U32(ctx, 31, 0x2625E8u);
    ctx->pc = 0x2625E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625E0u;
    // 0x2625e4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2625E0u, 0x2625E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625E8u;
label_2625e8:
    // 0x2625e8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2625e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2625ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2625ECu;
    {
        const bool branch_taken_0x2625ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2625ec) {
            ctx->pc = 0x262608u;
            goto label_262608;
        }
    }
    ctx->pc = 0x2625F4u;
    // 0x2625f4: 0x4615a002  mul.s       $f0, $f20, $f21
    ctx->pc = 0x2625f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x2625f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2625f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2625fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2625fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x262600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262600u;
    {
        const bool branch_taken_0x262600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262600u;
        // 0x262604: 0x28420008  slti        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262600) {
            ctx->pc = 0x262614u;
            goto label_262614;
        }
    }
    ctx->pc = 0x262608u;
label_262608:
    // 0x262608: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262608u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26260c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26260cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x262610: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x262610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_262614:
    // 0x262614: 0x544000e5  bnel        $v0, $zero, . + 4 + (0xE5 << 2)
    ctx->pc = 0x262614u;
    {
        const bool branch_taken_0x262614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262614) {
            ctx->pc = 0x262618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262614u;
            // 0x262618: 0xafa002e4  sw          $zero, 0x2E4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2629ACu;
            goto label_2629ac;
        }
    }
    ctx->pc = 0x26261Cu;
label_26261c:
    // 0x26261c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x26261Cu;
    {
        const bool branch_taken_0x26261c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x262620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26261Cu;
        // 0x262620: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26261c) {
            ctx->pc = 0x262638u;
            goto label_262638;
        }
    }
    ctx->pc = 0x262624u;
    // 0x262624: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x262624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x262628: 0x240a0019  addiu       $t2, $zero, 0x19
    ctx->pc = 0x262628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x26262c: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x26262cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x262630: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x262630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x262634: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x262634u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
label_262638:
    // 0x262638: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x262638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26263c: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x26263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x262640: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x262640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x262644: 0x8fa602b8  lw          $a2, 0x2B8($sp)
    ctx->pc = 0x262644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x262648: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x262648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26264c: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x26264cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x262650: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x262650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x262654: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x262654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x262658: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x262658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26265c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262660: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x262660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262664: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x262668: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x262668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x26266c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26266cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262670: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x262670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x262674: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262674u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262678: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x262678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x26267c: 0xc0a9b98  jal         func_2A6E60
    ctx->pc = 0x26267Cu;
    SET_GPR_U32(ctx, 31, 0x262684u);
    ctx->pc = 0x262680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26267Cu;
    // 0x262680: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6E60u, 0x26267Cu, 0x262684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262684u;
label_262684:
    // 0x262684: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x262684u;
    {
        const bool branch_taken_0x262684 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x262688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262684u;
        // 0x262688: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262684) {
            ctx->pc = 0x2626A0u;
            goto label_2626a0;
        }
    }
    ctx->pc = 0x26268Cu;
    // 0x26268c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26268cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x262690: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x262690u;
    {
        const bool branch_taken_0x262690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262690u;
        // 0x262694: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262690) {
            ctx->pc = 0x2626B8u;
            goto label_2626b8;
        }
    }
    ctx->pc = 0x262698u;
    // 0x262698: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x262698u;
    {
        const bool branch_taken_0x262698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262698u;
        // 0x26269c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262698) {
            ctx->pc = 0x2626B8u;
            goto label_2626b8;
        }
    }
    ctx->pc = 0x2626A0u;
label_2626a0:
    // 0x2626a0: 0x568200bd  bnel        $s4, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x2626A0u;
    {
        const bool branch_taken_0x2626a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2626a0) {
            ctx->pc = 0x2626A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2626A0u;
            // 0x2626a4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262998u;
            goto label_262998;
        }
    }
    ctx->pc = 0x2626A8u;
    // 0x2626a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2626a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2626ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2626acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2626b0: 0x546200b9  bnel        $v1, $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2626B0u;
    {
        const bool branch_taken_0x2626b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2626b0) {
            ctx->pc = 0x2626B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2626B0u;
            // 0x2626b4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262998u;
            goto label_262998;
        }
    }
    ctx->pc = 0x2626B8u;
label_2626b8:
    // 0x2626b8: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2626b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2626bc: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x2626bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2626c0: 0xc4a50374  lwc1        $f5, 0x374($a1)
    ctx->pc = 0x2626c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2626c4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2626c4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2626c8: 0xe7a50290  swc1        $f5, 0x290($sp)
    ctx->pc = 0x2626c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x2626cc: 0x46052982  mul.s       $f6, $f5, $f5
    ctx->pc = 0x2626ccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2626d0: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x2626d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2626d4: 0xc4a40378  lwc1        $f4, 0x378($a1)
    ctx->pc = 0x2626d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2626d8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2626d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2626dc: 0xe7a40294  swc1        $f4, 0x294($sp)
    ctx->pc = 0x2626dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
    // 0x2626e0: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2626e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2626e4: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2626e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2626e8: 0xc4a2037c  lwc1        $f2, 0x37C($a1)
    ctx->pc = 0x2626e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2626ec: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2626ecu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2626f0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2626f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2626f4: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x2626f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2626f8: 0xe7a20298  swc1        $f2, 0x298($sp)
    ctx->pc = 0x2626f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x2626fc: 0xc6430084  lwc1        $f3, 0x84($s2)
    ctx->pc = 0x2626fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262700: 0x46013300  add.s       $f12, $f6, $f1
    ctx->pc = 0x262700u;
    ctx->f[12] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x262704: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x262704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262708: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x262708u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x26270c: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x26270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262710: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x262710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x262714: 0x0  nop
    ctx->pc = 0x262714u;
    // NOP
    // 0x262718: 0x0  nop
    ctx->pc = 0x262718u;
    // NOP
    // 0x26271c: 0x460c0104  c1          0xC0104
    ctx->pc = 0x26271cu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[12]);
    // 0x262720: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x262720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x262724: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x262724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x262728: 0x46042032  c.eq.s      $f4, $f4
    ctx->pc = 0x262728u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26272c: 0x0  nop
    ctx->pc = 0x26272cu;
    // NOP
    // 0x262730: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x262730u;
    {
        const bool branch_taken_0x262730 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x262734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262730u;
        // 0x262734: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262730) {
            ctx->pc = 0x262748u;
            goto label_262748;
        }
    }
    ctx->pc = 0x262738u;
    // 0x262738: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x262738u;
    SET_GPR_U32(ctx, 31, 0x262740u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x262738u, 0x262740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262740u;
label_262740:
    // 0x262740: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x262740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x262744: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x262744u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_262748:
    // 0x262748: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x262748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x26274c: 0x0  nop
    ctx->pc = 0x26274cu;
    // NOP
    // 0x262750: 0x0  nop
    ctx->pc = 0x262750u;
    // NOP
    // 0x262754: 0x4604a083  div.s       $f2, $f20, $f4
    ctx->pc = 0x262754u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[2] = ctx->f[20] / ctx->f[4];
    // 0x262758: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x262758u;
    {
        const bool branch_taken_0x262758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262758) {
            ctx->pc = 0x26275Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262758u;
            // 0x26275c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2627A0u;
            goto label_2627a0;
        }
    }
    ctx->pc = 0x262760u;
    // 0x262760: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x262760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x262764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262768: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x262768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26276c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x26276Cu;
    {
        const bool branch_taken_0x26276c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26276c) {
            ctx->pc = 0x262794u;
            goto label_262794;
        }
    }
    ctx->pc = 0x262774u;
    // 0x262774: 0x46151040  add.s       $f1, $f2, $f21
    ctx->pc = 0x262774u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
    // 0x262778: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x262778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x26277c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26277cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262780: 0x0  nop
    ctx->pc = 0x262780u;
    // NOP
    // 0x262784: 0x0  nop
    ctx->pc = 0x262784u;
    // NOP
    // 0x262788: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x262788u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x26278c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26278Cu;
    {
        const bool branch_taken_0x26278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26278Cu;
        // 0x262790: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26278c) {
            ctx->pc = 0x2627BCu;
            goto label_2627bc;
        }
    }
    ctx->pc = 0x262794u;
label_262794:
    // 0x262794: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x262794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x262798: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262798u;
    {
        const bool branch_taken_0x262798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262798u;
        // 0x26279c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262798) {
            ctx->pc = 0x2627BCu;
            goto label_2627bc;
        }
    }
    ctx->pc = 0x2627A0u;
label_2627a0:
    // 0x2627a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2627a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2627a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2627a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2627a8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2627a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2627ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2627acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2627b0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2627b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2627b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2627b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2627b8: 0x46150500  add.s       $f20, $f0, $f21
    ctx->pc = 0x2627b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2627bc:
    // 0x2627bc: 0x8fa602b8  lw          $a2, 0x2B8($sp)
    ctx->pc = 0x2627bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2627c0: 0xc0a9c62  jal         func_2A7188
    ctx->pc = 0x2627C0u;
    SET_GPR_U32(ctx, 31, 0x2627C8u);
    ctx->pc = 0x2627C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2627C0u;
    // 0x2627c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7188u, 0x2627C0u, 0x2627C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2627C8u;
label_2627c8:
    // 0x2627c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2627c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2627cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2627ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2627d0: 0xc7818398  lwc1        $f1, -0x7C68($gp)
    ctx->pc = 0x2627d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2627d4: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2627d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2627d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2627d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2627dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2627dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2627e0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2627e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2627e4: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2627E4u;
    SET_GPR_U32(ctx, 31, 0x2627ECu);
    ctx->pc = 0x2627E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2627E4u;
    // 0x2627e8: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2627E4u, 0x2627ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2627ECu;
label_2627ec:
    // 0x2627ec: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2627ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2627f0: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x2627f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2627f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2627f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2627f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2627f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2627fc: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x2627fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x262800: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x262800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x262804: 0x38842  srl         $s1, $v1, 1
    ctx->pc = 0x262804u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x262808: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x262808u;
    {
        const bool branch_taken_0x262808 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x26280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262808u;
        // 0x26280c: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262808) {
            ctx->pc = 0x262820u;
            goto label_262820;
        }
    }
    ctx->pc = 0x262810u;
    // 0x262810: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x262810u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262814: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x262814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x262818: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262818u;
    {
        const bool branch_taken_0x262818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262818u;
        // 0x26281c: 0x92420094  lbu         $v0, 0x94($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262818) {
            ctx->pc = 0x26283Cu;
            goto label_26283c;
        }
    }
    ctx->pc = 0x262820u;
label_262820:
    // 0x262820: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x262820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x262824: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x262824u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x262828: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x262828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26282c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26282cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262830: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x262830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x262834: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x262834u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x262838: 0x92420094  lbu         $v0, 0x94($s2)
    ctx->pc = 0x262838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
label_26283c:
    // 0x26283c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x26283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x262840: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262844: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x262844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x262848: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x262848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x26284c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x26284cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x262850: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x262850u;
    SET_GPR_U32(ctx, 31, 0x262858u);
    ctx->pc = 0x262854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262850u;
    // 0x262854: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x262850u, 0x262858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262858u;
label_262858:
    // 0x262858: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x262858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26285c: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
    ctx->pc = 0x26285Cu;
    {
        const bool branch_taken_0x26285c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x262860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26285Cu;
        // 0x262860: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26285c) {
            ctx->pc = 0x262994u;
            goto label_262994;
        }
    }
    ctx->pc = 0x262864u;
    // 0x262864: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x262864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x262868: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x262868u;
    {
        const bool branch_taken_0x262868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262868u;
        // 0x26286c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262868) {
            ctx->pc = 0x262908u;
            goto label_262908;
        }
    }
    ctx->pc = 0x262870u;
    // 0x262870: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x262870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262874: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x262874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x262878: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x262878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x26287c: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x26287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262880: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x262880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262884: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x262884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x262888: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x262888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26288c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26288Cu;
    {
        const bool branch_taken_0x26288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26288Cu;
        // 0x262890: 0xe7a102a8  swc1        $f1, 0x2A8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26288c) {
            ctx->pc = 0x2628B4u;
            goto label_2628b4;
        }
    }
    ctx->pc = 0x262894u;
    // 0x262894: 0x8fa302bc  lw          $v1, 0x2BC($sp)
    ctx->pc = 0x262894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x262898: 0x27b002a0  addiu       $s0, $sp, 0x2A0
    ctx->pc = 0x262898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x26289c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26289cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2628a0: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2628a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2628a4: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2628A4u;
    SET_GPR_U32(ctx, 31, 0x2628ACu);
    ctx->pc = 0x2628A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2628A4u;
    // 0x2628a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2628A4u, 0x2628ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628ACu;
label_2628ac:
    // 0x2628ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2628ACu;
    {
        const bool branch_taken_0x2628ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2628B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628ACu;
        // 0x2628b0: 0xc6a30030  lwc1        $f3, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628ac) {
            ctx->pc = 0x2628BCu;
            goto label_2628bc;
        }
    }
    ctx->pc = 0x2628B4u;
label_2628b4:
    // 0x2628b4: 0x27b002a0  addiu       $s0, $sp, 0x2A0
    ctx->pc = 0x2628b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2628b8: 0xc6a30030  lwc1        $f3, 0x30($s5)
    ctx->pc = 0x2628b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2628bc:
    // 0x2628bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2628bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2628c0: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2628c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2628c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2628c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2628c8: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x2628c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2628cc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2628ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2628d0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2628d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2628d4: 0xc7a202a8  lwc1        $f2, 0x2A8($sp)
    ctx->pc = 0x2628d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2628d8: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2628d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2628dc: 0xc6a00034  lwc1        $f0, 0x34($s5)
    ctx->pc = 0x2628dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2628e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2628e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2628e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2628e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2628e8: 0xe7a102a4  swc1        $f1, 0x2A4($sp)
    ctx->pc = 0x2628e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x2628ec: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x2628ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2628f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2628f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2628f4: 0xe7a202a8  swc1        $f2, 0x2A8($sp)
    ctx->pc = 0x2628f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2628f8: 0xc0a9bd4  jal         func_2A6F50
    ctx->pc = 0x2628F8u;
    SET_GPR_U32(ctx, 31, 0x262900u);
    ctx->pc = 0x2628FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2628F8u;
    // 0x2628fc: 0x86450004  lh          $a1, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F50u, 0x2628F8u, 0x262900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262900u;
label_262900:
    // 0x262900: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x262900u;
    {
        const bool branch_taken_0x262900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262900u;
        // 0x262904: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262900) {
            ctx->pc = 0x262998u;
            goto label_262998;
        }
    }
    ctx->pc = 0x262908u;
label_262908:
    // 0x262908: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x262908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x26290c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26290cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x262910: 0xc4430104  lwc1        $f3, 0x104($v0)
    ctx->pc = 0x262910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262914: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x262914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262918: 0x0  nop
    ctx->pc = 0x262918u;
    // NOP
    // 0x26291c: 0x0  nop
    ctx->pc = 0x26291cu;
    // NOP
    // 0x262920: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x262920u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x262924: 0xc780839c  lwc1        $f0, -0x7C64($gp)
    ctx->pc = 0x262924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262928: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x262928u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26292c: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x26292Cu;
    SET_GPR_U32(ctx, 31, 0x262934u);
    ctx->pc = 0x262930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26292Cu;
    // 0x262930: 0x46020d02  mul.s       $f20, $f1, $f2 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x26292Cu, 0x262934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262934u;
label_262934:
    // 0x262934: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x262934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x262938: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x262938u;
    {
        const bool branch_taken_0x262938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262938) {
            ctx->pc = 0x262954u;
            goto label_262954;
        }
    }
    ctx->pc = 0x262940u;
    // 0x262940: 0x4615a002  mul.s       $f0, $f20, $f21
    ctx->pc = 0x262940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x262944: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x262948: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x262948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x26294c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26294Cu;
    {
        const bool branch_taken_0x26294c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26294Cu;
        // 0x262950: 0xd13018  mult        $a2, $a2, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26294c) {
            ctx->pc = 0x262960u;
            goto label_262960;
        }
    }
    ctx->pc = 0x262954u;
label_262954:
    // 0x262954: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262958: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x262958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x26295c: 0xd13018  mult        $a2, $a2, $s1
    ctx->pc = 0x26295cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_262960:
    // 0x262960: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x262960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x262964: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x262964u;
    {
        const bool branch_taken_0x262964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262964) {
            ctx->pc = 0x262968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262964u;
            // 0x262968: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26296Cu;
            goto label_26296c;
        }
    }
    ctx->pc = 0x26296Cu;
label_26296c:
    // 0x26296c: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x26296cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x262970: 0x8e47008c  lw          $a3, 0x8C($s2)
    ctx->pc = 0x262970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x262974: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x262974u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x262978: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x262978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26297c: 0x86450004  lh          $a1, 0x4($s2)
    ctx->pc = 0x26297cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x262980: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x262980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x262984: 0xc7ac0220  lwc1        $f12, 0x220($sp)
    ctx->pc = 0x262984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262988: 0x3012  mflo        $a2
    ctx->pc = 0x262988u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x26298c: 0xc0a9bbe  jal         func_2A6EF8
    ctx->pc = 0x26298Cu;
    SET_GPR_U32(ctx, 31, 0x262994u);
    ctx->pc = 0x262990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26298Cu;
    // 0x262990: 0xc7ad0224  lwc1        $f13, 0x224($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6EF8u, 0x26298Cu, 0x262994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262994u;
label_262994:
    // 0x262994: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x262994u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_262998:
    // 0x262998: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x262998u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x26299c: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x26299cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x2629a0: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x2629a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2629a4: 0x1440febc  bnez        $v0, . + 4 + (-0x144 << 2)
    ctx->pc = 0x2629A4u;
    {
        const bool branch_taken_0x2629a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2629A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629A4u;
        // 0x2629a8: 0x26f70010  addiu       $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629a4) {
            ctx->pc = 0x262498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262498;
        }
    }
    ctx->pc = 0x2629ACu;
label_2629ac:
    // 0x2629ac: 0x8fa202e4  lw          $v0, 0x2E4($sp)
    ctx->pc = 0x2629acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
    // 0x2629b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2629B0u;
    {
        const bool branch_taken_0x2629b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629B0u;
        // 0x2629b4: 0x8fa302c4  lw          $v1, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629b0) {
            ctx->pc = 0x2629D8u;
            goto label_2629d8;
        }
    }
    ctx->pc = 0x2629B8u;
    // 0x2629b8: 0xc0a9b8a  jal         func_2A6E28
    ctx->pc = 0x2629B8u;
    SET_GPR_U32(ctx, 31, 0x2629C0u);
    ctx->pc = 0x2A6E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6E28u, 0x2629B8u, 0x2629C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629C0u;
label_2629c0:
    // 0x2629c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2629C0u;
    {
        const bool branch_taken_0x2629c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629C0u;
        // 0x2629c4: 0x8fa302c4  lw          $v1, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629c0) {
            ctx->pc = 0x2629D8u;
            goto label_2629d8;
        }
    }
    ctx->pc = 0x2629C8u;
label_2629c8:
    // 0x2629c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2629c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2629cc: 0xafb202f0  sw          $s2, 0x2F0($sp)
    ctx->pc = 0x2629ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 18));
label_2629d0:
    // 0x2629d0: 0xafb002ec  sw          $s0, 0x2EC($sp)
    ctx->pc = 0x2629d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 16));
    // 0x2629d4: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x2629d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_2629d8:
    // 0x2629d8: 0x8fb002ec  lw          $s0, 0x2EC($sp)
    ctx->pc = 0x2629d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x2629dc: 0x80620006  lb          $v0, 0x6($v1)
    ctx->pc = 0x2629dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2629e0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2629e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2629e4: 0x1440fe20  bnez        $v0, . + 4 + (-0x1E0 << 2)
    ctx->pc = 0x2629E4u;
    {
        const bool branch_taken_0x2629e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2629E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629E4u;
        // 0x2629e8: 0x8fb202f0  lw          $s2, 0x2F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629e4) {
            ctx->pc = 0x262268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262268;
        }
    }
    ctx->pc = 0x2629ECu;
label_2629ec:
    // 0x2629ec: 0x8fa402c4  lw          $a0, 0x2C4($sp)
    ctx->pc = 0x2629ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_2629f0:
    // 0x2629f0: 0x80850003  lb          $a1, 0x3($a0)
    ctx->pc = 0x2629f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2629f4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2629F4u;
    {
        const bool branch_taken_0x2629f4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2629F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629F4u;
        // 0x2629f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629f4) {
            ctx->pc = 0x262A10u;
            goto label_262a10;
        }
    }
    ctx->pc = 0x2629FCu;
    // 0x2629fc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2629fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x262a00: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262A00u;
    {
        const bool branch_taken_0x262a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A00u;
        // 0x262a04: 0x8fa402b8  lw          $a0, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a00) {
            ctx->pc = 0x262A10u;
            goto label_262a10;
        }
    }
    ctx->pc = 0x262A08u;
    // 0x262a08: 0xc0982b8  jal         func_260AE0
    ctx->pc = 0x262A08u;
    SET_GPR_U32(ctx, 31, 0x262A10u);
    ctx->pc = 0x262A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A08u;
    // 0x262a0c: 0x8fa602c0  lw          $a2, 0x2C0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260AE0u;
    goto label_260ae0;
    ctx->pc = 0x262A10u;
label_262a10:
    // 0x262a10: 0x8fac02c4  lw          $t4, 0x2C4($sp)
    ctx->pc = 0x262a10u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x262a14: 0x81850004  lb          $a1, 0x4($t4)
    ctx->pc = 0x262a14u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x262a18: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262A18u;
    {
        const bool branch_taken_0x262a18 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x262A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A18u;
        // 0x262a1c: 0x8fa402b8  lw          $a0, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a18) {
            ctx->pc = 0x262A28u;
            goto label_262a28;
        }
    }
    ctx->pc = 0x262A20u;
    // 0x262a20: 0xc0982b8  jal         func_260AE0
    ctx->pc = 0x262A20u;
    SET_GPR_U32(ctx, 31, 0x262A28u);
    ctx->pc = 0x262A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A20u;
    // 0x262a24: 0x8fa602c0  lw          $a2, 0x2C0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260AE0u;
    goto label_260ae0;
    ctx->pc = 0x262A28u;
label_262a28:
    // 0x262a28: 0xdfbf0390  ld          $ra, 0x390($sp)
    ctx->pc = 0x262a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x262a2c: 0xdfbe0380  ld          $fp, 0x380($sp)
    ctx->pc = 0x262a2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x262a30: 0xdfb70370  ld          $s7, 0x370($sp)
    ctx->pc = 0x262a30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x262a34: 0xdfb60360  ld          $s6, 0x360($sp)
    ctx->pc = 0x262a34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x262a38: 0xdfb50350  ld          $s5, 0x350($sp)
    ctx->pc = 0x262a38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x262a3c: 0xdfb40340  ld          $s4, 0x340($sp)
    ctx->pc = 0x262a3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x262a40: 0xdfb30330  ld          $s3, 0x330($sp)
    ctx->pc = 0x262a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x262a44: 0xdfb20320  ld          $s2, 0x320($sp)
    ctx->pc = 0x262a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x262a48: 0xdfb10310  ld          $s1, 0x310($sp)
    ctx->pc = 0x262a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x262a4c: 0xdfb00300  ld          $s0, 0x300($sp)
    ctx->pc = 0x262a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x262a50: 0xc7b503a8  lwc1        $f21, 0x3A8($sp)
    ctx->pc = 0x262a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x262a54: 0xc7b403a0  lwc1        $f20, 0x3A0($sp)
    ctx->pc = 0x262a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x262a58: 0x3e00008  jr          $ra
    ctx->pc = 0x262A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A58u;
        // 0x262a5c: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262A60u;
}
