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

// Function: challengeTick
// Address: 0x21f908 - 0x21fbec
void challengeTick_0x21f908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeTick_0x21f908");
#endif

    switch (ctx->pc) {
        case 0x21f908u: goto label_21f908;
        case 0x21f90cu: goto label_21f90c;
        case 0x21f910u: goto label_21f910;
        case 0x21f914u: goto label_21f914;
        case 0x21f918u: goto label_21f918;
        case 0x21f91cu: goto label_21f91c;
        case 0x21f920u: goto label_21f920;
        case 0x21f924u: goto label_21f924;
        case 0x21f928u: goto label_21f928;
        case 0x21f92cu: goto label_21f92c;
        case 0x21f930u: goto label_21f930;
        case 0x21f934u: goto label_21f934;
        case 0x21f938u: goto label_21f938;
        case 0x21f93cu: goto label_21f93c;
        case 0x21f940u: goto label_21f940;
        case 0x21f944u: goto label_21f944;
        case 0x21f948u: goto label_21f948;
        case 0x21f94cu: goto label_21f94c;
        case 0x21f950u: goto label_21f950;
        case 0x21f954u: goto label_21f954;
        case 0x21f958u: goto label_21f958;
        case 0x21f95cu: goto label_21f95c;
        case 0x21f960u: goto label_21f960;
        case 0x21f964u: goto label_21f964;
        case 0x21f968u: goto label_21f968;
        case 0x21f96cu: goto label_21f96c;
        case 0x21f970u: goto label_21f970;
        case 0x21f974u: goto label_21f974;
        case 0x21f978u: goto label_21f978;
        case 0x21f97cu: goto label_21f97c;
        case 0x21f980u: goto label_21f980;
        case 0x21f984u: goto label_21f984;
        case 0x21f988u: goto label_21f988;
        case 0x21f98cu: goto label_21f98c;
        case 0x21f990u: goto label_21f990;
        case 0x21f994u: goto label_21f994;
        case 0x21f998u: goto label_21f998;
        case 0x21f99cu: goto label_21f99c;
        case 0x21f9a0u: goto label_21f9a0;
        case 0x21f9a4u: goto label_21f9a4;
        case 0x21f9a8u: goto label_21f9a8;
        case 0x21f9acu: goto label_21f9ac;
        case 0x21f9b0u: goto label_21f9b0;
        case 0x21f9b4u: goto label_21f9b4;
        case 0x21f9b8u: goto label_21f9b8;
        case 0x21f9bcu: goto label_21f9bc;
        case 0x21f9c0u: goto label_21f9c0;
        case 0x21f9c4u: goto label_21f9c4;
        case 0x21f9c8u: goto label_21f9c8;
        case 0x21f9ccu: goto label_21f9cc;
        case 0x21f9d0u: goto label_21f9d0;
        case 0x21f9d4u: goto label_21f9d4;
        case 0x21f9d8u: goto label_21f9d8;
        case 0x21f9dcu: goto label_21f9dc;
        case 0x21f9e0u: goto label_21f9e0;
        case 0x21f9e4u: goto label_21f9e4;
        case 0x21f9e8u: goto label_21f9e8;
        case 0x21f9ecu: goto label_21f9ec;
        case 0x21f9f0u: goto label_21f9f0;
        case 0x21f9f4u: goto label_21f9f4;
        case 0x21f9f8u: goto label_21f9f8;
        case 0x21f9fcu: goto label_21f9fc;
        case 0x21fa00u: goto label_21fa00;
        case 0x21fa04u: goto label_21fa04;
        case 0x21fa08u: goto label_21fa08;
        case 0x21fa0cu: goto label_21fa0c;
        case 0x21fa10u: goto label_21fa10;
        case 0x21fa14u: goto label_21fa14;
        case 0x21fa18u: goto label_21fa18;
        case 0x21fa1cu: goto label_21fa1c;
        case 0x21fa20u: goto label_21fa20;
        case 0x21fa24u: goto label_21fa24;
        case 0x21fa28u: goto label_21fa28;
        case 0x21fa2cu: goto label_21fa2c;
        case 0x21fa30u: goto label_21fa30;
        case 0x21fa34u: goto label_21fa34;
        case 0x21fa38u: goto label_21fa38;
        case 0x21fa3cu: goto label_21fa3c;
        case 0x21fa40u: goto label_21fa40;
        case 0x21fa44u: goto label_21fa44;
        case 0x21fa48u: goto label_21fa48;
        case 0x21fa4cu: goto label_21fa4c;
        case 0x21fa50u: goto label_21fa50;
        case 0x21fa54u: goto label_21fa54;
        case 0x21fa58u: goto label_21fa58;
        case 0x21fa5cu: goto label_21fa5c;
        case 0x21fa60u: goto label_21fa60;
        case 0x21fa64u: goto label_21fa64;
        case 0x21fa68u: goto label_21fa68;
        case 0x21fa6cu: goto label_21fa6c;
        case 0x21fa70u: goto label_21fa70;
        case 0x21fa74u: goto label_21fa74;
        case 0x21fa78u: goto label_21fa78;
        case 0x21fa7cu: goto label_21fa7c;
        case 0x21fa80u: goto label_21fa80;
        case 0x21fa84u: goto label_21fa84;
        case 0x21fa88u: goto label_21fa88;
        case 0x21fa8cu: goto label_21fa8c;
        case 0x21fa90u: goto label_21fa90;
        case 0x21fa94u: goto label_21fa94;
        case 0x21fa98u: goto label_21fa98;
        case 0x21fa9cu: goto label_21fa9c;
        case 0x21faa0u: goto label_21faa0;
        case 0x21faa4u: goto label_21faa4;
        case 0x21faa8u: goto label_21faa8;
        case 0x21faacu: goto label_21faac;
        case 0x21fab0u: goto label_21fab0;
        case 0x21fab4u: goto label_21fab4;
        case 0x21fab8u: goto label_21fab8;
        case 0x21fabcu: goto label_21fabc;
        case 0x21fac0u: goto label_21fac0;
        case 0x21fac4u: goto label_21fac4;
        case 0x21fac8u: goto label_21fac8;
        case 0x21faccu: goto label_21facc;
        case 0x21fad0u: goto label_21fad0;
        case 0x21fad4u: goto label_21fad4;
        case 0x21fad8u: goto label_21fad8;
        case 0x21fadcu: goto label_21fadc;
        case 0x21fae0u: goto label_21fae0;
        case 0x21fae4u: goto label_21fae4;
        case 0x21fae8u: goto label_21fae8;
        case 0x21faecu: goto label_21faec;
        case 0x21faf0u: goto label_21faf0;
        case 0x21faf4u: goto label_21faf4;
        case 0x21faf8u: goto label_21faf8;
        case 0x21fafcu: goto label_21fafc;
        case 0x21fb00u: goto label_21fb00;
        case 0x21fb04u: goto label_21fb04;
        case 0x21fb08u: goto label_21fb08;
        case 0x21fb0cu: goto label_21fb0c;
        case 0x21fb10u: goto label_21fb10;
        case 0x21fb14u: goto label_21fb14;
        case 0x21fb18u: goto label_21fb18;
        case 0x21fb1cu: goto label_21fb1c;
        case 0x21fb20u: goto label_21fb20;
        case 0x21fb24u: goto label_21fb24;
        case 0x21fb28u: goto label_21fb28;
        case 0x21fb2cu: goto label_21fb2c;
        case 0x21fb30u: goto label_21fb30;
        case 0x21fb34u: goto label_21fb34;
        case 0x21fb38u: goto label_21fb38;
        case 0x21fb3cu: goto label_21fb3c;
        case 0x21fb40u: goto label_21fb40;
        case 0x21fb44u: goto label_21fb44;
        case 0x21fb48u: goto label_21fb48;
        case 0x21fb4cu: goto label_21fb4c;
        case 0x21fb50u: goto label_21fb50;
        case 0x21fb54u: goto label_21fb54;
        case 0x21fb58u: goto label_21fb58;
        case 0x21fb5cu: goto label_21fb5c;
        case 0x21fb60u: goto label_21fb60;
        case 0x21fb64u: goto label_21fb64;
        case 0x21fb68u: goto label_21fb68;
        case 0x21fb6cu: goto label_21fb6c;
        case 0x21fb70u: goto label_21fb70;
        case 0x21fb74u: goto label_21fb74;
        case 0x21fb78u: goto label_21fb78;
        case 0x21fb7cu: goto label_21fb7c;
        case 0x21fb80u: goto label_21fb80;
        case 0x21fb84u: goto label_21fb84;
        case 0x21fb88u: goto label_21fb88;
        case 0x21fb8cu: goto label_21fb8c;
        case 0x21fb90u: goto label_21fb90;
        case 0x21fb94u: goto label_21fb94;
        case 0x21fb98u: goto label_21fb98;
        case 0x21fb9cu: goto label_21fb9c;
        case 0x21fba0u: goto label_21fba0;
        case 0x21fba4u: goto label_21fba4;
        case 0x21fba8u: goto label_21fba8;
        case 0x21fbacu: goto label_21fbac;
        case 0x21fbb0u: goto label_21fbb0;
        case 0x21fbb4u: goto label_21fbb4;
        case 0x21fbb8u: goto label_21fbb8;
        case 0x21fbbcu: goto label_21fbbc;
        case 0x21fbc0u: goto label_21fbc0;
        case 0x21fbc4u: goto label_21fbc4;
        case 0x21fbc8u: goto label_21fbc8;
        case 0x21fbccu: goto label_21fbcc;
        case 0x21fbd0u: goto label_21fbd0;
        case 0x21fbd4u: goto label_21fbd4;
        case 0x21fbd8u: goto label_21fbd8;
        case 0x21fbdcu: goto label_21fbdc;
        case 0x21fbe0u: goto label_21fbe0;
        case 0x21fbe4u: goto label_21fbe4;
        case 0x21fbe8u: goto label_21fbe8;
        default: break;
    }

    ctx->pc = 0x21f908u;

