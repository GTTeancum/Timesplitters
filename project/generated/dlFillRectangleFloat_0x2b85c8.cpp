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

// Function: dlFillRectangleFloat
// Address: 0x2b85c8 - 0x2b8768
void dlFillRectangleFloat_0x2b85c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlFillRectangleFloat_0x2b85c8");
#endif

    switch (ctx->pc) {
        case 0x2b8600u: goto label_2b8600;
        default: break;
    }

    ctx->pc = 0x2b85c8u;

    // 0x2b85c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b85c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b85cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b85ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b85d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b85d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b85d4: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x2b85d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b85d8: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2b85d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b85dc: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2b85dcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2b85e0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b85e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b85e4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2b85e4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2b85e8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b85e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b85ec: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2b85ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2b85f0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b85f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2b85f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b85f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b85f8: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B85F8u;
    SET_GPR_U32(ctx, 31, 0x2B8600u);
    ctx->pc = 0x2B85FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B85F8u;
    // 0x2b85fc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B85F8u, 0x2B8600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8600u;
label_2b8600:
    // 0x2b8600: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b8600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8604: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b8604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8608: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x2b8608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x2b860c: 0x24060551  addiu       $a2, $zero, 0x551
    ctx->pc = 0x2b860cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1361));
    // 0x2b8610: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b8610u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8614: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b8614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b8618: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b861c: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x2b861cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2b8620: 0x8f8a93a0  lw          $t2, -0x6C60($gp)
    ctx->pc = 0x2b8620u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8624: 0x3c033027  lui         $v1, 0x3027
    ctx->pc = 0x2b8624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12327 << 16));
    // 0x2b8628: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2b8628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2b862c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2b862cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2b8630: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8634: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x2b8634u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x2b8638: 0x103e02  srl         $a3, $s0, 24
    ctx->pc = 0x2b8638u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x2b863c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8640: 0x102403  sra         $a0, $s0, 16
    ctx->pc = 0x2b8640u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    // 0x2b8644: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b8644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b8648: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2b8648u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b864c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8650: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2b8654: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b8658: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2b8658u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b865c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b865cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8660: 0x101a03  sra         $v1, $s0, 8
    ctx->pc = 0x2b8660u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 8));
    // 0x2b8664: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b8664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b8668: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b866c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8670: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8674: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2b8674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b8678: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b867c: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x2b867cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2b8680: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8684: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2b8684u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2b8688: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b8688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b868c: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x2b868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x2b8690: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8694: 0x4600a864  .word       0x4600A864                   # cvt.w.s     $f1, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8698: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2b8698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b869c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b869cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b86a0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2b86a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2b86a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b86a8: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x2b86a8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2b86ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b86acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b86b0: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x2b86b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x2b86b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b86b8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2b86b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2b86bc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2b86bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2b86c0: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b86c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b86c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2b86c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b86c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b86cc: 0x3c071400  lui         $a3, 0x1400
    ctx->pc = 0x2b86ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5120 << 16));
    // 0x2b86d0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b86d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b86d4: 0x34e707fc  ori         $a3, $a3, 0x7FC
    ctx->pc = 0x2b86d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2044);
    // 0x2b86d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b86dc: 0x4600b824  .word       0x4600B824                   # cvt.w.s     $f0, $f23 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b86dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[23]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b86e0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2b86e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b86e4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2b86e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2b86e8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x2b86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x2b86ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b86f0: 0x25460010  addiu       $a2, $t2, 0x10
    ctx->pc = 0x2b86f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x2b86f4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2b86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2b86f8: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x2b86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x2b86fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8700: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2b8700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8704: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8708: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x2b8708u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x2b870c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8714: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b8718: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b871c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b871cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8720: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b8720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2b8724: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8728: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2b8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b872c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2b872cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2b8730: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8734: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2b8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b8738: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b873c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8740: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b8740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b8744: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b8744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2b8748: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b874c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b8750: 0xa5450000  sh          $a1, 0x0($t2)
    ctx->pc = 0x2b8750u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b8754: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x2b8754u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x2b8758: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2b8758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2b875c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b875cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b8760: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8760u;
        // 0x2b8764: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8768u;
}
