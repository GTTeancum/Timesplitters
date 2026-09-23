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

// Function: extractAnimData
// Address: 0x215280 - 0x215420
void extractAnimData_0x215280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("extractAnimData_0x215280");
#endif

    ctx->pc = 0x215280u;

    // 0x215280: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x215280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x215284: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x215284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x215288: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x215288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21528c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x21528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x215290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x215290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215294: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x215294u;
    {
        const bool branch_taken_0x215294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215294u;
        // 0x215298: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215294) {
            ctx->pc = 0x2152D0u;
            goto label_2152d0;
        }
    }
    ctx->pc = 0x21529Cu;
    // 0x21529c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x21529cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2152a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2152A0u;
    {
        const bool branch_taken_0x2152a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2152A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152A0u;
        // 0x2152a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152a0) {
            ctx->pc = 0x2152B8u;
            goto label_2152b8;
        }
    }
    ctx->pc = 0x2152A8u;
    // 0x2152a8: 0x50600036  beql        $v1, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2152A8u;
    {
        const bool branch_taken_0x2152a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2152a8) {
            ctx->pc = 0x2152ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2152A8u;
            // 0x2152ac: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215384u;
            goto label_215384;
        }
    }
    ctx->pc = 0x2152B0u;
    // 0x2152b0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2152B0u;
    {
        const bool branch_taken_0x2152b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2152B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152B0u;
        // 0x2152b4: 0x8d220058  lw          $v0, 0x58($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152b0) {
            ctx->pc = 0x2153C0u;
            goto label_2153c0;
        }
    }
    ctx->pc = 0x2152B8u;
label_2152b8:
    // 0x2152b8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2152B8u;
    {
        const bool branch_taken_0x2152b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2152BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152B8u;
        // 0x2152bc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152b8) {
            ctx->pc = 0x215318u;
            goto label_215318;
        }
    }
    ctx->pc = 0x2152C0u;
    // 0x2152c0: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2152C0u;
    {
        const bool branch_taken_0x2152c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2152C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152C0u;
        // 0x2152c4: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152c0) {
            ctx->pc = 0x215374u;
            goto label_215374;
        }
    }
    ctx->pc = 0x2152C8u;
    // 0x2152c8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2152C8u;
    {
        const bool branch_taken_0x2152c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2152CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152C8u;
        // 0x2152cc: 0x8d220058  lw          $v0, 0x58($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152c8) {
            ctx->pc = 0x2153C0u;
            goto label_2153c0;
        }
    }
    ctx->pc = 0x2152D0u;
label_2152d0:
    // 0x2152d0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2152d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2152d4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2152d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2152d8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2152d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2152dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2152dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2152e0: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2152e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2152e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2152e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2152e8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2152e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2152ec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2152ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2152f0: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x2152f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2152f4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2152f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2152f8: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x2152f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2152fc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2152fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215300: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x215300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x215304: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x215304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215308: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x215308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x21530c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x21530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215310: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x215310u;
    {
        const bool branch_taken_0x215310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215310u;
        // 0x215314: 0xe5010018  swc1        $f1, 0x18($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215310) {
            ctx->pc = 0x2153BCu;
            goto label_2153bc;
        }
    }
    ctx->pc = 0x215318u;
label_215318:
    // 0x215318: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215318u;
    {
        const bool branch_taken_0x215318 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215318u;
        // 0x21531c: 0x24e4ffff  addiu       $a0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215318) {
            ctx->pc = 0x215328u;
            goto label_215328;
        }
    }
    ctx->pc = 0x215320u;
    // 0x215320: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x215320u;
    {
        const bool branch_taken_0x215320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215320u;
        // 0x215324: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215320) {
            ctx->pc = 0x215384u;
            goto label_215384;
        }
    }
    ctx->pc = 0x215328u;
label_215328:
    // 0x215328: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x215328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x21532c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x21532cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x215330: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x215330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x215334: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x215334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215338: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x215338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21533c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x21533cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215340: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x215340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x215344: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x215344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215348: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x215348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x21534c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x21534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215350: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x215350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x215354: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x215354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215358: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x215358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x21535c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x21535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215360: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x215360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x215364: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x215364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215368: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x215368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x21536c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x21536Cu;
    {
        const bool branch_taken_0x21536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21536Cu;
        // 0x215370: 0xc4a00018  lwc1        $f0, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21536c) {
            ctx->pc = 0x2153B8u;
            goto label_2153b8;
        }
    }
    ctx->pc = 0x215374u;
label_215374:
    // 0x215374: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x215374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x215378: 0x671023  subu        $v0, $v1, $a3
    ctx->pc = 0x215378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x21537c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21537cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215380: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x215380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_215384:
    // 0x215384: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x215384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215388: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x215388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x21538c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x21538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215390: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x215390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x215394: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x215394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215398: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x215398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x21539c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x21539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2153a0: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x2153a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2153a4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2153a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2153a8: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x2153a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2153ac: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2153acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2153b0: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x2153b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x2153b4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2153b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2153b8:
    // 0x2153b8: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x2153b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
label_2153bc:
    // 0x2153bc: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x2153bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
label_2153c0:
    // 0x2153c0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2153C0u;
    {
        const bool branch_taken_0x2153c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2153c0) {
            ctx->pc = 0x2153C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2153C0u;
            // 0x2153c4: 0xc5000000  lwc1        $f0, 0x0($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2153FCu;
            goto label_2153fc;
        }
    }
    ctx->pc = 0x2153C8u;
    // 0x2153c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2153c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2153cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2153ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2153d0: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2153D0u;
    {
        const bool branch_taken_0x2153d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2153d0) {
            ctx->pc = 0x2153D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2153D0u;
            // 0x2153d4: 0xc5000000  lwc1        $f0, 0x0($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2153FCu;
            goto label_2153fc;
        }
    }
    ctx->pc = 0x2153D8u;
    // 0x2153d8: 0x8d220060  lw          $v0, 0x60($t1)
    ctx->pc = 0x2153d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x2153dc: 0x28420236  slti        $v0, $v0, 0x236
    ctx->pc = 0x2153dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)566) ? 1 : 0);
    // 0x2153e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2153E0u;
    {
        const bool branch_taken_0x2153e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2153e0) {
            ctx->pc = 0x2153F0u;
            goto label_2153f0;
        }
    }
    ctx->pc = 0x2153E8u;
    // 0x2153e8: 0x5cc00004  bgtzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2153E8u;
    {
        const bool branch_taken_0x2153e8 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x2153e8) {
            ctx->pc = 0x2153ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2153E8u;
            // 0x2153ec: 0xc5000000  lwc1        $f0, 0x0($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2153FCu;
            goto label_2153fc;
        }
    }
    ctx->pc = 0x2153F0u;
label_2153f0:
    // 0x2153f0: 0xc7808048  lwc1        $f0, -0x7FB8($gp)
    ctx->pc = 0x2153f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2153f4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2153f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2153f8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2153f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2153fc:
    // 0x2153fc: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2153fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215400: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x215400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215404: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x215404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x215408: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x215408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x21540c: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x21540cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x215410: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x215410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x215414: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x215414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x215418: 0x3e00008  jr          $ra
    ctx->pc = 0x215418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215418u;
        // 0x21541c: 0xe5020008  swc1        $f2, 0x8($t0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215420u;
}
