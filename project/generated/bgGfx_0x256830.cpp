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

// Function: bgGfx
// Address: 0x256830 - 0x256c58
void bgGfx_0x256830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgGfx_0x256830");
#endif

    switch (ctx->pc) {
        case 0x256868u: goto label_256868;
        case 0x2568c0u: goto label_2568c0;
        case 0x256928u: goto label_256928;
        case 0x2569d8u: goto label_2569d8;
        case 0x2569f0u: goto label_2569f0;
        case 0x256a0cu: goto label_256a0c;
        case 0x256a14u: goto label_256a14;
        case 0x256a1cu: goto label_256a1c;
        case 0x256a28u: goto label_256a28;
        case 0x256a30u: goto label_256a30;
        case 0x256a3cu: goto label_256a3c;
        case 0x256a48u: goto label_256a48;
        case 0x256a50u: goto label_256a50;
        case 0x256a58u: goto label_256a58;
        case 0x256a64u: goto label_256a64;
        case 0x256a6cu: goto label_256a6c;
        case 0x256a74u: goto label_256a74;
        case 0x256a80u: goto label_256a80;
        case 0x256aa8u: goto label_256aa8;
        case 0x256ad0u: goto label_256ad0;
        case 0x256b44u: goto label_256b44;
        case 0x256b4cu: goto label_256b4c;
        case 0x256b54u: goto label_256b54;
        case 0x256b60u: goto label_256b60;
        case 0x256b68u: goto label_256b68;
        case 0x256b70u: goto label_256b70;
        case 0x256b78u: goto label_256b78;
        case 0x256b80u: goto label_256b80;
        case 0x256b88u: goto label_256b88;
        case 0x256b94u: goto label_256b94;
        case 0x256b9cu: goto label_256b9c;
        case 0x256becu: goto label_256bec;
        case 0x256bf4u: goto label_256bf4;
        case 0x256bfcu: goto label_256bfc;
        case 0x256c08u: goto label_256c08;
        case 0x256c14u: goto label_256c14;
        case 0x256c1cu: goto label_256c1c;
        default: break;
    }

    ctx->pc = 0x256830u;

    // 0x256830: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x256830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x256834: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x256834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256838: 0xffbe0470  sd          $fp, 0x470($sp)
    ctx->pc = 0x256838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 30));
    // 0x25683c: 0xffb10400  sd          $s1, 0x400($sp)
    ctx->pc = 0x25683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 17));
    // 0x256840: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x256840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
    // 0x256844: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x256844u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x256848: 0xffb70460  sd          $s7, 0x460($sp)
    ctx->pc = 0x256848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 23));
    // 0x25684c: 0xffb60450  sd          $s6, 0x450($sp)
    ctx->pc = 0x25684cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 22));
    // 0x256850: 0xffb50440  sd          $s5, 0x440($sp)
    ctx->pc = 0x256850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 21));
    // 0x256854: 0xffb40430  sd          $s4, 0x430($sp)
    ctx->pc = 0x256854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 20));
    // 0x256858: 0xffb30420  sd          $s3, 0x420($sp)
    ctx->pc = 0x256858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 19));
    // 0x25685c: 0xffb20410  sd          $s2, 0x410($sp)
    ctx->pc = 0x25685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 18));
    // 0x256860: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x256860u;
    SET_GPR_U32(ctx, 31, 0x256868u);
    ctx->pc = 0x256864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256860u;
    // 0x256864: 0xffb003f0  sd          $s0, 0x3F0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x256860u, 0x256868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256868u;
