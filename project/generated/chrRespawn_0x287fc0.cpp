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

// Function: chrRespawn
// Address: 0x287fc0 - 0x288460
void chrRespawn_0x287fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrRespawn_0x287fc0");
#endif

    switch (ctx->pc) {
        case 0x28802cu: goto label_28802c;
        case 0x288188u: goto label_288188;
        case 0x288238u: goto label_288238;
        case 0x288288u: goto label_288288;
        case 0x288340u: goto label_288340;
        case 0x28838cu: goto label_28838c;
        case 0x288448u: goto label_288448;
        default: break;
    }

    ctx->pc = 0x287fc0u;

    // 0x287fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x287fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x287fc4: 0x3c03cfff  lui         $v1, 0xCFFF
    ctx->pc = 0x287fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53247 << 16));
    // 0x287fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287fcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x287fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x287fd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x287fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x287fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x287fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x287fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x287fdc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x287fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x287fe0: 0x8e110bcc  lw          $s1, 0xBCC($s0)
    ctx->pc = 0x287fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x287fe4: 0x34840031  ori         $a0, $a0, 0x31
    ctx->pc = 0x287fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49);
    // 0x287fe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287fec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287ff0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x287ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287ff4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x287ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x287ff8: 0xe6200208  swc1        $f0, 0x208($s1)
    ctx->pc = 0x287ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
    // 0x287ffc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x287ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x288000: 0x8f85a2ec  lw          $a1, -0x5D14($gp)
    ctx->pc = 0x288000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x288004: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x288004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x288008: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x288008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x28800c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x28800cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x288010: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x288010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x288014: 0xae060a94  sw          $a2, 0xA94($s0)
    ctx->pc = 0x288014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 6));
    // 0x288018: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x288018u;
    {
        const bool branch_taken_0x288018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288018u;
        // 0x28801c: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288018) {
            ctx->pc = 0x288034u;
            goto label_288034;
        }
    }
    ctx->pc = 0x288020u;
    // 0x288020: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x288020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x288024: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x288024u;
    SET_GPR_U32(ctx, 31, 0x28802Cu);
    ctx->pc = 0x288028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288024u;
    // 0x288028: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x288024u, 0x28802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28802Cu;
label_28802c:
    // 0x28802c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28802Cu;
    {
        const bool branch_taken_0x28802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28802Cu;
        // 0x288030: 0xae0202a8  sw          $v0, 0x2A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28802c) {
            ctx->pc = 0x288038u;
            goto label_288038;
        }
    }
    ctx->pc = 0x288034u;
label_288034:
    // 0x288034: 0xae0602a8  sw          $a2, 0x2A8($s0)
    ctx->pc = 0x288034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 6));
