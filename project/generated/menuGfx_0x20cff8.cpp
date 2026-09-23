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

// Function: menuGfx
// Address: 0x20cff8 - 0x20d3d0
void menuGfx_0x20cff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuGfx_0x20cff8");
#endif

    switch (ctx->pc) {
        case 0x20d0d0u: goto label_20d0d0;
        case 0x20d0ecu: goto label_20d0ec;
        case 0x20d108u: goto label_20d108;
        case 0x20d124u: goto label_20d124;
        case 0x20d168u: goto label_20d168;
        case 0x20d188u: goto label_20d188;
        case 0x20d210u: goto label_20d210;
        case 0x20d2acu: goto label_20d2ac;
        case 0x20d2c8u: goto label_20d2c8;
        case 0x20d2e4u: goto label_20d2e4;
        case 0x20d300u: goto label_20d300;
        case 0x20d31cu: goto label_20d31c;
        case 0x20d338u: goto label_20d338;
        case 0x20d354u: goto label_20d354;
        case 0x20d370u: goto label_20d370;
        case 0x20d380u: goto label_20d380;
        case 0x20d38cu: goto label_20d38c;
        default: break;
    }

    ctx->pc = 0x20cff8u;

    // 0x20cff8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x20cff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x20cffc: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x20cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20d000: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x20d000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x20d004: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x20d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x20d008: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x20d008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x20d00c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x20d00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x20d010: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x20d010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x20d014: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x20d014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x20d018: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x20d018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x20d01c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x20d01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x20d020: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x20d020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x20d024: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x20d024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x20d028: 0x8ca20320  lw          $v0, 0x320($a1)
    ctx->pc = 0x20d028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
    // 0x20d02c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x20D02Cu;
    {
        const bool branch_taken_0x20d02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D02Cu;
        // 0x20d030: 0x3c0a0033  lui         $t2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d02c) {
            ctx->pc = 0x20D124u;
            goto label_20d124;
        }
    }
    ctx->pc = 0x20D034u;
    // 0x20d034: 0xc7848030  lwc1        $f4, -0x7FD0($gp)
    ctx->pc = 0x20d034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20d038: 0x254299f0  addiu       $v0, $t2, -0x6610
    ctx->pc = 0x20d038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941168));
    // 0x20d03c: 0x8d5199f0  lw          $s1, -0x6610($t2)
    ctx->pc = 0x20d03cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294941168)));
    // 0x20d040: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x20d040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x20d044: 0x3c0800ff  lui         $t0, 0xFF
    ctx->pc = 0x20d044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
    // 0x20d048: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x20d048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20d04c: 0x35080080  ori         $t0, $t0, 0x80
    ctx->pc = 0x20d04cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x20d050: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x20d050u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d054: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20d054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20d058: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x20d058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20d05c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d05cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d060: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20d060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20d064: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x20d064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x20d068: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x20d068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x20d06c: 0xc4a30330  lwc1        $f3, 0x330($a1)
    ctx->pc = 0x20d06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20d070: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x20d070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x20d074: 0xc4a2032c  lwc1        $f2, 0x32C($a1)
    ctx->pc = 0x20d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20d078: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x20d078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x20d07c: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20d07cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x20d080: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x20d080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20d084: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20d084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20d088: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x20d088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20d08c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20d08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d090: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20d090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20d094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d098: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20d098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20d09c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x20d09cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x20d0a0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x20d0a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x20d0a4: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20d0a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20d0a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20d0a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20d0ac: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20d0acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20d0b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20d0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20d0b4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x20d0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20d0b8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x20d0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x20d0bc: 0x2605fff8  addiu       $a1, $s0, -0x8
    ctx->pc = 0x20d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x20d0c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20d0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0c8: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D0C8u;
    SET_GPR_U32(ctx, 31, 0x20D0D0u);
    ctx->pc = 0x20D0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0C8u;
    // 0x20d0cc: 0x2607fffd  addiu       $a3, $s0, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D0C8u, 0x20D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0D0u;
label_20d0d0:
    // 0x20d0d0: 0x3c0800ff  lui         $t0, 0xFF
    ctx->pc = 0x20d0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
    // 0x20d0d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0d8: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x20d0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x20d0dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20d0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0e0: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x20d0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x20d0e4: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D0E4u;
    SET_GPR_U32(ctx, 31, 0x20D0ECu);
    ctx->pc = 0x20D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0E4u;
    // 0x20d0e8: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D0E4u, 0x20D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0ECu;