label_256868:
    // 0x256868: 0x8f88b234  lw          $t0, -0x4DCC($gp)
    ctx->pc = 0x256868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x25686c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x25686cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256870: 0x26257340  addiu       $a1, $s1, 0x7340
    ctx->pc = 0x256870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 29504));
    // 0x256874: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x256874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x256878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x256878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25687c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x25687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256880: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x256880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256884: 0x28630019  slti        $v1, $v1, 0x19
    ctx->pc = 0x256884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x256888: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x256888u;
    {
        const bool branch_taken_0x256888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256888u;
        // 0x25688c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256888) {
            ctx->pc = 0x256898u;
            goto label_256898;
        }
    }
    ctx->pc = 0x256890u;
    // 0x256890: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x256890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x256894: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x256894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_256898:
    // 0x256898: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x256898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25689c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25689cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2568a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2568a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2568a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2568a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2568a8: 0x4600013  bltz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2568A8u;
    {
        const bool branch_taken_0x2568a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2568ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568A8u;
        // 0x2568ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568a8) {
            ctx->pc = 0x2568F8u;
            goto label_2568f8;
        }
    }
    ctx->pc = 0x2568B0u;
    // 0x2568b0: 0x8f87a264  lw          $a3, -0x5D9C($gp)
    ctx->pc = 0x2568b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2568b4: 0x3c1701fc  lui         $s7, 0x1FC
    ctx->pc = 0x2568b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)508 << 16));
    // 0x2568b8: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x2568b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x2568bc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2568bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2568c0:
    // 0x2568c0: 0x26e24a10  addiu       $v0, $s7, 0x4A10
    ctx->pc = 0x2568c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 18960));
    // 0x2568c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2568c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2568c8: 0x26247340  addiu       $a0, $s1, 0x7340
    ctx->pc = 0x2568c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 29504));
    // 0x2568cc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2568ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2568d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2568d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2568d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2568d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2568d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2568d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2568dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2568dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2568e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2568e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2568e4: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x2568e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2568e8: 0x1060fff5  beqz        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2568E8u;
    {
        const bool branch_taken_0x2568e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2568ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568E8u;
        // 0x2568ec: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568e8) {
            ctx->pc = 0x2568C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2568c0;
        }
    }
    ctx->pc = 0x2568F0u;
    // 0x2568f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2568F0u;
    {
        const bool branch_taken_0x2568f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2568F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568F0u;
        // 0x2568f4: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568f0) {
            ctx->pc = 0x256904u;
            goto label_256904;
        }
    }
    ctx->pc = 0x2568F8u;
label_2568f8:
    // 0x2568f8: 0x8f87a264  lw          $a3, -0x5D9C($gp)
    ctx->pc = 0x2568f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2568fc: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x2568fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x256900: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x256900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256904:
    // 0x256904: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256904u;
    {
        const bool branch_taken_0x256904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256904) {
            ctx->pc = 0x256908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256904u;
            // 0x256908: 0xaf809330  sw          $zero, -0x6CD0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294939440), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25690Cu;
            goto label_25690c;
        }
    }
    ctx->pc = 0x25690Cu;
label_25690c:
    // 0x25690c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x25690cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256910: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x256910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x256914: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x256914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256918: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x256918u;
    {
        const bool branch_taken_0x256918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256918) {
            ctx->pc = 0x2569D0u;
            goto label_2569d0;
        }
    }
    ctx->pc = 0x256920u;
    // 0x256920: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x256920u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x256924: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x256924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256928:
    // 0x256928: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x256928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25692c: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x25692cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x256930: 0x26c57330  addiu       $a1, $s6, 0x7330
    ctx->pc = 0x256930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 29488));
    // 0x256934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x256934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x256938: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x256938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25693c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256940: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x256940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x256944: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x256944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256948: 0x2cc20019  sltiu       $v0, $a2, 0x19
    ctx->pc = 0x256948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x25694c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25694Cu;
    {
        const bool branch_taken_0x25694c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25694Cu;
        // 0x256950: 0x3c1701fc  lui         $s7, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25694c) {
            ctx->pc = 0x25698Cu;
            goto label_25698c;
        }
    }
    ctx->pc = 0x256954u;
    // 0x256954: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x256954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x256958: 0x26e24a10  addiu       $v0, $s7, 0x4A10
    ctx->pc = 0x256958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 18960));
    // 0x25695c: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x25695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x256960: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x256960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x256964: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x256964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x256968: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x256968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25696c: 0x3c1501fc  lui         $s5, 0x1FC
    ctx->pc = 0x25696cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)508 << 16));
    // 0x256970: 0x26a64a78  addiu       $a2, $s5, 0x4A78
    ctx->pc = 0x256970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 19064));
    // 0x256974: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x256974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256978: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x256978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25697c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x256980: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x256980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x256984: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x256984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x256988: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x256988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_25698c:
    // 0x25698c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x25698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x256990: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x256990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x256994: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x256994u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x256998: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x256998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x25699c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25699Cu;
    {
        const bool branch_taken_0x25699c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25699c) {
            ctx->pc = 0x2569A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25699Cu;
            // 0x2569a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2569A4u;
            goto label_2569a4;
        }
    }
    ctx->pc = 0x2569A4u;
