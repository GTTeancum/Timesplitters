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

// Function: mmDrawTile
// Address: 0x24a008 - 0x24a70c
void mmDrawTile_0x24a008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawTile_0x24a008");
#endif

    switch (ctx->pc) {
        case 0x24a138u: goto label_24a138;
        case 0x24a174u: goto label_24a174;
        case 0x24a218u: goto label_24a218;
        case 0x24a284u: goto label_24a284;
        case 0x24a2c4u: goto label_24a2c4;
        case 0x24a310u: goto label_24a310;
        case 0x24a350u: goto label_24a350;
        case 0x24a388u: goto label_24a388;
        case 0x24a430u: goto label_24a430;
        case 0x24a45cu: goto label_24a45c;
        case 0x24a47cu: goto label_24a47c;
        case 0x24a488u: goto label_24a488;
        case 0x24a49cu: goto label_24a49c;
        case 0x24a4c8u: goto label_24a4c8;
        case 0x24a4ecu: goto label_24a4ec;
        case 0x24a4f4u: goto label_24a4f4;
        case 0x24a508u: goto label_24a508;
        case 0x24a534u: goto label_24a534;
        case 0x24a564u: goto label_24a564;
        case 0x24a590u: goto label_24a590;
        case 0x24a690u: goto label_24a690;
        default: break;
    }

    ctx->pc = 0x24a008u;

    // 0x24a008: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x24a008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x24a00c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x24a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x24a010: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x24a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x24a014: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x24a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x24a018: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x24a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x24a01c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x24a01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x24a020: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x24a020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a024: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x24a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x24a028: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x24a028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x24a02c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x24a02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x24a030: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x24a030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x24a034: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x24a034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x24a038: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x24a038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x24a03c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x24a03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x24a040: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24a040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x24a044: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24a044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24a048: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x24a048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x24a04c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24A04Cu;
    {
        const bool branch_taken_0x24a04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A04Cu;
        // 0x24a050: 0xafa8000c  sw          $t0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a04c) {
            ctx->pc = 0x24A0F8u;
            goto label_24a0f8;
        }
    }
    ctx->pc = 0x24A054u;
    // 0x24a054: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24a054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24a058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24a058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24a05c: 0x244220d0  addiu       $v0, $v0, 0x20D0
    ctx->pc = 0x24a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8400));
    // 0x24a060: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24a064: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a068: 0x800008  jr          $a0
    ctx->pc = 0x24A068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24A070u: goto label_24a070;
            case 0x24A088u: goto label_24a088;
            case 0x24A0A0u: goto label_24a0a0;
            case 0x24A0B8u: goto label_24a0b8;
            case 0x24A0C4u: goto label_24a0c4;
            case 0x24A0E4u: goto label_24a0e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A068u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24A070u;
label_24a070:
    // 0x24a070: 0x9382a02d  lbu         $v0, -0x5FD3($gp)
    ctx->pc = 0x24a070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942765)));
    // 0x24a074: 0x3c03507f  lui         $v1, 0x507F
    ctx->pc = 0x24a074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20607 << 16));
    // 0x24a078: 0x3c041e32  lui         $a0, 0x1E32
    ctx->pc = 0x24a078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7730 << 16));
    // 0x24a07c: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x24a07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x24a080: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24A080u;
    {
        const bool branch_taken_0x24a080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A080u;
        // 0x24a084: 0x34841e00  ori         $a0, $a0, 0x1E00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7680);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a080) {
            ctx->pc = 0x24A0D8u;
            goto label_24a0d8;
        }
    }
    ctx->pc = 0x24A088u;
label_24a088:
    // 0x24a088: 0x9382a02c  lbu         $v0, -0x5FD4($gp)
    ctx->pc = 0x24a088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24a08c: 0x3c033c7f  lui         $v1, 0x3C7F
    ctx->pc = 0x24a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15487 << 16));
    // 0x24a090: 0x3c04143c  lui         $a0, 0x143C
    ctx->pc = 0x24a090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5180 << 16));
    // 0x24a094: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x24a094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x24a098: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24A098u;
    {
        const bool branch_taken_0x24a098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A098u;
        // 0x24a09c: 0x34841400  ori         $a0, $a0, 0x1400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a098) {
            ctx->pc = 0x24A0D8u;
            goto label_24a0d8;
        }
    }
    ctx->pc = 0x24A0A0u;
label_24a0a0:
    // 0x24a0a0: 0x9382a02d  lbu         $v0, -0x5FD3($gp)
    ctx->pc = 0x24a0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942765)));
    // 0x24a0a4: 0x3c037f3c  lui         $v1, 0x7F3C
    ctx->pc = 0x24a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32572 << 16));
    // 0x24a0a8: 0x3c043c14  lui         $a0, 0x3C14
    ctx->pc = 0x24a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15380 << 16));
    // 0x24a0ac: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x24a0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x24a0b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24A0B0u;
    {
        const bool branch_taken_0x24a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0B0u;
        // 0x24a0b4: 0x34841400  ori         $a0, $a0, 0x1400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0b0) {
            ctx->pc = 0x24A0D8u;
            goto label_24a0d8;
        }
    }
    ctx->pc = 0x24A0B8u;
