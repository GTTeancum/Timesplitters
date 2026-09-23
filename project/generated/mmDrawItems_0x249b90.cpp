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

// Function: mmDrawItems
// Address: 0x249b90 - 0x249e80
void mmDrawItems_0x249b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawItems_0x249b90");
#endif

    switch (ctx->pc) {
        case 0x249ca0u: goto label_249ca0;
        case 0x249cc0u: goto label_249cc0;
        case 0x249d58u: goto label_249d58;
        case 0x249e3cu: goto label_249e3c;
        default: break;
    }

    ctx->pc = 0x249b90u;

    // 0x249b90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x249b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x249b94: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x249b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x249b98: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x249b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x249b9c: 0x24637940  addiu       $v1, $v1, 0x7940
    ctx->pc = 0x249b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31040));
    // 0x249ba0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x249ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x249ba4: 0x3c024f72  lui         $v0, 0x4F72
    ctx->pc = 0x249ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20338 << 16));
    // 0x249ba8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x249ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x249bac: 0x3442c235  ori         $v0, $v0, 0xC235
    ctx->pc = 0x249bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49717);
    // 0x249bb0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x249bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x249bb4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x249bb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249bb8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x249bb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x249bbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x249bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249bc0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x249bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x249bc4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x249bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249bc8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x249bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x249bcc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x249bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x249bd0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x249bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x249bd4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x249bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x249bd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x249bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x249bdc: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x249bdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x249be0: 0x8f84a0dc  lw          $a0, -0x5F24($gp)
    ctx->pc = 0x249be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x249be4: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x249be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x249be8: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x249be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x249bec: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x249becu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x249bf0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x249bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x249bf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x249bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249bf8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x249bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x249bfc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x249bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x249c00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x249c00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249c04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x249c04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x249c08: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x249c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x249c0c: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x249c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
    // 0x249c10: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x249c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x249c14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x249c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249c18: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x249c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x249c1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x249c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249c20: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x249c20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x249c24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x249c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x249c28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x249c2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x249c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249c30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x249c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249c34: 0x46020501  sub.s       $f20, $f0, $f2
    ctx->pc = 0x249c34u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x249c38: 0x2453000c  addiu       $s3, $v0, 0xC
    ctx->pc = 0x249c38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x249c3c: 0x10e4000b  beq         $a3, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x249C3Cu;
    {
        const bool branch_taken_0x249c3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x249C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C3Cu;
        // 0x249c40: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c3c) {
            ctx->pc = 0x249C6Cu;
            goto label_249c6c;
        }
    }
    ctx->pc = 0x249C44u;
    // 0x249c44: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x249c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x249c48: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x249C48u;
    {
        const bool branch_taken_0x249c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249c48) {
            ctx->pc = 0x249C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249C48u;
            // 0x249c4c: 0x8e510034  lw          $s1, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249C80u;
            goto label_249c80;
        }
    }
    ctx->pc = 0x249C50u;
    // 0x249c50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249c54: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x249C54u;
    {
        const bool branch_taken_0x249c54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x249C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C54u;
        // 0x249c58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c54) {
            ctx->pc = 0x249C74u;
            goto label_249c74;
        }
    }
    ctx->pc = 0x249C5Cu;
    // 0x249c5c: 0x50e20007  beql        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x249C5Cu;
    {
        const bool branch_taken_0x249c5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x249c5c) {
            ctx->pc = 0x249C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249C5Cu;
            // 0x249c60: 0x8cd50000  lw          $s5, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249C7Cu;
            goto label_249c7c;
        }
    }
    ctx->pc = 0x249C64u;
    // 0x249c64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x249C64u;
    {
        const bool branch_taken_0x249c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C64u;
        // 0x249c68: 0x8e510034  lw          $s1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c64) {
            ctx->pc = 0x249C80u;
            goto label_249c80;
        }
    }
    ctx->pc = 0x249C6Cu;
label_249c6c:
    // 0x249c6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x249C6Cu;
    {
        const bool branch_taken_0x249c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C6Cu;
        // 0x249c70: 0x8cd60004  lw          $s6, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c6c) {
            ctx->pc = 0x249C7Cu;
            goto label_249c7c;
        }
    }
    ctx->pc = 0x249C74u;
