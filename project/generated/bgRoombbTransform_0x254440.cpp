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

// Function: bgRoombbTransform
// Address: 0x254440 - 0x254610
void bgRoombbTransform_0x254440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgRoombbTransform_0x254440");
#endif

    ctx->pc = 0x254440u;

    // 0x254440: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x254440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x254444: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254448: 0xc487000c  lwc1        $f7, 0xC($a0)
    ctx->pc = 0x254448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25444c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254450: 0xc4880014  lwc1        $f8, 0x14($a0)
    ctx->pc = 0x254450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x254454: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x254454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x254458: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x254458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x25445c: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x25445cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x254460: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x254460u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x254464: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x254464u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x254468: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x254468u;
    {
        const bool branch_taken_0x254468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254468u;
        // 0x25446c: 0xe7a80014  swc1        $f8, 0x14($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254468) {
            ctx->pc = 0x2544F4u;
            goto label_2544f4;
        }
    }
    ctx->pc = 0x254470u;
    // 0x254470: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x254470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x254474: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x254474u;
    {
        const bool branch_taken_0x254474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254474) {
            ctx->pc = 0x254478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254474u;
            // 0x254478: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25448Cu;
            goto label_25448c;
        }
    }
    ctx->pc = 0x25447Cu;
    // 0x25447c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x25447Cu;
    {
        const bool branch_taken_0x25447c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25447c) {
            ctx->pc = 0x254480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25447Cu;
            // 0x254480: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2544A4u;
            goto label_2544a4;
        }
    }
    ctx->pc = 0x254484u;
    // 0x254484: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x254484u;
    {
        const bool branch_taken_0x254484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254484) {
            ctx->pc = 0x254608u;
            goto label_254608;
        }
    }
    ctx->pc = 0x25448Cu;
label_25448c:
    // 0x25448c: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x25448Cu;
    {
        const bool branch_taken_0x25448c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x254490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25448Cu;
        // 0x254490: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25448c) {
            ctx->pc = 0x254550u;
            goto label_254550;
        }
    }
    ctx->pc = 0x254494u;
    // 0x254494: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x254494u;
    {
        const bool branch_taken_0x254494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x254494) {
            ctx->pc = 0x254498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254494u;
            // 0x254498: 0xc4a10004  lwc1        $f1, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545B4u;
            goto label_2545b4;
        }
    }
    ctx->pc = 0x25449Cu;
    // 0x25449c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x25449Cu;
    {
        const bool branch_taken_0x25449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25449c) {
            ctx->pc = 0x254608u;
            goto label_254608;
        }
    }
    ctx->pc = 0x2544A4u;
label_2544a4:
    // 0x2544a4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2544a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2544a8: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2544a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2544ac: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x2544acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2544b0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2544b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2544b4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2544b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2544b8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2544b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2544bc: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2544bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2544c0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2544c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2544c4: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x2544c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2544c8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2544c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2544cc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2544ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2544d0: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x2544d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x2544d4: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2544d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2544d8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2544d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2544dc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2544dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2544e0: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x2544e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2544e4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2544e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2544e8: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x2544e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2544ec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2544ECu;
    {
        const bool branch_taken_0x2544ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2544F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544ECu;
        // 0x2544f0: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544ec) {
            ctx->pc = 0x254608u;
            goto label_254608;
        }
    }
    ctx->pc = 0x2544F4u;
label_2544f4:
    // 0x2544f4: 0x46004047  neg.s       $f1, $f8
    ctx->pc = 0x2544f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[8]);
    // 0x2544f8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2544f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2544fc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2544fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254500: 0x460030c7  neg.s       $f3, $f6
    ctx->pc = 0x254500u;
    ctx->f[3] = FPU_NEG_S(ctx->f[6]);
    // 0x254504: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x254504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x254508: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x254508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25450c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x25450cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x254510: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x254510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254514: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x254514u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x254518: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x254518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x25451c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x25451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254520: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x254520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x254524: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x254524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x254528: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x254528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25452c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x25452cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x254530: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x254530u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x254534: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x254534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254538: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x254538u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x25453c: 0xe4840010  swc1        $f4, 0x10($a0)
    ctx->pc = 0x25453cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x254540: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x254540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254544: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x254544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x254548: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x254548u;
    {
        const bool branch_taken_0x254548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254548u;
        // 0x25454c: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254548) {
            ctx->pc = 0x254608u;
            goto label_254608;
        }
    }
    ctx->pc = 0x254550u;
label_254550:
    // 0x254550: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x254550u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x254554: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x254554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254558: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x254558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25455c: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x25455cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
    // 0x254560: 0x46002907  neg.s       $f4, $f5
    ctx->pc = 0x254560u;
    ctx->f[4] = FPU_NEG_S(ctx->f[5]);
    // 0x254564: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x254564u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x254568: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x254568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25456c: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x25456cu;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x254570: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x254570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x254574: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x254574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254578: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x254578u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25457c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x25457cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x254580: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x254580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254584: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x254584u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x254588: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x254588u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x25458c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25458cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254590: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x254590u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x254594: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x254594u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x254598: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x254598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25459c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x25459cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2545a0: 0xe4850010  swc1        $f5, 0x10($a0)
    ctx->pc = 0x2545a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2545a4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2545a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2545a8: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2545a8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2545ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2545ACu;
    {
        const bool branch_taken_0x2545ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545ACu;
        // 0x2545b0: 0xe4860014  swc1        $f6, 0x14($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545ac) {
            ctx->pc = 0x254608u;
            goto label_254608;
        }
    }
    ctx->pc = 0x2545B4u;
label_2545b4:
    // 0x2545b4: 0x460038c7  neg.s       $f3, $f7
    ctx->pc = 0x2545b4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[7]);
    // 0x2545b8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2545b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2545bc: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x2545bcu;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x2545c0: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x2545c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2545c4: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x2545c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2545c8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2545c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2545cc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2545ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2545d0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2545d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2545d4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2545d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2545d8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2545d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2545dc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2545dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2545e0: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x2545e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2545e4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2545e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2545e8: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x2545e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2545ec: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2545ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2545f0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2545f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2545f4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2545f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2545f8: 0xe4840010  swc1        $f4, 0x10($a0)
    ctx->pc = 0x2545f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2545fc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2545fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254600: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x254600u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x254604: 0xe4850014  swc1        $f5, 0x14($a0)
    ctx->pc = 0x254604u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_254608:
    // 0x254608: 0x3e00008  jr          $ra
    ctx->pc = 0x254608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254608u;
        // 0x25460c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254610u;
}
