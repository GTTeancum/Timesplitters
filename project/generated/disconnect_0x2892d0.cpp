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

// Function: disconnect
// Address: 0x2892d0 - 0x28948c
void disconnect_0x2892d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("disconnect_0x2892d0");
#endif

    switch (ctx->pc) {
        case 0x289328u: goto label_289328;
        case 0x28935cu: goto label_28935c;
        case 0x289374u: goto label_289374;
        case 0x28938cu: goto label_28938c;
        case 0x2893a8u: goto label_2893a8;
        case 0x2893ccu: goto label_2893cc;
        case 0x2893ecu: goto label_2893ec;
        case 0x289404u: goto label_289404;
        default: break;
    }

    ctx->pc = 0x2892d0u;

    // 0x2892d0: 0x24020114  addiu       $v0, $zero, 0x114
    ctx->pc = 0x2892d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x2892d4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2892d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2892d8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2892d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2892dc: 0x8f83b948  lw          $v1, -0x46B8($gp)
    ctx->pc = 0x2892dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x2892e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2892e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2892e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2892e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2892e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2892e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2892ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2892ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2892f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2892f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2892f4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2892f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2892f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2892f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2892fc: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x2892fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x289300: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x289300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x289304: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x289304u;
    {
        const bool branch_taken_0x289304 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x289308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289304u;
        // 0x289308: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289304) {
            ctx->pc = 0x289348u;
            goto label_289348;
        }
    }
    ctx->pc = 0x28930Cu;
    // 0x28930c: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x28930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x289310: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x289310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x289314: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x289314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x289318: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x289318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x28931c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x28931cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x289320: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x289320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289324: 0x246311c0  addiu       $v1, $v1, 0x11C0
    ctx->pc = 0x289324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4544));
label_289328:
    // 0x289328: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x289328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28932c: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x28932Cu;
    {
        const bool branch_taken_0x28932c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x28932c) {
            ctx->pc = 0x289330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28932Cu;
            // 0x289330: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289334u;
            goto label_289334;
        }
    }
    ctx->pc = 0x289334u;
label_289334:
    // 0x289334: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x289334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x289338: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x289338u;
    {
        const bool branch_taken_0x289338 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x28933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289338u;
        // 0x28933c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289338) {
            ctx->pc = 0x289328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289328;
        }
    }
    ctx->pc = 0x289340u;
    // 0x289340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289340u;
    {
        const bool branch_taken_0x289340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289340) {
            ctx->pc = 0x28934Cu;
            goto label_28934c;
        }
    }
    ctx->pc = 0x289348u;
label_289348:
    // 0x289348: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x289348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_28934c:
    // 0x28934c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28934Cu;
    {
        const bool branch_taken_0x28934c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28934c) {
            ctx->pc = 0x289350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28934Cu;
            // 0x289350: 0x8e040090  lw          $a0, 0x90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289364u;
            goto label_289364;
        }
    }
    ctx->pc = 0x289354u;
    // 0x289354: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x289354u;
    SET_GPR_U32(ctx, 31, 0x28935Cu);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x289354u, 0x28935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28935Cu;
label_28935c:
    // 0x28935c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x28935cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x289360: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x289360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_289364:
    // 0x289364: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289364u;
    {
        const bool branch_taken_0x289364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x289364) {
            ctx->pc = 0x289368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289364u;
            // 0x289368: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28937Cu;
            goto label_28937c;
        }
    }
    ctx->pc = 0x28936Cu;
    // 0x28936c: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x28936Cu;
    SET_GPR_U32(ctx, 31, 0x289374u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x28936Cu, 0x289374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289374u;
label_289374:
    // 0x289374: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x289374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x289378: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x289378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_28937c:
    // 0x28937c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28937Cu;
    {
        const bool branch_taken_0x28937c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28937c) {
            ctx->pc = 0x289380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28937Cu;
            // 0x289380: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289394u;
            goto label_289394;
        }
    }
    ctx->pc = 0x289384u;
    // 0x289384: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x289384u;
    SET_GPR_U32(ctx, 31, 0x28938Cu);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x289384u, 0x28938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28938Cu;
