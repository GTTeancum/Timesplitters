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

// Function: baseDamage
// Address: 0x274bb8 - 0x274e4c
void baseDamage_0x274bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("baseDamage_0x274bb8");
#endif

    switch (ctx->pc) {
        case 0x274cf0u: goto label_274cf0;
        case 0x274d40u: goto label_274d40;
        case 0x274d54u: goto label_274d54;
        case 0x274d78u: goto label_274d78;
        case 0x274da4u: goto label_274da4;
        case 0x274dc0u: goto label_274dc0;
        case 0x274ddcu: goto label_274ddc;
        case 0x274e00u: goto label_274e00;
        case 0x274e28u: goto label_274e28;
        default: break;
    }

    ctx->pc = 0x274bb8u;

    // 0x274bb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x274bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x274bbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274bc4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x274bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x274bc8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x274bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x274bcc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x274bccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bd0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x274bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x274bd4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x274bd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bd8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x274bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x274bdc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x274bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274be0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x274be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x274be4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x274be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274be8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x274be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x274bec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x274becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bf0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x274bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x274bf4: 0xc6210214  lwc1        $f1, 0x214($s1)
    ctx->pc = 0x274bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274bf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x274bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274bfc: 0x0  nop
    ctx->pc = 0x274bfcu;
    // NOP
    // 0x274c00: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x274C00u;
    {
        const bool branch_taken_0x274c00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C00u;
        // 0x274c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c00) {
            ctx->pc = 0x274C24u;
            goto label_274c24;
        }
    }
    ctx->pc = 0x274C08u;
    // 0x274c08: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x274c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x274c0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x274c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x274c10: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x274c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x274c14: 0xe6200214  swc1        $f0, 0x214($s1)
    ctx->pc = 0x274c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x274c18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x274c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x274c1c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x274c1cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x274c20: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x274c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_274c24:
    // 0x274c24: 0xc78085b0  lwc1        $f0, -0x7A50($gp)
    ctx->pc = 0x274c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274c28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x274c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274c2c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x274C2Cu;
    {
        const bool branch_taken_0x274c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274c2c) {
            ctx->pc = 0x274C54u;
            goto label_274c54;
        }
    }
    ctx->pc = 0x274C34u;
    // 0x274c34: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x274c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x274c38: 0x94a30124  lhu         $v1, 0x124($a1)
    ctx->pc = 0x274c38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x274c3c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x274c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x274c40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274C40u;
    {
        const bool branch_taken_0x274c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C40u;
        // 0x274c44: 0x3062fffd  andi        $v0, $v1, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c40) {
            ctx->pc = 0x274C54u;
            goto label_274c54;
        }
    }
    ctx->pc = 0x274C48u;
    // 0x274c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c4c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x274C4Cu;
    {
        const bool branch_taken_0x274c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C4Cu;
        // 0x274c50: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c4c) {
            ctx->pc = 0x274CE8u;
            goto label_274ce8;
        }
    }
    ctx->pc = 0x274C54u;
label_274c54:
    // 0x274c54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x274c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x274c58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x274c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274c60: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x274C60u;
    {
        const bool branch_taken_0x274c60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274c60) {
            ctx->pc = 0x274C88u;
            goto label_274c88;
        }
    }
    ctx->pc = 0x274C68u;
    // 0x274c68: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x274c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x274c6c: 0x94a30124  lhu         $v1, 0x124($a1)
    ctx->pc = 0x274c6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x274c70: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x274c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x274c74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274C74u;
    {
        const bool branch_taken_0x274c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C74u;
        // 0x274c78: 0x3062fffb  andi        $v0, $v1, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c74) {
            ctx->pc = 0x274C88u;
            goto label_274c88;
        }
    }
    ctx->pc = 0x274C7Cu;
    // 0x274c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c80: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x274C80u;
    {
        const bool branch_taken_0x274c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C80u;
        // 0x274c84: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c80) {
            ctx->pc = 0x274CE8u;
            goto label_274ce8;
        }
    }
    ctx->pc = 0x274C88u;
