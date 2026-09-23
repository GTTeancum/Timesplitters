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

// Function: relocateParts
// Address: 0x262cc0 - 0x262f7c
void relocateParts_0x262cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("relocateParts_0x262cc0");
#endif

    switch (ctx->pc) {
        case 0x262d08u: goto label_262d08;
        case 0x262d10u: goto label_262d10;
        case 0x262d40u: goto label_262d40;
        case 0x262d48u: goto label_262d48;
        case 0x262d58u: goto label_262d58;
        case 0x262d68u: goto label_262d68;
        case 0x262d90u: goto label_262d90;
        case 0x262da0u: goto label_262da0;
        case 0x262dbcu: goto label_262dbc;
        case 0x262e44u: goto label_262e44;
        case 0x262e9cu: goto label_262e9c;
        case 0x262eb0u: goto label_262eb0;
        case 0x262eb8u: goto label_262eb8;
        case 0x262eccu: goto label_262ecc;
        case 0x262eecu: goto label_262eec;
        case 0x262f0cu: goto label_262f0c;
        case 0x262f14u: goto label_262f14;
        case 0x262f20u: goto label_262f20;
        case 0x262f44u: goto label_262f44;
        case 0x262f4cu: goto label_262f4c;
        default: break;
    }

    ctx->pc = 0x262cc0u;

    // 0x262cc0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x262cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x262cc4: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x262cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x262cc8: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x262cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x262ccc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x262cccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x262cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cd4: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x262cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x262cd8: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x262cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x262cdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x262cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ce0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x262ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x262ce4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x262ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262ce8: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x262ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x262cec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x262cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cf0: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x262cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
    // 0x262cf4: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x262cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x262cf8: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x262cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x262cfc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x262cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x262d00: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x262D00u;
    SET_GPR_U32(ctx, 31, 0x262D08u);
    ctx->pc = 0x262D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D00u;
    // 0x262d04: 0xafa60074  sw          $a2, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x262D00u, 0x262D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D08u;
label_262d08:
    // 0x262d08: 0xc085266  jal         func_214998
    ctx->pc = 0x262D08u;
    SET_GPR_U32(ctx, 31, 0x262D10u);
    ctx->pc = 0x262D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D08u;
    // 0x262d0c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214998u, 0x262D08u, 0x262D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D10u;
label_262d10:
    // 0x262d10: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x262d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x262d14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x262d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d18: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x262d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x262d1c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x262d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x262d20: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x262d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x262d24: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x262d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x262d28: 0x18400052  blez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x262D28u;
    {
        const bool branch_taken_0x262d28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x262D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D28u;
        // 0x262d2c: 0x3c1e003a  lui         $fp, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d28) {
            ctx->pc = 0x262E74u;
            goto label_262e74;
        }
    }
    ctx->pc = 0x262D30u;
    // 0x262d30: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x262d30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x262d34: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x262d34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x262d38: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x262d38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262d3c: 0x0  nop
    ctx->pc = 0x262d3cu;
    // NOP
label_262d40:
    // 0x262d40: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x262D40u;
    SET_GPR_U32(ctx, 31, 0x262D48u);
    ctx->pc = 0x262D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D40u;
    // 0x262d44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x262D40u, 0x262D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D48u;
label_262d48:
    // 0x262d48: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x262d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x262d4c: 0x27c52710  addiu       $a1, $fp, 0x2710
    ctx->pc = 0x262d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 10000));
    // 0x262d50: 0xc0b96aa  jal         func_2E5AA8
    ctx->pc = 0x262D50u;
    SET_GPR_U32(ctx, 31, 0x262D58u);
    ctx->pc = 0x262D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D50u;
    // 0x262d54: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5AA8u, 0x262D50u, 0x262D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D58u;
label_262d58:
    // 0x262d58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x262D58u;
    {
        const bool branch_taken_0x262d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262d58) {
            ctx->pc = 0x262D98u;
            goto label_262d98;
        }
    }
    ctx->pc = 0x262D60u;
    // 0x262d60: 0xc0a2478  jal         func_2891E0
    ctx->pc = 0x262D60u;
    SET_GPR_U32(ctx, 31, 0x262D68u);
    ctx->pc = 0x262D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D60u;
    // 0x262d64: 0x8f84b268  lw          $a0, -0x4D98($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2891E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2891E0u, 0x262D60u, 0x262D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D68u;