label_2569a4:
    // 0x2569a4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2569a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2569a8: 0x2010  mfhi        $a0
    ctx->pc = 0x2569a8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2569ac: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2569ACu;
    {
        const bool branch_taken_0x2569ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2569B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569ACu;
        // 0x2569b0: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569ac) {
            ctx->pc = 0x2569B8u;
            goto label_2569b8;
        }
    }
    ctx->pc = 0x2569B4u;
    // 0x2569b4: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2569b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2569b8:
    // 0x2569b8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2569b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2569bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2569bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2569c0: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x2569c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2569c4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2569c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2569c8: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2569C8u;
    {
        const bool branch_taken_0x2569c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2569c8) {
            ctx->pc = 0x2569CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2569C8u;
            // 0x2569cc: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256928;
        }
    }
    ctx->pc = 0x2569D0u;
label_2569d0:
    // 0x2569d0: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2569D0u;
    SET_GPR_U32(ctx, 31, 0x2569D8u);
    ctx->pc = 0x2569D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2569D0u;
    // 0x2569d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2569D0u, 0x2569D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569D8u;
label_2569d8:
    // 0x2569d8: 0x266399f0  addiu       $v1, $s3, -0x6610
    ctx->pc = 0x2569d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x2569dc: 0x8e6499f0  lw          $a0, -0x6610($s3)
    ctx->pc = 0x2569dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941168)));
    // 0x2569e0: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x2569e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2569e4: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x2569e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2569e8: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x2569E8u;
    SET_GPR_U32(ctx, 31, 0x2569F0u);
    ctx->pc = 0x2569ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2569E8u;
    // 0x2569ec: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x2569E8u, 0x2569F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569F0u;
label_2569f0:
    // 0x2569f0: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2569f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2569f4: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x2569f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x2569f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2569F8u;
    {
        const bool branch_taken_0x2569f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569F8u;
        // 0x2569fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569f8) {
            ctx->pc = 0x256A0Cu;
            goto label_256a0c;
        }
    }
    ctx->pc = 0x256A00u;
    // 0x256a00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x256a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256a04: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x256A04u;
    SET_GPR_U32(ctx, 31, 0x256A0Cu);
    ctx->pc = 0x256A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A04u;
    // 0x256a08: 0x248400cd  addiu       $a0, $a0, 0xCD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 205));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x256A04u, 0x256A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A0Cu;
label_256a0c:
    // 0x256a0c: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x256A0Cu;
    SET_GPR_U32(ctx, 31, 0x256A14u);
    ctx->pc = 0x256A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A0Cu;
    // 0x256a10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x256A0Cu, 0x256A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A14u;
label_256a14:
    // 0x256a14: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x256A14u;
    SET_GPR_U32(ctx, 31, 0x256A1Cu);
    ctx->pc = 0x256A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A14u;
    // 0x256a18: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x256A14u, 0x256A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A1Cu;
label_256a1c:
    // 0x256a1c: 0x240400d3  addiu       $a0, $zero, 0xD3
    ctx->pc = 0x256a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x256a20: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x256A20u;
    SET_GPR_U32(ctx, 31, 0x256A28u);
    ctx->pc = 0x256A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A20u;
    // 0x256a24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x256A20u, 0x256A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A28u;
label_256a28:
    // 0x256a28: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x256A28u;
    SET_GPR_U32(ctx, 31, 0x256A30u);
    ctx->pc = 0x256A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A28u;
    // 0x256a2c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x256A28u, 0x256A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A30u;
label_256a30:
    // 0x256a30: 0x240400d1  addiu       $a0, $zero, 0xD1
    ctx->pc = 0x256a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x256a34: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x256A34u;
    SET_GPR_U32(ctx, 31, 0x256A3Cu);
    ctx->pc = 0x256A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A34u;
    // 0x256a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x256A34u, 0x256A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A3Cu;
label_256a3c:
    // 0x256a3c: 0x240400d1  addiu       $a0, $zero, 0xD1
    ctx->pc = 0x256a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x256a40: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x256A40u;
    SET_GPR_U32(ctx, 31, 0x256A48u);
    ctx->pc = 0x256A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A40u;
    // 0x256a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x256A40u, 0x256A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A48u;
label_256a48:
    // 0x256a48: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x256A48u;
    SET_GPR_U32(ctx, 31, 0x256A50u);
    ctx->pc = 0x256A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A48u;
    // 0x256a4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x256A48u, 0x256A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A50u;
label_256a50:
    // 0x256a50: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x256A50u;
    SET_GPR_U32(ctx, 31, 0x256A58u);
    ctx->pc = 0x256A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A50u;
    // 0x256a54: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x256A50u, 0x256A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A58u;
