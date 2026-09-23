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

// Function: hudAmmoGfx
// Address: 0x2b1c20 - 0x2b1e98
void hudAmmoGfx_0x2b1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudAmmoGfx_0x2b1c20");
#endif

    switch (ctx->pc) {
        case 0x2b1c84u: goto label_2b1c84;
        case 0x2b1cccu: goto label_2b1ccc;
        case 0x2b1d28u: goto label_2b1d28;
        case 0x2b1d5cu: goto label_2b1d5c;
        case 0x2b1d80u: goto label_2b1d80;
        case 0x2b1dacu: goto label_2b1dac;
        case 0x2b1dd4u: goto label_2b1dd4;
        case 0x2b1df4u: goto label_2b1df4;
        case 0x2b1e00u: goto label_2b1e00;
        case 0x2b1e24u: goto label_2b1e24;
        case 0x2b1e2cu: goto label_2b1e2c;
        case 0x2b1e58u: goto label_2b1e58;
        case 0x2b1e60u: goto label_2b1e60;
        case 0x2b1e68u: goto label_2b1e68;
        default: break;
    }

    ctx->pc = 0x2b1c20u;

    // 0x2b1c20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b1c24: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x2b1c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2b1c28: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2b1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2b1c2c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2b1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2b1c30: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2b1c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2b1c34: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2b1c34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c38: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2b1c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2b1c3c: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x2b1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x2b1c40: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2b1c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2b1c44: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2b1c44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c48: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b1c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b1c4c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2b1c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2b1c50: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x2b1c50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x2b1c54: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2b1c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2b1c58: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2b1c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2b1c5c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2b1c60: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2b1c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2b1c64: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2b1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b1c68: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2b1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b1c6c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2b1c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b1c70: 0x8c850180  lw          $a1, 0x180($a0)
    ctx->pc = 0x2b1c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2b1c74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b1c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1c78: 0x8cb60160  lw          $s6, 0x160($a1)
    ctx->pc = 0x2b1c78u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x2b1c7c: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B1C7Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C84u);
    ctx->pc = 0x2B1C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C7Cu;
    // 0x2b1c80: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B1C7Cu, 0x2B1C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C84u;
label_2b1c84:
    // 0x2b1c84: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2b1c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2b1c88: 0x260399f0  addiu       $v1, $s0, -0x6610
    ctx->pc = 0x2b1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x2b1c8c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2b1c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2b1c90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1c94: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x2b1c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1c98: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x2b1c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2b1c9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b1c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b1ca0: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2b1ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b1ca4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b1ca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b1ca8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b1ca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b1cac: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1CACu;
    {
        const bool branch_taken_0x2b1cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CACu;
        // 0x2b1cb0: 0xa29823  subu        $s3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cac) {
            ctx->pc = 0x2B1CBCu;
            goto label_2b1cbc;
        }
    }
    ctx->pc = 0x2B1CB4u;
    // 0x2b1cb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1CB4u;
    {
        const bool branch_taken_0x2b1cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CB4u;
        // 0x2b1cb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cb4) {
            ctx->pc = 0x2B1CC4u;
            goto label_2b1cc4;
        }
    }
    ctx->pc = 0x2B1CBCu;
label_2b1cbc:
    // 0x2b1cbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1cc0: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x2b1cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_2b1cc4:
    // 0x2b1cc4: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B1CC4u;
    SET_GPR_U32(ctx, 31, 0x2B1CCCu);
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B1CC4u, 0x2B1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1CCCu;
label_2b1ccc:
    // 0x2b1ccc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2b1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2b1cd0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2b1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2b1cd4: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2b1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2b1cd8: 0x2463af40  addiu       $v1, $v1, -0x50C0
    ctx->pc = 0x2b1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946624));
    // 0x2b1cdc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2b1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b1ce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ce4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2b1ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b1ce8: 0x4e0001d  bltz        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B1CE8u;
    {
        const bool branch_taken_0x2b1ce8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2B1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CE8u;
        // 0x2b1cec: 0x8f83b498  lw          $v1, -0x4B68($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ce8) {
            ctx->pc = 0x2B1D60u;
            goto label_2b1d60;
        }
    }
    ctx->pc = 0x2B1CF0u;
    // 0x2b1cf0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2b1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b1cf4: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x2b1cf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b1cf8: 0x260499f0  addiu       $a0, $s0, -0x6610
    ctx->pc = 0x2b1cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x2b1cfc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2b1cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b1d00: 0x26a5fff0  addiu       $a1, $s5, -0x10
    ctx->pc = 0x2b1d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
    // 0x2b1d04: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2b1d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1d08: 0x2670fffe  addiu       $s0, $s3, -0x2
    ctx->pc = 0x2b1d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x2b1d0c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2b1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2b1d10: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2b1d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b1d18: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x2b1d18u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x2b1d1c: 0x94520002  lhu         $s2, 0x2($v0)
    ctx->pc = 0x2b1d1cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b1d20: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2B1D20u;
    SET_GPR_U32(ctx, 31, 0x2B1D28u);
    ctx->pc = 0x2B1D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D20u;
    // 0x2b1d24: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2B1D20u, 0x2B1D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D28u;
