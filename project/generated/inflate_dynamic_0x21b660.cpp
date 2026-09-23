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

// Function: inflate_dynamic
// Address: 0x21b660 - 0x21bd34
void inflate_dynamic_0x21b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("inflate_dynamic_0x21b660");
#endif

    switch (ctx->pc) {
        case 0x21b698u: goto label_21b698;
        case 0x21b708u: goto label_21b708;
        case 0x21b780u: goto label_21b780;
        case 0x21b800u: goto label_21b800;
        case 0x21b818u: goto label_21b818;
        case 0x21b8c0u: goto label_21b8c0;
        case 0x21b910u: goto label_21b910;
        case 0x21b948u: goto label_21b948;
        case 0x21b960u: goto label_21b960;
        case 0x21ba10u: goto label_21ba10;
        case 0x21ba98u: goto label_21ba98;
        case 0x21bad8u: goto label_21bad8;
        case 0x21bb60u: goto label_21bb60;
        case 0x21bb98u: goto label_21bb98;
        case 0x21bc20u: goto label_21bc20;
        case 0x21bc84u: goto label_21bc84;
        case 0x21bca0u: goto label_21bca0;
        case 0x21bcd4u: goto label_21bcd4;
        case 0x21bcf0u: goto label_21bcf0;
        case 0x21bd0cu: goto label_21bd0c;
        default: break;
    }

    ctx->pc = 0x21b660u;

    // 0x21b660: 0x27bdfa90  addiu       $sp, $sp, -0x570
    ctx->pc = 0x21b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965904));
    // 0x21b664: 0xffb00500  sd          $s0, 0x500($sp)
    ctx->pc = 0x21b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1280), GPR_U64(ctx, 16));
    // 0x21b668: 0x8f90b6e8  lw          $s0, -0x4918($gp)
    ctx->pc = 0x21b668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948584)));
    // 0x21b66c: 0xffb10510  sd          $s1, 0x510($sp)
    ctx->pc = 0x21b66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1296), GPR_U64(ctx, 17));
    // 0x21b670: 0xffbf0560  sd          $ra, 0x560($sp)
    ctx->pc = 0x21b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1376), GPR_U64(ctx, 31));
    // 0x21b674: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x21b674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x21b678: 0xffb50550  sd          $s5, 0x550($sp)
    ctx->pc = 0x21b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1360), GPR_U64(ctx, 21));
    // 0x21b67c: 0xffb40540  sd          $s4, 0x540($sp)
    ctx->pc = 0x21b67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1344), GPR_U64(ctx, 20));
    // 0x21b680: 0xffb30530  sd          $s3, 0x530($sp)
    ctx->pc = 0x21b680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1328), GPR_U64(ctx, 19));
    // 0x21b684: 0xffb20520  sd          $s2, 0x520($sp)
    ctx->pc = 0x21b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 18));
    // 0x21b688: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21B688u;
    {
        const bool branch_taken_0x21b688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B688u;
        // 0x21b68c: 0x8f91b6e4  lw          $s1, -0x491C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b688) {
            ctx->pc = 0x21B6E0u;
            goto label_21b6e0;
        }
    }
    ctx->pc = 0x21B690u;
    // 0x21b690: 0x8f87b6d0  lw          $a3, -0x4930($gp)
    ctx->pc = 0x21b690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21b694: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21b694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
label_21b698:
    // 0x21b698: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x21b698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21b69c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B69Cu;
    {
        const bool branch_taken_0x21b69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B69Cu;
        // 0x21b6a0: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b69c) {
            ctx->pc = 0x21B6C0u;
            goto label_21b6c0;
        }
    }
    ctx->pc = 0x21B6A4u;
    // 0x21b6a4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b6ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b6acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b6b0: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b6b4: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b6b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B6B8u;
    {
        const bool branch_taken_0x21b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6B8u;
        // 0x21b6bc: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6b8) {
            ctx->pc = 0x21B6D0u;
            goto label_21b6d0;
        }
    }
    ctx->pc = 0x21B6C0u;
label_21b6c0:
    // 0x21b6c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21b6c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b6c8: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b6cc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21b6ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21b6d0:
    // 0x21b6d0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21b6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21b6d4: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x21b6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x21b6d8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21B6D8u;
    {
        const bool branch_taken_0x21b6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6D8u;
        // 0x21b6dc: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6d8) {
            ctx->pc = 0x21B698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b698;
        }
    }
    ctx->pc = 0x21B6E0u;
label_21b6e0:
    // 0x21b6e0: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x21b6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x21b6e4: 0x2610fffb  addiu       $s0, $s0, -0x5
    ctx->pc = 0x21b6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x21b6e8: 0x24520101  addiu       $s2, $v0, 0x101
    ctx->pc = 0x21b6e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 257));
    // 0x21b6ec: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x21b6ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x21b6f0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21B6F0u;
    {
        const bool branch_taken_0x21b6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6F0u;
        // 0x21b6f4: 0x118942  srl         $s1, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6f0) {
            ctx->pc = 0x21B758u;
            goto label_21b758;
        }
    }
    ctx->pc = 0x21B6F8u;
    // 0x21b6f8: 0x8f87b6d0  lw          $a3, -0x4930($gp)
    ctx->pc = 0x21b6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21b6fc: 0x2e45011f  sltiu       $a1, $s2, 0x11F
    ctx->pc = 0x21b6fcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)287) ? 1 : 0);
    // 0x21b700: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21b704: 0x0  nop
    ctx->pc = 0x21b704u;
    // NOP