label_256a58:
    // 0x256a58: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x256a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x256a5c: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x256A5Cu;
    SET_GPR_U32(ctx, 31, 0x256A64u);
    ctx->pc = 0x256A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A5Cu;
    // 0x256a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x256A5Cu, 0x256A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A64u;
label_256a64:
    // 0x256a64: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x256A64u;
    SET_GPR_U32(ctx, 31, 0x256A6Cu);
    ctx->pc = 0x256A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A64u;
    // 0x256a68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x256A64u, 0x256A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A6Cu;
label_256a6c:
    // 0x256a6c: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x256A6Cu;
    SET_GPR_U32(ctx, 31, 0x256A74u);
    ctx->pc = 0x256A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A6Cu;
    // 0x256a70: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x256A6Cu, 0x256A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A74u;
label_256a74:
    // 0x256a74: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x256a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x256a78: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x256A78u;
    SET_GPR_U32(ctx, 31, 0x256A80u);
    ctx->pc = 0x256A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A78u;
    // 0x256a7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x256A78u, 0x256A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A80u;
label_256a80:
    // 0x256a80: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x256a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x256a84: 0x26247340  addiu       $a0, $s1, 0x7340
    ctx->pc = 0x256a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 29504));
    // 0x256a88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x256a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256a8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x256a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x256a90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x256a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256a94: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x256a94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256a98: 0x6400052  bltz        $s2, . + 4 + (0x52 << 2)
    ctx->pc = 0x256A98u;
    {
        const bool branch_taken_0x256a98 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x256A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A98u;
        // 0x256a9c: 0x3c1701fc  lui         $s7, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a98) {
            ctx->pc = 0x256BE4u;
            goto label_256be4;
        }
    }
    ctx->pc = 0x256AA0u;
    // 0x256aa0: 0x26e34a10  addiu       $v1, $s7, 0x4A10
    ctx->pc = 0x256aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 18960));
    // 0x256aa4: 0x0  nop
    ctx->pc = 0x256aa4u;
    // NOP
label_256aa8:
    // 0x256aa8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x256aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x256aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256ab0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x256ab0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256ab4: 0x1a800047  blez        $s4, . + 4 + (0x47 << 2)
    ctx->pc = 0x256AB4u;
    {
        const bool branch_taken_0x256ab4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x256AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AB4u;
        // 0x256ab8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ab4) {
            ctx->pc = 0x256BD4u;
            goto label_256bd4;
        }
    }
    ctx->pc = 0x256ABCu;
    // 0x256abc: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x256abcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x256ac0: 0x3c1501fc  lui         $s5, 0x1FC
    ctx->pc = 0x256ac0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)508 << 16));
    // 0x256ac4: 0x2653ffff  addiu       $s3, $s2, -0x1
    ctx->pc = 0x256ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x256ac8: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x256ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x256acc: 0x0  nop
    ctx->pc = 0x256accu;
    // NOP
label_256ad0:
    // 0x256ad0: 0x26a64a78  addiu       $a2, $s5, 0x4A78
    ctx->pc = 0x256ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 19064));
    // 0x256ad4: 0x2431018  mult        $v0, $s2, $v1
    ctx->pc = 0x256ad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x256ad8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x256ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x256adc: 0x26c57330  addiu       $a1, $s6, 0x7330
    ctx->pc = 0x256adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 29488));
    // 0x256ae0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x256ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x256ae4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x256ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x256ae8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x256ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x256aec: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x256aecu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256af0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x256af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256af4: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x256af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x256af8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x256af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x256afc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x256b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256b04: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x256b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x256b08: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x256b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x256b0c: 0x462002c  bltzl       $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x256B0Cu;
    {
        const bool branch_taken_0x256b0c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x256b0c) {
            ctx->pc = 0x256B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256B0Cu;
            // 0x256b10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256BC0u;
            goto label_256bc0;
        }
    }
    ctx->pc = 0x256B14u;
    // 0x256b14: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x256b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x256b18: 0x28820280  slti        $v0, $a0, 0x280
    ctx->pc = 0x256b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x256b1c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x256B1Cu;
    {
        const bool branch_taken_0x256b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B1Cu;
        // 0x256b20: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b1c) {
            ctx->pc = 0x256BBCu;
            goto label_256bbc;
        }
    }
    ctx->pc = 0x256B24u;
    // 0x256b24: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x256B24u;
    {
        const bool branch_taken_0x256b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b24) {
            ctx->pc = 0x256B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256B24u;
            // 0x256b28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256BC0u;
            goto label_256bc0;
        }
    }
    ctx->pc = 0x256B2Cu;
    // 0x256b2c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x256B2Cu;
    {
        const bool branch_taken_0x256b2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x256B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B2Cu;
        // 0x256b30: 0x8f829330  lw          $v0, -0x6CD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b2c) {
            ctx->pc = 0x256B3Cu;
            goto label_256b3c;
        }
    }
    ctx->pc = 0x256B34u;
    // 0x256b34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x256b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x256b38: 0xaf829330  sw          $v0, -0x6CD0($gp)
    ctx->pc = 0x256b38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939440), GPR_U32(ctx, 2));
