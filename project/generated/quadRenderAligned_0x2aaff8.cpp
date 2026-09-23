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

// Function: quadRenderAligned
// Address: 0x2aaff8 - 0x2ab340
void quadRenderAligned_0x2aaff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quadRenderAligned_0x2aaff8");
#endif

    switch (ctx->pc) {
        case 0x2ab058u: goto label_2ab058;
        case 0x2ab064u: goto label_2ab064;
        case 0x2ab074u: goto label_2ab074;
        default: break;
    }

    ctx->pc = 0x2aaff8u;

    // 0x2aaff8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2aaff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2aaffc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2aaffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ab000: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ab000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab004: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2ab004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2ab008: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2ab008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2ab00c: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x2ab00cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab010: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2ab010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ab014: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2ab014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ab018: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ab018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ab01c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2ab01cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab020: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ab020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ab024: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2ab024u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab028: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ab028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ab02c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ab02cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab030: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2ab030u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ab034: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ab034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab038: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2ab038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ab03c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2ab03cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2ab040: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x2ab040u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ab044: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ab044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ab048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab04c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ab04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ab050: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2AB050u;
    SET_GPR_U32(ctx, 31, 0x2AB058u);
    ctx->pc = 0x2AB054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB050u;
    // 0x2ab054: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2AB050u, 0x2AB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB058u;
label_2ab058:
    // 0x2ab058: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ab058u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab05c: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2AB05Cu;
    SET_GPR_U32(ctx, 31, 0x2AB064u);
    ctx->pc = 0x2AB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB05Cu;
    // 0x2ab060: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2AB05Cu, 0x2AB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB064u;
label_2ab064:
    // 0x2ab064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ab068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab06c: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2AB06Cu;
    SET_GPR_U32(ctx, 31, 0x2AB074u);
    ctx->pc = 0x2AB070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB06Cu;
    // 0x2ab070: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2AB06Cu, 0x2AB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB074u;
