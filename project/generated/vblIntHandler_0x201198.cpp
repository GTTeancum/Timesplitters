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

// Function: vblIntHandler
// Address: 0x201198 - 0x20132c
void vblIntHandler_0x201198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vblIntHandler_0x201198");
#endif

    switch (ctx->pc) {
        case 0x2011acu: goto label_2011ac;
        case 0x2011c0u: goto label_2011c0;
        case 0x20120cu: goto label_20120c;
        case 0x201214u: goto label_201214;
        case 0x20121cu: goto label_20121c;
        case 0x2012dcu: goto label_2012dc;
        case 0x2012fcu: goto label_2012fc;
        default: break;
    }

    ctx->pc = 0x201198u;

    // 0x201198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20119c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2011a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2011a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2011a4: 0xc0ad994  jal         func_2B6650
    ctx->pc = 0x2011A4u;
    SET_GPR_U32(ctx, 31, 0x2011ACu);
    ctx->pc = 0x2011A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011A4u;
    // 0x2011a8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6650u, 0x2011A4u, 0x2011ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011ACu;
label_2011ac:
    // 0x2011ac: 0x8f82934c  lw          $v0, -0x6CB4($gp)
    ctx->pc = 0x2011acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939468)));
    // 0x2011b0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2011B0u;
    {
        const bool branch_taken_0x2011b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011B0u;
        // 0x2011b4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011b0) {
            ctx->pc = 0x201308u;
            goto label_201308;
        }
    }
    ctx->pc = 0x2011B8u;
    // 0x2011b8: 0xc0b4060  jal         func_2D0180
    ctx->pc = 0x2011B8u;
    SET_GPR_U32(ctx, 31, 0x2011C0u);
    ctx->pc = 0x2011BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011B8u;
    // 0x2011bc: 0x8f849340  lw          $a0, -0x6CC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0180u, 0x2011B8u, 0x2011C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011C0u;
label_2011c0:
    // 0x2011c0: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2011C0u;
    {
        const bool branch_taken_0x2011c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011C0u;
        // 0x2011c4: 0x8f839374  lw          $v1, -0x6C8C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011c0) {
            ctx->pc = 0x201304u;
            goto label_201304;
        }
    }
    ctx->pc = 0x2011C8u;
    // 0x2011c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2011c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2011cc: 0x8f859378  lw          $a1, -0x6C88($gp)
    ctx->pc = 0x2011ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939512)));
    // 0x2011d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2011d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2011d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2011d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2011d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2011d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2011dc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2011DCu;
    {
        const bool branch_taken_0x2011dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011DCu;
        // 0x2011e0: 0xaf829374  sw          $v0, -0x6C8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011dc) {
            ctx->pc = 0x2011ECu;
            goto label_2011ec;
        }
    }
    ctx->pc = 0x2011E4u;
    // 0x2011e4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2011e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2011e8: 0xaf859378  sw          $a1, -0x6C88($gp)
    ctx->pc = 0x2011e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939512), GPR_U32(ctx, 5));
label_2011ec:
    // 0x2011ec: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2011ECu;
    {
        const bool branch_taken_0x2011ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2011F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011ECu;
        // 0x2011f0: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011ec) {
            ctx->pc = 0x201200u;
            goto label_201200;
        }
    }
    ctx->pc = 0x2011F4u;
    // 0x2011f4: 0x8f82b454  lw          $v0, -0x4BAC($gp)
    ctx->pc = 0x2011f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947924)));
    // 0x2011f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2011F8u;
    {
        const bool branch_taken_0x2011f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011F8u;
        // 0x2011fc: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011f8) {
            ctx->pc = 0x201204u;
            goto label_201204;
        }
    }
    ctx->pc = 0x201200u;
label_201200:
    // 0x201200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201204:
    // 0x201204: 0xc0800c0  jal         func_200300
    ctx->pc = 0x201204u;
    SET_GPR_U32(ctx, 31, 0x20120Cu);
    ctx->pc = 0x200300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200300u, 0x201204u, 0x20120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20120Cu;
label_20120c:
    // 0x20120c: 0xc0800cc  jal         func_200330
    ctx->pc = 0x20120Cu;
    SET_GPR_U32(ctx, 31, 0x201214u);
    ctx->pc = 0x201210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20120Cu;
    // 0x201210: 0x8f849374  lw          $a0, -0x6C8C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200330u, 0x20120Cu, 0x201214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201214u;
label_201214:
    // 0x201214: 0xc0b4054  jal         func_2D0150
    ctx->pc = 0x201214u;
    SET_GPR_U32(ctx, 31, 0x20121Cu);
    ctx->pc = 0x201218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201214u;
    // 0x201218: 0x8f849340  lw          $a0, -0x6CC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0150u, 0x201214u, 0x20121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20121Cu;
