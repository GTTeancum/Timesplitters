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

// Function: bgTileLoadLevel
// Address: 0x254e60 - 0x255d6c
void bgTileLoadLevel_0x254e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgTileLoadLevel_0x254e60");
#endif

    switch (ctx->pc) {
        case 0x254ec0u: goto label_254ec0;
        case 0x254ef8u: goto label_254ef8;
        case 0x254f58u: goto label_254f58;
        case 0x254f68u: goto label_254f68;
        case 0x255008u: goto label_255008;
        case 0x255060u: goto label_255060;
        case 0x2550f4u: goto label_2550f4;
        case 0x255110u: goto label_255110;
        case 0x25512cu: goto label_25512c;
        case 0x255140u: goto label_255140;
        case 0x25514cu: goto label_25514c;
        case 0x255154u: goto label_255154;
        case 0x25515cu: goto label_25515c;
        case 0x255180u: goto label_255180;
        case 0x2551a8u: goto label_2551a8;
        case 0x2551ccu: goto label_2551cc;
        case 0x2551e8u: goto label_2551e8;
        case 0x255210u: goto label_255210;
        case 0x255220u: goto label_255220;
        case 0x255230u: goto label_255230;
        case 0x255270u: goto label_255270;
        case 0x2552e0u: goto label_2552e0;
        case 0x255328u: goto label_255328;
        case 0x2553c8u: goto label_2553c8;
        case 0x255588u: goto label_255588;
        case 0x2557d8u: goto label_2557d8;
        case 0x2557f8u: goto label_2557f8;
        case 0x255890u: goto label_255890;
        case 0x2558c8u: goto label_2558c8;
        case 0x2558e0u: goto label_2558e0;
        case 0x255910u: goto label_255910;
        case 0x255998u: goto label_255998;
        case 0x2559b8u: goto label_2559b8;
        case 0x2559dcu: goto label_2559dc;
        case 0x2559fcu: goto label_2559fc;
        case 0x255a1cu: goto label_255a1c;
        case 0x255a38u: goto label_255a38;
        case 0x255a58u: goto label_255a58;
        case 0x255a60u: goto label_255a60;
        case 0x255a68u: goto label_255a68;
        case 0x255a80u: goto label_255a80;
        case 0x255aa0u: goto label_255aa0;
        case 0x255ab0u: goto label_255ab0;
        case 0x255ad8u: goto label_255ad8;
        case 0x255d34u: goto label_255d34;
        default: break;
    }

    ctx->pc = 0x254e60u;

    // 0x254e60: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x254e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x254e64: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x254e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x254e68: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x254e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x254e6c: 0x24844828  addiu       $a0, $a0, 0x4828
    ctx->pc = 0x254e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18472));
    // 0x254e70: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x254e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x254e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e78: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x254e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x254e7c: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x254e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x254e80: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x254e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x254e84: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x254e84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e88: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x254e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x254e8c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x254e8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e90: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x254e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x254e94: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x254e94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254e98: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x254e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x254e9c: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x254e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x254ea0: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x254ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x254ea4: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x254ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x254ea8: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x254ea8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x254eac: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x254eacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x254eb0: 0xaf80a264  sw          $zero, -0x5D9C($gp)
    ctx->pc = 0x254eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943332), GPR_U32(ctx, 0));
    // 0x254eb4: 0xaf80a268  sw          $zero, -0x5D98($gp)
    ctx->pc = 0x254eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943336), GPR_U32(ctx, 0));
    // 0x254eb8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x254EB8u;
    SET_GPR_U32(ctx, 31, 0x254EC0u);
    ctx->pc = 0x254EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EB8u;
    // 0x254ebc: 0xaf80a26c  sw          $zero, -0x5D94($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943340), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x254EB8u, 0x254EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EC0u;
label_254ec0:
    // 0x254ec0: 0x8f85a0d0  lw          $a1, -0x5F30($gp)
    ctx->pc = 0x254ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x254ec4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x254ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254ec8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x254ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x254ecc: 0x24b20008  addiu       $s2, $a1, 0x8
    ctx->pc = 0x254eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x254ed0: 0x24a21ffc  addiu       $v0, $a1, 0x1FFC
    ctx->pc = 0x254ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8188));
    // 0x254ed4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x254ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x254ed8: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x254ED8u;
    {
        const bool branch_taken_0x254ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254ED8u;
        // 0x254edc: 0x3c020132  lui         $v0, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ed8) {
            ctx->pc = 0x255050u;
            goto label_255050;
        }
    }
    ctx->pc = 0x254EE0u;
    // 0x254ee0: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x254ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ee4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x254ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x254ee8: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x254ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x254eec: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x254EECu;
    {
        const bool branch_taken_0x254eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x254EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EECu;
        // 0x254ef0: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254eec) {
            ctx->pc = 0x255050u;
            goto label_255050;
        }
    }
    ctx->pc = 0x254EF4u;
    // 0x254ef4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x254ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_254ef8:
    // 0x254ef8: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x254ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x254efc: 0x34424627  ori         $v0, $v0, 0x4627
    ctx->pc = 0x254efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17959);
    // 0x254f00: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254F00u;
    {
        const bool branch_taken_0x254f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x254F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F00u;
        // 0x254f04: 0x3c020132  lui         $v0, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f00) {
            ctx->pc = 0x254F1Cu;
            goto label_254f1c;
        }
    }
    ctx->pc = 0x254F08u;
    // 0x254f08: 0x34424628  ori         $v0, $v0, 0x4628
    ctx->pc = 0x254f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17960);
    // 0x254f0c: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254F0Cu;
    {
        const bool branch_taken_0x254f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x254f0c) {
            ctx->pc = 0x254F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F0Cu;
            // 0x254f10: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254F30u;
            goto label_254f30;
        }
    }
    ctx->pc = 0x254F14u;
    // 0x254f14: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x254F14u;
    {
        const bool branch_taken_0x254f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F14u;
        // 0x254f18: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f14) {
            ctx->pc = 0x255024u;
            goto label_255024;
        }
    }
    ctx->pc = 0x254F1Cu;
label_254f1c:
    // 0x254f1c: 0xa240002b  sb          $zero, 0x2B($s2)
    ctx->pc = 0x254f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x254f20: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x254f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x254f24: 0x965e0008  lhu         $fp, 0x8($s2)
    ctx->pc = 0x254f24u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x254f28: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x254F28u;
    {
        const bool branch_taken_0x254f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F28u;
        // 0x254f2c: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f28) {
            ctx->pc = 0x25501Cu;
            goto label_25501c;
        }
    }
    ctx->pc = 0x254F30u;
label_254f30:
    // 0x254f30: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x254f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x254f34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x254f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x254f38: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x254f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f3c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x254f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x254f40: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x254f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x254f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x254f48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f4c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x254f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x254f50: 0xc08070e  jal         func_201C38
    ctx->pc = 0x254F50u;
    SET_GPR_U32(ctx, 31, 0x254F58u);
    ctx->pc = 0x254F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254F50u;
    // 0x254f54: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x254F50u, 0x254F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F58u;
label_254f58:
    // 0x254f58: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x254f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x254f5c: 0x18c0002f  blez        $a2, . + 4 + (0x2F << 2)
    ctx->pc = 0x254F5Cu;
    {
        const bool branch_taken_0x254f5c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x254F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F5Cu;
        // 0x254f60: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f5c) {
            ctx->pc = 0x25501Cu;
            goto label_25501c;
        }
    }
    ctx->pc = 0x254F64u;
    // 0x254f64: 0x27d50001  addiu       $s5, $fp, 0x1
    ctx->pc = 0x254f64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_254f68:
    // 0x254f68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x254f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x254f6c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x254f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x254f70: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x254f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x254f74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x254f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x254f78: 0x2841818  mult        $v1, $s4, $a0
    ctx->pc = 0x254f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x254f7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x254f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x254f80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x254f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f84: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x254f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x254f88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x254f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x254f8c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x254f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f90: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x254f90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x254f94: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x254f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x254f98: 0x9630000a  lhu         $s0, 0xA($s1)
    ctx->pc = 0x254f98u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x254f9c: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x254f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x254fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x254fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254fa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x254fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x254fa8: 0x96270008  lhu         $a3, 0x8($s1)
    ctx->pc = 0x254fa8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x254fac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254facu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x254fb0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x254fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x254fb4: 0x82220005  lb          $v0, 0x5($s1)
    ctx->pc = 0x254fb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x254fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x254fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254fbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x254fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x254fc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x254fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x254fc4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x254fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x254fc8: 0x82220006  lb          $v0, 0x6($s1)
    ctx->pc = 0x254fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x254fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x254fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254fd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x254fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x254fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x254fd8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x254fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x254fdc: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x254fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x254fe0: 0xa7a70014  sh          $a3, 0x14($sp)
    ctx->pc = 0x254fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x254fe4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x254fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x254fe8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x254fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x254fec: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x254fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x254ff0: 0x92230010  lbu         $v1, 0x10($s1)
    ctx->pc = 0x254ff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254ff4: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x254ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x254ff8: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x254ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x254ffc: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x254ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x255000: 0xc0951a8  jal         func_2546A0
    ctx->pc = 0x255000u;
    SET_GPR_U32(ctx, 31, 0x255008u);
    ctx->pc = 0x255004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255000u;
    // 0x255004: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2546A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2546A0u, 0x255000u, 0x255008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255008u;
