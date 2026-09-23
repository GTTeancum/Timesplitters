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

// Function: cosf
// Address: 0x2d71c8 - 0x2d72b0
void cosf_0x2d71c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cosf_0x2d71c8");
#endif

    switch (ctx->pc) {
        case 0x2d7200u: goto label_2d7200;
        case 0x2d722cu: goto label_2d722c;
        case 0x2d726cu: goto label_2d726c;
        case 0x2d7284u: goto label_2d7284;
        case 0x2d7294u: goto label_2d7294;
        case 0x2d72a4u: goto label_2d72a4;
        default: break;
    }

    ctx->pc = 0x2d71c8u;

    // 0x2d71c8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2d71c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d71cc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d71ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d71d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d71d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71d4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2d71d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2d71d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d71d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d71dc: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2d71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2d71e0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2d71e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d71e4: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x2d71e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x2d71e8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d71e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d71ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D71ECu;
    {
        const bool branch_taken_0x2d71ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D71F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71ECu;
        // 0x2d71f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71ec) {
            ctx->pc = 0x2D7208u;
            goto label_2d7208;
        }
    }
    ctx->pc = 0x2D71F4u;
    // 0x2d71f4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2d71f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d71f8: 0xc0b6c1e  jal         func_2DB078
    ctx->pc = 0x2D71F8u;
    SET_GPR_U32(ctx, 31, 0x2D7200u);
    ctx->pc = 0x2DB078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB078u, 0x2D71F8u, 0x2D7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7200u;
label_2d7200:
    // 0x2d7200: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D7200u;
    {
        const bool branch_taken_0x2d7200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7200u;
        // 0x2d7204: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7200) {
            ctx->pc = 0x2D72A8u;
            goto label_2d72a8;
        }
    }
    ctx->pc = 0x2D7208u;
label_2d7208:
    // 0x2d7208: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2d7208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2d720c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d720cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d7210: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d7210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d7214: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7214u;
    {
        const bool branch_taken_0x2d7214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7214) {
            ctx->pc = 0x2D7224u;
            goto label_2d7224;
        }
    }
    ctx->pc = 0x2D721Cu;
    // 0x2d721c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2D721Cu;
    {
        const bool branch_taken_0x2d721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D721Cu;
        // 0x2d7220: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d721c) {
            ctx->pc = 0x2D72A4u;
            goto label_2d72a4;
        }
    }
    ctx->pc = 0x2D7224u;
label_2d7224:
    // 0x2d7224: 0xc0b6ad8  jal         func_2DAB60
    ctx->pc = 0x2D7224u;
    SET_GPR_U32(ctx, 31, 0x2D722Cu);
    ctx->pc = 0x2D7228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7224u;
    // 0x2d7228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB60u, 0x2D7224u, 0x2D722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D722Cu;
label_2d722c:
    // 0x2d722c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2d722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d7230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7234: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D7234u;
    {
        const bool branch_taken_0x2d7234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7234u;
        // 0x2d7238: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7234) {
            ctx->pc = 0x2D7274u;
            goto label_2d7274;
        }
    }
    ctx->pc = 0x2D723Cu;
    // 0x2d723c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D723Cu;
    {
        const bool branch_taken_0x2d723c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D723Cu;
        // 0x2d7240: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d723c) {
            ctx->pc = 0x2D7254u;
            goto label_2d7254;
        }
    }
    ctx->pc = 0x2D7244u;
    // 0x2d7244: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7244u;
    {
        const bool branch_taken_0x2d7244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7244u;
        // 0x2d7248: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7244) {
            ctx->pc = 0x2D7264u;
            goto label_2d7264;
        }
    }
    ctx->pc = 0x2D724Cu;
    // 0x2d724c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D724Cu;
    {
        const bool branch_taken_0x2d724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D724Cu;
        // 0x2d7250: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d724c) {
            ctx->pc = 0x2D729Cu;
            goto label_2d729c;
        }
    }
    ctx->pc = 0x2D7254u;
label_2d7254:
    // 0x2d7254: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7254u;
    {
        const bool branch_taken_0x2d7254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7254u;
        // 0x2d7258: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7254) {
            ctx->pc = 0x2D728Cu;
            goto label_2d728c;
        }
    }
    ctx->pc = 0x2D725Cu;
    // 0x2d725c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D725Cu;
    {
        const bool branch_taken_0x2d725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D725Cu;
        // 0x2d7260: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d725c) {
            ctx->pc = 0x2D729Cu;
            goto label_2d729c;
        }
    }
    ctx->pc = 0x2D7264u;
label_2d7264:
    // 0x2d7264: 0xc0b6c1e  jal         func_2DB078
    ctx->pc = 0x2D7264u;
    SET_GPR_U32(ctx, 31, 0x2D726Cu);
    ctx->pc = 0x2D7268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7264u;
    // 0x2d7268: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB078u, 0x2D7264u, 0x2D726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D726Cu;
label_2d726c:
    // 0x2d726c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D726Cu;
    {
        const bool branch_taken_0x2d726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D726Cu;
        // 0x2d7270: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d726c) {
            ctx->pc = 0x2D72A8u;
            goto label_2d72a8;
        }
    }
    ctx->pc = 0x2D7274u;
label_2d7274:
    // 0x2d7274: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2d7274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d7278: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d727c: 0xc0b6ec8  jal         func_2DBB20
    ctx->pc = 0x2D727Cu;
    SET_GPR_U32(ctx, 31, 0x2D7284u);
    ctx->pc = 0x2D7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D727Cu;
    // 0x2d7280: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBB20u, 0x2D727Cu, 0x2D7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7284u;
label_2d7284:
    // 0x2d7284: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7284u;
    {
        const bool branch_taken_0x2d7284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7284u;
        // 0x2d7288: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7284) {
            ctx->pc = 0x2D72A4u;
            goto label_2d72a4;
        }
    }
    ctx->pc = 0x2D728Cu;
label_2d728c:
    // 0x2d728c: 0xc0b6c1e  jal         func_2DB078
    ctx->pc = 0x2D728Cu;
    SET_GPR_U32(ctx, 31, 0x2D7294u);
    ctx->pc = 0x2D7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D728Cu;
    // 0x2d7290: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB078u, 0x2D728Cu, 0x2D7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7294u;
label_2d7294:
    // 0x2d7294: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7294u;
    {
        const bool branch_taken_0x2d7294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7294u;
        // 0x2d7298: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7294) {
            ctx->pc = 0x2D72A4u;
            goto label_2d72a4;
        }
    }
    ctx->pc = 0x2D729Cu;
label_2d729c:
    // 0x2d729c: 0xc0b6ec8  jal         func_2DBB20
    ctx->pc = 0x2D729Cu;
    SET_GPR_U32(ctx, 31, 0x2D72A4u);
    ctx->pc = 0x2D72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D729Cu;
    // 0x2d72a0: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBB20u, 0x2D729Cu, 0x2D72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72A4u;
label_2d72a4:
    // 0x2d72a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d72a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d72a8:
    // 0x2d72a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D72A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72A8u;
        // 0x2d72ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D72A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D72B0u;
}