label_2b1d28:
    // 0x2b1d28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1d2c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2b1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2b1d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d34: 0x34427f7f  ori         $v0, $v0, 0x7F7F
    ctx->pc = 0x2b1d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32639);
    // 0x2b1d38: 0x123843  sra         $a3, $s2, 1
    ctx->pc = 0x2b1d38u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 18), 1));
    // 0x2b1d3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b1d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2b1d40: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x2b1d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2b1d44: 0x115100  sll         $t2, $s1, 4
    ctx->pc = 0x2b1d44u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b1d48: 0x125900  sll         $t3, $s2, 4
    ctx->pc = 0x2b1d48u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b1d4c: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x2b1d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b1d50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b1d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d54: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x2B1D54u;
    SET_GPR_U32(ctx, 31, 0x2B1D5Cu);
    ctx->pc = 0x2B1D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D54u;
    // 0x2b1d58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x2B1D54u, 0x2B1D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D5Cu;
label_2b1d5c:
    // 0x2b1d5c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2b1d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2b1d60:
    // 0x2b1d60: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2b1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b1d64: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2b1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2b1d68: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2b1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2b1d6c: 0x2477fba8  addiu       $s7, $v1, -0x458
    ctx->pc = 0x2b1d6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966184));
    // 0x2b1d70: 0x8c45026c  lw          $a1, 0x26C($v0)
    ctx->pc = 0x2b1d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x2b1d74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b1d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d78: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2B1D78u;
    SET_GPR_U32(ctx, 31, 0x2B1D80u);
    ctx->pc = 0x2B1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D78u;
    // 0x2b1d7c: 0x26710002  addiu       $s1, $s3, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2B1D78u, 0x2B1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D80u;
label_2b1d80:
    // 0x2b1d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d84: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2b1d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1d88: 0x27b60014  addiu       $s6, $sp, 0x14
    ctx->pc = 0x2b1d88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2b1d8c: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x2b1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x2b1d90: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b1d94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d98: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x2b1d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x2b1d9c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b1d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1da0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b1da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1da4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x2B1DA4u;
    SET_GPR_U32(ctx, 31, 0x2B1DACu);
    ctx->pc = 0x2B1DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DA4u;
    // 0x2b1da8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x2B1DA4u, 0x2B1DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DACu;
label_2b1dac:
    // 0x2b1dac: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x2b1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2b1db0: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x2b1db0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x2b1db4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1db8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b1db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1dbc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b1dc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b1dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1dc4: 0xafb30014  sw          $s3, 0x14($sp)
    ctx->pc = 0x2b1dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
    // 0x2b1dc8: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x2b1dc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x2b1dcc: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2B1DCCu;
    SET_GPR_U32(ctx, 31, 0x2B1DD4u);
    ctx->pc = 0x2B1DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DCCu;
    // 0x2b1dd0: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2B1DCCu, 0x2B1DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DD4u;
label_2b1dd4:
    // 0x2b1dd4: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2b1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2b1dd8: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B1DD8u;
    {
        const bool branch_taken_0x2b1dd8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DD8u;
        // 0x2b1ddc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1dd8) {
            ctx->pc = 0x2B1E58u;
            goto label_2b1e58;
        }
    }
    ctx->pc = 0x2B1DE0u;
    // 0x2b1de0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2b1de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2b1de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b1de8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2b1de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2b1dec: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2B1DECu;
    SET_GPR_U32(ctx, 31, 0x2B1DF4u);
    ctx->pc = 0x2B1DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DECu;
    // 0x2b1df0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2B1DECu, 0x2B1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DF4u;
label_2b1df4:
    // 0x2b1df4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1df8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2B1DF8u;
    SET_GPR_U32(ctx, 31, 0x2B1E00u);
    ctx->pc = 0x2B1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DF8u;
    // 0x2b1dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2B1DF8u, 0x2B1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E00u;
label_2b1e00:
    // 0x2b1e00: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b1e04: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x2b1e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x2b1e08: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x2b1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2b1e0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e10: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b1e14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b1e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b1e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e1c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x2B1E1Cu;
    SET_GPR_U32(ctx, 31, 0x2B1E24u);
    ctx->pc = 0x2B1E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E1Cu;
    // 0x2b1e20: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x2B1E1Cu, 0x2B1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E24u;
label_2b1e24:
    // 0x2b1e24: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2B1E24u;
    SET_GPR_U32(ctx, 31, 0x2B1E2Cu);
    ctx->pc = 0x2B1E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E24u;
    // 0x2b1e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2B1E24u, 0x2B1E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E2Cu;
label_2b1e2c:
    // 0x2b1e2c: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x2b1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2b1e30: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x2b1e30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x2b1e34: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x2b1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x2b1e38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b1e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b1e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e44: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b1e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b1e48: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x2b1e48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x2b1e4c: 0xafb30014  sw          $s3, 0x14($sp)
    ctx->pc = 0x2b1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
    // 0x2b1e50: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2B1E50u;
    SET_GPR_U32(ctx, 31, 0x2B1E58u);
    ctx->pc = 0x2B1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E50u;
    // 0x2b1e54: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2B1E50u, 0x2B1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E58u;
label_2b1e58:
    // 0x2b1e58: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B1E58u;
    SET_GPR_U32(ctx, 31, 0x2B1E60u);
    ctx->pc = 0x2B1E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E58u;
    // 0x2b1e5c: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B1E58u, 0x2B1E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E60u;
label_2b1e60:
    // 0x2b1e60: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B1E60u;
    SET_GPR_U32(ctx, 31, 0x2B1E68u);
    ctx->pc = 0x2B1E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E60u;
    // 0x2b1e64: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B1E60u, 0x2B1E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E68u;
label_2b1e68:
    // 0x2b1e68: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2b1e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b1e6c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2b1e6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b1e70: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2b1e70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b1e74: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2b1e74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b1e78: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2b1e78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b1e7c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2b1e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1e80: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2b1e80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1e84: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b1e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1e88: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2b1e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1e8c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b1e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1e90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E90u;
        // 0x2b1e94: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1E98u;
}
