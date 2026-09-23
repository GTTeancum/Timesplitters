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

// Function: MoveTestPropWalls
// Address: 0x270950 - 0x270e04
void MoveTestPropWalls_0x270950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveTestPropWalls_0x270950");
#endif

    switch (ctx->pc) {
        case 0x2709c4u: goto label_2709c4;
        case 0x2709e8u: goto label_2709e8;
        case 0x270af8u: goto label_270af8;
        case 0x270b70u: goto label_270b70;
        case 0x270c8cu: goto label_270c8c;
        case 0x270d04u: goto label_270d04;
        case 0x270d90u: goto label_270d90;
        default: break;
    }

    ctx->pc = 0x270950u;

    // 0x270950: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x270950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x270954: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x270954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x270958: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x270958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x27095c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x27095cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270960: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x270960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x270964: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x270964u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270968: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x270968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x27096c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x27096cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270970: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x270970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x270974: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x270974u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270978: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x270978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x27097c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x27097cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270980: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x270980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x270984: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x270984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270988: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x270988u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x27098c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27098cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270990: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x270990u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x270994: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x270994u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x270998: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x270998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x27099c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x27099cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2709a0: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2709a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2709a4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2709a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2709a8: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x2709a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2709ac: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2709acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2709b0: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x2709b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x2709b4: 0xe6f60000  swc1        $f22, 0x0($s7)
    ctx->pc = 0x2709b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2709b8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2709b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2709bc: 0xc09a146  jal         func_268518
    ctx->pc = 0x2709BCu;
    SET_GPR_U32(ctx, 31, 0x2709C4u);
    ctx->pc = 0x2709C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709BCu;
    // 0x2709c0: 0xafa80058  sw          $t0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268518u, 0x2709BCu, 0x2709C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709C4u;
label_2709c4:
    // 0x2709c4: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x2709C4u;
    {
        const bool branch_taken_0x2709c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709c4) {
            ctx->pc = 0x2709C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2709C4u;
            // 0x2709c8: 0x2b6102a  slt         $v0, $s5, $s6 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x270AD4u;
            goto label_270ad4;
        }
    }
    ctx->pc = 0x2709CCu;
    // 0x2709cc: 0x8e4301e4  lw          $v1, 0x1E4($s2)
    ctx->pc = 0x2709ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x2709d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2709d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709d4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2709d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2709d8: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2709D8u;
    {
        const bool branch_taken_0x2709d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709D8u;
        // 0x2709dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709d8) {
            ctx->pc = 0x270AD0u;
            goto label_270ad0;
        }
    }
    ctx->pc = 0x2709E0u;
    // 0x2709e0: 0xc6270004  lwc1        $f7, 0x4($s1)
    ctx->pc = 0x2709e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2709e4: 0x46153840  add.s       $f1, $f7, $f21
    ctx->pc = 0x2709e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