label_262d68:
    // 0x262d68: 0xc78c83a0  lwc1        $f12, -0x7C60($gp)
    ctx->pc = 0x262d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x262d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x262d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d78: 0x0  nop
    ctx->pc = 0x262d78u;
    // NOP
    // 0x262d7c: 0x0  nop
    ctx->pc = 0x262d7cu;
    // NOP
    // 0x262d80: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x262d80u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x262d84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x262d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d88: 0xc0854a0  jal         func_215280
    ctx->pc = 0x262D88u;
    SET_GPR_U32(ctx, 31, 0x262D90u);
    ctx->pc = 0x262D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D88u;
    // 0x262d8c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x262D88u, 0x262D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D90u;
label_262d90:
    // 0x262d90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x262D90u;
    {
        const bool branch_taken_0x262d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D90u;
        // 0x262d94: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d90) {
            ctx->pc = 0x262DC0u;
            goto label_262dc0;
        }
    }
    ctx->pc = 0x262D98u;
label_262d98:
    // 0x262d98: 0xc0a2478  jal         func_2891E0
    ctx->pc = 0x262D98u;
    SET_GPR_U32(ctx, 31, 0x262DA0u);
    ctx->pc = 0x262D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D98u;
    // 0x262d9c: 0x8f84b268  lw          $a0, -0x4D98($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2891E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2891E0u, 0x262D98u, 0x262DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262DA0u;
label_262da0:
    // 0x262da0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x262da0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x262da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262da8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x262da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262dac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x262dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x262db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262db4: 0xc0854a0  jal         func_215280
    ctx->pc = 0x262DB4u;
    SET_GPR_U32(ctx, 31, 0x262DBCu);
    ctx->pc = 0x262DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262DB4u;
    // 0x262db8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x262DB4u, 0x262DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262DBCu;
label_262dbc:
    // 0x262dbc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x262dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_262dc0:
    // 0x262dc0: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x262dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x262dc4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x262dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x262dc8: 0x128180  sll         $s0, $s2, 6
    ctx->pc = 0x262dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x262dcc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x262dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x262dd0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x262dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262dd4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x262dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x262dd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x262dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x262ddc: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x262ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x262de0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x262de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x262de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262de8: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x262de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x262dec: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x262decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x262df0: 0x6ba7000f  ldl         $a3, 0xF($sp)
    ctx->pc = 0x262df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x262df4: 0x6fa70008  ldr         $a3, 0x8($sp)
    ctx->pc = 0x262df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x262df8: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x262df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x262dfc: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x262dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x262e00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x262e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x262e04: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x262e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x262e08: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x262e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x262e0c: 0xb047000f  sdl         $a3, 0xF($v0)
    ctx->pc = 0x262e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x262e10: 0xb4470008  sdr         $a3, 0x8($v0)
    ctx->pc = 0x262e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x262e14: 0xb0480017  sdl         $t0, 0x17($v0)
    ctx->pc = 0x262e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x262e18: 0xb4480010  sdr         $t0, 0x10($v0)
    ctx->pc = 0x262e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x262e1c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x262e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x262e20: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x262e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262e24: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x262e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262e28: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x262e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262e2c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x262e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262e30: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x262e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x262e34: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x262e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x262e38: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x262e38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x262e3c: 0xc0acfe4  jal         func_2B3F90
    ctx->pc = 0x262E3Cu;
    SET_GPR_U32(ctx, 31, 0x262E44u);
    ctx->pc = 0x262E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E3Cu;
    // 0x262e40: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F90u, 0x262E3Cu, 0x262E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E44u;
label_262e44:
    // 0x262e44: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x262e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262e48: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x262e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x262e4c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x262e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262e50: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x262e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x262e54: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x262e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262e58: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x262e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x262e5c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x262e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x262e60: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x262e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x262e64: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x262E64u;
    {
        const bool branch_taken_0x262e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262e64) {
            ctx->pc = 0x262D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262d40;
        }
    }
    ctx->pc = 0x262E6Cu;
    // 0x262e6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262E6Cu;
    {
        const bool branch_taken_0x262e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E6Cu;
        // 0x262e70: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e6c) {
            ctx->pc = 0x262E7Cu;
            goto label_262e7c;
        }
    }
    ctx->pc = 0x262E74u;
