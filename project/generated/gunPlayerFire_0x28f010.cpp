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

// Function: gunPlayerFire
// Address: 0x28f010 - 0x28f2cc
void gunPlayerFire_0x28f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunPlayerFire_0x28f010");
#endif

    switch (ctx->pc) {
        case 0x28f168u: goto label_28f168;
        case 0x28f1e8u: goto label_28f1e8;
        case 0x28f2a8u: goto label_28f2a8;
        default: break;
    }

    ctx->pc = 0x28f010u;

    // 0x28f010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28f014: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x28f014u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f018: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28f01c: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x28f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28f020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f024: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x28f024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x28f028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28f02c: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x28f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x28f030: 0x8f8fb234  lw          $t7, -0x4DCC($gp)
    ctx->pc = 0x28f030u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28f034: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28f034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f038: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x28f038u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x28f03c: 0x8de40180  lw          $a0, 0x180($t7)
    ctx->pc = 0x28f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 384)));
    // 0x28f040: 0x1231818  mult        $v1, $t1, $v1
    ctx->pc = 0x28f040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28f044: 0x8f85b460  lw          $a1, -0x4BA0($gp)
    ctx->pc = 0x28f044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x28f048: 0x8c8d0160  lw          $t5, 0x160($a0)
    ctx->pc = 0x28f048u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x28f04c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x28f04cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f050: 0x262b00bc  addiu       $t3, $s1, 0xBC
    ctx->pc = 0x28f050u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
    // 0x28f054: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x28f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x28f058: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x28f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28f05c: 0x18a00096  blez        $a1, . + 4 + (0x96 << 2)
    ctx->pc = 0x28F05Cu;
    {
        const bool branch_taken_0x28f05c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F05Cu;
        // 0x28f060: 0x46580a  movz        $t3, $v0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f05c) {
            ctx->pc = 0x28F2B8u;
            goto label_28f2b8;
        }
    }
    ctx->pc = 0x28F064u;
    // 0x28f064: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x28f064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28f068: 0x15220009  bne         $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28F068u;
    {
        const bool branch_taken_0x28f068 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F068u;
        // 0x28f06c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f068) {
            ctx->pc = 0x28F090u;
            goto label_28f090;
        }
    }
    ctx->pc = 0x28F070u;
    // 0x28f070: 0x54c20008  bnel        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F070u;
    {
        const bool branch_taken_0x28f070 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f070) {
            ctx->pc = 0x28F074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F070u;
            // 0x28f074: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F094u;
            goto label_28f094;
        }
    }
    ctx->pc = 0x28F078u;
    // 0x28f078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f07c: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x28f07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f080: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28f080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f088: 0x80a5116  j           func_294458
    ctx->pc = 0x28F088u;
    ctx->pc = 0x28F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F088u;
    // 0x28f08c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294458u;
    gunDetonateRemoteMines_0x294458(rdram, ctx, runtime); return;
    ctx->pc = 0x28F090u;
label_28f090:
    // 0x28f090: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x28f090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_28f094:
    // 0x28f094: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x28f094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x28f098: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x28f098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x28f09c: 0xae070038  sw          $a3, 0x38($s0)
    ctx->pc = 0x28f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x28f0a0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F0A0u;
    {
        const bool branch_taken_0x28f0a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0A0u;
        // 0x28f0a4: 0xae0000a4  sw          $zero, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0a0) {
            ctx->pc = 0x28F0B0u;
            goto label_28f0b0;
        }
    }
    ctx->pc = 0x28F0A8u;
    // 0x28f0a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F0A8u;
    {
        const bool branch_taken_0x28f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0A8u;
        // 0x28f0ac: 0x8d6a0028  lw          $t2, 0x28($t3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0a8) {
            ctx->pc = 0x28F0B4u;
            goto label_28f0b4;
        }
    }
    ctx->pc = 0x28F0B0u;
label_28f0b0:
    // 0x28f0b0: 0x8d6a0024  lw          $t2, 0x24($t3)
    ctx->pc = 0x28f0b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