label_274c88:
    // 0x274c88: 0xc78085b4  lwc1        $f0, -0x7A4C($gp)
    ctx->pc = 0x274c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274c8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x274c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274c90: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x274C90u;
    {
        const bool branch_taken_0x274c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274c90) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274C98u;
    // 0x274c98: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x274c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x274c9c: 0x94a30124  lhu         $v1, 0x124($a1)
    ctx->pc = 0x274c9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x274ca0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x274ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x274ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274CA4u;
    {
        const bool branch_taken_0x274ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CA4u;
        // 0x274ca8: 0x3062fff7  andi        $v0, $v1, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ca4) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274CACu;
    // 0x274cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x274CB0u;
    {
        const bool branch_taken_0x274cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CB0u;
        // 0x274cb4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274cb0) {
            ctx->pc = 0x274CE8u;
            goto label_274ce8;
        }
    }
    ctx->pc = 0x274CB8u;
label_274cb8:
    // 0x274cb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274cbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274cc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x274cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274cc4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x274CC4u;
    {
        const bool branch_taken_0x274cc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274cc4) {
            ctx->pc = 0x274CF4u;
            goto label_274cf4;
        }
    }
    ctx->pc = 0x274CCCu;
    // 0x274ccc: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x274cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x274cd0: 0x94a30124  lhu         $v1, 0x124($a1)
    ctx->pc = 0x274cd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x274cd4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x274cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x274cd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274CD8u;
    {
        const bool branch_taken_0x274cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CD8u;
        // 0x274cdc: 0x3062ffef  andi        $v0, $v1, 0xFFEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274cd8) {
            ctx->pc = 0x274CF4u;
            goto label_274cf4;
        }
    }
    ctx->pc = 0x274CE0u;
    // 0x274ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ce4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x274ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_274ce8:
    // 0x274ce8: 0xc0a92c4  jal         func_2A4B10
    ctx->pc = 0x274CE8u;
    SET_GPR_U32(ctx, 31, 0x274CF0u);
    ctx->pc = 0x274CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274CE8u;
    // 0x274cec: 0xa4a20124  sh          $v0, 0x124($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 292), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B10u, 0x274CE8u, 0x274CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CF0u;
label_274cf0:
    // 0x274cf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x274cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274cf4:
    // 0x274cf4: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x274CF4u;
    {
        const bool branch_taken_0x274cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CF4u;
        // 0x274cf8: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274cf4) {
            ctx->pc = 0x274E28u;
            goto label_274e28;
        }
    }
    ctx->pc = 0x274CFCu;
    // 0x274cfc: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x274cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274d00: 0xc62201fc  lwc1        $f2, 0x1FC($s1)
    ctx->pc = 0x274d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274d04: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x274d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274d08: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x274d08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x274d0c: 0xc6240034  lwc1        $f4, 0x34($s1)
    ctx->pc = 0x274d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x274d10: 0xc6200204  lwc1        $f0, 0x204($s1)
    ctx->pc = 0x274d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274d14: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x274d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274d18: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x274d18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x274d1c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x274d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x274d20: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x274d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x274d24: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x274d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x274d28: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x274d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x274d2c: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x274D2Cu;
    {
        const bool branch_taken_0x274d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D2Cu;
        // 0x274d30: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d2c) {
            ctx->pc = 0x274DACu;
            goto label_274dac;
        }
    }
    ctx->pc = 0x274D34u;
    // 0x274d34: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x274d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x274d38: 0xc081546  jal         func_205518
    ctx->pc = 0x274D38u;
    SET_GPR_U32(ctx, 31, 0x274D40u);
    ctx->pc = 0x274D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D38u;
    // 0x274d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x274D38u, 0x274D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D40u;
label_274d40:
    // 0x274d40: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x274d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x274d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d48: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x274d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x274d4c: 0xc081602  jal         func_205808
    ctx->pc = 0x274D4Cu;
    SET_GPR_U32(ctx, 31, 0x274D54u);
    ctx->pc = 0x274D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D4Cu;
    // 0x274d50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205808u, 0x274D4Cu, 0x274D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D54u;
label_274d54:
    // 0x274d54: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x274d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d58: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x274d58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d5c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x274d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d60: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274d60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x274d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274d6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d70: 0xc0a5e30  jal         func_2978C0
    ctx->pc = 0x274D70u;
    SET_GPR_U32(ctx, 31, 0x274D78u);
    ctx->pc = 0x274D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D70u;
    // 0x274d74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x274D70u, 0x274D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D78u;