label_256b3c:
    // 0x256b3c: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x256B3Cu;
    SET_GPR_U32(ctx, 31, 0x256B44u);
    ctx->pc = 0x256B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B3Cu;
    // 0x256b40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x256B3Cu, 0x256B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B44u;
label_256b44:
    // 0x256b44: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x256B44u;
    SET_GPR_U32(ctx, 31, 0x256B4Cu);
    ctx->pc = 0x256B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B44u;
    // 0x256b48: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x256B44u, 0x256B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B4Cu;
label_256b4c:
    // 0x256b4c: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x256B4Cu;
    SET_GPR_U32(ctx, 31, 0x256B54u);
    ctx->pc = 0x256B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B4Cu;
    // 0x256b50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x256B4Cu, 0x256B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B54u;
label_256b54:
    // 0x256b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b58: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x256B58u;
    SET_GPR_U32(ctx, 31, 0x256B60u);
    ctx->pc = 0x256B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B58u;
    // 0x256b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x256B58u, 0x256B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B60u;
label_256b60:
    // 0x256b60: 0xc0a9872  jal         func_2A61C8
    ctx->pc = 0x256B60u;
    SET_GPR_U32(ctx, 31, 0x256B68u);
    ctx->pc = 0x256B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B60u;
    // 0x256b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A61C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A61C8u, 0x256B60u, 0x256B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B68u;
label_256b68:
    // 0x256b68: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x256B68u;
    SET_GPR_U32(ctx, 31, 0x256B70u);
    ctx->pc = 0x256B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B68u;
    // 0x256b6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x256B68u, 0x256B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B70u;
label_256b70:
    // 0x256b70: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x256B70u;
    SET_GPR_U32(ctx, 31, 0x256B78u);
    ctx->pc = 0x256B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B70u;
    // 0x256b74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x256B70u, 0x256B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B78u;
label_256b78:
    // 0x256b78: 0xc089b7e  jal         func_226DF8
    ctx->pc = 0x256B78u;
    SET_GPR_U32(ctx, 31, 0x256B80u);
    ctx->pc = 0x226DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226DF8u, 0x256B78u, 0x256B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B80u;
label_256b80:
    // 0x256b80: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x256B80u;
    SET_GPR_U32(ctx, 31, 0x256B88u);
    ctx->pc = 0x256B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B80u;
    // 0x256b84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x256B80u, 0x256B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B88u;
label_256b88:
    // 0x256b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b8c: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x256B8Cu;
    SET_GPR_U32(ctx, 31, 0x256B94u);
    ctx->pc = 0x256B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B8Cu;
    // 0x256b90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x256B8Cu, 0x256B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B94u;
label_256b94:
    // 0x256b94: 0xc096222  jal         func_258888
    ctx->pc = 0x256B94u;
    SET_GPR_U32(ctx, 31, 0x256B9Cu);
    ctx->pc = 0x256B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B94u;
    // 0x256b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258888u, 0x256B94u, 0x256B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B9Cu;
label_256b9c:
    // 0x256b9c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x256b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x256ba0: 0x21d2021  addu        $a0, $s0, $sp
    ctx->pc = 0x256ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x256ba4: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x256ba4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x256ba8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256BA8u;
    {
        const bool branch_taken_0x256ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256ba8) {
            ctx->pc = 0x256BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256BA8u;
            // 0x256bac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256BB0u;
            goto label_256bb0;
        }
    }
    ctx->pc = 0x256BB0u;
label_256bb0:
    // 0x256bb0: 0x1810  mfhi        $v1
    ctx->pc = 0x256bb0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x256bb4: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x256bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x256bb8: 0xa083ffff  sb          $v1, -0x1($a0)
    ctx->pc = 0x256bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