label_28f0b4:
    // 0x28f0b4: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x28f0b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28f0b8: 0x258e0004  addiu       $t6, $t4, 0x4
    ctx->pc = 0x28f0b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x28f0bc: 0x1c91821  addu        $v1, $t6, $t1
    ctx->pc = 0x28f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x28f0c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f0c4: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x28f0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x28f0c8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x28F0C8u;
    {
        const bool branch_taken_0x28f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0C8u;
        // 0x28f0cc: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0c8) {
            ctx->pc = 0x28F190u;
            goto label_28f190;
        }
    }
    ctx->pc = 0x28F0D0u;
    // 0x28f0d0: 0x18a00031  blez        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x28F0D0u;
    {
        const bool branch_taken_0x28f0d0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0D0u;
        // 0x28f0d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0d0) {
            ctx->pc = 0x28F198u;
            goto label_28f198;
        }
    }
    ctx->pc = 0x28F0D8u;
    // 0x28f0d8: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F0D8u;
    {
        const bool branch_taken_0x28f0d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0D8u;
        // 0x28f0dc: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0d8) {
            ctx->pc = 0x28F0F4u;
            goto label_28f0f4;
        }
    }
    ctx->pc = 0x28F0E0u;
    // 0x28f0e0: 0x1a91821  addu        $v1, $t5, $t1
    ctx->pc = 0x28f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x28f0e4: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x28f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x28f0e8: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x28f0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x28f0ec: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x28F0ECu;
    {
        const bool branch_taken_0x28f0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f0ec) {
            ctx->pc = 0x28F0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F0ECu;
            // 0x28f0f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F170u;
            goto label_28f170;
        }
    }
    ctx->pc = 0x28F0F4u;
label_28f0f4:
    // 0x28f0f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f0f8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x28f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28f0fc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x28f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x28f100: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x28f100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x28f104: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F104u;
    {
        const bool branch_taken_0x28f104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F104u;
        // 0x28f108: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f104) {
            ctx->pc = 0x28F130u;
            goto label_28f130;
        }
    }
    ctx->pc = 0x28F10Cu;
    // 0x28f10c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x28f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28f110: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F110u;
    {
        const bool branch_taken_0x28f110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F110u;
        // 0x28f114: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f110) {
            ctx->pc = 0x28F130u;
            goto label_28f130;
        }
    }
    ctx->pc = 0x28F118u;
    // 0x28f118: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F118u;
    {
        const bool branch_taken_0x28f118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F118u;
        // 0x28f11c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f118) {
            ctx->pc = 0x28F134u;
            goto label_28f134;
        }
    }
    ctx->pc = 0x28F120u;
    // 0x28f120: 0xc5600048  lwc1        $f0, 0x48($t3)
    ctx->pc = 0x28f120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f124: 0xc7818ae4  lwc1        $f1, -0x751C($gp)
    ctx->pc = 0x28f124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f128: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28f128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f12c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x28f12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_28f130:
    // 0x28f130: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x28f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_28f134:
    // 0x28f134: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F134u;
    {
        const bool branch_taken_0x28f134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F134u;
        // 0x28f138: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f134) {
            ctx->pc = 0x28F144u;
            goto label_28f144;
        }
    }
    ctx->pc = 0x28F13Cu;
    // 0x28f13c: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F13Cu;
    {
        const bool branch_taken_0x28f13c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f13c) {
            ctx->pc = 0x28F140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F13Cu;
            // 0x28f140: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F150u;
            goto label_28f150;
        }
    }
    ctx->pc = 0x28F144u;
label_28f144:
    // 0x28f144: 0xc560006c  lwc1        $f0, 0x6C($t3)
    ctx->pc = 0x28f144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f148: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x28f148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x28f14c: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x28f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_28f150:
    // 0x28f150: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x28f150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x28f154: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x28F154u;
    {
        const bool branch_taken_0x28f154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f154) {
            ctx->pc = 0x28F158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F154u;
            // 0x28f158: 0x8e220188  lw          $v0, 0x188($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F2ACu;
            goto label_28f2ac;
        }
    }
    ctx->pc = 0x28F15Cu;
    // 0x28f15c: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x28f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x28f160: 0xc081546  jal         func_205518
    ctx->pc = 0x28F160u;
    SET_GPR_U32(ctx, 31, 0x28F168u);
    ctx->pc = 0x28F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F160u;
    // 0x28f164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28F160u, 0x28F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F168u;
