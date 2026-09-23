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

// Function: remotePropTick
// Address: 0x26c440 - 0x26ddbc
void remotePropTick_0x26c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("remotePropTick_0x26c440");
#endif

    switch (ctx->pc) {
        case 0x26c4c8u: goto label_26c4c8;
        case 0x26c4d8u: goto label_26c4d8;
        case 0x26c55cu: goto label_26c55c;
        case 0x26c6d0u: goto label_26c6d0;
        case 0x26c6dcu: goto label_26c6dc;
        case 0x26c708u: goto label_26c708;
        case 0x26c74cu: goto label_26c74c;
        case 0x26c758u: goto label_26c758;
        case 0x26c7c0u: goto label_26c7c0;
        case 0x26c858u: goto label_26c858;
        case 0x26c8c0u: goto label_26c8c0;
        case 0x26c948u: goto label_26c948;
        case 0x26c954u: goto label_26c954;
        case 0x26c9d8u: goto label_26c9d8;
        case 0x26ca28u: goto label_26ca28;
        case 0x26ca34u: goto label_26ca34;
        case 0x26ca84u: goto label_26ca84;
        case 0x26ca90u: goto label_26ca90;
        case 0x26cad0u: goto label_26cad0;
        case 0x26cb8cu: goto label_26cb8c;
        case 0x26cb94u: goto label_26cb94;
        case 0x26cba4u: goto label_26cba4;
        case 0x26cbb4u: goto label_26cbb4;
        case 0x26cbc8u: goto label_26cbc8;
        case 0x26cce4u: goto label_26cce4;
        case 0x26cd5cu: goto label_26cd5c;
        case 0x26ce68u: goto label_26ce68;
        case 0x26ce90u: goto label_26ce90;
        case 0x26cf18u: goto label_26cf18;
        case 0x26cf24u: goto label_26cf24;
        case 0x26cf54u: goto label_26cf54;
        case 0x26cff8u: goto label_26cff8;
        case 0x26d004u: goto label_26d004;
        case 0x26d040u: goto label_26d040;
        case 0x26d0d4u: goto label_26d0d4;
        case 0x26d0e8u: goto label_26d0e8;
        case 0x26d1ccu: goto label_26d1cc;
        case 0x26d288u: goto label_26d288;
        case 0x26d2f0u: goto label_26d2f0;
        case 0x26d330u: goto label_26d330;
        case 0x26d358u: goto label_26d358;
        case 0x26d368u: goto label_26d368;
        case 0x26d398u: goto label_26d398;
        case 0x26d3b8u: goto label_26d3b8;
        case 0x26d3fcu: goto label_26d3fc;
        case 0x26d414u: goto label_26d414;
        case 0x26d434u: goto label_26d434;
        case 0x26d44cu: goto label_26d44c;
        case 0x26d490u: goto label_26d490;
        case 0x26d524u: goto label_26d524;
        case 0x26d530u: goto label_26d530;
        case 0x26d558u: goto label_26d558;
        case 0x26d570u: goto label_26d570;
        case 0x26d598u: goto label_26d598;
        case 0x26d5b0u: goto label_26d5b0;
        case 0x26d5c8u: goto label_26d5c8;
        case 0x26d5e0u: goto label_26d5e0;
        case 0x26d5f8u: goto label_26d5f8;
        case 0x26d63cu: goto label_26d63c;
        case 0x26d654u: goto label_26d654;
        case 0x26d66cu: goto label_26d66c;
        case 0x26d684u: goto label_26d684;
        case 0x26d69cu: goto label_26d69c;
        case 0x26d6b4u: goto label_26d6b4;
        case 0x26d6d4u: goto label_26d6d4;
        case 0x26d6ecu: goto label_26d6ec;
        case 0x26d704u: goto label_26d704;
        case 0x26d71cu: goto label_26d71c;
        case 0x26d734u: goto label_26d734;
        case 0x26d74cu: goto label_26d74c;
        case 0x26d764u: goto label_26d764;
        case 0x26d77cu: goto label_26d77c;
        case 0x26d794u: goto label_26d794;
        case 0x26d7acu: goto label_26d7ac;
        case 0x26d7c4u: goto label_26d7c4;
        case 0x26d7dcu: goto label_26d7dc;
        case 0x26d7f8u: goto label_26d7f8;
        case 0x26d810u: goto label_26d810;
        case 0x26d82cu: goto label_26d82c;
        case 0x26d844u: goto label_26d844;
        case 0x26d858u: goto label_26d858;
        case 0x26d870u: goto label_26d870;
        case 0x26d8b4u: goto label_26d8b4;
        case 0x26d8ccu: goto label_26d8cc;
        case 0x26d8ecu: goto label_26d8ec;
        case 0x26d904u: goto label_26d904;
        case 0x26d924u: goto label_26d924;
        case 0x26d93cu: goto label_26d93c;
        case 0x26d944u: goto label_26d944;
        case 0x26d994u: goto label_26d994;
        case 0x26d9acu: goto label_26d9ac;
        case 0x26d9ccu: goto label_26d9cc;
        case 0x26d9e4u: goto label_26d9e4;
        case 0x26d9f8u: goto label_26d9f8;
        case 0x26da10u: goto label_26da10;
        case 0x26da60u: goto label_26da60;
        case 0x26da78u: goto label_26da78;
        case 0x26da98u: goto label_26da98;
        case 0x26dab0u: goto label_26dab0;
        case 0x26dad0u: goto label_26dad0;
        case 0x26dae8u: goto label_26dae8;
        case 0x26daf0u: goto label_26daf0;
        case 0x26db40u: goto label_26db40;
        case 0x26db58u: goto label_26db58;
        case 0x26db78u: goto label_26db78;
        case 0x26db90u: goto label_26db90;
        case 0x26dbb4u: goto label_26dbb4;
        case 0x26dbccu: goto label_26dbcc;
        case 0x26dc10u: goto label_26dc10;
        case 0x26dc28u: goto label_26dc28;
        case 0x26dc48u: goto label_26dc48;
        case 0x26dc60u: goto label_26dc60;
        case 0x26dc7cu: goto label_26dc7c;
        case 0x26dc94u: goto label_26dc94;
        case 0x26dc9cu: goto label_26dc9c;
        case 0x26dd08u: goto label_26dd08;
        case 0x26dd20u: goto label_26dd20;
        case 0x26dd40u: goto label_26dd40;
        case 0x26dd58u: goto label_26dd58;
        case 0x26dd7cu: goto label_26dd7c;
        default: break;
    }

    ctx->pc = 0x26c440u;

    // 0x26c440: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x26c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x26c444: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x26c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x26c448: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x26c448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x26c44c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x26c44cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c450: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x26c450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x26c454: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x26c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x26c458: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x26c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x26c45c: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x26c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x26c460: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x26c460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x26c464: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x26c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x26c468: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x26c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x26c46c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x26c46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x26c470: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x26c470u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x26c474: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x26c474u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x26c478: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x26c478u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x26c47c: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x26c47cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x26c480: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x26c480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x26c484: 0x8ec40020  lw          $a0, 0x20($s6)
    ctx->pc = 0x26c484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26c488: 0x8ed20160  lw          $s2, 0x160($s6)
    ctx->pc = 0x26c488u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 352)));
    // 0x26c48c: 0x94820124  lhu         $v0, 0x124($a0)
    ctx->pc = 0x26c48cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x26c490: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26c490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c494: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x26c494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26c498: 0x3042fffc  andi        $v0, $v0, 0xFFFC
    ctx->pc = 0x26c498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x26c49c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C49Cu;
    {
        const bool branch_taken_0x26c49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C49Cu;
        // 0x26c4a0: 0xa4820124  sh          $v0, 0x124($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c49c) {
            ctx->pc = 0x26C4B4u;
            goto label_26c4b4;
        }
    }
    ctx->pc = 0x26C4A4u;
    // 0x26c4a4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x26c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26c4a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26c4ac: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x26C4ACu;
    {
        const bool branch_taken_0x26c4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c4ac) {
            ctx->pc = 0x26C4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C4ACu;
            // 0x26c4b0: 0x8e450064  lw          $a1, 0x64($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C4FCu;
            goto label_26c4fc;
        }
    }
    ctx->pc = 0x26C4B4u;
label_26c4b4:
    // 0x26c4b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c4b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26c4bc: 0x1840062f  blez        $v0, . + 4 + (0x62F << 2)
    ctx->pc = 0x26C4BCu;
    {
        const bool branch_taken_0x26c4bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4BCu;
        // 0x26c4c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4bc) {
            ctx->pc = 0x26DD7Cu;
            goto label_26dd7c;
        }
    }
    ctx->pc = 0x26C4C4u;
    // 0x26c4c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x26c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_26c4c8:
    // 0x26c4c8: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x26c4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x26c4cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26c4ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x26c4d0: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x26C4D0u;
    SET_GPR_U32(ctx, 31, 0x26C4D8u);
    ctx->pc = 0x26C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C4D0u;
    // 0x26c4d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x26C4D0u, 0x26C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4D8u;
label_26c4d8:
    // 0x26c4d8: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26c4dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26c4e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26c4e8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x26c4e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26c4ec: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x26C4ECu;
    {
        const bool branch_taken_0x26c4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c4ec) {
            ctx->pc = 0x26C4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C4ECu;
            // 0x26c4f0: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c4c8;
        }
    }
    ctx->pc = 0x26C4F4u;
    // 0x26c4f4: 0x10000622  b           . + 4 + (0x622 << 2)
    ctx->pc = 0x26C4F4u;
    {
        const bool branch_taken_0x26c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4F4u;
        // 0x26c4f8: 0xdfbf0140  ld          $ra, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4f4) {
            ctx->pc = 0x26DD80u;
            goto label_26dd80;
        }
    }
    ctx->pc = 0x26C4FCu;
label_26c4fc:
    // 0x26c4fc: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x26c4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26c500: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x26c500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x26c504: 0x240701a9  addiu       $a3, $zero, 0x1A9
    ctx->pc = 0x26c504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
    // 0x26c508: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x26c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x26c50c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x26c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c514: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x26c514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x26c518: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c51c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x26c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x26c520: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x26c520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26c524: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x26c524u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26c528: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C528u;
    {
        const bool branch_taken_0x26c528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x26C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C528u;
        // 0x26c52c: 0xafa400a0  sw          $a0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c528) {
            ctx->pc = 0x26C538u;
            goto label_26c538;
        }
    }
    ctx->pc = 0x26C530u;
    // 0x26c530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26C530u;
    {
        const bool branch_taken_0x26c530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C530u;
        // 0x26c534: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c530) {
            ctx->pc = 0x26C550u;
            goto label_26c550;
        }
    }
    ctx->pc = 0x26C538u;
label_26c538:
    // 0x26c538: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x26c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c53c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x26c53cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c540: 0x80620007  lb          $v0, 0x7($v1)
    ctx->pc = 0x26c540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x26c544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c548: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26c548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26c54c: 0x62f00a  movz        $fp, $v1, $v0
    ctx->pc = 0x26c54cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
label_26c550:
    // 0x26c550: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26c550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c554: 0xc09a530  jal         func_2694C0
    ctx->pc = 0x26C554u;
    SET_GPR_U32(ctx, 31, 0x26C55Cu);
    ctx->pc = 0x26C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C554u;
    // 0x26c558: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2694C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2694C0u, 0x26C554u, 0x26C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C55Cu;
label_26c55c:
    // 0x26c55c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x26c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26c560: 0x147000e4  bne         $v1, $s0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x26C560u;
    {
        const bool branch_taken_0x26c560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x26C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C560u;
        // 0x26c564: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c560) {
            ctx->pc = 0x26C8F4u;
            goto label_26c8f4;
        }
    }
    ctx->pc = 0x26C568u;
    // 0x26c568: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x26c568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c56c: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x26c56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c570: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x26c570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c574: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x26c574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x26c578: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x26c578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c57c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26c57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c580: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26c580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c584: 0x0  nop
    ctx->pc = 0x26c584u;
    // NOP
    // 0x26c588: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26C588u;
    {
        const bool branch_taken_0x26c588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C588u;
        // 0x26c58c: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c588) {
            ctx->pc = 0x26C59Cu;
            goto label_26c59c;
        }
    }
    ctx->pc = 0x26C590u;
    // 0x26c590: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x26c590u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x26c594: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x26c594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x26c598: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x26c598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_26c59c:
    // 0x26c59c: 0xc645000c  lwc1        $f5, 0xC($s2)
    ctx->pc = 0x26c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26c5a0: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x26c5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c5a4: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x26c5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c5a8: 0x0  nop
    ctx->pc = 0x26c5a8u;
    // NOP
    // 0x26c5ac: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x26C5ACu;
    {
        const bool branch_taken_0x26c5ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c5ac) {
            ctx->pc = 0x26C5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C5ACu;
            // 0x26c5b0: 0xc781b468  lwc1        $f1, -0x4B98($gp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C5CCu;
            goto label_26c5cc;
        }
    }
    ctx->pc = 0x26C5B4u;
    // 0x26c5b4: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x26c5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c5b8: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x26c5b8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x26c5bc: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x26c5bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x26c5c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26c5c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26c5c4: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x26c5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x26c5c8: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x26c5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c5cc:
    // 0x26c5cc: 0xc643003c  lwc1        $f3, 0x3C($s2)
    ctx->pc = 0x26c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c5d0: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x26c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c5d4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x26c5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x26c5d8: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x26c5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c5dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26c5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c5e0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26c5e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c5e4: 0x0  nop
    ctx->pc = 0x26c5e4u;
    // NOP
    // 0x26c5e8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26C5E8u;
    {
        const bool branch_taken_0x26c5e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5E8u;
        // 0x26c5ec: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5e8) {
            ctx->pc = 0x26C5FCu;
            goto label_26c5fc;
        }
    }
    ctx->pc = 0x26C5F0u;
    // 0x26c5f0: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x26c5f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x26c5f4: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x26c5f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x26c5f8: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x26c5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_26c5fc:
    // 0x26c5fc: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x26c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c600: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x26c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c604: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x26c604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c608: 0x0  nop
    ctx->pc = 0x26c608u;
    // NOP
    // 0x26c60c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x26C60Cu;
    {
        const bool branch_taken_0x26c60c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c60c) {
            ctx->pc = 0x26C610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C60Cu;
            // 0x26c610: 0xc781b468  lwc1        $f1, -0x4B98($gp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C62Cu;
            goto label_26c62c;
        }
    }
    ctx->pc = 0x26C614u;
    // 0x26c614: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x26c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c618: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x26c618u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x26c61c: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x26c61cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x26c620: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26c620u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26c624: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x26c624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x26c628: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x26c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c62c:
    // 0x26c62c: 0xc6440040  lwc1        $f4, 0x40($s2)
    ctx->pc = 0x26c62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c630: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x26c630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c634: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x26c634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x26c638: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x26c638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c63c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26c63cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c640: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26c640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c644: 0x0  nop
    ctx->pc = 0x26c644u;
    // NOP
    // 0x26c648: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26C648u;
    {
        const bool branch_taken_0x26c648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C648u;
        // 0x26c64c: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c648) {
            ctx->pc = 0x26C65Cu;
            goto label_26c65c;
        }
    }
    ctx->pc = 0x26C650u;
    // 0x26c650: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x26c650u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x26c654: 0xe642001c  swc1        $f2, 0x1C($s2)
    ctx->pc = 0x26c654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x26c658: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x26c658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_26c65c:
    // 0x26c65c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x26c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c660: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x26c660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26c664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c668: 0x0  nop
    ctx->pc = 0x26c668u;
    // NOP
    // 0x26c66c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x26C66Cu;
    {
        const bool branch_taken_0x26c66c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c66c) {
            ctx->pc = 0x26C670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C66Cu;
            // 0x26c670: 0xe6450010  swc1        $f5, 0x10($s2) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C688u;
            goto label_26c688;
        }
    }
    ctx->pc = 0x26C674u;
    // 0x26c674: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x26c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c678: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x26c678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x26c67c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26c67cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26c680: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x26c680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x26c684: 0xe6450010  swc1        $f5, 0x10($s2)
    ctx->pc = 0x26c684u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_26c688:
    // 0x26c688: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26c688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c68c: 0xe6430018  swc1        $f3, 0x18($s2)
    ctx->pc = 0x26c68cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x26c690: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26c690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c694: 0xc795844c  lwc1        $f21, -0x7BB4($gp)
    ctx->pc = 0x26c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26c698: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x26c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c69c: 0xc6cc004c  lwc1        $f12, 0x4C($s6)
    ctx->pc = 0x26c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c6a0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26c6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26c6a4: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x26c6a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x26c6a8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26c6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26c6ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26c6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26c6b0: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x26c6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c6b4: 0x0  nop
    ctx->pc = 0x26c6b4u;
    // NOP
    // 0x26c6b8: 0x0  nop
    ctx->pc = 0x26c6b8u;
    // NOP
    // 0x26c6bc: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x26c6bcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x26c6c0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x26c6c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26c6c4: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x26c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c6c8: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x26C6C8u;
    SET_GPR_U32(ctx, 31, 0x26C6D0u);
    ctx->pc = 0x26C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6C8u;
    // 0x26c6cc: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x26C6C8u, 0x26C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6D0u;