label_24a0b8:
    // 0x24a0b8: 0x9382a02d  lbu         $v0, -0x5FD3($gp)
    ctx->pc = 0x24a0b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942765)));
    // 0x24a0bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A0BCu;
    {
        const bool branch_taken_0x24a0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0BCu;
        // 0x24a0c0: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0bc) {
            ctx->pc = 0x24A0CCu;
            goto label_24a0cc;
        }
    }
    ctx->pc = 0x24A0C4u;
label_24a0c4:
    // 0x24a0c4: 0x9382a02c  lbu         $v0, -0x5FD4($gp)
    ctx->pc = 0x24a0c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24a0c8: 0x3c03647f  lui         $v1, 0x647F
    ctx->pc = 0x24a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25727 << 16));
label_24a0cc:
    // 0x24a0cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x24a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x24a0d0: 0x34637f00  ori         $v1, $v1, 0x7F00
    ctx->pc = 0x24a0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32512);
    // 0x24a0d4: 0x34843f00  ori         $a0, $a0, 0x3F00
    ctx->pc = 0x24a0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16128);
label_24a0d8:
    // 0x24a0d8: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x24a0d8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24a0dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24A0DCu;
    {
        const bool branch_taken_0x24a0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0DCu;
        // 0x24a0e0: 0x44a025  or          $s4, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0dc) {
            ctx->pc = 0x24A108u;
            goto label_24a108;
        }
    }
    ctx->pc = 0x24A0E4u;
label_24a0e4:
    // 0x24a0e4: 0x3c16283c  lui         $s6, 0x283C
    ctx->pc = 0x24a0e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)10300 << 16));
    // 0x24a0e8: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x24a0e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x24a0ec: 0x36d63c5a  ori         $s6, $s6, 0x3C5A
    ctx->pc = 0x24a0ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)15450);
    // 0x24a0f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24A0F0u;
    {
        const bool branch_taken_0x24a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0F0u;
        // 0x24a0f4: 0x36943c3c  ori         $s4, $s4, 0x3C3C (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)15420);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0f0) {
            ctx->pc = 0x24A108u;
            goto label_24a108;
        }
    }
    ctx->pc = 0x24A0F8u;
label_24a0f8:
    // 0x24a0f8: 0x3c166464  lui         $s6, 0x6464
    ctx->pc = 0x24a0f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)25700 << 16));
    // 0x24a0fc: 0x3c142828  lui         $s4, 0x2828
    ctx->pc = 0x24a0fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)10280 << 16));
    // 0x24a100: 0x36d66464  ori         $s6, $s6, 0x6464
    ctx->pc = 0x24a100u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)25700);
    // 0x24a104: 0x3694285a  ori         $s4, $s4, 0x285A
    ctx->pc = 0x24a104u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)10330);
label_24a108:
    // 0x24a108: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x24a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24a10c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x24a10cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a110: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x24a110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x24a114: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x24a114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a118: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24a118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a11c: 0x45b818  mult        $s7, $v0, $a1
    ctx->pc = 0x24a11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
    // 0x24a120: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x24a120u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24a124: 0x1ae0001d  blez        $s7, . + 4 + (0x1D << 2)
    ctx->pc = 0x24A124u;
    {
        const bool branch_taken_0x24a124 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x24A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A124u;
        // 0x24a128: 0x8eb2000c  lw          $s2, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a124) {
            ctx->pc = 0x24A19Cu;
            goto label_24a19c;
        }
    }
    ctx->pc = 0x24A12Cu;
    // 0x24a12c: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x24a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x24a130: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x24a130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x24a134: 0x0  nop
    ctx->pc = 0x24a134u;
    // NOP
label_24a138:
    // 0x24a138: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A138u;
    {
        const bool branch_taken_0x24a138 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a138) {
            ctx->pc = 0x24A13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A138u;
            // 0x24a13c: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A154u;
            goto label_24a154;
        }
    }
    ctx->pc = 0x24A140u;
    // 0x24a140: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x24a140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x24a144: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x24a144u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24a148: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x24a148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a14c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x24a14cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24a150: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x24a150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_24a154:
    // 0x24a154: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A154u;
    {
        const bool branch_taken_0x24a154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A154u;
        // 0x24a158: 0x3c060020  lui         $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a154) {
            ctx->pc = 0x24A174u;
            goto label_24a174;
        }
    }
    ctx->pc = 0x24A15Cu;
    // 0x24a15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a160: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x24a160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x24a164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24a164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a168: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x24a168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x24a16c: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A16Cu;
    SET_GPR_U32(ctx, 31, 0x24A174u);
    ctx->pc = 0x24A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A16Cu;
    // 0x24a170: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A16Cu, 0x24A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A174u;
label_24a174:
    // 0x24a174: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x24a174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x24a178: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x24a178u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x24a17c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24a17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24a180: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24a180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24a184: 0x3d7102a  slt         $v0, $fp, $s7
    ctx->pc = 0x24a184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x24a188: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x24A188u;
    {
        const bool branch_taken_0x24a188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A188u;
        // 0x24a18c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a188) {
            ctx->pc = 0x24A138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a138;
        }
    }
    ctx->pc = 0x24A190u;
    // 0x24a190: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x24a190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24a194: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A194u;
    {
        const bool branch_taken_0x24a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A194u;
        // 0x24a198: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a194) {
            ctx->pc = 0x24A1A4u;
            goto label_24a1a4;
        }
    }
    ctx->pc = 0x24A19Cu;