label_255008:
    // 0x255008: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x255008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25500c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x25500cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x255010: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x255010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x255014: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x255014u;
    {
        const bool branch_taken_0x255014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255014u;
        // 0x255018: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255014) {
            ctx->pc = 0x254F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254f68;
        }
    }
    ctx->pc = 0x25501Cu;
label_25501c:
    // 0x25501c: 0x8f85a0d0  lw          $a1, -0x5F30($gp)
    ctx->pc = 0x25501cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x255020: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x255020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_255024:
    // 0x255024: 0x24a21ffc  addiu       $v0, $a1, 0x1FFC
    ctx->pc = 0x255024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8188));
    // 0x255028: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x255028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25502c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x25502cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x255030: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x255030u;
    {
        const bool branch_taken_0x255030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255030u;
        // 0x255034: 0x3c020132  lui         $v0, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255030) {
            ctx->pc = 0x255050u;
            goto label_255050;
        }
    }
    ctx->pc = 0x255038u;
    // 0x255038: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x255038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25503c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x25503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x255040: 0x26720008  addiu       $s2, $s3, 0x8
    ctx->pc = 0x255040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x255044: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x255044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x255048: 0x1462ffab  bne         $v1, $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x255048u;
    {
        const bool branch_taken_0x255048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255048u;
        // 0x25504c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255048) {
            ctx->pc = 0x254EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254ef8;
        }
    }
    ctx->pc = 0x255050u;
label_255050:
    // 0x255050: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x255050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x255054: 0x18a0001c  blez        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x255054u;
    {
        const bool branch_taken_0x255054 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x255058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255054u;
        // 0x255058: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255054) {
            ctx->pc = 0x2550C8u;
            goto label_2550c8;
        }
    }
    ctx->pc = 0x25505Cu;
    // 0x25505c: 0x24b1ffff  addiu       $s1, $a1, -0x1
    ctx->pc = 0x25505cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_255060:
    // 0x255060: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x255060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x255064: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x255064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x255068: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x255068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25506c: 0x8f88a264  lw          $t0, -0x5D9C($gp)
    ctx->pc = 0x25506cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x255070: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x255070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x255074: 0x8f89a268  lw          $t1, -0x5D98($gp)
    ctx->pc = 0x255074u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
    // 0x255078: 0x284502a  slt         $t2, $s4, $a0
    ctx->pc = 0x255078u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25507c: 0x8f87a26c  lw          $a3, -0x5D94($gp)
    ctx->pc = 0x25507cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943340)));
    // 0x255080: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x255080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x255084: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x255084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x255088: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x255088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25508c: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x25508cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x255090: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x255090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x255094: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x255094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x255098: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x255098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x25509c: 0xac570028  sw          $s7, 0x28($v0)
    ctx->pc = 0x25509cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 23));
    // 0x2550a0: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x2550a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2550a4: 0xac480020  sw          $t0, 0x20($v0)
    ctx->pc = 0x2550a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 8));
    // 0x2550a8: 0x2e6b821  addu        $s7, $s7, $a2
    ctx->pc = 0x2550a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x2550ac: 0xac490024  sw          $t1, 0x24($v0)
    ctx->pc = 0x2550acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 9));
    // 0x2550b0: 0xaf84a264  sw          $a0, -0x5D9C($gp)
    ctx->pc = 0x2550b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943332), GPR_U32(ctx, 4));
    // 0x2550b4: 0xaf85a268  sw          $a1, -0x5D98($gp)
    ctx->pc = 0x2550b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943336), GPR_U32(ctx, 5));
    // 0x2550b8: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2550B8u;
    {
        const bool branch_taken_0x2550b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2550BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550B8u;
        // 0x2550bc: 0xaf87a26c  sw          $a3, -0x5D94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943340), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550b8) {
            ctx->pc = 0x255060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255060;
        }
    }
    ctx->pc = 0x2550C0u;
    // 0x2550c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2550C0u;
    {
        const bool branch_taken_0x2550c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2550C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550C0u;
        // 0x2550c4: 0x8f84a264  lw          $a0, -0x5D9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550c0) {
            ctx->pc = 0x2550D0u;
            goto label_2550d0;
        }
    }
    ctx->pc = 0x2550C8u;
label_2550c8:
    // 0x2550c8: 0x24b1ffff  addiu       $s1, $a1, -0x1
    ctx->pc = 0x2550c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2550cc: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x2550ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_2550d0:
    // 0x2550d0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2550d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2550d4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2550d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2550d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2550d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2550dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2550dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2550e0: 0x3610fff0  ori         $s0, $s0, 0xFFF0
    ctx->pc = 0x2550e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65520);
    // 0x2550e4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2550e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2550e8: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2550e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2550ec: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2550ECu;
    SET_GPR_U32(ctx, 31, 0x2550F4u);
    ctx->pc = 0x2550F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550ECu;
    // 0x2550f0: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2550ECu, 0x2550F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550F4u;
label_2550f4:
    // 0x2550f4: 0x8f84a268  lw          $a0, -0x5D98($gp)
    ctx->pc = 0x2550f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
    // 0x2550f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2550f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2550fc: 0xaf82a240  sw          $v0, -0x5DC0($gp)
    ctx->pc = 0x2550fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943296), GPR_U32(ctx, 2));
    // 0x255100: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x255100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x255104: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x255104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x255108: 0xc08070e  jal         func_201C38
    ctx->pc = 0x255108u;
    SET_GPR_U32(ctx, 31, 0x255110u);
    ctx->pc = 0x25510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255108u;
    // 0x25510c: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x255108u, 0x255110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255110u;
label_255110:
    // 0x255110: 0x26e40001  addiu       $a0, $s7, 0x1
    ctx->pc = 0x255110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x255114: 0xaf82a244  sw          $v0, -0x5DBC($gp)
    ctx->pc = 0x255114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943300), GPR_U32(ctx, 2));
    // 0x255118: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x255118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25511c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25511cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255120: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x255120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x255124: 0xc08070e  jal         func_201C38
    ctx->pc = 0x255124u;
    SET_GPR_U32(ctx, 31, 0x25512Cu);
    ctx->pc = 0x255128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255124u;
    // 0x255128: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x255124u, 0x25512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25512Cu;
label_25512c:
    // 0x25512c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x25512cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x255130: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x255130u;
    {
        const bool branch_taken_0x255130 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x255134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255130u;
        // 0x255134: 0xaf82a23c  sw          $v0, -0x5DC4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255130) {
            ctx->pc = 0x255164u;
            goto label_255164;
        }
    }
    ctx->pc = 0x255138u;
    // 0x255138: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x255138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25513c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25513cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_255140:
    // 0x255140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255144: 0xc0952f4  jal         func_254BD0
    ctx->pc = 0x255144u;
    SET_GPR_U32(ctx, 31, 0x25514Cu);
    ctx->pc = 0x255148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255144u;
    // 0x255148: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BD0u, 0x255144u, 0x25514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25514Cu;
label_25514c:
    // 0x25514c: 0xc095342  jal         func_254D08
    ctx->pc = 0x25514Cu;
    SET_GPR_U32(ctx, 31, 0x255154u);
    ctx->pc = 0x255150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25514Cu;
    // 0x255150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D08u, 0x25514Cu, 0x255154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255154u;
label_255154:
    // 0x255154: 0xc095362  jal         func_254D88
    ctx->pc = 0x255154u;
    SET_GPR_U32(ctx, 31, 0x25515Cu);
    ctx->pc = 0x255158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255154u;
    // 0x255158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D88u, 0x255154u, 0x25515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25515Cu;
label_25515c:
    // 0x25515c: 0x1680fff8  bnez        $s4, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25515Cu;
    {
        const bool branch_taken_0x25515c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x255160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25515Cu;
        // 0x255160: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25515c) {
            ctx->pc = 0x255140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255140;
        }
    }
    ctx->pc = 0x255164u;
label_255164:
    // 0x255164: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x255164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255168: 0x680001a  bltz        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x255168u;
    {
        const bool branch_taken_0x255168 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x25516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255168u;
        // 0x25516c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255168) {
            ctx->pc = 0x2551D4u;
            goto label_2551d4;
        }
    }
    ctx->pc = 0x255170u;
    // 0x255170: 0x2411002c  addiu       $s1, $zero, 0x2C
    ctx->pc = 0x255170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x255174: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x255174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x255178: 0x768021  addu        $s0, $v1, $s6
    ctx->pc = 0x255178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x25517c: 0x0  nop
    ctx->pc = 0x25517cu;
    // NOP
label_255180:
    // 0x255180: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x255180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x255184: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x255184u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x255188: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x255188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25518c: 0xd11818  mult        $v1, $a2, $s1
    ctx->pc = 0x25518cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x255190: 0x8f82a240  lw          $v0, -0x5DC0($gp)
    ctx->pc = 0x255190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x255194: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x255194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x255198: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x255198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25519c: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x25519cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2551a0: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2551A0u;
    SET_GPR_U32(ctx, 31, 0x2551A8u);
    ctx->pc = 0x2551A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2551A0u;
    // 0x2551a4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2551A0u, 0x2551A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551A8u;