label_288038:
    // 0x288038: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x288038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28803c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28803cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x288040: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288044: 0xc443fa5c  lwc1        $f3, -0x5A4($v0)
    ctx->pc = 0x288044u;
    { uint32_t bits = FAST_READ32(0x3AFA5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x288048: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x288048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28804c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28804cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288050: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x288050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x288054: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x288054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x288058: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x288058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x28805c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28805cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288060: 0x24030120  addiu       $v1, $zero, 0x120
    ctx->pc = 0x288060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x288064: 0xe6010b14  swc1        $f1, 0xB14($s0)
    ctx->pc = 0x288064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2836), bits); }
    // 0x288068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x288068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28806c: 0xe6020b90  swc1        $f2, 0xB90($s0)
    ctx->pc = 0x28806cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2960), bits); }
    // 0x288070: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x288070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x288074: 0xe6010b10  swc1        $f1, 0xB10($s0)
    ctx->pc = 0x288074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2832), bits); }
    // 0x288078: 0x2607120c  addiu       $a3, $s0, 0x120C
    ctx->pc = 0x288078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4620));
    // 0x28807c: 0xe6020b50  swc1        $f2, 0xB50($s0)
    ctx->pc = 0x28807cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2896), bits); }
    // 0x288080: 0xe6000b54  swc1        $f0, 0xB54($s0)
    ctx->pc = 0x288080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2900), bits); }
    // 0x288084: 0xae000adc  sw          $zero, 0xADC($s0)
    ctx->pc = 0x288084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2780), GPR_U32(ctx, 0));
    // 0x288088: 0xae000ae0  sw          $zero, 0xAE0($s0)
    ctx->pc = 0x288088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2784), GPR_U32(ctx, 0));
    // 0x28808c: 0xae000b3c  sw          $zero, 0xB3C($s0)
    ctx->pc = 0x28808cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2876), GPR_U32(ctx, 0));
    // 0x288090: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x288090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x288094: 0xae000b84  sw          $zero, 0xB84($s0)
    ctx->pc = 0x288094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2948), GPR_U32(ctx, 0));
    // 0x288098: 0xae000b5c  sw          $zero, 0xB5C($s0)
    ctx->pc = 0x288098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2908), GPR_U32(ctx, 0));
    // 0x28809c: 0xae000b60  sw          $zero, 0xB60($s0)
    ctx->pc = 0x28809cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2912), GPR_U32(ctx, 0));
    // 0x2880a0: 0xae000b88  sw          $zero, 0xB88($s0)
    ctx->pc = 0x2880a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2952), GPR_U32(ctx, 0));
    // 0x2880a4: 0xe6030b8c  swc1        $f3, 0xB8C($s0)
    ctx->pc = 0x2880a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2956), bits); }
    // 0x2880a8: 0xae000b98  sw          $zero, 0xB98($s0)
    ctx->pc = 0x2880a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2968), GPR_U32(ctx, 0));
    // 0x2880ac: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2880acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2880b0: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2880b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2880b4: 0xae030a90  sw          $v1, 0xA90($s0)
    ctx->pc = 0x2880b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
    // 0x2880b8: 0xe6000b9c  swc1        $f0, 0xB9C($s0)
    ctx->pc = 0x2880b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2972), bits); }
    // 0x2880bc: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2880bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2880c0: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2880c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
    // 0x2880c4: 0xae000aa0  sw          $zero, 0xAA0($s0)
    ctx->pc = 0x2880c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 0));
    // 0x2880c8: 0xae000aa4  sw          $zero, 0xAA4($s0)
    ctx->pc = 0x2880c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2724), GPR_U32(ctx, 0));
    // 0x2880cc: 0xae000aa8  sw          $zero, 0xAA8($s0)
    ctx->pc = 0x2880ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 0));
    // 0x2880d0: 0xae000ad0  sw          $zero, 0xAD0($s0)
    ctx->pc = 0x2880d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2768), GPR_U32(ctx, 0));
    // 0x2880d4: 0xae000ad4  sw          $zero, 0xAD4($s0)
    ctx->pc = 0x2880d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 0));
    // 0x2880d8: 0xae040ad8  sw          $a0, 0xAD8($s0)
    ctx->pc = 0x2880d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2776), GPR_U32(ctx, 4));
    // 0x2880dc: 0xae000b64  sw          $zero, 0xB64($s0)
    ctx->pc = 0x2880dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2916), GPR_U32(ctx, 0));
    // 0x2880e0: 0xae000ae4  sw          $zero, 0xAE4($s0)
    ctx->pc = 0x2880e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 0));
    // 0x2880e4: 0xae000ae8  sw          $zero, 0xAE8($s0)
    ctx->pc = 0x2880e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2792), GPR_U32(ctx, 0));
    // 0x2880e8: 0xae000bb8  sw          $zero, 0xBB8($s0)
    ctx->pc = 0x2880e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3000), GPR_U32(ctx, 0));
    // 0x2880ec: 0xae000bbc  sw          $zero, 0xBBC($s0)
    ctx->pc = 0x2880ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3004), GPR_U32(ctx, 0));
    // 0x2880f0: 0xae000bd4  sw          $zero, 0xBD4($s0)
    ctx->pc = 0x2880f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3028), GPR_U32(ctx, 0));
    // 0x2880f4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2880f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2880f8: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2880f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2880fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2880fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288100: 0xe6000aec  swc1        $f0, 0xAEC($s0)
    ctx->pc = 0x288100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x288104: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x288104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x288108: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x288108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28810c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x28810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288110: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x288110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x288114: 0xe6000af0  swc1        $f0, 0xAF0($s0)
    ctx->pc = 0x288114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x288118: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x288118u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28811c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x28811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288120: 0xae051194  sw          $a1, 0x1194($s0)
    ctx->pc = 0x288120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4500), GPR_U32(ctx, 5));
    // 0x288124: 0xe6000af4  swc1        $f0, 0xAF4($s0)
    ctx->pc = 0x288124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
    // 0x288128: 0xae0411bc  sw          $a0, 0x11BC($s0)
    ctx->pc = 0x288128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4540), GPR_U32(ctx, 4));
    // 0x28812c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x28812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288130: 0xae000b80  sw          $zero, 0xB80($s0)
    ctx->pc = 0x288130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2944), GPR_U32(ctx, 0));
    // 0x288134: 0xe6000af8  swc1        $f0, 0xAF8($s0)
    ctx->pc = 0x288134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2808), bits); }
    // 0x288138: 0xae00119c  sw          $zero, 0x119C($s0)
    ctx->pc = 0x288138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4508), GPR_U32(ctx, 0));
    // 0x28813c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x28813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288140: 0xae0011a0  sw          $zero, 0x11A0($s0)
    ctx->pc = 0x288140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4512), GPR_U32(ctx, 0));
    // 0x288144: 0xe6000afc  swc1        $f0, 0xAFC($s0)
    ctx->pc = 0x288144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2812), bits); }
    // 0x288148: 0xae0011b4  sw          $zero, 0x11B4($s0)
    ctx->pc = 0x288148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4532), GPR_U32(ctx, 0));
    // 0x28814c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x28814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288150: 0xae0011b8  sw          $zero, 0x11B8($s0)
    ctx->pc = 0x288150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4536), GPR_U32(ctx, 0));
    // 0x288154: 0xae0011b0  sw          $zero, 0x11B0($s0)
    ctx->pc = 0x288154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4528), GPR_U32(ctx, 0));
    // 0x288158: 0xe6010b44  swc1        $f1, 0xB44($s0)
    ctx->pc = 0x288158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2884), bits); }
    // 0x28815c: 0xe6000b00  swc1        $f0, 0xB00($s0)
    ctx->pc = 0x28815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2816), bits); }
    // 0x288160: 0xe6020b48  swc1        $f2, 0xB48($s0)
    ctx->pc = 0x288160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2888), bits); }
    // 0x288164: 0xe6031198  swc1        $f3, 0x1198($s0)
    ctx->pc = 0x288164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4504), bits); }
    // 0x288168: 0xae000b68  sw          $zero, 0xB68($s0)
    ctx->pc = 0x288168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2920), GPR_U32(ctx, 0));
    // 0x28816c: 0xae000b6c  sw          $zero, 0xB6C($s0)
    ctx->pc = 0x28816cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2924), GPR_U32(ctx, 0));
    // 0x288170: 0xae000b70  sw          $zero, 0xB70($s0)
    ctx->pc = 0x288170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2928), GPR_U32(ctx, 0));
    // 0x288174: 0xae000b74  sw          $zero, 0xB74($s0)
    ctx->pc = 0x288174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2932), GPR_U32(ctx, 0));
    // 0x288178: 0xae000b78  sw          $zero, 0xB78($s0)
    ctx->pc = 0x288178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2936), GPR_U32(ctx, 0));
    // 0x28817c: 0xae000b7c  sw          $zero, 0xB7C($s0)
    ctx->pc = 0x28817cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2940), GPR_U32(ctx, 0));
    // 0x288180: 0xae000b30  sw          $zero, 0xB30($s0)
    ctx->pc = 0x288180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2864), GPR_U32(ctx, 0));
    // 0x288184: 0xae000b58  sw          $zero, 0xB58($s0)
    ctx->pc = 0x288184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2904), GPR_U32(ctx, 0));
