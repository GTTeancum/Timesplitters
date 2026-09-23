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

// Function: loadingGfx
// Address: 0x22a190 - 0x22a38c
void loadingGfx_0x22a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loadingGfx_0x22a190");
#endif

    switch (ctx->pc) {
        case 0x22a1d0u: goto label_22a1d0;
        case 0x22a1d8u: goto label_22a1d8;
        case 0x22a1f8u: goto label_22a1f8;
        case 0x22a204u: goto label_22a204;
        case 0x22a224u: goto label_22a224;
        case 0x22a230u: goto label_22a230;
        case 0x22a258u: goto label_22a258;
        case 0x22a260u: goto label_22a260;
        case 0x22a288u: goto label_22a288;
        case 0x22a290u: goto label_22a290;
        case 0x22a2b8u: goto label_22a2b8;
        case 0x22a2dcu: goto label_22a2dc;
        case 0x22a2e4u: goto label_22a2e4;
        case 0x22a300u: goto label_22a300;
        case 0x22a340u: goto label_22a340;
        case 0x22a358u: goto label_22a358;
        default: break;
    }

    ctx->pc = 0x22a190u;

    // 0x22a190: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x22a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
    // 0x22a194: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x22a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x22a198: 0xffb60860  sd          $s6, 0x860($sp)
    ctx->pc = 0x22a198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2144), GPR_U64(ctx, 22));
    // 0x22a19c: 0xffb50850  sd          $s5, 0x850($sp)
    ctx->pc = 0x22a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2128), GPR_U64(ctx, 21));
    // 0x22a1a0: 0xffb40840  sd          $s4, 0x840($sp)
    ctx->pc = 0x22a1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2112), GPR_U64(ctx, 20));
    // 0x22a1a4: 0xffb30830  sd          $s3, 0x830($sp)
    ctx->pc = 0x22a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2096), GPR_U64(ctx, 19));
    // 0x22a1a8: 0xffb20820  sd          $s2, 0x820($sp)
    ctx->pc = 0x22a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2080), GPR_U64(ctx, 18));
    // 0x22a1ac: 0xffb10810  sd          $s1, 0x810($sp)
    ctx->pc = 0x22a1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2064), GPR_U64(ctx, 17));
    // 0x22a1b0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x22a1b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a1b4: 0xffb00800  sd          $s0, 0x800($sp)
    ctx->pc = 0x22a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2048), GPR_U64(ctx, 16));
    // 0x22a1b8: 0xffbf0870  sd          $ra, 0x870($sp)
    ctx->pc = 0x22a1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2160), GPR_U64(ctx, 31));
    // 0x22a1bc: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x22a1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x22a1c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22a1c4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x22a1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22a1c8: 0xc083108  jal         func_20C420
    ctx->pc = 0x22A1C8u;
    SET_GPR_U32(ctx, 31, 0x22A1D0u);
    ctx->pc = 0x22A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1C8u;
    // 0x22a1cc: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x22A1C8u, 0x22A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1D0u;
label_22a1d0:
    // 0x22a1d0: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x22A1D0u;
    SET_GPR_U32(ctx, 31, 0x22A1D8u);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x22A1D0u, 0x22A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1D8u;
label_22a1d8:
    // 0x22a1d8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22a1dc: 0x27b307f0  addiu       $s3, $sp, 0x7F0
    ctx->pc = 0x22a1dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2032));
    // 0x22a1e0: 0x27b407f4  addiu       $s4, $sp, 0x7F4
    ctx->pc = 0x22a1e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2036));
    // 0x22a1e4: 0x27b607f8  addiu       $s6, $sp, 0x7F8
    ctx->pc = 0x22a1e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 2040));
    // 0x22a1e8: 0x27b507fc  addiu       $s5, $sp, 0x7FC
    ctx->pc = 0x22a1e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2044));
    // 0x22a1ec: 0x27b007e0  addiu       $s0, $sp, 0x7E0
    ctx->pc = 0x22a1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
    // 0x22a1f0: 0x2451d078  addiu       $s1, $v0, -0x2F88
    ctx->pc = 0x22a1f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955128));
    // 0x22a1f4: 0x0  nop
    ctx->pc = 0x22a1f4u;
    // NOP