label_2551a8:
    // 0x2551a8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2551a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2551ac: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2551acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2551b0: 0x8f82a244  lw          $v0, -0x5DBC($gp)
    ctx->pc = 0x2551b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x2551b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2551b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2551b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2551b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2551bc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2551bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2551c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2551c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2551c4: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2551C4u;
    SET_GPR_U32(ctx, 31, 0x2551CCu);
    ctx->pc = 0x2551C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2551C4u;
    // 0x2551c8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2551C4u, 0x2551CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551CCu;
label_2551cc:
    // 0x2551cc: 0x681ffec  bgez        $s4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2551CCu;
    {
        const bool branch_taken_0x2551cc = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2551D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551CCu;
        // 0x2551d0: 0x2610ffc4  addiu       $s0, $s0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551cc) {
            ctx->pc = 0x255180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255180;
        }
    }
    ctx->pc = 0x2551D4u;
label_2551d4:
    // 0x2551d4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2551d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2551d8: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2551D8u;
    {
        const bool branch_taken_0x2551d8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551D8u;
        // 0x2551dc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551d8) {
            ctx->pc = 0x255218u;
            goto label_255218;
        }
    }
    ctx->pc = 0x2551E0u;
    // 0x2551e0: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2551e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2551e4: 0x0  nop
    ctx->pc = 0x2551e4u;
    // NOP
label_2551e8:
    // 0x2551e8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2551e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2551ec: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2551ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2551f0: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2551f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2551f4: 0x8f82a23c  lw          $v0, -0x5DC4($gp)
    ctx->pc = 0x2551f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943292)));
    // 0x2551f8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2551f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2551fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2551fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x255200: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x255200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x255204: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x255204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x255208: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x255208u;
    SET_GPR_U32(ctx, 31, 0x255210u);
    ctx->pc = 0x25520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255208u;
    // 0x25520c: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x255208u, 0x255210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255210u;
label_255210:
    // 0x255210: 0x1680fff5  bnez        $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x255210u;
    {
        const bool branch_taken_0x255210 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x255214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255210u;
        // 0x255214: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255210) {
            ctx->pc = 0x2551E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2551e8;
        }
    }
    ctx->pc = 0x255218u;
label_255218:
    // 0x255218: 0x8f85a268  lw          $a1, -0x5D98($gp)
    ctx->pc = 0x255218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
    // 0x25521c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x25521cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_255220:
    // 0x255220: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x255220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x255224: 0x18400192  blez        $v0, . + 4 + (0x192 << 2)
    ctx->pc = 0x255224u;
    {
        const bool branch_taken_0x255224 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x255228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255224u;
        // 0x255228: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255224) {
            ctx->pc = 0x255870u;
            goto label_255870;
        }
    }
    ctx->pc = 0x25522Cu;
    // 0x25522c: 0x8f8ba244  lw          $t3, -0x5DBC($gp)
    ctx->pc = 0x25522cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
label_255230:
    // 0x255230: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x255230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x255234: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x255234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x255238: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x255238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25523c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x255240: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x255240u;
    {
        const bool branch_taken_0x255240 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x255244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255240u;
        // 0x255244: 0x26930001  addiu       $s3, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255240) {
            ctx->pc = 0x255258u;
            goto label_255258;
        }
    }
    ctx->pc = 0x255248u;
    // 0x255248: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x255248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25524c: 0x4430184  bgezl       $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x25524Cu;
    {
        const bool branch_taken_0x25524c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25524c) {
            ctx->pc = 0x255250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25524Cu;
            // 0x255250: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255860u;
            goto label_255860;
        }
    }
    ctx->pc = 0x255254u;
    // 0x255254: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x255254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_255258:
    // 0x255258: 0x265102a  slt         $v0, $s3, $a1
    ctx->pc = 0x255258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25525c: 0x1040017f  beqz        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x25525Cu;
    {
        const bool branch_taken_0x25525c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25525Cu;
        // 0x255260: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25525c) {
            ctx->pc = 0x25585Cu;
            goto label_25585c;
        }
    }
    ctx->pc = 0x255264u;
    // 0x255264: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x255264u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x255268: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x255268u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x25526c: 0x0  nop
    ctx->pc = 0x25526cu;
    // NOP
label_255270:
    // 0x255270: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x255270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x255274: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x255274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x255278: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x255278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25527c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x255280: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x255280u;
    {
        const bool branch_taken_0x255280 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x255280) {
            ctx->pc = 0x255284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255280u;
            // 0x255284: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255298u;
            goto label_255298;
        }
    }
    ctx->pc = 0x255288u;
    // 0x255288: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x255288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25528c: 0x441016d  bgez        $v0, . + 4 + (0x16D << 2)
    ctx->pc = 0x25528Cu;
    {
        const bool branch_taken_0x25528c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x255290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25528Cu;
        // 0x255290: 0x262b0001  addiu       $t3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25528c) {
            ctx->pc = 0x255844u;
            goto label_255844;
        }
    }
    ctx->pc = 0x255294u;
    // 0x255294: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x255294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255298:
    // 0x255298: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x255298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25529c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x25529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2552a0: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x2552a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2552a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2552a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2552a8: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x2552a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2552ac: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2552acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2552b0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2552b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2552b4: 0xc78482b8  lwc1        $f4, -0x7D48($gp)
    ctx->pc = 0x2552b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2552b8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2552b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2552bc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2552bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2552c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2552c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2552c4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2552c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2552c8: 0x0  nop
    ctx->pc = 0x2552c8u;
    // NOP
    // 0x2552cc: 0x4500015c  bc1f        . + 4 + (0x15C << 2)
    ctx->pc = 0x2552CCu;
    {
        const bool branch_taken_0x2552cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2552D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552CCu;
        // 0x2552d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552cc) {
            ctx->pc = 0x255840u;
            goto label_255840;
        }
    }
    ctx->pc = 0x2552D4u;
    // 0x2552d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2552d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552d8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2552D8u;
    SET_GPR_U32(ctx, 31, 0x2552E0u);
    ctx->pc = 0x2552DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552D8u;
    // 0x2552dc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2552D8u, 0x2552E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552E0u;
label_2552e0:
    // 0x2552e0: 0x26a825a0  addiu       $t0, $s5, 0x25A0
    ctx->pc = 0x2552e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 9632));
    // 0x2552e4: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x2552e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2552e8: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x2552e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2552ec: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2552ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2552f0: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x2552f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2552f4: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x2552f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2552f8: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x2552f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x2552fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x255300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255304: 0x268825b0  addiu       $t0, $s4, 0x25B0
    ctx->pc = 0x255304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 9648));
    // 0x255308: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x255308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x25530c: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x25530cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x255310: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x255310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x255314: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x255314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x255318: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x255318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25531c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x25531cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x255320: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x255320u;
    SET_GPR_U32(ctx, 31, 0x255328u);
    ctx->pc = 0x255324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255320u;
    // 0x255324: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x255320u, 0x255328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255328u;
label_255328:
    // 0x255328: 0x26a525a0  addiu       $a1, $s5, 0x25A0
    ctx->pc = 0x255328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 9632));
    // 0x25532c: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x25532cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x255330: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x255330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x255334: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x255334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x255338: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x255338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25533c: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x25533cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x255340: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x255340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x255344: 0x268225b0  addiu       $v0, $s4, 0x25B0
    ctx->pc = 0x255344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 9648));
    // 0x255348: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x255348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x25534c: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x25534cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x255350: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x255350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x255354: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x255354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x255358: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x255358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25535c: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x25535cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x255360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255364: 0x86420014  lh          $v0, 0x14($s2)
    ctx->pc = 0x255364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x255368: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x255368u;
    {
        const bool branch_taken_0x255368 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255368u;
        // 0x25536c: 0x964a0014  lhu         $t2, 0x14($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255368) {
            ctx->pc = 0x2554CCu;
            goto label_2554cc;
        }
    }
    ctx->pc = 0x255370u;
    // 0x255370: 0xc7b10030  lwc1        $f17, 0x30($sp)
    ctx->pc = 0x255370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x255374: 0x262b0001  addiu       $t3, $s1, 0x1
    ctx->pc = 0x255374u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x255378: 0xc7b00034  lwc1        $f16, 0x34($sp)
    ctx->pc = 0x255378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x25537c: 0x26490018  addiu       $t1, $s2, 0x18
    ctx->pc = 0x25537cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x255380: 0xc7b20038  lwc1        $f18, 0x38($sp)
    ctx->pc = 0x255380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x255384: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x255384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x255388: 0xc7ae0010  lwc1        $f14, 0x10($sp)
    ctx->pc = 0x255388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25538c: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x25538cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x255390: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x255390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x255394: 0xc7af0018  lwc1        $f15, 0x18($sp)
    ctx->pc = 0x255394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x255398: 0x96060014  lhu         $a2, 0x14($s0)
    ctx->pc = 0x255398u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25539c: 0xc7ab0040  lwc1        $f11, 0x40($sp)
    ctx->pc = 0x25539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2553a0: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x2553a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2553a4: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x2553a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2553a8: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x2553a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2553ac: 0xc7a90064  lwc1        $f9, 0x64($sp)
    ctx->pc = 0x2553acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2553b0: 0xc7a80068  lwc1        $f8, 0x68($sp)
    ctx->pc = 0x2553b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2553b4: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x2553b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2553b8: 0xc7aa0054  lwc1        $f10, 0x54($sp)
    ctx->pc = 0x2553b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2553bc: 0xc7a70058  lwc1        $f7, 0x58($sp)
    ctx->pc = 0x2553bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2553c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2553c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2553c4: 0x0  nop
    ctx->pc = 0x2553c4u;
    // NOP
