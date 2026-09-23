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

// Function: guiDrawImage
// Address: 0x22e548 - 0x22e60c
void guiDrawImage_0x22e548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiDrawImage_0x22e548");
#endif

    switch (ctx->pc) {
        case 0x22e5a4u: goto label_22e5a4;
        default: break;
    }

    ctx->pc = 0x22e548u;

    // 0x22e548: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22e548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22e54c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22e550: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22e554: 0x24420910  addiu       $v0, $v0, 0x910
    ctx->pc = 0x22e554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2320));
    // 0x22e558: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x22e558u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22e55c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22e560: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x22e560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22e564: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22e564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22e568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22e56c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x22e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22e570: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22e574: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x22e574u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x22e578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22e57c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x22e57cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x22e580: 0x8f86b498  lw          $a2, -0x4B68($gp)
    ctx->pc = 0x22e580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x22e584: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22e584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e588: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x22e588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e58c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22e590: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x22e590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22e594: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e598: 0x94710002  lhu         $s1, 0x2($v1)
    ctx->pc = 0x22e598u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22e59c: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22E59Cu;
    SET_GPR_U32(ctx, 31, 0x22E5A4u);
    ctx->pc = 0x22E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E59Cu;
    // 0x22e5a0: 0x94700000  lhu         $s0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22E59Cu, 0x22E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5A4u;
label_22e5a4:
    // 0x22e5a4: 0x44917800  mtc1        $s1, $f15
    ctx->pc = 0x22e5a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x22e5a8: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x22e5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x22e5ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22e5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22e5b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e5b4: 0x44907000  mtc1        $s0, $f14
    ctx->pc = 0x22e5b4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22e5b8: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x22e5b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x22e5bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22e5bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22e5c0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x22e5c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x22e5c4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x22e5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22e5c8: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x22e5c8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x22e5cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22e5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22e5d0: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x22e5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22e5d4: 0x113900  sll         $a3, $s1, 4
    ctx->pc = 0x22e5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x22e5d8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x22e5d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e5dc: 0x460e6380  add.s       $f14, $f12, $f14
    ctx->pc = 0x22e5dcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x22e5e0: 0x460f6bc0  add.s       $f15, $f13, $f15
    ctx->pc = 0x22e5e0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x22e5e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e5e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e5e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e5ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22e5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e5f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e5f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22e5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e5fc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x22e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22e600: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x22e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22e604: 0x80ae37e  j           func_2B8DF8
    ctx->pc = 0x22E604u;
    ctx->pc = 0x22E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E604u;
    // 0x22e608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8DF8u;
    dlTextureRectangleFloat_0x2b8df8(rdram, ctx, runtime); return;
    ctx->pc = 0x22E60Cu;
}
