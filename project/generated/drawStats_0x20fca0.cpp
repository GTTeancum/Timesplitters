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

// Function: drawStats
// Address: 0x20fca0 - 0x2103ec
void drawStats_0x20fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawStats_0x20fca0");
#endif

    switch (ctx->pc) {
        case 0x20fcd8u: goto label_20fcd8;
        case 0x20fce4u: goto label_20fce4;
        case 0x20fcf8u: goto label_20fcf8;
        case 0x20fd10u: goto label_20fd10;
        case 0x20fd54u: goto label_20fd54;
        case 0x20fd9cu: goto label_20fd9c;
        case 0x20fdacu: goto label_20fdac;
        case 0x20fdd4u: goto label_20fdd4;
        case 0x20fdf8u: goto label_20fdf8;
        case 0x20fe14u: goto label_20fe14;
        case 0x20fe38u: goto label_20fe38;
        case 0x20fe4cu: goto label_20fe4c;
        case 0x20fe68u: goto label_20fe68;
        case 0x20fe98u: goto label_20fe98;
        case 0x20fea8u: goto label_20fea8;
        case 0x20feccu: goto label_20fecc;
        case 0x20fef0u: goto label_20fef0;
        case 0x20ff08u: goto label_20ff08;
        case 0x20ff2cu: goto label_20ff2c;
        case 0x20ff40u: goto label_20ff40;
        case 0x20ff5cu: goto label_20ff5c;
        case 0x20ff8cu: goto label_20ff8c;
        case 0x20ff9cu: goto label_20ff9c;
        case 0x20ffc0u: goto label_20ffc0;
        case 0x20ffe4u: goto label_20ffe4;
        case 0x20fffcu: goto label_20fffc;
        case 0x210020u: goto label_210020;
        case 0x21002cu: goto label_21002c;
        case 0x210048u: goto label_210048;
        case 0x21008cu: goto label_21008c;
        case 0x21009cu: goto label_21009c;
        case 0x2100acu: goto label_2100ac;
        case 0x2100b8u: goto label_2100b8;
        case 0x2100d4u: goto label_2100d4;
        case 0x2100dcu: goto label_2100dc;
        case 0x210128u: goto label_210128;
        case 0x21013cu: goto label_21013c;
        case 0x21014cu: goto label_21014c;
        case 0x210158u: goto label_210158;
        case 0x210174u: goto label_210174;
        case 0x2101acu: goto label_2101ac;
        case 0x2101bcu: goto label_2101bc;
        case 0x2101ccu: goto label_2101cc;
        case 0x2101d8u: goto label_2101d8;
        case 0x2101f4u: goto label_2101f4;
        case 0x21020cu: goto label_21020c;
        case 0x21024cu: goto label_21024c;
        case 0x21025cu: goto label_21025c;
        case 0x21028cu: goto label_21028c;
        case 0x210298u: goto label_210298;
        case 0x2102acu: goto label_2102ac;
        case 0x2102d0u: goto label_2102d0;
        case 0x2102ecu: goto label_2102ec;
        case 0x210300u: goto label_210300;
        case 0x210340u: goto label_210340;
        case 0x210350u: goto label_210350;
        case 0x210374u: goto label_210374;
        case 0x210398u: goto label_210398;
        case 0x2103b4u: goto label_2103b4;
        default: break;
    }

    ctx->pc = 0x20fca0u;

    // 0x20fca0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x20fca4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x20fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x20fca8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x20fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x20fcac: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x20fcacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20fcb0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x20fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x20fcb4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20fcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20fcb8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x20fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x20fcbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20fcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20fcc0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20fcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x20fcc4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x20fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x20fcc8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x20fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x20fccc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x20fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x20fcd0: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20FCD0u;
    SET_GPR_U32(ctx, 31, 0x20FCD8u);
    ctx->pc = 0x20FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FCD0u;
    // 0x20fcd4: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20FCD0u, 0x20FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FCD8u;
label_20fcd8:
    // 0x20fcd8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20fcd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20fcdc: 0xc08089c  jal         func_202270
    ctx->pc = 0x20FCDCu;
    SET_GPR_U32(ctx, 31, 0x20FCE4u);
    ctx->pc = 0x20FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FCDCu;
    // 0x20fce0: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x20FCDCu, 0x20FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FCE4u;