label_2553c8:
    // 0x2553c8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2553c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2553cc: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2553ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2553d0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2553d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2553d4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2553d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2553d8: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x2553d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2553dc: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x2553dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2553e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2553e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2553e4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2553e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2553e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2553e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2553ec: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2553ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2553f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2553f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2553f4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2553f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2553f8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2553f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2553fc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2553fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255400: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x255400u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x255404: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x255404u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x255408: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x255408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25540c: 0x46008834  c.lt.s      $f17, $f0
    ctx->pc = 0x25540cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255410: 0x0  nop
    ctx->pc = 0x255410u;
    // NOP
    // 0x255414: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255414u;
    {
        const bool branch_taken_0x255414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255414) {
            ctx->pc = 0x255418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255414u;
            // 0x255418: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255428u;
            goto label_255428;
        }
    }
    ctx->pc = 0x25541Cu;
    // 0x25541c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25541cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x255420: 0x46000446  mov.s       $f17, $f0
    ctx->pc = 0x255420u;
    ctx->f[17] = FPU_MOV_S(ctx->f[0]);
    // 0x255424: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x255424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255428:
    // 0x255428: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x255428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25542c: 0x0  nop
    ctx->pc = 0x25542cu;
    // NOP
    // 0x255430: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255430u;
    {
        const bool branch_taken_0x255430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255430) {
            ctx->pc = 0x255434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255430u;
            // 0x255434: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255444u;
            goto label_255444;
        }
    }
    ctx->pc = 0x255438u;
    // 0x255438: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x255438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x25543c: 0x46000406  mov.s       $f16, $f0
    ctx->pc = 0x25543cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[0]);
    // 0x255440: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x255440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255444:
    // 0x255444: 0x46009034  c.lt.s      $f18, $f0
    ctx->pc = 0x255444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[18], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255448: 0x0  nop
    ctx->pc = 0x255448u;
    // NOP
    // 0x25544c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25544Cu;
    {
        const bool branch_taken_0x25544c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25544c) {
            ctx->pc = 0x255450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25544Cu;
            // 0x255450: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255460u;
            goto label_255460;
        }
    }
    ctx->pc = 0x255454u;
    // 0x255454: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x255454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x255458: 0x46000486  mov.s       $f18, $f0
    ctx->pc = 0x255458u;
    ctx->f[18] = FPU_MOV_S(ctx->f[0]);
    // 0x25545c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255460:
    // 0x255460: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x255460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255464: 0x0  nop
    ctx->pc = 0x255464u;
    // NOP
    // 0x255468: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255468u;
    {
        const bool branch_taken_0x255468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255468) {
            ctx->pc = 0x25546Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255468u;
            // 0x25546c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25547Cu;
            goto label_25547c;
        }
    }
    ctx->pc = 0x255470u;
    // 0x255470: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x255470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x255474: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x255474u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x255478: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x255478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25547c:
    // 0x25547c: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x25547cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255480: 0x0  nop
    ctx->pc = 0x255480u;
    // NOP
    // 0x255484: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255484u;
    {
        const bool branch_taken_0x255484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255484) {
            ctx->pc = 0x255488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255484u;
            // 0x255488: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255498u;
            goto label_255498;
        }
    }
    ctx->pc = 0x25548Cu;
    // 0x25548c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x25548cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x255490: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x255490u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x255494: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x255494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255498:
    // 0x255498: 0x460f0034  c.lt.s      $f0, $f15
    ctx->pc = 0x255498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25549c: 0x0  nop
    ctx->pc = 0x25549cu;
    // NOP
    // 0x2554a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2554A0u;
    {
        const bool branch_taken_0x2554a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2554A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554A0u;
        // 0x2554a4: 0xa1400  sll         $v0, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2554a0) {
            ctx->pc = 0x2554B0u;
            goto label_2554b0;
        }
    }
    ctx->pc = 0x2554A8u;
    // 0x2554a8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2554a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2554ac: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x2554acu;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
label_2554b0:
    // 0x2554b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2554b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2554b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2554b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2554b8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2554b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2554bc: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2554BCu;
    {
        const bool branch_taken_0x2554bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554BCu;
        // 0x2554c0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2554bc) {
            ctx->pc = 0x2553C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2553c8;
        }
    }
    ctx->pc = 0x2554C4u;
    // 0x2554c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2554C4u;
    {
        const bool branch_taken_0x2554c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2554C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554C4u;
        // 0x2554c8: 0xa1400  sll         $v0, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2554c4) {
            ctx->pc = 0x255514u;
            goto label_255514;
        }
    }
    ctx->pc = 0x2554CCu;
label_2554cc:
    // 0x2554cc: 0xc7b10030  lwc1        $f17, 0x30($sp)
    ctx->pc = 0x2554ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2554d0: 0x262b0001  addiu       $t3, $s1, 0x1
    ctx->pc = 0x2554d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2554d4: 0xc7b00034  lwc1        $f16, 0x34($sp)
    ctx->pc = 0x2554d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2554d8: 0xc7b20038  lwc1        $f18, 0x38($sp)
    ctx->pc = 0x2554d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2554dc: 0xc7ae0010  lwc1        $f14, 0x10($sp)
    ctx->pc = 0x2554dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2554e0: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2554e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2554e4: 0xc7af0018  lwc1        $f15, 0x18($sp)
    ctx->pc = 0x2554e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2554e8: 0x96060014  lhu         $a2, 0x14($s0)
    ctx->pc = 0x2554e8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2554ec: 0xc7ab0040  lwc1        $f11, 0x40($sp)
    ctx->pc = 0x2554ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2554f0: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x2554f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2554f4: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x2554f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2554f8: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x2554f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2554fc: 0xc7a90064  lwc1        $f9, 0x64($sp)
    ctx->pc = 0x2554fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x255500: 0xc7a80068  lwc1        $f8, 0x68($sp)
    ctx->pc = 0x255500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x255504: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x255504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x255508: 0xc7aa0054  lwc1        $f10, 0x54($sp)
    ctx->pc = 0x255508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25550c: 0xc7a70058  lwc1        $f7, 0x58($sp)
    ctx->pc = 0x25550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x255510: 0xa1400  sll         $v0, $t2, 16
    ctx->pc = 0x255510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_255514:
    // 0x255514: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x255514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x255518: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x255518u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25551c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x25551cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x255520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255524: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x255524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x255528: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x255528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25552c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x25552cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x255530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255534: 0x0  nop
    ctx->pc = 0x255534u;
    // NOP
    // 0x255538: 0x0  nop
    ctx->pc = 0x255538u;
    // NOP
    // 0x25553c: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x25553cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x255540: 0x0  nop
    ctx->pc = 0x255540u;
    // NOP
    // 0x255544: 0x0  nop
    ctx->pc = 0x255544u;
    // NOP
    // 0x255548: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x255548u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x25554c: 0x0  nop
    ctx->pc = 0x25554cu;
    // NOP
    // 0x255550: 0x0  nop
    ctx->pc = 0x255550u;
    // NOP
    // 0x255554: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x255554u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x255558: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x255558u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25555c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x25555cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x255560: 0x1840004b  blez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x255560u;
    {
        const bool branch_taken_0x255560 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x255564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255560u;
        // 0x255564: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255560) {
            ctx->pc = 0x255690u;
            goto label_255690;
        }
    }
    ctx->pc = 0x255568u;
    // 0x255568: 0x46001d46  mov.s       $f21, $f3
    ctx->pc = 0x255568u;
    ctx->f[21] = FPU_MOV_S(ctx->f[3]);
    // 0x25556c: 0x460014c6  mov.s       $f19, $f2
    ctx->pc = 0x25556cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[2]);
    // 0x255570: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x255570u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x255574: 0x26090018  addiu       $t1, $s0, 0x18
    ctx->pc = 0x255574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x255578: 0x2608001c  addiu       $t0, $s0, 0x1C
    ctx->pc = 0x255578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x25557c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25557Cu;
    {
        const bool branch_taken_0x25557c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25557Cu;
        // 0x255580: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25557c) {
            ctx->pc = 0x255590u;
            goto label_255590;
        }
    }
    ctx->pc = 0x255584u;
    // 0x255584: 0x0  nop
    ctx->pc = 0x255584u;
    // NOP