label_21b708:
    // 0x21b708: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x21b708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21b70c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B70Cu;
    {
        const bool branch_taken_0x21b70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B70Cu;
        // 0x21b710: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b70c) {
            ctx->pc = 0x21B730u;
            goto label_21b730;
        }
    }
    ctx->pc = 0x21B714u;
    // 0x21b714: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21b714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b71c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b71cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b720: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b720u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b724: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21b724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b728: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B728u;
    {
        const bool branch_taken_0x21b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B728u;
        // 0x21b72c: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b728) {
            ctx->pc = 0x21B740u;
            goto label_21b740;
        }
    }
    ctx->pc = 0x21B730u;
label_21b730:
    // 0x21b730: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21b730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21b734: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b738: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21b738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b73c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21b73cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21b740:
    // 0x21b740: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21b740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21b744: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x21b744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x21b748: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21B748u;
    {
        const bool branch_taken_0x21b748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B748u;
        // 0x21b74c: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b748) {
            ctx->pc = 0x21B708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b708;
        }
    }
    ctx->pc = 0x21B750u;
    // 0x21b750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B750u;
    {
        const bool branch_taken_0x21b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B750u;
        // 0x21b754: 0x3222001f  andi        $v0, $s1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b750) {
            ctx->pc = 0x21B760u;
            goto label_21b760;
        }
    }
    ctx->pc = 0x21B758u;
label_21b758:
    // 0x21b758: 0x2e45011f  sltiu       $a1, $s2, 0x11F
    ctx->pc = 0x21b758u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)287) ? 1 : 0);
    // 0x21b75c: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x21b75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
label_21b760:
    // 0x21b760: 0x2610fffb  addiu       $s0, $s0, -0x5
    ctx->pc = 0x21b760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x21b764: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x21b764u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21b768: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x21b768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x21b76c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21B76Cu;
    {
        const bool branch_taken_0x21b76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B76Cu;
        // 0x21b770: 0x118942  srl         $s1, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b76c) {
            ctx->pc = 0x21B7C8u;
            goto label_21b7c8;
        }
    }
    ctx->pc = 0x21B774u;
    // 0x21b774: 0x8f87b6d0  lw          $a3, -0x4930($gp)
    ctx->pc = 0x21b774u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21b778: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21b778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21b77c: 0x0  nop
    ctx->pc = 0x21b77cu;
    // NOP
label_21b780:
    // 0x21b780: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x21b780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21b784: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B784u;
    {
        const bool branch_taken_0x21b784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B784u;
        // 0x21b788: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b784) {
            ctx->pc = 0x21B7A8u;
            goto label_21b7a8;
        }
    }
    ctx->pc = 0x21B78Cu;
    // 0x21b78c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b794: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b798: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b79c: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b7a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B7A0u;
    {
        const bool branch_taken_0x21b7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7A0u;
        // 0x21b7a4: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7a0) {
            ctx->pc = 0x21B7B8u;
            goto label_21b7b8;
        }
    }
    ctx->pc = 0x21B7A8u;
label_21b7a8:
    // 0x21b7a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21b7ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b7b0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b7b4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21b7b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21b7b8:
    // 0x21b7b8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21b7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21b7bc: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x21b7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x21b7c0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21B7C0u;
    {
        const bool branch_taken_0x21b7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7C0u;
        // 0x21b7c4: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7c0) {
            ctx->pc = 0x21B780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b780;
        }
    }
    ctx->pc = 0x21B7C8u;
label_21b7c8:
    // 0x21b7c8: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x21b7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x21b7cc: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x21b7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x21b7d0: 0x24490004  addiu       $t1, $v0, 0x4
    ctx->pc = 0x21b7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21b7d4: 0x10a00146  beqz        $a1, . + 4 + (0x146 << 2)
    ctx->pc = 0x21B7D4u;
    {
        const bool branch_taken_0x21b7d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7D4u;
        // 0x21b7d8: 0x118902  srl         $s1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7d4) {
            ctx->pc = 0x21BCF0u;
            goto label_21bcf0;
        }
    }
    ctx->pc = 0x21B7DCu;
    // 0x21b7dc: 0x2ea2001f  sltiu       $v0, $s5, 0x1F
    ctx->pc = 0x21b7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x21b7e0: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x21B7E0u;
    {
        const bool branch_taken_0x21b7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7E0u;
        // 0x21b7e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7e0) {
            ctx->pc = 0x21BD10u;
            goto label_21bd10;
        }
    }
    ctx->pc = 0x21B7E8u;
    // 0x21b7e8: 0x1120002f  beqz        $t1, . + 4 + (0x2F << 2)
    ctx->pc = 0x21B7E8u;
    {
        const bool branch_taken_0x21b7e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7E8u;
        // 0x21b7ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7e8) {
            ctx->pc = 0x21B8A8u;
            goto label_21b8a8;
        }
    }
    ctx->pc = 0x21B7F0u;
    // 0x21b7f0: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x21b7f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x21b7f4: 0x27b404f0  addiu       $s4, $sp, 0x4F0
    ctx->pc = 0x21b7f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
    // 0x21b7f8: 0x27b304f4  addiu       $s3, $sp, 0x4F4
    ctx->pc = 0x21b7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1268));
    // 0x21b7fc: 0x0  nop
    ctx->pc = 0x21b7fcu;
    // NOP
