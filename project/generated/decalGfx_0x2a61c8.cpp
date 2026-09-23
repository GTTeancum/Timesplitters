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

// Function: decalGfx
// Address: 0x2a61c8 - 0x2a624c
void decalGfx_0x2a61c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalGfx_0x2a61c8");
#endif

    switch (ctx->pc) {
        case 0x2a61e4u: goto label_2a61e4;
        case 0x2a61f0u: goto label_2a61f0;
        case 0x2a61f8u: goto label_2a61f8;
        case 0x2a6218u: goto label_2a6218;
        case 0x2a6220u: goto label_2a6220;
        case 0x2a6234u: goto label_2a6234;
        default: break;
    }

    ctx->pc = 0x2a61c8u;

    // 0x2a61c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a61c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a61cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a61ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a61d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a61d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a61d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a61d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a61d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a61d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a61dc: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2A61DCu;
    SET_GPR_U32(ctx, 31, 0x2A61E4u);
    ctx->pc = 0x2A61E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61DCu;
    // 0x2a61e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2A61DCu, 0x2A61E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61E4u;
label_2a61e4:
    // 0x2a61e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a61e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a61e8: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2A61E8u;
    SET_GPR_U32(ctx, 31, 0x2A61F0u);
    ctx->pc = 0x2A61ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61E8u;
    // 0x2a61ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2A61E8u, 0x2A61F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61F0u;
label_2a61f0:
    // 0x2a61f0: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A61F0u;
    SET_GPR_U32(ctx, 31, 0x2A61F8u);
    ctx->pc = 0x2A61F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61F0u;
    // 0x2a61f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A61F0u, 0x2A61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61F8u;
label_2a61f8:
    // 0x2a61f8: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2a61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2a61fc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2a61fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a6200: 0x24639d48  addiu       $v1, $v1, -0x62B8
    ctx->pc = 0x2a6200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942024));
    // 0x2a6204: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2a6204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2a6208: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2a6208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a620c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A620Cu;
    {
        const bool branch_taken_0x2a620c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a620c) {
            ctx->pc = 0x2A622Cu;
            goto label_2a622c;
        }
    }
    ctx->pc = 0x2A6214u;
    // 0x2a6214: 0xc60c00e0  lwc1        $f12, 0xE0($s0)
    ctx->pc = 0x2a6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a6218:
    // 0x2a6218: 0xc0a96c8  jal         func_2A5B20
    ctx->pc = 0x2A6218u;
    SET_GPR_U32(ctx, 31, 0x2A6220u);
    ctx->pc = 0x2A621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6218u;
    // 0x2a621c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B20u, 0x2A6218u, 0x2A6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6220u;
label_2a6220:
    // 0x2a6220: 0x8e1000c0  lw          $s0, 0xC0($s0)
    ctx->pc = 0x2a6220u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2a6224: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2A6224u;
    {
        const bool branch_taken_0x2a6224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6224) {
            ctx->pc = 0x2A6228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6224u;
            // 0x2a6228: 0xc60c00e0  lwc1        $f12, 0xE0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6218;
        }
    }
    ctx->pc = 0x2A622Cu;
label_2a622c:
    // 0x2a622c: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A622Cu;
    SET_GPR_U32(ctx, 31, 0x2A6234u);
    ctx->pc = 0x2A6230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A622Cu;
    // 0x2a6230: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A622Cu, 0x2A6234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6234u;
label_2a6234:
    // 0x2a6234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6238: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a6238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a623c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a623cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6244: 0x80adf34  j           func_2B7CD0
    ctx->pc = 0x2A6244u;
    ctx->pc = 0x2A6248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6244u;
    // 0x2a6248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    dlSetZB_0x2b7cd0(rdram, ctx, runtime); return;
    ctx->pc = 0x2A624Cu;
}
