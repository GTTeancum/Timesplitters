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

// Function: mmFindPlug
// Address: 0x249e80 - 0x24a008
void mmFindPlug_0x249e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmFindPlug_0x249e80");
#endif

    switch (ctx->pc) {
        case 0x249f70u: goto label_249f70;
        case 0x249fa0u: goto label_249fa0;
        default: break;
    }

    ctx->pc = 0x249e80u;

    // 0x249e80: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x249e80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e84: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x249e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x249e88: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x249e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x249e8c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x249e8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e90: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x249e90u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e94: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x249e94u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x249e9c: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x249e9cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ea0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x249ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x249ea4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x249ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x249ea8: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x249ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x249eac: 0x8c8b001c  lw          $t3, 0x1C($a0)
    ctx->pc = 0x249eacu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x249eb0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x249EB0u;
    {
        const bool branch_taken_0x249eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EB0u;
        // 0x249eb4: 0x24890020  addiu       $t1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249eb0) {
            ctx->pc = 0x249F78u;
            goto label_249f78;
        }
    }
    ctx->pc = 0x249EB8u;
    // 0x249eb8: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x249eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x249ebc: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x249ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x249ec0: 0x8f86a158  lw          $a2, -0x5EA8($gp)
    ctx->pc = 0x249ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x249ec4: 0x84830026  lh          $v1, 0x26($a0)
    ctx->pc = 0x249ec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x249ec8: 0x84820022  lh          $v0, 0x22($a0)
    ctx->pc = 0x249ec8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x249ecc: 0x8f85a15c  lw          $a1, -0x5EA4($gp)
    ctx->pc = 0x249eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x249ed0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x249ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x249ed4: 0x8f84a188  lw          $a0, -0x5E78($gp)
    ctx->pc = 0x249ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x249ed8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x249ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x249edc: 0x8f87a18c  lw          $a3, -0x5E74($gp)
    ctx->pc = 0x249edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x249ee0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x249ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x249ee4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x249ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x249ee8: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x249ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x249eec: 0x70670018  mult1       $zero, $v1, $a3
    ctx->pc = 0x249eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x249ef0: 0x8d46000c  lw          $a2, 0xC($t2)
    ctx->pc = 0x249ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x249ef4: 0x8d470014  lw          $a3, 0x14($t2)
    ctx->pc = 0x249ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x249ef8: 0x2812  mflo        $a1
    ctx->pc = 0x249ef8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x249efc: 0x70002012  mflo1       $a0
    ctx->pc = 0x249efcu;
    SET_GPR_U64(ctx, 4, ctx->lo1);
    // 0x249f00: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x249f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x249f04: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x249f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x249f08: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x249f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x249f0c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x249f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x249f10: 0x1010  mfhi        $v0
    ctx->pc = 0x249f10u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x249f14: 0x70001810  mfhi1       $v1
    ctx->pc = 0x249f14u;
    SET_GPR_U64(ctx, 3, ctx->hi1);
    // 0x249f18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x249f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x249f1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x249f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x249f20: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x249f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x249f24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x249f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x249f28: 0x8f84a168  lw          $a0, -0x5E98($gp)
    ctx->pc = 0x249f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x249f2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x249f30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x249f30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x249f34: 0x8f85a16c  lw          $a1, -0x5E94($gp)
    ctx->pc = 0x249f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x249f38: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x249f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x249f3c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x249f3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x249f40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x249f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x249f44: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x249f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x249f48: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x249f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x249f4c: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x249f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x249f50: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x249f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x249f54: 0x8f83a0dc  lw          $v1, -0x5F24($gp)
    ctx->pc = 0x249f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x249f58: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x249f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x249f5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x249f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x249f60: 0x63543  sra         $a2, $a2, 21
    ctx->pc = 0x249f60u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 21));
    // 0x249f64: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x249f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x249f68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x249F68u;
    {
        const bool branch_taken_0x249f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F68u;
        // 0x249f6c: 0x23d43  sra         $a3, $v0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f68) {
            ctx->pc = 0x249F8Cu;
            goto label_249f8c;
        }
    }
    ctx->pc = 0x249F70u;
label_249f70:
    // 0x249f70: 0x3e00008  jr          $ra
    ctx->pc = 0x249F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F70u;
        // 0x249f74: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249F78u;
label_249f78:
    // 0x249f78: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x249f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x249f7c: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x249f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x249f80: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x249f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x249f84: 0x23543  sra         $a2, $v0, 21
    ctx->pc = 0x249f84u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 21));
    // 0x249f88: 0x33d43  sra         $a3, $v1, 21
    ctx->pc = 0x249f88u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 21));
label_249f8c:
    // 0x249f8c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x249f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x249f90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249f94: 0x1162001a  beq         $t3, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x249F94u;
    {
        const bool branch_taken_0x249f94 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        if (branch_taken_0x249f94) {
            ctx->pc = 0x24A000u;
            goto label_24a000;
        }
    }
    ctx->pc = 0x249F9Cu;
    // 0x249f9c: 0x91850000  lbu         $a1, 0x0($t4)
    ctx->pc = 0x249f9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_249fa0:
    // 0x249fa0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x249fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x249fa4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x249fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x249fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x249fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x249fac: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x249FACu;
    {
        const bool branch_taken_0x249fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249fac) {
            ctx->pc = 0x249FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249FACu;
            // 0x249fb0: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249FF4u;
            goto label_249ff4;
        }
    }
    ctx->pc = 0x249FB4u;
    // 0x249fb4: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x249fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x249fb8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x249fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x249fbc: 0x544f000d  bnel        $v0, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x249FBCu;
    {
        const bool branch_taken_0x249fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x249fbc) {
            ctx->pc = 0x249FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249FBCu;
            // 0x249fc0: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249FF4u;
            goto label_249ff4;
        }
    }
    ctx->pc = 0x249FC4u;
    // 0x249fc4: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x249fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x249fc8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x249fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x249fcc: 0x144e0009  bne         $v0, $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x249FCCu;
    {
        const bool branch_taken_0x249fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x249FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FCCu;
        // 0x249fd0: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fcc) {
            ctx->pc = 0x249FF4u;
            goto label_249ff4;
        }
    }
    ctx->pc = 0x249FD4u;
    // 0x249fd4: 0x91220003  lbu         $v0, 0x3($t1)
    ctx->pc = 0x249fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x249fd8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x249fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x249fdc: 0x144d0005  bne         $v0, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x249FDCu;
    {
        const bool branch_taken_0x249fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x249fdc) {
            ctx->pc = 0x249FF4u;
            goto label_249ff4;
        }
    }
    ctx->pc = 0x249FE4u;
    // 0x249fe4: 0x91230004  lbu         $v1, 0x4($t1)
    ctx->pc = 0x249fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x249fe8: 0x91820004  lbu         $v0, 0x4($t4)
    ctx->pc = 0x249fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x249fec: 0x1062ffe0  beq         $v1, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x249FECu;
    {
        const bool branch_taken_0x249fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x249fec) {
            ctx->pc = 0x249F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249f70;
        }
    }
    ctx->pc = 0x249FF4u;
label_249ff4:
    // 0x249ff4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249ff8: 0x1562ffe9  bne         $t3, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x249FF8u;
    {
        const bool branch_taken_0x249ff8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x249FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FF8u;
        // 0x249ffc: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ff8) {
            ctx->pc = 0x249FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249fa0;
        }
    }
    ctx->pc = 0x24A000u;
label_24a000:
    // 0x24a000: 0x3e00008  jr          $ra
    ctx->pc = 0x24A000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A000u;
        // 0x24a004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A008u;
}