label_262e74:
    // 0x262e74: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x262e74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x262e78: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x262e78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_262e7c:
    // 0x262e7c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x262e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x262e80: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x262e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e88: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x262e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x262e8c: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x262e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x262e90: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x262e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x262e94: 0xc098be0  jal         func_262F80
    ctx->pc = 0x262E94u;
    SET_GPR_U32(ctx, 31, 0x262E9Cu);
    ctx->pc = 0x262E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E94u;
    // 0x262e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262F80u, 0x262E94u, 0x262E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E9Cu;
label_262e9c:
    // 0x262e9c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x262e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x262ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x262ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ea8: 0xc08526c  jal         func_2149B0
    ctx->pc = 0x262EA8u;
    SET_GPR_U32(ctx, 31, 0x262EB0u);
    ctx->pc = 0x262EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262EA8u;
    // 0x262eac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2149B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2149B0u, 0x262EA8u, 0x262EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262EB0u;
label_262eb0:
    // 0x262eb0: 0xc0855c6  jal         func_215718
    ctx->pc = 0x262EB0u;
    SET_GPR_U32(ctx, 31, 0x262EB8u);
    ctx->pc = 0x262EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262EB0u;
    // 0x262eb4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215718u, 0x262EB0u, 0x262EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262EB8u;
label_262eb8:
    // 0x262eb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x262eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x262ebc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x262ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x262ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ec4: 0xc0852a2  jal         func_214A88
    ctx->pc = 0x262EC4u;
    SET_GPR_U32(ctx, 31, 0x262ECCu);
    ctx->pc = 0x262EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262EC4u;
    // 0x262ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214A88u, 0x262EC4u, 0x262ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262ECCu;
label_262ecc:
    // 0x262ecc: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x262eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x262ed0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x262ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x262ed4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262ed8: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x262ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x262edc: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x262edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x262ee0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x262ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x262ee4: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x262EE4u;
    SET_GPR_U32(ctx, 31, 0x262EECu);
    ctx->pc = 0x262EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262EE4u;
    // 0x262ee8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x262EE4u, 0x262EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262EECu;
label_262eec:
    // 0x262eec: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x262eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x262ef0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x262ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x262ef4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262ef8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x262ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x262efc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x262efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x262f00: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x262f00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x262f04: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x262F04u;
    SET_GPR_U32(ctx, 31, 0x262F0Cu);
    ctx->pc = 0x262F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F04u;
    // 0x262f08: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x262F04u, 0x262F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F0Cu;
label_262f0c:
    // 0x262f0c: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x262F0Cu;
    SET_GPR_U32(ctx, 31, 0x262F14u);
    ctx->pc = 0x262F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F0Cu;
    // 0x262f10: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x262F0Cu, 0x262F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F14u;
label_262f14:
    // 0x262f14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x262f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f18: 0xc0855c8  jal         func_215720
    ctx->pc = 0x262F18u;
    SET_GPR_U32(ctx, 31, 0x262F20u);
    ctx->pc = 0x262F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F18u;
    // 0x262f1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215720u, 0x262F18u, 0x262F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F20u;
label_262f20:
    // 0x262f20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x262f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x262f24: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x262f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x262f28: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x262f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262f2c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x262f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x262f30: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x262f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x262f34: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x262F34u;
    {
        const bool branch_taken_0x262f34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x262F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F34u;
        // 0x262f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f34) {
            ctx->pc = 0x262F44u;
            goto label_262f44;
        }
    }
    ctx->pc = 0x262F3Cu;
    // 0x262f3c: 0xc098c1e  jal         func_263078
    ctx->pc = 0x262F3Cu;
    SET_GPR_U32(ctx, 31, 0x262F44u);
    ctx->pc = 0x262F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F3Cu;
    // 0x262f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263078u, 0x262F3Cu, 0x262F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F44u;
label_262f44:
    // 0x262f44: 0xc0855fa  jal         func_2157E8
    ctx->pc = 0x262F44u;
    SET_GPR_U32(ctx, 31, 0x262F4Cu);
    ctx->pc = 0x2157E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2157E8u, 0x262F44u, 0x262F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F4Cu;
label_262f4c:
    // 0x262f4c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x262f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x262f50: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x262f50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x262f54: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x262f54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x262f58: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x262f58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x262f5c: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x262f5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x262f60: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x262f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x262f64: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x262f64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x262f68: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x262f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x262f6c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x262f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x262f70: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x262f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x262f74: 0x3e00008  jr          $ra
    ctx->pc = 0x262F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F74u;
        // 0x262f78: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262F7Cu;
}
