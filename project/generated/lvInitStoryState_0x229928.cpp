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

// Function: lvInitStoryState
// Address: 0x229928 - 0x22a0b0
void lvInitStoryState_0x229928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvInitStoryState_0x229928");
#endif

    switch (ctx->pc) {
        case 0x22996cu: goto label_22996c;
        case 0x229974u: goto label_229974;
        case 0x229980u: goto label_229980;
        case 0x229988u: goto label_229988;
        case 0x229990u: goto label_229990;
        case 0x229998u: goto label_229998;
        case 0x2299a4u: goto label_2299a4;
        case 0x2299acu: goto label_2299ac;
        case 0x2299c8u: goto label_2299c8;
        case 0x2299d0u: goto label_2299d0;
        case 0x2299dcu: goto label_2299dc;
        case 0x2299e4u: goto label_2299e4;
        case 0x2299ecu: goto label_2299ec;
        case 0x2299f4u: goto label_2299f4;
        case 0x229a00u: goto label_229a00;
        case 0x229a08u: goto label_229a08;
        case 0x229a20u: goto label_229a20;
        case 0x229a28u: goto label_229a28;
        case 0x229a34u: goto label_229a34;
        case 0x229a3cu: goto label_229a3c;
        case 0x229a58u: goto label_229a58;
        case 0x229a60u: goto label_229a60;
        case 0x229a6cu: goto label_229a6c;
        case 0x229a88u: goto label_229a88;
        case 0x229a90u: goto label_229a90;
        case 0x229a9cu: goto label_229a9c;
        case 0x229aa4u: goto label_229aa4;
        case 0x229ab0u: goto label_229ab0;
        case 0x229ab8u: goto label_229ab8;
        case 0x229ac0u: goto label_229ac0;
        case 0x229accu: goto label_229acc;
        case 0x229ad4u: goto label_229ad4;
        case 0x229af4u: goto label_229af4;
        case 0x229afcu: goto label_229afc;
        case 0x229b04u: goto label_229b04;
        case 0x229b0cu: goto label_229b0c;
        case 0x229b18u: goto label_229b18;
        case 0x229b20u: goto label_229b20;
        case 0x229b28u: goto label_229b28;
        case 0x229b30u: goto label_229b30;
        case 0x229b38u: goto label_229b38;
        case 0x229b40u: goto label_229b40;
        case 0x229b4cu: goto label_229b4c;
        case 0x229b68u: goto label_229b68;
        case 0x229b70u: goto label_229b70;
        case 0x229b7cu: goto label_229b7c;
        case 0x229b84u: goto label_229b84;
        case 0x229bc4u: goto label_229bc4;
        case 0x229bccu: goto label_229bcc;
        case 0x229be8u: goto label_229be8;
        case 0x229bf0u: goto label_229bf0;
        case 0x229bfcu: goto label_229bfc;
        case 0x229c18u: goto label_229c18;
        case 0x229c20u: goto label_229c20;
        case 0x229c28u: goto label_229c28;
        case 0x229c30u: goto label_229c30;
        case 0x229c38u: goto label_229c38;
        case 0x229c40u: goto label_229c40;
        case 0x229c48u: goto label_229c48;
        case 0x229c50u: goto label_229c50;
        case 0x229c58u: goto label_229c58;
        case 0x229c60u: goto label_229c60;
        case 0x229c68u: goto label_229c68;
        case 0x229c70u: goto label_229c70;
        case 0x229c78u: goto label_229c78;
        case 0x229c80u: goto label_229c80;
        case 0x229c88u: goto label_229c88;
        case 0x229c90u: goto label_229c90;
        case 0x229c98u: goto label_229c98;
        case 0x229ca0u: goto label_229ca0;
        case 0x229ca8u: goto label_229ca8;
        case 0x229cb0u: goto label_229cb0;
        case 0x229cb8u: goto label_229cb8;
        case 0x229cc0u: goto label_229cc0;
        case 0x229cc8u: goto label_229cc8;
        case 0x229cd0u: goto label_229cd0;
        case 0x229cd8u: goto label_229cd8;
        case 0x229ce0u: goto label_229ce0;
        case 0x229cecu: goto label_229cec;
        case 0x229cf4u: goto label_229cf4;
        case 0x229d00u: goto label_229d00;
        case 0x229d08u: goto label_229d08;
        case 0x229d14u: goto label_229d14;
        case 0x229d1cu: goto label_229d1c;
        case 0x229d28u: goto label_229d28;
        case 0x229d30u: goto label_229d30;
        case 0x229d3cu: goto label_229d3c;
        case 0x229d44u: goto label_229d44;
        case 0x229d50u: goto label_229d50;
        case 0x229d58u: goto label_229d58;
        case 0x229d64u: goto label_229d64;
        case 0x229d6cu: goto label_229d6c;
        case 0x229d78u: goto label_229d78;
        case 0x229d80u: goto label_229d80;
        case 0x229d8cu: goto label_229d8c;
        case 0x229d94u: goto label_229d94;
        case 0x229da0u: goto label_229da0;
        case 0x229dacu: goto label_229dac;
        case 0x229db8u: goto label_229db8;
        case 0x229dc4u: goto label_229dc4;
        case 0x229dccu: goto label_229dcc;
        case 0x229dd4u: goto label_229dd4;
        case 0x229ddcu: goto label_229ddc;
        case 0x229de8u: goto label_229de8;
        case 0x229df4u: goto label_229df4;
        case 0x229e00u: goto label_229e00;
        case 0x229e0cu: goto label_229e0c;
        case 0x229e18u: goto label_229e18;
        case 0x229e24u: goto label_229e24;
        case 0x229e44u: goto label_229e44;
        case 0x229e60u: goto label_229e60;
        case 0x229e68u: goto label_229e68;
        case 0x229e74u: goto label_229e74;
        case 0x229e80u: goto label_229e80;
        case 0x229e88u: goto label_229e88;
        case 0x229e90u: goto label_229e90;
        case 0x229e98u: goto label_229e98;
        case 0x229ea4u: goto label_229ea4;
        case 0x229eb0u: goto label_229eb0;
        case 0x229eb8u: goto label_229eb8;
        case 0x229ec0u: goto label_229ec0;
        case 0x229ec8u: goto label_229ec8;
        case 0x229ed4u: goto label_229ed4;
        case 0x229ee0u: goto label_229ee0;
        case 0x229ee8u: goto label_229ee8;
        case 0x229ef0u: goto label_229ef0;
        case 0x229ef8u: goto label_229ef8;
        case 0x229f04u: goto label_229f04;
        case 0x229f10u: goto label_229f10;
        case 0x229f18u: goto label_229f18;
        case 0x229f24u: goto label_229f24;
        case 0x229f2cu: goto label_229f2c;
        case 0x229f38u: goto label_229f38;
        case 0x229f40u: goto label_229f40;
        case 0x229f4cu: goto label_229f4c;
        case 0x229f54u: goto label_229f54;
        case 0x229f60u: goto label_229f60;
        case 0x229f68u: goto label_229f68;
        case 0x229f74u: goto label_229f74;
        case 0x229f7cu: goto label_229f7c;
        case 0x229f88u: goto label_229f88;
        case 0x229f90u: goto label_229f90;
        case 0x229f9cu: goto label_229f9c;
        case 0x229fa4u: goto label_229fa4;
        case 0x229fb0u: goto label_229fb0;
        case 0x229fccu: goto label_229fcc;
        case 0x229fd4u: goto label_229fd4;
        case 0x229fdcu: goto label_229fdc;
        case 0x229fe4u: goto label_229fe4;
        case 0x229ff0u: goto label_229ff0;
        case 0x229ff8u: goto label_229ff8;
        case 0x22a000u: goto label_22a000;
        case 0x22a008u: goto label_22a008;
        case 0x22a010u: goto label_22a010;
        case 0x22a018u: goto label_22a018;
        case 0x22a024u: goto label_22a024;
        case 0x22a02cu: goto label_22a02c;
        case 0x22a034u: goto label_22a034;
        case 0x22a03cu: goto label_22a03c;
        case 0x22a044u: goto label_22a044;
        case 0x22a04cu: goto label_22a04c;
        case 0x22a058u: goto label_22a058;
        case 0x22a060u: goto label_22a060;
        case 0x22a068u: goto label_22a068;
        case 0x22a070u: goto label_22a070;
        case 0x22a078u: goto label_22a078;
        case 0x22a080u: goto label_22a080;
        case 0x22a08cu: goto label_22a08c;
        default: break;
    }

    ctx->pc = 0x229928u;

    // 0x229928: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x229928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x22992c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22992cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x229930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x229930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x229934: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x229934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x229938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x229938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22993c: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x22993cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x229940: 0x104001d7  beqz        $v0, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x229940u;
    {
        const bool branch_taken_0x229940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229940u;
        // 0x229944: 0xaf809f78  sw          $zero, -0x6088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229940) {
            ctx->pc = 0x22A0A0u;
            goto label_22a0a0;
        }
    }
    ctx->pc = 0x229948u;
    // 0x229948: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x229948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x22994c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22994cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229950: 0x24421630  addiu       $v0, $v0, 0x1630
    ctx->pc = 0x229950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5680));
    // 0x229954: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229958: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22995c: 0x800008  jr          $a0
    ctx->pc = 0x22995Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229964u: goto label_229964;
            case 0x229A80u: goto label_229a80;
            case 0x229AECu: goto label_229aec;
            case 0x229B60u: goto label_229b60;
            case 0x229B9Cu: goto label_229b9c;
            case 0x229BF0u: goto label_229bf0;
            case 0x229C10u: goto label_229c10;
            case 0x229E58u: goto label_229e58;
            case 0x229FC4u: goto label_229fc4;
            case 0x22A0A0u: goto label_22a0a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22995Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x229964u;