label_24a19c:
    // 0x24a19c: 0x26a3000c  addiu       $v1, $s5, 0xC
    ctx->pc = 0x24a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x24a1a0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x24a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_24a1a4:
    // 0x24a1a4: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x24a1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x24a1a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24a1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a1ac: 0x8f84a0dc  lw          $a0, -0x5F24($gp)
    ctx->pc = 0x24a1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x24a1b0: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x24a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x24a1b4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x24a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24a1b8: 0x83f023  subu        $fp, $a0, $v1
    ctx->pc = 0x24a1b8u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24a1bc: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x24a1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a1c0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x24a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24a1c4: 0x265b818  mult        $s7, $s3, $a1
    ctx->pc = 0x24a1c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
    // 0x24a1c8: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x24a1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24a1cc: 0x3c2182b  sltu        $v1, $fp, $v0
    ctx->pc = 0x24a1ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24a1d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24a1d4: 0x43f00a  movz        $fp, $v0, $v1
    ctx->pc = 0x24a1d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
    // 0x24a1d8: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x24a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x24a1dc: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x24a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x24a1e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24a1e4: 0x1ae0005f  blez        $s7, . + 4 + (0x5F << 2)
    ctx->pc = 0x24A1E4u;
    {
        const bool branch_taken_0x24a1e4 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x24A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1E4u;
        // 0x24a1e8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1e4) {
            ctx->pc = 0x24A364u;
            goto label_24a364;
        }
    }
    ctx->pc = 0x24A1ECu;
    // 0x24a1ec: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x24a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x24a1f0: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x24a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x24a1f4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x24a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x24a1f8: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x24a1f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a1fc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x24a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x24a200: 0x34845555  ori         $a0, $a0, 0x5555
    ctx->pc = 0x24a200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21845);
    // 0x24a204: 0x34a5aaab  ori         $a1, $a1, 0xAAAB
    ctx->pc = 0x24a204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43691);
    // 0x24a208: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x24a208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x24a20c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x24a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x24a210: 0x3c170020  lui         $s7, 0x20
    ctx->pc = 0x24a210u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32 << 16));
    // 0x24a214: 0x0  nop
    ctx->pc = 0x24a214u;
    // NOP
label_24a218:
    // 0x24a218: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A218u;
    {
        const bool branch_taken_0x24a218 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A218u;
        // 0x24a21c: 0x92540000  lbu         $s4, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a218) {
            ctx->pc = 0x24A238u;
            goto label_24a238;
        }
    }
    ctx->pc = 0x24A220u;
    // 0x24a220: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x24a220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a224: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x24a224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x24a228: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x24a228u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24a22c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x24a22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x24a230: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x24a230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a234: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x24a234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_24a238:
    // 0x24a238: 0x12800045  beqz        $s4, . + 4 + (0x45 << 2)
    ctx->pc = 0x24A238u;
    {
        const bool branch_taken_0x24a238 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A238u;
        // 0x24a23c: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a238) {
            ctx->pc = 0x24A350u;
            goto label_24a350;
        }
    }
    ctx->pc = 0x24A240u;
    // 0x24a240: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24A240u;
    {
        const bool branch_taken_0x24a240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A240u;
        // 0x24a244: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a240) {
            ctx->pc = 0x24A288u;
            goto label_24a288;
        }
    }
    ctx->pc = 0x24A248u;
    // 0x24a248: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x24a248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24a24c: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A24Cu;
    {
        const bool branch_taken_0x24a24c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A24Cu;
        // 0x24a250: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a24c) {
            ctx->pc = 0x24A26Cu;
            goto label_24a26c;
        }
    }
    ctx->pc = 0x24A254u;
    // 0x24a254: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x24a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24a258: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x24a258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24a25c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24a25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a260: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A260u;
    {
        const bool branch_taken_0x24a260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A260u;
        // 0x24a264: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a260) {
            ctx->pc = 0x24A288u;
            goto label_24a288;
        }
    }
    ctx->pc = 0x24A268u;
    // 0x24a268: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x24a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_24a26c:
    // 0x24a26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a270: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24a270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a274: 0x2173021  addu        $a2, $s0, $s7
    ctx->pc = 0x24a274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x24a278: 0x2233821  addu        $a3, $s1, $v1
    ctx->pc = 0x24a278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24a27c: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A27Cu;
    SET_GPR_U32(ctx, 31, 0x24A284u);
    ctx->pc = 0x24A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A27Cu;
    // 0x24a280: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A27Cu, 0x24A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A284u;