label_255588:
    // 0x255588: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x255588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25558c: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x25558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_255590:
    // 0x255590: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x255590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x255594: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x255594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x255598: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x255598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x25559c: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x25559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2555a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2555a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2555a4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2555a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2555a8: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x2555a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x2555ac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2555acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2555b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2555b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2555b4: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x2555b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2555b8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2555b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2555bc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2555bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2555c0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2555c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2555c4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2555c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2555c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2555c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2555cc: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2555ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2555d0: 0x0  nop
    ctx->pc = 0x2555d0u;
    // NOP
    // 0x2555d4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2555D4u;
    {
        const bool branch_taken_0x2555d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2555d4) {
            ctx->pc = 0x2555D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2555D4u;
            // 0x2555d8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2555E8u;
            goto label_2555e8;
        }
    }
    ctx->pc = 0x2555DCu;
    // 0x2555dc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2555dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2555e0: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2555e0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2555e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2555e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2555e8:
    // 0x2555e8: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x2555e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2555ec: 0x0  nop
    ctx->pc = 0x2555ecu;
    // NOP
    // 0x2555f0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2555F0u;
    {
        const bool branch_taken_0x2555f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2555f0) {
            ctx->pc = 0x2555F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2555F0u;
            // 0x2555f4: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255604u;
            goto label_255604;
        }
    }
    ctx->pc = 0x2555F8u;
    // 0x2555f8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2555f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2555fc: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2555fcu;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x255600: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x255600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255604:
    // 0x255604: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x255604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255608: 0x0  nop
    ctx->pc = 0x255608u;
    // NOP
    // 0x25560c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25560Cu;
    {
        const bool branch_taken_0x25560c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25560c) {
            ctx->pc = 0x255610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25560Cu;
            // 0x255610: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255620u;
            goto label_255620;
        }
    }
    ctx->pc = 0x255614u;
    // 0x255614: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x255614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x255618: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x255618u;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
    // 0x25561c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255620:
    // 0x255620: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x255620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255624: 0x0  nop
    ctx->pc = 0x255624u;
    // NOP
    // 0x255628: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255628u;
    {
        const bool branch_taken_0x255628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255628) {
            ctx->pc = 0x25562Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255628u;
            // 0x25562c: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25563Cu;
            goto label_25563c;
        }
    }
    ctx->pc = 0x255630u;
    // 0x255630: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x255630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x255634: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x255634u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x255638: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x255638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25563c:
    // 0x25563c: 0x460a0834  c.lt.s      $f1, $f10
    ctx->pc = 0x25563cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255640: 0x0  nop
    ctx->pc = 0x255640u;
    // NOP
    // 0x255644: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255644u;
    {
        const bool branch_taken_0x255644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255644) {
            ctx->pc = 0x255648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255644u;
            // 0x255648: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255658u;
            goto label_255658;
        }
    }
    ctx->pc = 0x25564Cu;
    // 0x25564c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x25564cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x255650: 0x46000a86  mov.s       $f10, $f1
    ctx->pc = 0x255650u;
    ctx->f[10] = FPU_MOV_S(ctx->f[1]);
    // 0x255654: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x255654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255658:
    // 0x255658: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x255658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25565c: 0x0  nop
    ctx->pc = 0x25565cu;
    // NOP
    // 0x255660: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x255660u;
    {
        const bool branch_taken_0x255660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255660u;
        // 0x255664: 0x61400  sll         $v0, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255660) {
            ctx->pc = 0x255670u;
            goto label_255670;
        }
    }
    ctx->pc = 0x255668u;
    // 0x255668: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x255668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25566c: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x25566cu;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
label_255670:
    // 0x255670: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x255670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x255674: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x255674u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x255678: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x255678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25567c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x25567Cu;
    {
        const bool branch_taken_0x25567c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25567Cu;
        // 0x255680: 0xc7ab0040  lwc1        $f11, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25567c) {
            ctx->pc = 0x255588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255588;
        }
    }
    ctx->pc = 0x255684u;
    // 0x255684: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x255684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x255688: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x255688u;
    {
        const bool branch_taken_0x255688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255688u;
        // 0x25568c: 0xc7ac0048  lwc1        $f12, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255688) {
            ctx->pc = 0x25569Cu;
            goto label_25569c;
        }
    }
    ctx->pc = 0x255690u;
label_255690:
    // 0x255690: 0x46001d46  mov.s       $f21, $f3
    ctx->pc = 0x255690u;
    ctx->f[21] = FPU_MOV_S(ctx->f[3]);
    // 0x255694: 0x460014c6  mov.s       $f19, $f2
    ctx->pc = 0x255694u;
    ctx->f[19] = FPU_MOV_S(ctx->f[2]);
    // 0x255698: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x255698u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_25569c:
    // 0x25569c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x25569cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2556a0: 0x460d5281  sub.s       $f10, $f10, $f13
    ctx->pc = 0x2556a0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[13]);
    // 0x2556a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2556a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2556a8: 0x460e3181  sub.s       $f6, $f6, $f14
    ctx->pc = 0x2556a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[14]);
    // 0x2556ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2556acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2556b0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2556b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2556b4: 0xc78d82bc  lwc1        $f13, -0x7D44($gp)
    ctx->pc = 0x2556b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2556b8: 0x46112941  sub.s       $f5, $f5, $f17
    ctx->pc = 0x2556b8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[17]);
    // 0x2556bc: 0xe7aa0084  swc1        $f10, 0x84($sp)
    ctx->pc = 0x2556bcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2556c0: 0x46104a41  sub.s       $f9, $f9, $f16
    ctx->pc = 0x2556c0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[16]);
    // 0x2556c4: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x2556c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2556c8: 0x0  nop
    ctx->pc = 0x2556c8u;
    // NOP
    // 0x2556cc: 0x0  nop
    ctx->pc = 0x2556ccu;
    // NOP
    // 0x2556d0: 0x46035883  div.s       $f2, $f11, $f3
    ctx->pc = 0x2556d0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[11] * 0.0f); } else ctx->f[2] = ctx->f[11] / ctx->f[3];
    // 0x2556d4: 0x0  nop
    ctx->pc = 0x2556d4u;
    // NOP
    // 0x2556d8: 0x0  nop
    ctx->pc = 0x2556d8u;
    // NOP
    // 0x2556dc: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x2556dcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[3];
    // 0x2556e0: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x2556e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2556e4: 0x0  nop
    ctx->pc = 0x2556e4u;
    // NOP
    // 0x2556e8: 0x0  nop
    ctx->pc = 0x2556e8u;
    // NOP
    // 0x2556ec: 0x460360c3  div.s       $f3, $f12, $f3
    ctx->pc = 0x2556ecu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[3] = ctx->f[12] / ctx->f[3];
    // 0x2556f0: 0xe7a90094  swc1        $f9, 0x94($sp)
    ctx->pc = 0x2556f0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2556f4: 0x460f39c1  sub.s       $f7, $f7, $f15
    ctx->pc = 0x2556f4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
    // 0x2556f8: 0x46124201  sub.s       $f8, $f8, $f18
    ctx->pc = 0x2556f8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[18]);
    // 0x2556fc: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x2556fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x255700: 0x46151001  sub.s       $f0, $f2, $f21
    ctx->pc = 0x255700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x255704: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x255704u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x255708: 0x46132041  sub.s       $f1, $f4, $f19
    ctx->pc = 0x255708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[19]);
    // 0x25570c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x25570cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x255710: 0x46141881  sub.s       $f2, $f3, $f20
    ctx->pc = 0x255710u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x255714: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x255714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x255718: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x255718u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25571c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x25571cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x255720: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x255720u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x255724: 0xe7a70088  swc1        $f7, 0x88($sp)
    ctx->pc = 0x255724u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x255728: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x255728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x25572c: 0xe7a80098  swc1        $f8, 0x98($sp)
    ctx->pc = 0x25572cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x255730: 0x460a5282  mul.s       $f10, $f10, $f10
    ctx->pc = 0x255730u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x255734: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x255734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x255738: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x255738u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x25573c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x25573cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x255740: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x255740u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x255744: 0x46094a42  mul.s       $f9, $f9, $f9
    ctx->pc = 0x255744u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x255748: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x255748u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x25574c: 0x460a3180  add.s       $f6, $f6, $f10
    ctx->pc = 0x25574cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x255750: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x255750u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x255754: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x255754u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x255758: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x255758u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x25575c: 0x460d2036  c.le.s      $f4, $f13
    ctx->pc = 0x25575cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255760: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x255760u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x255764: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x255764u;
    {
        const bool branch_taken_0x255764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255764u;
        // 0x255768: 0x46082940  add.s       $f5, $f5, $f8 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255764) {
            ctx->pc = 0x255838u;
            goto label_255838;
        }
    }
    ctx->pc = 0x25576Cu;
    // 0x25576c: 0x460d3036  c.le.s      $f6, $f13
    ctx->pc = 0x25576cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255770: 0x0  nop
    ctx->pc = 0x255770u;
    // NOP
    // 0x255774: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x255774u;
    {
        const bool branch_taken_0x255774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255774u;
        // 0x255778: 0x8f85a268  lw          $a1, -0x5D98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255774) {
            ctx->pc = 0x255844u;
            goto label_255844;
        }
    }
    ctx->pc = 0x25577Cu;
    // 0x25577c: 0x460d2836  c.le.s      $f5, $f13
    ctx->pc = 0x25577cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255780: 0x0  nop
    ctx->pc = 0x255780u;
    // NOP
    // 0x255784: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x255784u;
    {
        const bool branch_taken_0x255784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255784u;
        // 0x255788: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255784) {
            ctx->pc = 0x255848u;
            goto label_255848;
        }
    }
    ctx->pc = 0x25578Cu;
    // 0x25578c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x255790: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x255790u;
    {
        const bool branch_taken_0x255790 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x255794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255790u;
        // 0x255794: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255790) {
            ctx->pc = 0x25579Cu;
            goto label_25579c;
        }
    }
    ctx->pc = 0x255798u;
    // 0x255798: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x255798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25579c:
    // 0x25579c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2557a0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2557A0u;
    {
        const bool branch_taken_0x2557a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2557a0) {
            ctx->pc = 0x2557A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2557A0u;
            // 0x2557a4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2557A8u;
            goto label_2557a8;
        }
    }
    ctx->pc = 0x2557A8u;