label_256bbc:
    // 0x256bbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x256bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_256bc0:
    // 0x256bc0: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x256bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x256bc4: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x256BC4u;
    {
        const bool branch_taken_0x256bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BC4u;
        // 0x256bc8: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bc4) {
            ctx->pc = 0x256AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256ad0;
        }
    }
    ctx->pc = 0x256BCCu;
    // 0x256bcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x256BCCu;
    {
        const bool branch_taken_0x256bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BCCu;
        // 0x256bd0: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bcc) {
            ctx->pc = 0x256BDCu;
            goto label_256bdc;
        }
    }
    ctx->pc = 0x256BD4u;
label_256bd4:
    // 0x256bd4: 0x2653ffff  addiu       $s3, $s2, -0x1
    ctx->pc = 0x256bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x256bd8: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x256bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_256bdc:
    // 0x256bdc: 0x641ffb2  bgez        $s2, . + 4 + (-0x4E << 2)
    ctx->pc = 0x256BDCu;
    {
        const bool branch_taken_0x256bdc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x256BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BDCu;
        // 0x256be0: 0x26e34a10  addiu       $v1, $s7, 0x4A10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 18960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bdc) {
            ctx->pc = 0x256AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256aa8;
        }
    }
    ctx->pc = 0x256BE4u;
label_256be4:
    // 0x256be4: 0xc0a9894  jal         func_2A6250
    ctx->pc = 0x256BE4u;
    SET_GPR_U32(ctx, 31, 0x256BECu);
    ctx->pc = 0x2A6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6250u, 0x256BE4u, 0x256BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BECu;
label_256bec:
    // 0x256bec: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x256BECu;
    SET_GPR_U32(ctx, 31, 0x256BF4u);
    ctx->pc = 0x256BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BECu;
    // 0x256bf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x256BECu, 0x256BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BF4u;
label_256bf4:
    // 0x256bf4: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x256BF4u;
    SET_GPR_U32(ctx, 31, 0x256BFCu);
    ctx->pc = 0x256BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BF4u;
    // 0x256bf8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x256BF4u, 0x256BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BFCu;
label_256bfc:
    // 0x256bfc: 0x240400d2  addiu       $a0, $zero, 0xD2
    ctx->pc = 0x256bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x256c00: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x256C00u;
    SET_GPR_U32(ctx, 31, 0x256C08u);
    ctx->pc = 0x256C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C00u;
    // 0x256c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x256C00u, 0x256C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C08u;
label_256c08:
    // 0x256c08: 0x240400d2  addiu       $a0, $zero, 0xD2
    ctx->pc = 0x256c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x256c0c: 0xc09bf82  jal         func_26FE08
    ctx->pc = 0x256C0Cu;
    SET_GPR_U32(ctx, 31, 0x256C14u);
    ctx->pc = 0x256C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C0Cu;
    // 0x256c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE08u, 0x256C0Cu, 0x256C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C14u;
label_256c14:
    // 0x256c14: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x256C14u;
    SET_GPR_U32(ctx, 31, 0x256C1Cu);
    ctx->pc = 0x256C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C14u;
    // 0x256c18: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x256C14u, 0x256C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C1Cu;
label_256c1c:
    // 0x256c1c: 0x8f83a264  lw          $v1, -0x5D9C($gp)
    ctx->pc = 0x256c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x256c20: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x256c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x256c24: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x256c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x256c28: 0xdfbe0470  ld          $fp, 0x470($sp)
    ctx->pc = 0x256c28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x256c2c: 0xdfb70460  ld          $s7, 0x460($sp)
    ctx->pc = 0x256c2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x256c30: 0xdfb60450  ld          $s6, 0x450($sp)
    ctx->pc = 0x256c30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x256c34: 0xdfb50440  ld          $s5, 0x440($sp)
    ctx->pc = 0x256c34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x256c38: 0xdfb40430  ld          $s4, 0x430($sp)
    ctx->pc = 0x256c38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x256c3c: 0xdfb30420  ld          $s3, 0x420($sp)
    ctx->pc = 0x256c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x256c40: 0xdfb20410  ld          $s2, 0x410($sp)
    ctx->pc = 0x256c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x256c44: 0xdfb10400  ld          $s1, 0x400($sp)
    ctx->pc = 0x256c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x256c48: 0xdfb003f0  ld          $s0, 0x3F0($sp)
    ctx->pc = 0x256c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x256c4c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x256c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x256c50: 0x3e00008  jr          $ra
    ctx->pc = 0x256C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C50u;
        // 0x256c54: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256C58u;
}