label_20fce4:
    // 0x20fce4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x20fce4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x20fce8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20fcec: 0x8e1299f0  lw          $s2, -0x6610($s0)
    ctx->pc = 0x20fcecu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3299F0u));
    // 0x20fcf0: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20FCF0u;
    SET_GPR_U32(ctx, 31, 0x20FCF8u);
    ctx->pc = 0x20FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FCF0u;
    // 0x20fcf4: 0x261099f0  addiu       $s0, $s0, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20FCF0u, 0x20FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FCF8u;
label_20fcf8:
    // 0x20fcf8: 0x26540078  addiu       $s4, $s2, 0x78
    ctx->pc = 0x20fcf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x20fcfc: 0x2643000e  addiu       $v1, $s2, 0xE
    ctx->pc = 0x20fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 14));
    // 0x20fd00: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x20fd00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20fd04: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x20fd04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20fd08: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20FD08u;
    SET_GPR_U32(ctx, 31, 0x20FD10u);
    ctx->pc = 0x20FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FD08u;
    // 0x20fd0c: 0x62a00a  movz        $s4, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20FD08u, 0x20FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD10u;
label_20fd10:
    // 0x20fd10: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x20fd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20fd14: 0x2635ff88  addiu       $s5, $s1, -0x78
    ctx->pc = 0x20fd14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967176));
    // 0x20fd18: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x20fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x20fd1c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x20fd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20fd20: 0x2631fff6  addiu       $s1, $s1, -0xA
    ctx->pc = 0x20fd20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
    // 0x20fd24: 0x24a60014  addiu       $a2, $a1, 0x14
    ctx->pc = 0x20fd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x20fd28: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x20fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20fd2c: 0x24b20026  addiu       $s2, $a1, 0x26
    ctx->pc = 0x20fd2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 38));
    // 0x20fd30: 0x222a80a  movz        $s5, $s1, $v0
    ctx->pc = 0x20fd30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 17));
    // 0x20fd34: 0x83b80a  movz        $s7, $a0, $v1
    ctx->pc = 0x20fd34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 4));
    // 0x20fd38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FD38u;
    {
        const bool branch_taken_0x20fd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD38u;
        // 0x20fd3c: 0xc3900b  movn        $s2, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd38) {
            ctx->pc = 0x20FD48u;
            goto label_20fd48;
        }
    }
    ctx->pc = 0x20FD40u;
    // 0x20fd40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20FD40u;
    {
        const bool branch_taken_0x20fd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD40u;
        // 0x20fd44: 0x2579021  addu        $s2, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd40) {
            ctx->pc = 0x20FD4Cu;
            goto label_20fd4c;
        }
    }
    ctx->pc = 0x20FD48u;
label_20fd48:
    // 0x20fd48: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x20fd48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_20fd4c:
    // 0x20fd4c: 0xc08851a  jal         func_221468
    ctx->pc = 0x20FD4Cu;
    SET_GPR_U32(ctx, 31, 0x20FD54u);
    ctx->pc = 0x221468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221468u, 0x20FD4Cu, 0x20FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD54u;
label_20fd54:
    // 0x20fd54: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20fd58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20fd5c: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x20fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x20fd60: 0x146400bb  bne         $v1, $a0, . + 4 + (0xBB << 2)
    ctx->pc = 0x20FD60u;
    {
        const bool branch_taken_0x20fd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x20FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD60u;
        // 0x20fd64: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd60) {
            ctx->pc = 0x210050u;
            goto label_210050;
        }
    }
    ctx->pc = 0x20FD68u;
    // 0x20fd68: 0x3c1e002f  lui         $fp, 0x2F
    ctx->pc = 0x20fd68u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47 << 16));
    // 0x20fd6c: 0x27d12c18  addiu       $s1, $fp, 0x2C18
    ctx->pc = 0x20fd6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 11288));
    // 0x20fd70: 0x2579021  addu        $s2, $s2, $s7
    ctx->pc = 0x20fd70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x20fd74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fd78: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x20fd7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20fd80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20fd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fd88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20fd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd8c: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x20fd8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x20fd90: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x20fd90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x20fd94: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20FD94u;
    SET_GPR_U32(ctx, 31, 0x20FD9Cu);
    ctx->pc = 0x20FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FD94u;
    // 0x20fd98: 0x8c66112c  lw          $a2, 0x112C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20FD94u, 0x20FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD9Cu;
label_20fd9c:
    // 0x20fd9c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20fda0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x20fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x20fda4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x20FDA4u;
    SET_GPR_U32(ctx, 31, 0x20FDACu);
    ctx->pc = 0x20FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FDA4u;
    // 0x20fda8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x20FDA4u, 0x20FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDACu;