label_21b800:
    // 0x21b800: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x21b800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21b804: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21B804u;
    {
        const bool branch_taken_0x21b804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B804u;
        // 0x21b808: 0x8f87b6d0  lw          $a3, -0x4930($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b804) {
            ctx->pc = 0x21B868u;
            goto label_21b868;
        }
    }
    ctx->pc = 0x21B80Cu;
    // 0x21b80c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x21b80cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21b810: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21b810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21b814: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
label_21b818:
    // 0x21b818: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x21b818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21b81c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B81Cu;
    {
        const bool branch_taken_0x21b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B81Cu;
        // 0x21b820: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b81c) {
            ctx->pc = 0x21B840u;
            goto label_21b840;
        }
    }
    ctx->pc = 0x21B824u;
    // 0x21b824: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21b824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b82c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b82cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b830: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b834: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21b834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b838: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B838u;
    {
        const bool branch_taken_0x21b838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B838u;
        // 0x21b83c: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b838) {
            ctx->pc = 0x21B850u;
            goto label_21b850;
        }
    }
    ctx->pc = 0x21B840u;
label_21b840:
    // 0x21b840: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21b840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21b844: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b848: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21b848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b84c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21b84cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21b850:
    // 0x21b850: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21b850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21b854: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x21b854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21b858: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21B858u;
    {
        const bool branch_taken_0x21b858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B858u;
        // 0x21b85c: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b858) {
            ctx->pc = 0x21B818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b818;
        }
    }
    ctx->pc = 0x21B860u;
    // 0x21b860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B860u;
    {
        const bool branch_taken_0x21b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B860u;
        // 0x21b864: 0x2542c1c0  addiu       $v0, $t2, -0x3E40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294951360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b860) {
            ctx->pc = 0x21B874u;
            goto label_21b874;
        }
    }
    ctx->pc = 0x21B868u;
label_21b868:
    // 0x21b868: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x21b868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21b86c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21b870: 0x2542c1c0  addiu       $v0, $t2, -0x3E40
    ctx->pc = 0x21b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294951360));
label_21b874:
    // 0x21b874: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x21b874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b878: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21b87c: 0x2610fffd  addiu       $s0, $s0, -0x3
    ctx->pc = 0x21b87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x21b880: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21b880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b884: 0x32250007  andi        $a1, $s1, 0x7
    ctx->pc = 0x21b884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x21b888: 0x1188c2  srl         $s1, $s1, 3
    ctx->pc = 0x21b888u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
    // 0x21b88c: 0xc9202b  sltu        $a0, $a2, $t1
    ctx->pc = 0x21b88cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x21b890: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b894: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x21b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x21b898: 0x1480ffd9  bnez        $a0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x21B898u;
    {
        const bool branch_taken_0x21b898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B898u;
        // 0x21b89c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b898) {
            ctx->pc = 0x21B800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b800;
        }
    }
    ctx->pc = 0x21B8A0u;
    // 0x21b8a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B8A0u;
    {
        const bool branch_taken_0x21b8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8A0u;
        // 0x21b8a4: 0x2cc20013  sltiu       $v0, $a2, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8a0) {
            ctx->pc = 0x21B8B4u;
            goto label_21b8b4;
        }
    }
    ctx->pc = 0x21B8A8u;
label_21b8a8:
    // 0x21b8a8: 0x27b404f0  addiu       $s4, $sp, 0x4F0
    ctx->pc = 0x21b8a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
    // 0x21b8ac: 0x27b304f4  addiu       $s3, $sp, 0x4F4
    ctx->pc = 0x21b8acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1268));
    // 0x21b8b0: 0x2cc20013  sltiu       $v0, $a2, 0x13
    ctx->pc = 0x21b8b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_21b8b4:
    // 0x21b8b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21B8B4u;
    {
        const bool branch_taken_0x21b8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8B4u;
        // 0x21b8b8: 0x3c0a0033  lui         $t2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8b4) {
            ctx->pc = 0x21B8E8u;
            goto label_21b8e8;
        }
    }
    ctx->pc = 0x21B8BCu;
    // 0x21b8bc: 0x0  nop
    ctx->pc = 0x21b8bcu;
    // NOP