label_288188:
    // 0x288188: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x288188u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x28818c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x28818cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x288190: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x288190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x288194: 0x0  nop
    ctx->pc = 0x288194u;
    // NOP
    // 0x288198: 0x0  nop
    ctx->pc = 0x288198u;
    // NOP
    // 0x28819c: 0x521fffa  bgez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28819Cu;
    {
        const bool branch_taken_0x28819c = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x28819c) {
            ctx->pc = 0x288188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288188;
        }
    }
    ctx->pc = 0x2881A4u;
    // 0x2881a4: 0xc78089c8  lwc1        $f0, -0x7638($gp)
    ctx->pc = 0x2881a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2881a8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2881a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2881ac: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x2881acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2881b0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2881b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2881b4: 0xe6000b94  swc1        $f0, 0xB94($s0)
    ctx->pc = 0x2881b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2964), bits); }
    // 0x2881b8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2881b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2881bc: 0xacc000bc  sw          $zero, 0xBC($a2)
    ctx->pc = 0x2881bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 188), GPR_U32(ctx, 0));
    // 0x2881c0: 0xacc00068  sw          $zero, 0x68($a2)
    ctx->pc = 0x2881c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 0));
    // 0x2881c4: 0xacc0006c  sw          $zero, 0x6C($a2)
    ctx->pc = 0x2881c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 0));
    // 0x2881c8: 0xacc00070  sw          $zero, 0x70($a2)
    ctx->pc = 0x2881c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x2881cc: 0xacc00074  sw          $zero, 0x74($a2)
    ctx->pc = 0x2881ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 0));
    // 0x2881d0: 0xacc00078  sw          $zero, 0x78($a2)
    ctx->pc = 0x2881d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 0));
    // 0x2881d4: 0xacc0007c  sw          $zero, 0x7C($a2)
    ctx->pc = 0x2881d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
    // 0x2881d8: 0xacc000a8  sw          $zero, 0xA8($a2)
    ctx->pc = 0x2881d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 0));
    // 0x2881dc: 0xacc000ac  sw          $zero, 0xAC($a2)
    ctx->pc = 0x2881dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 0));
    // 0x2881e0: 0xacc000b0  sw          $zero, 0xB0($a2)
    ctx->pc = 0x2881e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 0));
    // 0x2881e4: 0xacc000b4  sw          $zero, 0xB4($a2)
    ctx->pc = 0x2881e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 0));
    // 0x2881e8: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2881E8u;
    {
        const bool branch_taken_0x2881e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2881ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881E8u;
        // 0x2881ec: 0xacc000b8  sw          $zero, 0xB8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881e8) {
            ctx->pc = 0x2881F4u;
            goto label_2881f4;
        }
    }
    ctx->pc = 0x2881F0u;
    // 0x2881f0: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x2881f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_2881f4:
    // 0x2881f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2881f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2881f8: 0x1102004f  beq         $t0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2881F8u;
    {
        const bool branch_taken_0x2881f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2881FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881F8u;
        // 0x2881fc: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881f8) {
            ctx->pc = 0x288338u;
            goto label_288338;
        }
    }
    ctx->pc = 0x288200u;
    // 0x288200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288200u;
    {
        const bool branch_taken_0x288200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288200u;
        // 0x288204: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288200) {
            ctx->pc = 0x288218u;
            goto label_288218;
        }
    }
    ctx->pc = 0x288208u;
    // 0x288208: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x288208u;
    {
        const bool branch_taken_0x288208 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x288208) {
            ctx->pc = 0x288230u;
            goto label_288230;
        }
    }
    ctx->pc = 0x288210u;
    // 0x288210: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x288210u;
    {
        const bool branch_taken_0x288210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288210u;
        // 0x288214: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288210) {
            ctx->pc = 0x288440u;
            goto label_288440;
        }
    }
    ctx->pc = 0x288218u;