label_229964:
    // 0x229964: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229964u;
    SET_GPR_U32(ctx, 31, 0x22996Cu);
    ctx->pc = 0x229968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229964u;
    // 0x229968: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229964u, 0x22996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22996Cu;
label_22996c:
    // 0x22996c: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x22996Cu;
    SET_GPR_U32(ctx, 31, 0x229974u);
    ctx->pc = 0x229970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22996Cu;
    // 0x229970: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x22996Cu, 0x229974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229974u;
label_229974:
    // 0x229974: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x229974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x229978: 0xc09925e  jal         func_264978
    ctx->pc = 0x229978u;
    SET_GPR_U32(ctx, 31, 0x229980u);
    ctx->pc = 0x22997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229978u;
    // 0x22997c: 0x240504d6  addiu       $a1, $zero, 0x4D6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1238));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229978u, 0x229980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229980u;
label_229980:
    // 0x229980: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229980u;
    SET_GPR_U32(ctx, 31, 0x229988u);
    ctx->pc = 0x229984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229980u;
    // 0x229984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229980u, 0x229988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229988u;
label_229988:
    // 0x229988: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229988u;
    SET_GPR_U32(ctx, 31, 0x229990u);
    ctx->pc = 0x22998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229988u;
    // 0x22998c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229988u, 0x229990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229990u;
label_229990:
    // 0x229990: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229990u;
    SET_GPR_U32(ctx, 31, 0x229998u);
    ctx->pc = 0x229994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229990u;
    // 0x229994: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229990u, 0x229998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229998u;
label_229998:
    // 0x229998: 0x24040405  addiu       $a0, $zero, 0x405
    ctx->pc = 0x229998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x22999c: 0xc09925e  jal         func_264978
    ctx->pc = 0x22999Cu;
    SET_GPR_U32(ctx, 31, 0x2299A4u);
    ctx->pc = 0x2299A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22999Cu;
    // 0x2299a0: 0x24050594  addiu       $a1, $zero, 0x594 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x22999Cu, 0x2299A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299A4u;
label_2299a4:
    // 0x2299a4: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2299A4u;
    SET_GPR_U32(ctx, 31, 0x2299ACu);
    ctx->pc = 0x2299A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299A4u;
    // 0x2299a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2299A4u, 0x2299ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299ACu;
label_2299ac:
    // 0x2299ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2299acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2299b0: 0x2450c4a8  addiu       $s0, $v0, -0x3B58
    ctx->pc = 0x2299b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2299b4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2299b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F4u));
    // 0x2299b8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2299B8u;
    {
        const bool branch_taken_0x2299b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2299BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299B8u;
        // 0x2299bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2299b8) {
            ctx->pc = 0x229A10u;
            goto label_229a10;
        }
    }
    ctx->pc = 0x2299C0u;
    // 0x2299c0: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2299C0u;
    SET_GPR_U32(ctx, 31, 0x2299C8u);
    ctx->pc = 0x2299C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299C0u;
    // 0x2299c4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2299C0u, 0x2299C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299C8u;
label_2299c8:
    // 0x2299c8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2299C8u;
    SET_GPR_U32(ctx, 31, 0x2299D0u);
    ctx->pc = 0x2299CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299C8u;
    // 0x2299cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2299C8u, 0x2299D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299D0u;
label_2299d0:
    // 0x2299d0: 0x24040458  addiu       $a0, $zero, 0x458
    ctx->pc = 0x2299d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1112));
    // 0x2299d4: 0xc09925e  jal         func_264978
    ctx->pc = 0x2299D4u;
    SET_GPR_U32(ctx, 31, 0x2299DCu);
    ctx->pc = 0x2299D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299D4u;
    // 0x2299d8: 0x2405045c  addiu       $a1, $zero, 0x45C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2299D4u, 0x2299DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299DCu;
label_2299dc:
    // 0x2299dc: 0xc09939a  jal         func_264E68
    ctx->pc = 0x2299DCu;
    SET_GPR_U32(ctx, 31, 0x2299E4u);
    ctx->pc = 0x2299E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299DCu;
    // 0x2299e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x2299DCu, 0x2299E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299E4u;
label_2299e4:
    // 0x2299e4: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x2299E4u;
    SET_GPR_U32(ctx, 31, 0x2299ECu);
    ctx->pc = 0x2299E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299E4u;
    // 0x2299e8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x2299E4u, 0x2299ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299ECu;
label_2299ec:
    // 0x2299ec: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x2299ECu;
    SET_GPR_U32(ctx, 31, 0x2299F4u);
    ctx->pc = 0x2299F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299ECu;
    // 0x2299f0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x2299ECu, 0x2299F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299F4u;
label_2299f4:
    // 0x2299f4: 0x24040459  addiu       $a0, $zero, 0x459
    ctx->pc = 0x2299f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1113));
    // 0x2299f8: 0xc09925e  jal         func_264978
    ctx->pc = 0x2299F8u;
    SET_GPR_U32(ctx, 31, 0x229A00u);
    ctx->pc = 0x2299FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299F8u;
    // 0x2299fc: 0x240504d4  addiu       $a1, $zero, 0x4D4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2299F8u, 0x229A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A00u;
label_229a00:
    // 0x229a00: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229A00u;
    SET_GPR_U32(ctx, 31, 0x229A08u);
    ctx->pc = 0x229A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A00u;
    // 0x229a04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229A00u, 0x229A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A08u;
label_229a08:
    // 0x229a08: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x229a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x229a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229a10:
    // 0x229a10: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x229A10u;
    {
        const bool branch_taken_0x229a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A10u;
        // 0x229a14: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a10) {
            ctx->pc = 0x229A44u;
            goto label_229a44;
        }
    }
    ctx->pc = 0x229A18u;
    // 0x229a18: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229A18u;
    SET_GPR_U32(ctx, 31, 0x229A20u);
    ctx->pc = 0x229A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A18u;
    // 0x229a1c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229A18u, 0x229A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A20u;
label_229a20:
    // 0x229a20: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229A20u;
    SET_GPR_U32(ctx, 31, 0x229A28u);
    ctx->pc = 0x229A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A20u;
    // 0x229a24: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229A20u, 0x229A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A28u;
label_229a28:
    // 0x229a28: 0x240404be  addiu       $a0, $zero, 0x4BE
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1214));
    // 0x229a2c: 0xc09925e  jal         func_264978
    ctx->pc = 0x229A2Cu;
    SET_GPR_U32(ctx, 31, 0x229A34u);
    ctx->pc = 0x229A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A2Cu;
    // 0x229a30: 0x240504c2  addiu       $a1, $zero, 0x4C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1218));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229A2Cu, 0x229A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A34u;
label_229a34:
    // 0x229a34: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229A34u;
    SET_GPR_U32(ctx, 31, 0x229A3Cu);
    ctx->pc = 0x229A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A34u;
    // 0x229a38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229A34u, 0x229A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A3Cu;
