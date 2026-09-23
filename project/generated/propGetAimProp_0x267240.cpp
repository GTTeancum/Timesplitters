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

// Function: propGetAimProp
// Address: 0x267240 - 0x267338
void propGetAimProp_0x267240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propGetAimProp_0x267240");
#endif

    switch (ctx->pc) {
        case 0x267280u: goto label_267280;
        case 0x2672f4u: goto label_2672f4;
        default: break;
    }

    ctx->pc = 0x267240u;

    // 0x267240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x267240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x267244: 0x8f82b15c  lw          $v0, -0x4EA4($gp)
    ctx->pc = 0x267244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x267248: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x267248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x26724c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x26724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x267250: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x267250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267254: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x267254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x267258: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x267258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26725c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x267260: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x267260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x267264: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x267264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x267268: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x267268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26726c: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26726Cu;
    {
        const bool branch_taken_0x26726c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x267270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26726Cu;
        // 0x267270: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26726c) {
            ctx->pc = 0x267314u;
            goto label_267314;
        }
    }
    ctx->pc = 0x267274u;
    // 0x267274: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x267274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x267278: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x267278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x26727c: 0x0  nop
    ctx->pc = 0x26727cu;
    // NOP
label_267280:
    // 0x267280: 0x8f83b07c  lw          $v1, -0x4F84($gp)
    ctx->pc = 0x267280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x267284: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x267284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x267288: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x267288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x26728c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26728cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267290: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x267290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267294: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x267294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x267298: 0x24840098  addiu       $a0, $a0, 0x98
    ctx->pc = 0x267298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
    // 0x26729c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x26729cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2672a0: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x2672a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2672a4: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x2672a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2672a8: 0x24a50ba0  addiu       $a1, $a1, 0xBA0
    ctx->pc = 0x2672a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2976));
    // 0x2672ac: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2672acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2672b0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2672b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2672b4: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x2672b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672b8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2672b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2672bc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2672bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2672c0: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x2672c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2672c4: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2672c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2672c8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2672c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2672cc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2672ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672d0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2672d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2672d4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2672d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2672d8: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x2672d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2672dc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2672dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2672e0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2672e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2672e4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2672e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672e8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2672e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2672ec: 0xc082590  jal         func_209640
    ctx->pc = 0x2672ECu;
    SET_GPR_U32(ctx, 31, 0x2672F4u);
    ctx->pc = 0x2672F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2672ECu;
    // 0x2672f0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x209640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209640u, 0x2672ECu, 0x2672F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2672F4u;
label_2672f4:
    // 0x2672f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2672F4u;
    {
        const bool branch_taken_0x2672f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2672F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672F4u;
        // 0x2672f8: 0x8f82b07c  lw          $v0, -0x4F84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672f4) {
            ctx->pc = 0x267300u;
            goto label_267300;
        }
    }
    ctx->pc = 0x2672FCu;
    // 0x2672fc: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x2672fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_267300:
    // 0x267300: 0x8f82b15c  lw          $v0, -0x4EA4($gp)
    ctx->pc = 0x267300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x267304: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x267304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x267308: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x267308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26730c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x26730Cu;
    {
        const bool branch_taken_0x26730c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26730Cu;
        // 0x267310: 0x24020250  addiu       $v0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26730c) {
            ctx->pc = 0x267280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267280;
        }
    }
    ctx->pc = 0x267314u;
label_267314:
    // 0x267314: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x267314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267318: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x267318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26731c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x26731cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267320: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x267320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267324: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x267324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267328: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x267328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26732c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x26732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x267330: 0x3e00008  jr          $ra
    ctx->pc = 0x267330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267330u;
        // 0x267334: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267338u;
}