label_21b8c0:
    // 0x21b8c0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x21b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21b8c4: 0x2542c1c0  addiu       $v0, $t2, -0x3E40
    ctx->pc = 0x21b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294951360));
    // 0x21b8c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b8cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21b8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21b8d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b8d4: 0x2cc40013  sltiu       $a0, $a2, 0x13
    ctx->pc = 0x21b8d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x21b8d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21b8dc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21b8e0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21B8E0u;
    {
        const bool branch_taken_0x21b8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8E0u;
        // 0x21b8e4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8e0) {
            ctx->pc = 0x21B8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b8c0;
        }
    }
    ctx->pc = 0x21B8E8u;
label_21b8e8:
    // 0x21b8e8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x21b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21b8ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21b8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8f0: 0xafa204f4  sw          $v0, 0x4F4($sp)
    ctx->pc = 0x21b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1268), GPR_U32(ctx, 2));
    // 0x21b8f4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x21b8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21b8f8: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x21b8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21b8fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b904: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x21b904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b908: 0xc0869ec  jal         func_21A7B0
    ctx->pc = 0x21B908u;
    SET_GPR_U32(ctx, 31, 0x21B910u);
    ctx->pc = 0x21B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B908u;
    // 0x21b90c: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A7B0u, 0x21B908u, 0x21B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B910u;
label_21b910:
    // 0x21b910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21b910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b914: 0x14a000ff  bnez        $a1, . + 4 + (0xFF << 2)
    ctx->pc = 0x21B914u;
    {
        const bool branch_taken_0x21b914 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B914u;
        // 0x21b918: 0xdfbf0560  ld          $ra, 0x560($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b914) {
            ctx->pc = 0x21BD14u;
            goto label_21bd14;
        }
    }
    ctx->pc = 0x21B91Cu;
    // 0x21b91c: 0x8fa604f4  lw          $a2, 0x4F4($sp)
    ctx->pc = 0x21b91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1268)));
    // 0x21b920: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21b920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21b924: 0x2463c310  addiu       $v1, $v1, -0x3CF0
    ctx->pc = 0x21b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951696));
    // 0x21b928: 0x2554021  addu        $t0, $s2, $s5
    ctx->pc = 0x21b928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x21b92c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x21b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x21b930: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b930u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b938: 0xa8482b  sltu        $t1, $a1, $t0
    ctx->pc = 0x21b938u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x21b93c: 0x112000c3  beqz        $t1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x21B93Cu;
    {
        const bool branch_taken_0x21b93c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B93Cu;
        // 0x21b940: 0x944c0000  lhu         $t4, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b93c) {
            ctx->pc = 0x21BC4Cu;
            goto label_21bc4c;
        }
    }
    ctx->pc = 0x21B944u;
    // 0x21b944: 0x8fab04f0  lw          $t3, 0x4F0($sp)
    ctx->pc = 0x21b944u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_21b948:
    // 0x21b948: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x21b948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x21b94c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21B94Cu;
    {
        const bool branch_taken_0x21b94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B94Cu;
        // 0x21b950: 0x22c1024  and         $v0, $s1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b94c) {
            ctx->pc = 0x21B9ACu;
            goto label_21b9ac;
        }
    }
    ctx->pc = 0x21B954u;
    // 0x21b954: 0x8f87b6d0  lw          $a3, -0x4930($gp)
    ctx->pc = 0x21b954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21b958: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21b958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21b95c: 0x0  nop
    ctx->pc = 0x21b95cu;
    // NOP
label_21b960:
    // 0x21b960: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x21b960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21b964: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B964u;
    {
        const bool branch_taken_0x21b964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B964u;
        // 0x21b968: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b964) {
            ctx->pc = 0x21B988u;
            goto label_21b988;
        }
    }
    ctx->pc = 0x21B96Cu;
    // 0x21b96c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b974: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b978: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b97c: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b980: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B980u;
    {
        const bool branch_taken_0x21b980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B980u;
        // 0x21b984: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b980) {
            ctx->pc = 0x21B998u;
            goto label_21b998;
        }
    }
    ctx->pc = 0x21B988u;
label_21b988:
    // 0x21b988: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21b988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21b98c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b990: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21b990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b994: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21b994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21b998:
    // 0x21b998: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21b998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21b99c: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x21b99cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x21b9a0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21B9A0u;
    {
        const bool branch_taken_0x21b9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9A0u;
        // 0x21b9a4: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9a0) {
            ctx->pc = 0x21B960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b960;
        }
    }
    ctx->pc = 0x21B9A8u;
    // 0x21b9a8: 0x22c1024  and         $v0, $s1, $t4
    ctx->pc = 0x21b9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 12));