label_22a1f8:
    // 0x22a1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1fc: 0xc08718c  jal         func_21C630
    ctx->pc = 0x22A1FCu;
    SET_GPR_U32(ctx, 31, 0x22A204u);
    ctx->pc = 0x22A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1FCu;
    // 0x22a200: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x22A1FCu, 0x22A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A204u;
label_22a204:
    // 0x22a204: 0x26310064  addiu       $s1, $s1, 0x64
    ctx->pc = 0x22a204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x22a208: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22a20c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x22a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x22a210: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22A210u;
    {
        const bool branch_taken_0x22a210 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x22A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A210u;
        // 0x22a214: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a210) {
            ctx->pc = 0x22A1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a1f8;
        }
    }
    ctx->pc = 0x22A218u;
    // 0x22a218: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a21c: 0xc0adf26  jal         func_2B7C98
    ctx->pc = 0x22A21Cu;
    SET_GPR_U32(ctx, 31, 0x22A224u);
    ctx->pc = 0x22A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A21Cu;
    // 0x22a220: 0x3c107f7f  lui         $s0, 0x7F7F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32639 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C98u, 0x22A21Cu, 0x22A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A224u;
label_22a224:
    // 0x22a224: 0x36107f7f  ori         $s0, $s0, 0x7F7F
    ctx->pc = 0x22a224u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32639);
    // 0x22a228: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22A228u;
    SET_GPR_U32(ctx, 31, 0x22A230u);
    ctx->pc = 0x22A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A228u;
    // 0x22a22c: 0x8fa407e0  lw          $a0, 0x7E0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2016)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22A228u, 0x22A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A230u;
label_22a230:
    // 0x22a230: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x22a230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x22a234: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x22a234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22a238: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22a238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22a23c: 0x24060240  addiu       $a2, $zero, 0x240
    ctx->pc = 0x22a23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x22a240: 0x2407004a  addiu       $a3, $zero, 0x4A
    ctx->pc = 0x22a240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x22a244: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22a244u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a248: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a248u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a24c: 0x240a2000  addiu       $t2, $zero, 0x2000
    ctx->pc = 0x22a24cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x22a250: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22A250u;
    SET_GPR_U32(ctx, 31, 0x22A258u);
    ctx->pc = 0x22A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A250u;
    // 0x22a254: 0x240b0800  addiu       $t3, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22A250u, 0x22A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A258u;
label_22a258:
    // 0x22a258: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22A258u;
    SET_GPR_U32(ctx, 31, 0x22A260u);
    ctx->pc = 0x22A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A258u;
    // 0x22a25c: 0x8fa407e4  lw          $a0, 0x7E4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22A258u, 0x22A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A260u;
label_22a260:
    // 0x22a260: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x22a260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x22a264: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x22a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22a268: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x22a268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x22a26c: 0x24060240  addiu       $a2, $zero, 0x240
    ctx->pc = 0x22a26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x22a270: 0x2407008a  addiu       $a3, $zero, 0x8A
    ctx->pc = 0x22a270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x22a274: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22a274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a278: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a27c: 0x240a2000  addiu       $t2, $zero, 0x2000
    ctx->pc = 0x22a27cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x22a280: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22A280u;
    SET_GPR_U32(ctx, 31, 0x22A288u);
    ctx->pc = 0x22A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A280u;
    // 0x22a284: 0x240b0800  addiu       $t3, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22A280u, 0x22A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A288u;
label_22a288:
    // 0x22a288: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22A288u;
    SET_GPR_U32(ctx, 31, 0x22A290u);
    ctx->pc = 0x22A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A288u;
    // 0x22a28c: 0x8fa407e8  lw          $a0, 0x7E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22A288u, 0x22A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A290u;
label_22a290:
    // 0x22a290: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x22a290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x22a294: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x22a294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22a298: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x22a298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x22a29c: 0x24060240  addiu       $a2, $zero, 0x240
    ctx->pc = 0x22a29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x22a2a0: 0x240700aa  addiu       $a3, $zero, 0xAA
    ctx->pc = 0x22a2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x22a2a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22a2a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a2a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2ac: 0x240a2000  addiu       $t2, $zero, 0x2000
    ctx->pc = 0x22a2acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x22a2b0: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22A2B0u;
    SET_GPR_U32(ctx, 31, 0x22A2B8u);
    ctx->pc = 0x22A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2B0u;
    // 0x22a2b4: 0x240b0400  addiu       $t3, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22A2B0u, 0x22A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2B8u;