label_249c74:
    // 0x249c74: 0x8cd50004  lw          $s5, 0x4($a2)
    ctx->pc = 0x249c74u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x249c78: 0x8cd60000  lw          $s6, 0x0($a2)
    ctx->pc = 0x249c78u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_249c7c:
    // 0x249c7c: 0x8e510034  lw          $s1, 0x34($s2)
    ctx->pc = 0x249c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_249c80:
    // 0x249c80: 0x16b540  sll         $s6, $s6, 21
    ctx->pc = 0x249c80u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 21));
    // 0x249c84: 0x12200070  beqz        $s1, . + 4 + (0x70 << 2)
    ctx->pc = 0x249C84u;
    {
        const bool branch_taken_0x249c84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C84u;
        // 0x249c88: 0x15ad40  sll         $s5, $s5, 21 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c84) {
            ctx->pc = 0x249E48u;
            goto label_249e48;
        }
    }
    ctx->pc = 0x249C8Cu;
    // 0x249c8c: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x249c8cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x249c90: 0xc7958268  lwc1        $f21, -0x7D98($gp)
    ctx->pc = 0x249c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x249c94: 0x26fe99f0  addiu       $fp, $s7, -0x6610
    ctx->pc = 0x249c94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x249c98: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x249c98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x249c9c: 0x0  nop
    ctx->pc = 0x249c9cu;
    // NOP
label_249ca0:
    // 0x249ca0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x249ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x249ca4: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x249CA4u;
    {
        const bool branch_taken_0x249ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x249CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CA4u;
        // 0x249ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ca4) {
            ctx->pc = 0x249CD8u;
            goto label_249cd8;
        }
    }
    ctx->pc = 0x249CACu;
    // 0x249cac: 0x1a80000b  blez        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x249CACu;
    {
        const bool branch_taken_0x249cac = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x249CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CACu;
        // 0x249cb0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cac) {
            ctx->pc = 0x249CDCu;
            goto label_249cdc;
        }
    }
    ctx->pc = 0x249CB4u;
    // 0x249cb4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x249cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249cb8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x249cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249cbc: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x249cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_249cc0:
    // 0x249cc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x249cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249cc4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x249CC4u;
    {
        const bool branch_taken_0x249cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x249CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CC4u;
        // 0x249cc8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cc4) {
            ctx->pc = 0x249CD8u;
            goto label_249cd8;
        }
    }
    ctx->pc = 0x249CCCu;
    // 0x249ccc: 0x94102a  slt         $v0, $a0, $s4
    ctx->pc = 0x249cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x249cd0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x249CD0u;
    {
        const bool branch_taken_0x249cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CD0u;
        // 0x249cd4: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cd0) {
            ctx->pc = 0x249CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249cc0;
        }
    }
    ctx->pc = 0x249CD8u;
label_249cd8:
    // 0x249cd8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x249cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_249cdc:
    // 0x249cdc: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x249cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x249ce0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x249ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x249ce4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x249ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249ce8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x249ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x249cec: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x249cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249cf0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x249cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x249cf4: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x249cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249cf8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x249cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249cfc: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
    ctx->pc = 0x249CFCu;
    {
        const bool branch_taken_0x249cfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x249D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CFCu;
        // 0x249d00: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cfc) {
            ctx->pc = 0x249E3Cu;
            goto label_249e3c;
        }
    }
    ctx->pc = 0x249D04u;
    // 0x249d04: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x249d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x249d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249d0c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x249d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x249d10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x249d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249d14: 0x0  nop
    ctx->pc = 0x249d14u;
    // NOP
    // 0x249d18: 0x45030049  bc1tl       . + 4 + (0x49 << 2)
    ctx->pc = 0x249D18u;
    {
        const bool branch_taken_0x249d18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x249d18) {
            ctx->pc = 0x249D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249D18u;
            // 0x249d1c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249E40u;
            goto label_249e40;
        }
    }
    ctx->pc = 0x249D20u;
    // 0x249d20: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x249d20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x249d24: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x249d24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x249d28: 0x24c68328  addiu       $a2, $a2, -0x7CD8
    ctx->pc = 0x249d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935336));
    // 0x249d2c: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x249d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x249d30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x249d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x249d34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x249d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x249d38: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x249D38u;
    {
        const bool branch_taken_0x249d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D38u;
        // 0x249d3c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d38) {
            ctx->pc = 0x249D58u;
            goto label_249d58;
        }
    }
    ctx->pc = 0x249D40u;
    // 0x249d40: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x249d40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x249d44: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x249d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x249d48: 0x24e77380  addiu       $a3, $a3, 0x7380
    ctx->pc = 0x249d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29568));
    // 0x249d4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x249d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d50: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x249D50u;
    SET_GPR_U32(ctx, 31, 0x249D58u);
    ctx->pc = 0x249D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249D50u;
    // 0x249d54: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x249D50u, 0x249D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D58u;