label_20fdac:
    // 0x20fdac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20fdacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20fdb0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x20fdb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20fdb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fdb8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20FDB8u;
    {
        const bool branch_taken_0x20fdb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDB8u;
        // 0x20fdbc: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fdb8) {
            ctx->pc = 0x20FE00u;
            goto label_20fe00;
        }
    }
    ctx->pc = 0x20FDC0u;
    // 0x20fdc0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x20fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x20fdc4: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x20fdc4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x20fdc8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fdcc: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x20FDCCu;
    SET_GPR_U32(ctx, 31, 0x20FDD4u);
    ctx->pc = 0x20FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FDCCu;
    // 0x20fdd0: 0x26d0e518  addiu       $s0, $s6, -0x1AE8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x20FDCCu, 0x20FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDD4u;
label_20fdd4:
    // 0x20fdd4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x20fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20fdd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20fdd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20fddc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x20fddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x20fde0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20fde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fde4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fde8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20fdec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fdf0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x20FDF0u;
    SET_GPR_U32(ctx, 31, 0x20FDF8u);
    ctx->pc = 0x20FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FDF0u;
    // 0x20fdf4: 0x8c661130  lw          $a2, 0x1130($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x20FDF0u, 0x20FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDF8u;
label_20fdf8:
    // 0x20fdf8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20FDF8u;
    {
        const bool branch_taken_0x20fdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDF8u;
        // 0x20fdfc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fdf8) {
            ctx->pc = 0x20FE3Cu;
            goto label_20fe3c;
        }
    }
    ctx->pc = 0x20FE00u;
label_20fe00:
    // 0x20fe00: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x20fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x20fe04: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x20fe04u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x20fe08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fe0c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x20FE0Cu;
    SET_GPR_U32(ctx, 31, 0x20FE14u);
    ctx->pc = 0x20FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE0Cu;
    // 0x20fe10: 0x26d0e518  addiu       $s0, $s6, -0x1AE8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x20FE0Cu, 0x20FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE14u;
label_20fe14:
    // 0x20fe14: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x20fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20fe18: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20fe18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20fe1c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x20fe1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x20fe20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20fe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fe28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20fe2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fe30: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x20FE30u;
    SET_GPR_U32(ctx, 31, 0x20FE38u);
    ctx->pc = 0x20FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE30u;
    // 0x20fe34: 0x8c661134  lw          $a2, 0x1134($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x20FE30u, 0x20FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE38u;
label_20fe38:
    // 0x20fe38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20fe38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20fe3c:
    // 0x20fe3c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x20fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x20fe40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe44: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x20FE44u;
    SET_GPR_U32(ctx, 31, 0x20FE4Cu);
    ctx->pc = 0x20FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE44u;
    // 0x20fe48: 0x24532c18  addiu       $s3, $v0, 0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x20FE44u, 0x20FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE4Cu;
label_20fe4c:
    // 0x20fe4c: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x20fe4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x20fe50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20fe50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe54: 0x2a22023  subu        $a0, $s5, $v0
    ctx->pc = 0x20fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x20fe58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20fe58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe5c: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x20fe5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x20fe60: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20FE60u;
    SET_GPR_U32(ctx, 31, 0x20FE68u);
    ctx->pc = 0x20FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE60u;
    // 0x20fe64: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20FE60u, 0x20FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE68u;
label_20fe68:
    // 0x20fe68: 0x2579021  addu        $s2, $s2, $s7
    ctx->pc = 0x20fe68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x20fe6c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x20fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20fe70: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x20fe70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x20fe74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20fe74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20fe78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20fe80: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x20fe80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x20fe84: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x20fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x20fe88: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x20fe88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x20fe8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fe90: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20FE90u;
    SET_GPR_U32(ctx, 31, 0x20FE98u);
    ctx->pc = 0x20FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE90u;
    // 0x20fe94: 0x8c461138  lw          $a2, 0x1138($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20FE90u, 0x20FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE98u;
label_20fe98:
    // 0x20fe98: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20fe9c: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x20fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x20fea0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x20FEA0u;
    SET_GPR_U32(ctx, 31, 0x20FEA8u);
    ctx->pc = 0x20FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEA0u;
    // 0x20fea4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x20FEA0u, 0x20FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEA8u;
