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

// Function: enemyCheckValidPad
// Address: 0x2bf920 - 0x2bfc24
void enemyCheckValidPad_0x2bf920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyCheckValidPad_0x2bf920");
#endif

    switch (ctx->pc) {
        case 0x2bf9b0u: goto label_2bf9b0;
        case 0x2bf9c8u: goto label_2bf9c8;
        case 0x2bfa54u: goto label_2bfa54;
        case 0x2bfac4u: goto label_2bfac4;
        case 0x2bfad0u: goto label_2bfad0;
        case 0x2bfae0u: goto label_2bfae0;
        case 0x2bfaf0u: goto label_2bfaf0;
        case 0x2bfb04u: goto label_2bfb04;
        case 0x2bfb9cu: goto label_2bfb9c;
        case 0x2bfbe0u: goto label_2bfbe0;
        default: break;
    }

    ctx->pc = 0x2bf920u;

    // 0x2bf920: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2bf920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2bf924: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2bf924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2bf928: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2bf928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2bf92c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2bf92cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf930: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2bf930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2bf934: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2bf934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bf938: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2bf938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2bf93c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2bf93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2bf940: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2bf940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2bf944: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2bf944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2bf948: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2bf948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2bf94c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2bf94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2bf950: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2bf950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bf954: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2bf954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2bf958: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2bf958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2bf95c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2bf95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2bf960: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2bf960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2bf964: 0x8e420a9c  lw          $v0, 0xA9C($s2)
    ctx->pc = 0x2bf964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2bf968: 0x104400a2  beq         $v0, $a0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2BF968u;
    {
        const bool branch_taken_0x2bf968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF968u;
        // 0x2bf96c: 0x8e510bcc  lw          $s1, 0xBCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf968) {
            ctx->pc = 0x2BFBF4u;
            goto label_2bfbf4;
        }
    }
    ctx->pc = 0x2BF970u;
    // 0x2bf970: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2bf970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2bf974: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2bf974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2bf978: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF978u;
    {
        const bool branch_taken_0x2bf978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF978u;
        // 0x2bf97c: 0xc6200030  lwc1        $f0, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf978) {
            ctx->pc = 0x2BF98Cu;
            goto label_2bf98c;
        }
    }
    ctx->pc = 0x2BF980u;
    // 0x2bf980: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bf980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bf984: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF984u;
    {
        const bool branch_taken_0x2bf984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF984u;
        // 0x2bf988: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf984) {
            ctx->pc = 0x2BF994u;
            goto label_2bf994;
        }
    }
    ctx->pc = 0x2BF98Cu;
label_2bf98c:
    // 0x2bf98c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bf98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bf990: 0xc6411198  lwc1        $f1, 0x1198($s2)
    ctx->pc = 0x2bf990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bf994:
    // 0x2bf994: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2bf994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bf998: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2bf998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf99c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2bf99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bf9a0: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x2bf9a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bf9a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bf9a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf9a8: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x2BF9A8u;
    SET_GPR_U32(ctx, 31, 0x2BF9B0u);
    ctx->pc = 0x2BF9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9A8u;
    // 0x2bf9ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x2BF9A8u, 0x2BF9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9B0u;
label_2bf9b0:
    // 0x2bf9b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bf9b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9b4: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x2bf9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x2bf9b8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF9B8u;
    {
        const bool branch_taken_0x2bf9b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9B8u;
        // 0x2bf9bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9b8) {
            ctx->pc = 0x2BF9D0u;
            goto label_2bf9d0;
        }
    }
    ctx->pc = 0x2BF9C0u;
    // 0x2bf9c0: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2BF9C0u;
    SET_GPR_U32(ctx, 31, 0x2BF9C8u);
    ctx->pc = 0x2BF9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9C0u;
    // 0x2bf9c4: 0x264402a8  addiu       $a0, $s2, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2BF9C0u, 0x2BF9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9C8u;
label_2bf9c8:
    // 0x2bf9c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF9C8u;
    {
        const bool branch_taken_0x2bf9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9C8u;
        // 0x2bf9cc: 0x8e4402a8  lw          $a0, 0x2A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9c8) {
            ctx->pc = 0x2BF9D4u;
            goto label_2bf9d4;
        }
    }
    ctx->pc = 0x2BF9D0u;
label_2bf9d0:
    // 0x2bf9d0: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2bf9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
