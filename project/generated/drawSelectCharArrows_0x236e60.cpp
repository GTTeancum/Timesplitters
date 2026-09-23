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

// Function: drawSelectCharArrows
// Address: 0x236e60 - 0x236f40
void drawSelectCharArrows_0x236e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawSelectCharArrows_0x236e60");
#endif

    switch (ctx->pc) {
        case 0x236ea4u: goto label_236ea4;
        case 0x236eb8u: goto label_236eb8;
        case 0x236f00u: goto label_236f00;
        default: break;
    }

    ctx->pc = 0x236e60u;

    // 0x236e60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x236e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x236e64: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x236e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x236e68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x236e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x236e6c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x236e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x236e70: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x236e70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x236e74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x236e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x236e78: 0x262399f0  addiu       $v1, $s1, -0x6610
    ctx->pc = 0x236e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941168));
    // 0x236e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236e80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x236e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x236e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x236e88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x236e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e8c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x236e8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x236e90: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x236e90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x329A48u));
    // 0x236e94: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236E94u;
    {
        const bool branch_taken_0x236e94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E94u;
        // 0x236e98: 0x829007  srav        $s2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e94) {
            ctx->pc = 0x236EBCu;
            goto label_236ebc;
        }
    }
    ctx->pc = 0x236E9Cu;
    // 0x236e9c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x236E9Cu;
    SET_GPR_U32(ctx, 31, 0x236EA4u);
    ctx->pc = 0x236EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E9Cu;
    // 0x236ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x236E9Cu, 0x236EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EA4u;
label_236ea4:
    // 0x236ea4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x236ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236ea8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x236EA8u;
    {
        const bool branch_taken_0x236ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236ea8) {
            ctx->pc = 0x236EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236EA8u;
            // 0x236eac: 0x263199f0  addiu       $s1, $s1, -0x6610 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236EC0u;
            goto label_236ec0;
        }
    }
    ctx->pc = 0x236EB0u;
    // 0x236eb0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x236EB0u;
    SET_GPR_U32(ctx, 31, 0x236EB8u);
    ctx->pc = 0x236EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EB0u;
    // 0x236eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x236EB0u, 0x236EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EB8u;
label_236eb8:
    // 0x236eb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x236eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236ebc:
    // 0x236ebc: 0x263199f0  addiu       $s1, $s1, -0x6610
    ctx->pc = 0x236ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941168));
label_236ec0:
    // 0x236ec0: 0x1287c2  srl         $s0, $s2, 31
    ctx->pc = 0x236ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x236ec4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x236ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x236ec8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x236ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x236ecc: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x236eccu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x236ed0: 0x26630003  addiu       $v1, $s3, 0x3
    ctx->pc = 0x236ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x236ed4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x236ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x236ed8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x236ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236edc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x236edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x236ee0: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x236ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x236ee4: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x236ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x236ee8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x236ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236eec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x236eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x236ef0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x236ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x236ef4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x236ef4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x236ef8: 0xc08b952  jal         func_22E548
    ctx->pc = 0x236EF8u;
    SET_GPR_U32(ctx, 31, 0x236F00u);
    ctx->pc = 0x236EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EF8u;
    // 0x236efc: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x236EF8u, 0x236F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F00u;
label_236f00:
    // 0x236f00: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x236f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x236f04: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x236f04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x236f08: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x236f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x236f0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x236f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236f10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x236f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x236f14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x236f14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236f18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x236f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236f1c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x236f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x236f20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236f20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236f24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x236f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236f28: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x236f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x236f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236f30: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x236f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x236f34: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x236f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x236f38: 0x808b952  j           func_22E548
    ctx->pc = 0x236F38u;
    ctx->pc = 0x236F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F38u;
    // 0x236f3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    guiDrawImage_0x22e548(rdram, ctx, runtime); return;
    ctx->pc = 0x236F40u;
}