label_20fea8:
    // 0x20fea8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20fea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20feac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x20feacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20feb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20feb4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20FEB4u;
    {
        const bool branch_taken_0x20feb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEB4u;
        // 0x20feb8: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20feb4) {
            ctx->pc = 0x20FEF8u;
            goto label_20fef8;
        }
    }
    ctx->pc = 0x20FEBCu;
    // 0x20febc: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x20febcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x20fec0: 0x26d0e518  addiu       $s0, $s6, -0x1AE8
    ctx->pc = 0x20fec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960408));
    // 0x20fec4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x20FEC4u;
    SET_GPR_U32(ctx, 31, 0x20FECCu);
    ctx->pc = 0x20FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEC4u;
    // 0x20fec8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x20FEC4u, 0x20FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FECCu;
label_20fecc:
    // 0x20fecc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x20feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20fed0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20fed0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20fed4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x20fed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x20fed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20fed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fedc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fee0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20fee4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fee8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x20FEE8u;
    SET_GPR_U32(ctx, 31, 0x20FEF0u);
    ctx->pc = 0x20FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEE8u;
    // 0x20feec: 0x8c66113c  lw          $a2, 0x113C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x20FEE8u, 0x20FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEF0u;
label_20fef0:
    // 0x20fef0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20FEF0u;
    {
        const bool branch_taken_0x20fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEF0u;
        // 0x20fef4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fef0) {
            ctx->pc = 0x20FF30u;
            goto label_20ff30;
        }
    }
    ctx->pc = 0x20FEF8u;
label_20fef8:
    // 0x20fef8: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x20fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x20fefc: 0x26d0e518  addiu       $s0, $s6, -0x1AE8
    ctx->pc = 0x20fefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960408));
    // 0x20ff00: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x20FF00u;
    SET_GPR_U32(ctx, 31, 0x20FF08u);
    ctx->pc = 0x20FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF00u;
    // 0x20ff04: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x20FF00u, 0x20FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF08u;
label_20ff08:
    // 0x20ff08: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x20ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20ff0c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20ff0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20ff10: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x20ff10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x20ff14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ff14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ff1c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20ff20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ff24: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x20FF24u;
    SET_GPR_U32(ctx, 31, 0x20FF2Cu);
    ctx->pc = 0x20FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF24u;
    // 0x20ff28: 0x8c661140  lw          $a2, 0x1140($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x20FF24u, 0x20FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF2Cu;
label_20ff2c:
    // 0x20ff2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20ff2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ff30:
    // 0x20ff30: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x20ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x20ff34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ff34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff38: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x20FF38u;
    SET_GPR_U32(ctx, 31, 0x20FF40u);
    ctx->pc = 0x20FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF38u;
    // 0x20ff3c: 0x24532c18  addiu       $s3, $v0, 0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x20FF38u, 0x20FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF40u;
label_20ff40:
    // 0x20ff40: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x20ff40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x20ff44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20ff44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff48: 0x2a22023  subu        $a0, $s5, $v0
    ctx->pc = 0x20ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x20ff4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20ff4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff50: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x20ff50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x20ff54: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20FF54u;
    SET_GPR_U32(ctx, 31, 0x20FF5Cu);
    ctx->pc = 0x20FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF54u;
    // 0x20ff58: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20FF54u, 0x20FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF5Cu;
label_20ff5c:
    // 0x20ff5c: 0x2579021  addu        $s2, $s2, $s7
    ctx->pc = 0x20ff5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x20ff60: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x20ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20ff64: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x20ff64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x20ff68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20ff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20ff6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20ff74: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x20ff74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x20ff78: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x20ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x20ff7c: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x20ff7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x20ff80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ff84: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20FF84u;
    SET_GPR_U32(ctx, 31, 0x20FF8Cu);
    ctx->pc = 0x20FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF84u;
    // 0x20ff88: 0x8c461144  lw          $a2, 0x1144($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20FF84u, 0x20FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF8Cu;
label_20ff8c:
    // 0x20ff8c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20ff90: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x20ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x20ff94: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x20FF94u;
    SET_GPR_U32(ctx, 31, 0x20FF9Cu);
    ctx->pc = 0x20FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF94u;
    // 0x20ff98: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x20FF94u, 0x20FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF9Cu;
label_20ff9c:
    // 0x20ff9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20ff9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20ffa0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x20ffa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20ffa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ffa8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20FFA8u;
    {
        const bool branch_taken_0x20ffa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFA8u;
        // 0x20ffac: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffa8) {
            ctx->pc = 0x20FFECu;
            goto label_20ffec;
        }
    }
    ctx->pc = 0x20FFB0u;
    // 0x20ffb0: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x20ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x20ffb4: 0x26d0e518  addiu       $s0, $s6, -0x1AE8
    ctx->pc = 0x20ffb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960408));
    // 0x20ffb8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x20FFB8u;
    SET_GPR_U32(ctx, 31, 0x20FFC0u);
    ctx->pc = 0x20FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFB8u;
    // 0x20ffbc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x20FFB8u, 0x20FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFC0u;
