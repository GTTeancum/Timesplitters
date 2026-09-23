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

// Function: hudTick
// Address: 0x2b0e80 - 0x2b0f6c
void hudTick_0x2b0e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudTick_0x2b0e80");
#endif

    switch (ctx->pc) {
        case 0x2b0ed0u: goto label_2b0ed0;
        default: break;
    }

    ctx->pc = 0x2b0e80u;

    // 0x2b0e80: 0x8f88b234  lw          $t0, -0x4DCC($gp)
    ctx->pc = 0x2b0e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b0e84: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x2b0e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x2b0e88: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b0e8c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2b0e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b0e90: 0x2442f838  addiu       $v0, $v0, -0x7C8
    ctx->pc = 0x2b0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965304));
    // 0x2b0e94: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2b0e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b0e98: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B0E98u;
    {
        const bool branch_taken_0x2b0e98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E98u;
        // 0x2b0e9c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e98) {
            ctx->pc = 0x2B0EF4u;
            goto label_2b0ef4;
        }
    }
    ctx->pc = 0x2B0EA0u;
    // 0x2b0ea0: 0xc782b9a0  lwc1        $f2, -0x4660($gp)
    ctx->pc = 0x2b0ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0ea4: 0xc7808f90  lwc1        $f0, -0x7070($gp)
    ctx->pc = 0x2b0ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0ea8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2b0ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2b0eac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b0eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b0eb0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b0eb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b0eb4: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x2b0eb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0eb8: 0x0  nop
    ctx->pc = 0x2b0eb8u;
    // NOP
    // 0x2b0ebc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2B0EBCu;
    {
        const bool branch_taken_0x2b0ebc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EBCu;
        // 0x2b0ec0: 0xe782b9a0  swc1        $f2, -0x4660($gp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ebc) {
            ctx->pc = 0x2B0EF4u;
            goto label_2b0ef4;
        }
    }
    ctx->pc = 0x2B0EC4u;
    // 0x2b0ec4: 0x8f87b460  lw          $a3, -0x4BA0($gp)
    ctx->pc = 0x2b0ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2b0ec8: 0x8ca60110  lw          $a2, 0x110($a1)
    ctx->pc = 0x2b0ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x2b0ecc: 0x8ca40114  lw          $a0, 0x114($a1)
    ctx->pc = 0x2b0eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
label_2b0ed0:
    // 0x2b0ed0: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2b0ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2b0ed4: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x2b0ed4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x2b0ed8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2b0ed8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2b0edc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2b0edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0ee0: 0xe782b9a0  swc1        $f2, -0x4660($gp)
    ctx->pc = 0x2b0ee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949280), bits); }
    // 0x2b0ee4: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B0EE4u;
    {
        const bool branch_taken_0x2b0ee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0ee4) {
            ctx->pc = 0x2B0ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0ed0;
        }
    }
    ctx->pc = 0x2B0EECu;
    // 0x2b0eec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0EECu;
    {
        const bool branch_taken_0x2b0eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EECu;
        // 0x2b0ef0: 0x8d030128  lw          $v1, 0x128($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0eec) {
            ctx->pc = 0x2B0F04u;
            goto label_2b0f04;
        }
    }
    ctx->pc = 0x2B0EF4u;
label_2b0ef4:
    // 0x2b0ef4: 0x8f87b460  lw          $a3, -0x4BA0($gp)
    ctx->pc = 0x2b0ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2b0ef8: 0x8ca60110  lw          $a2, 0x110($a1)
    ctx->pc = 0x2b0ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x2b0efc: 0x8ca40114  lw          $a0, 0x114($a1)
    ctx->pc = 0x2b0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x2b0f00: 0x8d030128  lw          $v1, 0x128($t0)
    ctx->pc = 0x2b0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 296)));
label_2b0f04:
    // 0x2b0f04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b0f08: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0F08u;
    {
        const bool branch_taken_0x2b0f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0f08) {
            ctx->pc = 0x2B0F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0F08u;
            // 0x2b0f0c: 0x8ca2010c  lw          $v0, 0x10C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0F1Cu;
            goto label_2b0f1c;
        }
    }
    ctx->pc = 0x2B0F10u;
    // 0x2b0f10: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x2b0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2b0f14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0F14u;
    {
        const bool branch_taken_0x2b0f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F14u;
        // 0x2b0f18: 0xaca2010c  sw          $v0, 0x10C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f14) {
            ctx->pc = 0x2B0F2Cu;
            goto label_2b0f2c;
        }
    }
    ctx->pc = 0x2B0F1Cu;
label_2b0f1c:
    // 0x2b0f1c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2b0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b0f20: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0F20u;
    {
        const bool branch_taken_0x2b0f20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F20u;
        // 0x2b0f24: 0xaca2010c  sw          $v0, 0x10C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f20) {
            ctx->pc = 0x2B0F2Cu;
            goto label_2b0f2c;
        }
    }
    ctx->pc = 0x2B0F28u;
    // 0x2b0f28: 0xaca0010c  sw          $zero, 0x10C($a1)
    ctx->pc = 0x2b0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 0));
label_2b0f2c:
    // 0x2b0f2c: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x2b0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2b0f30: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0F30u;
    {
        const bool branch_taken_0x2b0f30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F30u;
        // 0x2b0f34: 0xaca20110  sw          $v0, 0x110($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f30) {
            ctx->pc = 0x2B0F3Cu;
            goto label_2b0f3c;
        }
    }
    ctx->pc = 0x2B0F38u;
    // 0x2b0f38: 0xaca00110  sw          $zero, 0x110($a1)
    ctx->pc = 0x2b0f38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 272), GPR_U32(ctx, 0));
label_2b0f3c:
    // 0x2b0f3c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0F3Cu;
    {
        const bool branch_taken_0x2b0f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0f3c) {
            ctx->pc = 0x2B0F64u;
            goto label_2b0f64;
        }
    }
    ctx->pc = 0x2B0F44u;
    // 0x2b0f44: 0x8ca30118  lw          $v1, 0x118($a1)
    ctx->pc = 0x2b0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x2b0f48: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2b0f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b0f4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0F4Cu;
    {
        const bool branch_taken_0x2b0f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F4Cu;
        // 0x2b0f50: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f4c) {
            ctx->pc = 0x2B0F60u;
            goto label_2b0f60;
        }
    }
    ctx->pc = 0x2B0F54u;
    // 0x2b0f54: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2b0f54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b0f58: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0F58u;
    {
        const bool branch_taken_0x2b0f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F58u;
        // 0x2b0f5c: 0xaca20114  sw          $v0, 0x114($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f58) {
            ctx->pc = 0x2B0F64u;
            goto label_2b0f64;
        }
    }
    ctx->pc = 0x2B0F60u;
label_2b0f60:
    // 0x2b0f60: 0xaca00114  sw          $zero, 0x114($a1)
    ctx->pc = 0x2b0f60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 0));
label_2b0f64:
    // 0x2b0f64: 0x80ac27a  j           func_2B09E8
    ctx->pc = 0x2B0F64u;
    ctx->pc = 0x2B0F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F64u;
    // 0x2b0f68: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B09E8u;
    hudMessageTick_0x2b09e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B0F6Cu;
}
