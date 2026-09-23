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

// Function: GetXOffset
// Address: 0x2022a8 - 0x2023b0
void GetXOffset_0x2022a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetXOffset_0x2022a8");
#endif

    ctx->pc = 0x2022a8u;

    // 0x2022a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2022a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022ac: 0x8f879a9c  lw          $a3, -0x6564($gp)
    ctx->pc = 0x2022acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2022b0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2022b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2022b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2022b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022b8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2022b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2022bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2022BCu;
    {
        const bool branch_taken_0x2022bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022BCu;
        // 0x2022c0: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022bc) {
            ctx->pc = 0x2022E0u;
            goto label_2022e0;
        }
    }
    ctx->pc = 0x2022C4u;
    // 0x2022c4: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2022c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2022c8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2022c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2022cc: 0x24429920  addiu       $v0, $v0, -0x66E0
    ctx->pc = 0x2022ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940960));
    // 0x2022d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2022d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2022d4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2022d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2022d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2022D8u;
    {
        const bool branch_taken_0x2022d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022D8u;
        // 0x2022dc: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022d8) {
            ctx->pc = 0x2022E8u;
            goto label_2022e8;
        }
    }
    ctx->pc = 0x2022E0u;
label_2022e0:
    // 0x2022e0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2022e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2022e4: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_2022e8:
    // 0x2022e8: 0x2c820060  sltiu       $v0, $a0, 0x60
    ctx->pc = 0x2022e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x2022ec: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2022ECu;
    {
        const bool branch_taken_0x2022ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2022ec) {
            ctx->pc = 0x2023A8u;
            goto label_2023a8;
        }
    }
    ctx->pc = 0x2022F4u;
    // 0x2022f4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2022F4u;
    {
        const bool branch_taken_0x2022f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022F4u;
        // 0x2022f8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022f4) {
            ctx->pc = 0x20230Cu;
            goto label_20230c;
        }
    }
    ctx->pc = 0x2022FCu;
    // 0x2022fc: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2022fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202300: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x202300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202304: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202304u;
    {
        const bool branch_taken_0x202304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202304u;
        // 0x202308: 0x8c480008  lw          $t0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202304) {
            ctx->pc = 0x202310u;
            goto label_202310;
        }
    }
    ctx->pc = 0x20230Cu;
label_20230c:
    // 0x20230c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20230cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202310:
    // 0x202310: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x202310u;
    {
        const bool branch_taken_0x202310 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x202310) {
            ctx->pc = 0x2023A8u;
            goto label_2023a8;
        }
    }
    ctx->pc = 0x202318u;
    // 0x202318: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x202318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x20231c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20231Cu;
    {
        const bool branch_taken_0x20231c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20231Cu;
        // 0x202320: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20231c) {
            ctx->pc = 0x2023A8u;
            goto label_2023a8;
        }
    }
    ctx->pc = 0x202324u;
    // 0x202324: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x202324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x202328: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x202328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x20232c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x20232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x202330: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x202330u;
    {
        const bool branch_taken_0x202330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202330u;
        // 0x202334: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202330) {
            ctx->pc = 0x2023A8u;
            goto label_2023a8;
        }
    }
    ctx->pc = 0x202338u;
    // 0x202338: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x202338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20233c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20233Cu;
    {
        const bool branch_taken_0x20233c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20233Cu;
        // 0x202340: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20233c) {
            ctx->pc = 0x2023A8u;
            goto label_2023a8;
        }
    }
    ctx->pc = 0x202344u;
    // 0x202344: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202344u;
    {
        const bool branch_taken_0x202344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202344u;
        // 0x202348: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202344) {
            ctx->pc = 0x202364u;
            goto label_202364;
        }
    }
    ctx->pc = 0x20234Cu;
    // 0x20234c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x20234cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x202350: 0x24429920  addiu       $v0, $v0, -0x66E0
    ctx->pc = 0x202350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940960));
    // 0x202354: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202358: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x202358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20235c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20235Cu;
    {
        const bool branch_taken_0x20235c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20235Cu;
        // 0x202360: 0x2485ffe0  addiu       $a1, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20235c) {
            ctx->pc = 0x202368u;
            goto label_202368;
        }
    }
    ctx->pc = 0x202364u;
label_202364:
    // 0x202364: 0x2465ffe0  addiu       $a1, $v1, -0x20
    ctx->pc = 0x202364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_202368:
    // 0x202368: 0x2ca20060  sltiu       $v0, $a1, 0x60
    ctx->pc = 0x202368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x20236c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20236Cu;
    {
        const bool branch_taken_0x20236c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20236Cu;
        // 0x202370: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20236c) {
            ctx->pc = 0x2023A8u;
            goto label_2023a8;
        }
    }
    ctx->pc = 0x202374u;
    // 0x202374: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x202374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x202378: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x202378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20237c: 0x1242018  mult        $a0, $t1, $a0
    ctx->pc = 0x20237cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x202380: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x202380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x202384: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x202384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202388: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x202388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20238c: 0x2c430079  sltiu       $v1, $v0, 0x79
    ctx->pc = 0x20238cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
    // 0x202390: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x202390u;
    {
        const bool branch_taken_0x202390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202390u;
        // 0x202394: 0x8ce50008  lw          $a1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202390) {
            ctx->pc = 0x2023A8u;
            goto label_2023a8;
        }
    }
    ctx->pc = 0x202398u;
    // 0x202398: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x202398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20239c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2023a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2023a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2023a4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2023a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_2023a8:
    // 0x2023a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2023A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2023ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023A8u;
        // 0x2023ac: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2023A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2023B0u;
}
