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

// Function: bgVolumeTransform
// Address: 0x254260 - 0x2542f0
void bgVolumeTransform_0x254260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgVolumeTransform_0x254260");
#endif

    switch (ctx->pc) {
        case 0x25428cu: goto label_25428c;
        case 0x254298u: goto label_254298;
        default: break;
    }

    ctx->pc = 0x254260u;

    // 0x254260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254264: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x254264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x254268: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x254268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25426c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25426cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254274: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x254274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254278: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x254278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25427c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x254280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254284: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x254284u;
    SET_GPR_U32(ctx, 31, 0x25428Cu);
    ctx->pc = 0x254288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254284u;
    // 0x254288: 0x26450008  addiu       $a1, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x254284u, 0x25428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25428Cu;
label_25428c:
    // 0x25428c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25428cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254290: 0xc0ad568  jal         func_2B55A0
    ctx->pc = 0x254290u;
    SET_GPR_U32(ctx, 31, 0x254298u);
    ctx->pc = 0x254294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254290u;
    // 0x254294: 0x26450014  addiu       $a1, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B55A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B55A0u, 0x254290u, 0x254298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254298u;
label_254298:
    // 0x254298: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x254298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25429c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x25429cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2542a0: 0x24637370  addiu       $v1, $v1, 0x7370
    ctx->pc = 0x2542a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29552));
    // 0x2542a4: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x2542a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2542a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2542a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2542ac: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2542acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2542b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2542b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2542b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2542b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2542b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2542b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2542bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2542bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2542c0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2542c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2542c4: 0x0  nop
    ctx->pc = 0x2542c4u;
    // NOP
    // 0x2542c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2542C8u;
    {
        const bool branch_taken_0x2542c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2542CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542C8u;
        // 0x2542cc: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542c8) {
            ctx->pc = 0x2542D8u;
            goto label_2542d8;
        }
    }
    ctx->pc = 0x2542D0u;
    // 0x2542d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2542d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2542d4: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x2542d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_2542d8:
    // 0x2542d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2542d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2542dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2542dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2542e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2542e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2542e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2542e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2542e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2542E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2542ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542E8u;
        // 0x2542ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2542E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2542F0u;
}