label_2557a8:
    // 0x2557a8: 0x4830002  bgezl       $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2557A8u;
    {
        const bool branch_taken_0x2557a8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2557a8) {
            ctx->pc = 0x2557ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2557A8u;
            // 0x2557ac: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2557B4u;
            goto label_2557b4;
        }
    }
    ctx->pc = 0x2557B0u;
    // 0x2557b0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2557b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2557b4:
    // 0x2557b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2557b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2557b8: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2557B8u;
    {
        const bool branch_taken_0x2557b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2557b8) {
            ctx->pc = 0x2557BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2557B8u;
            // 0x2557bc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2557C4u;
            goto label_2557c4;
        }
    }
    ctx->pc = 0x2557C0u;
    // 0x2557c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2557c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2557c4:
    // 0x2557c4: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x2557c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2557c8: 0x1880001a  blez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2557C8u;
    {
        const bool branch_taken_0x2557c8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2557CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557C8u;
        // 0x2557cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557c8) {
            ctx->pc = 0x255834u;
            goto label_255834;
        }
    }
    ctx->pc = 0x2557D0u;
    // 0x2557d0: 0x8f8aa240  lw          $t2, -0x5DC0($gp)
    ctx->pc = 0x2557d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x2557d4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2557d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2557d8:
    // 0x2557d8: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x2557d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2557dc: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x2557dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2557e0: 0x8c470030  lw          $a3, 0x30($v0)
    ctx->pc = 0x2557e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2557e4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2557e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2557e8: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2557E8u;
    {
        const bool branch_taken_0x2557e8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2557ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557E8u;
        // 0x2557ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557e8) {
            ctx->pc = 0x255820u;
            goto label_255820;
        }
    }
    ctx->pc = 0x2557F0u;
    // 0x2557f0: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x2557f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2557f4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2557f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2557f8:
    // 0x2557f8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2557f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2557fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2557fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x255800: 0x506b0001  beql        $v1, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x255800u;
    {
        const bool branch_taken_0x255800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x255800) {
            ctx->pc = 0x255804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255800u;
            // 0x255804: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255808u;
            goto label_255808;
        }
    }
    ctx->pc = 0x255808u;
label_255808:
    // 0x255808: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x255808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25580c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x25580cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x255810: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x255810u;
    {
        const bool branch_taken_0x255810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255810u;
        // 0x255814: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255810) {
            ctx->pc = 0x2557F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2557f8;
        }
    }
    ctx->pc = 0x255818u;
    // 0x255818: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x255818u;
    {
        const bool branch_taken_0x255818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255818u;
        // 0x25581c: 0x8f84a264  lw          $a0, -0x5D9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255818) {
            ctx->pc = 0x255824u;
            goto label_255824;
        }
    }
    ctx->pc = 0x255820u;
label_255820:
    // 0x255820: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x255820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_255824:
    // 0x255824: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x255824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255828: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x255828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25582c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x25582Cu;
    {
        const bool branch_taken_0x25582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25582Cu;
        // 0x255830: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25582c) {
            ctx->pc = 0x2557D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2557d8;
        }
    }
    ctx->pc = 0x255834u;
label_255834:
    // 0x255834: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x255834u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255838:
    // 0x255838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x255838u;
    {
        const bool branch_taken_0x255838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255838u;
        // 0x25583c: 0x8f85a268  lw          $a1, -0x5D98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255838) {
            ctx->pc = 0x255844u;
            goto label_255844;
        }
    }
    ctx->pc = 0x255840u;
label_255840:
    // 0x255840: 0x262b0001  addiu       $t3, $s1, 0x1
    ctx->pc = 0x255840u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_255844:
    // 0x255844: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x255844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_255848:
    // 0x255848: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x255848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25584c: 0x1440fe88  bnez        $v0, . + 4 + (-0x178 << 2)
    ctx->pc = 0x25584Cu;
    {
        const bool branch_taken_0x25584c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25584Cu;
        // 0x255850: 0x8f8ba244  lw          $t3, -0x5DBC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25584c) {
            ctx->pc = 0x255270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255270;
        }
    }
    ctx->pc = 0x255854u;
    // 0x255854: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x255854u;
    {
        const bool branch_taken_0x255854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255854u;
        // 0x255858: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255854) {
            ctx->pc = 0x255860u;
            goto label_255860;
        }
    }
    ctx->pc = 0x25585Cu;
label_25585c:
    // 0x25585c: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x25585cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_255860:
    // 0x255860: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x255860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x255864: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x255864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x255868: 0x1440fe71  bnez        $v0, . + 4 + (-0x18F << 2)
    ctx->pc = 0x255868u;
    {
        const bool branch_taken_0x255868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255868u;
        // 0x25586c: 0x8f8ba244  lw          $t3, -0x5DBC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255868) {
            ctx->pc = 0x255230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255230;
        }
    }
    ctx->pc = 0x255870u;
label_255870:
    // 0x255870: 0x52e0fe6b  beql        $s7, $zero, . + 4 + (-0x195 << 2)
    ctx->pc = 0x255870u;
    {
        const bool branch_taken_0x255870 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x255870) {
            ctx->pc = 0x255874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255870u;
            // 0x255874: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255220;
        }
    }
    ctx->pc = 0x255878u;
    // 0x255878: 0x18a0003b  blez        $a1, . + 4 + (0x3B << 2)
    ctx->pc = 0x255878u;
    {
        const bool branch_taken_0x255878 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x25587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255878u;
        // 0x25587c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255878) {
            ctx->pc = 0x255968u;
            goto label_255968;
        }
    }
    ctx->pc = 0x255880u;
    // 0x255880: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x255880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x255884: 0x8f8ba244  lw          $t3, -0x5DBC($gp)
    ctx->pc = 0x255884u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x255888: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x255888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25588c: 0x0  nop
    ctx->pc = 0x25588cu;
    // NOP
label_255890:
    // 0x255890: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x255890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x255894: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x255894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x255898: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25589c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25589Cu;
    {
        const bool branch_taken_0x25589c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25589c) {
            ctx->pc = 0x2558B0u;
            goto label_2558b0;
        }
    }
    ctx->pc = 0x2558A4u;
    // 0x2558a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2558a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2558a8: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2558A8u;
    {
        const bool branch_taken_0x2558a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2558ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558A8u;
        // 0x2558ac: 0x26930001  addiu       $s3, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558a8) {
            ctx->pc = 0x255950u;
            goto label_255950;
        }
    }
    ctx->pc = 0x2558B0u;
label_2558b0:
    // 0x2558b0: 0x18800026  blez        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2558B0u;
    {
        const bool branch_taken_0x2558b0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2558B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558B0u;
        // 0x2558b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558b0) {
            ctx->pc = 0x25594Cu;
            goto label_25594c;
        }
    }
    ctx->pc = 0x2558B8u;
    // 0x2558b8: 0x8f8aa240  lw          $t2, -0x5DC0($gp)
    ctx->pc = 0x2558b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x2558bc: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x2558bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2558c0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2558c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2558c4: 0x0  nop
    ctx->pc = 0x2558c4u;
    // NOP
label_2558c8:
    // 0x2558c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2558c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558cc: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x2558ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2558d0: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x2558d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2558d4: 0x8c490030  lw          $t1, 0x30($v0)
    ctx->pc = 0x2558d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2558d8: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x2558d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2558dc: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x2558dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2558e0:
    // 0x2558e0: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2558e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2558e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2558E4u;
    {
        const bool branch_taken_0x2558e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558E4u;
        // 0x2558e8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558e4) {
            ctx->pc = 0x255934u;
            goto label_255934;
        }
    }
    ctx->pc = 0x2558ECu;
    // 0x2558ec: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x2558ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2558f0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2558f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2558f4: 0x5473fffa  bnel        $v1, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2558F4u;
    {
        const bool branch_taken_0x2558f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2558f4) {
            ctx->pc = 0x2558F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2558F4u;
            // 0x2558f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2558E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2558e0;
        }
    }
    ctx->pc = 0x2558FCu;
    // 0x2558fc: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x2558fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x255900: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x255900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x255904: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x255904u;
    {
        const bool branch_taken_0x255904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255904u;
        // 0x255908: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255904) {
            ctx->pc = 0x25592Cu;
            goto label_25592c;
        }
    }
    ctx->pc = 0x25590Cu;
    // 0x25590c: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x25590cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_255910:
    // 0x255910: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x255910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x255914: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x255914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x255918: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x255918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x25591c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25591cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x255920: 0x0  nop
    ctx->pc = 0x255920u;
    // NOP
    // 0x255924: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x255924u;
    {
        const bool branch_taken_0x255924 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x255924) {
            ctx->pc = 0x255910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255910;
        }
    }
    ctx->pc = 0x25592Cu;