label_21f908:
    // 0x21f908: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21f908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_21f90c:
    // 0x21f90c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_21f910:
    // 0x21f910: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_21f914:
    // 0x21f914: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21f914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f918:
    // 0x21f918: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21f918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_21f91c:
    // 0x21f91c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21f91cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f920:
    // 0x21f920: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_21f924:
    // 0x21f924: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21f924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f928:
    // 0x21f928: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_21f92c:
    // 0x21f92c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21f92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f930:
    // 0x21f930: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_21f934:
    // 0x21f934: 0xc087c18  jal         func_21F060
label_21f938:
    if (ctx->pc == 0x21F938u) {
        ctx->pc = 0x21F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F934u;
        // 0x21f938: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F93Cu;
        goto label_21f93c;
    }
    ctx->pc = 0x21F934u;
    SET_GPR_U32(ctx, 31, 0x21F93Cu);
    ctx->pc = 0x21F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F934u;
    // 0x21f938: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x21F934u, 0x21F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F93Cu;
label_21f93c:
    // 0x21f93c: 0xc087de0  jal         func_21F780
label_21f940:
    if (ctx->pc == 0x21F940u) {
        ctx->pc = 0x21F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F93Cu;
        // 0x21f940: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F944u;
        goto label_21f944;
    }
    ctx->pc = 0x21F93Cu;
    SET_GPR_U32(ctx, 31, 0x21F944u);
    ctx->pc = 0x21F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F93Cu;
    // 0x21f940: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F780u, 0x21F93Cu, 0x21F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F944u;