label_2709e8:
    // 0x2709e8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2709e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2709ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2709ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2709f0: 0x0  nop
    ctx->pc = 0x2709f0u;
    // NOP
    // 0x2709f4: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
    ctx->pc = 0x2709F4u;
    {
        const bool branch_taken_0x2709f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2709f4) {
            ctx->pc = 0x2709F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2709F4u;
            // 0x2709f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270ABCu;
            goto label_270abc;
        }
    }
    ctx->pc = 0x2709FCu;
    // 0x2709fc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2709fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270a00: 0xc7818520  lwc1        $f1, -0x7AE0($gp)
    ctx->pc = 0x270a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270a04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x270a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x270a08: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x270a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a0c: 0x0  nop
    ctx->pc = 0x270a0cu;
    // NOP
    // 0x270a10: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
    ctx->pc = 0x270A10u;
    {
        const bool branch_taken_0x270a10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270a10) {
            ctx->pc = 0x270A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270A10u;
            // 0x270a14: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270ABCu;
            goto label_270abc;
        }
    }
    ctx->pc = 0x270A18u;
    // 0x270a18: 0xc606000c  lwc1        $f6, 0xC($s0)
    ctx->pc = 0x270a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x270a1c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x270a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270a20: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x270a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a24: 0x0  nop
    ctx->pc = 0x270a24u;
    // NOP
    // 0x270a28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x270A28u;
    {
        const bool branch_taken_0x270a28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A28u;
        // 0x270a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a28) {
            ctx->pc = 0x270A34u;
            goto label_270a34;
        }
    }
    ctx->pc = 0x270A30u;
    // 0x270a30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x270a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270a34:
    // 0x270a34: 0xc605001c  lwc1        $f5, 0x1C($s0)
    ctx->pc = 0x270a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x270a38: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x270a38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a3c: 0x0  nop
    ctx->pc = 0x270a3cu;
    // NOP
    // 0x270a40: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x270A40u;
    {
        const bool branch_taken_0x270a40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A40u;
        // 0x270a44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a40) {
            ctx->pc = 0x270A4Cu;
            goto label_270a4c;
        }
    }
    ctx->pc = 0x270A48u;
    // 0x270a48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x270a48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270a4c:
    // 0x270a4c: 0x5043001b  beql        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x270A4Cu;
    {
        const bool branch_taken_0x270a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x270a4c) {
            ctx->pc = 0x270A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270A4Cu;
            // 0x270a50: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270ABCu;
            goto label_270abc;
        }
    }
    ctx->pc = 0x270A54u;
    // 0x270a54: 0x46002901  sub.s       $f4, $f5, $f0
    ctx->pc = 0x270a54u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x270a58: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x270a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270a5c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x270a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270a60: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x270a60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x270a64: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x270a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270a68: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x270a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x270a6c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x270a6cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x270a70: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x270a70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x270a74: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x270a74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x270a78: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x270a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a7c: 0x0  nop
    ctx->pc = 0x270a7cu;
    // NOP
    // 0x270a80: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x270A80u;
    {
        const bool branch_taken_0x270a80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A80u;
        // 0x270a84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a80) {
            ctx->pc = 0x270A8Cu;
            goto label_270a8c;
        }
    }
    ctx->pc = 0x270A88u;
    // 0x270a88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x270a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270a8c:
    // 0x270a8c: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x270A8Cu;
    {
        const bool branch_taken_0x270a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x270a8c) {
            ctx->pc = 0x270A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270A8Cu;
            // 0x270a90: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270ABCu;
            goto label_270abc;
        }
    }
    ctx->pc = 0x270A94u;
    // 0x270a94: 0x46062801  sub.s       $f0, $f5, $f6
    ctx->pc = 0x270a94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x270a98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x270a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270a9c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x270a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x270aa0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x270aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x270aa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270aa8: 0x0  nop
    ctx->pc = 0x270aa8u;
    // NOP
    // 0x270aac: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x270AACu;
    {
        const bool branch_taken_0x270aac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270aac) {
            ctx->pc = 0x270AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270AACu;
            // 0x270ab0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270AB8u;
            goto label_270ab8;
        }
    }
    ctx->pc = 0x270AB4u;
    // 0x270ab4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x270ab4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_270ab8:
    // 0x270ab8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x270ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_270abc:
    // 0x270abc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x270abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x270ac0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x270ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x270ac4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x270ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270ac8: 0x5600ffc7  bnel        $s0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x270AC8u;
    {
        const bool branch_taken_0x270ac8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ac8) {
            ctx->pc = 0x270ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270AC8u;
            // 0x270acc: 0x46153840  add.s       $f1, $f7, $f21 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2709E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2709e8;
        }
    }
    ctx->pc = 0x270AD0u;