label_24a284:
    // 0x24a284: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x24a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_24a288:
    // 0x24a288: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24A288u;
    {
        const bool branch_taken_0x24a288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A288u;
        // 0x24a28c: 0x32820004  andi        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a288) {
            ctx->pc = 0x24A2C8u;
            goto label_24a2c8;
        }
    }
    ctx->pc = 0x24A290u;
    // 0x24a290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a294: 0x12640005  beq         $s3, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A294u;
    {
        const bool branch_taken_0x24a294 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x24A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A294u;
        // 0x24a298: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a294) {
            ctx->pc = 0x24A2ACu;
            goto label_24a2ac;
        }
    }
    ctx->pc = 0x24A29Cu;
    // 0x24a29c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x24a29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x24a2a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A2A0u;
    {
        const bool branch_taken_0x24a2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2A0u;
        // 0x24a2a4: 0x32820004  andi        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2a0) {
            ctx->pc = 0x24A2C8u;
            goto label_24a2c8;
        }
    }
    ctx->pc = 0x24A2A8u;
    // 0x24a2a8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x24a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24a2ac:
    // 0x24a2ac: 0x2173021  addu        $a2, $s0, $s7
    ctx->pc = 0x24a2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x24a2b0: 0x2373821  addu        $a3, $s1, $s7
    ctx->pc = 0x24a2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x24a2b4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x24a2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a2b8: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x24a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24a2bc: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A2BCu;
    SET_GPR_U32(ctx, 31, 0x24A2C4u);
    ctx->pc = 0x24A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A2BCu;
    // 0x24a2c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A2BCu, 0x24A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2C4u;
label_24a2c4:
    // 0x24a2c4: 0x32820004  andi        $v0, $s4, 0x4
    ctx->pc = 0x24a2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_24a2c8:
    // 0x24a2c8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24A2C8u;
    {
        const bool branch_taken_0x24a2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2C8u;
        // 0x24a2cc: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2c8) {
            ctx->pc = 0x24A314u;
            goto label_24a314;
        }
    }
    ctx->pc = 0x24A2D0u;
    // 0x24a2d0: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x24a2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a2d8: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A2D8u;
    {
        const bool branch_taken_0x24a2d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2D8u;
        // 0x24a2dc: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2d8) {
            ctx->pc = 0x24A2F8u;
            goto label_24a2f8;
        }
    }
    ctx->pc = 0x24A2E0u;
    // 0x24a2e0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x24a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24a2e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x24a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24a2e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24a2e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a2ec: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A2ECu;
    {
        const bool branch_taken_0x24a2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2ECu;
        // 0x24a2f0: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2ec) {
            ctx->pc = 0x24A314u;
            goto label_24a314;
        }
    }
    ctx->pc = 0x24A2F4u;
    // 0x24a2f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24a2f8:
    // 0x24a2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a2fc: 0x2173021  addu        $a2, $s0, $s7
    ctx->pc = 0x24a2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x24a300: 0x2373821  addu        $a3, $s1, $s7
    ctx->pc = 0x24a300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x24a304: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x24a304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24a308: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A308u;
    SET_GPR_U32(ctx, 31, 0x24A310u);
    ctx->pc = 0x24A30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A308u;
    // 0x24a30c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A308u, 0x24A310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A310u;
label_24a310:
    // 0x24a310: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x24a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_24a314:
    // 0x24a314: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x24A314u;
    {
        const bool branch_taken_0x24a314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a314) {
            ctx->pc = 0x24A318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A314u;
            // 0x24a318: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A354u;
            goto label_24a354;
        }
    }
    ctx->pc = 0x24A31Cu;
    // 0x24a31c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x24a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24a320: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A320u;
    {
        const bool branch_taken_0x24a320 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A320u;
        // 0x24a324: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a320) {
            ctx->pc = 0x24A338u;
            goto label_24a338;
        }
    }
    ctx->pc = 0x24A328u;
    // 0x24a328: 0x9242ffff  lbu         $v0, -0x1($s2)
    ctx->pc = 0x24a328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
    // 0x24a32c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A32Cu;
    {
        const bool branch_taken_0x24a32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a32c) {
            ctx->pc = 0x24A330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A32Cu;
            // 0x24a330: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A354u;
            goto label_24a354;
        }
    }
    ctx->pc = 0x24A334u;
    // 0x24a334: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x24a334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_24a338:
    // 0x24a338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a33c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24a33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a340: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x24a340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a344: 0x2073021  addu        $a2, $s0, $a3
    ctx->pc = 0x24a344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x24a348: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A348u;
    SET_GPR_U32(ctx, 31, 0x24A350u);
    ctx->pc = 0x24A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A348u;
    // 0x24a34c: 0x2373821  addu        $a3, $s1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A348u, 0x24A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A350u;
label_24a350:
    // 0x24a350: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x24a350u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_24a354:
    // 0x24a354: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24a354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24a358: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x24a358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x24a35c: 0x17c0ffae  bnez        $fp, . + 4 + (-0x52 << 2)
    ctx->pc = 0x24A35Cu;
    {
        const bool branch_taken_0x24a35c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A35Cu;
        // 0x24a360: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a35c) {
            ctx->pc = 0x24A218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a218;
        }
    }
    ctx->pc = 0x24A364u;