label_21f944:
    // 0x21f944: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x21f944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_21f948:
    // 0x21f948: 0x18800087  blez        $a0, . + 4 + (0x87 << 2)
label_21f94c:
    if (ctx->pc == 0x21F94Cu) {
        ctx->pc = 0x21F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F948u;
        // 0x21f94c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F950u;
        goto label_21f950;
    }
    ctx->pc = 0x21F948u;
    {
        const bool branch_taken_0x21f948 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x21F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F948u;
        // 0x21f94c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f948) {
            ctx->pc = 0x21FB68u;
            goto label_21fb68;
        }
    }
    ctx->pc = 0x21F950u;
label_21f950:
    // 0x21f950: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x21f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_21f954:
    // 0x21f954: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x21f954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21f958:
    // 0x21f958: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x21f958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21f95c:
    // 0x21f95c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21f960:
    // 0x21f960: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x21f960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_21f964:
    // 0x21f964: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_21f968:
    if (ctx->pc == 0x21F968u) {
        ctx->pc = 0x21F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F964u;
        // 0x21f968: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F96Cu;
        goto label_21f96c;
    }
    ctx->pc = 0x21F964u;
    {
        const bool branch_taken_0x21f964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F964u;
        // 0x21f968: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f964) {
            ctx->pc = 0x21FB58u;
            goto label_21fb58;
        }
    }
    ctx->pc = 0x21F96Cu;
label_21f96c:
    // 0x21f96c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21f970:
    // 0x21f970: 0x24420a50  addiu       $v0, $v0, 0xA50
    ctx->pc = 0x21f970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
label_21f974:
    // 0x21f974: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21f978:
    // 0x21f978: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21f97c:
    // 0x21f97c: 0x800008  jr          $a0
label_21f980:
    if (ctx->pc == 0x21F980u) {
        ctx->pc = 0x21F984u;
        goto label_21f984;
    }
    ctx->pc = 0x21F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F984u: goto label_21f984;
            case 0x21F98Cu: goto label_21f98c;
            case 0x21F9B0u: goto label_21f9b0;
            case 0x21F9D4u: goto label_21f9d4;
            case 0x21F9F4u: goto label_21f9f4;
            case 0x21FA14u: goto label_21fa14;
            case 0x21FA3Cu: goto label_21fa3c;
            case 0x21FA60u: goto label_21fa60;
            case 0x21FA8Cu: goto label_21fa8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F97Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21F984u;
label_21f984:
    // 0x21f984: 0x10000045  b           . + 4 + (0x45 << 2)
label_21f988:
    if (ctx->pc == 0x21F988u) {
        ctx->pc = 0x21F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F984u;
        // 0x21f988: 0x8f879da8  lw          $a3, -0x6258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F98Cu;
        goto label_21f98c;
    }
    ctx->pc = 0x21F984u;
    {
        const bool branch_taken_0x21f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F984u;
        // 0x21f988: 0x8f879da8  lw          $a3, -0x6258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f984) {
            ctx->pc = 0x21FA9Cu;
            goto label_21fa9c;
        }
    }
    ctx->pc = 0x21F98Cu;
