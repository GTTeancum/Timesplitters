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

// Function: ingamemenuStart
// Address: 0x212930 - 0x2129e0
void ingamemenuStart_0x212930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ingamemenuStart_0x212930");
#endif

    switch (ctx->pc) {
        case 0x212978u: goto label_212978;
        case 0x21298cu: goto label_21298c;
        case 0x212994u: goto label_212994;
        case 0x2129b0u: goto label_2129b0;
        default: break;
    }

    ctx->pc = 0x212930u;

    // 0x212930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212934: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x212934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x212938: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x212938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21293c: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x21293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
    // 0x212940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212948: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x212948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x21294c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21294cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212950: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x212950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x212954: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x212954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212958: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x212958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21295c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x21295cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212960: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x212960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x212964: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x212964u;
    {
        const bool branch_taken_0x212964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x212968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212964u;
        // 0x212968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212964) {
            ctx->pc = 0x21297Cu;
            goto label_21297c;
        }
    }
    ctx->pc = 0x21296Cu;
    // 0x21296c: 0x240400de  addiu       $a0, $zero, 0xDE
    ctx->pc = 0x21296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x212970: 0xc081546  jal         func_205518
    ctx->pc = 0x212970u;
    SET_GPR_U32(ctx, 31, 0x212978u);
    ctx->pc = 0x212974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212970u;
    // 0x212974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x212970u, 0x212978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212978u;
label_212978:
    // 0x212978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21297c:
    // 0x21297c: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x21297cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x212980: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x212980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x212984: 0xc08494e  jal         func_212538
    ctx->pc = 0x212984u;
    SET_GPR_U32(ctx, 31, 0x21298Cu);
    ctx->pc = 0x212988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212984u;
    // 0x212988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212538u, 0x212984u, 0x21298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21298Cu;
label_21298c:
    // 0x21298c: 0xc08b2c8  jal         func_22CB20
    ctx->pc = 0x21298Cu;
    SET_GPR_U32(ctx, 31, 0x212994u);
    ctx->pc = 0x212990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21298Cu;
    // 0x212990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x21298Cu, 0x212994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212994u;
label_212994:
    // 0x212994: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x212994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x212998: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x212998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x21299c: 0x24a5ab10  addiu       $a1, $a1, -0x54F0
    ctx->pc = 0x21299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x2129a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2129a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129a4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2129a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2129a8: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x2129A8u;
    SET_GPR_U32(ctx, 31, 0x2129B0u);
    ctx->pc = 0x2129ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2129A8u;
    // 0x2129ac: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x2129A8u, 0x2129B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129B0u;
label_2129b0:
    // 0x2129b0: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x2129b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2129b4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2129b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2129b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2129b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2129bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2129c0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2129c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2129c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2129c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2129c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2129c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2129cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2129ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2129d0: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2129d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x2129d4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2129d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2129d8: 0x8084a24  j           func_212890
    ctx->pc = 0x2129D8u;
    ctx->pc = 0x2129DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2129D8u;
    // 0x2129dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212890u;
    setRootPages_0x212890(rdram, ctx, runtime); return;
    ctx->pc = 0x2129E0u;
}
