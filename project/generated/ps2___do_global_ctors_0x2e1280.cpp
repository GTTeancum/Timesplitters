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

// Function: __do_global_ctors
// Address: 0x2e1280 - 0x2e1330
void ps2___do_global_ctors_0x2e1280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x2e1280");
#endif

    switch (ctx->pc) {
        case 0x2e1280u: goto label_2e1280;
        case 0x2e1284u: goto label_2e1284;
        case 0x2e1288u: goto label_2e1288;
        case 0x2e128cu: goto label_2e128c;
        case 0x2e1290u: goto label_2e1290;
        case 0x2e1294u: goto label_2e1294;
        case 0x2e1298u: goto label_2e1298;
        case 0x2e129cu: goto label_2e129c;
        case 0x2e12a0u: goto label_2e12a0;
        case 0x2e12a4u: goto label_2e12a4;
        case 0x2e12a8u: goto label_2e12a8;
        case 0x2e12acu: goto label_2e12ac;
        case 0x2e12b0u: goto label_2e12b0;
        case 0x2e12b4u: goto label_2e12b4;
        case 0x2e12b8u: goto label_2e12b8;
        case 0x2e12bcu: goto label_2e12bc;
        case 0x2e12c0u: goto label_2e12c0;
        case 0x2e12c4u: goto label_2e12c4;
        case 0x2e12c8u: goto label_2e12c8;
        case 0x2e12ccu: goto label_2e12cc;
        case 0x2e12d0u: goto label_2e12d0;
        case 0x2e12d4u: goto label_2e12d4;
        case 0x2e12d8u: goto label_2e12d8;
        case 0x2e12dcu: goto label_2e12dc;
        case 0x2e12e0u: goto label_2e12e0;
        case 0x2e12e4u: goto label_2e12e4;
        case 0x2e12e8u: goto label_2e12e8;
        case 0x2e12ecu: goto label_2e12ec;
        case 0x2e12f0u: goto label_2e12f0;
        case 0x2e12f4u: goto label_2e12f4;
        case 0x2e12f8u: goto label_2e12f8;
        case 0x2e12fcu: goto label_2e12fc;
        case 0x2e1300u: goto label_2e1300;
        case 0x2e1304u: goto label_2e1304;
        case 0x2e1308u: goto label_2e1308;
        case 0x2e130cu: goto label_2e130c;
        case 0x2e1310u: goto label_2e1310;
        case 0x2e1314u: goto label_2e1314;
        case 0x2e1318u: goto label_2e1318;
        case 0x2e131cu: goto label_2e131c;
        case 0x2e1320u: goto label_2e1320;
        case 0x2e1324u: goto label_2e1324;
        case 0x2e1328u: goto label_2e1328;
        case 0x2e132cu: goto label_2e132c;
        default: break;
    }

    ctx->pc = 0x2e1280u;

label_2e1280:
    // 0x2e1280: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x2e1280u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
label_2e1284:
    // 0x2e1284: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e1288:
    // 0x2e1288: 0x8ce501e8  lw          $a1, 0x1E8($a3)
    ctx->pc = 0x2e1288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_2e128c:
    // 0x2e128c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e128cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e1290:
    // 0x2e1290: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e1290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e1294:
    // 0x2e1294: 0x24e301e8  addiu       $v1, $a3, 0x1E8
    ctx->pc = 0x2e1294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 488));
label_2e1298:
    // 0x2e1298: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2e129c:
    // 0x2e129c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_2e12a0:
    if (ctx->pc == 0x2E12A0u) {
        ctx->pc = 0x2E12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E129Cu;
        // 0x2e12a0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E12A4u;
        goto label_2e12a4;
    }
    ctx->pc = 0x2E129Cu;
    {
        const bool branch_taken_0x2e129c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E129Cu;
        // 0x2e12a0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e129c) {
            ctx->pc = 0x2E12E4u;
            goto label_2e12e4;
        }
    }
    ctx->pc = 0x2E12A4u;
label_2e12a4:
    // 0x2e12a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e12a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2e12a8:
    // 0x2e12a8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2e12ac:
    if (ctx->pc == 0x2E12ACu) {
        ctx->pc = 0x2E12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12A8u;
        // 0x2e12ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E12B0u;
        goto label_2e12b0;
    }
    ctx->pc = 0x2E12A8u;
    {
        const bool branch_taken_0x2e12a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12A8u;
        // 0x2e12ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12a8) {
            ctx->pc = 0x2E12E4u;
            goto label_2e12e4;
        }
    }
    ctx->pc = 0x2E12B0u;