label_21f98c:
    // 0x21f98c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21f990:
    // 0x21f990: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x21f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_21f994:
    // 0x21f994: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x21f994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_21f998:
    // 0x21f998: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x21f998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21f99c:
    // 0x21f99c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21f9a0:
    // 0x21f9a0: 0xc0878dc  jal         func_21E370
label_21f9a4:
    if (ctx->pc == 0x21F9A4u) {
        ctx->pc = 0x21F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9A0u;
        // 0x21f9a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9A8u;
        goto label_21f9a8;
    }
    ctx->pc = 0x21F9A0u;
    SET_GPR_U32(ctx, 31, 0x21F9A8u);
    ctx->pc = 0x21F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9A0u;
    // 0x21f9a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E370u, 0x21F9A0u, 0x21F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9A8u;
label_21f9a8:
    // 0x21f9a8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_21f9ac:
    if (ctx->pc == 0x21F9ACu) {
        ctx->pc = 0x21F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9A8u;
        // 0x21f9ac: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9B0u;
        goto label_21f9b0;
    }
    ctx->pc = 0x21F9A8u;
    {
        const bool branch_taken_0x21f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9A8u;
        // 0x21f9ac: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9a8) {
            ctx->pc = 0x21FA9Cu;
            goto label_21fa9c;
        }
    }
    ctx->pc = 0x21F9B0u;
label_21f9b0:
    // 0x21f9b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21f9b4:
    // 0x21f9b4: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x21f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_21f9b8:
    // 0x21f9b8: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x21f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_21f9bc:
    // 0x21f9bc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x21f9bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21f9c0:
    // 0x21f9c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21f9c4:
    // 0x21f9c4: 0xc0878c8  jal         func_21E320
label_21f9c8:
    if (ctx->pc == 0x21F9C8u) {
        ctx->pc = 0x21F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9C4u;
        // 0x21f9c8: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9CCu;
        goto label_21f9cc;
    }
    ctx->pc = 0x21F9C4u;
    SET_GPR_U32(ctx, 31, 0x21F9CCu);
    ctx->pc = 0x21F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9C4u;
    // 0x21f9c8: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E320u, 0x21F9C4u, 0x21F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9CCu;
label_21f9cc:
    // 0x21f9cc: 0x10000033  b           . + 4 + (0x33 << 2)
label_21f9d0:
    if (ctx->pc == 0x21F9D0u) {
        ctx->pc = 0x21F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9CCu;
        // 0x21f9d0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9D4u;
        goto label_21f9d4;
    }
    ctx->pc = 0x21F9CCu;
    {
        const bool branch_taken_0x21f9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9CCu;
        // 0x21f9d0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9cc) {
            ctx->pc = 0x21FA9Cu;
            goto label_21fa9c;
        }
    }
    ctx->pc = 0x21F9D4u;
label_21f9d4:
    // 0x21f9d4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x21f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21f9d8:
    // 0x21f9d8: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x21f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_21f9dc:
    // 0x21f9dc: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x21f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_21f9e0:
    // 0x21f9e0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x21f9e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_21f9e4:
    // 0x21f9e4: 0xc0a23da  jal         func_288F68
label_21f9e8:
    if (ctx->pc == 0x21F9E8u) {
        ctx->pc = 0x21F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9E4u;
        // 0x21f9e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9ECu;
        goto label_21f9ec;
    }
    ctx->pc = 0x21F9E4u;
    SET_GPR_U32(ctx, 31, 0x21F9ECu);
    ctx->pc = 0x21F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9E4u;
    // 0x21f9e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F68u, 0x21F9E4u, 0x21F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9ECu;
label_21f9ec:
    // 0x21f9ec: 0x1000002b  b           . + 4 + (0x2B << 2)
label_21f9f0:
    if (ctx->pc == 0x21F9F0u) {
        ctx->pc = 0x21F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9ECu;
        // 0x21f9f0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9F4u;
        goto label_21f9f4;
    }
    ctx->pc = 0x21F9ECu;
    {
        const bool branch_taken_0x21f9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9ECu;
        // 0x21f9f0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9ec) {
            ctx->pc = 0x21FA9Cu;
            goto label_21fa9c;
        }
    }
    ctx->pc = 0x21F9F4u;
label_21f9f4:
    // 0x21f9f4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x21f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21f9f8:
    // 0x21f9f8: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x21f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_21f9fc:
    // 0x21f9fc: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x21f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_21fa00:
    // 0x21fa00: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x21fa00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_21fa04:
    // 0x21fa04: 0xc0a240a  jal         func_289028
label_21fa08:
    if (ctx->pc == 0x21FA08u) {
        ctx->pc = 0x21FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA04u;
        // 0x21fa08: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA0Cu;
        goto label_21fa0c;
    }
    ctx->pc = 0x21FA04u;
    SET_GPR_U32(ctx, 31, 0x21FA0Cu);
    ctx->pc = 0x21FA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA04u;
    // 0x21fa08: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289028u, 0x21FA04u, 0x21FA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA0Cu;
