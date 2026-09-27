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

// Function: __kernel_cosf
// Address: 0x2db078 - 0x2db1d0
void ps2___kernel_cosf_0x2db078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_cosf_0x2db078");
#endif

    ctx->pc = 0x2db078u;

    // 0x2db078: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2db078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2db07c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db080: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2db080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2db084: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2db084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2db088: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x2db088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x2db08c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2db08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2db090: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2db090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2db094: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2db094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2db098: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB098u;
    {
        const bool branch_taken_0x2db098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db098) {
            ctx->pc = 0x2DB09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB098u;
            // 0x2db09c: 0x460c6182  mul.s       $f6, $f12, $f12 (Delay Slot)
            ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB0C8u;
            goto label_2db0c8;
        }
    }
    ctx->pc = 0x2DB0A0u;
    // 0x2db0a0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2db0a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2db0a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2db0a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2db0a8: 0x0  nop
    ctx->pc = 0x2db0a8u;
    // NOP
    // 0x2db0ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB0ACu;
    {
        const bool branch_taken_0x2db0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db0ac) {
            ctx->pc = 0x2DB0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB0ACu;
            // 0x2db0b0: 0x460c6182  mul.s       $f6, $f12, $f12 (Delay Slot)
            ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB0C8u;
            goto label_2db0c8;
        }
    }
    ctx->pc = 0x2DB0B4u;
    // 0x2db0b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2db0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2db0b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB0C4u;
    // 0x2db0c4: 0x0  nop
    ctx->pc = 0x2db0c4u;
    // NOP
label_2db0c8:
    // 0x2db0c8: 0x3c01ad47  lui         $at, 0xAD47
    ctx->pc = 0x2db0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44359 << 16));
    // 0x2db0cc: 0x3421d74e  ori         $at, $at, 0xD74E
    ctx->pc = 0x2db0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55118);
    // 0x2db0d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db0d4: 0x3c01310f  lui         $at, 0x310F
    ctx->pc = 0x2db0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12559 << 16));
    // 0x2db0d8: 0x342174f6  ori         $at, $at, 0x74F6
    ctx->pc = 0x2db0d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29942);
    // 0x2db0dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2db0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db0e0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2db0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2db0e4: 0x3c01b493  lui         $at, 0xB493
    ctx->pc = 0x2db0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46227 << 16));
    // 0x2db0e8: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x2db0e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
    // 0x2db0ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2db0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2db0f0: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x2db0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x2db0f4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2db0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2db0f8: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x2db0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x2db0fc: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x2db0fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x2db100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2db100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db104: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x2db104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x2db108: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x2db108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x2db10c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2db10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2db110: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2db110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2db114: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x2db114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x2db118: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2db118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2db11c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2db11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2db120: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2db120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2db124: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2db124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2db128: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2db128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2db12c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2db12cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2db130: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2db130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2db134: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2db134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2db138: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2db138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2db13c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2db13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2db140: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2db140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2db144: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB144u;
    {
        const bool branch_taken_0x2db144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB144u;
        // 0x2db148: 0x46003042  mul.s       $f1, $f6, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db144) {
            ctx->pc = 0x2DB178u;
            goto label_2db178;
        }
    }
    ctx->pc = 0x2DB14Cu;
    // 0x2db14c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2db14cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2db150: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2db150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2db154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db158: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x2db158u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x2db15c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2db15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2db160: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2db160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2db164: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2db164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2db168: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2db168u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2db16c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2db16cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2db170: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB170u;
        // 0x2db174: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB178u;
label_2db178:
    // 0x2db178: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x2db178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x2db17c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2db17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2db180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB180u;
    {
        const bool branch_taken_0x2db180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB180u;
        // 0x2db184: 0x3c02ff00  lui         $v0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db180) {
            ctx->pc = 0x2DB194u;
            goto label_2db194;
        }
    }
    ctx->pc = 0x2DB188u;
    // 0x2db188: 0x3c023e90  lui         $v0, 0x3E90
    ctx->pc = 0x2db188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16016 << 16));
    // 0x2db18c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB18Cu;
    {
        const bool branch_taken_0x2db18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db18c) {
            ctx->pc = 0x2DB198u;
            goto label_2db198;
        }
    }
    ctx->pc = 0x2DB194u;
label_2db194:
    // 0x2db194: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2db194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2db198:
    // 0x2db198: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2db198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2db19c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db1a0: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x2db1a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2db1a4: 0x460d60c2  mul.s       $f3, $f12, $f13
    ctx->pc = 0x2db1a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x2db1a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2db1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2db1ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2db1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db1b0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2db1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2db1b4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2db1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2db1b8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2db1b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2db1bc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2db1bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2db1c0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2db1c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2db1c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2db1c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2db1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1C8u;
        // 0x2db1cc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB1D0u;
}