label_26c6d0:
    // 0x26c6d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c6d4: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x26C6D4u;
    SET_GPR_U32(ctx, 31, 0x26C6DCu);
    ctx->pc = 0x26C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6D4u;
    // 0x26c6d8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x26C6D4u, 0x26C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6DCu;
label_26c6dc:
    // 0x26c6dc: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x26c6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c6e0: 0xc6c00034  lwc1        $f0, 0x34($s6)
    ctx->pc = 0x26c6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c6e4: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x26c6e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x26c6e8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x26c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c6ec: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x26c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c6f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26c6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c6f4: 0x0  nop
    ctx->pc = 0x26c6f4u;
    // NOP
    // 0x26c6f8: 0x0  nop
    ctx->pc = 0x26c6f8u;
    // NOP
    // 0x26c6fc: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x26c6fcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x26c700: 0xc0b5d22  jal         func_2D7488
    ctx->pc = 0x26C700u;
    SET_GPR_U32(ctx, 31, 0x26C708u);
    ctx->pc = 0x26C704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C700u;
    // 0x26c704: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7488u, 0x26C700u, 0x26C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C708u;
label_26c708:
    // 0x26c708: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26c70c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c710: 0x0  nop
    ctx->pc = 0x26c710u;
    // NOP
    // 0x26c714: 0x0  nop
    ctx->pc = 0x26c714u;
    // NOP
    // 0x26c718: 0x4600b5c3  div.s       $f23, $f22, $f0
    ctx->pc = 0x26c718u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[23] = ctx->f[22] / ctx->f[0];
    // 0x26c71c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x26c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x26c720: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x26c720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26c724: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x26c724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x26c728: 0xc6c0004c  lwc1        $f0, 0x4C($s6)
    ctx->pc = 0x26c728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c72c: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x26c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c730: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x26c730u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26c734: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x26c734u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x26c738: 0x0  nop
    ctx->pc = 0x26c738u;
    // NOP
    // 0x26c73c: 0x0  nop
    ctx->pc = 0x26c73cu;
    // NOP
    // 0x26c740: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x26c740u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x26c744: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x26C744u;
    SET_GPR_U32(ctx, 31, 0x26C74Cu);
    ctx->pc = 0x26C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C744u;
    // 0x26c748: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x26C744u, 0x26C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C74Cu;
label_26c74c:
    // 0x26c74c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c750: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x26C750u;
    SET_GPR_U32(ctx, 31, 0x26C758u);
    ctx->pc = 0x26C754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C750u;
    // 0x26c754: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x26C750u, 0x26C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C758u;
label_26c758:
    // 0x26c758: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x26c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c75c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x26c75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c760: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x26c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c764: 0x461718c2  mul.s       $f3, $f3, $f23
    ctx->pc = 0x26c764u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x26c768: 0xc6c10030  lwc1        $f1, 0x30($s6)
    ctx->pc = 0x26c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c76c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x26c76cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x26c770: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x26c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c774: 0x46171082  mul.s       $f2, $f2, $f23
    ctx->pc = 0x26c774u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x26c778: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x26c778u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26c77c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x26c77cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x26c780: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x26c780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26c784: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x26c784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26c788: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x26c788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x26c78c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x26c78cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26c790: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x26c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c794: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x26c794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x26c798: 0xe6410050  swc1        $f1, 0x50($s2)
    ctx->pc = 0x26c798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x26c79c: 0xc6c00038  lwc1        $f0, 0x38($s6)
    ctx->pc = 0x26c79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c7a0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x26c7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c7a4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x26c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c7a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26c7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c7ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26c7acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26c7b0: 0x18a002e1  blez        $a1, . + 4 + (0x2E1 << 2)
    ctx->pc = 0x26C7B0u;
    {
        const bool branch_taken_0x26c7b0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x26C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7B0u;
        // 0x26c7b4: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7b0) {
            ctx->pc = 0x26D338u;
            goto label_26d338;
        }
    }
    ctx->pc = 0x26C7B8u;
    // 0x26c7b8: 0x1ea980  sll         $s5, $fp, 6
    ctx->pc = 0x26c7b8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x26c7bc: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x26c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
label_26c7c0:
    // 0x26c7c0: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x26c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x26c7c4: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x26c7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26c7c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c7cc: 0x8c510180  lw          $s1, 0x180($v0)
    ctx->pc = 0x26c7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x26c7d0: 0x8e240160  lw          $a0, 0x160($s1)
    ctx->pc = 0x26c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x26c7d4: 0x8c820a94  lw          $v0, 0xA94($a0)
    ctx->pc = 0x26c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x26c7d8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x26c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x26c7dc: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x26C7DCu;
    {
        const bool branch_taken_0x26c7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c7dc) {
            ctx->pc = 0x26C7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C7DCu;
            // 0x26c7e0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C8E0u;
            goto label_26c8e0;
        }
    }
    ctx->pc = 0x26C7E4u;
    // 0x26c7e4: 0xc6430050  lwc1        $f3, 0x50($s2)
    ctx->pc = 0x26c7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c7e8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x26c7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c7ec: 0xc6440054  lwc1        $f4, 0x54($s2)
    ctx->pc = 0x26c7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c7f0: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x26c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c7f4: 0x46001dc1  sub.s       $f23, $f3, $f0
    ctx->pc = 0x26c7f4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26c7f8: 0xc6420058  lwc1        $f2, 0x58($s2)
    ctx->pc = 0x26c7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c7fc: 0x46012581  sub.s       $f22, $f4, $f1
    ctx->pc = 0x26c7fcu;
    ctx->f[22] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x26c800: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x26c800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c804: 0x4617b802  mul.s       $f0, $f23, $f23
    ctx->pc = 0x26c804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x26c808: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x26c808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c80c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x26c80cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x26c810: 0x4616b102  mul.s       $f4, $f22, $f22
    ctx->pc = 0x26c810u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x26c814: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26c814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26c818: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x26c818u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26c81c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x26c81cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x26c820: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26c820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26c824: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26c824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c828: 0x0  nop
    ctx->pc = 0x26c828u;
    // NOP
    // 0x26c82c: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x26C82Cu;
    {
        const bool branch_taken_0x26c82c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c82c) {
            ctx->pc = 0x26C830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C82Cu;
            // 0x26c830: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C8E0u;
            goto label_26c8e0;
        }
    }
    ctx->pc = 0x26C834u;
    // 0x26c834: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x26c834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26c838: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C838u;
    {
        const bool branch_taken_0x26c838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C838u;
        // 0x26c83c: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c838) {
            ctx->pc = 0x26C84Cu;
            goto label_26c84c;
        }
    }
    ctx->pc = 0x26C840u;
    // 0x26c840: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x26c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x26c844: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26C844u;
    {
        const bool branch_taken_0x26c844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c844) {
            ctx->pc = 0x26C848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C844u;
            // 0x26c848: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C8E0u;
            goto label_26c8e0;
        }
    }
    ctx->pc = 0x26C84Cu;
label_26c84c:
    // 0x26c84c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26c84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c850: 0xc09a542  jal         func_269508
    ctx->pc = 0x26C850u;
    SET_GPR_U32(ctx, 31, 0x26C858u);
    ctx->pc = 0x26C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C850u;
    // 0x26c854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269508u, 0x26C850u, 0x26C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C858u;
label_26c858:
    // 0x26c858: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x26c858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c85c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c860: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x26c860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c864: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x26c864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26c868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26c86c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26c86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26c870: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c874: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26c874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26c878: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x26c878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c87c: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x26c87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c880: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c884: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c888: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c88c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x26c88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x26c890: 0x240bfffd  addiu       $t3, $zero, -0x3
    ctx->pc = 0x26c890u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x26c894: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x26c894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c898: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x26c898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26c89c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x26c89cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26c8a0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x26c8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x26c8a4: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x26c8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c8a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26c8ac: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x26c8acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x26c8b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26c8b4: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x26c8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x26c8b8: 0xc09640e  jal         func_259038
    ctx->pc = 0x26C8B8u;
    SET_GPR_U32(ctx, 31, 0x26C8C0u);
    ctx->pc = 0x26C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C8B8u;
    // 0x26c8bc: 0xe7a10078  swc1        $f1, 0x78($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x26C8B8u, 0x26C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8C0u;
label_26c8c0:
    // 0x26c8c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C8C0u;
    {
        const bool branch_taken_0x26c8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8C0u;
        // 0x26c8c4: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8c0) {
            ctx->pc = 0x26C8DCu;
            goto label_26c8dc;
        }
    }
    ctx->pc = 0x26C8C8u;
    // 0x26c8c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c8cc: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x26c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x26c8d0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x26c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x26c8d4: 0xae510060  sw          $s1, 0x60($s2)
    ctx->pc = 0x26c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 17));
    // 0x26c8d8: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x26c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_26c8dc:
    // 0x26c8dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26c8dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_26c8e0:
    // 0x26c8e0: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x26c8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26c8e4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x26C8E4u;
    {
        const bool branch_taken_0x26c8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8E4u;
        // 0x26c8e8: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8e4) {
            ctx->pc = 0x26C7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c7c0;
        }
    }
    ctx->pc = 0x26C8ECu;
    // 0x26c8ec: 0x10000294  b           . + 4 + (0x294 << 2)
    ctx->pc = 0x26C8ECu;
    {
        const bool branch_taken_0x26c8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8ECu;
        // 0x26c8f0: 0x8ec40020  lw          $a0, 0x20($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8ec) {
            ctx->pc = 0x26D340u;
            goto label_26d340;
        }
    }
    ctx->pc = 0x26C8F4u;
label_26c8f4:
    // 0x26c8f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c8f8: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x26C8F8u;
    {
        const bool branch_taken_0x26c8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8F8u;
        // 0x26c8fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8f8) {
            ctx->pc = 0x26CD6Cu;
            goto label_26cd6c;
        }
    }
    ctx->pc = 0x26C900u;
    // 0x26c900: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x26c900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c904: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c908: 0xc6cc004c  lwc1        $f12, 0x4C($s6)
    ctx->pc = 0x26c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c90c: 0xc7958450  lwc1        $f21, -0x7BB0($gp)
    ctx->pc = 0x26c90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26c910: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26c910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26c914: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x26c914u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x26c918: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26c918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26c91c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26c91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26c920: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x26c920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26c928: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x26c928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x26c92c: 0x0  nop
    ctx->pc = 0x26c92cu;
    // NOP
    // 0x26c930: 0x0  nop
    ctx->pc = 0x26c930u;
    // NOP
    // 0x26c934: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x26c934u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x26c938: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x26c938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26c93c: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x26c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c940: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x26C940u;
    SET_GPR_U32(ctx, 31, 0x26C948u);
    ctx->pc = 0x26C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C940u;
    // 0x26c944: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x26C940u, 0x26C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C948u;
label_26c948:
    // 0x26c948: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26c948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c94c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x26C94Cu;
    SET_GPR_U32(ctx, 31, 0x26C954u);
    ctx->pc = 0x26C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C94Cu;
    // 0x26c950: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x26C94Cu, 0x26C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C954u;
label_26c954:
    // 0x26c954: 0xc6c00030  lwc1        $f0, 0x30($s6)
    ctx->pc = 0x26c954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c958: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x26c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c95c: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x26c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x26c960: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26c960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c964: 0xc6c30034  lwc1        $f3, 0x34($s6)
    ctx->pc = 0x26c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c968: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x26c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c96c: 0xc6c40038  lwc1        $f4, 0x38($s6)
    ctx->pc = 0x26c96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c970: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x26c970u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26c974: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x26c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c978: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x26c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c97c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x26c97cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x26c980: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x26c980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26c984: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x26c984u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x26c988: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x26c988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26c98c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x26c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c990: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x26c990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x26c994: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x26c994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x26c998: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x26c998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26c99c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x26c99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26c9a0: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x26c9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c9a4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x26c9a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x26c9a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x26c9a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26c9ac: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x26c9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26c9b0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x26c9b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26c9b4: 0x0  nop
    ctx->pc = 0x26c9b4u;
    // NOP
    // 0x26c9b8: 0x0  nop
    ctx->pc = 0x26c9b8u;
    // NOP
    // 0x26c9bc: 0x460c0004  c1          0xC0004
    ctx->pc = 0x26c9bcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x26c9c0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x26c9c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c9c4: 0x0  nop
    ctx->pc = 0x26c9c4u;
    // NOP
    // 0x26c9c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x26C9C8u;
    {
        const bool branch_taken_0x26c9c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9C8u;
        // 0x26c9cc: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9c8) {
            ctx->pc = 0x26C9D8u;
            goto label_26c9d8;
        }
    }
    ctx->pc = 0x26C9D0u;
    // 0x26c9d0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x26C9D0u;
    SET_GPR_U32(ctx, 31, 0x26C9D8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x26C9D0u, 0x26C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9D8u;
label_26c9d8:
    // 0x26c9d8: 0xc6cc004c  lwc1        $f12, 0x4C($s6)
    ctx->pc = 0x26c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c9dc: 0x0  nop
    ctx->pc = 0x26c9dcu;
    // NOP
    // 0x26c9e0: 0x0  nop
    ctx->pc = 0x26c9e0u;
    // NOP
    // 0x26c9e4: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x26c9e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
    // 0x26c9e8: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x26c9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c9ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c9f0: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x26c9f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x26c9f4: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x26c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c9f8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26c9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c9fc: 0x0  nop
    ctx->pc = 0x26c9fcu;
    // NOP
    // 0x26ca00: 0x0  nop
    ctx->pc = 0x26ca00u;
    // NOP
    // 0x26ca04: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x26ca04u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x26ca08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26ca08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26ca0c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x26ca0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x26ca10: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x26ca10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x26ca14: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26ca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26ca18: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x26ca18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26ca1c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26ca1cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26ca20: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x26CA20u;
    SET_GPR_U32(ctx, 31, 0x26CA28u);
    ctx->pc = 0x26CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA20u;
    // 0x26ca24: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x26CA20u, 0x26CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA28u;
label_26ca28:
    // 0x26ca28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26ca2c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x26CA2Cu;
    SET_GPR_U32(ctx, 31, 0x26CA34u);
    ctx->pc = 0x26CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA2Cu;
    // 0x26ca30: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x26CA2Cu, 0x26CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA34u;
label_26ca34:
    // 0x26ca34: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x26ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26ca38: 0x80620007  lb          $v0, 0x7($v1)
    ctx->pc = 0x26ca38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x26ca3c: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26CA3Cu;
    {
        const bool branch_taken_0x26ca3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x26CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA3Cu;
        // 0x26ca40: 0xc7a10050  lwc1        $f1, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca3c) {
            ctx->pc = 0x26CA50u;
            goto label_26ca50;
        }
    }
    ctx->pc = 0x26CA44u;
    // 0x26ca44: 0xc655000c  lwc1        $f21, 0xC($s2)
    ctx->pc = 0x26ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26ca48: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26CA48u;
    {
        const bool branch_taken_0x26ca48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA48u;
        // 0x26ca4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca48) {
            ctx->pc = 0x26CAC4u;
            goto label_26cac4;
        }
    }
    ctx->pc = 0x26CA50u;