label_28f168:
    // 0x28f168: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x28F168u;
    {
        const bool branch_taken_0x28f168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F168u;
        // 0x28f16c: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f168) {
            ctx->pc = 0x28F2A8u;
            goto label_28f2a8;
        }
    }
    ctx->pc = 0x28F170u;
label_28f170:
    // 0x28f170: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f174: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28f174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f178: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x28f178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f180: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x28f180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f184: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28f184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f188: 0x80a36e4  j           func_28DB90
    ctx->pc = 0x28F188u;
    ctx->pc = 0x28F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F188u;
    // 0x28f18c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB90u;
    gunReload_0x28db90(rdram, ctx, runtime); return;
    ctx->pc = 0x28F190u;
label_28f190:
    // 0x28f190: 0x1ca00018  bgtz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x28F190u;
    {
        const bool branch_taken_0x28f190 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F190u;
        // 0x28f194: 0x8f829f54  lw          $v0, -0x60AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f190) {
            ctx->pc = 0x28F1F4u;
            goto label_28f1f4;
        }
    }
    ctx->pc = 0x28F198u;
label_28f198:
    // 0x28f198: 0x1a91021  addu        $v0, $t5, $t1
    ctx->pc = 0x28f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x28f19c: 0x8c42026c  lw          $v0, 0x26C($v0)
    ctx->pc = 0x28f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x28f1a0: 0x4a182a  slt         $v1, $v0, $t2
    ctx->pc = 0x28f1a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x28f1a4: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x28F1A4u;
    {
        const bool branch_taken_0x28f1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1a4) {
            ctx->pc = 0x28F1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F1A4u;
            // 0x28f1a8: 0x8f829f54  lw          $v0, -0x60AC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F1F4u;
            goto label_28f1f4;
        }
    }
    ctx->pc = 0x28F1ACu;
    // 0x28f1ac: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F1ACu;
    {
        const bool branch_taken_0x28f1ac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28f1ac) {
            ctx->pc = 0x28F1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F1ACu;
            // 0x28f1b0: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F1D0u;
            goto label_28f1d0;
        }
    }
    ctx->pc = 0x28F1B4u;
    // 0x28f1b4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x28f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x28f1b8: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x28f1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f1bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f1c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28f1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f1c8: 0x80a36b2  j           func_28DAC8
    ctx->pc = 0x28F1C8u;
    ctx->pc = 0x28F1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F1C8u;
    // 0x28f1cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DAC8u;
    changeToComboWithAmmo_0x28dac8(rdram, ctx, runtime); return;
    ctx->pc = 0x28F1D0u;
label_28f1d0:
    // 0x28f1d0: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x28f1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x28f1d4: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x28F1D4u;
    {
        const bool branch_taken_0x28f1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f1d4) {
            ctx->pc = 0x28F1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F1D4u;
            // 0x28f1d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F2B8u;
            goto label_28f2b8;
        }
    }
    ctx->pc = 0x28F1DCu;
    // 0x28f1dc: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x28f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x28f1e0: 0xc081546  jal         func_205518
    ctx->pc = 0x28F1E0u;
    SET_GPR_U32(ctx, 31, 0x28F1E8u);
    ctx->pc = 0x28F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F1E0u;
    // 0x28f1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28F1E0u, 0x28F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F1E8u;
label_28f1e8:
    // 0x28f1e8: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x28f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x28f1ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x28F1ECu;
    {
        const bool branch_taken_0x28f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1ECu;
        // 0x28f1f0: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1ec) {
            ctx->pc = 0x28F2B8u;
            goto label_28f2b8;
        }
    }
    ctx->pc = 0x28F1F4u;