label_21b9ac:
    // 0x21b9ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21b9b0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x21b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x21b9b4: 0xafa204f8  sw          $v0, 0x4F8($sp)
    ctx->pc = 0x21b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1272), GPR_U32(ctx, 2));
    // 0x21b9b8: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x21b9b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x21b9bc: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x21b9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x21b9c0: 0xd18806  srlv        $s1, $s1, $a2
    ctx->pc = 0x21b9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
    // 0x21b9c4: 0x94460004  lhu         $a2, 0x4($v0)
    ctx->pc = 0x21b9c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21b9c8: 0x2cc30010  sltiu       $v1, $a2, 0x10
    ctx->pc = 0x21b9c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x21b9cc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21B9CCu;
    {
        const bool branch_taken_0x21b9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9CCu;
        // 0x21b9d0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9cc) {
            ctx->pc = 0x21B9ECu;
            goto label_21b9ec;
        }
    }
    ctx->pc = 0x21B9D4u;
    // 0x21b9d4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x21b9d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9d8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21b9dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21b9e0: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x21b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x21b9e4: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x21B9E4u;
    {
        const bool branch_taken_0x21b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9E4u;
        // 0x21b9e8: 0xa8482b  sltu        $t1, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9e4) {
            ctx->pc = 0x21BC44u;
            goto label_21bc44;
        }
    }
    ctx->pc = 0x21B9ECu;
label_21b9ec:
    // 0x21b9ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x21b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21b9f0: 0x14c20032  bne         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x21B9F0u;
    {
        const bool branch_taken_0x21b9f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9F0u;
        // 0x21b9f4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9f0) {
            ctx->pc = 0x21BABCu;
            goto label_21babc;
        }
    }
    ctx->pc = 0x21B9F8u;
    // 0x21b9f8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x21b9f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x21b9fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21B9FCu;
    {
        const bool branch_taken_0x21b9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9FCu;
        // 0x21ba00: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9fc) {
            ctx->pc = 0x21BA5Cu;
            goto label_21ba5c;
        }
    }
    ctx->pc = 0x21BA04u;
    // 0x21ba04: 0x8f87b6d0  lw          $a3, -0x4930($gp)
    ctx->pc = 0x21ba04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21ba08: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21ba0c: 0x0  nop
    ctx->pc = 0x21ba0cu;
    // NOP
label_21ba10:
    // 0x21ba10: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x21ba10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21ba14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21BA14u;
    {
        const bool branch_taken_0x21ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA14u;
        // 0x21ba18: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba14) {
            ctx->pc = 0x21BA38u;
            goto label_21ba38;
        }
    }
    ctx->pc = 0x21BA1Cu;
    // 0x21ba1c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21ba20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ba24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21ba24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ba28: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21ba2c: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21ba30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21BA30u;
    {
        const bool branch_taken_0x21ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA30u;
        // 0x21ba34: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba30) {
            ctx->pc = 0x21BA48u;
            goto label_21ba48;
        }
    }
    ctx->pc = 0x21BA38u;
label_21ba38:
    // 0x21ba38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21ba3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ba3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ba40: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21ba44: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21ba44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21ba48:
    // 0x21ba48: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21ba48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21ba4c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x21ba4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x21ba50: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21BA50u;
    {
        const bool branch_taken_0x21ba50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA50u;
        // 0x21ba54: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba50) {
            ctx->pc = 0x21BA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ba10;
        }
    }
    ctx->pc = 0x21BA58u;
    // 0x21ba58: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x21ba58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_21ba5c:
    // 0x21ba5c: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x21ba5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x21ba60: 0x24660003  addiu       $a2, $v1, 0x3
    ctx->pc = 0x21ba60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21ba64: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x21ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21ba68: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x21ba68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21ba6c: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x21BA6Cu;
    {
        const bool branch_taken_0x21ba6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA6Cu;
        // 0x21ba70: 0x118882  srl         $s1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba6c) {
            ctx->pc = 0x21BCF0u;
            goto label_21bcf0;
        }
    }
    ctx->pc = 0x21BA74u;
    // 0x21ba74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21ba78: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x21ba78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x21ba7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ba80: 0x10c20070  beq         $a2, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x21BA80u;
    {
        const bool branch_taken_0x21ba80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x21BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA80u;
        // 0x21ba84: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba80) {
            ctx->pc = 0x21BC44u;
            goto label_21bc44;
        }
    }
    ctx->pc = 0x21BA88u;
    // 0x21ba88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x21ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x21ba8c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x21ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x21ba90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21ba90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21ba94: 0x0  nop
    ctx->pc = 0x21ba94u;
    // NOP
label_21ba98:
    // 0x21ba98: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x21ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x21ba9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21ba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21baa0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21baa4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21baa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21baa8: 0x0  nop
    ctx->pc = 0x21baa8u;
    // NOP
    // 0x21baac: 0x14c3fffa  bne         $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21BAACu;
    {
        const bool branch_taken_0x21baac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x21baac) {
            ctx->pc = 0x21BA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ba98;
        }
    }
    ctx->pc = 0x21BAB4u;
    // 0x21bab4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x21BAB4u;
    {
        const bool branch_taken_0x21bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAB4u;
        // 0x21bab8: 0xa8482b  sltu        $t1, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bab4) {
            ctx->pc = 0x21BC44u;
            goto label_21bc44;
        }
    }
    ctx->pc = 0x21BABCu;