label_229a3c:
    // 0x229a3c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x229a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x229a40: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x229a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_229a44:
    // 0x229a44: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x229a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x229a48: 0x10400196  beqz        $v0, . + 4 + (0x196 << 2)
    ctx->pc = 0x229A48u;
    {
        const bool branch_taken_0x229a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A48u;
        // 0x229a4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a48) {
            ctx->pc = 0x22A0A4u;
            goto label_22a0a4;
        }
    }
    ctx->pc = 0x229A50u;
    // 0x229a50: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229A50u;
    SET_GPR_U32(ctx, 31, 0x229A58u);
    ctx->pc = 0x229A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A50u;
    // 0x229a54: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229A50u, 0x229A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A58u;
label_229a58:
    // 0x229a58: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229A58u;
    SET_GPR_U32(ctx, 31, 0x229A60u);
    ctx->pc = 0x229A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A58u;
    // 0x229a5c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229A58u, 0x229A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A60u;
label_229a60:
    // 0x229a60: 0x24040491  addiu       $a0, $zero, 0x491
    ctx->pc = 0x229a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1169));
    // 0x229a64: 0xc09925e  jal         func_264978
    ctx->pc = 0x229A64u;
    SET_GPR_U32(ctx, 31, 0x229A6Cu);
    ctx->pc = 0x229A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A64u;
    // 0x229a68: 0x240505e1  addiu       $a1, $zero, 0x5E1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1505));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229A64u, 0x229A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A6Cu;
label_229a6c:
    // 0x229a6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x229a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229a78: 0x809939a  j           func_264E68
    ctx->pc = 0x229A78u;
    ctx->pc = 0x229A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A78u;
    // 0x229a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    linkDisable_0x264e68(rdram, ctx, runtime); return;
    ctx->pc = 0x229A80u;
label_229a80:
    // 0x229a80: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229A80u;
    SET_GPR_U32(ctx, 31, 0x229A88u);
    ctx->pc = 0x229A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A80u;
    // 0x229a84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229A80u, 0x229A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A88u;
label_229a88:
    // 0x229a88: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229A88u;
    SET_GPR_U32(ctx, 31, 0x229A90u);
    ctx->pc = 0x229A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A88u;
    // 0x229a8c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229A88u, 0x229A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A90u;
label_229a90:
    // 0x229a90: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x229a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x229a94: 0xc09925e  jal         func_264978
    ctx->pc = 0x229A94u;
    SET_GPR_U32(ctx, 31, 0x229A9Cu);
    ctx->pc = 0x229A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A94u;
    // 0x229a98: 0x24050414  addiu       $a1, $zero, 0x414 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229A94u, 0x229A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A9Cu;
label_229a9c:
    // 0x229a9c: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229A9Cu;
    SET_GPR_U32(ctx, 31, 0x229AA4u);
    ctx->pc = 0x229AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A9Cu;
    // 0x229aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229A9Cu, 0x229AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AA4u;
label_229aa4:
    // 0x229aa4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x229aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x229aa8: 0xc095e08  jal         func_257820
    ctx->pc = 0x229AA8u;
    SET_GPR_U32(ctx, 31, 0x229AB0u);
    ctx->pc = 0x229AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AA8u;
    // 0x229aac: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229AA8u, 0x229AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AB0u;
label_229ab0:
    // 0x229ab0: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229AB0u;
    SET_GPR_U32(ctx, 31, 0x229AB8u);
    ctx->pc = 0x229AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AB0u;
    // 0x229ab4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229AB0u, 0x229AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AB8u;
label_229ab8:
    // 0x229ab8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229AB8u;
    SET_GPR_U32(ctx, 31, 0x229AC0u);
    ctx->pc = 0x229ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AB8u;
    // 0x229abc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229AB8u, 0x229AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AC0u;
label_229ac0:
    // 0x229ac0: 0x24040477  addiu       $a0, $zero, 0x477
    ctx->pc = 0x229ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1143));
    // 0x229ac4: 0xc09925e  jal         func_264978
    ctx->pc = 0x229AC4u;
    SET_GPR_U32(ctx, 31, 0x229ACCu);
    ctx->pc = 0x229AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AC4u;
    // 0x229ac8: 0x2405041a  addiu       $a1, $zero, 0x41A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1050));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229AC4u, 0x229ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229ACCu;
label_229acc:
    // 0x229acc: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229ACCu;
    SET_GPR_U32(ctx, 31, 0x229AD4u);
    ctx->pc = 0x229AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229ACCu;
    // 0x229ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229ACCu, 0x229AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AD4u;
label_229ad4:
    // 0x229ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229ad8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x229ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x229adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229ae0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x229ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x229ae4: 0x8095e08  j           func_257820
    ctx->pc = 0x229AE4u;
    ctx->pc = 0x229AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AE4u;
    // 0x229ae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    bgPortalDisableFromRooms_0x257820(rdram, ctx, runtime); return;
    ctx->pc = 0x229AECu;
label_229aec:
    // 0x229aec: 0xc09b060  jal         func_26C180
    ctx->pc = 0x229AECu;
    SET_GPR_U32(ctx, 31, 0x229AF4u);
    ctx->pc = 0x229AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AECu;
    // 0x229af0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x229AECu, 0x229AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AF4u;
label_229af4:
    // 0x229af4: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229AF4u;
    SET_GPR_U32(ctx, 31, 0x229AFCu);
    ctx->pc = 0x229AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AF4u;
    // 0x229af8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229AF4u, 0x229AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AFCu;
label_229afc:
    // 0x229afc: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229AFCu;
    SET_GPR_U32(ctx, 31, 0x229B04u);
    ctx->pc = 0x229B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AFCu;
    // 0x229b00: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229AFCu, 0x229B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B04u;
label_229b04:
    // 0x229b04: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229B04u;
    SET_GPR_U32(ctx, 31, 0x229B0Cu);
    ctx->pc = 0x229B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B04u;
    // 0x229b08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229B04u, 0x229B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B0Cu;
label_229b0c:
    // 0x229b0c: 0x24040475  addiu       $a0, $zero, 0x475
    ctx->pc = 0x229b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1141));
    // 0x229b10: 0xc09925e  jal         func_264978
    ctx->pc = 0x229B10u;
    SET_GPR_U32(ctx, 31, 0x229B18u);
    ctx->pc = 0x229B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B10u;
    // 0x229b14: 0x24050565  addiu       $a1, $zero, 0x565 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1381));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229B10u, 0x229B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B18u;
label_229b18:
    // 0x229b18: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229B18u;
    SET_GPR_U32(ctx, 31, 0x229B20u);
    ctx->pc = 0x229B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B18u;
    // 0x229b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229B18u, 0x229B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B20u;
label_229b20:
    // 0x229b20: 0xc09b060  jal         func_26C180
    ctx->pc = 0x229B20u;
    SET_GPR_U32(ctx, 31, 0x229B28u);
    ctx->pc = 0x229B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B20u;
    // 0x229b24: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x229B20u, 0x229B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B28u;
label_229b28:
    // 0x229b28: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229B28u;
    SET_GPR_U32(ctx, 31, 0x229B30u);
    ctx->pc = 0x229B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B28u;
    // 0x229b2c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229B28u, 0x229B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B30u;
label_229b30:
    // 0x229b30: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229B30u;
    SET_GPR_U32(ctx, 31, 0x229B38u);
    ctx->pc = 0x229B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B30u;
    // 0x229b34: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229B30u, 0x229B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B38u;
label_229b38:
    // 0x229b38: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229B38u;
    SET_GPR_U32(ctx, 31, 0x229B40u);
    ctx->pc = 0x229B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B38u;
    // 0x229b3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229B38u, 0x229B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B40u;
label_229b40:
    // 0x229b40: 0x240404d5  addiu       $a0, $zero, 0x4D5
    ctx->pc = 0x229b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1237));
    // 0x229b44: 0xc09925e  jal         func_264978
    ctx->pc = 0x229B44u;
    SET_GPR_U32(ctx, 31, 0x229B4Cu);
    ctx->pc = 0x229B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B44u;
    // 0x229b48: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229B44u, 0x229B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B4Cu;
label_229b4c:
    // 0x229b4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229b50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x229b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229b58: 0x809939a  j           func_264E68
    ctx->pc = 0x229B58u;
    ctx->pc = 0x229B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B58u;
    // 0x229b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    linkDisable_0x264e68(rdram, ctx, runtime); return;
    ctx->pc = 0x229B60u;
label_229b60:
    // 0x229b60: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229B60u;
    SET_GPR_U32(ctx, 31, 0x229B68u);
    ctx->pc = 0x229B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B60u;
    // 0x229b64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229B60u, 0x229B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B68u;
label_229b68:
    // 0x229b68: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229B68u;
    SET_GPR_U32(ctx, 31, 0x229B70u);
    ctx->pc = 0x229B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B68u;
    // 0x229b6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229B68u, 0x229B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B70u;