label_24a364:
    // 0x24a364: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x24a364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x24a368: 0x18c00097  blez        $a2, . + 4 + (0x97 << 2)
    ctx->pc = 0x24A368u;
    {
        const bool branch_taken_0x24a368 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x24A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A368u;
        // 0x24a36c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a368) {
            ctx->pc = 0x24A5C8u;
            goto label_24a5c8;
        }
    }
    ctx->pc = 0x24A370u;
    // 0x24a370: 0x3c170002  lui         $s7, 0x2
    ctx->pc = 0x24a370u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)2 << 16));
    // 0x24a374: 0x3c16fffd  lui         $s6, 0xFFFD
    ctx->pc = 0x24a374u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65533 << 16));
    // 0x24a378: 0x3c140008  lui         $s4, 0x8
    ctx->pc = 0x24a378u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)8 << 16));
    // 0x24a37c: 0x36f7aaaa  ori         $s7, $s7, 0xAAAA
    ctx->pc = 0x24a37cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)43690);
    // 0x24a380: 0x36d65556  ori         $s6, $s6, 0x5556
    ctx->pc = 0x24a380u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)21846);
    // 0x24a384: 0x26b20020  addiu       $s2, $s5, 0x20
    ctx->pc = 0x24a384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_24a388:
    // 0x24a388: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x24a388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x24a38c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x24a38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x24a390: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x24a390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x24a394: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x24a394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a398: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x24a398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x24a39c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x24a39cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24a3a0: 0xe28821  addu        $s1, $a3, $v0
    ctx->pc = 0x24a3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24a3a4: 0x8f84a0dc  lw          $a0, -0x5F24($gp)
    ctx->pc = 0x24a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x24a3a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x24a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24a3ac: 0x31d40  sll         $v1, $v1, 21
    ctx->pc = 0x24a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 21));
    // 0x24a3b0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x24a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24a3b4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x24a3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a3b8: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x24a3b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x24a3bc: 0x5482007f  bnel        $a0, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x24A3BCu;
    {
        const bool branch_taken_0x24a3bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a3bc) {
            ctx->pc = 0x24A3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A3BCu;
            // 0x24a3c0: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A5BCu;
            goto label_24a5bc;
        }
    }
    ctx->pc = 0x24A3C4u;
    // 0x24a3c4: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x24a3c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24a3c8: 0x3c1300b0  lui         $s3, 0xB0
    ctx->pc = 0x24a3c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)176 << 16));
    // 0x24a3cc: 0x3c02781e  lui         $v0, 0x781E
    ctx->pc = 0x24a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30750 << 16));
    // 0x24a3d0: 0x36737864  ori         $s3, $s3, 0x7864
    ctx->pc = 0x24a3d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)30820);
    // 0x24a3d4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x24a3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x24a3d8: 0x34421e64  ori         $v0, $v0, 0x1E64
    ctx->pc = 0x24a3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7780);
    // 0x24a3dc: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x24a3dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x24a3e0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x24a3e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24a3e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a3e8: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x24A3E8u;
    {
        const bool branch_taken_0x24a3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3E8u;
        // 0x24a3ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3e8) {
            ctx->pc = 0x24A490u;
            goto label_24a490;
        }
    }
    ctx->pc = 0x24A3F0u;
    // 0x24a3f0: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x24a3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24a3f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A3F4u;
    {
        const bool branch_taken_0x24a3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3F4u;
        // 0x24a3f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3f4) {
            ctx->pc = 0x24A40Cu;
            goto label_24a40c;
        }
    }
    ctx->pc = 0x24A3FCu;
    // 0x24a3fc: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A3FCu;
    {
        const bool branch_taken_0x24a3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3FCu;
        // 0x24a400: 0x3c03ffe0  lui         $v1, 0xFFE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3fc) {
            ctx->pc = 0x24A424u;
            goto label_24a424;
        }
    }
    ctx->pc = 0x24A404u;
    // 0x24a404: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x24A404u;
    {
        const bool branch_taken_0x24a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A404u;
        // 0x24a408: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a404) {
            ctx->pc = 0x24A5BCu;
            goto label_24a5bc;
        }
    }
    ctx->pc = 0x24A40Cu;
label_24a40c:
    // 0x24a40c: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x24A40Cu;
    {
        const bool branch_taken_0x24a40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A40Cu;
        // 0x24a410: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a40c) {
            ctx->pc = 0x24A4FCu;
            goto label_24a4fc;
        }
    }
    ctx->pc = 0x24A414u;
    // 0x24a414: 0x10820050  beq         $a0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x24A414u;
    {
        const bool branch_taken_0x24a414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A414u;
        // 0x24a418: 0x3c05ffe0  lui         $a1, 0xFFE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a414) {
            ctx->pc = 0x24A558u;
            goto label_24a558;
        }
    }
    ctx->pc = 0x24A41Cu;
    // 0x24a41c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x24A41Cu;
    {
        const bool branch_taken_0x24a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A41Cu;
        // 0x24a420: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a41c) {
            ctx->pc = 0x24A5BCu;
            goto label_24a5bc;
        }
    }
    ctx->pc = 0x24A424u;
label_24a424:
    // 0x24a424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a428: 0xc0914ba  jal         func_2452E8
    ctx->pc = 0x24A428u;
    SET_GPR_U32(ctx, 31, 0x24A430u);
    ctx->pc = 0x24A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A428u;
    // 0x24a42c: 0x2032821  addu        $a1, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2452E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452E8u, 0x24A428u, 0x24A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A430u;