label_26ca50:
    // 0x26ca50: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ca54: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26ca54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26ca58: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x26ca58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26ca5c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x26ca5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ca60: 0x0  nop
    ctx->pc = 0x26ca60u;
    // NOP
    // 0x26ca64: 0x0  nop
    ctx->pc = 0x26ca64u;
    // NOP
    // 0x26ca68: 0x460c0004  c1          0xC0004
    ctx->pc = 0x26ca68u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x26ca6c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x26ca6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ca70: 0x0  nop
    ctx->pc = 0x26ca70u;
    // NOP
    // 0x26ca74: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26CA74u;
    {
        const bool branch_taken_0x26ca74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ca74) {
            ctx->pc = 0x26CA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CA74u;
            // 0x26ca78: 0xc7ac0054  lwc1        $f12, 0x54($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CA88u;
            goto label_26ca88;
        }
    }
    ctx->pc = 0x26CA7Cu;
    // 0x26ca7c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x26CA7Cu;
    SET_GPR_U32(ctx, 31, 0x26CA84u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x26CA7Cu, 0x26CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA84u;
label_26ca84:
    // 0x26ca84: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x26ca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26ca88:
    // 0x26ca88: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x26CA88u;
    SET_GPR_U32(ctx, 31, 0x26CA90u);
    ctx->pc = 0x26CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA88u;
    // 0x26ca8c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x26CA88u, 0x26CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA90u;
label_26ca90:
    // 0x26ca90: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26ca90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x26ca94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26ca94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ca98: 0x0  nop
    ctx->pc = 0x26ca98u;
    // NOP
    // 0x26ca9c: 0x0  nop
    ctx->pc = 0x26ca9cu;
    // NOP
    // 0x26caa0: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x26caa0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x26caa4: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x26caa4u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    // 0x26caa8: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x26caa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26caac: 0x0  nop
    ctx->pc = 0x26caacu;
    // NOP
    // 0x26cab0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26CAB0u;
    {
        const bool branch_taken_0x26cab0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAB0u;
        // 0x26cab4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cab0) {
            ctx->pc = 0x26CAC4u;
            goto label_26cac4;
        }
    }
    ctx->pc = 0x26CAB8u;
    // 0x26cab8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x26cab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26cabc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cac0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x26cac0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_26cac4:
    // 0x26cac4: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x26cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26cac8: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x26CAC8u;
    SET_GPR_U32(ctx, 31, 0x26CAD0u);
    ctx->pc = 0x26CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAC8u;
    // 0x26cacc: 0xc7ad0058  lwc1        $f13, 0x58($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x26CAC8u, 0x26CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAD0u;
label_26cad0:
    // 0x26cad0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26cad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26cad4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26cad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26cad8: 0xc7838454  lwc1        $f3, -0x7BAC($gp)
    ctx->pc = 0x26cad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26cadc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26cadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26cae0: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x26cae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x26cae4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26cae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26cae8: 0x0  nop
    ctx->pc = 0x26cae8u;
    // NOP
    // 0x26caec: 0x0  nop
    ctx->pc = 0x26caecu;
    // NOP
    // 0x26caf0: 0x46030503  div.s       $f20, $f0, $f3
    ctx->pc = 0x26caf0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[3];
    // 0x26caf4: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x26caf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26caf8: 0x0  nop
    ctx->pc = 0x26caf8u;
    // NOP
    // 0x26cafc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x26CAFCu;
    {
        const bool branch_taken_0x26cafc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cafc) {
            ctx->pc = 0x26CB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CAFCu;
            // 0x26cb00: 0xc6400024  lwc1        $f0, 0x24($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CB14u;
            goto label_26cb14;
        }
    }
    ctx->pc = 0x26CB04u;
    // 0x26cb04: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x26cb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26cb08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cb0c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x26cb0cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x26cb10: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x26cb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cb14:
    // 0x26cb14: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x26cb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cb18: 0x0  nop
    ctx->pc = 0x26cb18u;
    // NOP
    // 0x26cb1c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26CB1Cu;
    {
        const bool branch_taken_0x26cb1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cb1c) {
            ctx->pc = 0x26CB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CB1Cu;
            // 0x26cb20: 0xc6400020  lwc1        $f0, 0x20($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CB30u;
            goto label_26cb30;
        }
    }
    ctx->pc = 0x26CB24u;
    // 0x26cb24: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26cb24u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26cb28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26cb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb2c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x26cb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cb30:
    // 0x26cb30: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x26cb30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cb34: 0x0  nop
    ctx->pc = 0x26cb34u;
    // NOP
    // 0x26cb38: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26CB38u;
    {
        const bool branch_taken_0x26cb38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cb38) {
            ctx->pc = 0x26CB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CB38u;
            // 0x26cb3c: 0xc640002c  lwc1        $f0, 0x2C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CB4Cu;
            goto label_26cb4c;
        }
    }
    ctx->pc = 0x26CB40u;
    // 0x26cb40: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26cb40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26cb44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26cb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb48: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x26cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cb4c:
    // 0x26cb4c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26cb4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cb50: 0x0  nop
    ctx->pc = 0x26cb50u;
    // NOP
    // 0x26cb54: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26CB54u;
    {
        const bool branch_taken_0x26cb54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cb54) {
            ctx->pc = 0x26CB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CB54u;
            // 0x26cb58: 0xc6400028  lwc1        $f0, 0x28($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CB68u;
            goto label_26cb68;
        }
    }
    ctx->pc = 0x26CB5Cu;
    // 0x26cb5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26cb5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26cb60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26cb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb64: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x26cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cb68:
    // 0x26cb68: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26cb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cb6c: 0x0  nop
    ctx->pc = 0x26cb6cu;
    // NOP
    // 0x26cb70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26CB70u;
    {
        const bool branch_taken_0x26cb70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB70u;
        // 0x26cb74: 0xc64d0014  lwc1        $f13, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb70) {
            ctx->pc = 0x26CB80u;
            goto label_26cb80;
        }
    }
    ctx->pc = 0x26CB78u;
    // 0x26cb78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26cb78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26cb7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26cb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cb80:
    // 0x26cb80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26cb80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26cb84: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x26CB84u;
    SET_GPR_U32(ctx, 31, 0x26CB8Cu);
    ctx->pc = 0x26CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB84u;
    // 0x26cb88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x26CB84u, 0x26CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB8Cu;
label_26cb8c:
    // 0x26cb8c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x26CB8Cu;
    SET_GPR_U32(ctx, 31, 0x26CB94u);
    ctx->pc = 0x26CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB8Cu;
    // 0x26cb90: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x26CB8Cu, 0x26CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB94u;
label_26cb94:
    // 0x26cb94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26cb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb9c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x26CB9Cu;
    SET_GPR_U32(ctx, 31, 0x26CBA4u);
    ctx->pc = 0x26CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB9Cu;
    // 0x26cba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x26CB9Cu, 0x26CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBA4u;
label_26cba4:
    // 0x26cba4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26CBA4u;
    {
        const bool branch_taken_0x26cba4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBA4u;
        // 0x26cba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cba4) {
            ctx->pc = 0x26CBB8u;
            goto label_26cbb8;
        }
    }
    ctx->pc = 0x26CBACu;
    // 0x26cbac: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x26CBACu;
    SET_GPR_U32(ctx, 31, 0x26CBB4u);
    ctx->pc = 0x26CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBACu;
    // 0x26cbb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x26CBACu, 0x26CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBB4u;
label_26cbb4:
    // 0x26cbb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cbb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26cbb8:
    // 0x26cbb8: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x26cbb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x26cbbc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x26cbbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x26cbc0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x26CBC0u;
    SET_GPR_U32(ctx, 31, 0x26CBC8u);
    ctx->pc = 0x26CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBC0u;
    // 0x26cbc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x26CBC0u, 0x26CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBC8u;
label_26cbc8:
    // 0x26cbc8: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26CBC8u;
    {
        const bool branch_taken_0x26cbc8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26cbc8) {
            ctx->pc = 0x26CBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CBC8u;
            // 0x26cbcc: 0xc6410014  lwc1        $f1, 0x14($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CC18u;
            goto label_26cc18;
        }
    }
    ctx->pc = 0x26CBD0u;
    // 0x26cbd0: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x26cbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cbd4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x26cbd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cbd8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x26CBD8u;
    {
        const bool branch_taken_0x26cbd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cbd8) {
            ctx->pc = 0x26CBF8u;
            goto label_26cbf8;
        }
    }
    ctx->pc = 0x26CBE0u;
    // 0x26cbe0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x26cbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x26cbe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cbe8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26cbe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26cbec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x26cbecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cbf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26CBF0u;
    {
        const bool branch_taken_0x26cbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBF0u;
        // 0x26cbf4: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbf0) {
            ctx->pc = 0x26CC0Cu;
            goto label_26cc0c;
        }
    }
    ctx->pc = 0x26CBF8u;
label_26cbf8:
    // 0x26cbf8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x26cbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x26cbfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cc00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26cc00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cc04: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x26cc04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cc08: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x26cc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_26cc0c:
    // 0x26cc0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26CC0Cu;
    {
        const bool branch_taken_0x26cc0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cc0c) {
            ctx->pc = 0x26CC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC0Cu;
            // 0x26cc10: 0xe655000c  swc1        $f21, 0xC($s2) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CC14u;
            goto label_26cc14;
        }
    }
    ctx->pc = 0x26CC14u;
label_26cc14:
    // 0x26cc14: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x26cc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cc18:
    // 0x26cc18: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x26cc18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cc1c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x26CC1Cu;
    {
        const bool branch_taken_0x26cc1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cc1c) {
            ctx->pc = 0x26CC3Cu;
            goto label_26cc3c;
        }
    }
    ctx->pc = 0x26CC24u;
    // 0x26cc24: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x26cc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x26cc28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cc2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26cc2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26cc30: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26cc30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cc34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26CC34u;
    {
        const bool branch_taken_0x26cc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC34u;
        // 0x26cc38: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc34) {
            ctx->pc = 0x26CC50u;
            goto label_26cc50;
        }
    }
    ctx->pc = 0x26CC3Cu;
label_26cc3c:
    // 0x26cc3c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x26cc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x26cc40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cc40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cc44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26cc44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cc48: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26cc48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cc4c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x26cc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_26cc50:
    // 0x26cc50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26CC50u;
    {
        const bool branch_taken_0x26cc50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cc50) {
            ctx->pc = 0x26CC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC50u;
            // 0x26cc54: 0xe6540014  swc1        $f20, 0x14($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CC58u;
            goto label_26cc58;
        }
    }
    ctx->pc = 0x26CC58u;
label_26cc58:
    // 0x26cc58: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26CC58u;
    {
        const bool branch_taken_0x26cc58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC58u;
        // 0x26cc5c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc58) {
            ctx->pc = 0x26CCB4u;
            goto label_26ccb4;
        }
    }
    ctx->pc = 0x26CC60u;
    // 0x26cc60: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x26cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x26cc64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26CC64u;
    {
        const bool branch_taken_0x26cc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cc64) {
            ctx->pc = 0x26CC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC64u;
            // 0x26cc68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CC6Cu;
            goto label_26cc6c;
        }
    }
    ctx->pc = 0x26CC6Cu;
label_26cc6c:
    // 0x26cc6c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x26cc6cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26cc70: 0x1810  mfhi        $v1
    ctx->pc = 0x26cc70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x26cc74: 0x2863001f  slti        $v1, $v1, 0x1F
    ctx->pc = 0x26cc74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x26cc78: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x26cc78u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x26cc7c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x26CC7Cu;
    {
        const bool branch_taken_0x26cc7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC7Cu;
        // 0x26cc80: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc7c) {
            ctx->pc = 0x26CCBCu;
            goto label_26ccbc;
        }
    }
    ctx->pc = 0x26CC84u;
    // 0x26cc84: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x26cc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cc88: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x26cc88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cc8c: 0x0  nop
    ctx->pc = 0x26cc8cu;
    // NOP
    // 0x26cc90: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x26CC90u;
    {
        const bool branch_taken_0x26cc90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cc90) {
            ctx->pc = 0x26CC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC90u;
            // 0x26cc94: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CCC0u;
            goto label_26ccc0;
        }
    }
    ctx->pc = 0x26CC98u;
    // 0x26cc98: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x26cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cc9c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x26cc9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cca0: 0x0  nop
    ctx->pc = 0x26cca0u;
    // NOP
    // 0x26cca4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26CCA4u;
    {
        const bool branch_taken_0x26cca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCA4u;
        // 0x26cca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cca4) {
            ctx->pc = 0x26CCB8u;
            goto label_26ccb8;
        }
    }
    ctx->pc = 0x26CCACu;
    // 0x26ccac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26CCACu;
    {
        const bool branch_taken_0x26ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCACu;
        // 0x26ccb0: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccac) {
            ctx->pc = 0x26CCB8u;
            goto label_26ccb8;
        }
    }
    ctx->pc = 0x26CCB4u;
label_26ccb4:
    // 0x26ccb4: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x26ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_26ccb8:
    // 0x26ccb8: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x26ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_26ccbc:
    // 0x26ccbc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26ccc0:
    // 0x26ccc0: 0x2843012c  slti        $v1, $v0, 0x12C
    ctx->pc = 0x26ccc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x26ccc4: 0x1460019c  bnez        $v1, . + 4 + (0x19C << 2)
    ctx->pc = 0x26CCC4u;
    {
        const bool branch_taken_0x26ccc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCC4u;
        // 0x26ccc8: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccc4) {
            ctx->pc = 0x26D338u;
            goto label_26d338;
        }
    }
    ctx->pc = 0x26CCCCu;
    // 0x26cccc: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x26ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x26ccd0: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x26ccd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26ccd4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26ccd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26ccd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccdc: 0xc09a542  jal         func_269508
    ctx->pc = 0x26CCDCu;
    SET_GPR_U32(ctx, 31, 0x26CCE4u);
    ctx->pc = 0x26CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCDCu;
    // 0x26cce0: 0x8c500160  lw          $s0, 0x160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269508u, 0x26CCDCu, 0x26CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCE4u;
label_26cce4:
    // 0x26cce4: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x26cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x26cce8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x26cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ccec: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x26ccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ccf0: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x26ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x26ccf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26ccf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26ccf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26ccf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26ccfc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26ccfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26cd00: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x26cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26cd04: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x26cd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x26cd08: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x26cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26cd0c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x26cd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x26cd10: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x26cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cd14: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x26cd14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26cd18: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x26cd18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26cd1c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x26cd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x26cd20: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x26cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cd24: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x26cd24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x26cd28: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26CD28u;
    {
        const bool branch_taken_0x26cd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD28u;
        // 0x26cd2c: 0xe7a10078  swc1        $f1, 0x78($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd28) {
            ctx->pc = 0x26CD64u;
            goto label_26cd64;
        }
    }
    ctx->pc = 0x26CD30u;
    // 0x26cd30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26cd34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26cd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd38: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26cd3c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x26cd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26cd40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cd40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cd44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd48: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x26cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x26cd4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cd4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cd50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd54: 0xc09640e  jal         func_259038
    ctx->pc = 0x26CD54u;
    SET_GPR_U32(ctx, 31, 0x26CD5Cu);
    ctx->pc = 0x26CD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD54u;
    // 0x26cd58: 0x240bfffd  addiu       $t3, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x26CD54u, 0x26CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD5Cu;
label_26cd5c:
    // 0x26cd5c: 0x50400176  beql        $v0, $zero, . + 4 + (0x176 << 2)
    ctx->pc = 0x26CD5Cu;
    {
        const bool branch_taken_0x26cd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd5c) {
            ctx->pc = 0x26CD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CD5Cu;
            // 0x26cd60: 0xae400074  sw          $zero, 0x74($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D338u;
            goto label_26d338;
        }
    }
    ctx->pc = 0x26CD64u;
