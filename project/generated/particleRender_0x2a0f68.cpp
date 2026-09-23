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

// Function: particleRender
// Address: 0x2a0f68 - 0x2a128c
void particleRender_0x2a0f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleRender_0x2a0f68");
#endif

    switch (ctx->pc) {
        case 0x2a0fb0u: goto label_2a0fb0;
        default: break;
    }

    ctx->pc = 0x2a0f68u;

    // 0x2a0f68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a0f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a0f6c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a0f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a0f70: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a0f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a0f74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a0f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f78: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a0f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a0f7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2a0f7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a0f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a0f84: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2a0f84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a0f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a0f8c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2a0f8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a0f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a0f94: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2a0f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0f9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a0f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fa0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a0fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fa4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a0fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a0fa8: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2A0FA8u;
    SET_GPR_U32(ctx, 31, 0x2A0FB0u);
    ctx->pc = 0x2A0FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FA8u;
    // 0x2a0fac: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2A0FA8u, 0x2A0FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FB0u;
label_2a0fb0:
    // 0x2a0fb0: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2a0fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a0fb4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2a0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a0fb8: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x2a0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x2a0fbc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2a0fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a0fc0: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2a0fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a0fc4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2a0fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a0fc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a0fcc: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x2a0fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2a0fd0: 0x8f8893a0  lw          $t0, -0x6C60($gp)
    ctx->pc = 0x2a0fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a0fd4: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x2a0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x2a0fd8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2a0fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2a0fdc: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x2a0fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x2a0fe0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2a0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2a0fe4: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x2a0fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x2a0fe8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0fec: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a0fecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0ff0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a0ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a0ff4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a0ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0ff8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0ffc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2a0ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1000: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a1000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a1004: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2a1004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1008: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a100c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1010: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a1010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a1014: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a1018: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2a1018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2a101c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1020: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a1024: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a1024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a1028: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2a1028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2a102c: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x2a102cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1030: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1034: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2a1034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a1038: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x2a1038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x2a103c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a103cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1040: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1044: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x2a1044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x2a1048: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2a1048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2a104c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a104cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a1050: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1054: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2a1054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1058: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2a1058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2a105c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a105cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a1060: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1064: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2a1064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a1068: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a1068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a106c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2a106cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2a1070: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1074: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2a1074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1078: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a1078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a107c: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a107cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a1080: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x2a1080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a1084: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1088: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2a1088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a108c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a108cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a1090: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1090u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a1094: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a1094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a1098: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a109c: 0x118d00  sll         $s1, $s1, 20
    ctx->pc = 0x2a109cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 20));
    // 0x2a10a0: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2a10a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2a10a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a10a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a10a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a10ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a10acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a10b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a10b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a10b4: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2a10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2a10b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a10bc: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a10c0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a10c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a10c4: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x2a10c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2a10c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a10cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a10d0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a10d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a10d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a10d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a10d8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2a10d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a10dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a10e0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a10e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a10e4: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x2a10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x2a10e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a10e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a10ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a10f0: 0xaf8793a0  sw          $a3, -0x6C60($gp)
    ctx->pc = 0x2a10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 7));
    // 0x2a10f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a10f8: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x2a10f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2a10fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1100: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2a1100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1104: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2a1104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2a1108: 0x2714825  or          $t1, $s3, $s1
    ctx->pc = 0x2a1108u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
    // 0x2a110c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1110: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x2a1110u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2a1114: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a1114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a1118: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x2a1118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x2a111c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1120: 0x34a507fc  ori         $a1, $a1, 0x7FC
    ctx->pc = 0x2a1120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    // 0x2a1124: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2a1124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2a1128: 0x3c061100  lui         $a2, 0x1100
    ctx->pc = 0x2a1128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4352 << 16));
    // 0x2a112c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1130: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a1130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a1134: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1138: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a1138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a113c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1140: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a1140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1144: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1144u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a1148: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a1148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a114c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a114cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1150: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1154: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2a1154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1158: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x2a1158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x2a115c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1160: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x2a1160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1164: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a1164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a1168: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a116c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2a116cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a1170: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1174: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a1178: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a1178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a117c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x2a117cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x2a1180: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1184: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a1184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a1188: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a1188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a118c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a118cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1190: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1194: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2a1194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2a1198: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2a1198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2a119c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a11a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a11a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a11a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a11ac: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a11acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a11b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a11b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a11b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a11b8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a11b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a11bc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x2a11bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a11c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a11c4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2a11c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a11c8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a11c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a11cc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a11ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a11d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a11d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a11d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a11d8: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x2a11d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a11dc: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x2a11dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x2a11e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a11e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a11e4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2a11e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a11e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a11ec: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a11ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a11f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a11f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a11f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a11f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a11fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a11fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a1200: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2a1200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2a1204: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a1204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1208: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a120c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2a120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2a1210: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a1210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a1214: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a1214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a1218: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a121c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a121cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a1220: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2a1220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2a1224: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a1224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a1228: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a122c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a122cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a1230: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a1230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a1234: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1238: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2a1238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a123c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a123cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a1240: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1244: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a1244u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a1248: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a124c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a124cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a1250: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a1250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1254: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1258: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a1258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a125c: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x2a125cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x2a1260: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1264: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a1264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1268: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a1268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a126c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a1270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1274: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a1274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a1278: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a1278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a127c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2a127cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2a1280: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a1280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a1284: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1284u;
        // 0x2a1288: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A128Cu;
}