label_288218:
    // 0x288218: 0x11020078  beq         $t0, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x288218u;
    {
        const bool branch_taken_0x288218 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x28821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288218u;
        // 0x28821c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288218) {
            ctx->pc = 0x2883FCu;
            goto label_2883fc;
        }
    }
    ctx->pc = 0x288220u;
    // 0x288220: 0x11020034  beq         $t0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x288220u;
    {
        const bool branch_taken_0x288220 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x288220) {
            ctx->pc = 0x2882F4u;
            goto label_2882f4;
        }
    }
    ctx->pc = 0x288228u;
    // 0x288228: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x288228u;
    {
        const bool branch_taken_0x288228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288228u;
        // 0x28822c: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288228) {
            ctx->pc = 0x288440u;
            goto label_288440;
        }
    }
    ctx->pc = 0x288230u;
label_288230:
    // 0x288230: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288230u;
    SET_GPR_U32(ctx, 31, 0x288238u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288230u, 0x288238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288238u;
label_288238:
    // 0x288238: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288238u;
    {
        const bool branch_taken_0x288238 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288238u;
        // 0x28823c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288238) {
            ctx->pc = 0x28824Cu;
            goto label_28824c;
        }
    }
    ctx->pc = 0x288240u;
    // 0x288240: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x288240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x288244: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x288244u;
    {
        const bool branch_taken_0x288244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288244u;
        // 0x288248: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288244) {
            ctx->pc = 0x288260u;
            goto label_288260;
        }
    }
    ctx->pc = 0x28824Cu;