label_24a430:
    // 0x24a430: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x24a430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x24a434: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A434u;
    {
        const bool branch_taken_0x24a434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A434u;
        // 0x24a438: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a434) {
            ctx->pc = 0x24A464u;
            goto label_24a464;
        }
    }
    ctx->pc = 0x24A43Cu;
    // 0x24a43c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24a43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a440: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x24a440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x24a444: 0x113543  sra         $a2, $s1, 21
    ctx->pc = 0x24a444u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 21));
    // 0x24a448: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x24a448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x24a44c: 0x103d43  sra         $a3, $s0, 21
    ctx->pc = 0x24a44cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 21));
    // 0x24a450: 0x8f84a0fc  lw          $a0, -0x5F04($gp)
    ctx->pc = 0x24a450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x24a454: 0xc0927a0  jal         func_249E80
    ctx->pc = 0x24A454u;
    SET_GPR_U32(ctx, 31, 0x24A45Cu);
    ctx->pc = 0x24A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A454u;
    // 0x24a458: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E80u, 0x24A454u, 0x24A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A45Cu;
label_24a45c:
    // 0x24a45c: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x24A45Cu;
    {
        const bool branch_taken_0x24a45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a45c) {
            ctx->pc = 0x24A460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A45Cu;
            // 0x24a460: 0x8ea6001c  lw          $a2, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A5B8u;
            goto label_24a5b8;
        }
    }
    ctx->pc = 0x24A464u;
label_24a464:
    // 0x24a464: 0x92460004  lbu         $a2, 0x4($s2)
    ctx->pc = 0x24a464u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24a468: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24a468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a46c: 0x2342021  addu        $a0, $s1, $s4
    ctx->pc = 0x24a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x24a470: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x24a470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a474: 0x63540  sll         $a2, $a2, 21
    ctx->pc = 0x24a474u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 21));
    // 0x24a478: 0xb73821  addu        $a3, $a1, $s7
    ctx->pc = 0x24a478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_24a47c:
    // 0x24a47c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x24a47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x24a480: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A480u;
    SET_GPR_U32(ctx, 31, 0x24A488u);
    ctx->pc = 0x24A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A480u;
    // 0x24a484: 0xd43023  subu        $a2, $a2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A480u, 0x24A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A488u;
label_24a488:
    // 0x24a488: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x24A488u;
    {
        const bool branch_taken_0x24a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A488u;
        // 0x24a48c: 0x8ea6001c  lw          $a2, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a488) {
            ctx->pc = 0x24A5B8u;
            goto label_24a5b8;
        }
    }
    ctx->pc = 0x24A490u;
label_24a490:
    // 0x24a490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a494: 0xc0914ba  jal         func_2452E8
    ctx->pc = 0x24A494u;
    SET_GPR_U32(ctx, 31, 0x24A49Cu);
    ctx->pc = 0x24A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A494u;
    // 0x24a498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2452E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452E8u, 0x24A494u, 0x24A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A49Cu;
label_24a49c:
    // 0x24a49c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24a49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24a4a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A4A0u;
    {
        const bool branch_taken_0x24a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4A0u;
        // 0x24a4a4: 0x8fa7000c  lw          $a3, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4a0) {
            ctx->pc = 0x24A4D0u;
            goto label_24a4d0;
        }
    }
    ctx->pc = 0x24A4A8u;
    // 0x24a4a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24a4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4ac: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x24a4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x24a4b0: 0x113543  sra         $a2, $s1, 21
    ctx->pc = 0x24a4b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 21));
    // 0x24a4b4: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x24a4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x24a4b8: 0x8f84a0fc  lw          $a0, -0x5F04($gp)
    ctx->pc = 0x24a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x24a4bc: 0x103d43  sra         $a3, $s0, 21
    ctx->pc = 0x24a4bcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 21));
    // 0x24a4c0: 0xc0927a0  jal         func_249E80
    ctx->pc = 0x24A4C0u;
    SET_GPR_U32(ctx, 31, 0x24A4C8u);
    ctx->pc = 0x24A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4C0u;
    // 0x24a4c4: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E80u, 0x24A4C0u, 0x24A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4C8u;
label_24a4c8:
    // 0x24a4c8: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x24A4C8u;
    {
        const bool branch_taken_0x24a4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a4c8) {
            ctx->pc = 0x24A4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A4C8u;
            // 0x24a4cc: 0x8ea6001c  lw          $a2, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A5B8u;
            goto label_24a5b8;
        }
    }
    ctx->pc = 0x24A4D0u;
label_24a4d0:
    // 0x24a4d0: 0x92470004  lbu         $a3, 0x4($s2)
    ctx->pc = 0x24a4d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24a4d4: 0x2142821  addu        $a1, $s0, $s4
    ctx->pc = 0x24a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x24a4d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24a4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4dc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x24a4dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4e0: 0x73d40  sll         $a3, $a3, 21
    ctx->pc = 0x24a4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x24a4e4: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x24a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x24a4e8: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x24a4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_24a4ec:
    // 0x24a4ec: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A4ECu;
    SET_GPR_U32(ctx, 31, 0x24A4F4u);
    ctx->pc = 0x24A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4ECu;
    // 0x24a4f0: 0xf43823  subu        $a3, $a3, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A4ECu, 0x24A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4F4u;
label_24a4f4:
    // 0x24a4f4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24A4F4u;
    {
        const bool branch_taken_0x24a4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4F4u;
        // 0x24a4f8: 0x8ea6001c  lw          $a2, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4f4) {
            ctx->pc = 0x24A5B8u;
            goto label_24a5b8;
        }
    }
    ctx->pc = 0x24A4FCu;