label_20ffc0:
    // 0x20ffc0: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x20ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20ffc4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20ffc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20ffc8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x20ffc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x20ffcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ffccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ffd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ffd4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20ffd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ffdc: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x20FFDCu;
    SET_GPR_U32(ctx, 31, 0x20FFE4u);
    ctx->pc = 0x20FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFDCu;
    // 0x20ffe0: 0x8c661148  lw          $a2, 0x1148($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x20FFDCu, 0x20FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFE4u;
label_20ffe4:
    // 0x20ffe4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20FFE4u;
    {
        const bool branch_taken_0x20ffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFE4u;
        // 0x20ffe8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffe4) {
            ctx->pc = 0x210024u;
            goto label_210024;
        }
    }
    ctx->pc = 0x20FFECu;
label_20ffec:
    // 0x20ffec: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x20ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x20fff0: 0x26d0e518  addiu       $s0, $s6, -0x1AE8
    ctx->pc = 0x20fff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960408));
    // 0x20fff4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x20FFF4u;
    SET_GPR_U32(ctx, 31, 0x20FFFCu);
    ctx->pc = 0x20FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFF4u;
    // 0x20fff8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x20FFF4u, 0x20FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFFCu;
label_20fffc:
    // 0x20fffc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x20fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210000: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x210000u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x210004: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x210004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x210008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21000c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210010: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x210010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x210014: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210018: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x210018u;
    SET_GPR_U32(ctx, 31, 0x210020u);
    ctx->pc = 0x21001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210018u;
    // 0x21001c: 0x8c66114c  lw          $a2, 0x114C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x210018u, 0x210020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210020u;
label_210020:
    // 0x210020: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x210020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210024:
    // 0x210024: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210024u;
    SET_GPR_U32(ctx, 31, 0x21002Cu);
    ctx->pc = 0x210028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210024u;
    // 0x210028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210024u, 0x21002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21002Cu;
label_21002c:
    // 0x21002c: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x21002cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x210030: 0x2a22023  subu        $a0, $s5, $v0
    ctx->pc = 0x210030u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x210034: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x210034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210038: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21003c: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x21003cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x210040: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210040u;
    SET_GPR_U32(ctx, 31, 0x210048u);
    ctx->pc = 0x210044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210040u;
    // 0x210044: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210040u, 0x210048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210048u;
label_210048:
    // 0x210048: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x210048u;
    {
        const bool branch_taken_0x210048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210048u;
        // 0x21004c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210048) {
            ctx->pc = 0x2101F8u;
            goto label_2101f8;
        }
    }
    ctx->pc = 0x210050u;
label_210050:
    // 0x210050: 0x3c1e002f  lui         $fp, 0x2F
    ctx->pc = 0x210050u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47 << 16));
    // 0x210054: 0x27d32c18  addiu       $s3, $fp, 0x2C18
    ctx->pc = 0x210054u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 11288));
    // 0x210058: 0x2579021  addu        $s2, $s2, $s7
    ctx->pc = 0x210058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x21005c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21005cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210060: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x210060u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x210064: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x210064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x210068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21006c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210070: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x210070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210074: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x210074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x210078: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x210078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x21007c: 0x8c661150  lw          $a2, 0x1150($v1)
    ctx->pc = 0x21007cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4432)));
    // 0x210080: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x210080u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x210084: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210084u;
    SET_GPR_U32(ctx, 31, 0x21008Cu);
    ctx->pc = 0x210088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210084u;
    // 0x210088: 0x26d0e510  addiu       $s0, $s6, -0x1AF0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210084u, 0x21008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21008Cu;
label_21008c:
    // 0x21008c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x21008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x210090: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x210090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x210094: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x210094u;
    SET_GPR_U32(ctx, 31, 0x21009Cu);
    ctx->pc = 0x210098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210094u;
    // 0x210098: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x210094u, 0x21009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21009Cu;
label_21009c:
    // 0x21009c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21009cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2100a0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2100a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2100a4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2100A4u;
    SET_GPR_U32(ctx, 31, 0x2100ACu);
    ctx->pc = 0x2100A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100A4u;
    // 0x2100a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2100A4u, 0x2100ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100ACu;
label_2100ac:
    // 0x2100ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2100acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100b0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2100B0u;
    SET_GPR_U32(ctx, 31, 0x2100B8u);
    ctx->pc = 0x2100B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100B0u;
    // 0x2100b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2100B0u, 0x2100B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100B8u;
