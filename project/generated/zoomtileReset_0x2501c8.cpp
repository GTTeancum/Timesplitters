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

// Function: zoomtileReset
// Address: 0x2501c8 - 0x250300
void zoomtileReset_0x2501c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomtileReset_0x2501c8");
#endif

    switch (ctx->pc) {
        case 0x250218u: goto label_250218;
        case 0x250224u: goto label_250224;
        case 0x250234u: goto label_250234;
        case 0x250250u: goto label_250250;
        case 0x25025cu: goto label_25025c;
        case 0x250290u: goto label_250290;
        case 0x2502a4u: goto label_2502a4;
        case 0x2502d4u: goto label_2502d4;
        default: break;
    }

    ctx->pc = 0x2501c8u;

    // 0x2501c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2501c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2501cc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2501ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2501d0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2501d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2501d4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2501d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2501d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2501d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2501dc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2501dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2501e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2501e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2501e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2501e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2501e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2501e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2501ec: 0x24558ee0  addiu       $s5, $v0, -0x7120
    ctx->pc = 0x2501ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
    // 0x2501f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2501f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2501f4: 0x247489a0  addiu       $s4, $v1, -0x7660
    ctx->pc = 0x2501f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936992));
    // 0x2501f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2501f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2501fc: 0x24937250  addiu       $s3, $a0, 0x7250
    ctx->pc = 0x2501fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 29264));
    // 0x250200: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x250200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x250204: 0x24b28460  addiu       $s2, $a1, -0x7BA0
    ctx->pc = 0x250204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935648));
    // 0x250208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25020c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25020cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250210: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x250210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x250214: 0x0  nop
    ctx->pc = 0x250214u;
    // NOP
label_250218:
    // 0x250218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25021c: 0xc097b80  jal         func_25EE00
    ctx->pc = 0x25021Cu;
    SET_GPR_U32(ctx, 31, 0x250224u);
    ctx->pc = 0x250220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25021Cu;
    // 0x250220: 0x263001f2  addiu       $s0, $s1, 0x1F2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 498));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE00u, 0x25021Cu, 0x250224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250224u;
label_250224:
    // 0x250224: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x250224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x250228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x250228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25022c: 0xc099c70  jal         func_2671C0
    ctx->pc = 0x25022Cu;
    SET_GPR_U32(ctx, 31, 0x250234u);
    ctx->pc = 0x250230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25022Cu;
    // 0x250230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671C0u, 0x25022Cu, 0x250234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250234u;
label_250234:
    // 0x250234: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x250234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x250238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25023c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25023cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x250240: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x250240u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x250244: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x250244u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x250248: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x250248u;
    SET_GPR_U32(ctx, 31, 0x250250u);
    ctx->pc = 0x25024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250248u;
    // 0x25024c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x250248u, 0x250250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250250u;
label_250250:
    // 0x250250: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x250250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x250254: 0xc087140  jal         func_21C500
    ctx->pc = 0x250254u;
    SET_GPR_U32(ctx, 31, 0x25025Cu);
    ctx->pc = 0x250258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250254u;
    // 0x250258: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C500u, 0x250254u, 0x25025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25025Cu;
label_25025c:
    // 0x25025c: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x25025cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x250260: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x250260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x250264: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x250264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x250268: 0x2a220015  slti        $v0, $s1, 0x15
    ctx->pc = 0x250268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x25026c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x25026cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x250270: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x250270u;
    {
        const bool branch_taken_0x250270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250270u;
        // 0x250274: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250270) {
            ctx->pc = 0x250218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250218;
        }
    }
    ctx->pc = 0x250278u;
    // 0x250278: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x250278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x25027c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x25027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x250280: 0x244290c0  addiu       $v0, $v0, -0x6F40
    ctx->pc = 0x250280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938816));
    // 0x250284: 0x247272a8  addiu       $s2, $v1, 0x72A8
    ctx->pc = 0x250284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 29352));
    // 0x250288: 0x2450199c  addiu       $s0, $v0, 0x199C
    ctx->pc = 0x250288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6556));
    // 0x25028c: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x25028cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_250290:
    // 0x250290: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x250290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250294: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x250294u;
    {
        const bool branch_taken_0x250294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250294) {
            ctx->pc = 0x250298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250294u;
            // 0x250298: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2502ACu;
            goto label_2502ac;
        }
    }
    ctx->pc = 0x25029Cu;
    // 0x25029c: 0xc097b80  jal         func_25EE00
    ctx->pc = 0x25029Cu;
    SET_GPR_U32(ctx, 31, 0x2502A4u);
    ctx->pc = 0x2502A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25029Cu;
    // 0x2502a0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE00u, 0x25029Cu, 0x2502A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502A4u;
label_2502a4:
    // 0x2502a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2502a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2502a8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2502a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2502ac:
    // 0x2502ac: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x2502acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2502b0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2502b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2502b4: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2502B4u;
    {
        const bool branch_taken_0x2502b4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2502B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502B4u;
        // 0x2502b8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502b4) {
            ctx->pc = 0x250290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250290;
        }
    }
    ctx->pc = 0x2502BCu;
    // 0x2502bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2502bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2502c0: 0x240400ea  addiu       $a0, $zero, 0xEA
    ctx->pc = 0x2502c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    // 0x2502c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2502c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2502c8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2502c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2502cc: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x2502CCu;
    SET_GPR_U32(ctx, 31, 0x2502D4u);
    ctx->pc = 0x2502D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2502CCu;
    // 0x2502d0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x2502CCu, 0x2502D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502D4u;
label_2502d4:
    // 0x2502d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2502d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2502d8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2502d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2502dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2502dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2502e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2502e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2502e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2502e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2502e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2502e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2502ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2502ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2502f0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2502f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2502f4: 0xaf82a228  sw          $v0, -0x5DD8($gp)
    ctx->pc = 0x2502f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943272), GPR_U32(ctx, 2));
    // 0x2502f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2502F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2502FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502F8u;
        // 0x2502fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2502F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250300u;
}