label_2e12b0:
    // 0x2e12b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e12b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e12b4:
    // 0x2e12b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e12b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e12b8:
    // 0x2e12b8: 0x24e401e8  addiu       $a0, $a3, 0x1E8
    ctx->pc = 0x2e12b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 488));
label_2e12bc:
    // 0x2e12bc: 0x0  nop
    ctx->pc = 0x2e12bcu;
    // NOP
label_2e12c0:
    // 0x2e12c0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x2e12c0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_2e12c4:
    // 0x2e12c4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2e12c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e12c8:
    // 0x2e12c8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2e12c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2e12cc:
    // 0x2e12cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e12ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2e12d0:
    // 0x2e12d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e12d4:
    // 0x2e12d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2e12d8:
    // 0x2e12d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e12d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e12dc:
    // 0x2e12dc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_2e12e0:
    if (ctx->pc == 0x2E12E0u) {
        ctx->pc = 0x2E12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12DCu;
        // 0x2e12e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E12E4u;
        goto label_2e12e4;
    }
    ctx->pc = 0x2E12DCu;
    {
        const bool branch_taken_0x2e12dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e12dc) {
            ctx->pc = 0x2E12E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E12DCu;
            // 0x2e12e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E12C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e12c0;
        }
    }
    ctx->pc = 0x2E12E4u;
label_2e12e4:
    // 0x2e12e4: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x2e12e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_2e12e8:
    // 0x2e12e8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x2e12e8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_2e12ec:
    // 0x2e12ec: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_2e12f0:
    if (ctx->pc == 0x2E12F0u) {
        ctx->pc = 0x2E12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12ECu;
        // 0x2e12f0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E12F4u;
        goto label_2e12f4;
    }
    ctx->pc = 0x2E12ECu;
    {
        const bool branch_taken_0x2e12ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12ECu;
        // 0x2e12f0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12ec) {
            ctx->pc = 0x2E131Cu;
            goto label_2e131c;
        }
    }
    ctx->pc = 0x2E12F4u;
label_2e12f4:
    // 0x2e12f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2e12f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2e12f8:
    // 0x2e12f8: 0x244201e8  addiu       $v0, $v0, 0x1E8
    ctx->pc = 0x2e12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 488));
label_2e12fc:
    // 0x2e12fc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2e12fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e1300:
    // 0x2e1300: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e1300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e1304:
    // 0x2e1304: 0x0  nop
    ctx->pc = 0x2e1304u;
    // NOP
label_2e1308:
    // 0x2e1308: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e1308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2e130c:
    // 0x2e130c: 0x40f809  jalr        $v0
label_2e1310:
    if (ctx->pc == 0x2E1310u) {
        ctx->pc = 0x2E1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E130Cu;
        // 0x2e1310: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1314u;
        goto label_2e1314;
    }
    ctx->pc = 0x2E130Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1314u);
        ctx->pc = 0x2E1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E130Cu;
        // 0x2e1310: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E130Cu, 0x2E1314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1314u;
label_2e1314:
    // 0x2e1314: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_2e1318:
    if (ctx->pc == 0x2E1318u) {
        ctx->pc = 0x2E1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1314u;
        // 0x2e1318: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E131Cu;
        goto label_2e131c;
    }
    ctx->pc = 0x2E1314u;
    {
        const bool branch_taken_0x2e1314 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1314) {
            ctx->pc = 0x2E1318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1314u;
            // 0x2e1318: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1308;
        }
    }
    ctx->pc = 0x2E131Cu;
label_2e131c:
    // 0x2e131c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e131cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e1320:
    // 0x2e1320: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e1320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e1324:
    // 0x2e1324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1328:
    // 0x2e1328: 0x3e00008  jr          $ra
label_2e132c:
    if (ctx->pc == 0x2E132Cu) {
        ctx->pc = 0x2E132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1328u;
        // 0x2e132c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1330u;
        goto label_fallthrough_0x2e1328;
    }
    ctx->pc = 0x2E1328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1328u;
        // 0x2e132c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e1328:
    ctx->pc = 0x2E1330u;
}