label_28824c:
    // 0x28824c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28824cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x288250: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x288250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x288254: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x288254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x288258: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x288258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28825c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28825cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_288260:
    // 0x288260: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x288260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x288264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288268: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x288268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x28826c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28826cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288270: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x288270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x288274: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x288274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x288278: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x288278u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28827c: 0xe6010b38  swc1        $f1, 0xB38($s0)
    ctx->pc = 0x28827cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x288280: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288280u;
    SET_GPR_U32(ctx, 31, 0x288288u);
    ctx->pc = 0x288284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288280u;
    // 0x288284: 0xe6010b28  swc1        $f1, 0xB28($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2856), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288280u, 0x288288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288288u;
label_288288:
    // 0x288288: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288288u;
    {
        const bool branch_taken_0x288288 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288288u;
        // 0x28828c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288288) {
            ctx->pc = 0x28829Cu;
            goto label_28829c;
        }
    }
    ctx->pc = 0x288290u;
    // 0x288290: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x288290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x288294: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x288294u;
    {
        const bool branch_taken_0x288294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288294u;
        // 0x288298: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288294) {
            ctx->pc = 0x2882B0u;
            goto label_2882b0;
        }
    }
    ctx->pc = 0x28829Cu;
label_28829c:
    // 0x28829c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28829cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2882a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2882a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2882a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2882a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2882a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2882a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2882ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2882acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2882b0:
    // 0x2882b0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2882b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2882b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2882b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2882b8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2882b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2882bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2882bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2882c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2882c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2882c4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2882c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2882c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2882c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2882cc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2882ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2882d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2882d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2882d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2882d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2882d8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2882d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2882dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2882dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2882e0: 0xe6020b34  swc1        $f2, 0xB34($s0)
    ctx->pc = 0x2882e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2868), bits); }
    // 0x2882e4: 0xe6030b40  swc1        $f3, 0xB40($s0)
    ctx->pc = 0x2882e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2880), bits); }
    // 0x2882e8: 0xe6040a8c  swc1        $f4, 0xA8C($s0)
    ctx->pc = 0x2882e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2700), bits); }
    // 0x2882ec: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2882ECu;
    {
        const bool branch_taken_0x2882ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2882F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882ECu;
        // 0x2882f0: 0xe6010b2c  swc1        $f1, 0xB2C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882ec) {
            ctx->pc = 0x28843Cu;
            goto label_28843c;
        }
    }
    ctx->pc = 0x2882F4u;
label_2882f4:
    // 0x2882f4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2882f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2882f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2882f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2882fc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2882fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x288300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288304: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x288304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x288308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28830c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28830cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x288310: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x288310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x288314: 0xe6030b38  swc1        $f3, 0xB38($s0)
    ctx->pc = 0x288314u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x288318: 0xe6000b2c  swc1        $f0, 0xB2C($s0)
    ctx->pc = 0x288318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2860), bits); }
    // 0x28831c: 0xe6010b34  swc1        $f1, 0xB34($s0)
    ctx->pc = 0x28831cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2868), bits); }
    // 0x288320: 0xe6020b40  swc1        $f2, 0xB40($s0)
    ctx->pc = 0x288320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2880), bits); }
    // 0x288324: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x288324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x288328: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x288328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x28832c: 0xe6030b28  swc1        $f3, 0xB28($s0)
    ctx->pc = 0x28832cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2856), bits); }
    // 0x288330: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x288330u;
    {
        const bool branch_taken_0x288330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288330u;
        // 0x288334: 0xae000a8c  sw          $zero, 0xA8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288330) {
            ctx->pc = 0x28843Cu;
            goto label_28843c;
        }
    }
    ctx->pc = 0x288338u;
label_288338:
    // 0x288338: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288338u;
    SET_GPR_U32(ctx, 31, 0x288340u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288338u, 0x288340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288340u;
label_288340:
    // 0x288340: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288340u;
    {
        const bool branch_taken_0x288340 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x288344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288340u;
        // 0x288344: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288340) {
            ctx->pc = 0x288354u;
            goto label_288354;
        }
    }
    ctx->pc = 0x288348u;
    // 0x288348: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x288348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28834c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28834Cu;
    {
        const bool branch_taken_0x28834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28834Cu;
        // 0x288350: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28834c) {
            ctx->pc = 0x288368u;
            goto label_288368;
        }
    }
    ctx->pc = 0x288354u;
