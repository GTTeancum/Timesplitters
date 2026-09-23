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

// Function: obCalcChunkBounds
// Address: 0x25e4d8 - 0x25e640
void obCalcChunkBounds_0x25e4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obCalcChunkBounds_0x25e4d8");
#endif

    switch (ctx->pc) {
        case 0x25e548u: goto label_25e548;
        case 0x25e568u: goto label_25e568;
        case 0x25e580u: goto label_25e580;
        case 0x25e610u: goto label_25e610;
        default: break;
    }

    ctx->pc = 0x25e4d8u;

    // 0x25e4d8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x25e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x25e4dc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x25e4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25e4e0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25e4e4: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x25e4e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4e8: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x25e4e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25e4ec: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x25e4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25e4f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x25e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25e4f4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e4f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e4f8: 0xc7808368  lwc1        $f0, -0x7C98($gp)
    ctx->pc = 0x25e4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e4fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x25e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25e500: 0xc781836c  lwc1        $f1, -0x7C94($gp)
    ctx->pc = 0x25e500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e504: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25e504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25e508: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25e508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25e50c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x25e50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x25e510: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x25e510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25e514: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x25e514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25e518: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x25e518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25e51c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x25e51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25e520: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x25e520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25e524: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x25e524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25e528: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x25e528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25e52c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x25e52cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x25e530: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x25e530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x25e534: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x25e534u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25e538: 0x27ac0020  addiu       $t4, $sp, 0x20
    ctx->pc = 0x25e538u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25e53c: 0x24c8000c  addiu       $t0, $a2, 0xC
    ctx->pc = 0x25e53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x25e540: 0x25ae000c  addiu       $t6, $t5, 0xC
    ctx->pc = 0x25e540u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x25e544: 0x0  nop
    ctx->pc = 0x25e544u;
    // NOP
label_25e548:
    // 0x25e548: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x25e548u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25e54c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25e550: 0x31437fff  andi        $v1, $t2, 0x7FFF
    ctx->pc = 0x25e550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32767);
    // 0x25e554: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25e554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25e558: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x25E558u;
    {
        const bool branch_taken_0x25e558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E558u;
        // 0x25e55c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e558) {
            ctx->pc = 0x25E5F4u;
            goto label_25e5f4;
        }
    }
    ctx->pc = 0x25E560u;
    // 0x25e560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E560u;
    {
        const bool branch_taken_0x25e560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E560u;
        // 0x25e564: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e560) {
            ctx->pc = 0x25E570u;
            goto label_25e570;
        }
    }
    ctx->pc = 0x25E568u;
label_25e568:
    // 0x25e568: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x25e568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x25e56c: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x25e56cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25e570:
    // 0x25e570: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x25e570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e574: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x25e574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e578: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x25e578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e57c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x25e57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25e580:
    // 0x25e580: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25e580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e584: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25e584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e588: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25e588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e58c: 0x0  nop
    ctx->pc = 0x25e58cu;
    // NOP
    // 0x25e590: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25E590u;
    {
        const bool branch_taken_0x25e590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e590) {
            ctx->pc = 0x25E594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E590u;
            // 0x25e594: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E5A4u;
            goto label_25e5a4;
        }
    }
    ctx->pc = 0x25E598u;
    // 0x25e598: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x25e598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e59c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e5a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e5a4:
    // 0x25e5a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25e5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e5a8: 0x0  nop
    ctx->pc = 0x25e5a8u;
    // NOP
    // 0x25e5ac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25E5ACu;
    {
        const bool branch_taken_0x25e5ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e5ac) {
            ctx->pc = 0x25E5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E5ACu;
            // 0x25e5b0: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E5C0u;
            goto label_25e5c0;
        }
    }
    ctx->pc = 0x25E5B4u;
    // 0x25e5b4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25e5b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25e5b8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e5bc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e5c0:
    // 0x25e5c0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25e5c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25e5c8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x25e5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x25e5cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25e5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25e5d0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x25e5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x25e5d4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25e5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25e5d8: 0x4e1ffe9  bgez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x25E5D8u;
    {
        const bool branch_taken_0x25e5d8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x25E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5D8u;
        // 0x25e5dc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5d8) {
            ctx->pc = 0x25E580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e580;
        }
    }
    ctx->pc = 0x25E5E0u;
    // 0x25e5e0: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x25e5e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25e5e8: 0x1462ffdf  bne         $v1, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x25E5E8u;
    {
        const bool branch_taken_0x25e5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5E8u;
        // 0x25e5ec: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5e8) {
            ctx->pc = 0x25E568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e568;
        }
    }
    ctx->pc = 0x25E5F0u;
    // 0x25e5f0: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x25e5f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_25e5f4:
    // 0x25e5f4: 0x31428000  andi        $v0, $t2, 0x8000
    ctx->pc = 0x25e5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32768);
    // 0x25e5f8: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x25E5F8u;
    {
        const bool branch_taken_0x25e5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5F8u;
        // 0x25e5fc: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5f8) {
            ctx->pc = 0x25E548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e548;
        }
    }
    ctx->pc = 0x25E600u;
    // 0x25e600: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x25e600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e604: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x25e604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e608: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x25e608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e60c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x25e60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25e610:
    // 0x25e610: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25e610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e614: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x25e614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x25e618: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e61c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25e620: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x25e620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x25e624: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25e628: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x25e628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25e62c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x25e62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x25e630: 0x4e1fff7  bgez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x25E630u;
    {
        const bool branch_taken_0x25e630 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x25E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E630u;
        // 0x25e634: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e630) {
            ctx->pc = 0x25E610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e610;
        }
    }
    ctx->pc = 0x25E638u;
    // 0x25e638: 0x3e00008  jr          $ra
    ctx->pc = 0x25E638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E638u;
        // 0x25e63c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E640u;
}