label_2100b8:
    // 0x2100b8: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x2100b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x2100bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2100bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100c0: 0x2a22023  subu        $a0, $s5, $v0
    ctx->pc = 0x2100c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2100c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2100c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100c8: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x2100c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x2100cc: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2100CCu;
    SET_GPR_U32(ctx, 31, 0x2100D4u);
    ctx->pc = 0x2100D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100CCu;
    // 0x2100d0: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2100CCu, 0x2100D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100D4u;
label_2100d4:
    // 0x2100d4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2100D4u;
    SET_GPR_U32(ctx, 31, 0x2100DCu);
    ctx->pc = 0x2100D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100D4u;
    // 0x2100d8: 0x2579021  addu        $s2, $s2, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2100D4u, 0x2100DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100DCu;
label_2100dc:
    // 0x2100dc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2100dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2100e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2100E0u;
    {
        const bool branch_taken_0x2100e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2100E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100E0u;
        // 0x2100e4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100e0) {
            ctx->pc = 0x2100FCu;
            goto label_2100fc;
        }
    }
    ctx->pc = 0x2100E8u;
    // 0x2100e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2100e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2100ec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2100ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2100f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2100f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2100f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2100F4u;
    {
        const bool branch_taken_0x2100f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100F4u;
        // 0x2100f8: 0x8c711154  lw          $s1, 0x1154($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100f4) {
            ctx->pc = 0x21010Cu;
            goto label_21010c;
        }
    }
    ctx->pc = 0x2100FCu;
label_2100fc:
    // 0x2100fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2100fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210100: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x210104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210108: 0x8c711158  lw          $s1, 0x1158($v1)
    ctx->pc = 0x210108u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4440)));
label_21010c:
    // 0x21010c: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x21010cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x210110: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x210110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210118: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x210118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21011c: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x21011cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x210120: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210120u;
    SET_GPR_U32(ctx, 31, 0x210128u);
    ctx->pc = 0x210124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210120u;
    // 0x210124: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210120u, 0x210128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210128u;
label_210128:
    // 0x210128: 0x26d0e510  addiu       $s0, $s6, -0x1AF0
    ctx->pc = 0x210128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960400));
    // 0x21012c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x21012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x210130: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x210130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x210134: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x210134u;
    SET_GPR_U32(ctx, 31, 0x21013Cu);
    ctx->pc = 0x210138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210134u;
    // 0x210138: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x210134u, 0x21013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21013Cu;
label_21013c:
    // 0x21013c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21013cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x210140: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x210140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x210144: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x210144u;
    SET_GPR_U32(ctx, 31, 0x21014Cu);
    ctx->pc = 0x210148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210144u;
    // 0x210148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x210144u, 0x21014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21014Cu;
label_21014c:
    // 0x21014c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21014cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210150: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210150u;
    SET_GPR_U32(ctx, 31, 0x210158u);
    ctx->pc = 0x210154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210150u;
    // 0x210154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210150u, 0x210158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210158u;
label_210158:
    // 0x210158: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x210158u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x21015c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21015cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210164: 0x2a22023  subu        $a0, $s5, $v0
    ctx->pc = 0x210164u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x210168: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x210168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x21016c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x21016Cu;
    SET_GPR_U32(ctx, 31, 0x210174u);
    ctx->pc = 0x210170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21016Cu;
    // 0x210170: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x21016Cu, 0x210174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210174u;
label_210174:
    // 0x210174: 0x2579021  addu        $s2, $s2, $s7
    ctx->pc = 0x210174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x210178: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x210178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21017c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x21017cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x210180: 0x24832c18  addiu       $v1, $a0, 0x2C18
    ctx->pc = 0x210180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x210184: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x210184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x210188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21018c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21018cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210194: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210198: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21019c: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x21019cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x2101a0: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x2101a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2101a4: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2101A4u;
    SET_GPR_U32(ctx, 31, 0x2101ACu);
    ctx->pc = 0x2101A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101A4u;
    // 0x2101a8: 0x8c66115c  lw          $a2, 0x115C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2101A4u, 0x2101ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101ACu;
label_2101ac:
    // 0x2101ac: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2101acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2101b0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2101b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2101b4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2101B4u;
    SET_GPR_U32(ctx, 31, 0x2101BCu);
    ctx->pc = 0x2101B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101B4u;
    // 0x2101b8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2101B4u, 0x2101BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101BCu;