label_270ad0:
    // 0x270ad0: 0x2b6102a  slt         $v0, $s5, $s6
    ctx->pc = 0x270ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_270ad4:
    // 0x270ad4: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x270AD4u;
    {
        const bool branch_taken_0x270ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AD4u;
        // 0x270ad8: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ad4) {
            ctx->pc = 0x270D50u;
            goto label_270d50;
        }
    }
    ctx->pc = 0x270ADCu;
    // 0x270adc: 0x8e4301e4  lw          $v1, 0x1E4($s2)
    ctx->pc = 0x270adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x270ae0: 0xc6b4f938  lwc1        $f20, -0x6C8($s5)
    ctx->pc = 0x270ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294965560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x270ae4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x270ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270ae8: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x270AE8u;
    {
        const bool branch_taken_0x270ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AE8u;
        // 0x270aec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ae8) {
            ctx->pc = 0x270C0Cu;
            goto label_270c0c;
        }
    }
    ctx->pc = 0x270AF0u;
    // 0x270af0: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x270af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x270af4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x270af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_270af8:
    // 0x270af8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x270af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270afc: 0x46151000  add.s       $f0, $f2, $f21
    ctx->pc = 0x270afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
    // 0x270b00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270b04: 0x0  nop
    ctx->pc = 0x270b04u;
    // NOP
    // 0x270b08: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x270B08u;
    {
        const bool branch_taken_0x270b08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270b08) {
            ctx->pc = 0x270B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270B08u;
            // 0x270b0c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BF8u;
            goto label_270bf8;
        }
    }
    ctx->pc = 0x270B10u;
    // 0x270b10: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x270b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270b14: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x270b14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270b18: 0x0  nop
    ctx->pc = 0x270b18u;
    // NOP
    // 0x270b1c: 0x45020036  bc1fl       . + 4 + (0x36 << 2)
    ctx->pc = 0x270B1Cu;
    {
        const bool branch_taken_0x270b1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270b1c) {
            ctx->pc = 0x270B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270B1Cu;
            // 0x270b20: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BF8u;
            goto label_270bf8;
        }
    }
    ctx->pc = 0x270B24u;
    // 0x270b24: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x270b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270b28: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x270b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270b2c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x270b2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x270b30: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x270b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x270b34: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x270b34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x270b38: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x270b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270b3c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x270b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270b40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x270b40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x270b44: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x270b44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x270b48: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x270b48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x270b4c: 0x0  nop
    ctx->pc = 0x270b4cu;
    // NOP
    // 0x270b50: 0x0  nop
    ctx->pc = 0x270b50u;
    // NOP
    // 0x270b54: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x270b54u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x270b58: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x270b58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270b5c: 0x0  nop
    ctx->pc = 0x270b5cu;
    // NOP
    // 0x270b60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x270B60u;
    {
        const bool branch_taken_0x270b60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B60u;
        // 0x270b64: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b60) {
            ctx->pc = 0x270B78u;
            goto label_270b78;
        }
    }
    ctx->pc = 0x270B68u;
    // 0x270b68: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x270B68u;
    SET_GPR_U32(ctx, 31, 0x270B70u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x270B68u, 0x270B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B70u;
label_270b70:
    // 0x270b70: 0x8e4301e4  lw          $v1, 0x1E4($s2)
    ctx->pc = 0x270b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x270b74: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x270b74u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_270b78:
    // 0x270b78: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x270b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270b7c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x270b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270b80: 0x0  nop
    ctx->pc = 0x270b80u;
    // NOP
    // 0x270b84: 0x0  nop
    ctx->pc = 0x270b84u;
    // NOP
    // 0x270b88: 0x46030103  div.s       $f4, $f0, $f3
    ctx->pc = 0x270b88u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[3];
    // 0x270b8c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x270b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270b90: 0x0  nop
    ctx->pc = 0x270b90u;
    // NOP
    // 0x270b94: 0x0  nop
    ctx->pc = 0x270b94u;
    // NOP
    // 0x270b98: 0x46030943  div.s       $f5, $f1, $f3
    ctx->pc = 0x270b98u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[5] = ctx->f[1] / ctx->f[3];
    // 0x270b9c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x270b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270ba0: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x270ba0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x270ba4: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x270ba4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x270ba8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x270ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270bac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x270bacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x270bb0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x270bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x270bb4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x270bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x270bb8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x270bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270bbc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x270bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x270bc0: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x270bc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x270bc4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x270bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x270bc8: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x270bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270bcc: 0x0  nop
    ctx->pc = 0x270bccu;
    // NOP
    // 0x270bd0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x270BD0u;
    {
        const bool branch_taken_0x270bd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD0u;
        // 0x270bd4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bd0) {
            ctx->pc = 0x270BF4u;
            goto label_270bf4;
        }
    }
    ctx->pc = 0x270BD8u;
    // 0x270bd8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x270bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270bdc: 0x0  nop
    ctx->pc = 0x270bdcu;
    // NOP
    // 0x270be0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x270BE0u;
    {
        const bool branch_taken_0x270be0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270be0) {
            ctx->pc = 0x270BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270BE0u;
            // 0x270be4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BF8u;
            goto label_270bf8;
        }
    }
    ctx->pc = 0x270BE8u;
    // 0x270be8: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x270be8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x270bec: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x270becu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x270bf0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x270bf0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_270bf4:
    // 0x270bf4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x270bf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_270bf8:
    // 0x270bf8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x270bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x270bfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x270bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270c00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x270c00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270c04: 0x5600ffbc  bnel        $s0, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x270C04u;
    {
        const bool branch_taken_0x270c04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x270c04) {
            ctx->pc = 0x270C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270C04u;
            // 0x270c08: 0xc6220004  lwc1        $f2, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x270AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270af8;
        }
    }
    ctx->pc = 0x270C0Cu;
