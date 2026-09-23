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

// Function: mmDrawLevelBox
// Address: 0x24b240 - 0x24b394
void mmDrawLevelBox_0x24b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawLevelBox_0x24b240");
#endif

    switch (ctx->pc) {
        case 0x24b2b8u: goto label_24b2b8;
        case 0x24b32cu: goto label_24b32c;
        case 0x24b354u: goto label_24b354;
        default: break;
    }

    ctx->pc = 0x24b240u;

    // 0x24b240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24b244: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x24b244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x24b248: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24b248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24b24c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24b24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24b250: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24b250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24b254: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24b258: 0x3c137f3f  lui         $s3, 0x7F3F
    ctx->pc = 0x24b258u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32575 << 16));
    // 0x24b25c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24b25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24b260: 0x3c123f7f  lui         $s2, 0x3F7F
    ctx->pc = 0x24b260u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16255 << 16));
    // 0x24b264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b268: 0x36733f00  ori         $s3, $s3, 0x3F00
    ctx->pc = 0x24b268u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16128);
    // 0x24b26c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x24b26cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24b270: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24b270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b274: 0x8c4399f0  lw          $v1, -0x6610($v0)
    ctx->pc = 0x24b274u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3299F0u));
    // 0x24b278: 0x36523f00  ori         $s2, $s2, 0x3F00
    ctx->pc = 0x24b278u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16128);
    // 0x24b27c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24b280: 0x244299f0  addiu       $v0, $v0, -0x6610
    ctx->pc = 0x24b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x24b284: 0x8f85a158  lw          $a1, -0x5EA8($gp)
    ctx->pc = 0x24b284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x24b288: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x24b288u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x329A04u));
    // 0x24b28c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24b290: 0x8f82a15c  lw          $v0, -0x5EA4($gp)
    ctx->pc = 0x24b290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x24b294: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x24b294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x24b298: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x24b298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24b29c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x24b29cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x24b2a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x24b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24b2a4: 0x24950042  addiu       $s5, $a0, 0x42
    ctx->pc = 0x24b2a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 66));
    // 0x24b2a8: 0x24940009  addiu       $s4, $a0, 0x9
    ctx->pc = 0x24b2a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 9));
    // 0x24b2ac: 0x24910033  addiu       $s1, $a0, 0x33
    ctx->pc = 0x24b2acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 51));
    // 0x24b2b0: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24b2b4: 0x0  nop
    ctx->pc = 0x24b2b4u;
    // NOP
label_24b2b8:
    // 0x24b2b8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x24b2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x24b2bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B2BCu;
    {
        const bool branch_taken_0x24b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2BCu;
        // 0x24b2c0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2bc) {
            ctx->pc = 0x24B2E0u;
            goto label_24b2e0;
        }
    }
    ctx->pc = 0x24B2C4u;
    // 0x24b2c4: 0x8f82a0e4  lw          $v0, -0x5F1C($gp)
    ctx->pc = 0x24b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942948)));
    // 0x24b2c8: 0x2603fffd  addiu       $v1, $s0, -0x3
    ctx->pc = 0x24b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x24b2cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B2CCu;
    {
        const bool branch_taken_0x24b2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2CCu;
        // 0x24b2d0: 0x8f82a0dc  lw          $v0, -0x5F24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2cc) {
            ctx->pc = 0x24B2E8u;
            goto label_24b2e8;
        }
    }
    ctx->pc = 0x24B2D4u;
    // 0x24b2d4: 0x9382a02d  lbu         $v0, -0x5FD3($gp)
    ctx->pc = 0x24b2d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942765)));
    // 0x24b2d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24B2D8u;
    {
        const bool branch_taken_0x24b2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2D8u;
        // 0x24b2dc: 0x532825  or          $a1, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2d8) {
            ctx->pc = 0x24B314u;
            goto label_24b314;
        }
    }
    ctx->pc = 0x24B2E0u;
