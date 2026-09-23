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

// Function: decalGfxMoving
// Address: 0x2a6250 - 0x2a62d4
void decalGfxMoving_0x2a6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalGfxMoving_0x2a6250");
#endif

    switch (ctx->pc) {
        case 0x2a6268u: goto label_2a6268;
        case 0x2a6274u: goto label_2a6274;
        case 0x2a627cu: goto label_2a627c;
        case 0x2a62a0u: goto label_2a62a0;
        case 0x2a62a8u: goto label_2a62a8;
        case 0x2a62bcu: goto label_2a62bc;
        default: break;
    }

    ctx->pc = 0x2a6250u;

    // 0x2a6250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6254: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a6254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a6258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a625c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a6260: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2A6260u;
    SET_GPR_U32(ctx, 31, 0x2A6268u);
    ctx->pc = 0x2A6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6260u;
    // 0x2a6264: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2A6260u, 0x2A6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6268u;
label_2a6268:
    // 0x2a6268: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a6268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a626c: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2A626Cu;
    SET_GPR_U32(ctx, 31, 0x2A6274u);
    ctx->pc = 0x2A6270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A626Cu;
    // 0x2a6270: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2A626Cu, 0x2A6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6274u;
label_2a6274:
    // 0x2a6274: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A6274u;
    SET_GPR_U32(ctx, 31, 0x2A627Cu);
    ctx->pc = 0x2A6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6274u;
    // 0x2a6278: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A6274u, 0x2A627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A627Cu;
label_2a627c:
    // 0x2a627c: 0x8f83b30c  lw          $v1, -0x4CF4($gp)
    ctx->pc = 0x2a627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947596)));
    // 0x2a6280: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2a6280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2a6284: 0x24429d48  addiu       $v0, $v0, -0x62B8
    ctx->pc = 0x2a6284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
    // 0x2a6288: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a6288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a628c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6290: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2a6290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6294: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6294u;
    {
        const bool branch_taken_0x2a6294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6294) {
            ctx->pc = 0x2A62B4u;
            goto label_2a62b4;
        }
    }
    ctx->pc = 0x2A629Cu;
    // 0x2a629c: 0xc60c00e0  lwc1        $f12, 0xE0($s0)
    ctx->pc = 0x2a629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a62a0:
    // 0x2a62a0: 0xc0a96c8  jal         func_2A5B20
    ctx->pc = 0x2A62A0u;
    SET_GPR_U32(ctx, 31, 0x2A62A8u);
    ctx->pc = 0x2A62A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A62A0u;
    // 0x2a62a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B20u, 0x2A62A0u, 0x2A62A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62A8u;
label_2a62a8:
    // 0x2a62a8: 0x8e1000c0  lw          $s0, 0xC0($s0)
    ctx->pc = 0x2a62a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2a62ac: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2A62ACu;
    {
        const bool branch_taken_0x2a62ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a62ac) {
            ctx->pc = 0x2A62B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A62ACu;
            // 0x2a62b0: 0xc60c00e0  lwc1        $f12, 0xE0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A62A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a62a0;
        }
    }
    ctx->pc = 0x2A62B4u;
label_2a62b4:
    // 0x2a62b4: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A62B4u;
    SET_GPR_U32(ctx, 31, 0x2A62BCu);
    ctx->pc = 0x2A62B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A62B4u;
    // 0x2a62b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A62B4u, 0x2A62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62BCu;
label_2a62bc:
    // 0x2a62bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a62bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a62c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a62c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a62c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a62c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a62c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a62cc: 0x80adf34  j           func_2B7CD0
    ctx->pc = 0x2A62CCu;
    ctx->pc = 0x2A62D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A62CCu;
    // 0x2a62d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    dlSetZB_0x2b7cd0(rdram, ctx, runtime); return;
    ctx->pc = 0x2A62D4u;
}