label_249d58:
    // 0x249d58: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x249d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249d5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x249d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d60: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x249d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249d64: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x249d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x249d68: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x249d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x249d6c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x249d6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x249d70: 0x8f8ca168  lw          $t4, -0x5E98($gp)
    ctx->pc = 0x249d70u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x249d74: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x249d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x249d78: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x249d78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x249d7c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x249d7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x249d80: 0x8f8ba16c  lw          $t3, -0x5E94($gp)
    ctx->pc = 0x249d80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x249d84: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x249d84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x249d88: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x249d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x249d8c: 0x8f8aa184  lw          $t2, -0x5E7C($gp)
    ctx->pc = 0x249d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x249d90: 0x8f88a180  lw          $t0, -0x5E80($gp)
    ctx->pc = 0x249d90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
    // 0x249d94: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x249d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x249d98: 0x8f89a158  lw          $t1, -0x5EA8($gp)
    ctx->pc = 0x249d98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x249d9c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x249d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x249da0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x249da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x249da4: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x249da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x249da8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x249da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x249dac: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x249dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x249db0: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x249db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x249db4: 0x704a0018  mult1       $zero, $v0, $t2
    ctx->pc = 0x249db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x249db8: 0x8f88a15c  lw          $t0, -0x5EA4($gp)
    ctx->pc = 0x249db8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x249dbc: 0x8fc70014  lw          $a3, 0x14($fp)
    ctx->pc = 0x249dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x249dc0: 0x3012  mflo        $a2
    ctx->pc = 0x249dc0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x249dc4: 0x1810  mfhi        $v1
    ctx->pc = 0x249dc4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x249dc8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x249dc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x249dcc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x249dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x249dd0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x249dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x249dd4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x249dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x249dd8: 0x70001010  mfhi1       $v0
    ctx->pc = 0x249dd8u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
    // 0x249ddc: 0x70003012  mflo1       $a2
    ctx->pc = 0x249ddcu;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x249de0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x249de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x249de4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x249de4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x249de8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x249de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x249dec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x249decu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x249df0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x249df0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x249df4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x249df4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x249df8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x249df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x249dfc: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x249dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x249e00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x249e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x249e04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x249e04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x249e08: 0x8ee699f0  lw          $a2, -0x6610($s7)
    ctx->pc = 0x249e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294941168)));
    // 0x249e0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x249e0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x249e10: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x249e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x249e14: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x249e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x249e18: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x249e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x249e1c: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x249e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x249e20: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x249e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x249e24: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x249e24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x249e28: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x249e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x249e2c: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x249e2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x249e30: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x249e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x249e34: 0xc08b952  jal         func_22E548
    ctx->pc = 0x249E34u;
    SET_GPR_U32(ctx, 31, 0x249E3Cu);
    ctx->pc = 0x249E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E34u;
    // 0x249e38: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x249E34u, 0x249E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E3Cu;
label_249e3c:
    // 0x249e3c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x249e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_249e40:
    // 0x249e40: 0x5620ff97  bnel        $s1, $zero, . + 4 + (-0x69 << 2)
    ctx->pc = 0x249E40u;
    {
        const bool branch_taken_0x249e40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x249e40) {
            ctx->pc = 0x249E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249E40u;
            // 0x249e44: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249ca0;
        }
    }
    ctx->pc = 0x249E48u;
label_249e48:
    // 0x249e48: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x249e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x249e4c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x249e4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x249e50: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x249e50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x249e54: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x249e54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x249e58: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x249e58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x249e5c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x249e5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x249e60: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x249e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x249e64: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x249e64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249e68: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x249e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249e6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x249e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249e70: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x249e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x249e74: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x249e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x249e78: 0x3e00008  jr          $ra
    ctx->pc = 0x249E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E78u;
        // 0x249e7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249E80u;
}