label_24b2e0:
    // 0x24b2e0: 0x2603fffd  addiu       $v1, $s0, -0x3
    ctx->pc = 0x24b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x24b2e4: 0x8f82a0dc  lw          $v0, -0x5F24($gp)
    ctx->pc = 0x24b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
label_24b2e8:
    // 0x24b2e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B2E8u;
    {
        const bool branch_taken_0x24b2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2E8u;
        // 0x24b2ec: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2e8) {
            ctx->pc = 0x24B2FCu;
            goto label_24b2fc;
        }
    }
    ctx->pc = 0x24B2F0u;
    // 0x24b2f0: 0x9382a02c  lbu         $v0, -0x5FD4($gp)
    ctx->pc = 0x24b2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24b2f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24B2F4u;
    {
        const bool branch_taken_0x24b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2F4u;
        // 0x24b2f8: 0x522825  or          $a1, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2f4) {
            ctx->pc = 0x24B314u;
            goto label_24b314;
        }
    }
    ctx->pc = 0x24B2FCu;
label_24b2fc:
    // 0x24b2fc: 0x8f82a0e0  lw          $v0, -0x5F20($gp)
    ctx->pc = 0x24b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942944)));
    // 0x24b300: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B300u;
    {
        const bool branch_taken_0x24b300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B300u;
        // 0x24b304: 0x34a53f50  ori         $a1, $a1, 0x3F50 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16208);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b300) {
            ctx->pc = 0x24B314u;
            goto label_24b314;
        }
    }
    ctx->pc = 0x24B308u;
    // 0x24b308: 0x3c053f3f  lui         $a1, 0x3F3F
    ctx->pc = 0x24b308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16191 << 16));
    // 0x24b30c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x24b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24b310: 0x34a53f7f  ori         $a1, $a1, 0x3F7F
    ctx->pc = 0x24b310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16255);
label_24b314:
    // 0x24b314: 0x44916800  mtc1        $s1, $f13
    ctx->pc = 0x24b314u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24b318: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24b318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24b31c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24b31cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24b320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24b320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24b324: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24B324u;
    SET_GPR_U32(ctx, 31, 0x24B32Cu);
    ctx->pc = 0x24B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B324u;
    // 0x24b328: 0x2631fffb  addiu       $s1, $s1, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24B324u, 0x24B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B32Cu;
label_24b32c:
    // 0x24b32c: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x24b32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x24b330: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x24B330u;
    {
        const bool branch_taken_0x24b330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B330u;
        // 0x24b334: 0x8f82a0d8  lw          $v0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b330) {
            ctx->pc = 0x24B2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b2b8;
        }
    }
    ctx->pc = 0x24B338u;
    // 0x24b338: 0x44946800  mtc1        $s4, $f13
    ctx->pc = 0x24b338u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24b33c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24b33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24b340: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x24b340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x24b344: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24b344u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24b348: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x24b348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24b34c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24B34Cu;
    SET_GPR_U32(ctx, 31, 0x24B354u);
    ctx->pc = 0x24B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B34Cu;
    // 0x24b350: 0x34a57f7f  ori         $a1, $a1, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24B34Cu, 0x24B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B354u;
label_24b354:
    // 0x24b354: 0x44956800  mtc1        $s5, $f13
    ctx->pc = 0x24b354u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24b358: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24b358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24b35c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24b35cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24b360: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x24b360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x24b364: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24b364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24b368: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24b368u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b36c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x24b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x24b370: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24b370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b374: 0x34a57f7f  ori         $a1, $a1, 0x7F7F
    ctx->pc = 0x24b374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32639);
    // 0x24b378: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24b378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b37c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24b37cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b380: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24b380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b388: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x24b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24b38c: 0x808b952  j           func_22E548
    ctx->pc = 0x24B38Cu;
    ctx->pc = 0x24B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B38Cu;
    // 0x24b390: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    guiDrawImage_0x22e548(rdram, ctx, runtime); return;
    ctx->pc = 0x24B394u;
}