label_20121c:
    // 0x20121c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x20121cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x201220: 0x8c622c00  lw          $v0, 0x2C00($v1)
    ctx->pc = 0x201220u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2F2C00u));
    // 0x201224: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x201224u;
    {
        const bool branch_taken_0x201224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201224u;
        // 0x201228: 0x24652c00  addiu       $a1, $v1, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201224) {
            ctx->pc = 0x201260u;
            goto label_201260;
        }
    }
    ctx->pc = 0x20122Cu;
    // 0x20122c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x20122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x201230: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x201230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201234: 0x8f83b454  lw          $v1, -0x4BAC($gp)
    ctx->pc = 0x201234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947924)));
    // 0x201238: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x201238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x20123c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20123cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201240: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x201240u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x201244: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x201244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x201248: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x201248u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20124c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x20124cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x201250: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x201250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x201254: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x201254u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201258: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x201258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20125c: 0x38710001  xori        $s1, $v1, 0x1
    ctx->pc = 0x20125cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_201260:
    // 0x201260: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x201260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x201264: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x201264u;
    {
        const bool branch_taken_0x201264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201264) {
            ctx->pc = 0x2012A0u;
            goto label_2012a0;
        }
    }
    ctx->pc = 0x20126Cu;
    // 0x20126c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x20126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x201270: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x201270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201274: 0x8f83b454  lw          $v1, -0x4BAC($gp)
    ctx->pc = 0x201274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947924)));
    // 0x201278: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x201278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x20127c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20127cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201280: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x201280u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x201284: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x201284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x201288: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x201288u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20128c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x20128cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x201290: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x201290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x201294: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x201294u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201298: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x201298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20129c: 0x38700001  xori        $s0, $v1, 0x1
    ctx->pc = 0x20129cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2012a0:
    // 0x2012a0: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2012A0u;
    {
        const bool branch_taken_0x2012a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2012a0) {
            ctx->pc = 0x2012E4u;
            goto label_2012e4;
        }
    }
    ctx->pc = 0x2012A8u;
    // 0x2012a8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2012A8u;
    {
        const bool branch_taken_0x2012a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2012a8) {
            ctx->pc = 0x2012C8u;
            goto label_2012c8;
        }
    }
    ctx->pc = 0x2012B0u;
    // 0x2012b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2012b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2012b4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2012b8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2012b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2012bc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2012BCu;
    {
        const bool branch_taken_0x2012bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2012bc) {
            ctx->pc = 0x2012C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2012BCu;
            // 0x2012c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2012C8u;
            goto label_2012c8;
        }
    }
    ctx->pc = 0x2012C4u;
    // 0x2012c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2012c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2012c8:
    // 0x2012c8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2012C8u;
    {
        const bool branch_taken_0x2012c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012C8u;
        // 0x2012cc: 0x8f849334  lw          $a0, -0x6CCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012c8) {
            ctx->pc = 0x2012E4u;
            goto label_2012e4;
        }
    }
    ctx->pc = 0x2012D0u;
    // 0x2012d0: 0xaf80931c  sw          $zero, -0x6CE4($gp)
    ctx->pc = 0x2012d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939420), GPR_U32(ctx, 0));
    // 0x2012d4: 0xc0b4054  jal         func_2D0150
    ctx->pc = 0x2012D4u;
    SET_GPR_U32(ctx, 31, 0x2012DCu);
    ctx->pc = 0x2D0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0150u, 0x2012D4u, 0x2012DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2012DCu;
label_2012dc:
    // 0x2012dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2012DCu;
    {
        const bool branch_taken_0x2012dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2012dc) {
            ctx->pc = 0x20130Cu;
            goto label_20130c;
        }
    }
    ctx->pc = 0x2012E4u;
label_2012e4:
    // 0x2012e4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2012E4u;
    {
        const bool branch_taken_0x2012e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012E4u;
        // 0x2012e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012e4) {
            ctx->pc = 0x20130Cu;
            goto label_20130c;
        }
    }
    ctx->pc = 0x2012ECu;
    // 0x2012ec: 0x8f849334  lw          $a0, -0x6CCC($gp)
    ctx->pc = 0x2012ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939444)));
    // 0x2012f0: 0xaf82931c  sw          $v0, -0x6CE4($gp)
    ctx->pc = 0x2012f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939420), GPR_U32(ctx, 2));
    // 0x2012f4: 0xc0b4054  jal         func_2D0150
    ctx->pc = 0x2012F4u;
    SET_GPR_U32(ctx, 31, 0x2012FCu);
    ctx->pc = 0x2D0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0150u, 0x2012F4u, 0x2012FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2012FCu;
label_2012fc:
    // 0x2012fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2012FCu;
    {
        const bool branch_taken_0x2012fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2012fc) {
            ctx->pc = 0x20130Cu;
            goto label_20130c;
        }
    }
    ctx->pc = 0x201304u;
label_201304:
    // 0x201304: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x201304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_201308:
    // 0x201308: 0xaf859378  sw          $a1, -0x6C88($gp)
    ctx->pc = 0x201308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939512), GPR_U32(ctx, 5));
label_20130c:
    // 0x20130c: 0xf  sync
    ctx->pc = 0x20130cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x201310: 0x42000038  ei
    ctx->pc = 0x201310u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x201314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x201314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20131c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20131cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201324: 0x3e00008  jr          $ra
    ctx->pc = 0x201324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201324u;
        // 0x201328: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20132Cu;
}