label_28f1f4:
    // 0x28f1f4: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x28f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x28f1f8: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x28f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x28f1fc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x28f1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x28f200: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x28f200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x28f204: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f208: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28F208u;
    {
        const bool branch_taken_0x28f208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f208) {
            ctx->pc = 0x28F20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F208u;
            // 0x28f20c: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F244u;
            goto label_28f244;
        }
    }
    ctx->pc = 0x28F210u;
    // 0x28f210: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x28f210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x28f214: 0x8c62c4f8  lw          $v0, -0x3B08($v1)
    ctx->pc = 0x28f214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x28f218: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x28f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x28f21c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28F21Cu;
    {
        const bool branch_taken_0x28f21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f21c) {
            ctx->pc = 0x28F220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F21Cu;
            // 0x28f220: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F244u;
            goto label_28f244;
        }
    }
    ctx->pc = 0x28F224u;
    // 0x28f224: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F224u;
    {
        const bool branch_taken_0x28f224 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F224u;
        // 0x28f228: 0x1c91821  addu        $v1, $t6, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f224) {
            ctx->pc = 0x28F234u;
            goto label_28f234;
        }
    }
    ctx->pc = 0x28F22Cu;
    // 0x28f22c: 0x25a3026c  addiu       $v1, $t5, 0x26C
    ctx->pc = 0x28f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 620));
    // 0x28f230: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x28f230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_28f234:
    // 0x28f234: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f238: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x28f238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x28f23c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28f240: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x28f240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_28f244:
    // 0x28f244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f248: 0xad800044  sw          $zero, 0x44($t4)
    ctx->pc = 0x28f248u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 68), GPR_U32(ctx, 0));
    // 0x28f24c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x28f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x28f250: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x28f250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x28f254: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x28f254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f258: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x28f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x28f25c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x28f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x28f260: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x28f260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x28f264: 0x8de30180  lw          $v1, 0x180($t7)
    ctx->pc = 0x28f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 384)));
    // 0x28f268: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x28f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x28f26c: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x28f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x28f270: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x28f270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x28f274: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F274u;
    {
        const bool branch_taken_0x28f274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x28F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F274u;
        // 0x28f278: 0xae0c00ac  sw          $t4, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f274) {
            ctx->pc = 0x28F294u;
            goto label_28f294;
        }
    }
    ctx->pc = 0x28F27Cu;
    // 0x28f27c: 0x54c00006  bnel        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F27Cu;
    {
        const bool branch_taken_0x28f27c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f27c) {
            ctx->pc = 0x28F280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F27Cu;
            // 0x28f280: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F298u;
            goto label_28f298;
        }
    }
    ctx->pc = 0x28F284u;
    // 0x28f284: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x28f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28f288: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x28f288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x28f28c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28F28Cu;
    {
        const bool branch_taken_0x28f28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F28Cu;
        // 0x28f290: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f28c) {
            ctx->pc = 0x28F2A8u;
            goto label_28f2a8;
        }
    }
    ctx->pc = 0x28F294u;
label_28f294:
    // 0x28f294: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x28f294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_28f298:
    // 0x28f298: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F298u;
    {
        const bool branch_taken_0x28f298 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28f298) {
            ctx->pc = 0x28F29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F298u;
            // 0x28f29c: 0x8e220188  lw          $v0, 0x188($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F2ACu;
            goto label_28f2ac;
        }
    }
    ctx->pc = 0x28F2A0u;
    // 0x28f2a0: 0xc0a38d8  jal         func_28E360
    ctx->pc = 0x28F2A0u;
    SET_GPR_U32(ctx, 31, 0x28F2A8u);
    ctx->pc = 0x28F2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F2A0u;
    // 0x28f2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E360u, 0x28F2A0u, 0x28F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2A8u;
label_28f2a8:
    // 0x28f2a8: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x28f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_28f2ac:
    // 0x28f2ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28F2ACu;
    {
        const bool branch_taken_0x28f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2ACu;
        // 0x28f2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2ac) {
            ctx->pc = 0x28F2B8u;
            goto label_28f2b8;
        }
    }
    ctx->pc = 0x28F2B4u;
    // 0x28f2b4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x28f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_28f2b8:
    // 0x28f2b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f2bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28f2bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f2c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2C4u;
        // 0x28f2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F2CCu;
}