label_2bf9d4:
    // 0x2bf9d4: 0x12840088  beq         $s4, $a0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2BF9D4u;
    {
        const bool branch_taken_0x2bf9d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9D4u;
        // 0x2bf9d8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9d4) {
            ctx->pc = 0x2BFBF8u;
            goto label_2bfbf8;
        }
    }
    ctx->pc = 0x2BF9DCu;
    // 0x2bf9dc: 0x52820087  beql        $s4, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x2BF9DCu;
    {
        const bool branch_taken_0x2bf9dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bf9dc) {
            ctx->pc = 0x2BF9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF9DCu;
            // 0x2bf9e0: 0xdfb700a0  ld          $s7, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFBFCu;
            goto label_2bfbfc;
        }
    }
    ctx->pc = 0x2BF9E4u;
    // 0x2bf9e4: 0x1a800084  blez        $s4, . + 4 + (0x84 << 2)
    ctx->pc = 0x2BF9E4u;
    {
        const bool branch_taken_0x2bf9e4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2BF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9E4u;
        // 0x2bf9e8: 0x2410001c  addiu       $s0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9e4) {
            ctx->pc = 0x2BFBF8u;
            goto label_2bfbf8;
        }
    }
    ctx->pc = 0x2BF9ECu;
    // 0x2bf9ec: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2bf9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2bf9f0: 0x290b018  mult        $s6, $s4, $s0
    ctx->pc = 0x2bf9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x2bf9f4: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x2bf9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bf9f8: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x2bf9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bf9fc: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x2bf9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bfa00: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x2bfa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2bfa04: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2bfa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfa08: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2bfa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfa0c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2bfa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfa10: 0x460230c1  sub.s       $f3, $f6, $f2
    ctx->pc = 0x2bfa10u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2bfa14: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2bfa14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2bfa18: 0x46012081  sub.s       $f2, $f4, $f1
    ctx->pc = 0x2bfa18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2bfa1c: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2bfa1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2bfa20: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bfa20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bfa24: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2bfa24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bfa28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bfa28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bfa2c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2bfa2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bfa30: 0x0  nop
    ctx->pc = 0x2bfa30u;
    // NOP
    // 0x2bfa34: 0x0  nop
    ctx->pc = 0x2bfa34u;
    // NOP
    // 0x2bfa38: 0x460c0504  c1          0xC0504
    ctx->pc = 0x2bfa38u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[12]);
    // 0x2bfa3c: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2bfa3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfa40: 0x0  nop
    ctx->pc = 0x2bfa40u;
    // NOP
    // 0x2bfa44: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2BFA44u;
    {
        const bool branch_taken_0x2bfa44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA44u;
        // 0x2bfa48: 0x902818  mult        $a1, $a0, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa44) {
            ctx->pc = 0x2BFA70u;
            goto label_2bfa70;
        }
    }
    ctx->pc = 0x2BFA4Cu;
    // 0x2bfa4c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2BFA4Cu;
    SET_GPR_U32(ctx, 31, 0x2BFA54u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2BFA4Cu, 0x2BFA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA54u;
label_2bfa54:
    // 0x2bfa54: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2bfa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2bfa58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bfa58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2bfa5c: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2bfa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2bfa60: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x2bfa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bfa64: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x2bfa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bfa68: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x2bfa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bfa6c: 0x902818  mult        $a1, $a0, $s0
    ctx->pc = 0x2bfa6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2bfa70:
    // 0x2bfa70: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2bfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bfa74: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2bfa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfa78: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2bfa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfa7c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2bfa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfa80: 0x460230c1  sub.s       $f3, $f6, $f2
    ctx->pc = 0x2bfa80u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2bfa84: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2bfa84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2bfa88: 0x46012081  sub.s       $f2, $f4, $f1
    ctx->pc = 0x2bfa88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2bfa8c: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2bfa8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2bfa90: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bfa90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bfa94: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2bfa94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bfa98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bfa98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bfa9c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2bfa9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bfaa0: 0x0  nop
    ctx->pc = 0x2bfaa0u;
    // NOP
    // 0x2bfaa4: 0x0  nop
    ctx->pc = 0x2bfaa4u;
    // NOP
    // 0x2bfaa8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2bfaa8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2bfaac: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2bfaacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfab0: 0x0  nop
    ctx->pc = 0x2bfab0u;
    // NOP
    // 0x2bfab4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFAB4u;
    {
        const bool branch_taken_0x2bfab4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfab4) {
            ctx->pc = 0x2BFAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFAB4u;
            // 0x2bfab8: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFAC8u;
            goto label_2bfac8;
        }
    }
    ctx->pc = 0x2BFABCu;
    // 0x2bfabc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2BFABCu;
    SET_GPR_U32(ctx, 31, 0x2BFAC4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2BFABCu, 0x2BFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAC4u;
label_2bfac4:
    // 0x2bfac4: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x2bfac4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2bfac8:
    // 0x2bfac8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BFAC8u;
    SET_GPR_U32(ctx, 31, 0x2BFAD0u);
    ctx->pc = 0x2BFACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAC8u;
    // 0x2bfacc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BFAC8u, 0x2BFAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAD0u;
label_2bfad0:
    // 0x2bfad0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfad4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bfad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfad8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BFAD8u;
    SET_GPR_U32(ctx, 31, 0x2BFAE0u);
    ctx->pc = 0x2BFADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAD8u;
    // 0x2bfadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BFAD8u, 0x2BFAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAE0u;
label_2bfae0:
    // 0x2bfae0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFAE0u;
    {
        const bool branch_taken_0x2bfae0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BFAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAE0u;
        // 0x2bfae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfae0) {
            ctx->pc = 0x2BFAF4u;
            goto label_2bfaf4;
        }
    }
    ctx->pc = 0x2BFAE8u;
    // 0x2bfae8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BFAE8u;
    SET_GPR_U32(ctx, 31, 0x2BFAF0u);
    ctx->pc = 0x2BFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAE8u;
    // 0x2bfaec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BFAE8u, 0x2BFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAF0u;