label_229b70:
    // 0x229b70: 0x2404052c  addiu       $a0, $zero, 0x52C
    ctx->pc = 0x229b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1324));
    // 0x229b74: 0xc09925e  jal         func_264978
    ctx->pc = 0x229B74u;
    SET_GPR_U32(ctx, 31, 0x229B7Cu);
    ctx->pc = 0x229B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B74u;
    // 0x229b78: 0x24050467  addiu       $a1, $zero, 0x467 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229B74u, 0x229B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B7Cu;
label_229b7c:
    // 0x229b7c: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229B7Cu;
    SET_GPR_U32(ctx, 31, 0x229B84u);
    ctx->pc = 0x229B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B7Cu;
    // 0x229b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229B7Cu, 0x229B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B84u;
label_229b84:
    // 0x229b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229b88: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x229b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x229b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229b90: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x229b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x229b94: 0x8095e08  j           func_257820
    ctx->pc = 0x229B94u;
    ctx->pc = 0x229B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B94u;
    // 0x229b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    bgPortalDisableFromRooms_0x257820(rdram, ctx, runtime); return;
    ctx->pc = 0x229B9Cu;
label_229b9c:
    // 0x229b9c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x229b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x229ba0: 0x2450c4a8  addiu       $s0, $v0, -0x3B58
    ctx->pc = 0x229ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x229ba4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x229ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F4u));
    // 0x229ba8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x229ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x229bac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x229bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x229bb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x229BB0u;
    {
        const bool branch_taken_0x229bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BB0u;
        // 0x229bb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bb0) {
            ctx->pc = 0x229BD4u;
            goto label_229bd4;
        }
    }
    ctx->pc = 0x229BB8u;
    // 0x229bb8: 0x240404dc  addiu       $a0, $zero, 0x4DC
    ctx->pc = 0x229bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1244));
    // 0x229bbc: 0xc09925e  jal         func_264978
    ctx->pc = 0x229BBCu;
    SET_GPR_U32(ctx, 31, 0x229BC4u);
    ctx->pc = 0x229BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BBCu;
    // 0x229bc0: 0x240504dd  addiu       $a1, $zero, 0x4DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229BBCu, 0x229BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BC4u;
label_229bc4:
    // 0x229bc4: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229BC4u;
    SET_GPR_U32(ctx, 31, 0x229BCCu);
    ctx->pc = 0x229BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BC4u;
    // 0x229bc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229BC4u, 0x229BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BCCu;
label_229bcc:
    // 0x229bcc: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x229bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x229bd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_229bd4:
    // 0x229bd4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229BD4u;
    {
        const bool branch_taken_0x229bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229bd4) {
            ctx->pc = 0x229BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229BD4u;
            // 0x229bd8: 0x2404042b  addiu       $a0, $zero, 0x42B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229BF4u;
            goto label_229bf4;
        }
    }
    ctx->pc = 0x229BDCu;
    // 0x229bdc: 0x240404bc  addiu       $a0, $zero, 0x4BC
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1212));
    // 0x229be0: 0xc09925e  jal         func_264978
    ctx->pc = 0x229BE0u;
    SET_GPR_U32(ctx, 31, 0x229BE8u);
    ctx->pc = 0x229BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BE0u;
    // 0x229be4: 0x24050574  addiu       $a1, $zero, 0x574 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229BE0u, 0x229BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BE8u;
label_229be8:
    // 0x229be8: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229BE8u;
    SET_GPR_U32(ctx, 31, 0x229BF0u);
    ctx->pc = 0x229BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BE8u;
    // 0x229bec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229BE8u, 0x229BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BF0u;
label_229bf0:
    // 0x229bf0: 0x2404042b  addiu       $a0, $zero, 0x42B
    ctx->pc = 0x229bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
label_229bf4:
    // 0x229bf4: 0xc09925e  jal         func_264978
    ctx->pc = 0x229BF4u;
    SET_GPR_U32(ctx, 31, 0x229BFCu);
    ctx->pc = 0x229BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BF4u;
    // 0x229bf8: 0x2405042e  addiu       $a1, $zero, 0x42E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229BF4u, 0x229BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BFCu;
label_229bfc:
    // 0x229bfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229c00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x229c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229c08: 0x809939a  j           func_264E68
    ctx->pc = 0x229C08u;
    ctx->pc = 0x229C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C08u;
    // 0x229c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    linkDisable_0x264e68(rdram, ctx, runtime); return;
    ctx->pc = 0x229C10u;
label_229c10:
    // 0x229c10: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C10u;
    SET_GPR_U32(ctx, 31, 0x229C18u);
    ctx->pc = 0x229C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C10u;
    // 0x229c14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C10u, 0x229C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C18u;
label_229c18:
    // 0x229c18: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C18u;
    SET_GPR_U32(ctx, 31, 0x229C20u);
    ctx->pc = 0x229C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C18u;
    // 0x229c1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C18u, 0x229C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C20u;
label_229c20:
    // 0x229c20: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C20u;
    SET_GPR_U32(ctx, 31, 0x229C28u);
    ctx->pc = 0x229C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C20u;
    // 0x229c24: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C20u, 0x229C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C28u;
label_229c28:
    // 0x229c28: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C28u;
    SET_GPR_U32(ctx, 31, 0x229C30u);
    ctx->pc = 0x229C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C28u;
    // 0x229c2c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C28u, 0x229C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C30u;
label_229c30:
    // 0x229c30: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C30u;
    SET_GPR_U32(ctx, 31, 0x229C38u);
    ctx->pc = 0x229C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C30u;
    // 0x229c34: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C30u, 0x229C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C38u;
label_229c38:
    // 0x229c38: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C38u;
    SET_GPR_U32(ctx, 31, 0x229C40u);
    ctx->pc = 0x229C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C38u;
    // 0x229c3c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C38u, 0x229C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C40u;
label_229c40:
    // 0x229c40: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C40u;
    SET_GPR_U32(ctx, 31, 0x229C48u);
    ctx->pc = 0x229C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C40u;
    // 0x229c44: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C40u, 0x229C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C48u;
label_229c48:
    // 0x229c48: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C48u;
    SET_GPR_U32(ctx, 31, 0x229C50u);
    ctx->pc = 0x229C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C48u;
    // 0x229c4c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C48u, 0x229C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C50u;
label_229c50:
    // 0x229c50: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C50u;
    SET_GPR_U32(ctx, 31, 0x229C58u);
    ctx->pc = 0x229C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C50u;
    // 0x229c54: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C50u, 0x229C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C58u;
label_229c58:
    // 0x229c58: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C58u;
    SET_GPR_U32(ctx, 31, 0x229C60u);
    ctx->pc = 0x229C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C58u;
    // 0x229c5c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C58u, 0x229C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C60u;
label_229c60:
    // 0x229c60: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C60u;
    SET_GPR_U32(ctx, 31, 0x229C68u);
    ctx->pc = 0x229C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C60u;
    // 0x229c64: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C60u, 0x229C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C68u;
label_229c68:
    // 0x229c68: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C68u;
    SET_GPR_U32(ctx, 31, 0x229C70u);
    ctx->pc = 0x229C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C68u;
    // 0x229c6c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C68u, 0x229C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C70u;
label_229c70:
    // 0x229c70: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229C70u;
    SET_GPR_U32(ctx, 31, 0x229C78u);
    ctx->pc = 0x229C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C70u;
    // 0x229c74: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229C70u, 0x229C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C78u;
label_229c78:
    // 0x229c78: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229C78u;
    SET_GPR_U32(ctx, 31, 0x229C80u);
    ctx->pc = 0x229C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C78u;
    // 0x229c7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229C78u, 0x229C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C80u;
label_229c80:
    // 0x229c80: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229C80u;
    SET_GPR_U32(ctx, 31, 0x229C88u);
    ctx->pc = 0x229C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C80u;
    // 0x229c84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229C80u, 0x229C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C88u;
label_229c88:
    // 0x229c88: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229C88u;
    SET_GPR_U32(ctx, 31, 0x229C90u);
    ctx->pc = 0x229C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C88u;
    // 0x229c8c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229C88u, 0x229C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C90u;
label_229c90:
    // 0x229c90: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229C90u;
    SET_GPR_U32(ctx, 31, 0x229C98u);
    ctx->pc = 0x229C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C90u;
    // 0x229c94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229C90u, 0x229C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C98u;