label_26cd64:
    // 0x26cd64: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x26CD64u;
    {
        const bool branch_taken_0x26cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD64u;
        // 0x26cd68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd64) {
            ctx->pc = 0x26D068u;
            goto label_26d068;
        }
    }
    ctx->pc = 0x26CD6Cu;
label_26cd6c:
    // 0x26cd6c: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x26CD6Cu;
    {
        const bool branch_taken_0x26cd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26cd6c) {
            ctx->pc = 0x26CD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CD6Cu;
            // 0x26cd70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CE54u;
            goto label_26ce54;
        }
    }
    ctx->pc = 0x26CD74u;
    // 0x26cd74: 0xc6450018  lwc1        $f5, 0x18($s2)
    ctx->pc = 0x26cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26cd78: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x26cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26cd7c: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x26cd7cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x26cd80: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x26cd80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cd84: 0x0  nop
    ctx->pc = 0x26cd84u;
    // NOP
    // 0x26cd88: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x26CD88u;
    {
        const bool branch_taken_0x26cd88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD88u;
        // 0x26cd8c: 0x46001986  mov.s       $f6, $f3 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd88) {
            ctx->pc = 0x26CDE0u;
            goto label_26cde0;
        }
    }
    ctx->pc = 0x26CD90u;
    // 0x26cd90: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x26cd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26cd94: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x26cd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cd98: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x26cd98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cd9c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x26CD9Cu;
    {
        const bool branch_taken_0x26cd9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cd9c) {
            ctx->pc = 0x26CDBCu;
            goto label_26cdbc;
        }
    }
    ctx->pc = 0x26CDA4u;
    // 0x26cda4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26cda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26cda8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cdac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26cdacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26cdb0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26cdb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cdb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26CDB4u;
    {
        const bool branch_taken_0x26cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDB4u;
        // 0x26cdb8: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdb4) {
            ctx->pc = 0x26CDD0u;
            goto label_26cdd0;
        }
    }
    ctx->pc = 0x26CDBCu;
label_26cdbc:
    // 0x26cdbc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26cdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26cdc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cdc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cdc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26cdc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cdc8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26cdc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cdcc: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x26cdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_26cdd0:
    // 0x26cdd0: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26CDD0u;
    {
        const bool branch_taken_0x26cdd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cdd0) {
            ctx->pc = 0x26CDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CDD0u;
            // 0x26cdd4: 0xe642000c  swc1        $f2, 0xC($s2) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CDE4u;
            goto label_26cde4;
        }
    }
    ctx->pc = 0x26CDD8u;
    // 0x26cdd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26CDD8u;
    {
        const bool branch_taken_0x26cdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cdd8) {
            ctx->pc = 0x26CDE4u;
            goto label_26cde4;
        }
    }
    ctx->pc = 0x26CDE0u;
label_26cde0:
    // 0x26cde0: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x26cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cde4:
    // 0x26cde4: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x26cde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cde8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x26CDE8u;
    {
        const bool branch_taken_0x26cde8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cde8) {
            ctx->pc = 0x26CE08u;
            goto label_26ce08;
        }
    }
    ctx->pc = 0x26CDF0u;
    // 0x26cdf0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26cdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26cdf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cdf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cdf8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x26cdf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26cdfc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x26cdfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ce00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26CE00u;
    {
        const bool branch_taken_0x26ce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE00u;
        // 0x26ce04: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce00) {
            ctx->pc = 0x26CE1Cu;
            goto label_26ce1c;
        }
    }
    ctx->pc = 0x26CE08u;
label_26ce08:
    // 0x26ce08: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26ce08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26ce0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ce0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ce10: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x26ce10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26ce14: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x26ce14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ce18: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x26ce18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_26ce1c:
    // 0x26ce1c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26CE1Cu;
    {
        const bool branch_taken_0x26ce1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ce1c) {
            ctx->pc = 0x26CE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CE1Cu;
            // 0x26ce20: 0xe6440014  swc1        $f4, 0x14($s2) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CE24u;
            goto label_26ce24;
        }
    }
    ctx->pc = 0x26CE24u;
label_26ce24:
    // 0x26ce24: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x26ce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ce28: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x26ce28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ce2c: 0x0  nop
    ctx->pc = 0x26ce2cu;
    // NOP
    // 0x26ce30: 0x45000142  bc1f        . + 4 + (0x142 << 2)
    ctx->pc = 0x26CE30u;
    {
        const bool branch_taken_0x26ce30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE30u;
        // 0x26ce34: 0x1ea980  sll         $s5, $fp, 6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce30) {
            ctx->pc = 0x26D33Cu;
            goto label_26d33c;
        }
    }
    ctx->pc = 0x26CE38u;
    // 0x26ce38: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x26ce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ce3c: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x26ce3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ce40: 0x0  nop
    ctx->pc = 0x26ce40u;
    // NOP
    // 0x26ce44: 0x4500013d  bc1f        . + 4 + (0x13D << 2)
    ctx->pc = 0x26CE44u;
    {
        const bool branch_taken_0x26ce44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE44u;
        // 0x26ce48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce44) {
            ctx->pc = 0x26D33Cu;
            goto label_26d33c;
        }
    }
    ctx->pc = 0x26CE4Cu;
    // 0x26ce4c: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x26CE4Cu;
    {
        const bool branch_taken_0x26ce4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE4Cu;
        // 0x26ce50: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce4c) {
            ctx->pc = 0x26D33Cu;
            goto label_26d33c;
        }
    }
    ctx->pc = 0x26CE54u;
label_26ce54:
    // 0x26ce54: 0x14620070  bne         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x26CE54u;
    {
        const bool branch_taken_0x26ce54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE54u;
        // 0x26ce58: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce54) {
            ctx->pc = 0x26D018u;
            goto label_26d018;
        }
    }
    ctx->pc = 0x26CE5Cu;
    // 0x26ce5c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26ce5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce60: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x26CE60u;
    {
        const bool branch_taken_0x26ce60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE60u;
        // 0x26ce64: 0x1ea980  sll         $s5, $fp, 6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce60) {
            ctx->pc = 0x26CFFCu;
            goto label_26cffc;
        }
    }
    ctx->pc = 0x26CE68u;
label_26ce68:
    // 0x26ce68: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x26ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x26ce6c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x26ce6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26ce70: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x26ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x26ce74: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x26ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26ce78: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x26ce78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26ce7c: 0x8e710bcc  lw          $s1, 0xBCC($s3)
    ctx->pc = 0x26ce7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3020)));
    // 0x26ce80: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CE80u;
    {
        const bool branch_taken_0x26ce80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE80u;
        // 0x26ce84: 0x8e300164  lw          $s0, 0x164($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce80) {
            ctx->pc = 0x26CE98u;
            goto label_26ce98;
        }
    }
    ctx->pc = 0x26CE88u;
    // 0x26ce88: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x26CE88u;
    SET_GPR_U32(ctx, 31, 0x26CE90u);
    ctx->pc = 0x26CE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE88u;
    // 0x26ce8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x26CE88u, 0x26CE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE90u;
label_26ce90:
    // 0x26ce90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26CE90u;
    {
        const bool branch_taken_0x26ce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE90u;
        // 0x26ce94: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce90) {
            ctx->pc = 0x26CE9Cu;
            goto label_26ce9c;
        }
    }
    ctx->pc = 0x26CE98u;
label_26ce98:
    // 0x26ce98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26ce98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ce9c:
    // 0x26ce9c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x26ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x26cea0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26cea4: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x26CEA4u;
    {
        const bool branch_taken_0x26cea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cea4) {
            ctx->pc = 0x26CEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CEA4u;
            // 0x26cea8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CFFCu;
            goto label_26cffc;
        }
    }
    ctx->pc = 0x26CEACu;
    // 0x26ceac: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x26ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x26ceb0: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x26CEB0u;
    {
        const bool branch_taken_0x26ceb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ceb0) {
            ctx->pc = 0x26CEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CEB0u;
            // 0x26ceb4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CFFCu;
            goto label_26cffc;
        }
    }
    ctx->pc = 0x26CEB8u;
    // 0x26ceb8: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x26ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x26cebc: 0x5840004f  blezl       $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x26CEBCu;
    {
        const bool branch_taken_0x26cebc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26cebc) {
            ctx->pc = 0x26CEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CEBCu;
            // 0x26cec0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CFFCu;
            goto label_26cffc;
        }
    }
    ctx->pc = 0x26CEC4u;
    // 0x26cec4: 0xc6c30030  lwc1        $f3, 0x30($s6)
    ctx->pc = 0x26cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26cec8: 0xc6c40034  lwc1        $f4, 0x34($s6)
    ctx->pc = 0x26cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26cecc: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x26ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ced0: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x26ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ced4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x26ced4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x26ced8: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x26ced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cedc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x26cedcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x26cee0: 0xc6c30038  lwc1        $f3, 0x38($s6)
    ctx->pc = 0x26cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26cee4: 0xc7848458  lwc1        $f4, -0x7BA8($gp)
    ctx->pc = 0x26cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26cee8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x26cee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26ceec: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x26ceecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x26cef0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x26cef0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26cef4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26cef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26cef8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26cef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26cefc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26cefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26cf00: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x26cf00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cf04: 0x0  nop
    ctx->pc = 0x26cf04u;
    // NOP
    // 0x26cf08: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x26CF08u;
    {
        const bool branch_taken_0x26cf08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF08u;
        // 0x26cf0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf08) {
            ctx->pc = 0x26CFF8u;
            goto label_26cff8;
        }
    }
    ctx->pc = 0x26CF10u;
    // 0x26cf10: 0xc09a542  jal         func_269508
    ctx->pc = 0x26CF10u;
    SET_GPR_U32(ctx, 31, 0x26CF18u);
    ctx->pc = 0x26CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF10u;
    // 0x26cf14: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269508u, 0x26CF10u, 0x26CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF18u;
label_26cf18:
    // 0x26cf18: 0x240400da  addiu       $a0, $zero, 0xDA
    ctx->pc = 0x26cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x26cf1c: 0xc081546  jal         func_205518
    ctx->pc = 0x26CF1Cu;
    SET_GPR_U32(ctx, 31, 0x26CF24u);
    ctx->pc = 0x26CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF1Cu;
    // 0x26cf20: 0x2605008c  addiu       $a1, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26CF1Cu, 0x26CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF24u;
label_26cf24:
    // 0x26cf24: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x26cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cf28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26cf2c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x26cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cf30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26cf34: 0xc60c008c  lwc1        $f12, 0x8C($s0)
    ctx->pc = 0x26cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26cf38: 0xc60d0094  lwc1        $f13, 0x94($s0)
    ctx->pc = 0x26cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26cf3c: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x26cf3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x26cf40: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x26cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x26cf44: 0x460d0341  sub.s       $f13, $f0, $f13
    ctx->pc = 0x26cf44u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x26cf48: 0xae510060  sw          $s1, 0x60($s2)
    ctx->pc = 0x26cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 17));
    // 0x26cf4c: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x26CF4Cu;
    SET_GPR_U32(ctx, 31, 0x26CF54u);
    ctx->pc = 0x26CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF4Cu;
    // 0x26cf50: 0xae030128  sw          $v1, 0x128($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x26CF4Cu, 0x26CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF54u;
label_26cf54:
    // 0x26cf54: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26cf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26cf58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26cf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26cf5c: 0xc782845c  lwc1        $f2, -0x7BA4($gp)
    ctx->pc = 0x26cf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26cf60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26cf60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26cf64: 0xae7611b4  sw          $s6, 0x11B4($s3)
    ctx->pc = 0x26cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4532), GPR_U32(ctx, 22));
    // 0x26cf68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26cf68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26cf6c: 0x0  nop
    ctx->pc = 0x26cf6cu;
    // NOP
    // 0x26cf70: 0x0  nop
    ctx->pc = 0x26cf70u;
    // NOP
    // 0x26cf74: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x26cf74u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x26cf78: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x26cf78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cf7c: 0x0  nop
    ctx->pc = 0x26cf7cu;
    // NOP
    // 0x26cf80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x26CF80u;
    {
        const bool branch_taken_0x26cf80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF80u;
        // 0x26cf84: 0xe642006c  swc1        $f2, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf80) {
            ctx->pc = 0x26CF98u;
            goto label_26cf98;
        }
    }
    ctx->pc = 0x26CF88u;
    // 0x26cf88: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x26cf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26cf8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cf8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cf90: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x26cf90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26cf94: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x26cf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
label_26cf98:
    // 0x26cf98: 0xc600011c  lwc1        $f0, 0x11C($s0)
    ctx->pc = 0x26cf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cf9c: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x26cf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x26cfa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26cfa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26cfa4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26cfa4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26cfa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26cfa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cfac: 0x0  nop
    ctx->pc = 0x26cfacu;
    // NOP
    // 0x26cfb0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26CFB0u;
    {
        const bool branch_taken_0x26cfb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFB0u;
        // 0x26cfb4: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfb0) {
            ctx->pc = 0x26CFD0u;
            goto label_26cfd0;
        }
    }
    ctx->pc = 0x26CFB8u;
    // 0x26cfb8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x26cfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x26cfbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26cfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26cfc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26cfc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cfc4: 0x0  nop
    ctx->pc = 0x26cfc4u;
    // NOP
    // 0x26cfc8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x26CFC8u;
    {
        const bool branch_taken_0x26cfc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cfc8) {
            ctx->pc = 0x26CFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CFC8u;
            // 0x26cfcc: 0x8e630104  lw          $v1, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CFD8u;
            goto label_26cfd8;
        }
    }
    ctx->pc = 0x26CFD0u;
label_26cfd0:
    // 0x26cfd0: 0xe6410070  swc1        $f1, 0x70($s2)
    ctx->pc = 0x26cfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x26cfd4: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x26cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_26cfd8:
    // 0x26cfd8: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x26cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
    // 0x26cfdc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x26CFDCu;
    {
        const bool branch_taken_0x26cfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26cfdc) {
            ctx->pc = 0x26CFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CFDCu;
            // 0x26cfe0: 0xae630108  sw          $v1, 0x108($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 264), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CFE4u;
            goto label_26cfe4;
        }
    }
    ctx->pc = 0x26CFE4u;
label_26cfe4:
    // 0x26cfe4: 0xae600104  sw          $zero, 0x104($s3)
    ctx->pc = 0x26cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 260), GPR_U32(ctx, 0));
    // 0x26cfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfec: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x26cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x26cff0: 0xc0a48ac  jal         func_2922B0
    ctx->pc = 0x26CFF0u;
    SET_GPR_U32(ctx, 31, 0x26CFF8u);
    ctx->pc = 0x26CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFF0u;
    // 0x26cff4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2922B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2922B0u, 0x26CFF0u, 0x26CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFF8u;
label_26cff8:
    // 0x26cff8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26cff8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_26cffc:
    // 0x26cffc: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x26CFFCu;
    SET_GPR_U32(ctx, 31, 0x26D004u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x26CFFCu, 0x26D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D004u;
label_26d004:
    // 0x26d004: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x26d004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26d008: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x26D008u;
    {
        const bool branch_taken_0x26d008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D008u;
        // 0x26d00c: 0x24031210  addiu       $v1, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d008) {
            ctx->pc = 0x26CE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ce68;
        }
    }
    ctx->pc = 0x26D010u;
    // 0x26d010: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x26D010u;
    {
        const bool branch_taken_0x26d010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D010u;
        // 0x26d014: 0x8ec40020  lw          $a0, 0x20($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d010) {
            ctx->pc = 0x26D340u;
            goto label_26d340;
        }
    }
    ctx->pc = 0x26D018u;