label_21fa0c:
    // 0x21fa0c: 0x10000023  b           . + 4 + (0x23 << 2)
label_21fa10:
    if (ctx->pc == 0x21FA10u) {
        ctx->pc = 0x21FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA0Cu;
        // 0x21fa10: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA14u;
        goto label_21fa14;
    }
    ctx->pc = 0x21FA0Cu;
    {
        const bool branch_taken_0x21fa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA0Cu;
        // 0x21fa10: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa0c) {
            ctx->pc = 0x21FA9Cu;
            goto label_21fa9c;
        }
    }
    ctx->pc = 0x21FA14u;
label_21fa14:
    // 0x21fa14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x21fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21fa18:
    // 0x21fa18: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x21fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_21fa1c:
    // 0x21fa1c: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x21fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_21fa20:
    // 0x21fa20: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x21fa20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_21fa24:
    // 0x21fa24: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x21fa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
label_21fa28:
    // 0x21fa28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21fa28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21fa2c:
    // 0x21fa2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21fa30:
    // 0x21fa30: 0x8c620bcc  lw          $v0, 0xBCC($v1)
    ctx->pc = 0x21fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3020)));
label_21fa34:
    // 0x21fa34: 0x10000010  b           . + 4 + (0x10 << 2)
label_21fa38:
    if (ctx->pc == 0x21FA38u) {
        ctx->pc = 0x21FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA34u;
        // 0x21fa38: 0xc4400208  lwc1        $f0, 0x208($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA3Cu;
        goto label_21fa3c;
    }
    ctx->pc = 0x21FA34u;
    {
        const bool branch_taken_0x21fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA34u;
        // 0x21fa38: 0xc4400208  lwc1        $f0, 0x208($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa34) {
            ctx->pc = 0x21FA78u;
            goto label_21fa78;
        }
    }
    ctx->pc = 0x21FA3Cu;
label_21fa3c:
    // 0x21fa3c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21fa40:
    // 0x21fa40: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x21fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_21fa44:
    // 0x21fa44: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x21fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_21fa48:
    // 0x21fa48: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x21fa48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21fa4c:
    // 0x21fa4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21fa50:
    // 0x21fa50: 0xc0a241e  jal         func_289078
label_21fa54:
    if (ctx->pc == 0x21FA54u) {
        ctx->pc = 0x21FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA50u;
        // 0x21fa54: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA58u;
        goto label_21fa58;
    }
    ctx->pc = 0x21FA50u;
    SET_GPR_U32(ctx, 31, 0x21FA58u);
    ctx->pc = 0x21FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA50u;
    // 0x21fa54: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x21FA50u, 0x21FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA58u;
label_21fa58:
    // 0x21fa58: 0x10000010  b           . + 4 + (0x10 << 2)
label_21fa5c:
    if (ctx->pc == 0x21FA5Cu) {
        ctx->pc = 0x21FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA58u;
        // 0x21fa5c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA60u;
        goto label_21fa60;
    }
    ctx->pc = 0x21FA58u;
    {
        const bool branch_taken_0x21fa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA58u;
        // 0x21fa5c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa58) {
            ctx->pc = 0x21FA9Cu;
            goto label_21fa9c;
        }
    }
    ctx->pc = 0x21FA60u;
label_21fa60:
    // 0x21fa60: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x21fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21fa64:
    // 0x21fa64: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x21fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_21fa68:
    // 0x21fa68: 0xc088fba  jal         func_223EE8
label_21fa6c:
    if (ctx->pc == 0x21FA6Cu) {
        ctx->pc = 0x21FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA68u;
        // 0x21fa6c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA70u;
        goto label_21fa70;
    }
    ctx->pc = 0x21FA68u;
    SET_GPR_U32(ctx, 31, 0x21FA70u);
    ctx->pc = 0x21FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA68u;
    // 0x21fa6c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x21FA68u, 0x21FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA70u;
label_21fa70:
    // 0x21fa70: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x21fa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
label_21fa74:
    // 0x21fa74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21fa74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21fa78:
    // 0x21fa78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21fa78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_21fa7c:
    // 0x21fa7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21fa7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_21fa80:
    // 0x21fa80: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x21fa80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_21fa84:
    // 0x21fa84: 0x10000006  b           . + 4 + (0x6 << 2)
label_21fa88:
    if (ctx->pc == 0x21FA88u) {
        ctx->pc = 0x21FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA84u;
        // 0x21fa88: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA8Cu;
        goto label_21fa8c;
    }
    ctx->pc = 0x21FA84u;
    {
        const bool branch_taken_0x21fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA84u;
        // 0x21fa88: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa84) {
            ctx->pc = 0x21FAA0u;
            goto label_21faa0;
        }
    }
    ctx->pc = 0x21FA8Cu;
label_21fa8c:
    // 0x21fa8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21fa90:
    // 0x21fa90: 0x40f809  jalr        $v0