label_20d0ec:
    // 0x20d0ec: 0x3c0800ff  lui         $t0, 0xFF
    ctx->pc = 0x20d0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
    // 0x20d0f0: 0x2624fff1  addiu       $a0, $s1, -0xF
    ctx->pc = 0x20d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967281));
    // 0x20d0f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0f8: 0x2626fffb  addiu       $a2, $s1, -0x5
    ctx->pc = 0x20d0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
    // 0x20d0fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20d0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d100: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D100u;
    SET_GPR_U32(ctx, 31, 0x20D108u);
    ctx->pc = 0x20D104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D100u;
    // 0x20d104: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D100u, 0x20D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D108u;
label_20d108:
    // 0x20d108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d10c: 0x3c0800ff  lui         $t0, 0xFF
    ctx->pc = 0x20d10cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
    // 0x20d110: 0x2626000f  addiu       $a2, $s1, 0xF
    ctx->pc = 0x20d110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x20d114: 0x26240005  addiu       $a0, $s1, 0x5
    ctx->pc = 0x20d114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x20d118: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20d118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d11c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D11Cu;
    SET_GPR_U32(ctx, 31, 0x20D124u);
    ctx->pc = 0x20D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D11Cu;
    // 0x20d120: 0x35080080  ori         $t0, $t0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D11Cu, 0x20D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D124u;
label_20d124:
    // 0x20d124: 0x8f899c68  lw          $t1, -0x6398($gp)
    ctx->pc = 0x20d124u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
    // 0x20d128: 0x1120009d  beqz        $t1, . + 4 + (0x9D << 2)
    ctx->pc = 0x20D128u;
    {
        const bool branch_taken_0x20d128 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D128u;
        // 0x20d12c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d128) {
            ctx->pc = 0x20D3A0u;
            goto label_20d3a0;
        }
    }
    ctx->pc = 0x20D130u;
    // 0x20d130: 0x91220004  lbu         $v0, 0x4($t1)
    ctx->pc = 0x20d130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x20d134: 0x241603e8  addiu       $s6, $zero, 0x3E8
    ctx->pc = 0x20d134u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x20d138: 0x241e03e8  addiu       $fp, $zero, 0x3E8
    ctx->pc = 0x20d138u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x20d13c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x20d13cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d140: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20d140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d144: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x20D144u;
    {
        const bool branch_taken_0x20d144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D144u;
        // 0x20d148: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d144) {
            ctx->pc = 0x20D1E0u;
            goto label_20d1e0;
        }
    }
    ctx->pc = 0x20D14Cu;
    // 0x20d14c: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x20d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x20d150: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x20d150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x20d154: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x20d154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20d158: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x20d158u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x20d15c: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x20d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x20d160: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x20d160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20d164: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x20d164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_20d168:
    // 0x20d168: 0x158140  sll         $s0, $s5, 5
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x20d16c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20d16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d170: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x20d170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x20d174: 0x7faa0030  sq          $t2, 0x30($sp)
    ctx->pc = 0x20d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    // 0x20d178: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x20d178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20d17c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20d17cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20d180: 0xc0832b0  jal         func_20CAC0
    ctx->pc = 0x20D180u;
    SET_GPR_U32(ctx, 31, 0x20D188u);
    ctx->pc = 0x20D184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D180u;
    // 0x20d184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAC0u, 0x20D180u, 0x20D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D188u;
label_20d188:
    // 0x20d188: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x20d188u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x20d18c: 0x9607000e  lhu         $a3, 0xE($s0)
    ctx->pc = 0x20d18cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x20d190: 0xb6102a  slt         $v0, $a1, $s6
    ctx->pc = 0x20d190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x20d194: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d198: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20d198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20d19c: 0xa2b00b  movn        $s6, $a1, $v0
    ctx->pc = 0x20d19cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 5));
    // 0x20d1a0: 0x8f899c68  lw          $t1, -0x6398($gp)
    ctx->pc = 0x20d1a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
    // 0x20d1a4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x20d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20d1a8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x20d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x20d1ac: 0xfe402a  slt         $t0, $a3, $fp
    ctx->pc = 0x20d1acu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x20d1b0: 0x284182a  slt         $v1, $s4, $a0
    ctx->pc = 0x20d1b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20d1b4: 0x91260004  lbu         $a2, 0x4($t1)
    ctx->pc = 0x20d1b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x20d1b8: 0x2e5102a  slt         $v0, $s7, $a1
    ctx->pc = 0x20d1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20d1bc: 0x83a00b  movn        $s4, $a0, $v1
    ctx->pc = 0x20d1bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
    // 0x20d1c0: 0xa2b80b  movn        $s7, $a1, $v0
    ctx->pc = 0x20d1c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 5));
    // 0x20d1c4: 0xe8f00b  movn        $fp, $a3, $t0
    ctx->pc = 0x20d1c4u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 7));
    // 0x20d1c8: 0x2a6302a  slt         $a2, $s5, $a2
    ctx->pc = 0x20d1c8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20d1cc: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x20d1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1d0: 0x14c0ffe5  bnez        $a2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x20D1D0u;
    {
        const bool branch_taken_0x20d1d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1D0u;
        // 0x20d1d4: 0x7baa0030  lq          $t2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1d0) {
            ctx->pc = 0x20D168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d168;
        }
    }
    ctx->pc = 0x20D1D8u;
    // 0x20d1d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20D1D8u;
    {
        const bool branch_taken_0x20d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1D8u;
        // 0x20d1dc: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1d8) {
            ctx->pc = 0x20D200u;
            goto label_20d200;
        }
    }
    ctx->pc = 0x20D1E0u;