label_26d018:
    // 0x26d018: 0x14620091  bne         $v1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x26D018u;
    {
        const bool branch_taken_0x26d018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D018u;
        // 0x26d01c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d018) {
            ctx->pc = 0x26D260u;
            goto label_26d260;
        }
    }
    ctx->pc = 0x26D020u;
    // 0x26d020: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x26d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x26d024: 0x8e510060  lw          $s1, 0x60($s2)
    ctx->pc = 0x26d024u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x26d028: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x26d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26d02c: 0x8e330164  lw          $s3, 0x164($s1)
    ctx->pc = 0x26d02cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x26d030: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D030u;
    {
        const bool branch_taken_0x26d030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D030u;
        // 0x26d034: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d030) {
            ctx->pc = 0x26D048u;
            goto label_26d048;
        }
    }
    ctx->pc = 0x26D038u;
    // 0x26d038: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x26D038u;
    SET_GPR_U32(ctx, 31, 0x26D040u);
    ctx->pc = 0x26D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D038u;
    // 0x26d03c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x26D038u, 0x26D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D040u;
label_26d040:
    // 0x26d040: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26D040u;
    {
        const bool branch_taken_0x26d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D040u;
        // 0x26d044: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d040) {
            ctx->pc = 0x26D04Cu;
            goto label_26d04c;
        }
    }
    ctx->pc = 0x26D048u;
label_26d048:
    // 0x26d048: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26d048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d04c:
    // 0x26d04c: 0x8e0211b4  lw          $v0, 0x11B4($s0)
    ctx->pc = 0x26d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4532)));
    // 0x26d050: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D050u;
    {
        const bool branch_taken_0x26d050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D050u;
        // 0x26d054: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d050) {
            ctx->pc = 0x26D068u;
            goto label_26d068;
        }
    }
    ctx->pc = 0x26D058u;
    // 0x26d058: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x26d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x26d05c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x26d05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x26d060: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D060u;
    {
        const bool branch_taken_0x26d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D060u;
        // 0x26d064: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d060) {
            ctx->pc = 0x26D074u;
            goto label_26d074;
        }
    }
    ctx->pc = 0x26D068u;
label_26d068:
    // 0x26d068: 0x1ea980  sll         $s5, $fp, 6
    ctx->pc = 0x26d068u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x26d06c: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x26D06Cu;
    {
        const bool branch_taken_0x26d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D06Cu;
        // 0x26d070: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d06c) {
            ctx->pc = 0x26D33Cu;
            goto label_26d33c;
        }
    }
    ctx->pc = 0x26D074u;
label_26d074:
    // 0x26d074: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x26d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x26d078: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26d078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26d07c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26D07Cu;
    {
        const bool branch_taken_0x26d07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D07Cu;
        // 0x26d080: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d07c) {
            ctx->pc = 0x26D0A4u;
            goto label_26d0a4;
        }
    }
    ctx->pc = 0x26D084u;
    // 0x26d084: 0xae0011b4  sw          $zero, 0x11B4($s0)
    ctx->pc = 0x26d084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4532), GPR_U32(ctx, 0));
    // 0x26d088: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x26d088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x26d08c: 0xae600128  sw          $zero, 0x128($s3)
    ctx->pc = 0x26d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 0));
    // 0x26d090: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x26d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x26d094: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26D094u;
    {
        const bool branch_taken_0x26d094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d094) {
            ctx->pc = 0x26D098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D094u;
            // 0x26d098: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D09Cu;
            goto label_26d09c;
        }
    }
    ctx->pc = 0x26D09Cu;
label_26d09c:
    // 0x26d09c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x26D09Cu;
    {
        const bool branch_taken_0x26d09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D09Cu;
        // 0x26d0a0: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d09c) {
            ctx->pc = 0x26D338u;
            goto label_26d338;
        }
    }
    ctx->pc = 0x26D0A4u;
label_26d0a4:
    // 0x26d0a4: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x26d0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d0a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26d0a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0ac: 0xc6cd004c  lwc1        $f13, 0x4C($s6)
    ctx->pc = 0x26d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d0b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26d0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0b4: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x26d0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d0b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26d0b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0bc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x26d0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x26d0c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d0c4: 0x460d1340  add.s       $f13, $f2, $f13
    ctx->pc = 0x26d0c4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    // 0x26d0c8: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x26d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d0cc: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x26D0CCu;
    SET_GPR_U32(ctx, 31, 0x26D0D4u);
    ctx->pc = 0x26D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0CCu;
    // 0x26d0d0: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x26D0CCu, 0x26D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0D4u;
label_26d0d4:
    // 0x26d0d4: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x26d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d0d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26d0d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26d0dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26d0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0e0: 0xc09b072  jal         func_26C1C8
    ctx->pc = 0x26D0E0u;
    SET_GPR_U32(ctx, 31, 0x26D0E8u);
    ctx->pc = 0x26D0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0E0u;
    // 0x26d0e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1C8u, 0x26D0E0u, 0x26D0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0E8u;
label_26d0e8:
    // 0x26d0e8: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x26d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d0ec: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x26d0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d0f0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26d0f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d0f4: 0x0  nop
    ctx->pc = 0x26d0f4u;
    // NOP
    // 0x26d0f8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x26D0F8u;
    {
        const bool branch_taken_0x26d0f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0F8u;
        // 0x26d0fc: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0f8) {
            ctx->pc = 0x26D154u;
            goto label_26d154;
        }
    }
    ctx->pc = 0x26D100u;
    // 0x26d100: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x26d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d104: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26d104u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d108: 0x0  nop
    ctx->pc = 0x26d108u;
    // NOP
    // 0x26d10c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x26D10Cu;
    {
        const bool branch_taken_0x26d10c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D10Cu;
        // 0x26d110: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d10c) {
            ctx->pc = 0x26D154u;
            goto label_26d154;
        }
    }
    ctx->pc = 0x26D114u;
    // 0x26d114: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x26d114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d118: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26d118u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d11c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x26D11Cu;
    {
        const bool branch_taken_0x26d11c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d11c) {
            ctx->pc = 0x26D154u;
            goto label_26d154;
        }
    }
    ctx->pc = 0x26D124u;
    // 0x26d124: 0xc6610114  lwc1        $f1, 0x114($s3)
    ctx->pc = 0x26d124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d128: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x26d128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d12c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26d12cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d130: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x26D130u;
    {
        const bool branch_taken_0x26d130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d130) {
            ctx->pc = 0x26D154u;
            goto label_26d154;
        }
    }
    ctx->pc = 0x26D138u;
    // 0x26d138: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x26d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d13c: 0xc661011c  lwc1        $f1, 0x11C($s3)
    ctx->pc = 0x26d13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d140: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26d140u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26d144: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26d144u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d148: 0x0  nop
    ctx->pc = 0x26d148u;
    // NOP
    // 0x26d14c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26D14Cu;
    {
        const bool branch_taken_0x26d14c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d14c) {
            ctx->pc = 0x26D150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D14Cu;
            // 0x26d150: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D154u;
            goto label_26d154;
        }
    }
    ctx->pc = 0x26D154u;
label_26d154:
    // 0x26d154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d158: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x26d158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d15c: 0x0  nop
    ctx->pc = 0x26d15cu;
    // NOP
    // 0x26d160: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x26D160u;
    {
        const bool branch_taken_0x26d160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d160) {
            ctx->pc = 0x26D164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D160u;
            // 0x26d164: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D180u;
            goto label_26d180;
        }
    }
    ctx->pc = 0x26D168u;
    // 0x26d168: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x26d168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d16c: 0x0  nop
    ctx->pc = 0x26d16cu;
    // NOP
    // 0x26d170: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x26D170u;
    {
        const bool branch_taken_0x26d170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d170) {
            ctx->pc = 0x26D174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D170u;
            // 0x26d174: 0xc6c1004c  lwc1        $f1, 0x4C($s6) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D194u;
            goto label_26d194;
        }
    }
    ctx->pc = 0x26D178u;
    // 0x26d178: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26D178u;
    {
        const bool branch_taken_0x26d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D178u;
        // 0x26d17c: 0xc6410014  lwc1        $f1, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d178) {
            ctx->pc = 0x26D1A8u;
            goto label_26d1a8;
        }
    }
    ctx->pc = 0x26D180u;
label_26d180:
    // 0x26d180: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x26d180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d184: 0x0  nop
    ctx->pc = 0x26d184u;
    // NOP
    // 0x26d188: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x26D188u;
    {
        const bool branch_taken_0x26d188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d188) {
            ctx->pc = 0x26D18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D188u;
            // 0x26d18c: 0xc6410014  lwc1        $f1, 0x14($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D1A4u;
            goto label_26d1a4;
        }
    }
    ctx->pc = 0x26D190u;
    // 0x26d190: 0xc6c1004c  lwc1        $f1, 0x4C($s6)
    ctx->pc = 0x26d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d194:
    // 0x26d194: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x26d194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d198: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x26d198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d19c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26D19Cu;
    {
        const bool branch_taken_0x26d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D19Cu;
        // 0x26d1a0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d19c) {
            ctx->pc = 0x26D1BCu;
            goto label_26d1bc;
        }
    }
    ctx->pc = 0x26D1A4u;
label_26d1a4:
    // 0x26d1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d1a8:
    // 0x26d1a8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26d1a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d1ac: 0x0  nop
    ctx->pc = 0x26d1acu;
    // NOP
    // 0x26d1b0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x26D1B0u;
    {
        const bool branch_taken_0x26d1b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d1b0) {
            ctx->pc = 0x26D1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D1B0u;
            // 0x26d1b4: 0x46150801  sub.s       $f0, $f1, $f21 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D1BCu;
            goto label_26d1bc;
        }
    }
    ctx->pc = 0x26D1B8u;
    // 0x26d1b8: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x26d1b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_26d1bc:
    // 0x26d1bc: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x26d1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x26d1c0: 0xc64c0070  lwc1        $f12, 0x70($s2)
    ctx->pc = 0x26d1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d1c4: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x26D1C4u;
    SET_GPR_U32(ctx, 31, 0x26D1CCu);
    ctx->pc = 0x26D1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1C4u;
    // 0x26d1c8: 0xc64d000c  lwc1        $f13, 0xC($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x26D1C4u, 0x26D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D1CCu;
label_26d1cc:
    // 0x26d1cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26d1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26d1d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26d1d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26d1d4: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x26d1d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d1d8: 0x0  nop
    ctx->pc = 0x26d1d8u;
    // NOP
    // 0x26d1dc: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x26D1DCu;
    {
        const bool branch_taken_0x26d1dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d1dc) {
            ctx->pc = 0x26D1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D1DCu;
            // 0x26d1e0: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D1FCu;
            goto label_26d1fc;
        }
    }
    ctx->pc = 0x26D1E4u;
    // 0x26d1e4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x26d1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d1e8: 0x0  nop
    ctx->pc = 0x26d1e8u;
    // NOP
    // 0x26d1ec: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x26D1ECu;
    {
        const bool branch_taken_0x26d1ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d1ec) {
            ctx->pc = 0x26D1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D1ECu;
            // 0x26d1f0: 0xc6400070  lwc1        $f0, 0x70($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D20Cu;
            goto label_26d20c;
        }
    }
    ctx->pc = 0x26D1F4u;
    // 0x26d1f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26D1F4u;
    {
        const bool branch_taken_0x26d1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d1f4) {
            ctx->pc = 0x26D214u;
            goto label_26d214;
        }
    }
    ctx->pc = 0x26D1FCu;
label_26d1fc:
    // 0x26d1fc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x26d1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d200: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26D200u;
    {
        const bool branch_taken_0x26d200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d200) {
            ctx->pc = 0x26D214u;
            goto label_26d214;
        }
    }
    ctx->pc = 0x26D208u;
    // 0x26d208: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x26d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d20c:
    // 0x26d20c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26D20Cu;
    {
        const bool branch_taken_0x26d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D20Cu;
        // 0x26d210: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d20c) {
            ctx->pc = 0x26D234u;
            goto label_26d234;
        }
    }
    ctx->pc = 0x26D214u;
label_26d214:
    // 0x26d214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d218: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26d218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d21c: 0x0  nop
    ctx->pc = 0x26d21cu;
    // NOP
    // 0x26d220: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26D220u;
    {
        const bool branch_taken_0x26d220 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D220u;
        // 0x26d224: 0xc641000c  lwc1        $f1, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d220) {
            ctx->pc = 0x26D230u;
            goto label_26d230;
        }
    }
    ctx->pc = 0x26D228u;
    // 0x26d228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26D228u;
    {
        const bool branch_taken_0x26d228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D228u;
        // 0x26d22c: 0x46150800  add.s       $f0, $f1, $f21 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d228) {
            ctx->pc = 0x26D234u;
            goto label_26d234;
        }
    }
    ctx->pc = 0x26D230u;
label_26d230:
    // 0x26d230: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x26d230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_26d234:
    // 0x26d234: 0x12a00040  beqz        $s5, . + 4 + (0x40 << 2)
    ctx->pc = 0x26D234u;
    {
        const bool branch_taken_0x26d234 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D234u;
        // 0x26d238: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d234) {
            ctx->pc = 0x26D338u;
            goto label_26d338;
        }
    }
    ctx->pc = 0x26D23Cu;
    // 0x26d23c: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x26D23Cu;
    {
        const bool branch_taken_0x26d23c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D23Cu;
        // 0x26d240: 0x1ea980  sll         $s5, $fp, 6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d23c) {
            ctx->pc = 0x26D33Cu;
            goto label_26d33c;
        }
    }
    ctx->pc = 0x26D244u;
    // 0x26d244: 0x1280003d  beqz        $s4, . + 4 + (0x3D << 2)
    ctx->pc = 0x26D244u;
    {
        const bool branch_taken_0x26d244 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D244u;
        // 0x26d248: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d244) {
            ctx->pc = 0x26D33Cu;
            goto label_26d33c;
        }
    }
    ctx->pc = 0x26D24Cu;
    // 0x26d24c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x26d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d250: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x26d250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x26d254: 0x1ea980  sll         $s5, $fp, 6
    ctx->pc = 0x26d254u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x26d258: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x26D258u;
    {
        const bool branch_taken_0x26d258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D258u;
        // 0x26d25c: 0xae630128  sw          $v1, 0x128($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d258) {
            ctx->pc = 0x26D33Cu;
            goto label_26d33c;
        }
    }
    ctx->pc = 0x26D260u;
label_26d260:
    // 0x26d260: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x26D260u;
    {
        const bool branch_taken_0x26d260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D260u;
        // 0x26d264: 0x1ea980  sll         $s5, $fp, 6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d260) {
            ctx->pc = 0x26D33Cu;
            goto label_26d33c;
        }
    }
    ctx->pc = 0x26D268u;
    // 0x26d268: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x26d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x26d26c: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x26d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x26d270: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x26d270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26d274: 0x8c710164  lw          $s1, 0x164($v1)
    ctx->pc = 0x26d274u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
    // 0x26d278: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D278u;
    {
        const bool branch_taken_0x26d278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D278u;
        // 0x26d27c: 0x8c700160  lw          $s0, 0x160($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d278) {
            ctx->pc = 0x26D290u;
            goto label_26d290;
        }
    }
    ctx->pc = 0x26D280u;
    // 0x26d280: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x26D280u;
    SET_GPR_U32(ctx, 31, 0x26D288u);
    ctx->pc = 0x26D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D280u;
    // 0x26d284: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x26D280u, 0x26D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D288u;
label_26d288:
    // 0x26d288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26D288u;
    {
        const bool branch_taken_0x26d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D288u;
        // 0x26d28c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d288) {
            ctx->pc = 0x26D294u;
            goto label_26d294;
        }
    }
    ctx->pc = 0x26D290u;
label_26d290:
    // 0x26d290: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26d290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d294:
    // 0x26d294: 0x8e0211b4  lw          $v0, 0x11B4($s0)
    ctx->pc = 0x26d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4532)));
    // 0x26d298: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D298u;
    {
        const bool branch_taken_0x26d298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D298u;
        // 0x26d29c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d298) {
            ctx->pc = 0x26D2B0u;
            goto label_26d2b0;
        }
    }
    ctx->pc = 0x26D2A0u;
    // 0x26d2a0: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x26d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x26d2a4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x26d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x26d2a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D2A8u;
    {
        const bool branch_taken_0x26d2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2A8u;
        // 0x26d2ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2a8) {
            ctx->pc = 0x26D2B8u;
            goto label_26d2b8;
        }
    }
    ctx->pc = 0x26D2B0u;