label_21fa94:
    if (ctx->pc == 0x21FA94u) {
        ctx->pc = 0x21FA98u;
        goto label_21fa98;
    }
    ctx->pc = 0x21FA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21FA98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA90u, 0x21FA98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21FA98u;
label_21fa98:
    // 0x21fa98: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x21fa98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21fa9c:
    // 0x21fa9c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x21fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_21faa0:
    // 0x21faa0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x21faa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_21faa4:
    // 0x21faa4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_21faa8:
    if (ctx->pc == 0x21FAA8u) {
        ctx->pc = 0x21FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAA4u;
        // 0x21faa8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAACu;
        goto label_21faac;
    }
    ctx->pc = 0x21FAA4u;
    {
        const bool branch_taken_0x21faa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAA4u;
        // 0x21faa8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faa4) {
            ctx->pc = 0x21FB54u;
            goto label_21fb54;
        }
    }
    ctx->pc = 0x21FAACu;
label_21faac:
    // 0x21faac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21faacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21fab0:
    // 0x21fab0: 0x24420a80  addiu       $v0, $v0, 0xA80
    ctx->pc = 0x21fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
label_21fab4:
    // 0x21fab4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21fab8:
    // 0x21fab8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21fabc:
    // 0x21fabc: 0x800008  jr          $a0
label_21fac0:
    if (ctx->pc == 0x21FAC0u) {
        ctx->pc = 0x21FAC4u;
        goto label_21fac4;
    }
    ctx->pc = 0x21FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FAC4u: goto label_21fac4;
            case 0x21FAD0u: goto label_21fad0;
            case 0x21FADCu: goto label_21fadc;
            case 0x21FAECu: goto label_21faec;
            case 0x21FAF8u: goto label_21faf8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FABCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21FAC4u;
label_21fac4:
    // 0x21fac4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21fac8:
    // 0x21fac8: 0x1000000e  b           . + 4 + (0xE << 2)
label_21facc:
    if (ctx->pc == 0x21FACCu) {
        ctx->pc = 0x21FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAC8u;
        // 0x21facc: 0xe2302a  slt         $a2, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAD0u;
        goto label_21fad0;
    }
    ctx->pc = 0x21FAC8u;
    {
        const bool branch_taken_0x21fac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAC8u;
        // 0x21facc: 0xe2302a  slt         $a2, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fac8) {
            ctx->pc = 0x21FB04u;
            goto label_21fb04;
        }
    }
    ctx->pc = 0x21FAD0u;
label_21fad0:
    // 0x21fad0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21fad4:
    // 0x21fad4: 0x1000000a  b           . + 4 + (0xA << 2)
label_21fad8:
    if (ctx->pc == 0x21FAD8u) {
        ctx->pc = 0x21FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAD4u;
        // 0x21fad8: 0x47102a  slt         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FADCu;
        goto label_21fadc;
    }
    ctx->pc = 0x21FAD4u;
    {
        const bool branch_taken_0x21fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAD4u;
        // 0x21fad8: 0x47102a  slt         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fad4) {
            ctx->pc = 0x21FB00u;
            goto label_21fb00;
        }
    }
    ctx->pc = 0x21FADCu;
label_21fadc:
    // 0x21fadc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21fae0:
    // 0x21fae0: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x21fae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
label_21fae4:
    // 0x21fae4: 0x10000007  b           . + 4 + (0x7 << 2)
label_21fae8:
    if (ctx->pc == 0x21FAE8u) {
        ctx->pc = 0x21FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAE4u;
        // 0x21fae8: 0x2c460001  sltiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAECu;
        goto label_21faec;
    }
    ctx->pc = 0x21FAE4u;
    {
        const bool branch_taken_0x21fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAE4u;
        // 0x21fae8: 0x2c460001  sltiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fae4) {
            ctx->pc = 0x21FB04u;
            goto label_21fb04;
        }
    }
    ctx->pc = 0x21FAECu;
label_21faec:
    // 0x21faec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21faf0:
    // 0x21faf0: 0x10000004  b           . + 4 + (0x4 << 2)
label_21faf4:
    if (ctx->pc == 0x21FAF4u) {
        ctx->pc = 0x21FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAF0u;
        // 0x21faf4: 0x47302a  slt         $a2, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAF8u;
        goto label_21faf8;
    }
    ctx->pc = 0x21FAF0u;
    {
        const bool branch_taken_0x21faf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAF0u;
        // 0x21faf4: 0x47302a  slt         $a2, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faf0) {
            ctx->pc = 0x21FB04u;
            goto label_21fb04;
        }
    }
    ctx->pc = 0x21FAF8u;