label_270c0c:
    // 0x270c0c: 0xc6a0f938  lwc1        $f0, -0x6C8($s5)
    ctx->pc = 0x270c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294965560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270c10: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x270c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270c14: 0x0  nop
    ctx->pc = 0x270c14u;
    // NOP
    // 0x270c18: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x270C18u;
    {
        const bool branch_taken_0x270c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C18u;
        // 0x270c1c: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c18) {
            ctx->pc = 0x270D40u;
            goto label_270d40;
        }
    }
    ctx->pc = 0x270C20u;
    // 0x270c20: 0xc7808524  lwc1        $f0, -0x7ADC($gp)
    ctx->pc = 0x270c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270c24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x270c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x270c28: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x270c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x270c2c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x270c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x270c30: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x270c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x270c34: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x270c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270c38: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x270c38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x270c3c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x270c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270c40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x270c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c44: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x270c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x270c48: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x270c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x270c4c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x270c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x270c50: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x270c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x270c54: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x270c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x270c58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x270c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x270c5c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x270c5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x270c60: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x270c60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x270c64: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x270c64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x270c68: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x270c68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x270c6c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x270c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x270c70: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x270c70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x270c74: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x270c74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x270c78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x270c78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c7c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x270c7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x270c80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x270c80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c84: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x270C84u;
    SET_GPR_U32(ctx, 31, 0x270C8Cu);
    ctx->pc = 0x270C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C84u;
    // 0x270c88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x270C84u, 0x270C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C8Cu;
label_270c8c:
    // 0x270c8c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x270c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x270c90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x270c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x270c94: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x270c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x270c98: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x270C98u;
    {
        const bool branch_taken_0x270c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C98u;
        // 0x270c9c: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c98) {
            ctx->pc = 0x270D40u;
            goto label_270d40;
        }
    }
    ctx->pc = 0x270CA0u;
    // 0x270ca0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x270ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270ca4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x270ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270ca8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x270ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270cac: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x270cacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x270cb0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x270cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x270cb4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x270cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x270cb8: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x270cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270cbc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x270cbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x270cc0: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x270cc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x270cc4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x270cc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x270cc8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x270cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270ccc: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x270cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270cd0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x270cd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x270cd4: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x270cd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x270cd8: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x270cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x270cdc: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x270cdcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x270ce0: 0x0  nop
    ctx->pc = 0x270ce0u;
    // NOP
    // 0x270ce4: 0x0  nop
    ctx->pc = 0x270ce4u;
    // NOP
    // 0x270ce8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x270ce8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x270cec: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x270cecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270cf0: 0x0  nop
    ctx->pc = 0x270cf0u;
    // NOP
    // 0x270cf4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x270CF4u;
    {
        const bool branch_taken_0x270cf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270cf4) {
            ctx->pc = 0x270CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270CF4u;
            // 0x270cf8: 0xc6810000  lwc1        $f1, 0x0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x270D08u;
            goto label_270d08;
        }
    }
    ctx->pc = 0x270CFCu;
    // 0x270cfc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x270CFCu;
    SET_GPR_U32(ctx, 31, 0x270D04u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x270CFCu, 0x270D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D04u;
label_270d04:
    // 0x270d04: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x270d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270d08:
    // 0x270d08: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x270d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270d0c: 0x0  nop
    ctx->pc = 0x270d0cu;
    // NOP
    // 0x270d10: 0x0  nop
    ctx->pc = 0x270d10u;
    // NOP
    // 0x270d14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x270d14u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x270d18: 0xc7828528  lwc1        $f2, -0x7AD8($gp)
    ctx->pc = 0x270d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270d1c: 0x0  nop
    ctx->pc = 0x270d1cu;
    // NOP
    // 0x270d20: 0x0  nop
    ctx->pc = 0x270d20u;
    // NOP
    // 0x270d24: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x270d24u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x270d28: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x270d28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x270d2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270d30: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x270d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x270d34: 0xe6830004  swc1        $f3, 0x4($s4)
    ctx->pc = 0x270d34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x270d38: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x270D38u;
    {
        const bool branch_taken_0x270d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D38u;
        // 0x270d3c: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d38) {
            ctx->pc = 0x270DC4u;
            goto label_270dc4;
        }
    }
    ctx->pc = 0x270D40u;