label_229c98:
    // 0x229c98: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229C98u;
    SET_GPR_U32(ctx, 31, 0x229CA0u);
    ctx->pc = 0x229C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C98u;
    // 0x229c9c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229C98u, 0x229CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CA0u;
label_229ca0:
    // 0x229ca0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229CA0u;
    SET_GPR_U32(ctx, 31, 0x229CA8u);
    ctx->pc = 0x229CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CA0u;
    // 0x229ca4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229CA0u, 0x229CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CA8u;
label_229ca8:
    // 0x229ca8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229CA8u;
    SET_GPR_U32(ctx, 31, 0x229CB0u);
    ctx->pc = 0x229CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CA8u;
    // 0x229cac: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229CA8u, 0x229CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CB0u;
label_229cb0:
    // 0x229cb0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229CB0u;
    SET_GPR_U32(ctx, 31, 0x229CB8u);
    ctx->pc = 0x229CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CB0u;
    // 0x229cb4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229CB0u, 0x229CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CB8u;
label_229cb8:
    // 0x229cb8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229CB8u;
    SET_GPR_U32(ctx, 31, 0x229CC0u);
    ctx->pc = 0x229CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CB8u;
    // 0x229cbc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229CB8u, 0x229CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CC0u;
label_229cc0:
    // 0x229cc0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229CC0u;
    SET_GPR_U32(ctx, 31, 0x229CC8u);
    ctx->pc = 0x229CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CC0u;
    // 0x229cc4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229CC0u, 0x229CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CC8u;
label_229cc8:
    // 0x229cc8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229CC8u;
    SET_GPR_U32(ctx, 31, 0x229CD0u);
    ctx->pc = 0x229CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CC8u;
    // 0x229ccc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229CC8u, 0x229CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CD0u;
label_229cd0:
    // 0x229cd0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229CD0u;
    SET_GPR_U32(ctx, 31, 0x229CD8u);
    ctx->pc = 0x229CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CD0u;
    // 0x229cd4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229CD0u, 0x229CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CD8u;
label_229cd8:
    // 0x229cd8: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229CD8u;
    SET_GPR_U32(ctx, 31, 0x229CE0u);
    ctx->pc = 0x229CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CD8u;
    // 0x229cdc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229CD8u, 0x229CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CE0u;
label_229ce0:
    // 0x229ce0: 0x2404044a  addiu       $a0, $zero, 0x44A
    ctx->pc = 0x229ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1098));
    // 0x229ce4: 0xc09925e  jal         func_264978
    ctx->pc = 0x229CE4u;
    SET_GPR_U32(ctx, 31, 0x229CECu);
    ctx->pc = 0x229CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CE4u;
    // 0x229ce8: 0x2405044e  addiu       $a1, $zero, 0x44E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229CE4u, 0x229CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CECu;
label_229cec:
    // 0x229cec: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229CECu;
    SET_GPR_U32(ctx, 31, 0x229CF4u);
    ctx->pc = 0x229CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CECu;
    // 0x229cf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229CECu, 0x229CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CF4u;
label_229cf4:
    // 0x229cf4: 0x24040439  addiu       $a0, $zero, 0x439
    ctx->pc = 0x229cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1081));
    // 0x229cf8: 0xc09925e  jal         func_264978
    ctx->pc = 0x229CF8u;
    SET_GPR_U32(ctx, 31, 0x229D00u);
    ctx->pc = 0x229CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CF8u;
    // 0x229cfc: 0x240503f0  addiu       $a1, $zero, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229CF8u, 0x229D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D00u;
label_229d00:
    // 0x229d00: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229D00u;
    SET_GPR_U32(ctx, 31, 0x229D08u);
    ctx->pc = 0x229D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D00u;
    // 0x229d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229D00u, 0x229D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D08u;
label_229d08:
    // 0x229d08: 0x240403f4  addiu       $a0, $zero, 0x3F4
    ctx->pc = 0x229d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x229d0c: 0xc09925e  jal         func_264978
    ctx->pc = 0x229D0Cu;
    SET_GPR_U32(ctx, 31, 0x229D14u);
    ctx->pc = 0x229D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D0Cu;
    // 0x229d10: 0x2405040d  addiu       $a1, $zero, 0x40D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229D0Cu, 0x229D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D14u;
label_229d14:
    // 0x229d14: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229D14u;
    SET_GPR_U32(ctx, 31, 0x229D1Cu);
    ctx->pc = 0x229D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D14u;
    // 0x229d18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229D14u, 0x229D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D1Cu;
label_229d1c:
    // 0x229d1c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x229d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x229d20: 0xc09925e  jal         func_264978
    ctx->pc = 0x229D20u;
    SET_GPR_U32(ctx, 31, 0x229D28u);
    ctx->pc = 0x229D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D20u;
    // 0x229d24: 0x2405040d  addiu       $a1, $zero, 0x40D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229D20u, 0x229D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D28u;
label_229d28:
    // 0x229d28: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229D28u;
    SET_GPR_U32(ctx, 31, 0x229D30u);
    ctx->pc = 0x229D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D28u;
    // 0x229d2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229D28u, 0x229D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D30u;
label_229d30:
    // 0x229d30: 0x24040407  addiu       $a0, $zero, 0x407
    ctx->pc = 0x229d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
    // 0x229d34: 0xc09925e  jal         func_264978
    ctx->pc = 0x229D34u;
    SET_GPR_U32(ctx, 31, 0x229D3Cu);
    ctx->pc = 0x229D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D34u;
    // 0x229d38: 0x2405040d  addiu       $a1, $zero, 0x40D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229D34u, 0x229D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D3Cu;
label_229d3c:
    // 0x229d3c: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229D3Cu;
    SET_GPR_U32(ctx, 31, 0x229D44u);
    ctx->pc = 0x229D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D3Cu;
    // 0x229d40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229D3Cu, 0x229D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D44u;
label_229d44:
    // 0x229d44: 0x240404a9  addiu       $a0, $zero, 0x4A9
    ctx->pc = 0x229d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1193));
    // 0x229d48: 0xc09925e  jal         func_264978
    ctx->pc = 0x229D48u;
    SET_GPR_U32(ctx, 31, 0x229D50u);
    ctx->pc = 0x229D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D48u;
    // 0x229d4c: 0x240504aa  addiu       $a1, $zero, 0x4AA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1194));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229D48u, 0x229D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D50u;
label_229d50:
    // 0x229d50: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229D50u;
    SET_GPR_U32(ctx, 31, 0x229D58u);
    ctx->pc = 0x229D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D50u;
    // 0x229d54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229D50u, 0x229D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D58u;
label_229d58:
    // 0x229d58: 0x240404a1  addiu       $a0, $zero, 0x4A1
    ctx->pc = 0x229d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1185));
    // 0x229d5c: 0xc09925e  jal         func_264978
    ctx->pc = 0x229D5Cu;
    SET_GPR_U32(ctx, 31, 0x229D64u);
    ctx->pc = 0x229D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D5Cu;
    // 0x229d60: 0x240504a2  addiu       $a1, $zero, 0x4A2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229D5Cu, 0x229D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D64u;
label_229d64:
    // 0x229d64: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229D64u;
    SET_GPR_U32(ctx, 31, 0x229D6Cu);
    ctx->pc = 0x229D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D64u;
    // 0x229d68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229D64u, 0x229D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D6Cu;
label_229d6c:
    // 0x229d6c: 0x24040468  addiu       $a0, $zero, 0x468
    ctx->pc = 0x229d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1128));
    // 0x229d70: 0xc09925e  jal         func_264978
    ctx->pc = 0x229D70u;
    SET_GPR_U32(ctx, 31, 0x229D78u);
    ctx->pc = 0x229D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D70u;
    // 0x229d74: 0x2405056c  addiu       $a1, $zero, 0x56C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229D70u, 0x229D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D78u;
label_229d78:
    // 0x229d78: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229D78u;
    SET_GPR_U32(ctx, 31, 0x229D80u);
    ctx->pc = 0x229D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D78u;
    // 0x229d7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229D78u, 0x229D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D80u;
label_229d80:
    // 0x229d80: 0x24040480  addiu       $a0, $zero, 0x480
    ctx->pc = 0x229d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x229d84: 0xc09925e  jal         func_264978
    ctx->pc = 0x229D84u;
    SET_GPR_U32(ctx, 31, 0x229D8Cu);
    ctx->pc = 0x229D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D84u;
    // 0x229d88: 0x24050482  addiu       $a1, $zero, 0x482 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1154));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229D84u, 0x229D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D8Cu;
