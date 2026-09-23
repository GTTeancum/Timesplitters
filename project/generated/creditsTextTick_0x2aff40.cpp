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

// Function: creditsTextTick
// Address: 0x2aff40 - 0x2b00e8
void creditsTextTick_0x2aff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsTextTick_0x2aff40");
#endif

    switch (ctx->pc) {
        case 0x2aff78u: goto label_2aff78;
        case 0x2b0068u: goto label_2b0068;
        default: break;
    }

    ctx->pc = 0x2aff40u;

    // 0x2aff40: 0x8f85b354  lw          $a1, -0x4CAC($gp)
    ctx->pc = 0x2aff40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947668)));
    // 0x2aff44: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2aff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2aff48: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x2aff48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x2aff4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2aff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aff50: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2aff50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aff54: 0x2527d850  addiu       $a3, $t1, -0x27B0
    ctx->pc = 0x2aff54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957136));
    // 0x2aff58: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2aff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2aff5c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2aff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2aff60: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AFF60u;
    {
        const bool branch_taken_0x2aff60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2AFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF60u;
        // 0x2aff64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff60) {
            ctx->pc = 0x2AFFA0u;
            goto label_2affa0;
        }
    }
    ctx->pc = 0x2AFF68u;
    // 0x2aff68: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2aff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aff6c: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x2aff6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x2aff70: 0xc784b360  lwc1        $f4, -0x4CA0($gp)
    ctx->pc = 0x2aff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aff74: 0x0  nop
    ctx->pc = 0x2aff74u;
    // NOP
label_2aff78:
    // 0x2aff78: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2aff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2aff7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2aff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2aff80: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2aff80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aff84: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2aff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aff88: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2aff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2aff8c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2aff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2aff90: 0x1464fff9  bne         $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AFF90u;
    {
        const bool branch_taken_0x2aff90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2aff90) {
            ctx->pc = 0x2AFF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aff78;
        }
    }
    ctx->pc = 0x2AFF98u;
    // 0x2aff98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFF98u;
    {
        const bool branch_taken_0x2aff98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF98u;
        // 0x2aff9c: 0x2407001c  addiu       $a3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff98) {
            ctx->pc = 0x2AFFB0u;
            goto label_2affb0;
        }
    }
    ctx->pc = 0x2AFFA0u;