label_20d1e0:
    // 0x20d1e0: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x20d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x20d1e4: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x20d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x20d1e8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x20d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20d1ec: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x20d1ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x20d1f0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x20d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x20d1f4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x20d1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20d1f8: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x20d1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x20d1fc: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x20d1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_20d200:
    // 0x20d200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20d200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20d204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d208: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x20D208u;
    SET_GPR_U32(ctx, 31, 0x20D210u);
    ctx->pc = 0x20D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D208u;
    // 0x20d20c: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x20D208u, 0x20D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D210u;
label_20d210:
    // 0x20d210: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20d210u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d214: 0x7baa0030  lq          $t2, 0x30($sp)
    ctx->pc = 0x20d214u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d218: 0x2d71021  addu        $v0, $s6, $s7
    ctx->pc = 0x20d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x20d21c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x20d21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d220: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x20d220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x20d224: 0x8fb00014  lw          $s0, 0x14($sp)
    ctx->pc = 0x20d224u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20d228: 0x254399f0  addiu       $v1, $t2, -0x6610
    ctx->pc = 0x20d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941168));
    // 0x20d22c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20d230: 0x8c730014  lw          $s3, 0x14($v1)
    ctx->pc = 0x20d230u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x20d234: 0x3d08023  subu        $s0, $fp, $s0
    ctx->pc = 0x20d234u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x20d238: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20d238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20d23c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x20d23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x20d240: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x20d240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x20d244: 0xafb0001c  sw          $s0, 0x1C($sp)
    ctx->pc = 0x20d244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
    // 0x20d248: 0x56302a  slt         $a2, $v0, $s6
    ctx->pc = 0x20d248u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x20d24c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x20d24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x20d250: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x20d250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20d254: 0x8d4399f0  lw          $v1, -0x6610($t2)
    ctx->pc = 0x20d254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294941168)));
    // 0x20d258: 0x46b00b  movn        $s6, $v0, $a2
    ctx->pc = 0x20d258u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
    // 0x20d25c: 0xafb0001c  sw          $s0, 0x1C($sp)
    ctx->pc = 0x20d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
    // 0x20d260: 0x2e5202a  slt         $a0, $s7, $a1
    ctx->pc = 0x20d260u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20d264: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20d264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d268: 0xa4b80b  movn        $s7, $a1, $a0
    ctx->pc = 0x20d268u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 5));
    // 0x20d26c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x20d270: 0x27e8821  addu        $s1, $s3, $fp
    ctx->pc = 0x20d270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
    // 0x20d274: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x20d278: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x20d278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20d27c: 0x8d4299f0  lw          $v0, -0x6610($t2)
    ctx->pc = 0x20d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294941168)));
    // 0x20d280: 0x2627fffd  addiu       $a3, $s1, -0x3
    ctx->pc = 0x20d280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x20d284: 0x263efffe  addiu       $fp, $s1, -0x2
    ctx->pc = 0x20d284u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x20d288: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x20d288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x20d28c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20d290: 0x24740005  addiu       $s4, $v1, 0x5
    ctx->pc = 0x20d290u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x20d294: 0x2452fffb  addiu       $s2, $v0, -0x5
    ctx->pc = 0x20d294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x20d298: 0x2456fffa  addiu       $s6, $v0, -0x6
    ctx->pc = 0x20d298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x20d29c: 0x24770006  addiu       $s7, $v1, 0x6
    ctx->pc = 0x20d29cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x20d2a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20d2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2a4: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D2A4u;
    SET_GPR_U32(ctx, 31, 0x20D2ACu);
    ctx->pc = 0x20D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D2A4u;
    // 0x20d2a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D2A4u, 0x20D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2ACu;