label_229d8c:
    // 0x229d8c: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229D8Cu;
    SET_GPR_U32(ctx, 31, 0x229D94u);
    ctx->pc = 0x229D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D8Cu;
    // 0x229d90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229D8Cu, 0x229D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D94u;
label_229d94:
    // 0x229d94: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x229d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x229d98: 0xc095e08  jal         func_257820
    ctx->pc = 0x229D98u;
    SET_GPR_U32(ctx, 31, 0x229DA0u);
    ctx->pc = 0x229D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D98u;
    // 0x229d9c: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229D98u, 0x229DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DA0u;
label_229da0:
    // 0x229da0: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x229da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x229da4: 0xc095e08  jal         func_257820
    ctx->pc = 0x229DA4u;
    SET_GPR_U32(ctx, 31, 0x229DACu);
    ctx->pc = 0x229DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DA4u;
    // 0x229da8: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229DA4u, 0x229DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DACu;
label_229dac:
    // 0x229dac: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x229dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x229db0: 0xc095e08  jal         func_257820
    ctx->pc = 0x229DB0u;
    SET_GPR_U32(ctx, 31, 0x229DB8u);
    ctx->pc = 0x229DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DB0u;
    // 0x229db4: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229DB0u, 0x229DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DB8u;
label_229db8:
    // 0x229db8: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x229db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x229dbc: 0xc095e08  jal         func_257820
    ctx->pc = 0x229DBCu;
    SET_GPR_U32(ctx, 31, 0x229DC4u);
    ctx->pc = 0x229DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DBCu;
    // 0x229dc0: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229DBCu, 0x229DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DC4u;
label_229dc4:
    // 0x229dc4: 0xc095dde  jal         func_257778
    ctx->pc = 0x229DC4u;
    SET_GPR_U32(ctx, 31, 0x229DCCu);
    ctx->pc = 0x229DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DC4u;
    // 0x229dc8: 0x2404005b  addiu       $a0, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257778u, 0x229DC4u, 0x229DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DCCu;
label_229dcc:
    // 0x229dcc: 0xc095dde  jal         func_257778
    ctx->pc = 0x229DCCu;
    SET_GPR_U32(ctx, 31, 0x229DD4u);
    ctx->pc = 0x229DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DCCu;
    // 0x229dd0: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257778u, 0x229DCCu, 0x229DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DD4u;
label_229dd4:
    // 0x229dd4: 0xc095dde  jal         func_257778
    ctx->pc = 0x229DD4u;
    SET_GPR_U32(ctx, 31, 0x229DDCu);
    ctx->pc = 0x229DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DD4u;
    // 0x229dd8: 0x2404005d  addiu       $a0, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257778u, 0x229DD4u, 0x229DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DDCu;
label_229ddc:
    // 0x229ddc: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x229ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x229de0: 0xc095e08  jal         func_257820
    ctx->pc = 0x229DE0u;
    SET_GPR_U32(ctx, 31, 0x229DE8u);
    ctx->pc = 0x229DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DE0u;
    // 0x229de4: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229DE0u, 0x229DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DE8u;
label_229de8:
    // 0x229de8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x229de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229dec: 0xc095e08  jal         func_257820
    ctx->pc = 0x229DECu;
    SET_GPR_U32(ctx, 31, 0x229DF4u);
    ctx->pc = 0x229DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DECu;
    // 0x229df0: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229DECu, 0x229DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DF4u;
label_229df4:
    // 0x229df4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x229df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x229df8: 0xc095e08  jal         func_257820
    ctx->pc = 0x229DF8u;
    SET_GPR_U32(ctx, 31, 0x229E00u);
    ctx->pc = 0x229DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DF8u;
    // 0x229dfc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229DF8u, 0x229E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E00u;
label_229e00:
    // 0x229e00: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x229e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x229e04: 0xc095e08  jal         func_257820
    ctx->pc = 0x229E04u;
    SET_GPR_U32(ctx, 31, 0x229E0Cu);
    ctx->pc = 0x229E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E04u;
    // 0x229e08: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229E04u, 0x229E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E0Cu;
label_229e0c:
    // 0x229e0c: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x229e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x229e10: 0xc095e08  jal         func_257820
    ctx->pc = 0x229E10u;
    SET_GPR_U32(ctx, 31, 0x229E18u);
    ctx->pc = 0x229E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E10u;
    // 0x229e14: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229E10u, 0x229E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E18u;
label_229e18:
    // 0x229e18: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x229e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x229e1c: 0xc095e08  jal         func_257820
    ctx->pc = 0x229E1Cu;
    SET_GPR_U32(ctx, 31, 0x229E24u);
    ctx->pc = 0x229E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E1Cu;
    // 0x229e20: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229E1Cu, 0x229E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E24u;
label_229e24:
    // 0x229e24: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x229e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x229e28: 0x8c62c4f4  lw          $v0, -0x3B0C($v1)
    ctx->pc = 0x229e28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F4u));
    // 0x229e2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x229e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229e30: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x229e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x229e34: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x229E34u;
    {
        const bool branch_taken_0x229e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E34u;
        // 0x229e38: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e34) {
            ctx->pc = 0x22A0A4u;
            goto label_22a0a4;
        }
    }
    ctx->pc = 0x229E3Cu;
    // 0x229e3c: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229E3Cu;
    SET_GPR_U32(ctx, 31, 0x229E44u);
    ctx->pc = 0x229E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E3Cu;
    // 0x229e40: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229E3Cu, 0x229E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E44u;
label_229e44:
    // 0x229e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229e48: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x229e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x229e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229e50: 0x809b04e  j           func_26C138
    ctx->pc = 0x229E50u;
    ctx->pc = 0x229E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E50u;
    // 0x229e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    doorLock_0x26c138(rdram, ctx, runtime); return;
    ctx->pc = 0x229E58u;
label_229e58:
    // 0x229e58: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229E58u;
    SET_GPR_U32(ctx, 31, 0x229E60u);
    ctx->pc = 0x229E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E58u;
    // 0x229e5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229E58u, 0x229E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E60u;
label_229e60:
    // 0x229e60: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229E60u;
    SET_GPR_U32(ctx, 31, 0x229E68u);
    ctx->pc = 0x229E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E60u;
    // 0x229e64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229E60u, 0x229E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E68u;
label_229e68:
    // 0x229e68: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x229e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x229e6c: 0xc095e08  jal         func_257820
    ctx->pc = 0x229E6Cu;
    SET_GPR_U32(ctx, 31, 0x229E74u);
    ctx->pc = 0x229E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E6Cu;
    // 0x229e70: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229E6Cu, 0x229E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E74u;
label_229e74:
    // 0x229e74: 0x24040495  addiu       $a0, $zero, 0x495
    ctx->pc = 0x229e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1173));
    // 0x229e78: 0xc09925e  jal         func_264978
    ctx->pc = 0x229E78u;
    SET_GPR_U32(ctx, 31, 0x229E80u);
    ctx->pc = 0x229E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E78u;
    // 0x229e7c: 0x2405044d  addiu       $a1, $zero, 0x44D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229E78u, 0x229E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E80u;
label_229e80:
    // 0x229e80: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229E80u;
    SET_GPR_U32(ctx, 31, 0x229E88u);
    ctx->pc = 0x229E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E80u;
    // 0x229e84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229E80u, 0x229E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E88u;
label_229e88:
    // 0x229e88: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229E88u;
    SET_GPR_U32(ctx, 31, 0x229E90u);
    ctx->pc = 0x229E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E88u;
    // 0x229e8c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229E88u, 0x229E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E90u;
label_229e90:
    // 0x229e90: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229E90u;
    SET_GPR_U32(ctx, 31, 0x229E98u);
    ctx->pc = 0x229E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E90u;
    // 0x229e94: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229E90u, 0x229E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E98u;
label_229e98:
    // 0x229e98: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x229e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x229e9c: 0xc095e08  jal         func_257820
    ctx->pc = 0x229E9Cu;
    SET_GPR_U32(ctx, 31, 0x229EA4u);
    ctx->pc = 0x229EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E9Cu;
    // 0x229ea0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229E9Cu, 0x229EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EA4u;
label_229ea4:
    // 0x229ea4: 0x240404aa  addiu       $a0, $zero, 0x4AA
    ctx->pc = 0x229ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1194));
    // 0x229ea8: 0xc09925e  jal         func_264978
    ctx->pc = 0x229EA8u;
    SET_GPR_U32(ctx, 31, 0x229EB0u);
    ctx->pc = 0x229EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EA8u;
    // 0x229eac: 0x2405049e  addiu       $a1, $zero, 0x49E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1182));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229EA8u, 0x229EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EB0u;