label_26d2b0:
    // 0x26d2b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26D2B0u;
    {
        const bool branch_taken_0x26d2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2B0u;
        // 0x26d2b4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2b0) {
            ctx->pc = 0x26D314u;
            goto label_26d314;
        }
    }
    ctx->pc = 0x26D2B8u;
label_26d2b8:
    // 0x26d2b8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x26d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x26d2bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26d2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26d2c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26D2C0u;
    {
        const bool branch_taken_0x26d2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2C0u;
        // 0x26d2c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2c0) {
            ctx->pc = 0x26D2F8u;
            goto label_26d2f8;
        }
    }
    ctx->pc = 0x26D2C8u;
    // 0x26d2c8: 0xae0011b4  sw          $zero, 0x11B4($s0)
    ctx->pc = 0x26d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4532), GPR_U32(ctx, 0));
    // 0x26d2cc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x26d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x26d2d0: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x26d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
    // 0x26d2d4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x26d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x26d2d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26D2D8u;
    {
        const bool branch_taken_0x26d2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d2d8) {
            ctx->pc = 0x26D2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D2D8u;
            // 0x26d2dc: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D2E0u;
            goto label_26d2e0;
        }
    }
    ctx->pc = 0x26D2E0u;
label_26d2e0:
    // 0x26d2e0: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x26d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x26d2e4: 0x240400db  addiu       $a0, $zero, 0xDB
    ctx->pc = 0x26d2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x26d2e8: 0xc081546  jal         func_205518
    ctx->pc = 0x26D2E8u;
    SET_GPR_U32(ctx, 31, 0x26D2F0u);
    ctx->pc = 0x26D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2E8u;
    // 0x26d2ec: 0x2625008c  addiu       $a1, $s1, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26D2E8u, 0x26D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2F0u;
label_26d2f0:
    // 0x26d2f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26D2F0u;
    {
        const bool branch_taken_0x26d2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2F0u;
        // 0x26d2f4: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2f0) {
            ctx->pc = 0x26D318u;
            goto label_26d318;
        }
    }
    ctx->pc = 0x26D2F8u;
label_26d2f8:
    // 0x26d2f8: 0xc6c1004c  lwc1        $f1, 0x4C($s6)
    ctx->pc = 0x26d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d2fc: 0xc6000b9c  lwc1        $f0, 0xB9C($s0)
    ctx->pc = 0x26d2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d300: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26d300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26d304: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x26d304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x26d308: 0xc6010b98  lwc1        $f1, 0xB98($s0)
    ctx->pc = 0x26d308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d30c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x26d30cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x26d310: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x26d310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_26d314:
    // 0x26d314: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x26d314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d318:
    // 0x26d318: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x26d318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x26d31c: 0xc78c8460  lwc1        $f12, -0x7BA0($gp)
    ctx->pc = 0x26d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d320: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26d320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26d324: 0x1ea980  sll         $s5, $fp, 6
    ctx->pc = 0x26d324u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x26d328: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26D328u;
    SET_GPR_U32(ctx, 31, 0x26D330u);
    ctx->pc = 0x26D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D328u;
    // 0x26d32c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26D328u, 0x26D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D330u;
label_26d330:
    // 0x26d330: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26D330u;
    {
        const bool branch_taken_0x26d330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D330u;
        // 0x26d334: 0x8ec40020  lw          $a0, 0x20($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d330) {
            ctx->pc = 0x26D340u;
            goto label_26d340;
        }
    }
    ctx->pc = 0x26D338u;
label_26d338:
    // 0x26d338: 0x1ea980  sll         $s5, $fp, 6
    ctx->pc = 0x26d338u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
label_26d33c:
    // 0x26d33c: 0x8ec40020  lw          $a0, 0x20($s6)
    ctx->pc = 0x26d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_26d340:
    // 0x26d340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26d344: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26d344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d348: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x26D348u;
    {
        const bool branch_taken_0x26d348 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D348u;
        // 0x26d34c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d348) {
            ctx->pc = 0x26D380u;
            goto label_26d380;
        }
    }
    ctx->pc = 0x26D350u;
    // 0x26d350: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26d354: 0x0  nop
    ctx->pc = 0x26d354u;
    // NOP
label_26d358:
    // 0x26d358: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x26d358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x26d35c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x26d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26d360: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x26D360u;
    SET_GPR_U32(ctx, 31, 0x26D368u);
    ctx->pc = 0x26D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D360u;
    // 0x26d364: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x26D360u, 0x26D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D368u;
label_26d368:
    // 0x26d368: 0x8ec40020  lw          $a0, 0x20($s6)
    ctx->pc = 0x26d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d36c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26d370: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26d370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26d374: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x26d374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26d378: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x26D378u;
    {
        const bool branch_taken_0x26d378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d378) {
            ctx->pc = 0x26D37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D378u;
            // 0x26d37c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d358;
        }
    }
    ctx->pc = 0x26D380u;
label_26d380:
    // 0x26d380: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26d380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d384: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d388: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d38c: 0xc7948464  lwc1        $f20, -0x7B9C($gp)
    ctx->pc = 0x26d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26d390: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D390u;
    SET_GPR_U32(ctx, 31, 0x26D398u);
    ctx->pc = 0x26D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D390u;
    // 0x26d394: 0xc6ee0008  lwc1        $f14, 0x8($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D390u, 0x26D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D398u;
label_26d398:
    // 0x26d398: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26d398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26d39c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26d39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26d3a0: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d3a4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d3a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d3ac: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x26d3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x26d3b0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D3B0u;
    SET_GPR_U32(ctx, 31, 0x26D3B8u);
    ctx->pc = 0x26D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3B0u;
    // 0x26d3b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D3B0u, 0x26D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3B8u;
label_26d3b8:
    // 0x26d3b8: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x26d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d3bc: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x26d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d3c0: 0xc64e001c  lwc1        $f14, 0x1C($s2)
    ctx->pc = 0x26d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d3c4: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x26d3c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x26d3c8: 0x46146b42  mul.s       $f13, $f13, $f20
    ctx->pc = 0x26d3c8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x26d3cc: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x26d3ccu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x26d3d0: 0x0  nop
    ctx->pc = 0x26d3d0u;
    // NOP
    // 0x26d3d4: 0x0  nop
    ctx->pc = 0x26d3d4u;
    // NOP
    // 0x26d3d8: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x26d3d8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x26d3dc: 0x0  nop
    ctx->pc = 0x26d3dcu;
    // NOP
    // 0x26d3e0: 0x0  nop
    ctx->pc = 0x26d3e0u;
    // NOP
    // 0x26d3e4: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x26d3e4u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x26d3e8: 0x0  nop
    ctx->pc = 0x26d3e8u;
    // NOP
    // 0x26d3ec: 0x0  nop
    ctx->pc = 0x26d3ecu;
    // NOP
    // 0x26d3f0: 0x46157383  div.s       $f14, $f14, $f21
    ctx->pc = 0x26d3f0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[21];
    // 0x26d3f4: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26D3F4u;
    SET_GPR_U32(ctx, 31, 0x26D3FCu);
    ctx->pc = 0x26D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3F4u;
    // 0x26d3f8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26D3F4u, 0x26D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3FCu;
label_26d3fc:
    // 0x26d3fc: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d400: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d404: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d408: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x26d408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x26d40c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D40Cu;
    SET_GPR_U32(ctx, 31, 0x26D414u);
    ctx->pc = 0x26D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D40Cu;
    // 0x26d410: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D40Cu, 0x26D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D414u;
label_26d414:
    // 0x26d414: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d418: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d41c: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26d41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d420: 0xc6ee0008  lwc1        $f14, 0x8($s7)
    ctx->pc = 0x26d420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d424: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26d424u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26d428: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x26d428u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x26d42c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D42Cu;
    SET_GPR_U32(ctx, 31, 0x26D434u);
    ctx->pc = 0x26D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D42Cu;
    // 0x26d430: 0x46007387  neg.s       $f14, $f14 (Delay Slot)
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D42Cu, 0x26D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D434u;
label_26d434:
    // 0x26d434: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d438: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d43c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d440: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x26d440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x26d444: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D444u;
    SET_GPR_U32(ctx, 31, 0x26D44Cu);
    ctx->pc = 0x26D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D444u;
    // 0x26d448: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D444u, 0x26D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D44Cu;
label_26d44c:
    // 0x26d44c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x26d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x26d450: 0x240201a9  addiu       $v0, $zero, 0x1A9
    ctx->pc = 0x26d450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
    // 0x26d454: 0x146201d0  bne         $v1, $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x26D454u;
    {
        const bool branch_taken_0x26d454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D454u;
        // 0x26d458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d454) {
            ctx->pc = 0x26DB98u;
            goto label_26db98;
        }
    }
    ctx->pc = 0x26D45Cu;
    // 0x26d45c: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x26d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x26d460: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26D460u;
    {
        const bool branch_taken_0x26d460 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D460u;
        // 0x26d464: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d460) {
            ctx->pc = 0x26D4BCu;
            goto label_26d4bc;
        }
    }
    ctx->pc = 0x26D468u;
    // 0x26d468: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x26d468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x26d46c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26d46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26d470: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26d470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d474: 0xc7868468  lwc1        $f6, -0x7B98($gp)
    ctx->pc = 0x26d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26d478: 0xc785846c  lwc1        $f5, -0x7B94($gp)
    ctx->pc = 0x26d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26d47c: 0xc643007c  lwc1        $f3, 0x7C($s2)
    ctx->pc = 0x26d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26d480: 0xc6420080  lwc1        $f2, 0x80($s2)
    ctx->pc = 0x26d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d484: 0xc6410084  lwc1        $f1, 0x84($s2)
    ctx->pc = 0x26d484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d488: 0xc6400088  lwc1        $f0, 0x88($s2)
    ctx->pc = 0x26d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d48c: 0x0  nop
    ctx->pc = 0x26d48cu;
    // NOP
label_26d490:
    // 0x26d490: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x26d490u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x26d494: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26d498: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x26d498u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x26d49c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x26d49cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x26d4a0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x26d4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x26d4a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26D4A4u;
    {
        const bool branch_taken_0x26d4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d4a4) {
            ctx->pc = 0x26D490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d490;
        }
    }
    ctx->pc = 0x26D4ACu;
    // 0x26d4ac: 0xe6400088  swc1        $f0, 0x88($s2)
    ctx->pc = 0x26d4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x26d4b0: 0xe6410084  swc1        $f1, 0x84($s2)
    ctx->pc = 0x26d4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x26d4b4: 0xe6420080  swc1        $f2, 0x80($s2)
    ctx->pc = 0x26d4b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x26d4b8: 0xe643007c  swc1        $f3, 0x7C($s2)
    ctx->pc = 0x26d4b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
label_26d4bc:
    // 0x26d4bc: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x26d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d4c0: 0xc7808470  lwc1        $f0, -0x7B90($gp)
    ctx->pc = 0x26d4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d4c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26d4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d4c8: 0x0  nop
    ctx->pc = 0x26d4c8u;
    // NOP
    // 0x26d4cc: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
    ctx->pc = 0x26D4CCu;
    {
        const bool branch_taken_0x26d4cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d4cc) {
            ctx->pc = 0x26D4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D4CCu;
            // 0x26d4d0: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D55Cu;
            goto label_26d55c;
        }
    }
    ctx->pc = 0x26D4D4u;
    // 0x26d4d4: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x26D4D4u;
    {
        const bool branch_taken_0x26d4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d4d4) {
            ctx->pc = 0x26D4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D4D4u;
            // 0x26d4d8: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D55Cu;
            goto label_26d55c;
        }
    }
    ctx->pc = 0x26D4DCu;
    // 0x26d4dc: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x26d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x26d4e0: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x26D4E0u;
    {
        const bool branch_taken_0x26d4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d4e0) {
            ctx->pc = 0x26D4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D4E0u;
            // 0x26d4e4: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D55Cu;
            goto label_26d55c;
        }
    }
    ctx->pc = 0x26D4E8u;
    // 0x26d4e8: 0x8c430164  lw          $v1, 0x164($v0)
    ctx->pc = 0x26d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x26d4ec: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x26D4ECu;
    {
        const bool branch_taken_0x26d4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4ECu;
        // 0x26d4f0: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4ec) {
            ctx->pc = 0x26D558u;
            goto label_26d558;
        }
    }
    ctx->pc = 0x26D4F4u;
    // 0x26d4f4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x26d4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d4f8: 0x2403071c  addiu       $v1, $zero, 0x71C
    ctx->pc = 0x26d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x26d4fc: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x26d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x26d500: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x26d500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26d504: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26d504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d508: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x26d508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x26d50c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x26d50cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26d510: 0x30420050  andi        $v0, $v0, 0x50
    ctx->pc = 0x26d510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)80);
    // 0x26d514: 0x54450011  bnel        $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26D514u;
    {
        const bool branch_taken_0x26d514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x26d514) {
            ctx->pc = 0x26D518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D514u;
            // 0x26d518: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D55Cu;
            goto label_26d55c;
        }
    }
    ctx->pc = 0x26D51Cu;
    // 0x26d51c: 0xc080f5c  jal         func_203D70
    ctx->pc = 0x26D51Cu;
    SET_GPR_U32(ctx, 31, 0x26D524u);
    ctx->pc = 0x26D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D51Cu;
    // 0x26d520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D70u, 0x26D51Cu, 0x26D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D524u;
label_26d524:
    // 0x26d524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d528: 0xc080f7c  jal         func_203DF0
    ctx->pc = 0x26D528u;
    SET_GPR_U32(ctx, 31, 0x26D530u);
    ctx->pc = 0x26D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D528u;
    // 0x26d52c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203DF0u, 0x26D528u, 0x26D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D530u;
label_26d530:
    // 0x26d530: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x26d530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x26d534: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26d534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26d538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d53c: 0xc6400088  lwc1        $f0, 0x88($s2)
    ctx->pc = 0x26d53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26d544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26d548: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26d548u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26d54c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x26d54cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x26d550: 0xc080f30  jal         func_203CC0
    ctx->pc = 0x26D550u;
    SET_GPR_U32(ctx, 31, 0x26D558u);
    ctx->pc = 0x26D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D550u;
    // 0x26d554: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203CC0u, 0x26D550u, 0x26D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D558u;
label_26d558:
    // 0x26d558: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26d558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26d55c:
    // 0x26d55c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d560: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d564: 0xc7948474  lwc1        $f20, -0x7B8C($gp)
    ctx->pc = 0x26d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26d568: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D568u;
    SET_GPR_U32(ctx, 31, 0x26D570u);
    ctx->pc = 0x26D56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D568u;
    // 0x26d56c: 0xc6ee0008  lwc1        $f14, 0x8($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D568u, 0x26D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D570u;
label_26d570:
    // 0x26d570: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26d570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26d574: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26d574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26d578: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d57c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d580: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x26d580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x26d584: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d588: 0xc7968478  lwc1        $f22, -0x7B88($gp)
    ctx->pc = 0x26d588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26d58c: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x26d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x26d590: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D590u;
    SET_GPR_U32(ctx, 31, 0x26D598u);
    ctx->pc = 0x26D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D590u;
    // 0x26d594: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D590u, 0x26D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D598u;
label_26d598:
    // 0x26d598: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d59c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d5a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d5a4: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x26d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x26d5a8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D5A8u;
    SET_GPR_U32(ctx, 31, 0x26D5B0u);
    ctx->pc = 0x26D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5A8u;
    // 0x26d5ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D5A8u, 0x26D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5B0u;
