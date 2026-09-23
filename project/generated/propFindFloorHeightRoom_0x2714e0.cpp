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

// Function: propFindFloorHeightRoom
// Address: 0x2714e0 - 0x27164c
void propFindFloorHeightRoom_0x2714e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propFindFloorHeightRoom_0x2714e0");
#endif

    switch (ctx->pc) {
        case 0x271538u: goto label_271538;
        case 0x271568u: goto label_271568;
        case 0x2715b8u: goto label_2715b8;
        default: break;
    }

    ctx->pc = 0x2714e0u;

    // 0x2714e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2714e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2714e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2714e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2714e8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2714e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2714ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2714ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714f0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2714f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2714f4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2714f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2714f8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2714f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714fc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2714fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x271500: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x271500u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271504: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x271504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x271508: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x271508u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27150c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27150cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x271510: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x271510u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271514: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x271514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x271518: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x271518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27151c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x271520: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x271520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x271524: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x271524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x271528: 0xc454f93c  lwc1        $f20, -0x6C4($v0)
    ctx->pc = 0x271528u;
    { uint32_t bits = FAST_READ32(0x3AF93Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27152c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x27152cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x271530: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x271530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x271534: 0x0  nop
    ctx->pc = 0x271534u;
    // NOP
label_271538:
    // 0x271538: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x271538u;
    {
        const bool branch_taken_0x271538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271538u;
        // 0x27153c: 0x3c0201fd  lui         $v0, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271538) {
            ctx->pc = 0x271550u;
            goto label_271550;
        }
    }
    ctx->pc = 0x271540u;
    // 0x271540: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x271540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x271544: 0x8f92b8f8  lw          $s2, -0x4708($gp)
    ctx->pc = 0x271544u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x271548: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271548u;
    {
        const bool branch_taken_0x271548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271548u;
        // 0x27154c: 0x24542f60  addiu       $s4, $v0, 0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271548) {
            ctx->pc = 0x271558u;
            goto label_271558;
        }
    }
    ctx->pc = 0x271550u;
label_271550:
    // 0x271550: 0x8f92b8fc  lw          $s2, -0x4704($gp)
    ctx->pc = 0x271550u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949116)));
    // 0x271554: 0x24543410  addiu       $s4, $v0, 0x3410
    ctx->pc = 0x271554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 13328));
label_271558:
    // 0x271558: 0x1a400024  blez        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x271558u;
    {
        const bool branch_taken_0x271558 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x27155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271558u;
        // 0x27155c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271558) {
            ctx->pc = 0x2715ECu;
            goto label_2715ec;
        }
    }
    ctx->pc = 0x271560u;
    // 0x271560: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x271560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x271564: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x271564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_271568:
    // 0x271568: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x271568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x27156c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x27156cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271570: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x271570u;
    {
        const bool branch_taken_0x271570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x271570) {
            ctx->pc = 0x271574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271570u;
            // 0x271574: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2715D8u;
            goto label_2715d8;
        }
    }
    ctx->pc = 0x271578u;
    // 0x271578: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x271578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27157c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x27157cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x271580: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x271580u;
    {
        const bool branch_taken_0x271580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271580) {
            ctx->pc = 0x271584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271580u;
            // 0x271584: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2715D8u;
            goto label_2715d8;
        }
    }
    ctx->pc = 0x271588u;
    // 0x271588: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x271588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27158c: 0x10560004  beq         $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x27158Cu;
    {
        const bool branch_taken_0x27158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x271590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27158Cu;
        // 0x271590: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27158c) {
            ctx->pc = 0x2715A0u;
            goto label_2715a0;
        }
    }
    ctx->pc = 0x271594u;
    // 0x271594: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x271594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271598: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x271598u;
    {
        const bool branch_taken_0x271598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x271598) {
            ctx->pc = 0x27159Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271598u;
            // 0x27159c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2715D8u;
            goto label_2715d8;
        }
    }
    ctx->pc = 0x2715A0u;
label_2715a0:
    // 0x2715a0: 0x8e0401e0  lw          $a0, 0x1E0($s0)
    ctx->pc = 0x2715a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x2715a4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2715A4u;
    {
        const bool branch_taken_0x2715a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2715A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715A4u;
        // 0x2715a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715a4) {
            ctx->pc = 0x2715D4u;
            goto label_2715d4;
        }
    }
    ctx->pc = 0x2715ACu;
    // 0x2715ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2715acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2715b0: 0xc09f15e  jal         func_27C578
    ctx->pc = 0x2715B0u;
    SET_GPR_U32(ctx, 31, 0x2715B8u);
    ctx->pc = 0x2715B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2715B0u;
    // 0x2715b4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C578u, 0x2715B0u, 0x2715B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2715B8u;
label_2715b8:
    // 0x2715b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2715b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2715bc: 0x0  nop
    ctx->pc = 0x2715bcu;
    // NOP
    // 0x2715c0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2715C0u;
    {
        const bool branch_taken_0x2715c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2715c0) {
            ctx->pc = 0x2715C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2715C0u;
            // 0x2715c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2715D8u;
            goto label_2715d8;
        }
    }
    ctx->pc = 0x2715C8u;
    // 0x2715c8: 0x8fbe0000  lw          $fp, 0x0($sp)
    ctx->pc = 0x2715c8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2715cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2715ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2715d0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2715d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2715d4:
    // 0x2715d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2715d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2715d8:
    // 0x2715d8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2715d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2715dc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2715DCu;
    {
        const bool branch_taken_0x2715dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2715E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715DCu;
        // 0x2715e0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715dc) {
            ctx->pc = 0x271568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271568;
        }
    }
    ctx->pc = 0x2715E4u;
    // 0x2715e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2715E4u;
    {
        const bool branch_taken_0x2715e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2715E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715E4u;
        // 0x2715e8: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715e4) {
            ctx->pc = 0x2715F4u;
            goto label_2715f4;
        }
    }
    ctx->pc = 0x2715ECu;
label_2715ec:
    // 0x2715ec: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x2715ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2715f0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2715f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2715f4:
    // 0x2715f4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2715f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2715f8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2715F8u;
    {
        const bool branch_taken_0x2715f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2715FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715F8u;
        // 0x2715fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715f8) {
            ctx->pc = 0x271538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271538;
        }
    }
    ctx->pc = 0x271600u;
    // 0x271600: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x271600u;
    {
        const bool branch_taken_0x271600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271600) {
            ctx->pc = 0x271604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271600u;
            // 0x271604: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271608u;
            goto label_271608;
        }
    }
    ctx->pc = 0x271608u;
label_271608:
    // 0x271608: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x271608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27160c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27160Cu;
    {
        const bool branch_taken_0x27160c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27160c) {
            ctx->pc = 0x271610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27160Cu;
            // 0x271610: 0xac770000  sw          $s7, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271614u;
            goto label_271614;
        }
    }
    ctx->pc = 0x271614u;
label_271614:
    // 0x271614: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x271614u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x271618: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x271618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27161c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x27161cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x271620: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x271620u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x271624: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x271624u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x271628: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x271628u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27162c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27162cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271630: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x271630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271634: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x271634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271638: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x271638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27163c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27163cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271640: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x271640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x271644: 0x3e00008  jr          $ra
    ctx->pc = 0x271644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271644u;
        // 0x271648: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27164Cu;
}