label_2101bc:
    // 0x2101bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2101bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2101c0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2101c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2101c4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2101C4u;
    SET_GPR_U32(ctx, 31, 0x2101CCu);
    ctx->pc = 0x2101C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101C4u;
    // 0x2101c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2101C4u, 0x2101CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101CCu;
label_2101cc:
    // 0x2101cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2101ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101d0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2101D0u;
    SET_GPR_U32(ctx, 31, 0x2101D8u);
    ctx->pc = 0x2101D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101D0u;
    // 0x2101d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2101D0u, 0x2101D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101D8u;
label_2101d8:
    // 0x2101d8: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x2101d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x2101dc: 0x2a22023  subu        $a0, $s5, $v0
    ctx->pc = 0x2101dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2101e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2101e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2101e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101e8: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x2101e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x2101ec: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2101ECu;
    SET_GPR_U32(ctx, 31, 0x2101F4u);
    ctx->pc = 0x2101F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101ECu;
    // 0x2101f0: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2101ECu, 0x2101F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101F4u;
label_2101f4:
    // 0x2101f4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2101f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2101f8:
    // 0x2101f8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2101f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2101fc: 0x27d12c18  addiu       $s1, $fp, 0x2C18
    ctx->pc = 0x2101fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 11288));
    // 0x210200: 0x2579021  addu        $s2, $s2, $s7
    ctx->pc = 0x210200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x210204: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x210204u;
    SET_GPR_U32(ctx, 31, 0x21020Cu);
    ctx->pc = 0x210208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210204u;
    // 0x210208: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x210204u, 0x21020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21020Cu;
label_21020c:
    // 0x21020c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210210: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x210210u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x210214: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x210214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x210218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x210218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21021c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21021cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210224: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210228: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x210228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21022c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x21022cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x210230: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210234: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x210234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x210238: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x210238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x21023c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21023cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x210240: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x210240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x210244: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210244u;
    SET_GPR_U32(ctx, 31, 0x21024Cu);
    ctx->pc = 0x210248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210244u;
    // 0x210248: 0x8c661160  lw          $a2, 0x1160($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210244u, 0x21024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21024Cu;
label_21024c:
    // 0x21024c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x21024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x210250: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x210250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x210254: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x210254u;
    SET_GPR_U32(ctx, 31, 0x21025Cu);
    ctx->pc = 0x210258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210254u;
    // 0x210258: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x210254u, 0x21025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21025Cu;
label_21025c:
    // 0x21025c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x210260: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x210260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210264: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x210264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210268: 0x0  nop
    ctx->pc = 0x210268u;
    // NOP
    // 0x21026c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x21026Cu;
    {
        const bool branch_taken_0x21026c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21026Cu;
        // 0x210270: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21026c) {
            ctx->pc = 0x2102B4u;
            goto label_2102b4;
        }
    }
    ctx->pc = 0x210274u;
    // 0x210274: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x210274u;
    {
        const bool branch_taken_0x210274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x210278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210274u;
        // 0x210278: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210274) {
            ctx->pc = 0x2102A0u;
            goto label_2102a0;
        }
    }
    ctx->pc = 0x21027Cu;
    // 0x21027c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x21027cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x210280: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x210280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x210284: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x210284u;
    SET_GPR_U32(ctx, 31, 0x21028Cu);
    ctx->pc = 0x210288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210284u;
    // 0x210288: 0x2610e520  addiu       $s0, $s0, -0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x210284u, 0x21028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21028Cu;
label_21028c:
    // 0x21028c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21028cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210290: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x210290u;
    SET_GPR_U32(ctx, 31, 0x210298u);
    ctx->pc = 0x210294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210290u;
    // 0x210294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x210290u, 0x210298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210298u;
label_210298:
    // 0x210298: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x210298u;
    {
        const bool branch_taken_0x210298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210298u;
        // 0x21029c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210298) {
            ctx->pc = 0x2102C4u;
            goto label_2102c4;
        }
    }
    ctx->pc = 0x2102A0u;
label_2102a0:
    // 0x2102a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2102a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102a4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2102A4u;
    SET_GPR_U32(ctx, 31, 0x2102ACu);
    ctx->pc = 0x2102A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2102A4u;
    // 0x2102a8: 0x2484e528  addiu       $a0, $a0, -0x1AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2102A4u, 0x2102ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102ACu;
label_2102ac:
    // 0x2102ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2102ACu;
    {
        const bool branch_taken_0x2102ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102ACu;
        // 0x2102b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102ac) {
            ctx->pc = 0x2102C4u;
            goto label_2102c4;
        }
    }
    ctx->pc = 0x2102B4u;