label_21babc:
    // 0x21babc: 0x14c20031  bne         $a2, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x21BABCu;
    {
        const bool branch_taken_0x21babc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BABCu;
        // 0x21bac0: 0x2e020007  sltiu       $v0, $s0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21babc) {
            ctx->pc = 0x21BB84u;
            goto label_21bb84;
        }
    }
    ctx->pc = 0x21BAC4u;
    // 0x21bac4: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x21bac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21bac8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21BAC8u;
    {
        const bool branch_taken_0x21bac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAC8u;
        // 0x21bacc: 0x32230007  andi        $v1, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bac8) {
            ctx->pc = 0x21BB24u;
            goto label_21bb24;
        }
    }
    ctx->pc = 0x21BAD0u;
    // 0x21bad0: 0x8f87b6d0  lw          $a3, -0x4930($gp)
    ctx->pc = 0x21bad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21bad4: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
label_21bad8:
    // 0x21bad8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x21bad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21badc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21BADCu;
    {
        const bool branch_taken_0x21badc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BADCu;
        // 0x21bae0: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21badc) {
            ctx->pc = 0x21BB00u;
            goto label_21bb00;
        }
    }
    ctx->pc = 0x21BAE4u;
    // 0x21bae4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21bae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21baec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21baecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21baf0: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21baf4: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21baf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21BAF8u;
    {
        const bool branch_taken_0x21baf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAF8u;
        // 0x21bafc: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21baf8) {
            ctx->pc = 0x21BB10u;
            goto label_21bb10;
        }
    }
    ctx->pc = 0x21BB00u;
label_21bb00:
    // 0x21bb00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21bb04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21bb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21bb08: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21bb0c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21bb0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21bb10:
    // 0x21bb10: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21bb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21bb14: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x21bb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21bb18: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21BB18u;
    {
        const bool branch_taken_0x21bb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB18u;
        // 0x21bb1c: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb18) {
            ctx->pc = 0x21BAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bad8;
        }
    }
    ctx->pc = 0x21BB20u;
    // 0x21bb20: 0x32230007  andi        $v1, $s1, 0x7
    ctx->pc = 0x21bb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
label_21bb24:
    // 0x21bb24: 0x2610fffd  addiu       $s0, $s0, -0x3
    ctx->pc = 0x21bb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x21bb28: 0x24660003  addiu       $a2, $v1, 0x3
    ctx->pc = 0x21bb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21bb2c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x21bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21bb30: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x21bb30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21bb34: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x21BB34u;
    {
        const bool branch_taken_0x21bb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB34u;
        // 0x21bb38: 0x1188c2  srl         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb34) {
            ctx->pc = 0x21BCF0u;
            goto label_21bcf0;
        }
    }
    ctx->pc = 0x21BB3Cu;
    // 0x21bb3c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21bb40: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x21bb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x21bb44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21bb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21bb48: 0x10c2003d  beq         $a2, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x21BB48u;
    {
        const bool branch_taken_0x21bb48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x21BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB48u;
        // 0x21bb4c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb48) {
            ctx->pc = 0x21BC40u;
            goto label_21bc40;
        }
    }
    ctx->pc = 0x21BB50u;
    // 0x21bb50: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x21bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x21bb54: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x21bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x21bb58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21bb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21bb5c: 0x0  nop
    ctx->pc = 0x21bb5cu;
    // NOP
label_21bb60:
    // 0x21bb60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x21bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x21bb64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21bb68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21bb6c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21bb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21bb70: 0x0  nop
    ctx->pc = 0x21bb70u;
    // NOP
    // 0x21bb74: 0x14c3fffa  bne         $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21BB74u;
    {
        const bool branch_taken_0x21bb74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x21bb74) {
            ctx->pc = 0x21BB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bb60;
        }
    }
    ctx->pc = 0x21BB7Cu;
    // 0x21bb7c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x21BB7Cu;
    {
        const bool branch_taken_0x21bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB7Cu;
        // 0x21bb80: 0xa8482b  sltu        $t1, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb7c) {
            ctx->pc = 0x21BC40u;
            goto label_21bc40;
        }
    }
    ctx->pc = 0x21BB84u;
label_21bb84:
    // 0x21bb84: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21BB84u;
    {
        const bool branch_taken_0x21bb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB84u;
        // 0x21bb88: 0x3223007f  andi        $v1, $s1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb84) {
            ctx->pc = 0x21BBE4u;
            goto label_21bbe4;
        }
    }
    ctx->pc = 0x21BB8Cu;
    // 0x21bb8c: 0x8f87b6d0  lw          $a3, -0x4930($gp)
    ctx->pc = 0x21bb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21bb90: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21bb94: 0x0  nop
    ctx->pc = 0x21bb94u;
    // NOP
label_21bb98:
    // 0x21bb98: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x21bb98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21bb9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21BB9Cu;
    {
        const bool branch_taken_0x21bb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB9Cu;
        // 0x21bba0: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb9c) {
            ctx->pc = 0x21BBC0u;
            goto label_21bbc0;
        }
    }
    ctx->pc = 0x21BBA4u;
    // 0x21bba4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21bba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bbac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21bbacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bbb0: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21bbb4: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21bbb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21BBB8u;
    {
        const bool branch_taken_0x21bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBB8u;
        // 0x21bbbc: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbb8) {
            ctx->pc = 0x21BBD0u;
            goto label_21bbd0;
        }
    }
    ctx->pc = 0x21BBC0u;