label_21faf8:
    // 0x21faf8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21fafc:
    // 0x21fafc: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x21fafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21fb00:
    // 0x21fb00: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x21fb00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21fb04:
    // 0x21fb04: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x21fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_21fb08:
    // 0x21fb08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21fb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fb0c:
    // 0x21fb0c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_21fb10:
    if (ctx->pc == 0x21FB10u) {
        ctx->pc = 0x21FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB0Cu;
        // 0x21fb10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB14u;
        goto label_21fb14;
    }
    ctx->pc = 0x21FB0Cu;
    {
        const bool branch_taken_0x21fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb0c) {
            ctx->pc = 0x21FB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FB0Cu;
            // 0x21fb10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FB14u;
            goto label_21fb14;
        }
    }
    ctx->pc = 0x21FB14u;
label_21fb14:
    // 0x21fb14: 0x266200b  movn        $a0, $s3, $a2
    ctx->pc = 0x21fb14u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
label_21fb18:
    // 0x21fb18: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x21fb18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_21fb1c:
    // 0x21fb1c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x21fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_21fb20:
    // 0x21fb20: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x21fb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_21fb24:
    // 0x21fb24: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_21fb28:
    if (ctx->pc == 0x21FB28u) {
        ctx->pc = 0x21FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB24u;
        // 0x21fb28: 0x82980b  movn        $s3, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB2Cu;
        goto label_21fb2c;
    }
    ctx->pc = 0x21FB24u;
    {
        const bool branch_taken_0x21fb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB24u;
        // 0x21fb28: 0x82980b  movn        $s3, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb24) {
            ctx->pc = 0x21FB30u;
            goto label_21fb30;
        }
    }
    ctx->pc = 0x21FB2Cu;
label_21fb2c:
    // 0x21fb2c: 0xaf87b710  sw          $a3, -0x48F0($gp)
    ctx->pc = 0x21fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948624), GPR_U32(ctx, 7));
label_21fb30:
    // 0x21fb30: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x21fb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_21fb34:
    // 0x21fb34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21fb38:
    if (ctx->pc == 0x21FB38u) {
        ctx->pc = 0x21FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB34u;
        // 0x21fb38: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB3Cu;
        goto label_21fb3c;
    }
    ctx->pc = 0x21FB34u;
    {
        const bool branch_taken_0x21fb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB34u;
        // 0x21fb38: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb34) {
            ctx->pc = 0x21FB44u;
            goto label_21fb44;
        }
    }
    ctx->pc = 0x21FB3Cu;
label_21fb3c:
    // 0x21fb3c: 0x54c00029  bnel        $a2, $zero, . + 4 + (0x29 << 2)
label_21fb40:
    if (ctx->pc == 0x21FB40u) {
        ctx->pc = 0x21FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB3Cu;
        // 0x21fb40: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB44u;
        goto label_21fb44;
    }
    ctx->pc = 0x21FB3Cu;
    {
        const bool branch_taken_0x21fb3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fb3c) {
            ctx->pc = 0x21FB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FB3Cu;
            // 0x21fb40: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FBE4u;
            goto label_21fbe4;
        }
    }
    ctx->pc = 0x21FB44u;
label_21fb44:
    // 0x21fb44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_21fb48:
    if (ctx->pc == 0x21FB48u) {
        ctx->pc = 0x21FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB44u;
        // 0x21fb48: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB4Cu;
        goto label_21fb4c;
    }
    ctx->pc = 0x21FB44u;
    {
        const bool branch_taken_0x21fb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb44) {
            ctx->pc = 0x21FB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FB44u;
            // 0x21fb48: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FB58u;
            goto label_21fb58;
        }
    }
    ctx->pc = 0x21FB4Cu;
label_21fb4c:
    // 0x21fb4c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21fb4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21fb50:
    // 0x21fb50: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x21fb50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fb54:
    // 0x21fb54: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x21fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_21fb58:
    // 0x21fb58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21fb58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21fb5c:
    // 0x21fb5c: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x21fb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21fb60:
    // 0x21fb60: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
label_21fb64:
    if (ctx->pc == 0x21FB64u) {
        ctx->pc = 0x21FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB60u;
        // 0x21fb64: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB68u;
        goto label_21fb68;
    }
    ctx->pc = 0x21FB60u;
    {
        const bool branch_taken_0x21fb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB60u;
        // 0x21fb64: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb60) {
            ctx->pc = 0x21F950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f950;
        }
    }
    ctx->pc = 0x21FB68u;
label_21fb68:
    // 0x21fb68: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_21fb6c:
    if (ctx->pc == 0x21FB6Cu) {
        ctx->pc = 0x21FB70u;
        goto label_21fb70;
    }
    ctx->pc = 0x21FB68u;
    {
        const bool branch_taken_0x21fb68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb68) {
            ctx->pc = 0x21FBA0u;
            goto label_21fba0;
        }
    }
    ctx->pc = 0x21FB70u;
label_21fb70:
    // 0x21fb70: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_21fb74:
    if (ctx->pc == 0x21FB74u) {
        ctx->pc = 0x21FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB70u;
        // 0x21fb74: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB78u;
        goto label_21fb78;
    }
    ctx->pc = 0x21FB70u;
    {
        const bool branch_taken_0x21fb70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB70u;
        // 0x21fb74: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb70) {
            ctx->pc = 0x21FB80u;
            goto label_21fb80;
        }
    }
    ctx->pc = 0x21FB78u;