label_28938c:
    // 0x28938c: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x28938cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x289390: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x289390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_289394:
    // 0x289394: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x289394u;
    {
        const bool branch_taken_0x289394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x289394) {
            ctx->pc = 0x289398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289394u;
            // 0x289398: 0x8e0400d0  lw          $a0, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2893B8u;
            goto label_2893b8;
        }
    }
    ctx->pc = 0x28939Cu;
    // 0x28939c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28939cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2893a0: 0xc0a5b94  jal         func_296E50
    ctx->pc = 0x2893A0u;
    SET_GPR_U32(ctx, 31, 0x2893A8u);
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x2893A0u, 0x2893A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893A8u;
label_2893a8:
    // 0x2893a8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2893a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2893ac: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x2893acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x2893b0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2893b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2893b4: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x2893b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_2893b8:
    // 0x2893b8: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2893B8u;
    {
        const bool branch_taken_0x2893b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2893b8) {
            ctx->pc = 0x2893BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2893B8u;
            // 0x2893bc: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2893DCu;
            goto label_2893dc;
        }
    }
    ctx->pc = 0x2893C0u;
    // 0x2893c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2893c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2893c4: 0xc0a5b94  jal         func_296E50
    ctx->pc = 0x2893C4u;
    SET_GPR_U32(ctx, 31, 0x2893CCu);
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x2893C4u, 0x2893CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893CCu;
label_2893cc:
    // 0x2893cc: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x2893ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2893d0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2893d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2893d4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2893d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2893d8: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2893d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2893dc:
    // 0x2893dc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2893DCu;
    {
        const bool branch_taken_0x2893dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2893dc) {
            ctx->pc = 0x2893E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2893DCu;
            // 0x2893e0: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2893F4u;
            goto label_2893f4;
        }
    }
    ctx->pc = 0x2893E4u;
    // 0x2893e4: 0xc0a5ac2  jal         func_296B08
    ctx->pc = 0x2893E4u;
    SET_GPR_U32(ctx, 31, 0x2893ECu);
    ctx->pc = 0x296B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B08u, 0x2893E4u, 0x2893ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893ECu;
label_2893ec:
    // 0x2893ec: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2893ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2893f0: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x2893f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2893f4:
    // 0x2893f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2893F4u;
    {
        const bool branch_taken_0x2893f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2893f4) {
            ctx->pc = 0x289408u;
            goto label_289408;
        }
    }
    ctx->pc = 0x2893FCu;
    // 0x2893fc: 0xc0a5ac2  jal         func_296B08
    ctx->pc = 0x2893FCu;
    SET_GPR_U32(ctx, 31, 0x289404u);
    ctx->pc = 0x296B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B08u, 0x2893FCu, 0x289404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289404u;
label_289404:
    // 0x289404: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x289404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_289408:
    // 0x289408: 0x6400008  bltz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x289408u;
    {
        const bool branch_taken_0x289408 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x28940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289408u;
        // 0x28940c: 0x24020114  addiu       $v0, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289408) {
            ctx->pc = 0x28942Cu;
            goto label_28942c;
        }
    }
    ctx->pc = 0x289410u;
    // 0x289410: 0x8f83b948  lw          $v1, -0x46B8($gp)
    ctx->pc = 0x289410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x289414: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x289414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x289418: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x289418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28941c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28941cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289420: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x289420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x289424: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289424u;
    {
        const bool branch_taken_0x289424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289424u;
        // 0x289428: 0xae040008  sw          $a0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289424) {
            ctx->pc = 0x28943Cu;
            goto label_28943c;
        }
    }
    ctx->pc = 0x28942Cu;
label_28942c:
    // 0x28942c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x28942cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x289430: 0x2783b958  addiu       $v1, $gp, -0x46A8
    ctx->pc = 0x289430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949208));
    // 0x289434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289438: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x289438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_28943c:
    // 0x28943c: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28943Cu;
    {
        const bool branch_taken_0x28943c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x289440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28943Cu;
        // 0x289440: 0x24020114  addiu       $v0, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28943c) {
            ctx->pc = 0x289460u;
            goto label_289460;
        }
    }
    ctx->pc = 0x289444u;
    // 0x289444: 0x8f83b948  lw          $v1, -0x46B8($gp)
    ctx->pc = 0x289444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x289448: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x289448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28944c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28944cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289454: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x289454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x289458: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289458u;
    {
        const bool branch_taken_0x289458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289458u;
        // 0x28945c: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289458) {
            ctx->pc = 0x289470u;
            goto label_289470;
        }
    }
    ctx->pc = 0x289460u;
label_289460:
    // 0x289460: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x289460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x289464: 0x2783b950  addiu       $v1, $gp, -0x46B0
    ctx->pc = 0x289464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949200));
    // 0x289468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28946c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x28946cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_289470:
    // 0x289470: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x289470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289474: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x289474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289478: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x289478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28947c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28947cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289484: 0x3e00008  jr          $ra
    ctx->pc = 0x289484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289484u;
        // 0x289488: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28948Cu;
}