label_21bbc0:
    // 0x21bbc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21bbc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21bbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21bbc8: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21bbcc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21bbccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21bbd0:
    // 0x21bbd0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21bbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21bbd4: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x21bbd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x21bbd8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21BBD8u;
    {
        const bool branch_taken_0x21bbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBD8u;
        // 0x21bbdc: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbd8) {
            ctx->pc = 0x21BB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bb98;
        }
    }
    ctx->pc = 0x21BBE0u;
    // 0x21bbe0: 0x3223007f  andi        $v1, $s1, 0x7F
    ctx->pc = 0x21bbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
label_21bbe4:
    // 0x21bbe4: 0x2610fff9  addiu       $s0, $s0, -0x7
    ctx->pc = 0x21bbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x21bbe8: 0x2466000b  addiu       $a2, $v1, 0xB
    ctx->pc = 0x21bbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 11));
    // 0x21bbec: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x21bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21bbf0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x21bbf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21bbf4: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x21BBF4u;
    {
        const bool branch_taken_0x21bbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBF4u;
        // 0x21bbf8: 0x1189c2  srl         $s1, $s1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbf4) {
            ctx->pc = 0x21BCF0u;
            goto label_21bcf0;
        }
    }
    ctx->pc = 0x21BBFCu;
    // 0x21bbfc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21bc00: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x21bc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x21bc04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21bc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21bc08: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21BC08u;
    {
        const bool branch_taken_0x21bc08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x21BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC08u;
        // 0x21bc0c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc08) {
            ctx->pc = 0x21BC40u;
            goto label_21bc40;
        }
    }
    ctx->pc = 0x21BC10u;
    // 0x21bc10: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x21bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x21bc14: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x21bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x21bc18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21bc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21bc1c: 0x0  nop
    ctx->pc = 0x21bc1cu;
    // NOP
label_21bc20:
    // 0x21bc20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x21bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x21bc24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21bc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21bc28: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21bc2c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21bc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21bc30: 0x0  nop
    ctx->pc = 0x21bc30u;
    // NOP
    // 0x21bc34: 0x14c3fffa  bne         $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21BC34u;
    {
        const bool branch_taken_0x21bc34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x21bc34) {
            ctx->pc = 0x21BC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bc20;
        }
    }
    ctx->pc = 0x21BC3Cu;
    // 0x21bc3c: 0xa8482b  sltu        $t1, $a1, $t0
    ctx->pc = 0x21bc3cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_21bc40:
    // 0x21bc40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21bc40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bc44:
    // 0x21bc44: 0x1520ff40  bnez        $t1, . + 4 + (-0xC0 << 2)
    ctx->pc = 0x21BC44u;
    {
        const bool branch_taken_0x21bc44 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC44u;
        // 0x21bc48: 0x8fa604f4  lw          $a2, 0x4F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc44) {
            ctx->pc = 0x21B948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b948;
        }
    }
    ctx->pc = 0x21BC4Cu;
label_21bc4c:
    // 0x21bc4c: 0x8f829d68  lw          $v0, -0x6298($gp)
    ctx->pc = 0x21bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942056)));
    // 0x21bc50: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x21bc50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x21bc54: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x21bc54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x21bc58: 0xaf91b6e4  sw          $s1, -0x491C($gp)
    ctx->pc = 0x21bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948580), GPR_U32(ctx, 17));
    // 0x21bc5c: 0xaf90b6e8  sw          $s0, -0x4918($gp)
    ctx->pc = 0x21bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948584), GPR_U32(ctx, 16));
    // 0x21bc60: 0x24e7c210  addiu       $a3, $a3, -0x3DF0
    ctx->pc = 0x21bc60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951440));
    // 0x21bc64: 0xafa204f4  sw          $v0, 0x4F4($sp)
    ctx->pc = 0x21bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1268), GPR_U32(ctx, 2));
    // 0x21bc68: 0x2508c250  addiu       $t0, $t0, -0x3DB0
    ctx->pc = 0x21bc68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951504));
    // 0x21bc6c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x21bc6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc70: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x21bc70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21bc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc7c: 0xc0869ec  jal         func_21A7B0
    ctx->pc = 0x21BC7Cu;
    SET_GPR_U32(ctx, 31, 0x21BC84u);
    ctx->pc = 0x21BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC7Cu;
    // 0x21bc80: 0x24060101  addiu       $a2, $zero, 0x101 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A7B0u, 0x21BC7Cu, 0x21BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC84u;