label_25592c:
    // 0x25592c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x25592cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x255930: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x255930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_255934:
    // 0x255934: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x255934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255938: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x255938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25593c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x25593Cu;
    {
        const bool branch_taken_0x25593c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25593Cu;
        // 0x255940: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25593c) {
            ctx->pc = 0x2558C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2558c8;
        }
    }
    ctx->pc = 0x255944u;
    // 0x255944: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x255944u;
    {
        const bool branch_taken_0x255944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255944u;
        // 0x255948: 0x8f85a268  lw          $a1, -0x5D98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255944) {
            ctx->pc = 0x255950u;
            goto label_255950;
        }
    }
    ctx->pc = 0x25594Cu;
label_25594c:
    // 0x25594c: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x25594cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_255950:
    // 0x255950: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x255950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255954: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x255954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x255958: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x255958u;
    {
        const bool branch_taken_0x255958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255958u;
        // 0x25595c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255958) {
            ctx->pc = 0x255890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255890;
        }
    }
    ctx->pc = 0x255960u;
    // 0x255960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255960u;
    {
        const bool branch_taken_0x255960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255960u;
        // 0x255964: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255960) {
            ctx->pc = 0x255970u;
            goto label_255970;
        }
    }
    ctx->pc = 0x255968u;
label_255968:
    // 0x255968: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x255968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x25596c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25596cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_255970:
    // 0x255970: 0x24130030  addiu       $s3, $zero, 0x30
    ctx->pc = 0x255970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x255974: 0x930018  mult        $zero, $a0, $s3
    ctx->pc = 0x255974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x255978: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x255978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x25597c: 0x24527330  addiu       $s2, $v0, 0x7330
    ctx->pc = 0x25597cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x255980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255984: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x255984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x255988: 0x2411fff0  addiu       $s1, $zero, -0x10
    ctx->pc = 0x255988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x25598c: 0x2012  mflo        $a0
    ctx->pc = 0x25598cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x255990: 0xc08070e  jal         func_201C38
    ctx->pc = 0x255990u;
    SET_GPR_U32(ctx, 31, 0x255998u);
    ctx->pc = 0x255994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255990u;
    // 0x255994: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x255990u, 0x255998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255998u;
label_255998:
    // 0x255998: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x255998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x25599c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25599cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2559a0: 0xaf82a234  sw          $v0, -0x5DCC($gp)
    ctx->pc = 0x2559a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943284), GPR_U32(ctx, 2));
    // 0x2559a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2559a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2559a8: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x2559a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2559ac: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2559acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2559b0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2559B0u;
    SET_GPR_U32(ctx, 31, 0x2559B8u);
    ctx->pc = 0x2559B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559B0u;
    // 0x2559b4: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2559B0u, 0x2559B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559B8u;
label_2559b8:
    // 0x2559b8: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x2559b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2559bc: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2559bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2559c0: 0xac627330  sw          $v0, 0x7330($v1)
    ctx->pc = 0x2559c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x357330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x357330u, _value); } while (0);
    // 0x2559c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2559c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2559c8: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x2559c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2559cc: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2559ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2559d0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2559d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2559d4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2559D4u;
    SET_GPR_U32(ctx, 31, 0x2559DCu);
    ctx->pc = 0x2559D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559D4u;
    // 0x2559d8: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2559D4u, 0x2559DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559DCu;
label_2559dc:
    // 0x2559dc: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x2559dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2559e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2559e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2559e4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2559e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2559e8: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x2559e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2559ec: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2559ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2559f0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2559f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2559f4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2559F4u;
    SET_GPR_U32(ctx, 31, 0x2559FCu);
    ctx->pc = 0x2559F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559F4u;
    // 0x2559f8: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2559F4u, 0x2559FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559FCu;
label_2559fc:
    // 0x2559fc: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x2559fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x255a00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255a04: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x255a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x255a08: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x255a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x255a0c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x255a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x255a10: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x255a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x255a14: 0xc08070e  jal         func_201C38
    ctx->pc = 0x255A14u;
    SET_GPR_U32(ctx, 31, 0x255A1Cu);
    ctx->pc = 0x255A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A14u;
    // 0x255a18: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x255A14u, 0x255A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A1Cu;
label_255a1c:
    // 0x255a1c: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x255a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x255a20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255a24: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x255a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x255a28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x255a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x255a2c: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x255a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x255a30: 0xc08070e  jal         func_201C38
    ctx->pc = 0x255A30u;
    SET_GPR_U32(ctx, 31, 0x255A38u);
    ctx->pc = 0x255A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A30u;
    // 0x255a34: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x255A30u, 0x255A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A38u;
label_255a38:
    // 0x255a38: 0x8f84a268  lw          $a0, -0x5D98($gp)
    ctx->pc = 0x255a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
    // 0x255a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255a40: 0xaf82b894  sw          $v0, -0x476C($gp)
    ctx->pc = 0x255a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949012), GPR_U32(ctx, 2));
    // 0x255a44: 0x931018  mult        $v0, $a0, $s3
    ctx->pc = 0x255a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x255a48: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x255a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x255a4c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x255a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x255a50: 0xc08070e  jal         func_201C38
    ctx->pc = 0x255A50u;
    SET_GPR_U32(ctx, 31, 0x255A58u);
    ctx->pc = 0x255A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A50u;
    // 0x255a54: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x255A50u, 0x255A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A58u;
label_255a58:
    // 0x255a58: 0xc09575c  jal         func_255D70
    ctx->pc = 0x255A58u;
    SET_GPR_U32(ctx, 31, 0x255A60u);
    ctx->pc = 0x255A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A58u;
    // 0x255a5c: 0xaf82a230  sw          $v0, -0x5DD0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943280), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255D70u, 0x255A58u, 0x255A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A60u;
label_255a60:
    // 0x255a60: 0xc095828  jal         func_2560A0
    ctx->pc = 0x255A60u;
    SET_GPR_U32(ctx, 31, 0x255A68u);
    ctx->pc = 0x2560A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2560A0u, 0x255A60u, 0x255A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A68u;
label_255a68:
    // 0x255a68: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x255a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x255a6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255a70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x255a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x255a74: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x255a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x255a78: 0xc08070e  jal         func_201C38
    ctx->pc = 0x255A78u;
    SET_GPR_U32(ctx, 31, 0x255A80u);
    ctx->pc = 0x255A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A78u;
    // 0x255a7c: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x255A78u, 0x255A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A80u;
label_255a80:
    // 0x255a80: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x255a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x255a84: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x255a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x255a88: 0xaf82a270  sw          $v0, -0x5D90($gp)
    ctx->pc = 0x255a88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943344), GPR_U32(ctx, 2));
    // 0x255a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255a90: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x255a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x255a94: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x255a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x255a98: 0xc08070e  jal         func_201C38
    ctx->pc = 0x255A98u;
    SET_GPR_U32(ctx, 31, 0x255AA0u);
    ctx->pc = 0x255A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A98u;
    // 0x255a9c: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x255A98u, 0x255AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AA0u;
label_255aa0:
    // 0x255aa0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x255aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x255aa4: 0x1860009f  blez        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x255AA4u;
    {
        const bool branch_taken_0x255aa4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x255AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AA4u;
        // 0x255aa8: 0xaf82b334  sw          $v0, -0x4CCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255aa4) {
            ctx->pc = 0x255D24u;
            goto label_255d24;
        }
    }
    ctx->pc = 0x255AACu;
    // 0x255aac: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x255aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_255ab0:
    // 0x255ab0: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x255ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x255ab4: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x255ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x255ab8: 0x8c510020  lw          $s1, 0x20($v0)
    ctx->pc = 0x255ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x255abc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x255abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x255ac0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x255ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x255ac4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x255ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x255ac8: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x255AC8u;
    {
        const bool branch_taken_0x255ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AC8u;
        // 0x255acc: 0x8f86b334  lw          $a2, -0x4CCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ac8) {
            ctx->pc = 0x255D0Cu;
            goto label_255d0c;
        }
    }
    ctx->pc = 0x255AD0u;
    // 0x255ad0: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x255ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x255ad4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x255ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_255ad8:
    // 0x255ad8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x255ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x255adc: 0x2822818  mult        $a1, $s4, $v0
    ctx->pc = 0x255adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x255ae0: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x255ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x255ae4: 0xb62021  addu        $a0, $a1, $s6
    ctx->pc = 0x255ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x255ae8: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x255ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x255aec: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x255aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x255af0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x255AF0u;
    {
        const bool branch_taken_0x255af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AF0u;
        // 0x255af4: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255af0) {
            ctx->pc = 0x255B38u;
            goto label_255b38;
        }
    }
    ctx->pc = 0x255AF8u;
    // 0x255af8: 0x3c02ff10  lui         $v0, 0xFF10
    ctx->pc = 0x255af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65296 << 16));
    // 0x255afc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x255afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x255b00: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x255b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x255b04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x255b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x255b08: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x255b08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x255b0c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x255b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x255b10: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x255b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x255b14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x255b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x255b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255b1c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x255b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x255b20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255b28: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x255b28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x255b2c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x255b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x255b30: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x255B30u;
    {
        const bool branch_taken_0x255b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B30u;
        // 0x255b34: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b30) {
            ctx->pc = 0x255CDCu;
            goto label_255cdc;
        }
    }
    ctx->pc = 0x255B38u;