label_26d5b0:
    // 0x26d5b0: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d5b4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d5b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d5bc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x26d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x26d5c0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D5C0u;
    SET_GPR_U32(ctx, 31, 0x26D5C8u);
    ctx->pc = 0x26D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5C0u;
    // 0x26d5c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D5C0u, 0x26D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5C8u;
label_26d5c8:
    // 0x26d5c8: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d5cc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d5d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d5d4: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x26d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x26d5d8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D5D8u;
    SET_GPR_U32(ctx, 31, 0x26D5E0u);
    ctx->pc = 0x26D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5D8u;
    // 0x26d5dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D5D8u, 0x26D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5E0u;
label_26d5e0:
    // 0x26d5e0: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d5e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d5e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d5ec: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x26d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x26d5f0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D5F0u;
    SET_GPR_U32(ctx, 31, 0x26D5F8u);
    ctx->pc = 0x26D5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5F0u;
    // 0x26d5f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D5F0u, 0x26D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5F8u;
label_26d5f8:
    // 0x26d5f8: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x26d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d5fc: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x26d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d600: 0xc64e001c  lwc1        $f14, 0x1C($s2)
    ctx->pc = 0x26d600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d604: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x26d604u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x26d608: 0x46146b42  mul.s       $f13, $f13, $f20
    ctx->pc = 0x26d608u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x26d60c: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x26d60cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x26d610: 0x0  nop
    ctx->pc = 0x26d610u;
    // NOP
    // 0x26d614: 0x0  nop
    ctx->pc = 0x26d614u;
    // NOP
    // 0x26d618: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x26d618u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x26d61c: 0x0  nop
    ctx->pc = 0x26d61cu;
    // NOP
    // 0x26d620: 0x0  nop
    ctx->pc = 0x26d620u;
    // NOP
    // 0x26d624: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x26d624u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x26d628: 0x0  nop
    ctx->pc = 0x26d628u;
    // NOP
    // 0x26d62c: 0x0  nop
    ctx->pc = 0x26d62cu;
    // NOP
    // 0x26d630: 0x46157383  div.s       $f14, $f14, $f21
    ctx->pc = 0x26d630u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[21];
    // 0x26d634: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26D634u;
    SET_GPR_U32(ctx, 31, 0x26D63Cu);
    ctx->pc = 0x26D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D634u;
    // 0x26d638: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26D634u, 0x26D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D63Cu;
label_26d63c:
    // 0x26d63c: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d640: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d644: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d648: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x26d648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x26d64c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D64Cu;
    SET_GPR_U32(ctx, 31, 0x26D654u);
    ctx->pc = 0x26D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D64Cu;
    // 0x26d650: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D64Cu, 0x26D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D654u;
label_26d654:
    // 0x26d654: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d658: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d65c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d660: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x26d660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x26d664: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D664u;
    SET_GPR_U32(ctx, 31, 0x26D66Cu);
    ctx->pc = 0x26D668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D664u;
    // 0x26d668: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D664u, 0x26D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D66Cu;
label_26d66c:
    // 0x26d66c: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d670: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d674: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d678: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x26d678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x26d67c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D67Cu;
    SET_GPR_U32(ctx, 31, 0x26D684u);
    ctx->pc = 0x26D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D67Cu;
    // 0x26d680: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D67Cu, 0x26D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D684u;
label_26d684:
    // 0x26d684: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d688: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d68c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d690: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x26d690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x26d694: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D694u;
    SET_GPR_U32(ctx, 31, 0x26D69Cu);
    ctx->pc = 0x26D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D694u;
    // 0x26d698: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D694u, 0x26D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D69Cu;
label_26d69c:
    // 0x26d69c: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d6a0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d6a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d6a8: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x26d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x26d6ac: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D6ACu;
    SET_GPR_U32(ctx, 31, 0x26D6B4u);
    ctx->pc = 0x26D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6ACu;
    // 0x26d6b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D6ACu, 0x26D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6B4u;
label_26d6b4:
    // 0x26d6b4: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26d6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d6b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d6bc: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d6c0: 0xc6ee0008  lwc1        $f14, 0x8($s7)
    ctx->pc = 0x26d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d6c4: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26d6c4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26d6c8: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x26d6c8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x26d6cc: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D6CCu;
    SET_GPR_U32(ctx, 31, 0x26D6D4u);
    ctx->pc = 0x26D6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6CCu;
    // 0x26d6d0: 0x46007387  neg.s       $f14, $f14 (Delay Slot)
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D6CCu, 0x26D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6D4u;
label_26d6d4:
    // 0x26d6d4: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d6d8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d6dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d6e0: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x26d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x26d6e4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D6E4u;
    SET_GPR_U32(ctx, 31, 0x26D6ECu);
    ctx->pc = 0x26D6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6E4u;
    // 0x26d6e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D6E4u, 0x26D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6ECu;
label_26d6ec:
    // 0x26d6ec: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d6f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d6f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d6f8: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x26d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x26d6fc: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D6FCu;
    SET_GPR_U32(ctx, 31, 0x26D704u);
    ctx->pc = 0x26D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6FCu;
    // 0x26d700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D6FCu, 0x26D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D704u;
label_26d704:
    // 0x26d704: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d708: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d70c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d710: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x26d710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x26d714: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D714u;
    SET_GPR_U32(ctx, 31, 0x26D71Cu);
    ctx->pc = 0x26D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D714u;
    // 0x26d718: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D714u, 0x26D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D71Cu;
label_26d71c:
    // 0x26d71c: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d720: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d724: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d728: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x26d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x26d72c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D72Cu;
    SET_GPR_U32(ctx, 31, 0x26D734u);
    ctx->pc = 0x26D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D72Cu;
    // 0x26d730: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D72Cu, 0x26D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D734u;
label_26d734:
    // 0x26d734: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d738: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d73c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d740: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x26d740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x26d744: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D744u;
    SET_GPR_U32(ctx, 31, 0x26D74Cu);
    ctx->pc = 0x26D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D744u;
    // 0x26d748: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D744u, 0x26D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D74Cu;
label_26d74c:
    // 0x26d74c: 0xc64e0084  lwc1        $f14, 0x84($s2)
    ctx->pc = 0x26d74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d750: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d754: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d754u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d758: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x26d758u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x26d75c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D75Cu;
    SET_GPR_U32(ctx, 31, 0x26D764u);
    ctx->pc = 0x26D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D75Cu;
    // 0x26d760: 0x46007387  neg.s       $f14, $f14 (Delay Slot)
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D75Cu, 0x26D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D764u;
label_26d764:
    // 0x26d764: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d768: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d76c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d770: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x26d770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x26d774: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D774u;
    SET_GPR_U32(ctx, 31, 0x26D77Cu);
    ctx->pc = 0x26D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D774u;
    // 0x26d778: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D774u, 0x26D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D77Cu;
label_26d77c:
    // 0x26d77c: 0xc64e0080  lwc1        $f14, 0x80($s2)
    ctx->pc = 0x26d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d780: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d784: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d784u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d788: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x26d788u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x26d78c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D78Cu;
    SET_GPR_U32(ctx, 31, 0x26D794u);
    ctx->pc = 0x26D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D78Cu;
    // 0x26d790: 0x46007387  neg.s       $f14, $f14 (Delay Slot)
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D78Cu, 0x26D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D794u;
label_26d794:
    // 0x26d794: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d798: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d79c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d7a0: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x26d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x26d7a4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D7A4u;
    SET_GPR_U32(ctx, 31, 0x26D7ACu);
    ctx->pc = 0x26D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7A4u;
    // 0x26d7a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D7A4u, 0x26D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7ACu;
label_26d7ac:
    // 0x26d7ac: 0xc64e007c  lwc1        $f14, 0x7C($s2)
    ctx->pc = 0x26d7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d7b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d7b4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d7b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d7b8: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x26d7b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x26d7bc: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D7BCu;
    SET_GPR_U32(ctx, 31, 0x26D7C4u);
    ctx->pc = 0x26D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7BCu;
    // 0x26d7c0: 0x46007387  neg.s       $f14, $f14 (Delay Slot)
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D7BCu, 0x26D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7C4u;
label_26d7c4:
    // 0x26d7c4: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d7c8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d7cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d7d0: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x26d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x26d7d4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D7D4u;
    SET_GPR_U32(ctx, 31, 0x26D7DCu);
    ctx->pc = 0x26D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7D4u;
    // 0x26d7d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D7D4u, 0x26D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7DCu;
label_26d7dc:
    // 0x26d7dc: 0xc64e007c  lwc1        $f14, 0x7C($s2)
    ctx->pc = 0x26d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d7e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d7e4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d7e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d7e8: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x26d7e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x26d7ec: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26d7ecu;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26d7f0: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D7F0u;
    SET_GPR_U32(ctx, 31, 0x26D7F8u);
    ctx->pc = 0x26D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7F0u;
    // 0x26d7f4: 0x46167382  mul.s       $f14, $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D7F0u, 0x26D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7F8u;
label_26d7f8:
    // 0x26d7f8: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d7fc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d800: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d804: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x26d804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x26d808: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D808u;
    SET_GPR_U32(ctx, 31, 0x26D810u);
    ctx->pc = 0x26D80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D808u;
    // 0x26d80c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D808u, 0x26D810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D810u;
label_26d810:
    // 0x26d810: 0xc64e0080  lwc1        $f14, 0x80($s2)
    ctx->pc = 0x26d810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d814: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d818: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d81c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x26d81cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x26d820: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26d820u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26d824: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D824u;
    SET_GPR_U32(ctx, 31, 0x26D82Cu);
    ctx->pc = 0x26D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D824u;
    // 0x26d828: 0x46167382  mul.s       $f14, $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D824u, 0x26D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D82Cu;
label_26d82c:
    // 0x26d82c: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d830: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d834: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d838: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x26d838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x26d83c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D83Cu;
    SET_GPR_U32(ctx, 31, 0x26D844u);
    ctx->pc = 0x26D840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D83Cu;
    // 0x26d840: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D83Cu, 0x26D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D844u;
label_26d844:
    // 0x26d844: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26d844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d848: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d84c: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d850: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D850u;
    SET_GPR_U32(ctx, 31, 0x26D858u);
    ctx->pc = 0x26D854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D850u;
    // 0x26d854: 0xc6ee0008  lwc1        $f14, 0x8($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D850u, 0x26D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D858u;
label_26d858:
    // 0x26d858: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d85c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d860: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d864: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x26d864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26d868: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D868u;
    SET_GPR_U32(ctx, 31, 0x26D870u);
    ctx->pc = 0x26D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D868u;
    // 0x26d86c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D868u, 0x26D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D870u;
label_26d870:
    // 0x26d870: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x26d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d874: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x26d874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d878: 0xc64e001c  lwc1        $f14, 0x1C($s2)
    ctx->pc = 0x26d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d87c: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x26d87cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x26d880: 0x46146b42  mul.s       $f13, $f13, $f20
    ctx->pc = 0x26d880u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x26d884: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x26d884u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x26d888: 0x0  nop
    ctx->pc = 0x26d888u;
    // NOP
    // 0x26d88c: 0x0  nop
    ctx->pc = 0x26d88cu;
    // NOP
    // 0x26d890: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x26d890u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x26d894: 0x0  nop
    ctx->pc = 0x26d894u;
    // NOP
    // 0x26d898: 0x0  nop
    ctx->pc = 0x26d898u;
    // NOP
    // 0x26d89c: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x26d89cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x26d8a0: 0x0  nop
    ctx->pc = 0x26d8a0u;
    // NOP
    // 0x26d8a4: 0x0  nop
    ctx->pc = 0x26d8a4u;
    // NOP
    // 0x26d8a8: 0x46157383  div.s       $f14, $f14, $f21
    ctx->pc = 0x26d8a8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[21];
    // 0x26d8ac: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26D8ACu;
    SET_GPR_U32(ctx, 31, 0x26D8B4u);
    ctx->pc = 0x26D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8ACu;
    // 0x26d8b0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26D8ACu, 0x26D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8B4u;
label_26d8b4:
    // 0x26d8b4: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d8b8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d8bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d8c0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x26d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26d8c4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D8C4u;
    SET_GPR_U32(ctx, 31, 0x26D8CCu);
    ctx->pc = 0x26D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8C4u;
    // 0x26d8c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D8C4u, 0x26D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8CCu;
label_26d8cc:
    // 0x26d8cc: 0xc6ee0008  lwc1        $f14, 0x8($s7)
    ctx->pc = 0x26d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d8d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d8d4: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26d8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d8d8: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d8dc: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26d8dcu;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26d8e0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26d8e0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26d8e4: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D8E4u;
    SET_GPR_U32(ctx, 31, 0x26D8ECu);
    ctx->pc = 0x26D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8E4u;
    // 0x26d8e8: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D8E4u, 0x26D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8ECu;
label_26d8ec:
    // 0x26d8ec: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d8f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d8f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d8f8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x26d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26d8fc: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D8FCu;
    SET_GPR_U32(ctx, 31, 0x26D904u);
    ctx->pc = 0x26D900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8FCu;
    // 0x26d900: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D8FCu, 0x26D904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D904u;
label_26d904:
    // 0x26d904: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x26d904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26d908: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d90c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x26d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x26d910: 0x2457000c  addiu       $s7, $v0, 0xC
    ctx->pc = 0x26d910u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x26d914: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x26d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d918: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d91c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D91Cu;
    SET_GPR_U32(ctx, 31, 0x26D924u);
    ctx->pc = 0x26D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D91Cu;
    // 0x26d920: 0xc6ee0008  lwc1        $f14, 0x8($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D91Cu, 0x26D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D924u;
label_26d924:
    // 0x26d924: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d928: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d92c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d930: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x26d930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26d934: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D934u;
    SET_GPR_U32(ctx, 31, 0x26D93Cu);
    ctx->pc = 0x26D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D934u;
    // 0x26d938: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D934u, 0x26D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D93Cu;
label_26d93c:
    // 0x26d93c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26D93Cu;
    SET_GPR_U32(ctx, 31, 0x26D944u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26D93Cu, 0x26D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D944u;
label_26d944:
    // 0x26d944: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D944u;
    {
        const bool branch_taken_0x26d944 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D944u;
        // 0x26d948: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d944) {
            ctx->pc = 0x26D958u;
            goto label_26d958;
        }
    }
    ctx->pc = 0x26D94Cu;
    // 0x26d94c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26d94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26d950: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26D950u;
    {
        const bool branch_taken_0x26d950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D950u;
        // 0x26d954: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d950) {
            ctx->pc = 0x26D96Cu;
            goto label_26d96c;
        }
    }
    ctx->pc = 0x26D958u;
label_26d958:
    // 0x26d958: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26d958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26d95c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26d95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26d960: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26d960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26d964: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26d964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26d968: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26d968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26d96c:
    // 0x26d96c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26d96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26d970: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x26d970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26d974: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d978: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x26d978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26d97c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d980: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d984: 0x460e0b82  mul.s       $f14, $f1, $f14
    ctx->pc = 0x26d984u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x26d988: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x26d988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26d98c: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26D98Cu;
    SET_GPR_U32(ctx, 31, 0x26D994u);
    ctx->pc = 0x26D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D98Cu;
    // 0x26d990: 0x46007382  mul.s       $f14, $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26D98Cu, 0x26D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D994u;
label_26d994:
    // 0x26d994: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d998: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d99c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d9a0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x26d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26d9a4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D9A4u;
    SET_GPR_U32(ctx, 31, 0x26D9ACu);
    ctx->pc = 0x26D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9A4u;
    // 0x26d9a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D9A4u, 0x26D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9ACu;
label_26d9ac:
    // 0x26d9ac: 0xc6ee0008  lwc1        $f14, 0x8($s7)
    ctx->pc = 0x26d9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26d9b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d9b4: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26d9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d9b8: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d9bc: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26d9bcu;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26d9c0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26d9c0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26d9c4: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D9C4u;
    SET_GPR_U32(ctx, 31, 0x26D9CCu);
    ctx->pc = 0x26D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9C4u;
    // 0x26d9c8: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D9C4u, 0x26D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9CCu;