label_2102b4:
    // 0x2102b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2102b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2102b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2102b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2102bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2102bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2102c0: 0x8c711164  lw          $s1, 0x1164($v1)
    ctx->pc = 0x2102c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4452)));
label_2102c4:
    // 0x2102c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2102c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102c8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2102C8u;
    SET_GPR_U32(ctx, 31, 0x2102D0u);
    ctx->pc = 0x2102CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2102C8u;
    // 0x2102cc: 0x27d32c18  addiu       $s3, $fp, 0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 11288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2102C8u, 0x2102D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102D0u;
label_2102d0:
    // 0x2102d0: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x2102d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x2102d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2102d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102d8: 0x2a22023  subu        $a0, $s5, $v0
    ctx->pc = 0x2102d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2102dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2102dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102e0: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x2102e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x2102e4: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2102E4u;
    SET_GPR_U32(ctx, 31, 0x2102ECu);
    ctx->pc = 0x2102E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2102E4u;
    // 0x2102e8: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2102E4u, 0x2102ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102ECu;
label_2102ec:
    // 0x2102ec: 0x2579021  addu        $s2, $s2, $s7
    ctx->pc = 0x2102ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x2102f0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2102f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2102f4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2102f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2102f8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2102F8u;
    SET_GPR_U32(ctx, 31, 0x210300u);
    ctx->pc = 0x2102FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2102F8u;
    // 0x2102fc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2102F8u, 0x210300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210300u;
label_210300:
    // 0x210300: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x210300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210304: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x210304u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x210308: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x210308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x21030c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21030cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210310: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x210310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210314: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210318: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21031c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x210320: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x210320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x210324: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210328: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x210328u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x21032c: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x21032cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x210330: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x210330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x210334: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x210334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x210338: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210338u;
    SET_GPR_U32(ctx, 31, 0x210340u);
    ctx->pc = 0x21033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210338u;
    // 0x21033c: 0x8c661168  lw          $a2, 0x1168($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210338u, 0x210340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210340u;
label_210340:
    // 0x210340: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x210340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x210344: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x210344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x210348: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x210348u;
    SET_GPR_U32(ctx, 31, 0x210350u);
    ctx->pc = 0x21034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210348u;
    // 0x21034c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x210348u, 0x210350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210350u;
label_210350:
    // 0x210350: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x210350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x210354: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x210354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x210358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21035c: 0x0  nop
    ctx->pc = 0x21035cu;
    // NOP
    // 0x210360: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x210360u;
    {
        const bool branch_taken_0x210360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210360u;
        // 0x210364: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210360) {
            ctx->pc = 0x21037Cu;
            goto label_21037c;
        }
    }
    ctx->pc = 0x210368u;
    // 0x210368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21036c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21036Cu;
    SET_GPR_U32(ctx, 31, 0x210374u);
    ctx->pc = 0x210370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21036Cu;
    // 0x210370: 0x2484e528  addiu       $a0, $a0, -0x1AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21036Cu, 0x210374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210374u;
label_210374:
    // 0x210374: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x210374u;
    {
        const bool branch_taken_0x210374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210374u;
        // 0x210378: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210374) {
            ctx->pc = 0x210390u;
            goto label_210390;
        }
    }
    ctx->pc = 0x21037Cu;
label_21037c:
    // 0x21037c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210384: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x210384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x210388: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21038c: 0x8c71116c  lw          $s1, 0x116C($v1)
    ctx->pc = 0x21038cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4460)));
label_210390:
    // 0x210390: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210390u;
    SET_GPR_U32(ctx, 31, 0x210398u);
    ctx->pc = 0x210394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210390u;
    // 0x210394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210390u, 0x210398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210398u;
label_210398:
    // 0x210398: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x210398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x21039c: 0x2a22023  subu        $a0, $s5, $v0
    ctx->pc = 0x21039cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2103a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2103a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2103a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103a8: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x2103a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x2103ac: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2103ACu;
    SET_GPR_U32(ctx, 31, 0x2103B4u);
    ctx->pc = 0x2103B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103ACu;
    // 0x2103b0: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2103ACu, 0x2103B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103B4u;
label_2103b4:
    // 0x2103b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2103b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2103b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2103b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2103bc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2103bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2103c0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2103c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2103c4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2103c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2103c8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2103c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2103cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2103ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2103d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2103d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2103d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2103d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2103d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2103d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2103dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2103dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2103e0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2103e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2103e4: 0x808089c  j           func_202270
    ctx->pc = 0x2103E4u;
    ctx->pc = 0x2103E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103E4u;
    // 0x2103e8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x2103ECu;
}