label_2affa0:
    // 0x2affa0: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2affa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2affa4: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x2affa4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x2affa8: 0xc784b360  lwc1        $f4, -0x4CA0($gp)
    ctx->pc = 0x2affa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2affac: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x2affacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2affb0:
    // 0x2affb0: 0x2524d850  addiu       $a0, $t1, -0x27B0
    ctx->pc = 0x2affb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957136));
    // 0x2affb4: 0xa71018  mult        $v0, $a1, $a3
    ctx->pc = 0x2affb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2affb8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2affb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2affbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2affbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2affc0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2affc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2affc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2affc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2affc8: 0x0  nop
    ctx->pc = 0x2affc8u;
    // NOP
    // 0x2affcc: 0x0  nop
    ctx->pc = 0x2affccu;
    // NOP
    // 0x2affd0: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x2affd0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x2affd4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2affd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2affd8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2affd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2affdc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2affdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2affe0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2affe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2affe4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2affe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2affe8: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2affe8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2affec: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2affecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2afff0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2afff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2afff4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2afff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2afff8: 0x0  nop
    ctx->pc = 0x2afff8u;
    // NOP
    // 0x2afffc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2AFFFCu;
    {
        const bool branch_taken_0x2afffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFFCu;
        // 0x2b0000: 0xe784b360  swc1        $f4, -0x4CA0($gp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afffc) {
            ctx->pc = 0x2B0030u;
            goto label_2b0030;
        }
    }
    ctx->pc = 0x2B0004u;
    // 0x2b0004: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x2b0004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b0008: 0xaf80b360  sw          $zero, -0x4CA0($gp)
    ctx->pc = 0x2b0008u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947680), GPR_U32(ctx, 0));
    // 0x2b000c: 0xc71018  mult        $v0, $a2, $a3
    ctx->pc = 0x2b000cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b0010: 0xaf86b354  sw          $a2, -0x4CAC($gp)
    ctx->pc = 0x2b0010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947668), GPR_U32(ctx, 6));
    // 0x2b0014: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b0014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b0018: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2b0018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b001c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b0020: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0020u;
    {
        const bool branch_taken_0x2b0020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0020u;
        // 0x2b0024: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0020) {
            ctx->pc = 0x2B0034u;
            goto label_2b0034;
        }
    }
    ctx->pc = 0x2B0028u;
    // 0x2b0028: 0xaf80b354  sw          $zero, -0x4CAC($gp)
    ctx->pc = 0x2b0028u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947668), GPR_U32(ctx, 0));
    // 0x2b002c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b002cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0030:
    // 0x2b0030: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2b0030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2b0034:
    // 0x2b0034: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b0034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0038: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x2b0038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2b003c: 0x2528d850  addiu       $t0, $t1, -0x27B0
    ctx->pc = 0x2b003cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957136));
    // 0x2b0040: 0xaf80b358  sw          $zero, -0x4CA8($gp)
    ctx->pc = 0x2b0040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947672), GPR_U32(ctx, 0));
    // 0x2b0044: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b0044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b0048: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x2b0048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2b004c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2b004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b0050: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B0050u;
    {
        const bool branch_taken_0x2b0050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0050u;
        // 0x2b0054: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0050) {
            ctx->pc = 0x2B0090u;
            goto label_2b0090;
        }
    }
    ctx->pc = 0x2B0058u;
    // 0x2b0058: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x2b0058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2b005c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0060: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b0060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b0064: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b0064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b0068:
    // 0x2b0068: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0068u;
    {
        const bool branch_taken_0x2b0068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0068) {
            ctx->pc = 0x2B006Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0068u;
            // 0x2b006c: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0080u;
            goto label_2b0080;
        }
    }
    ctx->pc = 0x2B0070u;
    // 0x2b0070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b0070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0074: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2b0074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2b0078: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2b0078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b007c: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x2b007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_2b0080:
    // 0x2b0080: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b0080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b0084: 0x1446fff8  bne         $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B0084u;
    {
        const bool branch_taken_0x2b0084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0084u;
        // 0x2b0088: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0084) {
            ctx->pc = 0x2B0068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0068;
        }
    }
    ctx->pc = 0x2B008Cu;
    // 0x2b008c: 0xaf84b358  sw          $a0, -0x4CA8($gp)
    ctx->pc = 0x2b008cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947672), GPR_U32(ctx, 4));
label_2b0090:
    // 0x2b0090: 0x254399f0  addiu       $v1, $t2, -0x6610
    ctx->pc = 0x2b0090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941168));
    // 0x2b0094: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2b0094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2b0098: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b0098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b009c: 0xa63018  mult        $a2, $a1, $a2
    ctx->pc = 0x2b009cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2b00a0: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x2b00a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2b00a4: 0x2524d850  addiu       $a0, $t1, -0x27B0
    ctx->pc = 0x2b00a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957136));
    // 0x2b00a8: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2b00a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2b00ac: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2b00acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b00b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b00b4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2b00b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2b00b8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b00b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b00bc: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x2b00bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b00c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2b00c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b00c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b00c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b00c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b00c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b00cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b00ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b00d0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2b00d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b00d4: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2b00d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b00d8: 0xe780b364  swc1        $f0, -0x4C9C($gp)
    ctx->pc = 0x2b00d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947684), bits); }
    // 0x2b00dc: 0xe781b368  swc1        $f1, -0x4C98($gp)
    ctx->pc = 0x2b00dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947688), bits); }
    // 0x2b00e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B00E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00E0u;
        // 0x2b00e4: 0xe782b35c  swc1        $f2, -0x4CA4($gp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947676), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B00E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B00E8u;
}