label_26d9cc:
    // 0x26d9cc: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d9d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d9d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d9d8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x26d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26d9dc: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26D9DCu;
    SET_GPR_U32(ctx, 31, 0x26D9E4u);
    ctx->pc = 0x26D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9DCu;
    // 0x26d9e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26D9DCu, 0x26D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9E4u;
label_26d9e4:
    // 0x26d9e4: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x26d9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d9e8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d9ec: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x26d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d9f0: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26D9F0u;
    SET_GPR_U32(ctx, 31, 0x26D9F8u);
    ctx->pc = 0x26D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9F0u;
    // 0x26d9f4: 0xc66e0008  lwc1        $f14, 0x8($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26D9F0u, 0x26D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9F8u;
label_26d9f8:
    // 0x26d9f8: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26d9fc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26d9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26da00: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26da00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26da04: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26da04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26da08: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DA08u;
    SET_GPR_U32(ctx, 31, 0x26DA10u);
    ctx->pc = 0x26DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA08u;
    // 0x26da0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DA08u, 0x26DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA10u;
label_26da10:
    // 0x26da10: 0xc781847c  lwc1        $f1, -0x7B84($gp)
    ctx->pc = 0x26da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26da14: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x26da14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26da18: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x26da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26da1c: 0xc64e001c  lwc1        $f14, 0x1C($s2)
    ctx->pc = 0x26da1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26da20: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x26da20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x26da24: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x26da24u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x26da28: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26da28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26da2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26da2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26da30: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x26da30u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x26da34: 0x0  nop
    ctx->pc = 0x26da34u;
    // NOP
    // 0x26da38: 0x0  nop
    ctx->pc = 0x26da38u;
    // NOP
    // 0x26da3c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x26da3cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x26da40: 0x0  nop
    ctx->pc = 0x26da40u;
    // NOP
    // 0x26da44: 0x0  nop
    ctx->pc = 0x26da44u;
    // NOP
    // 0x26da48: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x26da48u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x26da4c: 0x0  nop
    ctx->pc = 0x26da4cu;
    // NOP
    // 0x26da50: 0x0  nop
    ctx->pc = 0x26da50u;
    // NOP
    // 0x26da54: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x26da54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
    // 0x26da58: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26DA58u;
    SET_GPR_U32(ctx, 31, 0x26DA60u);
    ctx->pc = 0x26DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA58u;
    // 0x26da5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26DA58u, 0x26DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA60u;
label_26da60:
    // 0x26da60: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26da64: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26da64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26da68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26da68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26da6c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26da70: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DA70u;
    SET_GPR_U32(ctx, 31, 0x26DA78u);
    ctx->pc = 0x26DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA70u;
    // 0x26da74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DA70u, 0x26DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA78u;
label_26da78:
    // 0x26da78: 0xc66e0008  lwc1        $f14, 0x8($s3)
    ctx->pc = 0x26da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26da7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26da80: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x26da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26da84: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x26da84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26da88: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26da88u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26da8c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26da8cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26da90: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26DA90u;
    SET_GPR_U32(ctx, 31, 0x26DA98u);
    ctx->pc = 0x26DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA90u;
    // 0x26da94: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26DA90u, 0x26DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA98u;
label_26da98:
    // 0x26da98: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26da9c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26da9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26daa0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26daa4: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26daa8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DAA8u;
    SET_GPR_U32(ctx, 31, 0x26DAB0u);
    ctx->pc = 0x26DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DAA8u;
    // 0x26daac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DAA8u, 0x26DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DAB0u;
label_26dab0:
    // 0x26dab0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x26dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26dab4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dab8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x26dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x26dabc: 0x24570018  addiu       $s7, $v0, 0x18
    ctx->pc = 0x26dabcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x26dac0: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x26dac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26dac4: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26dac8: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26DAC8u;
    SET_GPR_U32(ctx, 31, 0x26DAD0u);
    ctx->pc = 0x26DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DAC8u;
    // 0x26dacc: 0xc6ee0008  lwc1        $f14, 0x8($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26DAC8u, 0x26DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DAD0u;
label_26dad0:
    // 0x26dad0: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26dad4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26dad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dad8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26dadc: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26dae0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DAE0u;
    SET_GPR_U32(ctx, 31, 0x26DAE8u);
    ctx->pc = 0x26DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DAE0u;
    // 0x26dae4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DAE0u, 0x26DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DAE8u;
label_26dae8:
    // 0x26dae8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26DAE8u;
    SET_GPR_U32(ctx, 31, 0x26DAF0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26DAE8u, 0x26DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DAF0u;
label_26daf0:
    // 0x26daf0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DAF0u;
    {
        const bool branch_taken_0x26daf0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAF0u;
        // 0x26daf4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26daf0) {
            ctx->pc = 0x26DB04u;
            goto label_26db04;
        }
    }
    ctx->pc = 0x26DAF8u;
    // 0x26daf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26daf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26dafc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26DAFCu;
    {
        const bool branch_taken_0x26dafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAFCu;
        // 0x26db00: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dafc) {
            ctx->pc = 0x26DB18u;
            goto label_26db18;
        }
    }
    ctx->pc = 0x26DB04u;
label_26db04:
    // 0x26db04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26db04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26db08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26db08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26db0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26db0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26db10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26db10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26db14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26db14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26db18:
    // 0x26db18: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26db18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26db1c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x26db1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26db20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26db20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26db24: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x26db24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26db28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26db28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26db2c: 0x460e0b82  mul.s       $f14, $f1, $f14
    ctx->pc = 0x26db2cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x26db30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26db30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26db34: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x26db34u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x26db38: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26DB38u;
    SET_GPR_U32(ctx, 31, 0x26DB40u);
    ctx->pc = 0x26DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB38u;
    // 0x26db3c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26DB38u, 0x26DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB40u;
label_26db40:
    // 0x26db40: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26db44: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26db44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26db48: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26db48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26db4c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26db50: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DB50u;
    SET_GPR_U32(ctx, 31, 0x26DB58u);
    ctx->pc = 0x26DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB50u;
    // 0x26db54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DB50u, 0x26DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB58u;
label_26db58:
    // 0x26db58: 0xc6ee0008  lwc1        $f14, 0x8($s7)
    ctx->pc = 0x26db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26db5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26db60: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26db64: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26db64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26db68: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26db68u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26db6c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26db6cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26db70: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26DB70u;
    SET_GPR_U32(ctx, 31, 0x26DB78u);
    ctx->pc = 0x26DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB70u;
    // 0x26db74: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26DB70u, 0x26DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB78u;
label_26db78:
    // 0x26db78: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26db7c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26db7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26db80: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26db80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26db84: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26db84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26db88: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DB88u;
    SET_GPR_U32(ctx, 31, 0x26DB90u);
    ctx->pc = 0x26DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB88u;
    // 0x26db8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DB88u, 0x26DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB90u;
label_26db90:
    // 0x26db90: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x26DB90u;
    {
        const bool branch_taken_0x26db90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB90u;
        // 0x26db94: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db90) {
            ctx->pc = 0x26DD5Cu;
            goto label_26dd5c;
        }
    }
    ctx->pc = 0x26DB98u;
label_26db98:
    // 0x26db98: 0x17c20070  bne         $fp, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x26DB98u;
    {
        const bool branch_taken_0x26db98 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x26DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB98u;
        // 0x26db9c: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db98) {
            ctx->pc = 0x26DD5Cu;
            goto label_26dd5c;
        }
    }
    ctx->pc = 0x26DBA0u;
    // 0x26dba0: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26dba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26dba4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dba8: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26dba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26dbac: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26DBACu;
    SET_GPR_U32(ctx, 31, 0x26DBB4u);
    ctx->pc = 0x26DBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DBACu;
    // 0x26dbb0: 0xc6ee0008  lwc1        $f14, 0x8($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26DBACu, 0x26DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBB4u;
label_26dbb4:
    // 0x26dbb4: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26dbb8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26dbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dbbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26dbc0: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26dbc4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DBC4u;
    SET_GPR_U32(ctx, 31, 0x26DBCCu);
    ctx->pc = 0x26DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DBC4u;
    // 0x26dbc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DBC4u, 0x26DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBCCu;
label_26dbcc:
    // 0x26dbcc: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x26dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26dbd0: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x26dbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26dbd4: 0xc64e001c  lwc1        $f14, 0x1C($s2)
    ctx->pc = 0x26dbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26dbd8: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x26dbd8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x26dbdc: 0x46146b42  mul.s       $f13, $f13, $f20
    ctx->pc = 0x26dbdcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x26dbe0: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x26dbe0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x26dbe4: 0x0  nop
    ctx->pc = 0x26dbe4u;
    // NOP
    // 0x26dbe8: 0x0  nop
    ctx->pc = 0x26dbe8u;
    // NOP
    // 0x26dbec: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x26dbecu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x26dbf0: 0x0  nop
    ctx->pc = 0x26dbf0u;
    // NOP
    // 0x26dbf4: 0x0  nop
    ctx->pc = 0x26dbf4u;
    // NOP
    // 0x26dbf8: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x26dbf8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x26dbfc: 0x0  nop
    ctx->pc = 0x26dbfcu;
    // NOP
    // 0x26dc00: 0x0  nop
    ctx->pc = 0x26dc00u;
    // NOP
    // 0x26dc04: 0x46157383  div.s       $f14, $f14, $f21
    ctx->pc = 0x26dc04u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[21];
    // 0x26dc08: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26DC08u;
    SET_GPR_U32(ctx, 31, 0x26DC10u);
    ctx->pc = 0x26DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC08u;
    // 0x26dc0c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26DC08u, 0x26DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC10u;
label_26dc10:
    // 0x26dc10: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26dc14: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26dc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dc18: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26dc1c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26dc20: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DC20u;
    SET_GPR_U32(ctx, 31, 0x26DC28u);
    ctx->pc = 0x26DC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC20u;
    // 0x26dc24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DC20u, 0x26DC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC28u;
label_26dc28:
    // 0x26dc28: 0xc6ee0008  lwc1        $f14, 0x8($s7)
    ctx->pc = 0x26dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26dc2c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dc30: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26dc34: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26dc38: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26dc38u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26dc3c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26dc3cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26dc40: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26DC40u;
    SET_GPR_U32(ctx, 31, 0x26DC48u);
    ctx->pc = 0x26DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC40u;
    // 0x26dc44: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26DC40u, 0x26DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC48u;
label_26dc48:
    // 0x26dc48: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26dc4c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26dc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dc50: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26dc54: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26dc58: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DC58u;
    SET_GPR_U32(ctx, 31, 0x26DC60u);
    ctx->pc = 0x26DC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC58u;
    // 0x26dc5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DC58u, 0x26DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC60u;
label_26dc60:
    // 0x26dc60: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26dc64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dc68: 0x8c570048  lw          $s7, 0x48($v0)
    ctx->pc = 0x26dc68u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x26dc6c: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26dc70: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26dc74: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26DC74u;
    SET_GPR_U32(ctx, 31, 0x26DC7Cu);
    ctx->pc = 0x26DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC74u;
    // 0x26dc78: 0xc6ee0008  lwc1        $f14, 0x8($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26DC74u, 0x26DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC7Cu;
label_26dc7c:
    // 0x26dc7c: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26dc80: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26dc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dc84: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26dc88: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26dc8c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DC8Cu;
    SET_GPR_U32(ctx, 31, 0x26DC94u);
    ctx->pc = 0x26DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC8Cu;
    // 0x26dc90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DC8Cu, 0x26DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC94u;
label_26dc94:
    // 0x26dc94: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x26DC94u;
    SET_GPR_U32(ctx, 31, 0x26DC9Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x26DC94u, 0x26DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC9Cu;
label_26dc9c:
    // 0x26dc9c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DC9Cu;
    {
        const bool branch_taken_0x26dc9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC9Cu;
        // 0x26dca0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc9c) {
            ctx->pc = 0x26DCB0u;
            goto label_26dcb0;
        }
    }
    ctx->pc = 0x26DCA4u;
    // 0x26dca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26dca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26dca8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26DCA8u;
    {
        const bool branch_taken_0x26dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCA8u;
        // 0x26dcac: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dca8) {
            ctx->pc = 0x26DCC4u;
            goto label_26dcc4;
        }
    }
    ctx->pc = 0x26DCB0u;
label_26dcb0:
    // 0x26dcb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26dcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26dcb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26dcb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26dcb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26dcbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26dcbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26dcc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26dcc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26dcc4:
    // 0x26dcc4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x26dcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x26dcc8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x26dcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26dccc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dcd0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x26dcd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26dcd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26dcd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dcd8: 0x460e0b82  mul.s       $f14, $f1, $f14
    ctx->pc = 0x26dcd8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x26dcdc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26dcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26dce0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26dce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26dce4: 0xc7818480  lwc1        $f1, -0x7B80($gp)
    ctx->pc = 0x26dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dce8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26dce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26dcec: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x26dcecu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x26dcf0: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x26dcf0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x26dcf4: 0x0  nop
    ctx->pc = 0x26dcf4u;
    // NOP
    // 0x26dcf8: 0x0  nop
    ctx->pc = 0x26dcf8u;
    // NOP
    // 0x26dcfc: 0x46027383  div.s       $f14, $f14, $f2
    ctx->pc = 0x26dcfcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[2];
    // 0x26dd00: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26DD00u;
    SET_GPR_U32(ctx, 31, 0x26DD08u);
    ctx->pc = 0x26DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD00u;
    // 0x26dd04: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26DD00u, 0x26DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD08u;
label_26dd08:
    // 0x26dd08: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26dd0c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26dd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dd10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26dd14: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26dd18: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DD18u;
    SET_GPR_U32(ctx, 31, 0x26DD20u);
    ctx->pc = 0x26DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD18u;
    // 0x26dd1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DD18u, 0x26DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD20u;
label_26dd20:
    // 0x26dd20: 0xc6ee0008  lwc1        $f14, 0x8($s7)
    ctx->pc = 0x26dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26dd24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dd28: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x26dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26dd2c: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x26dd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26dd30: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26dd30u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26dd34: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26dd34u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26dd38: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26DD38u;
    SET_GPR_U32(ctx, 31, 0x26DD40u);
    ctx->pc = 0x26DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD38u;
    // 0x26dd3c: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26DD38u, 0x26DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD40u;
label_26dd40:
    // 0x26dd40: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x26dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x26dd44: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26dd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dd48: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26dd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26dd4c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x26dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x26dd50: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26DD50u;
    SET_GPR_U32(ctx, 31, 0x26DD58u);
    ctx->pc = 0x26DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD50u;
    // 0x26dd54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26DD50u, 0x26DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD58u;
label_26dd58:
    // 0x26dd58: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x26dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_26dd5c:
    // 0x26dd5c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DD5Cu;
    {
        const bool branch_taken_0x26dd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD5Cu;
        // 0x26dd60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd5c) {
            ctx->pc = 0x26DD7Cu;
            goto label_26dd7c;
        }
    }
    ctx->pc = 0x26DD64u;
    // 0x26dd64: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x26dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x26dd68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26dd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26dd6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd70: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x26dd70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26dd74: 0xc0a4004  jal         func_290010
    ctx->pc = 0x26DD74u;
    SET_GPR_U32(ctx, 31, 0x26DD7Cu);
    ctx->pc = 0x26DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD74u;
    // 0x26dd78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290010u, 0x26DD74u, 0x26DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD7Cu;
label_26dd7c:
    // 0x26dd7c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x26dd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_26dd80:
    // 0x26dd80: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x26dd80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26dd84: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x26dd84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26dd88: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x26dd88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26dd8c: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x26dd8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26dd90: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x26dd90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26dd94: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x26dd94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26dd98: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x26dd98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26dd9c: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x26dd9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26dda0: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x26dda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26dda4: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x26dda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x26dda8: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x26dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26ddac: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x26ddacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26ddb0: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x26ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26ddb4: 0x3e00008  jr          $ra
    ctx->pc = 0x26DDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDB4u;
        // 0x26ddb8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DDBCu;
}