label_24a4fc:
    // 0x24a4fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a500: 0xc0914ba  jal         func_2452E8
    ctx->pc = 0x24A500u;
    SET_GPR_U32(ctx, 31, 0x24A508u);
    ctx->pc = 0x24A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A500u;
    // 0x24a504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2452E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452E8u, 0x24A500u, 0x24A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A508u;
label_24a508:
    // 0x24a508: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24a50c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A50Cu;
    {
        const bool branch_taken_0x24a50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A50Cu;
        // 0x24a510: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a50c) {
            ctx->pc = 0x24A53Cu;
            goto label_24a53c;
        }
    }
    ctx->pc = 0x24A514u;
    // 0x24a514: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24a514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a518: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x24a518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x24a51c: 0x113543  sra         $a2, $s1, 21
    ctx->pc = 0x24a51cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 21));
    // 0x24a520: 0x8c680014  lw          $t0, 0x14($v1)
    ctx->pc = 0x24a520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x24a524: 0x103d43  sra         $a3, $s0, 21
    ctx->pc = 0x24a524u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 21));
    // 0x24a528: 0x8f84a0fc  lw          $a0, -0x5F04($gp)
    ctx->pc = 0x24a528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x24a52c: 0xc0927a0  jal         func_249E80
    ctx->pc = 0x24A52Cu;
    SET_GPR_U32(ctx, 31, 0x24A534u);
    ctx->pc = 0x24A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A52Cu;
    // 0x24a530: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E80u, 0x24A52Cu, 0x24A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A534u;
label_24a534:
    // 0x24a534: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x24A534u;
    {
        const bool branch_taken_0x24a534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a534) {
            ctx->pc = 0x24A538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A534u;
            // 0x24a538: 0x8ea6001c  lw          $a2, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A5B8u;
            goto label_24a5b8;
        }
    }
    ctx->pc = 0x24A53Cu;
label_24a53c:
    // 0x24a53c: 0x92460004  lbu         $a2, 0x4($s2)
    ctx->pc = 0x24a53cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24a540: 0x2342021  addu        $a0, $s1, $s4
    ctx->pc = 0x24a540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x24a544: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24a544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a548: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x24a548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a54c: 0x63540  sll         $a2, $a2, 21
    ctx->pc = 0x24a54cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 21));
    // 0x24a550: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x24A550u;
    {
        const bool branch_taken_0x24a550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A550u;
        // 0x24a554: 0x2162821  addu        $a1, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a550) {
            ctx->pc = 0x24A47Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a47c;
        }
    }
    ctx->pc = 0x24A558u;
label_24a558:
    // 0x24a558: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x24a558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x24a55c: 0xc0914ba  jal         func_2452E8
    ctx->pc = 0x24A55Cu;
    SET_GPR_U32(ctx, 31, 0x24A564u);
    ctx->pc = 0x24A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A55Cu;
    // 0x24a560: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2452E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452E8u, 0x24A55Cu, 0x24A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A564u;
label_24a564:
    // 0x24a564: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24a564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24a568: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A568u;
    {
        const bool branch_taken_0x24a568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A568u;
        // 0x24a56c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a568) {
            ctx->pc = 0x24A598u;
            goto label_24a598;
        }
    }
    ctx->pc = 0x24A570u;
    // 0x24a570: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x24a570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x24a574: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x24a574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x24a578: 0x113543  sra         $a2, $s1, 21
    ctx->pc = 0x24a578u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 21));
    // 0x24a57c: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x24a57cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x24a580: 0x8f84a0fc  lw          $a0, -0x5F04($gp)
    ctx->pc = 0x24a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x24a584: 0x103d43  sra         $a3, $s0, 21
    ctx->pc = 0x24a584u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 21));
    // 0x24a588: 0xc0927a0  jal         func_249E80
    ctx->pc = 0x24A588u;
    SET_GPR_U32(ctx, 31, 0x24A590u);
    ctx->pc = 0x24A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A588u;
    // 0x24a58c: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E80u, 0x24A588u, 0x24A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A590u;
label_24a590:
    // 0x24a590: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A590u;
    {
        const bool branch_taken_0x24a590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a590) {
            ctx->pc = 0x24A594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A590u;
            // 0x24a594: 0x8ea6001c  lw          $a2, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A5B8u;
            goto label_24a5b8;
        }
    }
    ctx->pc = 0x24A598u;
label_24a598:
    // 0x24a598: 0x92470004  lbu         $a3, 0x4($s2)
    ctx->pc = 0x24a598u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24a59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5a0: 0x2142821  addu        $a1, $s0, $s4
    ctx->pc = 0x24a5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x24a5a4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x24a5a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5a8: 0x73d40  sll         $a3, $a3, 21
    ctx->pc = 0x24a5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x24a5ac: 0x973021  addu        $a2, $a0, $s7
    ctx->pc = 0x24a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x24a5b0: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x24A5B0u;
    {
        const bool branch_taken_0x24a5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5B0u;
        // 0x24a5b4: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5b0) {
            ctx->pc = 0x24A4ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a4ec;
        }
    }
    ctx->pc = 0x24A5B8u;