label_21fb78:
    // 0x21fb78: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_21fb7c:
    if (ctx->pc == 0x21FB7Cu) {
        ctx->pc = 0x21FB80u;
        goto label_21fb80;
    }
    ctx->pc = 0x21FB78u;
    {
        const bool branch_taken_0x21fb78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb78) {
            ctx->pc = 0x21FB98u;
            goto label_21fb98;
        }
    }
    ctx->pc = 0x21FB80u;
label_21fb80:
    // 0x21fb80: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_21fb84:
    // 0x21fb84: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x21fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
label_21fb88:
    // 0x21fb88: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x21fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_21fb8c:
    // 0x21fb8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x21fb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_21fb90:
    // 0x21fb90: 0xc0874d2  jal         func_21D348
label_21fb94:
    if (ctx->pc == 0x21FB94u) {
        ctx->pc = 0x21FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB90u;
        // 0x21fb94: 0xac430050  sw          $v1, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB98u;
        goto label_21fb98;
    }
    ctx->pc = 0x21FB90u;
    SET_GPR_U32(ctx, 31, 0x21FB98u);
    ctx->pc = 0x21FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB90u;
    // 0x21fb94: 0xac430050  sw          $v1, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D348u, 0x21FB90u, 0x21FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB98u;
label_21fb98:
    // 0x21fb98: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
label_21fb9c:
    if (ctx->pc == 0x21FB9Cu) {
        ctx->pc = 0x21FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB98u;
        // 0x21fb9c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBA0u;
        goto label_21fba0;
    }
    ctx->pc = 0x21FB98u;
    {
        const bool branch_taken_0x21fb98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB98u;
        // 0x21fb9c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb98) {
            ctx->pc = 0x21FBC4u;
            goto label_21fbc4;
        }
    }
    ctx->pc = 0x21FBA0u;
label_21fba0:
    // 0x21fba0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_21fba4:
    if (ctx->pc == 0x21FBA4u) {
        ctx->pc = 0x21FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBA0u;
        // 0x21fba4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBA8u;
        goto label_21fba8;
    }
    ctx->pc = 0x21FBA0u;
    {
        const bool branch_taken_0x21fba0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBA0u;
        // 0x21fba4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fba0) {
            ctx->pc = 0x21FBC0u;
            goto label_21fbc0;
        }
    }
    ctx->pc = 0x21FBA8u;
label_21fba8:
    // 0x21fba8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x21fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_21fbac:
    // 0x21fbac: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x21fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
label_21fbb0:
    // 0x21fbb0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x21fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_21fbb4:
    // 0x21fbb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x21fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_21fbb8:
    // 0x21fbb8: 0xc0874d2  jal         func_21D348
label_21fbbc:
    if (ctx->pc == 0x21FBBCu) {
        ctx->pc = 0x21FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBB8u;
        // 0x21fbbc: 0xac430050  sw          $v1, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBC0u;
        goto label_21fbc0;
    }
    ctx->pc = 0x21FBB8u;
    SET_GPR_U32(ctx, 31, 0x21FBC0u);
    ctx->pc = 0x21FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBB8u;
    // 0x21fbbc: 0xac430050  sw          $v1, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D348u, 0x21FBB8u, 0x21FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBC0u;
label_21fbc0:
    // 0x21fbc0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21fbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21fbc4:
    // 0x21fbc4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21fbc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21fbc8:
    // 0x21fbc8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21fbc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21fbcc:
    // 0x21fbcc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21fbccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21fbd0:
    // 0x21fbd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21fbd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21fbd4:
    // 0x21fbd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21fbd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21fbd8:
    // 0x21fbd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21fbdc:
    // 0x21fbdc: 0x8087e02  j           func_21F808
label_21fbe0:
    if (ctx->pc == 0x21FBE0u) {
        ctx->pc = 0x21FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBDCu;
        // 0x21fbe0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBE4u;
        goto label_21fbe4;
    }
    ctx->pc = 0x21FBDCu;
    ctx->pc = 0x21FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBDCu;
    // 0x21fbe0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F808u;
    challengeMessagesTick_0x21f808(rdram, ctx, runtime); return;
    ctx->pc = 0x21FBE4u;
label_21fbe4:
    // 0x21fbe4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_21fbe8:
    if (ctx->pc == 0x21FBE8u) {
        ctx->pc = 0x21FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBE4u;
        // 0x21fbe8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FBECu;
        goto label_fallthrough_0x21fbe4;
    }
    ctx->pc = 0x21FBE4u;
    {
        const bool branch_taken_0x21fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBE4u;
        // 0x21fbe8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbe4) {
            ctx->pc = 0x21FB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fb68;
        }
    }
label_fallthrough_0x21fbe4:
    ctx->pc = 0x21FBECu;
}