label_274d78:
    // 0x274d78: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x274d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x274d7c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x274d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x274d80: 0x8c62c4f0  lw          $v0, -0x3B10($v1)
    ctx->pc = 0x274d80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x274d84: 0x14440029  bne         $v0, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x274D84u;
    {
        const bool branch_taken_0x274d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x274D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D84u;
        // 0x274d88: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d84) {
            ctx->pc = 0x274E2Cu;
            goto label_274e2c;
        }
    }
    ctx->pc = 0x274D8Cu;
    // 0x274d8c: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x274d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274d90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d94: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x274d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x274d98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d9c: 0xc0a60f8  jal         func_2983E0
    ctx->pc = 0x274D9Cu;
    SET_GPR_U32(ctx, 31, 0x274DA4u);
    ctx->pc = 0x274DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D9Cu;
    // 0x274da0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983E0u, 0x274D9Cu, 0x274DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274DA4u;
label_274da4:
    // 0x274da4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x274DA4u;
    {
        const bool branch_taken_0x274da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DA4u;
        // 0x274da8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274da4) {
            ctx->pc = 0x274E2Cu;
            goto label_274e2c;
        }
    }
    ctx->pc = 0x274DACu;
label_274dac:
    // 0x274dac: 0x240200ca  addiu       $v0, $zero, 0xCA
    ctx->pc = 0x274dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x274db0: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x274DB0u;
    {
        const bool branch_taken_0x274db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DB0u;
        // 0x274db4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274db0) {
            ctx->pc = 0x274E2Cu;
            goto label_274e2c;
        }
    }
    ctx->pc = 0x274DB8u;
    // 0x274db8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x274DB8u;
    SET_GPR_U32(ctx, 31, 0x274DC0u);
    ctx->pc = 0x274DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274DB8u;
    // 0x274dbc: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x274DB8u, 0x274DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274DC0u;
label_274dc0:
    // 0x274dc0: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x274dc0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274dc4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274DC4u;
    {
        const bool branch_taken_0x274dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x274dc4) {
            ctx->pc = 0x274DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274DC4u;
            // 0x274dc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274DCCu;
            goto label_274dcc;
        }
    }
    ctx->pc = 0x274DCCu;
label_274dcc:
    // 0x274dcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x274dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274dd0: 0x2010  mfhi        $a0
    ctx->pc = 0x274dd0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x274dd4: 0xc081546  jal         func_205518
    ctx->pc = 0x274DD4u;
    SET_GPR_U32(ctx, 31, 0x274DDCu);
    ctx->pc = 0x274DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274DD4u;
    // 0x274dd8: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x274DD4u, 0x274DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274DDCu;
label_274ddc:
    // 0x274ddc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x274ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274de0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x274de0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274de4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x274de4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274de8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274de8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274dec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274df0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x274df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x274df4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274df8: 0xc0a5e30  jal         func_2978C0
    ctx->pc = 0x274DF8u;
    SET_GPR_U32(ctx, 31, 0x274E00u);
    ctx->pc = 0x274DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274DF8u;
    // 0x274dfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x274DF8u, 0x274E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E00u;
label_274e00:
    // 0x274e00: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x274e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x274e04: 0x8c62c4f0  lw          $v0, -0x3B10($v1)
    ctx->pc = 0x274e04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x274e08: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274E08u;
    {
        const bool branch_taken_0x274e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x274E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E08u;
        // 0x274e0c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e08) {
            ctx->pc = 0x274E2Cu;
            goto label_274e2c;
        }
    }
    ctx->pc = 0x274E10u;
    // 0x274e10: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x274e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e18: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x274e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x274e1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e20: 0xc0a60f8  jal         func_2983E0
    ctx->pc = 0x274E20u;
    SET_GPR_U32(ctx, 31, 0x274E28u);
    ctx->pc = 0x274E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274E20u;
    // 0x274e24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983E0u, 0x274E20u, 0x274E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E28u;
label_274e28:
    // 0x274e28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x274e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_274e2c:
    // 0x274e2c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x274e2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274e30: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x274e30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274e34: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x274e34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274e38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x274e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274e3c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x274e3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274e40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x274e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274e44: 0x3e00008  jr          $ra
    ctx->pc = 0x274E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E44u;
        // 0x274e48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274E4Cu;
}