label_2bfaf0:
    // 0x2bfaf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfaf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfaf4:
    // 0x2bfaf4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2bfaf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2bfaf8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2bfaf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2bfafc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BFAFCu;
    SET_GPR_U32(ctx, 31, 0x2BFB04u);
    ctx->pc = 0x2BFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAFCu;
    // 0x2bfb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BFAFCu, 0x2BFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB04u;
label_2bfb04:
    // 0x2bfb04: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2BFB04u;
    {
        const bool branch_taken_0x2bfb04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB04u;
        // 0x2bfb08: 0x8f82a2ec  lw          $v0, -0x5D14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb04) {
            ctx->pc = 0x2BFBF4u;
            goto label_2bfbf4;
        }
    }
    ctx->pc = 0x2BFB0Cu;
    // 0x2bfb0c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2bfb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfb10: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2bfb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2bfb14: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2bfb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfb18: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2bfb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfb1c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x2bfb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bfb20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bfb20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bfb24: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x2bfb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2bfb28: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x2bfb28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2bfb2c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bfb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bfb30: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2bfb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfb34: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bfb34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bfb38: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2bfb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bfb3c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2bfb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfb40: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2bfb40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2bfb44: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BFB44u;
    {
        const bool branch_taken_0x2bfb44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB44u;
        // 0x2bfb48: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb44) {
            ctx->pc = 0x2BFBA4u;
            goto label_2bfba4;
        }
    }
    ctx->pc = 0x2BFB4Cu;
    // 0x2bfb4c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2bfb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfb50: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2bfb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bfb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bfb58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bfb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfb5c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2bfb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfb60: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bfb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bfb64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bfb64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bfb68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bfb6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb70: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2bfb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfb74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2bfb74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb78: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x2bfb78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2bfb7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bfb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bfb80: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2bfb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bfb84: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2bfb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfb88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2bfb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2bfb8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2bfb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2bfb90: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2bfb90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bfb94: 0xc09640e  jal         func_259038
    ctx->pc = 0x2BFB94u;
    SET_GPR_U32(ctx, 31, 0x2BFB9Cu);
    ctx->pc = 0x2BFB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB94u;
    // 0x2bfb98: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2BFB94u, 0x2BFB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB9Cu;
label_2bfb9c:
    // 0x2bfb9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BFB9Cu;
    {
        const bool branch_taken_0x2bfb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfb9c) {
            ctx->pc = 0x2BFBE0u;
            goto label_2bfbe0;
        }
    }
    ctx->pc = 0x2BFBA4u;
label_2bfba4:
    // 0x2bfba4: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x2bfba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2bfba8: 0x8f85b230  lw          $a1, -0x4DD0($gp)
    ctx->pc = 0x2bfba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2bfbac: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2bfbacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bfbb0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2bfbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2bfbb4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2bfbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2bfbb8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2bfbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfbbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bfbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bfbc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbc4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2bfbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bfbc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bfbc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbcc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2bfbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bfbd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2bfbd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbd4: 0x24a50098  addiu       $a1, $a1, 0x98
    ctx->pc = 0x2bfbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
    // 0x2bfbd8: 0xc09640e  jal         func_259038
    ctx->pc = 0x2BFBD8u;
    SET_GPR_U32(ctx, 31, 0x2BFBE0u);
    ctx->pc = 0x2BFBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFBD8u;
    // 0x2bfbdc: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2BFBD8u, 0x2BFBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFBE0u;
label_2bfbe0:
    // 0x2bfbe0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFBE0u;
    {
        const bool branch_taken_0x2bfbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBE0u;
        // 0x2bfbe4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfbe0) {
            ctx->pc = 0x2BFBF8u;
            goto label_2bfbf8;
        }
    }
    ctx->pc = 0x2BFBE8u;
    // 0x2bfbe8: 0xae5402a8  sw          $s4, 0x2A8($s2)
    ctx->pc = 0x2bfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 20));
    // 0x2bfbec: 0xae400a84  sw          $zero, 0xA84($s2)
    ctx->pc = 0x2bfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2692), GPR_U32(ctx, 0));
    // 0x2bfbf0: 0xae400698  sw          $zero, 0x698($s2)
    ctx->pc = 0x2bfbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 0));
label_2bfbf4:
    // 0x2bfbf4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2bfbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2bfbf8:
    // 0x2bfbf8: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2bfbf8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2bfbfc:
    // 0x2bfbfc: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2bfbfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bfc00: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2bfc00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bfc04: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2bfc04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bfc08: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2bfc08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfc0c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2bfc0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfc10: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2bfc10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfc14: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2bfc14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bfc18: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2bfc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bfc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC1Cu;
        // 0x2bfc20: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFC24u;
}