label_288354:
    // 0x288354: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x288354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x288358: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x288358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28835c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28835cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x288360: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x288360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x288364: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x288364u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_288368:
    // 0x288368: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x288368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28836c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28836cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288370: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x288370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x288374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288378: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x288378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28837c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28837cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x288380: 0xe6000b38  swc1        $f0, 0xB38($s0)
    ctx->pc = 0x288380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x288384: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288384u;
    SET_GPR_U32(ctx, 31, 0x28838Cu);
    ctx->pc = 0x288388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288384u;
    // 0x288388: 0xe6000b28  swc1        $f0, 0xB28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2856), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288384u, 0x28838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28838Cu;
label_28838c:
    // 0x28838c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28838Cu;
    {
        const bool branch_taken_0x28838c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x288390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28838Cu;
        // 0x288390: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28838c) {
            ctx->pc = 0x2883A0u;
            goto label_2883a0;
        }
    }
    ctx->pc = 0x288394u;
    // 0x288394: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x288394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288398: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x288398u;
    {
        const bool branch_taken_0x288398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288398u;
        // 0x28839c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288398) {
            ctx->pc = 0x2883B4u;
            goto label_2883b4;
        }
    }
    ctx->pc = 0x2883A0u;
label_2883a0:
    // 0x2883a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2883a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2883a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2883a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2883a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2883a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2883ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2883acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2883b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2883b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2883b4:
    // 0x2883b4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2883b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2883b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2883b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2883bc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2883bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2883c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2883c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2883c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2883c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2883c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2883c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2883cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2883ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2883d0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2883d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2883d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2883d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2883d8: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x2883d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x2883dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2883dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2883e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2883e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2883e4: 0xe6010b34  swc1        $f1, 0xB34($s0)
    ctx->pc = 0x2883e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2868), bits); }
    // 0x2883e8: 0xe6020b40  swc1        $f2, 0xB40($s0)
    ctx->pc = 0x2883e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2880), bits); }
    // 0x2883ec: 0xae000a8c  sw          $zero, 0xA8C($s0)
    ctx->pc = 0x2883ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2700), GPR_U32(ctx, 0));
    // 0x2883f0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2883f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2883f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2883F4u;
    {
        const bool branch_taken_0x2883f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2883F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2883F4u;
        // 0x2883f8: 0xe6000b2c  swc1        $f0, 0xB2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883f4) {
            ctx->pc = 0x28843Cu;
            goto label_28843c;
        }
    }
    ctx->pc = 0x2883FCu;
label_2883fc:
    // 0x2883fc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2883fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x288400: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x288400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x288404: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x288404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x288408: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x288408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x28840c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28840cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x288410: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x288410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x288414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288418: 0x3c0140d0  lui         $at, 0x40D0
    ctx->pc = 0x288418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16592 << 16));
    // 0x28841c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28841cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288420: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x288420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x288424: 0xe6030b38  swc1        $f3, 0xB38($s0)
    ctx->pc = 0x288424u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x288428: 0xe6000b2c  swc1        $f0, 0xB2C($s0)
    ctx->pc = 0x288428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2860), bits); }
    // 0x28842c: 0xe6010b40  swc1        $f1, 0xB40($s0)
    ctx->pc = 0x28842cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2880), bits); }
    // 0x288430: 0xe6020a8c  swc1        $f2, 0xA8C($s0)
    ctx->pc = 0x288430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2700), bits); }
    // 0x288434: 0xe6030b28  swc1        $f3, 0xB28($s0)
    ctx->pc = 0x288434u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2856), bits); }
    // 0x288438: 0xe6020b34  swc1        $f2, 0xB34($s0)
    ctx->pc = 0x288438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2868), bits); }
label_28843c:
    // 0x28843c: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x28843cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_288440:
    // 0x288440: 0xc0a21a8  jal         func_2886A0
    ctx->pc = 0x288440u;
    SET_GPR_U32(ctx, 31, 0x288448u);
    ctx->pc = 0x288444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288440u;
    // 0x288444: 0x86050006  lh          $a1, 0x6($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2886A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2886A0u, 0x288440u, 0x288448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288448u;
label_288448:
    // 0x288448: 0xae020bd0  sw          $v0, 0xBD0($s0)
    ctx->pc = 0x288448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3024), GPR_U32(ctx, 2));
    // 0x28844c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28844cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288450: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x288450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x288454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288458: 0x3e00008  jr          $ra
    ctx->pc = 0x288458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288458u;
        // 0x28845c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288460u;
}