label_21bc84:
    // 0x21bc84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21bc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc88: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BC88u;
    {
        const bool branch_taken_0x21bc88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC88u;
        // 0x21bc8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc88) {
            ctx->pc = 0x21BCA0u;
            goto label_21bca0;
        }
    }
    ctx->pc = 0x21BC90u;
    // 0x21bc90: 0x14a2001f  bne         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21BC90u;
    {
        const bool branch_taken_0x21bc90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC90u;
        // 0x21bc94: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc90) {
            ctx->pc = 0x21BD10u;
            goto label_21bd10;
        }
    }
    ctx->pc = 0x21BC98u;
    // 0x21bc98: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21BC98u;
    SET_GPR_U32(ctx, 31, 0x21BCA0u);
    ctx->pc = 0x21BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC98u;
    // 0x21bc9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21BC98u, 0x21BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCA0u;
label_21bca0:
    // 0x21bca0: 0x8f829d6c  lw          $v0, -0x6294($gp)
    ctx->pc = 0x21bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942060)));
    // 0x21bca4: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x21bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x21bca8: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x21bca8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x21bcac: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x21bcacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x21bcb0: 0xafa204fc  sw          $v0, 0x4FC($sp)
    ctx->pc = 0x21bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1276), GPR_U32(ctx, 2));
    // 0x21bcb4: 0x3a42021  addu        $a0, $sp, $a0
    ctx->pc = 0x21bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x21bcb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21bcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcbc: 0x24e7c290  addiu       $a3, $a3, -0x3D70
    ctx->pc = 0x21bcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951568));
    // 0x21bcc0: 0x2508c2d0  addiu       $t0, $t0, -0x3D30
    ctx->pc = 0x21bcc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951632));
    // 0x21bcc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21bcc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcc8: 0x27a904f8  addiu       $t1, $sp, 0x4F8
    ctx->pc = 0x21bcc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
    // 0x21bccc: 0xc0869ec  jal         func_21A7B0
    ctx->pc = 0x21BCCCu;
    SET_GPR_U32(ctx, 31, 0x21BCD4u);
    ctx->pc = 0x21BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCCCu;
    // 0x21bcd0: 0x27aa04fc  addiu       $t2, $sp, 0x4FC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A7B0u, 0x21BCCCu, 0x21BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCD4u;
label_21bcd4:
    // 0x21bcd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21bcd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcd8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21BCD8u;
    {
        const bool branch_taken_0x21bcd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCD8u;
        // 0x21bcdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcd8) {
            ctx->pc = 0x21BCF8u;
            goto label_21bcf8;
        }
    }
    ctx->pc = 0x21BCE0u;
    // 0x21bce0: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21BCE0u;
    {
        const bool branch_taken_0x21bce0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCE0u;
        // 0x21bce4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bce0) {
            ctx->pc = 0x21BD10u;
            goto label_21bd10;
        }
    }
    ctx->pc = 0x21BCE8u;
    // 0x21bce8: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21BCE8u;
    SET_GPR_U32(ctx, 31, 0x21BCF0u);
    ctx->pc = 0x21BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCE8u;
    // 0x21bcec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21BCE8u, 0x21BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCF0u;
label_21bcf0:
    // 0x21bcf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21BCF0u;
    {
        const bool branch_taken_0x21bcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCF0u;
        // 0x21bcf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcf0) {
            ctx->pc = 0x21BD10u;
            goto label_21bd10;
        }
    }
    ctx->pc = 0x21BCF8u;
label_21bcf8:
    // 0x21bcf8: 0x8fa404f0  lw          $a0, 0x4F0($sp)
    ctx->pc = 0x21bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x21bcfc: 0x8fa504f8  lw          $a1, 0x4F8($sp)
    ctx->pc = 0x21bcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1272)));
    // 0x21bd00: 0x8fa604f4  lw          $a2, 0x4F4($sp)
    ctx->pc = 0x21bd00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1268)));
    // 0x21bd04: 0xc086b66  jal         func_21AD98
    ctx->pc = 0x21BD04u;
    SET_GPR_U32(ctx, 31, 0x21BD0Cu);
    ctx->pc = 0x21BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BD04u;
    // 0x21bd08: 0x8fa704fc  lw          $a3, 0x4FC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AD98u, 0x21BD04u, 0x21BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD0Cu;
label_21bd0c:
    // 0x21bd0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21bd0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21bd10:
    // 0x21bd10: 0xdfbf0560  ld          $ra, 0x560($sp)
    ctx->pc = 0x21bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1376)));
label_21bd14:
    // 0x21bd14: 0xdfb50550  ld          $s5, 0x550($sp)
    ctx->pc = 0x21bd14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x21bd18: 0xdfb40540  ld          $s4, 0x540($sp)
    ctx->pc = 0x21bd18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x21bd1c: 0xdfb30530  ld          $s3, 0x530($sp)
    ctx->pc = 0x21bd1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x21bd20: 0xdfb20520  ld          $s2, 0x520($sp)
    ctx->pc = 0x21bd20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x21bd24: 0xdfb10510  ld          $s1, 0x510($sp)
    ctx->pc = 0x21bd24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x21bd28: 0xdfb00500  ld          $s0, 0x500($sp)
    ctx->pc = 0x21bd28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x21bd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD2Cu;
        // 0x21bd30: 0x27bd0570  addiu       $sp, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BD34u;
}