label_2ab074:
    // 0x2ab074: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2ab074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2ab078: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x2ab078u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ab07c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ab07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ab080: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2ab080u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab084: 0xa04a0003  sb          $t2, 0x3($v0)
    ctx->pc = 0x2ab084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x2ab088: 0x2463c1a0  addiu       $v1, $v1, -0x3E60
    ctx->pc = 0x2ab088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951328));
    // 0x2ab08c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2ab08cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ab090: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ab090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ab094: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2ab094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2ab098: 0x24a5c1b0  addiu       $a1, $a1, -0x3E50
    ctx->pc = 0x2ab098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951344));
    // 0x2ab09c: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x2ab09cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
    // 0x2ab0a0: 0x340e8004  ori         $t6, $zero, 0x8004
    ctx->pc = 0x2ab0a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x2ab0a4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2ab0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ab0a8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2ab0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2ab0ac: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2ab0acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2ab0b0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x2ab0b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x2ab0b4: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x2ab0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x2ab0b8: 0x3c07302e  lui         $a3, 0x302E
    ctx->pc = 0x2ab0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12334 << 16));
    // 0x2ab0bc: 0xa08a0003  sb          $t2, 0x3($a0)
    ctx->pc = 0x2ab0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x2ab0c0: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x2ab0c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x2ab0c4: 0x240d0412  addiu       $t5, $zero, 0x412
    ctx->pc = 0x2ab0c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x2ab0c8: 0x240b0009  addiu       $t3, $zero, 0x9
    ctx->pc = 0x2ab0c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ab0cc: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2ab0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2ab0d0: 0x3c0f0038  lui         $t7, 0x38
    ctx->pc = 0x2ab0d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)56 << 16));
    // 0x2ab0d4: 0x3c086804  lui         $t0, 0x6804
    ctx->pc = 0x2ab0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26628 << 16));
    // 0x2ab0d8: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2ab0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x2ab0dc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2ab0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ab0e0: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x2ab0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x2ab0e4: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2ab0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2ab0e8: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x2ab0e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x2ab0ec: 0xa4490000  sh          $t1, 0x0($v0)
    ctx->pc = 0x2ab0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x2ab0f0: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x2ab0f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x2ab0f4: 0xa06a0003  sb          $t2, 0x3($v1)
    ctx->pc = 0x2ab0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x2ab0f8: 0x3c096e04  lui         $t1, 0x6E04
    ctx->pc = 0x2ab0f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28164 << 16));
    // 0x2ab0fc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2ab0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ab100: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ab100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ab104: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2ab104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2ab108: 0x73182a  slt         $v1, $v1, $s3
    ctx->pc = 0x2ab108u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2ab10c: 0x4603a100  add.s       $f4, $f20, $f3
    ctx->pc = 0x2ab10cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x2ab110: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab114: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab118: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2ab118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ab11c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2ab11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2ab120: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2ab120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2ab124: 0x4603a8c0  add.s       $f3, $f21, $f3
    ctx->pc = 0x2ab124u;
    ctx->f[3] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
    // 0x2ab128: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x2ab128u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x2ab12c: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x2ab12cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x2ab130: 0xa08a0003  sb          $t2, 0x3($a0)
    ctx->pc = 0x2ab130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x2ab134: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x2ab134u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2ab138: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2ab138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2ab13c: 0x3980a  movz        $s3, $zero, $v1
    ctx->pc = 0x2ab13cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x2ab140: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2ab140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2ab144: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2ab144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ab148: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2ab148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab14c: 0x2639818  mult        $s3, $s3, $v1
    ctx->pc = 0x2ab14cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x2ab150: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2ab150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2ab154: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x2ab154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ab158: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab15c: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x2ab15cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2ab160: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x2ab160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x2ab164: 0x35298000  ori         $t1, $t1, 0x8000
    ctx->pc = 0x2ab164u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
    // 0x2ab168: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab16c: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x2ab16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x2ab170: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x2ab170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x2ab174: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x2ab174u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ab178: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab17c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x2ab17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x2ab180: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x2ab180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
    // 0x2ab184: 0x24a50460  addiu       $a1, $a1, 0x460
    ctx->pc = 0x2ab184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1120));
    // 0x2ab188: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab18c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ab18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ab190: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab194: 0x8de20538  lw          $v0, 0x538($t7)
    ctx->pc = 0x2ab194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1336)));
    // 0x2ab198: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2ab198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2ab19c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ab19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ab1a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab1a4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab1a8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab1ac: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2ab1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab1b0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab1b4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab1b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2ab1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab1bc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab1c0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2ab1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab1c4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab1c8: 0x8e420550  lw          $v0, 0x550($s2)
    ctx->pc = 0x2ab1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x2ab1cc: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2ab1ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab1d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab1d4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2ab1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2ab1d8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2ab1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab1dc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab1e0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab1e4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2ab1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab1e8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab1ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab1f0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2ab1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab1f4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab1f8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab1fc: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2ab1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab200: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab204: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab208: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2ab208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab20c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab210: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab214: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2ab214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab218: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab21c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab220: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2ab220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab224: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab228: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab22c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2ab22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab230: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ab230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab234: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab238: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ab238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ab23c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab240: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x2ab240u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab244: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab248: 0x8e830568  lw          $v1, 0x568($s4)
    ctx->pc = 0x2ab248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1384)));
    // 0x2ab24c: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x2ab24cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab250: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab254: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x2ab254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x2ab258: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2ab258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab25c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab260: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x2ab260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab264: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab268: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x2ab268u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab26c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab270: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2ab270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab274: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab278: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x2ab278u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab27c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab27cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab280: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x2ab280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab284: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab288: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2ab288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab28c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab290: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x2ab290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab294: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab298: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x2ab298u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab29c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab29cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab2a0: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2ab2a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ab2a4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab2a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ab2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ab2ac: 0x8f82b498  lw          $v0, -0x4B68($gp)
    ctx->pc = 0x2ab2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2ab2b0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab2b4: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x2ab2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x2ab2b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ab2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab2bc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab2c0: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x2ab2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x2ab2c4: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x2ab2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2ab2c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ab2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ab2cc: 0xae170004  sw          $s7, 0x4($s0)
    ctx->pc = 0x2ab2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 23));
    // 0x2ab2d0: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x2ab2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2ab2d4: 0xae1e0000  sw          $fp, 0x0($s0)
    ctx->pc = 0x2ab2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 30));
    // 0x2ab2d8: 0xa0ca0003  sb          $t2, 0x3($a2)
    ctx->pc = 0x2ab2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x2ab2dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ab2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ab2e0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2ab2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2ab2e4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2ab2e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ab2e8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2ab2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ab2ec: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2ab2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2ab2f0: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2ab2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2ab2f4: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x2ab2f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2ab2f8: 0xa06a0003  sb          $t2, 0x3($v1)
    ctx->pc = 0x2ab2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x2ab2fc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2ab2fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ab300: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2ab300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2ab304: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ab304u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ab308: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2ab308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ab30c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ab30cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ab310: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ab310u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab314: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ab314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab318: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ab318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab31c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ab31cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab324: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2ab324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ab328: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2ab328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ab32c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2ab32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2ab330: 0xa44c0000  sh          $t4, 0x0($v0)
    ctx->pc = 0x2ab330u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x2ab334: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2ab334u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2ab338: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB338u;
        // 0x2ab33c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB340u;
}