label_270d40:
    // 0x270d40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270d48: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x270D48u;
    {
        const bool branch_taken_0x270d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D48u;
        // 0x270d4c: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d48) {
            ctx->pc = 0x270DC8u;
            goto label_270dc8;
        }
    }
    ctx->pc = 0x270D50u;
label_270d50:
    // 0x270d50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270d54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x270d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x270d58: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x270d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x270d5c: 0x8e4401e4  lw          $a0, 0x1E4($s2)
    ctx->pc = 0x270d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x270d60: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x270d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d64: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x270d64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x270d68: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x270d68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d6c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x270d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x270d70: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x270d70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x270d74: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x270d74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x270d78: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x270d78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d7c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x270d7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x270d80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d84: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x270d84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270d88: 0xc09f338  jal         func_27CCE0
    ctx->pc = 0x270D88u;
    SET_GPR_U32(ctx, 31, 0x270D90u);
    ctx->pc = 0x270D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D88u;
    // 0x270d8c: 0x27aa0010  addiu       $t2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CCE0u, 0x270D88u, 0x270D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D90u;
label_270d90:
    // 0x270d90: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x270D90u;
    {
        const bool branch_taken_0x270d90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D90u;
        // 0x270d94: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d90) {
            ctx->pc = 0x270DC0u;
            goto label_270dc0;
        }
    }
    ctx->pc = 0x270D98u;
    // 0x270d98: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x270d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270d9c: 0x0  nop
    ctx->pc = 0x270d9cu;
    // NOP
    // 0x270da0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x270DA0u;
    {
        const bool branch_taken_0x270da0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DA0u;
        // 0x270da4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270da0) {
            ctx->pc = 0x270DB0u;
            goto label_270db0;
        }
    }
    ctx->pc = 0x270DA8u;
    // 0x270da8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270DA8u;
    {
        const bool branch_taken_0x270da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DA8u;
        // 0x270dac: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270da8) {
            ctx->pc = 0x270DB8u;
            goto label_270db8;
        }
    }
    ctx->pc = 0x270DB0u;
label_270db0:
    // 0x270db0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x270db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270db4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x270db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270db8:
    // 0x270db8: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x270db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x270dbc: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x270dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_270dc0:
    // 0x270dc0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x270dc0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_270dc4:
    // 0x270dc4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x270dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_270dc8:
    // 0x270dc8: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x270dc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x270dcc: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x270dccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x270dd0: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x270dd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x270dd4: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x270dd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x270dd8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x270dd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x270ddc: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x270ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x270de0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x270de0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x270de4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x270de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x270de8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x270de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x270dec: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x270decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x270df0: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x270df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x270df4: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x270df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x270df8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x270df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x270dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x270DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DFCu;
        // 0x270e00: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270E04u;
}