label_255b38:
    // 0x255b38: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x255b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x255b3c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x255B3Cu;
    {
        const bool branch_taken_0x255b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B3Cu;
        // 0x255b40: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b3c) {
            ctx->pc = 0x255C94u;
            goto label_255c94;
        }
    }
    ctx->pc = 0x255B44u;
    // 0x255b44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x255b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x255b48: 0x244225c0  addiu       $v0, $v0, 0x25C0
    ctx->pc = 0x255b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9664));
    // 0x255b4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255b50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x255b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255b54: 0x800008  jr          $a0
    ctx->pc = 0x255B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x255B5Cu: goto label_255b5c;
            case 0x255B74u: goto label_255b74;
            case 0x255B88u: goto label_255b88;
            case 0x255B9Cu: goto label_255b9c;
            case 0x255BB8u: goto label_255bb8;
            case 0x255BDCu: goto label_255bdc;
            case 0x255C00u: goto label_255c00;
            case 0x255C0Cu: goto label_255c0c;
            case 0x255C30u: goto label_255c30;
            case 0x255C54u: goto label_255c54;
            case 0x255C94u: goto label_255c94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255B54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255B5Cu;
label_255b5c:
    // 0x255b5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x255b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x255b60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255b64: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x255b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x255b68: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x255b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x255b6c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x255B6Cu;
    {
        const bool branch_taken_0x255b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B6Cu;
        // 0x255b70: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b6c) {
            ctx->pc = 0x255CB0u;
            goto label_255cb0;
        }
    }
    ctx->pc = 0x255B74u;
label_255b74:
    // 0x255b74: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x255b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x255b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255b7c: 0xc78182c0  lwc1        $f1, -0x7D40($gp)
    ctx->pc = 0x255b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255b80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x255B80u;
    {
        const bool branch_taken_0x255b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B80u;
        // 0x255b84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b80) {
            ctx->pc = 0x255BA8u;
            goto label_255ba8;
        }
    }
    ctx->pc = 0x255B88u;
label_255b88:
    // 0x255b88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255b8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255b90: 0xc78182c4  lwc1        $f1, -0x7D3C($gp)
    ctx->pc = 0x255b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255b94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x255B94u;
    {
        const bool branch_taken_0x255b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B94u;
        // 0x255b98: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b94) {
            ctx->pc = 0x255BA8u;
            goto label_255ba8;
        }
    }
    ctx->pc = 0x255B9Cu;
label_255b9c:
    // 0x255b9c: 0xc78082c8  lwc1        $f0, -0x7D38($gp)
    ctx->pc = 0x255b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255ba0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x255ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255ba4: 0xc78182cc  lwc1        $f1, -0x7D34($gp)
    ctx->pc = 0x255ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255ba8:
    // 0x255ba8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x255ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x255bac: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x255bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x255bb0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x255BB0u;
    {
        const bool branch_taken_0x255bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BB0u;
        // 0x255bb4: 0xe4a10008  swc1        $f1, 0x8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bb0) {
            ctx->pc = 0x255CB0u;
            goto label_255cb0;
        }
    }
    ctx->pc = 0x255BB8u;
label_255bb8:
    // 0x255bb8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x255bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x255bbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x255bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255bc0: 0x2822018  mult        $a0, $s4, $v0
    ctx->pc = 0x255bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x255bc4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x255bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x255bc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255bcc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x255bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x255bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255bd4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x255BD4u;
    {
        const bool branch_taken_0x255bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BD4u;
        // 0x255bd8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bd4) {
            ctx->pc = 0x255C70u;
            goto label_255c70;
        }
    }
    ctx->pc = 0x255BDCu;
label_255bdc:
    // 0x255bdc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x255bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x255be0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x255be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255be4: 0x2822018  mult        $a0, $s4, $v0
    ctx->pc = 0x255be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x255be8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x255be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x255bec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255bf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255bf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255bf8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x255BF8u;
    {
        const bool branch_taken_0x255bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BF8u;
        // 0x255bfc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bf8) {
            ctx->pc = 0x255C70u;
            goto label_255c70;
        }
    }
    ctx->pc = 0x255C00u;
label_255c00:
    // 0x255c00: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x255c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x255c04: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x255C04u;
    {
        const bool branch_taken_0x255c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C04u;
        // 0x255c08: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c04) {
            ctx->pc = 0x255C5Cu;
            goto label_255c5c;
        }
    }
    ctx->pc = 0x255C0Cu;
label_255c0c:
    // 0x255c0c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x255c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x255c10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x255c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255c14: 0x2822018  mult        $a0, $s4, $v0
    ctx->pc = 0x255c14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x255c18: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x255c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x255c1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255c20: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x255c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x255c24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255c28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x255C28u;
    {
        const bool branch_taken_0x255c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C28u;
        // 0x255c2c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c28) {
            ctx->pc = 0x255C70u;
            goto label_255c70;
        }
    }
    ctx->pc = 0x255C30u;
label_255c30:
    // 0x255c30: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x255c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x255c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x255c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255c38: 0x2822018  mult        $a0, $s4, $v0
    ctx->pc = 0x255c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x255c3c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x255c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x255c40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255c44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255c48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255c4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x255C4Cu;
    {
        const bool branch_taken_0x255c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C4Cu;
        // 0x255c50: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c4c) {
            ctx->pc = 0x255C70u;
            goto label_255c70;
        }
    }
    ctx->pc = 0x255C54u;
label_255c54:
    // 0x255c54: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x255c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x255c58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x255c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_255c5c:
    // 0x255c5c: 0x2822018  mult        $a0, $s4, $v0
    ctx->pc = 0x255c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x255c60: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x255c60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x255c64: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x255c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x255c68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255c6c: 0xc78182d0  lwc1        $f1, -0x7D30($gp)
    ctx->pc = 0x255c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255c70:
    // 0x255c70: 0x961021  addu        $v0, $a0, $s6
    ctx->pc = 0x255c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x255c74: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x255c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x255c78: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x255c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255c7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x255c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x255c80: 0x0  nop
    ctx->pc = 0x255c80u;
    // NOP
    // 0x255c84: 0x0  nop
    ctx->pc = 0x255c84u;
    // NOP
    // 0x255c88: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x255c88u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x255c8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x255C8Cu;
    {
        const bool branch_taken_0x255c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C8Cu;
        // 0x255c90: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c8c) {
            ctx->pc = 0x255CB0u;
            goto label_255cb0;
        }
    }
    ctx->pc = 0x255C94u;
label_255c94:
    // 0x255c94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x255c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x255c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255c9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255ca0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255ca4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x255ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x255ca8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x255ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x255cac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x255cacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_255cb0:
    // 0x255cb0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x255cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x255cb4: 0x3c02ff10  lui         $v0, 0xFF10
    ctx->pc = 0x255cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65296 << 16));
    // 0x255cb8: 0x2843818  mult        $a3, $s4, $a0
    ctx->pc = 0x255cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x255cbc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x255cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x255cc0: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x255cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x255cc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x255cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x255cc8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x255cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x255ccc: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x255cccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x255cd0: 0xf62021  addu        $a0, $a3, $s6
    ctx->pc = 0x255cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x255cd4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x255cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x255cd8: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x255cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
label_255cdc:
    // 0x255cdc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x255cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x255ce0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x255ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x255ce4: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x255ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x255ce8: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x255ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x255cec: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x255cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x255cf0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x255cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x255cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x255cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x255cf8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x255cf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x255cfc: 0x1460ff76  bnez        $v1, . + 4 + (-0x8A << 2)
    ctx->pc = 0x255CFCu;
    {
        const bool branch_taken_0x255cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x255D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CFCu;
        // 0x255d00: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255cfc) {
            ctx->pc = 0x255AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255ad8;
        }
    }
    ctx->pc = 0x255D04u;
    // 0x255d04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255D04u;
    {
        const bool branch_taken_0x255d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D04u;
        // 0x255d08: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d04) {
            ctx->pc = 0x255D14u;
            goto label_255d14;
        }
    }
    ctx->pc = 0x255D0Cu;
label_255d0c:
    // 0x255d0c: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x255d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x255d10: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x255d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_255d14:
    // 0x255d14: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x255d14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d18: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x255d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x255d1c: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x255D1Cu;
    {
        const bool branch_taken_0x255d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D1Cu;
        // 0x255d20: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d1c) {
            ctx->pc = 0x255AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255ab0;
        }
    }
    ctx->pc = 0x255D24u;
label_255d24:
    // 0x255d24: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x255D24u;
    {
        const bool branch_taken_0x255d24 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D24u;
        // 0x255d28: 0xdfbf0140  ld          $ra, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d24) {
            ctx->pc = 0x255D38u;
            goto label_255d38;
        }
    }
    ctx->pc = 0x255D2Cu;
    // 0x255d2c: 0xc080774  jal         func_201DD0
    ctx->pc = 0x255D2Cu;
    SET_GPR_U32(ctx, 31, 0x255D34u);
    ctx->pc = 0x255D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D2Cu;
    // 0x255d30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201DD0u, 0x255D2Cu, 0x255D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D34u;
label_255d34:
    // 0x255d34: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x255d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_255d38:
    // 0x255d38: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x255d38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x255d3c: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x255d3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x255d40: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x255d40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x255d44: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x255d44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x255d48: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x255d48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255d4c: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x255d4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x255d50: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x255d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x255d54: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x255d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x255d58: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x255d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x255d5c: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x255d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x255d60: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x255d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x255d64: 0x3e00008  jr          $ra
    ctx->pc = 0x255D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D64u;
        // 0x255d68: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255D6Cu;
}
