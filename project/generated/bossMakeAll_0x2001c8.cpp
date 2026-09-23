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

// Function: bossMakeAll
// Address: 0x2001c8 - 0x200260
void bossMakeAll_0x2001c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bossMakeAll_0x2001c8");
#endif

    switch (ctx->pc) {
        case 0x2001d8u: goto label_2001d8;
        case 0x2001e0u: goto label_2001e0;
        case 0x2001f4u: goto label_2001f4;
        case 0x2001fcu: goto label_2001fc;
        case 0x200204u: goto label_200204;
        case 0x20020cu: goto label_20020c;
        case 0x200214u: goto label_200214;
        case 0x20021cu: goto label_20021c;
        case 0x200224u: goto label_200224;
        case 0x20022cu: goto label_20022c;
        case 0x200234u: goto label_200234;
        case 0x20023cu: goto label_20023c;
        case 0x200244u: goto label_200244;
        case 0x20024cu: goto label_20024c;
        case 0x200254u: goto label_200254;
        default: break;
    }

    ctx->pc = 0x2001c8u;

    // 0x2001c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2001c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2001cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2001ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2001d0: 0xc0800d0  jal         func_200340
    ctx->pc = 0x2001D0u;
    SET_GPR_U32(ctx, 31, 0x2001D8u);
    ctx->pc = 0x200340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200340u, 0x2001D0u, 0x2001D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001D8u;
label_2001d8:
    // 0x2001d8: 0xc0ada4c  jal         func_2B6930
    ctx->pc = 0x2001D8u;
    SET_GPR_U32(ctx, 31, 0x2001E0u);
    ctx->pc = 0x2B6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6930u, 0x2001D8u, 0x2001E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001E0u;
label_2001e0:
    // 0x2001e0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2001e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2001e4: 0x3c0501ae  lui         $a1, 0x1AE
    ctx->pc = 0x2001e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)430 << 16));
    // 0x2001e8: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x2001e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x2001ec: 0xc0806ce  jal         func_201B38
    ctx->pc = 0x2001ECu;
    SET_GPR_U32(ctx, 31, 0x2001F4u);
    ctx->pc = 0x2001F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001ECu;
    // 0x2001f0: 0x34a51c00  ori         $a1, $a1, 0x1C00 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7168);
    ctx->in_delay_slot = false;
    ctx->pc = 0x201B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201B38u, 0x2001ECu, 0x2001F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001F4u;
label_2001f4:
    // 0x2001f4: 0xc0869a2  jal         func_21A688
    ctx->pc = 0x2001F4u;
    SET_GPR_U32(ctx, 31, 0x2001FCu);
    ctx->pc = 0x21A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A688u, 0x2001F4u, 0x2001FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001FCu;
label_2001fc:
    // 0x2001fc: 0xc0ad7f8  jal         func_2B5FE0
    ctx->pc = 0x2001FCu;
    SET_GPR_U32(ctx, 31, 0x200204u);
    ctx->pc = 0x2B5FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FE0u, 0x2001FCu, 0x200204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200204u;
label_200204:
    // 0x200204: 0xc0830ca  jal         func_20C328
    ctx->pc = 0x200204u;
    SET_GPR_U32(ctx, 31, 0x20020Cu);
    ctx->pc = 0x20C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C328u, 0x200204u, 0x20020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20020Cu;
label_20020c:
    // 0x20020c: 0xc080fe8  jal         func_203FA0
    ctx->pc = 0x20020Cu;
    SET_GPR_U32(ctx, 31, 0x200214u);
    ctx->pc = 0x203FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FA0u, 0x20020Cu, 0x200214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200214u;
label_200214:
    // 0x200214: 0xc0810fa  jal         func_2043E8
    ctx->pc = 0x200214u;
    SET_GPR_U32(ctx, 31, 0x20021Cu);
    ctx->pc = 0x2043E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2043E8u, 0x200214u, 0x20021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20021Cu;
label_20021c:
    // 0x20021c: 0xc08170e  jal         func_205C38
    ctx->pc = 0x20021Cu;
    SET_GPR_U32(ctx, 31, 0x200224u);
    ctx->pc = 0x205C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C38u, 0x20021Cu, 0x200224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200224u;
label_200224:
    // 0x200224: 0xc081e98  jal         func_207A60
    ctx->pc = 0x200224u;
    SET_GPR_U32(ctx, 31, 0x20022Cu);
    ctx->pc = 0x207A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A60u, 0x200224u, 0x20022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20022Cu;
label_20022c:
    // 0x20022c: 0xc091386  jal         func_244E18
    ctx->pc = 0x20022Cu;
    SET_GPR_U32(ctx, 31, 0x200234u);
    ctx->pc = 0x244E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E18u, 0x20022Cu, 0x200234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200234u;
label_200234:
    // 0x200234: 0xc0b3770  jal         func_2CDDC0
    ctx->pc = 0x200234u;
    SET_GPR_U32(ctx, 31, 0x20023Cu);
    ctx->pc = 0x2CDDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDC0u, 0x200234u, 0x20023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20023Cu;
label_20023c:
    // 0x20023c: 0xc08959c  jal         func_225670
    ctx->pc = 0x20023Cu;
    SET_GPR_U32(ctx, 31, 0x200244u);
    ctx->pc = 0x225670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225670u, 0x20023Cu, 0x200244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200244u;
label_200244:
    // 0x200244: 0xc088252  jal         func_220948
    ctx->pc = 0x200244u;
    SET_GPR_U32(ctx, 31, 0x20024Cu);
    ctx->pc = 0x220948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220948u, 0x200244u, 0x20024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20024Cu;
label_20024c:
    // 0x20024c: 0xc0903ce  jal         func_240F38
    ctx->pc = 0x20024Cu;
    SET_GPR_U32(ctx, 31, 0x200254u);
    ctx->pc = 0x240F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240F38u, 0x20024Cu, 0x200254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200254u;
label_200254:
    // 0x200254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200258: 0x80920ea  j           func_2483A8
    ctx->pc = 0x200258u;
    ctx->pc = 0x20025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200258u;
    // 0x20025c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2483A8u;
    mapmakerMake_0x2483a8(rdram, ctx, runtime); return;
    ctx->pc = 0x200260u;
}