label_24a5b8:
    // 0x24a5b8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x24a5b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_24a5bc:
    // 0x24a5bc: 0x3c6102a  slt         $v0, $fp, $a2
    ctx->pc = 0x24a5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x24a5c0: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x24A5C0u;
    {
        const bool branch_taken_0x24a5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5C0u;
        // 0x24a5c4: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5c0) {
            ctx->pc = 0x24A388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a388;
        }
    }
    ctx->pc = 0x24A5C8u;
label_24a5c8:
    // 0x24a5c8: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x24a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24a5cc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x24a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24a5d0: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x24A5D0u;
    {
        const bool branch_taken_0x24a5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5D0u;
        // 0x24a5d4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5d0) {
            ctx->pc = 0x24A6E0u;
            goto label_24a6e0;
        }
    }
    ctx->pc = 0x24A5D8u;
    // 0x24a5d8: 0x8f83a0d4  lw          $v1, -0x5F2C($gp)
    ctx->pc = 0x24a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
    // 0x24a5dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a5e0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24A5E0u;
    {
        const bool branch_taken_0x24a5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5E0u;
        // 0x24a5e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5e0) {
            ctx->pc = 0x24A628u;
            goto label_24a628;
        }
    }
    ctx->pc = 0x24A5E8u;
    // 0x24a5e8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x24a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x24a5ec: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x24a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x24a5f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A5F0u;
    {
        const bool branch_taken_0x24a5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5F0u;
        // 0x24a5f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5f0) {
            ctx->pc = 0x24A628u;
            goto label_24a628;
        }
    }
    ctx->pc = 0x24A5F8u;
    // 0x24a5f8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x24a5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24a5fc: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x24a5fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24a600: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x24a600u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24a604: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x24a604u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24a608: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x24a608u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24a60c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x24a60cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a610: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x24a610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a614: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24a614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a618: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24a618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a61c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24a61cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a620: 0x80926e4  j           func_249B90
    ctx->pc = 0x24A620u;
    ctx->pc = 0x24A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A620u;
    // 0x24a624: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B90u;
    mmDrawItems_0x249b90(rdram, ctx, runtime); return;
    ctx->pc = 0x24A628u;
label_24a628:
    // 0x24a628: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x24A628u;
    {
        const bool branch_taken_0x24a628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A628u;
        // 0x24a62c: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a628) {
            ctx->pc = 0x24A6E0u;
            goto label_24a6e0;
        }
    }
    ctx->pc = 0x24A630u;
    // 0x24a630: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x24a630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a634: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x24a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24a638: 0x10a2002a  beq         $a1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24A638u;
    {
        const bool branch_taken_0x24a638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A638u;
        // 0x24a63c: 0xdfbe00a0  ld          $fp, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a638) {
            ctx->pc = 0x24A6E4u;
            goto label_24a6e4;
        }
    }
    ctx->pc = 0x24A640u;
    // 0x24a640: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x24a640u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x24a644: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x24a644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x24a648: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x24a648u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24a64c: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x24a64cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x24a650: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x24a650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24a654: 0x108540  sll         $s0, $s0, 21
    ctx->pc = 0x24a654u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 21));
    // 0x24a658: 0x118d40  sll         $s1, $s1, 21
    ctx->pc = 0x24a658u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 21));
    // 0x24a65c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x24a65cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x24a660: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x24a660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a664: 0xf08021  addu        $s0, $a3, $s0
    ctx->pc = 0x24a664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x24a668: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x24a668u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x24a66c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24a66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24a670: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x24a670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24a674: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x24a674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x24a678: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x24a678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24a67c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a684: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x24a684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x24a688: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A688u;
    SET_GPR_U32(ctx, 31, 0x24A690u);
    ctx->pc = 0x24A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A688u;
    // 0x24a68c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A688u, 0x24A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A690u;
label_24a690:
    // 0x24a690: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x24a690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x24a694: 0x3c06000e  lui         $a2, 0xE
    ctx->pc = 0x24a694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)14 << 16));
    // 0x24a698: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x24a698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x24a69c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x24a69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24a6a0: 0x8c880020  lw          $t0, 0x20($a0)
    ctx->pc = 0x24a6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x24a6a4: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x24a6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x24a6a8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x24a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x24a6ac: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x24a6acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24a6b0: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x24a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24a6b4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x24a6b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24a6b8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x24a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x24a6bc: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x24a6bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24a6c0: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x24a6c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24a6c4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x24a6c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a6c8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x24a6c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a6cc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24a6ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a6d0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24a6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a6d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24a6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a6d8: 0x80924d0  j           func_249340
    ctx->pc = 0x24A6D8u;
    ctx->pc = 0x24A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6D8u;
    // 0x24a6dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    mmDrawRect_0x249340(rdram, ctx, runtime); return;
    ctx->pc = 0x24A6E0u;
label_24a6e0:
    // 0x24a6e0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x24a6e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24a6e4:
    // 0x24a6e4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x24a6e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24a6e8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x24a6e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24a6ec: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x24a6ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24a6f0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x24a6f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a6f4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x24a6f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a6f8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24a6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a6fc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24a6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a700: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24a700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a704: 0x3e00008  jr          $ra
    ctx->pc = 0x24A704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A704u;
        // 0x24a708: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A70Cu;
}