label_20d2ac:
    // 0x20d2ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20d2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20d2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2b4: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x20d2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x20d2b8: 0x26670005  addiu       $a3, $s3, 0x5
    ctx->pc = 0x20d2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x20d2bc: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x20d2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x20d2c0: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D2C0u;
    SET_GPR_U32(ctx, 31, 0x20D2C8u);
    ctx->pc = 0x20D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D2C0u;
    // 0x20d2c4: 0x26740006  addiu       $s4, $s3, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D2C0u, 0x20D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2C8u;
label_20d2c8:
    // 0x20d2c8: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x20d2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x20d2cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2d4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x20d2d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20d2d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2dc: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D2DCu;
    SET_GPR_U32(ctx, 31, 0x20D2E4u);
    ctx->pc = 0x20D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D2DCu;
    // 0x20d2e0: 0x35080070  ori         $t0, $t0, 0x70 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D2DCu, 0x20D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2E4u;
label_20d2e4:
    // 0x20d2e4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x20d2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2e8: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x20d2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x20d2ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2f0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x20d2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20d2f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2f8: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D2F8u;
    SET_GPR_U32(ctx, 31, 0x20D300u);
    ctx->pc = 0x20D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D2F8u;
    // 0x20d2fc: 0x35080070  ori         $t0, $t0, 0x70 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D2F8u, 0x20D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D300u;
label_20d300:
    // 0x20d300: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x20d300u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x20d304: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20d304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d308: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20d308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d30c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x20d30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d310: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20d310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d314: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D314u;
    SET_GPR_U32(ctx, 31, 0x20D31Cu);
    ctx->pc = 0x20D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D314u;
    // 0x20d318: 0x35080070  ori         $t0, $t0, 0x70 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D314u, 0x20D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D31Cu;
label_20d31c:
    // 0x20d31c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20d31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d320: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x20d324: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d328: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20d328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d32c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20d32cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d330: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D330u;
    SET_GPR_U32(ctx, 31, 0x20D338u);
    ctx->pc = 0x20D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D330u;
    // 0x20d334: 0x35080070  ori         $t0, $t0, 0x70 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D330u, 0x20D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D338u;
label_20d338:
    // 0x20d338: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20d338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d33c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x20d33cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x20d340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d344: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20d344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d348: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20d348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d34c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20D34Cu;
    SET_GPR_U32(ctx, 31, 0x20D354u);
    ctx->pc = 0x20D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D34Cu;
    // 0x20d350: 0x35080070  ori         $t0, $t0, 0x70 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20D34Cu, 0x20D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D354u;
label_20d354:
    // 0x20d354: 0x8f829c68  lw          $v0, -0x6398($gp)
    ctx->pc = 0x20d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
    // 0x20d358: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x20d358u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x20d35c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d360: 0x34e70070  ori         $a3, $a3, 0x70
    ctx->pc = 0x20d360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)112);
    // 0x20d364: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x20d364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x20d368: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x20D368u;
    SET_GPR_U32(ctx, 31, 0x20D370u);
    ctx->pc = 0x20D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D368u;
    // 0x20d36c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x20D368u, 0x20D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D370u;
label_20d370:
    // 0x20d370: 0x8f849c68  lw          $a0, -0x6398($gp)
    ctx->pc = 0x20d370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
    // 0x20d374: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x20d374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20d378: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20D378u;
    {
        const bool branch_taken_0x20d378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D378u;
        // 0x20d37c: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d378) {
            ctx->pc = 0x20D3A0u;
            goto label_20d3a0;
        }
    }
    ctx->pc = 0x20D380u;
label_20d380:
    // 0x20d380: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x20d380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x20d384: 0xc0833c0  jal         func_20CF00
    ctx->pc = 0x20D384u;
    SET_GPR_U32(ctx, 31, 0x20D38Cu);
    ctx->pc = 0x20D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D384u;
    // 0x20d388: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CF00u, 0x20D384u, 0x20D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D38Cu;
label_20d38c:
    // 0x20d38c: 0x8f849c68  lw          $a0, -0x6398($gp)
    ctx->pc = 0x20d38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
    // 0x20d390: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x20d390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20d394: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x20d394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d398: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20D398u;
    {
        const bool branch_taken_0x20d398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D398u;
        // 0x20d39c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d398) {
            ctx->pc = 0x20D380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d380;
        }
    }
    ctx->pc = 0x20D3A0u;
label_20d3a0:
    // 0x20d3a0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x20d3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20d3a4: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x20d3a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20d3a8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x20d3a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20d3ac: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x20d3acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20d3b0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x20d3b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20d3b4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x20d3b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20d3b8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x20d3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20d3bc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x20d3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20d3c0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x20d3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d3c4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x20d3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x20D3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3C8u;
        // 0x20d3cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D3D0u;
}