label_229eb0:
    // 0x229eb0: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229EB0u;
    SET_GPR_U32(ctx, 31, 0x229EB8u);
    ctx->pc = 0x229EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EB0u;
    // 0x229eb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229EB0u, 0x229EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EB8u;
label_229eb8:
    // 0x229eb8: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229EB8u;
    SET_GPR_U32(ctx, 31, 0x229EC0u);
    ctx->pc = 0x229EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EB8u;
    // 0x229ebc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229EB8u, 0x229EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EC0u;
label_229ec0:
    // 0x229ec0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229EC0u;
    SET_GPR_U32(ctx, 31, 0x229EC8u);
    ctx->pc = 0x229EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EC0u;
    // 0x229ec4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229EC0u, 0x229EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EC8u;
label_229ec8:
    // 0x229ec8: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x229ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x229ecc: 0xc095e08  jal         func_257820
    ctx->pc = 0x229ECCu;
    SET_GPR_U32(ctx, 31, 0x229ED4u);
    ctx->pc = 0x229ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229ECCu;
    // 0x229ed0: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229ECCu, 0x229ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229ED4u;
label_229ed4:
    // 0x229ed4: 0x24040485  addiu       $a0, $zero, 0x485
    ctx->pc = 0x229ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1157));
    // 0x229ed8: 0xc09925e  jal         func_264978
    ctx->pc = 0x229ED8u;
    SET_GPR_U32(ctx, 31, 0x229EE0u);
    ctx->pc = 0x229EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229ED8u;
    // 0x229edc: 0x2405045e  addiu       $a1, $zero, 0x45E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1118));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229ED8u, 0x229EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EE0u;
label_229ee0:
    // 0x229ee0: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229EE0u;
    SET_GPR_U32(ctx, 31, 0x229EE8u);
    ctx->pc = 0x229EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EE0u;
    // 0x229ee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229EE0u, 0x229EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EE8u;
label_229ee8:
    // 0x229ee8: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229EE8u;
    SET_GPR_U32(ctx, 31, 0x229EF0u);
    ctx->pc = 0x229EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EE8u;
    // 0x229eec: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229EE8u, 0x229EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EF0u;
label_229ef0:
    // 0x229ef0: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229EF0u;
    SET_GPR_U32(ctx, 31, 0x229EF8u);
    ctx->pc = 0x229EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EF0u;
    // 0x229ef4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229EF0u, 0x229EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EF8u;
label_229ef8:
    // 0x229ef8: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x229ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x229efc: 0xc095e08  jal         func_257820
    ctx->pc = 0x229EFCu;
    SET_GPR_U32(ctx, 31, 0x229F04u);
    ctx->pc = 0x229F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EFCu;
    // 0x229f00: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257820u, 0x229EFCu, 0x229F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F04u;
label_229f04:
    // 0x229f04: 0x2404048d  addiu       $a0, $zero, 0x48D
    ctx->pc = 0x229f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1165));
    // 0x229f08: 0xc09925e  jal         func_264978
    ctx->pc = 0x229F08u;
    SET_GPR_U32(ctx, 31, 0x229F10u);
    ctx->pc = 0x229F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F08u;
    // 0x229f0c: 0x24050440  addiu       $a1, $zero, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229F08u, 0x229F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F10u;
label_229f10:
    // 0x229f10: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229F10u;
    SET_GPR_U32(ctx, 31, 0x229F18u);
    ctx->pc = 0x229F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F10u;
    // 0x229f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229F10u, 0x229F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F18u;
label_229f18:
    // 0x229f18: 0x2404051c  addiu       $a0, $zero, 0x51C
    ctx->pc = 0x229f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1308));
    // 0x229f1c: 0xc09925e  jal         func_264978
    ctx->pc = 0x229F1Cu;
    SET_GPR_U32(ctx, 31, 0x229F24u);
    ctx->pc = 0x229F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F1Cu;
    // 0x229f20: 0x24050594  addiu       $a1, $zero, 0x594 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229F1Cu, 0x229F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F24u;
label_229f24:
    // 0x229f24: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229F24u;
    SET_GPR_U32(ctx, 31, 0x229F2Cu);
    ctx->pc = 0x229F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F24u;
    // 0x229f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229F24u, 0x229F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F2Cu;
label_229f2c:
    // 0x229f2c: 0x2404051c  addiu       $a0, $zero, 0x51C
    ctx->pc = 0x229f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1308));
    // 0x229f30: 0xc09925e  jal         func_264978
    ctx->pc = 0x229F30u;
    SET_GPR_U32(ctx, 31, 0x229F38u);
    ctx->pc = 0x229F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F30u;
    // 0x229f34: 0x24050484  addiu       $a1, $zero, 0x484 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229F30u, 0x229F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F38u;
label_229f38:
    // 0x229f38: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229F38u;
    SET_GPR_U32(ctx, 31, 0x229F40u);
    ctx->pc = 0x229F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F38u;
    // 0x229f3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229F38u, 0x229F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F40u;
label_229f40:
    // 0x229f40: 0x2404051d  addiu       $a0, $zero, 0x51D
    ctx->pc = 0x229f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x229f44: 0xc09925e  jal         func_264978
    ctx->pc = 0x229F44u;
    SET_GPR_U32(ctx, 31, 0x229F4Cu);
    ctx->pc = 0x229F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F44u;
    // 0x229f48: 0x24050594  addiu       $a1, $zero, 0x594 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229F44u, 0x229F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F4Cu;
label_229f4c:
    // 0x229f4c: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229F4Cu;
    SET_GPR_U32(ctx, 31, 0x229F54u);
    ctx->pc = 0x229F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F4Cu;
    // 0x229f50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229F4Cu, 0x229F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F54u;
label_229f54:
    // 0x229f54: 0x2404051d  addiu       $a0, $zero, 0x51D
    ctx->pc = 0x229f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x229f58: 0xc09925e  jal         func_264978
    ctx->pc = 0x229F58u;
    SET_GPR_U32(ctx, 31, 0x229F60u);
    ctx->pc = 0x229F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F58u;
    // 0x229f5c: 0x24050483  addiu       $a1, $zero, 0x483 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229F58u, 0x229F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F60u;
label_229f60:
    // 0x229f60: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229F60u;
    SET_GPR_U32(ctx, 31, 0x229F68u);
    ctx->pc = 0x229F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F60u;
    // 0x229f64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229F60u, 0x229F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F68u;
label_229f68:
    // 0x229f68: 0x240405a5  addiu       $a0, $zero, 0x5A5
    ctx->pc = 0x229f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1445));
    // 0x229f6c: 0xc09925e  jal         func_264978
    ctx->pc = 0x229F6Cu;
    SET_GPR_U32(ctx, 31, 0x229F74u);
    ctx->pc = 0x229F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F6Cu;
    // 0x229f70: 0x240504e0  addiu       $a1, $zero, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229F6Cu, 0x229F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F74u;
label_229f74:
    // 0x229f74: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229F74u;
    SET_GPR_U32(ctx, 31, 0x229F7Cu);
    ctx->pc = 0x229F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F74u;
    // 0x229f78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229F74u, 0x229F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F7Cu;
label_229f7c:
    // 0x229f7c: 0x240404ba  addiu       $a0, $zero, 0x4BA
    ctx->pc = 0x229f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1210));
    // 0x229f80: 0xc09925e  jal         func_264978
    ctx->pc = 0x229F80u;
    SET_GPR_U32(ctx, 31, 0x229F88u);
    ctx->pc = 0x229F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F80u;
    // 0x229f84: 0x240504dd  addiu       $a1, $zero, 0x4DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229F80u, 0x229F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F88u;
label_229f88:
    // 0x229f88: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229F88u;
    SET_GPR_U32(ctx, 31, 0x229F90u);
    ctx->pc = 0x229F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F88u;
    // 0x229f8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229F88u, 0x229F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F90u;
label_229f90:
    // 0x229f90: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x229f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x229f94: 0xc09925e  jal         func_264978
    ctx->pc = 0x229F94u;
    SET_GPR_U32(ctx, 31, 0x229F9Cu);
    ctx->pc = 0x229F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F94u;
    // 0x229f98: 0x240504dd  addiu       $a1, $zero, 0x4DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229F94u, 0x229F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F9Cu;
label_229f9c:
    // 0x229f9c: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229F9Cu;
    SET_GPR_U32(ctx, 31, 0x229FA4u);
    ctx->pc = 0x229FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F9Cu;
    // 0x229fa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229F9Cu, 0x229FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FA4u;