label_22a2b8:
    // 0x22a2b8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x22a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x22a2bc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x22a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x22a2c0: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x22a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x22a2c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x22a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22a2c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22a2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22a2d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22a2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a2d4: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x22A2D4u;
    SET_GPR_U32(ctx, 31, 0x22A2DCu);
    ctx->pc = 0x22A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2D4u;
    // 0x22a2d8: 0x8cc50d58  lw          $a1, 0xD58($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x22A2D4u, 0x22A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2DCu;
label_22a2dc:
    // 0x22a2dc: 0xc08089c  jal         func_202270
    ctx->pc = 0x22A2DCu;
    SET_GPR_U32(ctx, 31, 0x22A2E4u);
    ctx->pc = 0x22A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2DCu;
    // 0x22a2e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22A2DCu, 0x22A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2E4u;
label_22a2e4:
    // 0x22a2e4: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x22a2e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22a2e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22a2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x22a2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22a2f4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22a2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x22a2f8: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x22A2F8u;
    SET_GPR_U32(ctx, 31, 0x22A300u);
    ctx->pc = 0x22A2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2F8u;
    // 0x22a2fc: 0xa3839ab5  sb          $v1, -0x654B($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x22A2F8u, 0x22A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A300u;
label_22a300:
    // 0x22a300: 0x8fa507f0  lw          $a1, 0x7F0($sp)
    ctx->pc = 0x22a300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2032)));
    // 0x22a304: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22a304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x22a308: 0x246399f0  addiu       $v1, $v1, -0x6610
    ctx->pc = 0x22a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x22a30c: 0x8fa807f4  lw          $t0, 0x7F4($sp)
    ctx->pc = 0x22a30cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2036)));
    // 0x22a310: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x22a310u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x329A08u));
    // 0x22a314: 0x53fc2  srl         $a3, $a1, 31
    ctx->pc = 0x22a314u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x22a318: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x22a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22a31c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x22a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x22a320: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x22a320u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x22a324: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x22a324u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x22a328: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x22a328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22a32c: 0x24c6fff6  addiu       $a2, $a2, -0xA
    ctx->pc = 0x22a32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967286));
    // 0x22a330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22a330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a334: 0xafa207f8  sw          $v0, 0x7F8($sp)
    ctx->pc = 0x22a334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2040), GPR_U32(ctx, 2));
    // 0x22a338: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22A338u;
    SET_GPR_U32(ctx, 31, 0x22A340u);
    ctx->pc = 0x22A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A338u;
    // 0x22a33c: 0xafa607fc  sw          $a2, 0x7FC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2044), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22A338u, 0x22A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A340u;
label_22a340:
    // 0x22a340: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x22a340u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x22a344: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x22a344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a348: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22a348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a34c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x22a34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22a350: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x22A350u;
    SET_GPR_U32(ctx, 31, 0x22A358u);
    ctx->pc = 0x22A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A350u;
    // 0x22a354: 0x34e77f7f  ori         $a3, $a3, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x22A350u, 0x22A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A358u;
label_22a358:
    // 0x22a358: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x22a358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22a35c: 0xdfbf0870  ld          $ra, 0x870($sp)
    ctx->pc = 0x22a35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2160)));
    // 0x22a360: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x22a360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x22a364: 0xdfb60860  ld          $s6, 0x860($sp)
    ctx->pc = 0x22a364u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 2144)));
    // 0x22a368: 0xdfb50850  ld          $s5, 0x850($sp)
    ctx->pc = 0x22a368u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x22a36c: 0xdfb40840  ld          $s4, 0x840($sp)
    ctx->pc = 0x22a36cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x22a370: 0xdfb30830  ld          $s3, 0x830($sp)
    ctx->pc = 0x22a370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x22a374: 0xdfb20820  ld          $s2, 0x820($sp)
    ctx->pc = 0x22a374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x22a378: 0xdfb10810  ld          $s1, 0x810($sp)
    ctx->pc = 0x22a378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x22a37c: 0xdfb00800  ld          $s0, 0x800($sp)
    ctx->pc = 0x22a37cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2048)));
    // 0x22a380: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x22a380u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x22a384: 0x3e00008  jr          $ra
    ctx->pc = 0x22A384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A384u;
        // 0x22a388: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A38Cu;
}