label_229fa4:
    // 0x229fa4: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x229fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x229fa8: 0xc09925e  jal         func_264978
    ctx->pc = 0x229FA8u;
    SET_GPR_U32(ctx, 31, 0x229FB0u);
    ctx->pc = 0x229FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FA8u;
    // 0x229fac: 0x240504de  addiu       $a1, $zero, 0x4DE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1246));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229FA8u, 0x229FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FB0u;
label_229fb0:
    // 0x229fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229fb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x229fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229fbc: 0x809939a  j           func_264E68
    ctx->pc = 0x229FBCu;
    ctx->pc = 0x229FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FBCu;
    // 0x229fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    linkDisable_0x264e68(rdram, ctx, runtime); return;
    ctx->pc = 0x229FC4u;
label_229fc4:
    // 0x229fc4: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229FC4u;
    SET_GPR_U32(ctx, 31, 0x229FCCu);
    ctx->pc = 0x229FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FC4u;
    // 0x229fc8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229FC4u, 0x229FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FCCu;
label_229fcc:
    // 0x229fcc: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229FCCu;
    SET_GPR_U32(ctx, 31, 0x229FD4u);
    ctx->pc = 0x229FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FCCu;
    // 0x229fd0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229FCCu, 0x229FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FD4u;
label_229fd4:
    // 0x229fd4: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229FD4u;
    SET_GPR_U32(ctx, 31, 0x229FDCu);
    ctx->pc = 0x229FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FD4u;
    // 0x229fd8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229FD4u, 0x229FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FDCu;
label_229fdc:
    // 0x229fdc: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x229FDCu;
    SET_GPR_U32(ctx, 31, 0x229FE4u);
    ctx->pc = 0x229FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FDCu;
    // 0x229fe0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x229FDCu, 0x229FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FE4u;
label_229fe4:
    // 0x229fe4: 0x240406ce  addiu       $a0, $zero, 0x6CE
    ctx->pc = 0x229fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1742));
    // 0x229fe8: 0xc09925e  jal         func_264978
    ctx->pc = 0x229FE8u;
    SET_GPR_U32(ctx, 31, 0x229FF0u);
    ctx->pc = 0x229FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FE8u;
    // 0x229fec: 0x240503fa  addiu       $a1, $zero, 0x3FA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x229FE8u, 0x229FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FF0u;
label_229ff0:
    // 0x229ff0: 0xc09939a  jal         func_264E68
    ctx->pc = 0x229FF0u;
    SET_GPR_U32(ctx, 31, 0x229FF8u);
    ctx->pc = 0x229FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FF0u;
    // 0x229ff4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x229FF0u, 0x229FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FF8u;
label_229ff8:
    // 0x229ff8: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x229FF8u;
    SET_GPR_U32(ctx, 31, 0x22A000u);
    ctx->pc = 0x229FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FF8u;
    // 0x229ffc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x229FF8u, 0x22A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A000u;
label_22a000:
    // 0x22a000: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x22A000u;
    SET_GPR_U32(ctx, 31, 0x22A008u);
    ctx->pc = 0x22A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A000u;
    // 0x22a004: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x22A000u, 0x22A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A008u;
label_22a008:
    // 0x22a008: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x22A008u;
    SET_GPR_U32(ctx, 31, 0x22A010u);
    ctx->pc = 0x22A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A008u;
    // 0x22a00c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x22A008u, 0x22A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A010u;
label_22a010:
    // 0x22a010: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x22A010u;
    SET_GPR_U32(ctx, 31, 0x22A018u);
    ctx->pc = 0x22A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A010u;
    // 0x22a014: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x22A010u, 0x22A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A018u;
label_22a018:
    // 0x22a018: 0x24040405  addiu       $a0, $zero, 0x405
    ctx->pc = 0x22a018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x22a01c: 0xc09925e  jal         func_264978
    ctx->pc = 0x22A01Cu;
    SET_GPR_U32(ctx, 31, 0x22A024u);
    ctx->pc = 0x22A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A01Cu;
    // 0x22a020: 0x24050406  addiu       $a1, $zero, 0x406 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x22A01Cu, 0x22A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A024u;
label_22a024:
    // 0x22a024: 0xc09939a  jal         func_264E68
    ctx->pc = 0x22A024u;
    SET_GPR_U32(ctx, 31, 0x22A02Cu);
    ctx->pc = 0x22A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A024u;
    // 0x22a028: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x22A024u, 0x22A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A02Cu;
label_22a02c:
    // 0x22a02c: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x22A02Cu;
    SET_GPR_U32(ctx, 31, 0x22A034u);
    ctx->pc = 0x22A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A02Cu;
    // 0x22a030: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x22A02Cu, 0x22A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A034u;
label_22a034:
    // 0x22a034: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x22A034u;
    SET_GPR_U32(ctx, 31, 0x22A03Cu);
    ctx->pc = 0x22A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A034u;
    // 0x22a038: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x22A034u, 0x22A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A03Cu;
label_22a03c:
    // 0x22a03c: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x22A03Cu;
    SET_GPR_U32(ctx, 31, 0x22A044u);
    ctx->pc = 0x22A040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A03Cu;
    // 0x22a040: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x22A03Cu, 0x22A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A044u;
label_22a044:
    // 0x22a044: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x22A044u;
    SET_GPR_U32(ctx, 31, 0x22A04Cu);
    ctx->pc = 0x22A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A044u;
    // 0x22a048: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x22A044u, 0x22A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A04Cu;
label_22a04c:
    // 0x22a04c: 0x24040429  addiu       $a0, $zero, 0x429
    ctx->pc = 0x22a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
    // 0x22a050: 0xc09925e  jal         func_264978
    ctx->pc = 0x22A050u;
    SET_GPR_U32(ctx, 31, 0x22A058u);
    ctx->pc = 0x22A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A050u;
    // 0x22a054: 0x2405042b  addiu       $a1, $zero, 0x42B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x22A050u, 0x22A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A058u;
label_22a058:
    // 0x22a058: 0xc09939a  jal         func_264E68
    ctx->pc = 0x22A058u;
    SET_GPR_U32(ctx, 31, 0x22A060u);
    ctx->pc = 0x22A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A058u;
    // 0x22a05c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E68u, 0x22A058u, 0x22A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A060u;
label_22a060:
    // 0x22a060: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x22A060u;
    SET_GPR_U32(ctx, 31, 0x22A068u);
    ctx->pc = 0x22A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A060u;
    // 0x22a064: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x22A060u, 0x22A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A068u;
label_22a068:
    // 0x22a068: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x22A068u;
    SET_GPR_U32(ctx, 31, 0x22A070u);
    ctx->pc = 0x22A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A068u;
    // 0x22a06c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x22A068u, 0x22A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A070u;
label_22a070:
    // 0x22a070: 0xc09b06a  jal         func_26C1A8
    ctx->pc = 0x22A070u;
    SET_GPR_U32(ctx, 31, 0x22A078u);
    ctx->pc = 0x22A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A070u;
    // 0x22a074: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1A8u, 0x22A070u, 0x22A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A078u;
label_22a078:
    // 0x22a078: 0xc09b04e  jal         func_26C138
    ctx->pc = 0x22A078u;
    SET_GPR_U32(ctx, 31, 0x22A080u);
    ctx->pc = 0x22A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A078u;
    // 0x22a07c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C138u, 0x22A078u, 0x22A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A080u;
label_22a080:
    // 0x22a080: 0x2404042e  addiu       $a0, $zero, 0x42E
    ctx->pc = 0x22a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
    // 0x22a084: 0xc09925e  jal         func_264978
    ctx->pc = 0x22A084u;
    SET_GPR_U32(ctx, 31, 0x22A08Cu);
    ctx->pc = 0x22A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A084u;
    // 0x22a088: 0x24050622  addiu       $a1, $zero, 0x622 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1570));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x22A084u, 0x22A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A08Cu;
label_22a08c:
    // 0x22a08c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22a08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a098: 0x809939a  j           func_264E68
    ctx->pc = 0x22A098u;
    ctx->pc = 0x22A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A098u;
    // 0x22a09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E68u;
    linkDisable_0x264e68(rdram, ctx, runtime); return;
    ctx->pc = 0x22A0A0u;
label_22a0a0:
    // 0x22a0a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22a0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22a0a4:
    // 0x22a0a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22A0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0A8u;
        // 0x22a0ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A0B0u;
}
