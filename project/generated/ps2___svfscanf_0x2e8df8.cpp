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

// Function: __svfscanf
// Address: 0x2e8df8 - 0x2e9900
void ps2___svfscanf_0x2e8df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___svfscanf_0x2e8df8");
#endif

    switch (ctx->pc) {
        case 0x2e8df8u: goto label_2e8df8;
        case 0x2e8dfcu: goto label_2e8dfc;
        case 0x2e8e00u: goto label_2e8e00;
        case 0x2e8e04u: goto label_2e8e04;
        case 0x2e8e08u: goto label_2e8e08;
        case 0x2e8e0cu: goto label_2e8e0c;
        case 0x2e8e10u: goto label_2e8e10;
        case 0x2e8e14u: goto label_2e8e14;
        case 0x2e8e18u: goto label_2e8e18;
        case 0x2e8e1cu: goto label_2e8e1c;
        case 0x2e8e20u: goto label_2e8e20;
        case 0x2e8e24u: goto label_2e8e24;
        case 0x2e8e28u: goto label_2e8e28;
        case 0x2e8e2cu: goto label_2e8e2c;
        case 0x2e8e30u: goto label_2e8e30;
        case 0x2e8e34u: goto label_2e8e34;
        case 0x2e8e38u: goto label_2e8e38;
        case 0x2e8e3cu: goto label_2e8e3c;
        case 0x2e8e40u: goto label_2e8e40;
        case 0x2e8e44u: goto label_2e8e44;
        case 0x2e8e48u: goto label_2e8e48;
        case 0x2e8e4cu: goto label_2e8e4c;
        case 0x2e8e50u: goto label_2e8e50;
        case 0x2e8e54u: goto label_2e8e54;
        case 0x2e8e58u: goto label_2e8e58;
        case 0x2e8e5cu: goto label_2e8e5c;
        case 0x2e8e60u: goto label_2e8e60;
        case 0x2e8e64u: goto label_2e8e64;
        case 0x2e8e68u: goto label_2e8e68;
        case 0x2e8e6cu: goto label_2e8e6c;
        case 0x2e8e70u: goto label_2e8e70;
        case 0x2e8e74u: goto label_2e8e74;
        case 0x2e8e78u: goto label_2e8e78;
        case 0x2e8e7cu: goto label_2e8e7c;
        case 0x2e8e80u: goto label_2e8e80;
        case 0x2e8e84u: goto label_2e8e84;
        case 0x2e8e88u: goto label_2e8e88;
        case 0x2e8e8cu: goto label_2e8e8c;
        case 0x2e8e90u: goto label_2e8e90;
        case 0x2e8e94u: goto label_2e8e94;
        case 0x2e8e98u: goto label_2e8e98;
        case 0x2e8e9cu: goto label_2e8e9c;
        case 0x2e8ea0u: goto label_2e8ea0;
        case 0x2e8ea4u: goto label_2e8ea4;
        case 0x2e8ea8u: goto label_2e8ea8;
        case 0x2e8eacu: goto label_2e8eac;
        case 0x2e8eb0u: goto label_2e8eb0;
        case 0x2e8eb4u: goto label_2e8eb4;
        case 0x2e8eb8u: goto label_2e8eb8;
        case 0x2e8ebcu: goto label_2e8ebc;
        case 0x2e8ec0u: goto label_2e8ec0;
        case 0x2e8ec4u: goto label_2e8ec4;
        case 0x2e8ec8u: goto label_2e8ec8;
        case 0x2e8eccu: goto label_2e8ecc;
        case 0x2e8ed0u: goto label_2e8ed0;
        case 0x2e8ed4u: goto label_2e8ed4;
        case 0x2e8ed8u: goto label_2e8ed8;
        case 0x2e8edcu: goto label_2e8edc;
        case 0x2e8ee0u: goto label_2e8ee0;
        case 0x2e8ee4u: goto label_2e8ee4;
        case 0x2e8ee8u: goto label_2e8ee8;
        case 0x2e8eecu: goto label_2e8eec;
        case 0x2e8ef0u: goto label_2e8ef0;
        case 0x2e8ef4u: goto label_2e8ef4;
        case 0x2e8ef8u: goto label_2e8ef8;
        case 0x2e8efcu: goto label_2e8efc;
        case 0x2e8f00u: goto label_2e8f00;
        case 0x2e8f04u: goto label_2e8f04;
        case 0x2e8f08u: goto label_2e8f08;
        case 0x2e8f0cu: goto label_2e8f0c;
        case 0x2e8f10u: goto label_2e8f10;
        case 0x2e8f14u: goto label_2e8f14;
        case 0x2e8f18u: goto label_2e8f18;
        case 0x2e8f1cu: goto label_2e8f1c;
        case 0x2e8f20u: goto label_2e8f20;
        case 0x2e8f24u: goto label_2e8f24;
        case 0x2e8f28u: goto label_2e8f28;
        case 0x2e8f2cu: goto label_2e8f2c;
        case 0x2e8f30u: goto label_2e8f30;
        case 0x2e8f34u: goto label_2e8f34;
        case 0x2e8f38u: goto label_2e8f38;
        case 0x2e8f3cu: goto label_2e8f3c;
        case 0x2e8f40u: goto label_2e8f40;
        case 0x2e8f44u: goto label_2e8f44;
        case 0x2e8f48u: goto label_2e8f48;
        case 0x2e8f4cu: goto label_2e8f4c;
        case 0x2e8f50u: goto label_2e8f50;
        case 0x2e8f54u: goto label_2e8f54;
        case 0x2e8f58u: goto label_2e8f58;
        case 0x2e8f5cu: goto label_2e8f5c;
        case 0x2e8f60u: goto label_2e8f60;
        case 0x2e8f64u: goto label_2e8f64;
        case 0x2e8f68u: goto label_2e8f68;
        case 0x2e8f6cu: goto label_2e8f6c;
        case 0x2e8f70u: goto label_2e8f70;
        case 0x2e8f74u: goto label_2e8f74;
        case 0x2e8f78u: goto label_2e8f78;
        case 0x2e8f7cu: goto label_2e8f7c;
        case 0x2e8f80u: goto label_2e8f80;
        case 0x2e8f84u: goto label_2e8f84;
        case 0x2e8f88u: goto label_2e8f88;
        case 0x2e8f8cu: goto label_2e8f8c;
        case 0x2e8f90u: goto label_2e8f90;
        case 0x2e8f94u: goto label_2e8f94;
        case 0x2e8f98u: goto label_2e8f98;
        case 0x2e8f9cu: goto label_2e8f9c;
        case 0x2e8fa0u: goto label_2e8fa0;
        case 0x2e8fa4u: goto label_2e8fa4;
        case 0x2e8fa8u: goto label_2e8fa8;
        case 0x2e8facu: goto label_2e8fac;
        case 0x2e8fb0u: goto label_2e8fb0;
        case 0x2e8fb4u: goto label_2e8fb4;
        case 0x2e8fb8u: goto label_2e8fb8;
        case 0x2e8fbcu: goto label_2e8fbc;
        case 0x2e8fc0u: goto label_2e8fc0;
        case 0x2e8fc4u: goto label_2e8fc4;
        case 0x2e8fc8u: goto label_2e8fc8;
        case 0x2e8fccu: goto label_2e8fcc;
        case 0x2e8fd0u: goto label_2e8fd0;
        case 0x2e8fd4u: goto label_2e8fd4;
        case 0x2e8fd8u: goto label_2e8fd8;
        case 0x2e8fdcu: goto label_2e8fdc;
        case 0x2e8fe0u: goto label_2e8fe0;
        case 0x2e8fe4u: goto label_2e8fe4;
        case 0x2e8fe8u: goto label_2e8fe8;
        case 0x2e8fecu: goto label_2e8fec;
        case 0x2e8ff0u: goto label_2e8ff0;
        case 0x2e8ff4u: goto label_2e8ff4;
        case 0x2e8ff8u: goto label_2e8ff8;
        case 0x2e8ffcu: goto label_2e8ffc;
        case 0x2e9000u: goto label_2e9000;
        case 0x2e9004u: goto label_2e9004;
        case 0x2e9008u: goto label_2e9008;
        case 0x2e900cu: goto label_2e900c;
        case 0x2e9010u: goto label_2e9010;
        case 0x2e9014u: goto label_2e9014;
        case 0x2e9018u: goto label_2e9018;
        case 0x2e901cu: goto label_2e901c;
        case 0x2e9020u: goto label_2e9020;
        case 0x2e9024u: goto label_2e9024;
        case 0x2e9028u: goto label_2e9028;
        case 0x2e902cu: goto label_2e902c;
        case 0x2e9030u: goto label_2e9030;
        case 0x2e9034u: goto label_2e9034;
        case 0x2e9038u: goto label_2e9038;
        case 0x2e903cu: goto label_2e903c;
        case 0x2e9040u: goto label_2e9040;
        case 0x2e9044u: goto label_2e9044;
        case 0x2e9048u: goto label_2e9048;
        case 0x2e904cu: goto label_2e904c;
        case 0x2e9050u: goto label_2e9050;
        case 0x2e9054u: goto label_2e9054;
        case 0x2e9058u: goto label_2e9058;
        case 0x2e905cu: goto label_2e905c;
        case 0x2e9060u: goto label_2e9060;
        case 0x2e9064u: goto label_2e9064;
        case 0x2e9068u: goto label_2e9068;
        case 0x2e906cu: goto label_2e906c;
        case 0x2e9070u: goto label_2e9070;
        case 0x2e9074u: goto label_2e9074;
        case 0x2e9078u: goto label_2e9078;
        case 0x2e907cu: goto label_2e907c;
        case 0x2e9080u: goto label_2e9080;
        case 0x2e9084u: goto label_2e9084;
        case 0x2e9088u: goto label_2e9088;
        case 0x2e908cu: goto label_2e908c;
        case 0x2e9090u: goto label_2e9090;
        case 0x2e9094u: goto label_2e9094;
        case 0x2e9098u: goto label_2e9098;
        case 0x2e909cu: goto label_2e909c;
        case 0x2e90a0u: goto label_2e90a0;
        case 0x2e90a4u: goto label_2e90a4;
        case 0x2e90a8u: goto label_2e90a8;
        case 0x2e90acu: goto label_2e90ac;
        case 0x2e90b0u: goto label_2e90b0;
        case 0x2e90b4u: goto label_2e90b4;
        case 0x2e90b8u: goto label_2e90b8;
        case 0x2e90bcu: goto label_2e90bc;
        case 0x2e90c0u: goto label_2e90c0;
        case 0x2e90c4u: goto label_2e90c4;
        case 0x2e90c8u: goto label_2e90c8;
        case 0x2e90ccu: goto label_2e90cc;
        case 0x2e90d0u: goto label_2e90d0;
        case 0x2e90d4u: goto label_2e90d4;
        case 0x2e90d8u: goto label_2e90d8;
        case 0x2e90dcu: goto label_2e90dc;
        case 0x2e90e0u: goto label_2e90e0;
        case 0x2e90e4u: goto label_2e90e4;
        case 0x2e90e8u: goto label_2e90e8;
        case 0x2e90ecu: goto label_2e90ec;
        case 0x2e90f0u: goto label_2e90f0;
        case 0x2e90f4u: goto label_2e90f4;
        case 0x2e90f8u: goto label_2e90f8;
        case 0x2e90fcu: goto label_2e90fc;
        case 0x2e9100u: goto label_2e9100;
        case 0x2e9104u: goto label_2e9104;
        case 0x2e9108u: goto label_2e9108;
        case 0x2e910cu: goto label_2e910c;
        case 0x2e9110u: goto label_2e9110;
        case 0x2e9114u: goto label_2e9114;
        case 0x2e9118u: goto label_2e9118;
        case 0x2e911cu: goto label_2e911c;
        case 0x2e9120u: goto label_2e9120;
        case 0x2e9124u: goto label_2e9124;
        case 0x2e9128u: goto label_2e9128;
        case 0x2e912cu: goto label_2e912c;
        case 0x2e9130u: goto label_2e9130;
        case 0x2e9134u: goto label_2e9134;
        case 0x2e9138u: goto label_2e9138;
        case 0x2e913cu: goto label_2e913c;
        case 0x2e9140u: goto label_2e9140;
        case 0x2e9144u: goto label_2e9144;
        case 0x2e9148u: goto label_2e9148;
        case 0x2e914cu: goto label_2e914c;
        case 0x2e9150u: goto label_2e9150;
        case 0x2e9154u: goto label_2e9154;
        case 0x2e9158u: goto label_2e9158;
        case 0x2e915cu: goto label_2e915c;
        case 0x2e9160u: goto label_2e9160;
        case 0x2e9164u: goto label_2e9164;
        case 0x2e9168u: goto label_2e9168;
        case 0x2e916cu: goto label_2e916c;
        case 0x2e9170u: goto label_2e9170;
        case 0x2e9174u: goto label_2e9174;
        case 0x2e9178u: goto label_2e9178;
        case 0x2e917cu: goto label_2e917c;
        case 0x2e9180u: goto label_2e9180;
        case 0x2e9184u: goto label_2e9184;
        case 0x2e9188u: goto label_2e9188;
        case 0x2e918cu: goto label_2e918c;
        case 0x2e9190u: goto label_2e9190;
        case 0x2e9194u: goto label_2e9194;
        case 0x2e9198u: goto label_2e9198;
        case 0x2e919cu: goto label_2e919c;
        case 0x2e91a0u: goto label_2e91a0;
        case 0x2e91a4u: goto label_2e91a4;
        case 0x2e91a8u: goto label_2e91a8;
        case 0x2e91acu: goto label_2e91ac;
        case 0x2e91b0u: goto label_2e91b0;
        case 0x2e91b4u: goto label_2e91b4;
        case 0x2e91b8u: goto label_2e91b8;
        case 0x2e91bcu: goto label_2e91bc;
        case 0x2e91c0u: goto label_2e91c0;
        case 0x2e91c4u: goto label_2e91c4;
        case 0x2e91c8u: goto label_2e91c8;
        case 0x2e91ccu: goto label_2e91cc;
        case 0x2e91d0u: goto label_2e91d0;
        case 0x2e91d4u: goto label_2e91d4;
        case 0x2e91d8u: goto label_2e91d8;
        case 0x2e91dcu: goto label_2e91dc;
        case 0x2e91e0u: goto label_2e91e0;
        case 0x2e91e4u: goto label_2e91e4;
        case 0x2e91e8u: goto label_2e91e8;
        case 0x2e91ecu: goto label_2e91ec;
        case 0x2e91f0u: goto label_2e91f0;
        case 0x2e91f4u: goto label_2e91f4;
        case 0x2e91f8u: goto label_2e91f8;
        case 0x2e91fcu: goto label_2e91fc;
        case 0x2e9200u: goto label_2e9200;
        case 0x2e9204u: goto label_2e9204;
        case 0x2e9208u: goto label_2e9208;
        case 0x2e920cu: goto label_2e920c;
        case 0x2e9210u: goto label_2e9210;
        case 0x2e9214u: goto label_2e9214;
        case 0x2e9218u: goto label_2e9218;
        case 0x2e921cu: goto label_2e921c;
        case 0x2e9220u: goto label_2e9220;
        case 0x2e9224u: goto label_2e9224;
        case 0x2e9228u: goto label_2e9228;
        case 0x2e922cu: goto label_2e922c;
        case 0x2e9230u: goto label_2e9230;
        case 0x2e9234u: goto label_2e9234;
        case 0x2e9238u: goto label_2e9238;
        case 0x2e923cu: goto label_2e923c;
        case 0x2e9240u: goto label_2e9240;
        case 0x2e9244u: goto label_2e9244;
        case 0x2e9248u: goto label_2e9248;
        case 0x2e924cu: goto label_2e924c;
        case 0x2e9250u: goto label_2e9250;
        case 0x2e9254u: goto label_2e9254;
        case 0x2e9258u: goto label_2e9258;
        case 0x2e925cu: goto label_2e925c;
        case 0x2e9260u: goto label_2e9260;
        case 0x2e9264u: goto label_2e9264;
        case 0x2e9268u: goto label_2e9268;
        case 0x2e926cu: goto label_2e926c;
        case 0x2e9270u: goto label_2e9270;
        case 0x2e9274u: goto label_2e9274;
        case 0x2e9278u: goto label_2e9278;
        case 0x2e927cu: goto label_2e927c;
        case 0x2e9280u: goto label_2e9280;
        case 0x2e9284u: goto label_2e9284;
        case 0x2e9288u: goto label_2e9288;
        case 0x2e928cu: goto label_2e928c;
        case 0x2e9290u: goto label_2e9290;
        case 0x2e9294u: goto label_2e9294;
        case 0x2e9298u: goto label_2e9298;
        case 0x2e929cu: goto label_2e929c;
        case 0x2e92a0u: goto label_2e92a0;
        case 0x2e92a4u: goto label_2e92a4;
        case 0x2e92a8u: goto label_2e92a8;
        case 0x2e92acu: goto label_2e92ac;
        case 0x2e92b0u: goto label_2e92b0;
        case 0x2e92b4u: goto label_2e92b4;
        case 0x2e92b8u: goto label_2e92b8;
        case 0x2e92bcu: goto label_2e92bc;
        case 0x2e92c0u: goto label_2e92c0;
        case 0x2e92c4u: goto label_2e92c4;
        case 0x2e92c8u: goto label_2e92c8;
        case 0x2e92ccu: goto label_2e92cc;
        case 0x2e92d0u: goto label_2e92d0;
        case 0x2e92d4u: goto label_2e92d4;
        case 0x2e92d8u: goto label_2e92d8;
        case 0x2e92dcu: goto label_2e92dc;
        case 0x2e92e0u: goto label_2e92e0;
        case 0x2e92e4u: goto label_2e92e4;
        case 0x2e92e8u: goto label_2e92e8;
        case 0x2e92ecu: goto label_2e92ec;
        case 0x2e92f0u: goto label_2e92f0;
        case 0x2e92f4u: goto label_2e92f4;
        case 0x2e92f8u: goto label_2e92f8;
        case 0x2e92fcu: goto label_2e92fc;
        case 0x2e9300u: goto label_2e9300;
        case 0x2e9304u: goto label_2e9304;
        case 0x2e9308u: goto label_2e9308;
        case 0x2e930cu: goto label_2e930c;
        case 0x2e9310u: goto label_2e9310;
        case 0x2e9314u: goto label_2e9314;
        case 0x2e9318u: goto label_2e9318;
        case 0x2e931cu: goto label_2e931c;
        case 0x2e9320u: goto label_2e9320;
        case 0x2e9324u: goto label_2e9324;
        case 0x2e9328u: goto label_2e9328;
        case 0x2e932cu: goto label_2e932c;
        case 0x2e9330u: goto label_2e9330;
        case 0x2e9334u: goto label_2e9334;
        case 0x2e9338u: goto label_2e9338;
        case 0x2e933cu: goto label_2e933c;
        case 0x2e9340u: goto label_2e9340;
        case 0x2e9344u: goto label_2e9344;
        case 0x2e9348u: goto label_2e9348;
        case 0x2e934cu: goto label_2e934c;
        case 0x2e9350u: goto label_2e9350;
        case 0x2e9354u: goto label_2e9354;
        case 0x2e9358u: goto label_2e9358;
        case 0x2e935cu: goto label_2e935c;
        case 0x2e9360u: goto label_2e9360;
        case 0x2e9364u: goto label_2e9364;
        case 0x2e9368u: goto label_2e9368;
        case 0x2e936cu: goto label_2e936c;
        case 0x2e9370u: goto label_2e9370;
        case 0x2e9374u: goto label_2e9374;
        case 0x2e9378u: goto label_2e9378;
        case 0x2e937cu: goto label_2e937c;
        case 0x2e9380u: goto label_2e9380;
        case 0x2e9384u: goto label_2e9384;
        case 0x2e9388u: goto label_2e9388;
        case 0x2e938cu: goto label_2e938c;
        case 0x2e9390u: goto label_2e9390;
        case 0x2e9394u: goto label_2e9394;
        case 0x2e9398u: goto label_2e9398;
        case 0x2e939cu: goto label_2e939c;
        case 0x2e93a0u: goto label_2e93a0;
        case 0x2e93a4u: goto label_2e93a4;
        case 0x2e93a8u: goto label_2e93a8;
        case 0x2e93acu: goto label_2e93ac;
        case 0x2e93b0u: goto label_2e93b0;
        case 0x2e93b4u: goto label_2e93b4;
        case 0x2e93b8u: goto label_2e93b8;
        case 0x2e93bcu: goto label_2e93bc;
        case 0x2e93c0u: goto label_2e93c0;
        case 0x2e93c4u: goto label_2e93c4;
        case 0x2e93c8u: goto label_2e93c8;
        case 0x2e93ccu: goto label_2e93cc;
        case 0x2e93d0u: goto label_2e93d0;
        case 0x2e93d4u: goto label_2e93d4;
        case 0x2e93d8u: goto label_2e93d8;
        case 0x2e93dcu: goto label_2e93dc;
        case 0x2e93e0u: goto label_2e93e0;
        case 0x2e93e4u: goto label_2e93e4;
        case 0x2e93e8u: goto label_2e93e8;
        case 0x2e93ecu: goto label_2e93ec;
        case 0x2e93f0u: goto label_2e93f0;
        case 0x2e93f4u: goto label_2e93f4;
        case 0x2e93f8u: goto label_2e93f8;
        case 0x2e93fcu: goto label_2e93fc;
        case 0x2e9400u: goto label_2e9400;
        case 0x2e9404u: goto label_2e9404;
        case 0x2e9408u: goto label_2e9408;
        case 0x2e940cu: goto label_2e940c;
        case 0x2e9410u: goto label_2e9410;
        case 0x2e9414u: goto label_2e9414;
        case 0x2e9418u: goto label_2e9418;
        case 0x2e941cu: goto label_2e941c;
        case 0x2e9420u: goto label_2e9420;
        case 0x2e9424u: goto label_2e9424;
        case 0x2e9428u: goto label_2e9428;
        case 0x2e942cu: goto label_2e942c;
        case 0x2e9430u: goto label_2e9430;
        case 0x2e9434u: goto label_2e9434;
        case 0x2e9438u: goto label_2e9438;
        case 0x2e943cu: goto label_2e943c;
        case 0x2e9440u: goto label_2e9440;
        case 0x2e9444u: goto label_2e9444;
        case 0x2e9448u: goto label_2e9448;
        case 0x2e944cu: goto label_2e944c;
        case 0x2e9450u: goto label_2e9450;
        case 0x2e9454u: goto label_2e9454;
        case 0x2e9458u: goto label_2e9458;
        case 0x2e945cu: goto label_2e945c;
        case 0x2e9460u: goto label_2e9460;
        case 0x2e9464u: goto label_2e9464;
        case 0x2e9468u: goto label_2e9468;
        case 0x2e946cu: goto label_2e946c;
        case 0x2e9470u: goto label_2e9470;
        case 0x2e9474u: goto label_2e9474;
        case 0x2e9478u: goto label_2e9478;
        case 0x2e947cu: goto label_2e947c;
        case 0x2e9480u: goto label_2e9480;
        case 0x2e9484u: goto label_2e9484;
        case 0x2e9488u: goto label_2e9488;
        case 0x2e948cu: goto label_2e948c;
        case 0x2e9490u: goto label_2e9490;
        case 0x2e9494u: goto label_2e9494;
        case 0x2e9498u: goto label_2e9498;
        case 0x2e949cu: goto label_2e949c;
        case 0x2e94a0u: goto label_2e94a0;
        case 0x2e94a4u: goto label_2e94a4;
        case 0x2e94a8u: goto label_2e94a8;
        case 0x2e94acu: goto label_2e94ac;
        case 0x2e94b0u: goto label_2e94b0;
        case 0x2e94b4u: goto label_2e94b4;
        case 0x2e94b8u: goto label_2e94b8;
        case 0x2e94bcu: goto label_2e94bc;
        case 0x2e94c0u: goto label_2e94c0;
        case 0x2e94c4u: goto label_2e94c4;
        case 0x2e94c8u: goto label_2e94c8;
        case 0x2e94ccu: goto label_2e94cc;
        case 0x2e94d0u: goto label_2e94d0;
        case 0x2e94d4u: goto label_2e94d4;
        case 0x2e94d8u: goto label_2e94d8;
        case 0x2e94dcu: goto label_2e94dc;
        case 0x2e94e0u: goto label_2e94e0;
        case 0x2e94e4u: goto label_2e94e4;
        case 0x2e94e8u: goto label_2e94e8;
        case 0x2e94ecu: goto label_2e94ec;
        case 0x2e94f0u: goto label_2e94f0;
        case 0x2e94f4u: goto label_2e94f4;
        case 0x2e94f8u: goto label_2e94f8;
        case 0x2e94fcu: goto label_2e94fc;
        case 0x2e9500u: goto label_2e9500;
        case 0x2e9504u: goto label_2e9504;
        case 0x2e9508u: goto label_2e9508;
        case 0x2e950cu: goto label_2e950c;
        case 0x2e9510u: goto label_2e9510;
        case 0x2e9514u: goto label_2e9514;
        case 0x2e9518u: goto label_2e9518;
        case 0x2e951cu: goto label_2e951c;
        case 0x2e9520u: goto label_2e9520;
        case 0x2e9524u: goto label_2e9524;
        case 0x2e9528u: goto label_2e9528;
        case 0x2e952cu: goto label_2e952c;
        case 0x2e9530u: goto label_2e9530;
        case 0x2e9534u: goto label_2e9534;
        case 0x2e9538u: goto label_2e9538;
        case 0x2e953cu: goto label_2e953c;
        case 0x2e9540u: goto label_2e9540;
        case 0x2e9544u: goto label_2e9544;
        case 0x2e9548u: goto label_2e9548;
        case 0x2e954cu: goto label_2e954c;
        case 0x2e9550u: goto label_2e9550;
        case 0x2e9554u: goto label_2e9554;
        case 0x2e9558u: goto label_2e9558;
        case 0x2e955cu: goto label_2e955c;
        case 0x2e9560u: goto label_2e9560;
        case 0x2e9564u: goto label_2e9564;
        case 0x2e9568u: goto label_2e9568;
        case 0x2e956cu: goto label_2e956c;
        case 0x2e9570u: goto label_2e9570;
        case 0x2e9574u: goto label_2e9574;
        case 0x2e9578u: goto label_2e9578;
        case 0x2e957cu: goto label_2e957c;
        case 0x2e9580u: goto label_2e9580;
        case 0x2e9584u: goto label_2e9584;
        case 0x2e9588u: goto label_2e9588;
        case 0x2e958cu: goto label_2e958c;
        case 0x2e9590u: goto label_2e9590;
        case 0x2e9594u: goto label_2e9594;
        case 0x2e9598u: goto label_2e9598;
        case 0x2e959cu: goto label_2e959c;
        case 0x2e95a0u: goto label_2e95a0;
        case 0x2e95a4u: goto label_2e95a4;
        case 0x2e95a8u: goto label_2e95a8;
        case 0x2e95acu: goto label_2e95ac;
        case 0x2e95b0u: goto label_2e95b0;
        case 0x2e95b4u: goto label_2e95b4;
        case 0x2e95b8u: goto label_2e95b8;
        case 0x2e95bcu: goto label_2e95bc;
        case 0x2e95c0u: goto label_2e95c0;
        case 0x2e95c4u: goto label_2e95c4;
        case 0x2e95c8u: goto label_2e95c8;
        case 0x2e95ccu: goto label_2e95cc;
        case 0x2e95d0u: goto label_2e95d0;
        case 0x2e95d4u: goto label_2e95d4;
        case 0x2e95d8u: goto label_2e95d8;
        case 0x2e95dcu: goto label_2e95dc;
        case 0x2e95e0u: goto label_2e95e0;
        case 0x2e95e4u: goto label_2e95e4;
        case 0x2e95e8u: goto label_2e95e8;
        case 0x2e95ecu: goto label_2e95ec;
        case 0x2e95f0u: goto label_2e95f0;
        case 0x2e95f4u: goto label_2e95f4;
        case 0x2e95f8u: goto label_2e95f8;
        case 0x2e95fcu: goto label_2e95fc;
        case 0x2e9600u: goto label_2e9600;
        case 0x2e9604u: goto label_2e9604;
        case 0x2e9608u: goto label_2e9608;
        case 0x2e960cu: goto label_2e960c;
        case 0x2e9610u: goto label_2e9610;
        case 0x2e9614u: goto label_2e9614;
        case 0x2e9618u: goto label_2e9618;
        case 0x2e961cu: goto label_2e961c;
        case 0x2e9620u: goto label_2e9620;
        case 0x2e9624u: goto label_2e9624;
        case 0x2e9628u: goto label_2e9628;
        case 0x2e962cu: goto label_2e962c;
        case 0x2e9630u: goto label_2e9630;
        case 0x2e9634u: goto label_2e9634;
        case 0x2e9638u: goto label_2e9638;
        case 0x2e963cu: goto label_2e963c;
        case 0x2e9640u: goto label_2e9640;
        case 0x2e9644u: goto label_2e9644;
        case 0x2e9648u: goto label_2e9648;
        case 0x2e964cu: goto label_2e964c;
        case 0x2e9650u: goto label_2e9650;
        case 0x2e9654u: goto label_2e9654;
        case 0x2e9658u: goto label_2e9658;
        case 0x2e965cu: goto label_2e965c;
        case 0x2e9660u: goto label_2e9660;
        case 0x2e9664u: goto label_2e9664;
        case 0x2e9668u: goto label_2e9668;
        case 0x2e966cu: goto label_2e966c;
        case 0x2e9670u: goto label_2e9670;
        case 0x2e9674u: goto label_2e9674;
        case 0x2e9678u: goto label_2e9678;
        case 0x2e967cu: goto label_2e967c;
        case 0x2e9680u: goto label_2e9680;
        case 0x2e9684u: goto label_2e9684;
        case 0x2e9688u: goto label_2e9688;
        case 0x2e968cu: goto label_2e968c;
        case 0x2e9690u: goto label_2e9690;
        case 0x2e9694u: goto label_2e9694;
        case 0x2e9698u: goto label_2e9698;
        case 0x2e969cu: goto label_2e969c;
        case 0x2e96a0u: goto label_2e96a0;
        case 0x2e96a4u: goto label_2e96a4;
        case 0x2e96a8u: goto label_2e96a8;
        case 0x2e96acu: goto label_2e96ac;
        case 0x2e96b0u: goto label_2e96b0;
        case 0x2e96b4u: goto label_2e96b4;
        case 0x2e96b8u: goto label_2e96b8;
        case 0x2e96bcu: goto label_2e96bc;
        case 0x2e96c0u: goto label_2e96c0;
        case 0x2e96c4u: goto label_2e96c4;
        case 0x2e96c8u: goto label_2e96c8;
        case 0x2e96ccu: goto label_2e96cc;
        case 0x2e96d0u: goto label_2e96d0;
        case 0x2e96d4u: goto label_2e96d4;
        case 0x2e96d8u: goto label_2e96d8;
        case 0x2e96dcu: goto label_2e96dc;
        case 0x2e96e0u: goto label_2e96e0;
        case 0x2e96e4u: goto label_2e96e4;
        case 0x2e96e8u: goto label_2e96e8;
        case 0x2e96ecu: goto label_2e96ec;
        case 0x2e96f0u: goto label_2e96f0;
        case 0x2e96f4u: goto label_2e96f4;
        case 0x2e96f8u: goto label_2e96f8;
        case 0x2e96fcu: goto label_2e96fc;
        case 0x2e9700u: goto label_2e9700;
        case 0x2e9704u: goto label_2e9704;
        case 0x2e9708u: goto label_2e9708;
        case 0x2e970cu: goto label_2e970c;
        case 0x2e9710u: goto label_2e9710;
        case 0x2e9714u: goto label_2e9714;
        case 0x2e9718u: goto label_2e9718;
        case 0x2e971cu: goto label_2e971c;
        case 0x2e9720u: goto label_2e9720;
        case 0x2e9724u: goto label_2e9724;
        case 0x2e9728u: goto label_2e9728;
        case 0x2e972cu: goto label_2e972c;
        case 0x2e9730u: goto label_2e9730;
        case 0x2e9734u: goto label_2e9734;
        case 0x2e9738u: goto label_2e9738;
        case 0x2e973cu: goto label_2e973c;
        case 0x2e9740u: goto label_2e9740;
        case 0x2e9744u: goto label_2e9744;
        case 0x2e9748u: goto label_2e9748;
        case 0x2e974cu: goto label_2e974c;
        case 0x2e9750u: goto label_2e9750;
        case 0x2e9754u: goto label_2e9754;
        case 0x2e9758u: goto label_2e9758;
        case 0x2e975cu: goto label_2e975c;
        case 0x2e9760u: goto label_2e9760;
        case 0x2e9764u: goto label_2e9764;
        case 0x2e9768u: goto label_2e9768;
        case 0x2e976cu: goto label_2e976c;
        case 0x2e9770u: goto label_2e9770;
        case 0x2e9774u: goto label_2e9774;
        case 0x2e9778u: goto label_2e9778;
        case 0x2e977cu: goto label_2e977c;
        case 0x2e9780u: goto label_2e9780;
        case 0x2e9784u: goto label_2e9784;
        case 0x2e9788u: goto label_2e9788;
        case 0x2e978cu: goto label_2e978c;
        case 0x2e9790u: goto label_2e9790;
        case 0x2e9794u: goto label_2e9794;
        case 0x2e9798u: goto label_2e9798;
        case 0x2e979cu: goto label_2e979c;
        case 0x2e97a0u: goto label_2e97a0;
        case 0x2e97a4u: goto label_2e97a4;
        case 0x2e97a8u: goto label_2e97a8;
        case 0x2e97acu: goto label_2e97ac;
        case 0x2e97b0u: goto label_2e97b0;
        case 0x2e97b4u: goto label_2e97b4;
        case 0x2e97b8u: goto label_2e97b8;
        case 0x2e97bcu: goto label_2e97bc;
        case 0x2e97c0u: goto label_2e97c0;
        case 0x2e97c4u: goto label_2e97c4;
        case 0x2e97c8u: goto label_2e97c8;
        case 0x2e97ccu: goto label_2e97cc;
        case 0x2e97d0u: goto label_2e97d0;
        case 0x2e97d4u: goto label_2e97d4;
        case 0x2e97d8u: goto label_2e97d8;
        case 0x2e97dcu: goto label_2e97dc;
        case 0x2e97e0u: goto label_2e97e0;
        case 0x2e97e4u: goto label_2e97e4;
        case 0x2e97e8u: goto label_2e97e8;
        case 0x2e97ecu: goto label_2e97ec;
        case 0x2e97f0u: goto label_2e97f0;
        case 0x2e97f4u: goto label_2e97f4;
        case 0x2e97f8u: goto label_2e97f8;
        case 0x2e97fcu: goto label_2e97fc;
        case 0x2e9800u: goto label_2e9800;
        case 0x2e9804u: goto label_2e9804;
        case 0x2e9808u: goto label_2e9808;
        case 0x2e980cu: goto label_2e980c;
        case 0x2e9810u: goto label_2e9810;
        case 0x2e9814u: goto label_2e9814;
        case 0x2e9818u: goto label_2e9818;
        case 0x2e981cu: goto label_2e981c;
        case 0x2e9820u: goto label_2e9820;
        case 0x2e9824u: goto label_2e9824;
        case 0x2e9828u: goto label_2e9828;
        case 0x2e982cu: goto label_2e982c;
        case 0x2e9830u: goto label_2e9830;
        case 0x2e9834u: goto label_2e9834;
        case 0x2e9838u: goto label_2e9838;
        case 0x2e983cu: goto label_2e983c;
        case 0x2e9840u: goto label_2e9840;
        case 0x2e9844u: goto label_2e9844;
        case 0x2e9848u: goto label_2e9848;
        case 0x2e984cu: goto label_2e984c;
        case 0x2e9850u: goto label_2e9850;
        case 0x2e9854u: goto label_2e9854;
        case 0x2e9858u: goto label_2e9858;
        case 0x2e985cu: goto label_2e985c;
        case 0x2e9860u: goto label_2e9860;
        case 0x2e9864u: goto label_2e9864;
        case 0x2e9868u: goto label_2e9868;
        case 0x2e986cu: goto label_2e986c;
        case 0x2e9870u: goto label_2e9870;
        case 0x2e9874u: goto label_2e9874;
        case 0x2e9878u: goto label_2e9878;
        case 0x2e987cu: goto label_2e987c;
        case 0x2e9880u: goto label_2e9880;
        case 0x2e9884u: goto label_2e9884;
        case 0x2e9888u: goto label_2e9888;
        case 0x2e988cu: goto label_2e988c;
        case 0x2e9890u: goto label_2e9890;
        case 0x2e9894u: goto label_2e9894;
        case 0x2e9898u: goto label_2e9898;
        case 0x2e989cu: goto label_2e989c;
        case 0x2e98a0u: goto label_2e98a0;
        case 0x2e98a4u: goto label_2e98a4;
        case 0x2e98a8u: goto label_2e98a8;
        case 0x2e98acu: goto label_2e98ac;
        case 0x2e98b0u: goto label_2e98b0;
        case 0x2e98b4u: goto label_2e98b4;
        case 0x2e98b8u: goto label_2e98b8;
        case 0x2e98bcu: goto label_2e98bc;
        case 0x2e98c0u: goto label_2e98c0;
        case 0x2e98c4u: goto label_2e98c4;
        case 0x2e98c8u: goto label_2e98c8;
        case 0x2e98ccu: goto label_2e98cc;
        case 0x2e98d0u: goto label_2e98d0;
        case 0x2e98d4u: goto label_2e98d4;
        case 0x2e98d8u: goto label_2e98d8;
        case 0x2e98dcu: goto label_2e98dc;
        case 0x2e98e0u: goto label_2e98e0;
        case 0x2e98e4u: goto label_2e98e4;
        case 0x2e98e8u: goto label_2e98e8;
        case 0x2e98ecu: goto label_2e98ec;
        case 0x2e98f0u: goto label_2e98f0;
        case 0x2e98f4u: goto label_2e98f4;
        case 0x2e98f8u: goto label_2e98f8;
        case 0x2e98fcu: goto label_2e98fc;
        default: break;
    }

    ctx->pc = 0x2e8df8u;

label_2e8df8:
    // 0x2e8df8: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x2e8df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_2e8dfc:
    // 0x2e8dfc: 0xffb602e0  sd          $s6, 0x2E0($sp)
    ctx->pc = 0x2e8dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
label_2e8e00:
    // 0x2e8e00: 0xffbe0300  sd          $fp, 0x300($sp)
    ctx->pc = 0x2e8e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 30));
label_2e8e04:
    // 0x2e8e04: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2e8e04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e8e08:
    // 0x2e8e08: 0xffb702f0  sd          $s7, 0x2F0($sp)
    ctx->pc = 0x2e8e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 23));
label_2e8e0c:
    // 0x2e8e0c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2e8e0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8e10:
    // 0x2e8e10: 0xffb502d0  sd          $s5, 0x2D0($sp)
    ctx->pc = 0x2e8e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 21));
label_2e8e14:
    // 0x2e8e14: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2e8e14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8e18:
    // 0x2e8e18: 0xffb302b0  sd          $s3, 0x2B0($sp)
    ctx->pc = 0x2e8e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 19));
label_2e8e1c:
    // 0x2e8e1c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e8e1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e8e20:
    // 0x2e8e20: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x2e8e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
label_2e8e24:
    // 0x2e8e24: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x2e8e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2e8e28:
    // 0x2e8e28: 0xffbf0310  sd          $ra, 0x310($sp)
    ctx->pc = 0x2e8e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 31));
label_2e8e2c:
    // 0x2e8e2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8e30:
    // 0x2e8e30: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x2e8e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
label_2e8e34:
    // 0x2e8e34: 0xffb10290  sd          $s1, 0x290($sp)
    ctx->pc = 0x2e8e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 17));
label_2e8e38:
    // 0x2e8e38: 0xffb00280  sd          $s0, 0x280($sp)
    ctx->pc = 0x2e8e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 16));
label_2e8e3c:
    // 0x2e8e3c: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x2e8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
label_2e8e40:
    // 0x2e8e40: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e8e44:
    if (ctx->pc == 0x2E8E44u) {
        ctx->pc = 0x2E8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E40u;
        // 0x2e8e44: 0xafa00264  sw          $zero, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E48u;
        goto label_2e8e48;
    }
    ctx->pc = 0x2E8E40u;
    {
        const bool branch_taken_0x2e8e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E40u;
        // 0x2e8e44: 0xafa00264  sw          $zero, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e40) {
            ctx->pc = 0x2E8E4Cu;
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E8E48u;
label_2e8e48:
    // 0x2e8e48: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x2e8e48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2e8e4c:
    // 0x2e8e4c: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2e8e4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2e8e50:
    // 0x2e8e50: 0x1080029e  beqz        $a0, . + 4 + (0x29E << 2)
label_2e8e54:
    if (ctx->pc == 0x2E8E54u) {
        ctx->pc = 0x2E8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E50u;
        // 0x2e8e54: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E58u;
        goto label_2e8e58;
    }
    ctx->pc = 0x2E8E50u;
    {
        const bool branch_taken_0x2e8e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E50u;
        // 0x2e8e54: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e50) {
            ctx->pc = 0x2E98CCu;
            goto label_2e98cc;
        }
    }
    ctx->pc = 0x2E8E58u;
label_2e8e58:
    // 0x2e8e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8e5c:
    // 0x2e8e5c: 0x14420020  bne         $v0, $v0, . + 4 + (0x20 << 2)
label_2e8e60:
    if (ctx->pc == 0x2E8E60u) {
        ctx->pc = 0x2E8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E5Cu;
        // 0x2e8e60: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E64u;
        goto label_2e8e64;
    }
    ctx->pc = 0x2E8E5Cu;
    {
        const bool branch_taken_0x2e8e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E5Cu;
        // 0x2e8e60: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e5c) {
            ctx->pc = 0x2E8EE0u;
            goto label_2e8ee0;
        }
    }
    ctx->pc = 0x2E8E64u;
label_2e8e64:
    // 0x2e8e64: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2e8e68:
    // 0x2e8e68: 0x2445c421  addiu       $a1, $v0, -0x3BDF
    ctx->pc = 0x2e8e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951969));
label_2e8e6c:
    // 0x2e8e6c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2e8e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2e8e70:
    // 0x2e8e70: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2e8e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2e8e74:
    // 0x2e8e74: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e8e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2e8e78:
    // 0x2e8e78: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2e8e7c:
    if (ctx->pc == 0x2E8E7Cu) {
        ctx->pc = 0x2E8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E78u;
        // 0x2e8e7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E80u;
        goto label_2e8e80;
    }
    ctx->pc = 0x2E8E78u;
    {
        const bool branch_taken_0x2e8e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E78u;
        // 0x2e8e7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e78) {
            ctx->pc = 0x2E8EDCu;
            goto label_2e8edc;
        }
    }
    ctx->pc = 0x2E8E80u;
label_2e8e80:
    // 0x2e8e80: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e8e84:
    if (ctx->pc == 0x2E8E84u) {
        ctx->pc = 0x2E8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E80u;
        // 0x2e8e84: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E88u;
        goto label_2e8e88;
    }
    ctx->pc = 0x2E8E80u;
    {
        const bool branch_taken_0x2e8e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E80u;
        // 0x2e8e84: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e80) {
            ctx->pc = 0x2E8EA0u;
            goto label_2e8ea0;
        }
    }
    ctx->pc = 0x2E8E88u;
label_2e8e88:
    // 0x2e8e88: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2e8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2e8e8c:
    // 0x2e8e8c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e8e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e8e90:
    // 0x2e8e90: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2e8e90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2e8e94:
    // 0x2e8e94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e8e98:
    // 0x2e8e98: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2e8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_2e8e9c:
    // 0x2e8e9c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8ea0:
    // 0x2e8ea0: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_2e8ea4:
    if (ctx->pc == 0x2E8EA4u) {
        ctx->pc = 0x2E8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EA0u;
        // 0x2e8ea4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EA8u;
        goto label_2e8ea8;
    }
    ctx->pc = 0x2E8EA0u;
    {
        const bool branch_taken_0x2e8ea0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2e8ea0) {
            ctx->pc = 0x2E8EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8EA0u;
            // 0x2e8ea4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8EBCu;
            goto label_2e8ebc;
        }
    }
    ctx->pc = 0x2E8EA8u;
label_2e8ea8:
    // 0x2e8ea8: 0xc0bb3d0  jal         func_2ECF40
label_2e8eac:
    if (ctx->pc == 0x2E8EACu) {
        ctx->pc = 0x2E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EA8u;
        // 0x2e8eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EB0u;
        goto label_2e8eb0;
    }
    ctx->pc = 0x2E8EA8u;
    SET_GPR_U32(ctx, 31, 0x2E8EB0u);
    ctx->pc = 0x2E8EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EA8u;
    // 0x2e8eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E8EA8u, 0x2E8EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EB0u;
label_2e8eb0:
    // 0x2e8eb0: 0x14400287  bnez        $v0, . + 4 + (0x287 << 2)
label_2e8eb4:
    if (ctx->pc == 0x2E8EB4u) {
        ctx->pc = 0x2E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EB0u;
        // 0x2e8eb4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EB8u;
        goto label_2e8eb8;
    }
    ctx->pc = 0x2E8EB0u;
    {
        const bool branch_taken_0x2e8eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EB0u;
        // 0x2e8eb4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8eb0) {
            ctx->pc = 0x2E98D0u;
            goto label_2e98d0;
        }
    }
    ctx->pc = 0x2E8EB8u;
label_2e8eb8:
    // 0x2e8eb8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8ebc:
    // 0x2e8ebc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2e8ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e8ec0:
    // 0x2e8ec0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2e8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2e8ec4:
    // 0x2e8ec4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e8ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8ec8:
    // 0x2e8ec8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2e8ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2e8ecc:
    // 0x2e8ecc: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
label_2e8ed0:
    if (ctx->pc == 0x2E8ED0u) {
        ctx->pc = 0x2E8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8ECCu;
        // 0x2e8ed0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8ED4u;
        goto label_2e8ed4;
    }
    ctx->pc = 0x2E8ECCu;
    {
        const bool branch_taken_0x2e8ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8ecc) {
            ctx->pc = 0x2E8ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8ECCu;
            // 0x2e8ed0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e88;
        }
    }
    ctx->pc = 0x2E8ED4u;
label_2e8ed4:
    // 0x2e8ed4: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
label_2e8ed8:
    if (ctx->pc == 0x2E8ED8u) {
        ctx->pc = 0x2E8ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8ED4u;
        // 0x2e8ed8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EDCu;
        goto label_2e8edc;
    }
    ctx->pc = 0x2E8ED4u;
    {
        const bool branch_taken_0x2e8ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8ED4u;
        // 0x2e8ed8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ed4) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E8EDCu;
label_2e8edc:
    // 0x2e8edc: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x2e8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2e8ee0:
    // 0x2e8ee0: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
label_2e8ee4:
    if (ctx->pc == 0x2E8EE4u) {
        ctx->pc = 0x2E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EE0u;
        // 0x2e8ee4: 0x26d1ffff  addiu       $s1, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EE8u;
        goto label_2e8ee8;
    }
    ctx->pc = 0x2E8EE0u;
    {
        const bool branch_taken_0x2e8ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EE0u;
        // 0x2e8ee4: 0x26d1ffff  addiu       $s1, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ee0) {
            ctx->pc = 0x2E8F20u;
            goto label_2e8f20;
        }
    }
    ctx->pc = 0x2E8EE8u;
label_2e8ee8:
    // 0x2e8ee8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e8ee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8eec:
    // 0x2e8eec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e8eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8ef0:
    // 0x2e8ef0: 0x82d00000  lb          $s0, 0x0($s6)
    ctx->pc = 0x2e8ef0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2e8ef4:
    // 0x2e8ef4: 0x2e020079  sltiu       $v0, $s0, 0x79
    ctx->pc = 0x2e8ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_2e8ef8:
    // 0x2e8ef8: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_2e8efc:
    if (ctx->pc == 0x2E8EFCu) {
        ctx->pc = 0x2E8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EF8u;
        // 0x2e8efc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F00u;
        goto label_2e8f00;
    }
    ctx->pc = 0x2E8EF8u;
    {
        const bool branch_taken_0x2e8ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EF8u;
        // 0x2e8efc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ef8) {
            ctx->pc = 0x2E90FCu;
            goto label_2e90fc;
        }
    }
    ctx->pc = 0x2E8F00u;
label_2e8f00:
    // 0x2e8f00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2e8f04:
    // 0x2e8f04: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2e8f08:
    // 0x2e8f08: 0x2442bfe0  addiu       $v0, $v0, -0x4020
    ctx->pc = 0x2e8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950880));
label_2e8f0c:
    // 0x2e8f0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e8f10:
    // 0x2e8f10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e8f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e8f14:
    // 0x2e8f14: 0x800008  jr          $a0
label_2e8f18:
    if (ctx->pc == 0x2E8F18u) {
        ctx->pc = 0x2E8F1Cu;
        goto label_2e8f1c;
    }
    ctx->pc = 0x2E8F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E8F1Cu: goto label_2e8f1c;
            case 0x2E8F80u: goto label_2e8f80;
            case 0x2E8F88u: goto label_2e8f88;
            case 0x2E8F90u: goto label_2e8f90;
            case 0x2E8F98u: goto label_2e8f98;
            case 0x2E8FA0u: goto label_2e8fa0;
            case 0x2E8FB4u: goto label_2e8fb4;
            case 0x2E8FB8u: goto label_2e8fb8;
            case 0x2E8FD4u: goto label_2e8fd4;
            case 0x2E8FECu: goto label_2e8fec;
            case 0x2E8FF0u: goto label_2e8ff0;
            case 0x2E900Cu: goto label_2e900c;
            case 0x2E9028u: goto label_2e9028;
            case 0x2E9048u: goto label_2e9048;
            case 0x2E9050u: goto label_2e9050;
            case 0x2E9058u: goto label_2e9058;
            case 0x2E9074u: goto label_2e9074;
            case 0x2E9080u: goto label_2e9080;
            case 0x2E90A0u: goto label_2e90a0;
            case 0x2E90F4u: goto label_2e90f4;
            case 0x2E90FCu: goto label_2e90fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8F14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E8F1Cu;
label_2e8f1c:
    // 0x2e8f1c: 0x26d1ffff  addiu       $s1, $s6, -0x1
    ctx->pc = 0x2e8f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_2e8f20:
    // 0x2e8f20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e8f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8f24:
    // 0x2e8f24: 0x0  nop
    ctx->pc = 0x2e8f24u;
    // NOP
label_2e8f28:
    // 0x2e8f28: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8f2c:
    // 0x2e8f2c: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_2e8f30:
    if (ctx->pc == 0x2E8F30u) {
        ctx->pc = 0x2E8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F2Cu;
        // 0x2e8f30: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F34u;
        goto label_2e8f34;
    }
    ctx->pc = 0x2E8F2Cu;
    {
        const bool branch_taken_0x2e8f2c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2e8f2c) {
            ctx->pc = 0x2E8F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8F2Cu;
            // 0x2e8f30: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8F48u;
            goto label_2e8f48;
        }
    }
    ctx->pc = 0x2E8F34u;
label_2e8f34:
    // 0x2e8f34: 0xc0bb3d0  jal         func_2ECF40
label_2e8f38:
    if (ctx->pc == 0x2E8F38u) {
        ctx->pc = 0x2E8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F34u;
        // 0x2e8f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F3Cu;
        goto label_2e8f3c;
    }
    ctx->pc = 0x2E8F34u;
    SET_GPR_U32(ctx, 31, 0x2E8F3Cu);
    ctx->pc = 0x2E8F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F34u;
    // 0x2e8f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E8F34u, 0x2E8F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F3Cu;
label_2e8f3c:
    // 0x2e8f3c: 0x14400261  bnez        $v0, . + 4 + (0x261 << 2)
label_2e8f40:
    if (ctx->pc == 0x2E8F40u) {
        ctx->pc = 0x2E8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F3Cu;
        // 0x2e8f40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F44u;
        goto label_2e8f44;
    }
    ctx->pc = 0x2E8F3Cu;
    {
        const bool branch_taken_0x2e8f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F3Cu;
        // 0x2e8f40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f3c) {
            ctx->pc = 0x2E98C4u;
            goto label_2e98c4;
        }
    }
    ctx->pc = 0x2E8F44u;
label_2e8f44:
    // 0x2e8f44: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8f48:
    // 0x2e8f48: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2e8f48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8f4c:
    // 0x2e8f4c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2e8f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e8f50:
    // 0x2e8f50: 0x1443025e  bne         $v0, $v1, . + 4 + (0x25E << 2)
label_2e8f54:
    if (ctx->pc == 0x2E8F54u) {
        ctx->pc = 0x2E8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F50u;
        // 0x2e8f54: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F58u;
        goto label_2e8f58;
    }
    ctx->pc = 0x2E8F50u;
    {
        const bool branch_taken_0x2e8f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F50u;
        // 0x2e8f54: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f50) {
            ctx->pc = 0x2E98CCu;
            goto label_2e98cc;
        }
    }
    ctx->pc = 0x2E8F58u;
label_2e8f58:
    // 0x2e8f58: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2e8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8f5c:
    // 0x2e8f5c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e8f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e8f60:
    // 0x2e8f60: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2e8f60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2e8f64:
    // 0x2e8f64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e8f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e8f68:
    // 0x2e8f68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e8f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e8f6c:
    // 0x2e8f6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e8f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e8f70:
    // 0x2e8f70: 0x1a00ffed  blez        $s0, . + 4 + (-0x13 << 2)
label_2e8f74:
    if (ctx->pc == 0x2E8F74u) {
        ctx->pc = 0x2E8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F70u;
        // 0x2e8f74: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F78u;
        goto label_2e8f78;
    }
    ctx->pc = 0x2E8F70u;
    {
        const bool branch_taken_0x2e8f70 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F70u;
        // 0x2e8f74: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f70) {
            ctx->pc = 0x2E8F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8f28;
        }
    }
    ctx->pc = 0x2E8F78u;
label_2e8f78:
    // 0x2e8f78: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_2e8f7c:
    if (ctx->pc == 0x2E8F7Cu) {
        ctx->pc = 0x2E8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F78u;
        // 0x2e8f7c: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F80u;
        goto label_2e8f80;
    }
    ctx->pc = 0x2E8F78u;
    {
        const bool branch_taken_0x2e8f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F78u;
        // 0x2e8f7c: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f78) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E8F80u;
label_2e8f80:
    // 0x2e8f80: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_2e8f84:
    if (ctx->pc == 0x2E8F84u) {
        ctx->pc = 0x2E8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F80u;
        // 0x2e8f84: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F88u;
        goto label_2e8f88;
    }
    ctx->pc = 0x2E8F80u;
    {
        const bool branch_taken_0x2e8f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F80u;
        // 0x2e8f84: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f80) {
            ctx->pc = 0x2E8EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8ef0;
        }
    }
    ctx->pc = 0x2E8F88u;
label_2e8f88:
    // 0x2e8f88: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_2e8f8c:
    if (ctx->pc == 0x2E8F8Cu) {
        ctx->pc = 0x2E8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F88u;
        // 0x2e8f8c: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F90u;
        goto label_2e8f90;
    }
    ctx->pc = 0x2E8F88u;
    {
        const bool branch_taken_0x2e8f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F88u;
        // 0x2e8f8c: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f88) {
            ctx->pc = 0x2E8EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8ef0;
        }
    }
    ctx->pc = 0x2E8F90u;
label_2e8f90:
    // 0x2e8f90: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_2e8f94:
    if (ctx->pc == 0x2E8F94u) {
        ctx->pc = 0x2E8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F90u;
        // 0x2e8f94: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F98u;
        goto label_2e8f98;
    }
    ctx->pc = 0x2E8F90u;
    {
        const bool branch_taken_0x2e8f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F90u;
        // 0x2e8f94: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f90) {
            ctx->pc = 0x2E8EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8ef0;
        }
    }
    ctx->pc = 0x2E8F98u;
label_2e8f98:
    // 0x2e8f98: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_2e8f9c:
    if (ctx->pc == 0x2E8F9Cu) {
        ctx->pc = 0x2E8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F98u;
        // 0x2e8f9c: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FA0u;
        goto label_2e8fa0;
    }
    ctx->pc = 0x2E8F98u;
    {
        const bool branch_taken_0x2e8f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F98u;
        // 0x2e8f9c: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f98) {
            ctx->pc = 0x2E8EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8ef0;
        }
    }
    ctx->pc = 0x2E8FA0u;
label_2e8fa0:
    // 0x2e8fa0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e8fa4:
    // 0x2e8fa4: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x2e8fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e8fa8:
    // 0x2e8fa8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2e8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2e8fac:
    // 0x2e8fac: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
label_2e8fb0:
    if (ctx->pc == 0x2E8FB0u) {
        ctx->pc = 0x2E8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FACu;
        // 0x2e8fb0: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FB4u;
        goto label_2e8fb4;
    }
    ctx->pc = 0x2E8FACu;
    {
        const bool branch_taken_0x2e8fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FACu;
        // 0x2e8fb0: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fac) {
            ctx->pc = 0x2E8EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8ef0;
        }
    }
    ctx->pc = 0x2E8FB4u;
label_2e8fb4:
    // 0x2e8fb4: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x2e8fb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_2e8fb8:
    // 0x2e8fb8: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
label_2e8fbc:
    // 0x2e8fbc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2e8fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e8fc0:
    // 0x2e8fc0: 0x24426758  addiu       $v0, $v0, 0x6758
    ctx->pc = 0x2e8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26456));
label_2e8fc4:
    // 0x2e8fc4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2e8fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e8fc8:
    // 0x2e8fc8: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2e8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2e8fcc:
    // 0x2e8fcc: 0x10000057  b           . + 4 + (0x57 << 2)
label_2e8fd0:
    if (ctx->pc == 0x2E8FD0u) {
        ctx->pc = 0x2E8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FCCu;
        // 0x2e8fd0: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FD4u;
        goto label_2e8fd4;
    }
    ctx->pc = 0x2E8FCCu;
    {
        const bool branch_taken_0x2e8fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FCCu;
        // 0x2e8fd0: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fcc) {
            ctx->pc = 0x2E912Cu;
            goto label_2e912c;
        }
    }
    ctx->pc = 0x2E8FD4u;
label_2e8fd4:
    // 0x2e8fd4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
label_2e8fd8:
    // 0x2e8fd8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2e8fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e8fdc:
    // 0x2e8fdc: 0x24426758  addiu       $v0, $v0, 0x6758
    ctx->pc = 0x2e8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26456));
label_2e8fe0:
    // 0x2e8fe0: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x2e8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
label_2e8fe4:
    // 0x2e8fe4: 0x10000051  b           . + 4 + (0x51 << 2)
label_2e8fe8:
    if (ctx->pc == 0x2E8FE8u) {
        ctx->pc = 0x2E8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FE4u;
        // 0x2e8fe8: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FECu;
        goto label_2e8fec;
    }
    ctx->pc = 0x2E8FE4u;
    {
        const bool branch_taken_0x2e8fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FE4u;
        // 0x2e8fe8: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fe4) {
            ctx->pc = 0x2E912Cu;
            goto label_2e912c;
        }
    }
    ctx->pc = 0x2E8FECu;
label_2e8fec:
    // 0x2e8fec: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x2e8fecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_2e8ff0:
    // 0x2e8ff0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2e8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2e8ff4:
    // 0x2e8ff4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2e8ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e8ff8:
    // 0x2e8ff8: 0x2442e648  addiu       $v0, $v0, -0x19B8
    ctx->pc = 0x2e8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960712));
label_2e8ffc:
    // 0x2e8ffc: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2e8ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2e9000:
    // 0x2e9000: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e9000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e9004:
    // 0x2e9004: 0x10000049  b           . + 4 + (0x49 << 2)
label_2e9008:
    if (ctx->pc == 0x2E9008u) {
        ctx->pc = 0x2E9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9004u;
        // 0x2e9008: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E900Cu;
        goto label_2e900c;
    }
    ctx->pc = 0x2E9004u;
    {
        const bool branch_taken_0x2e9004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9004u;
        // 0x2e9008: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9004) {
            ctx->pc = 0x2E912Cu;
            goto label_2e912c;
        }
    }
    ctx->pc = 0x2E900Cu;
label_2e900c:
    // 0x2e900c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2e900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2e9010:
    // 0x2e9010: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e9010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e9014:
    // 0x2e9014: 0x2442e648  addiu       $v0, $v0, -0x19B8
    ctx->pc = 0x2e9014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960712));
label_2e9018:
    // 0x2e9018: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2e9018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e901c:
    // 0x2e901c: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2e901cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2e9020:
    // 0x2e9020: 0x10000042  b           . + 4 + (0x42 << 2)
label_2e9024:
    if (ctx->pc == 0x2E9024u) {
        ctx->pc = 0x2E9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9020u;
        // 0x2e9024: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9028u;
        goto label_2e9028;
    }
    ctx->pc = 0x2E9020u;
    {
        const bool branch_taken_0x2e9020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9020u;
        // 0x2e9024: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9020) {
            ctx->pc = 0x2E912Cu;
            goto label_2e912c;
        }
    }
    ctx->pc = 0x2E9028u;
label_2e9028:
    // 0x2e9028: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2e9028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2e902c:
    // 0x2e902c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2e902cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e9030:
    // 0x2e9030: 0x2442e648  addiu       $v0, $v0, -0x19B8
    ctx->pc = 0x2e9030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960712));
label_2e9034:
    // 0x2e9034: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x2e9034u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_2e9038:
    // 0x2e9038: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2e9038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2e903c:
    // 0x2e903c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2e903cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e9040:
    // 0x2e9040: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2e9044:
    if (ctx->pc == 0x2E9044u) {
        ctx->pc = 0x2E9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9040u;
        // 0x2e9044: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9048u;
        goto label_2e9048;
    }
    ctx->pc = 0x2E9040u;
    {
        const bool branch_taken_0x2e9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9040u;
        // 0x2e9044: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9040) {
            ctx->pc = 0x2E912Cu;
            goto label_2e912c;
        }
    }
    ctx->pc = 0x2E9048u;
label_2e9048:
    // 0x2e9048: 0x10000038  b           . + 4 + (0x38 << 2)
label_2e904c:
    if (ctx->pc == 0x2E904Cu) {
        ctx->pc = 0x2E904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9048u;
        // 0x2e904c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9050u;
        goto label_2e9050;
    }
    ctx->pc = 0x2E9048u;
    {
        const bool branch_taken_0x2e9048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9048u;
        // 0x2e904c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9048) {
            ctx->pc = 0x2E912Cu;
            goto label_2e912c;
        }
    }
    ctx->pc = 0x2E9050u;
label_2e9050:
    // 0x2e9050: 0x10000036  b           . + 4 + (0x36 << 2)
label_2e9054:
    if (ctx->pc == 0x2E9054u) {
        ctx->pc = 0x2E9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9050u;
        // 0x2e9054: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9058u;
        goto label_2e9058;
    }
    ctx->pc = 0x2E9050u;
    {
        const bool branch_taken_0x2e9050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9050u;
        // 0x2e9054: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9050) {
            ctx->pc = 0x2E912Cu;
            goto label_2e912c;
        }
    }
    ctx->pc = 0x2E9058u;
label_2e9058:
    // 0x2e9058: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e9058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e905c:
    // 0x2e905c: 0xc0ba640  jal         func_2E9900
label_2e9060:
    if (ctx->pc == 0x2E9060u) {
        ctx->pc = 0x2E9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E905Cu;
        // 0x2e9060: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9064u;
        goto label_2e9064;
    }
    ctx->pc = 0x2E905Cu;
    SET_GPR_U32(ctx, 31, 0x2E9064u);
    ctx->pc = 0x2E9060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E905Cu;
    // 0x2e9060: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9900u, 0x2E905Cu, 0x2E9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9064u;
label_2e9064:
    // 0x2e9064: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x2e9064u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_2e9068:
    // 0x2e9068: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e9068u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e906c:
    // 0x2e906c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2e9070:
    if (ctx->pc == 0x2E9070u) {
        ctx->pc = 0x2E9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E906Cu;
        // 0x2e9070: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9074u;
        goto label_2e9074;
    }
    ctx->pc = 0x2E906Cu;
    {
        const bool branch_taken_0x2e906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E906Cu;
        // 0x2e9070: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e906c) {
            ctx->pc = 0x2E912Cu;
            goto label_2e912c;
        }
    }
    ctx->pc = 0x2E9074u;
label_2e9074:
    // 0x2e9074: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x2e9074u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_2e9078:
    // 0x2e9078: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2e907c:
    if (ctx->pc == 0x2E907Cu) {
        ctx->pc = 0x2E907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9078u;
        // 0x2e907c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9080u;
        goto label_2e9080;
    }
    ctx->pc = 0x2E9078u;
    {
        const bool branch_taken_0x2e9078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9078u;
        // 0x2e907c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9078) {
            ctx->pc = 0x2E912Cu;
            goto label_2e912c;
        }
    }
    ctx->pc = 0x2E9080u;
label_2e9080:
    // 0x2e9080: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2e9080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2e9084:
    // 0x2e9084: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x2e9084u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
label_2e9088:
    // 0x2e9088: 0x2442e648  addiu       $v0, $v0, -0x19B8
    ctx->pc = 0x2e9088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960712));
label_2e908c:
    // 0x2e908c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2e908cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e9090:
    // 0x2e9090: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2e9090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2e9094:
    // 0x2e9094: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e9094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e9098:
    // 0x2e9098: 0x10000024  b           . + 4 + (0x24 << 2)
label_2e909c:
    if (ctx->pc == 0x2E909Cu) {
        ctx->pc = 0x2E909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9098u;
        // 0x2e909c: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90A0u;
        goto label_2e90a0;
    }
    ctx->pc = 0x2E9098u;
    {
        const bool branch_taken_0x2e9098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9098u;
        // 0x2e909c: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9098) {
            ctx->pc = 0x2E912Cu;
            goto label_2e912c;
        }
    }
    ctx->pc = 0x2E90A0u;
label_2e90a0:
    // 0x2e90a0: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x2e90a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2e90a4:
    // 0x2e90a4: 0x5440ff69  bnel        $v0, $zero, . + 4 + (-0x97 << 2)
label_2e90a8:
    if (ctx->pc == 0x2E90A8u) {
        ctx->pc = 0x2E90A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90A4u;
        // 0x2e90a8: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90ACu;
        goto label_2e90ac;
    }
    ctx->pc = 0x2E90A4u;
    {
        const bool branch_taken_0x2e90a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e90a4) {
            ctx->pc = 0x2E90A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E90A4u;
            // 0x2e90a8: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E90ACu;
label_2e90ac:
    // 0x2e90ac: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x2e90acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_2e90b0:
    // 0x2e90b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e90b4:
    if (ctx->pc == 0x2E90B4u) {
        ctx->pc = 0x2E90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90B0u;
        // 0x2e90b4: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90B8u;
        goto label_2e90b8;
    }
    ctx->pc = 0x2E90B0u;
    {
        const bool branch_taken_0x2e90b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90B0u;
        // 0x2e90b4: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90b0) {
            ctx->pc = 0x2E90CCu;
            goto label_2e90cc;
        }
    }
    ctx->pc = 0x2E90B8u;
label_2e90b8:
    // 0x2e90b8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2e90b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2e90bc:
    // 0x2e90bc: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x2e90bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2e90c0:
    // 0x2e90c0: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x2e90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e90c4:
    // 0x2e90c4: 0x1000ff61  b           . + 4 + (-0x9F << 2)
label_2e90c8:
    if (ctx->pc == 0x2E90C8u) {
        ctx->pc = 0x2E90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90C4u;
        // 0x2e90c8: 0xa49e0000  sh          $fp, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90CCu;
        goto label_2e90cc;
    }
    ctx->pc = 0x2E90C4u;
    {
        const bool branch_taken_0x2e90c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90C4u;
        // 0x2e90c8: 0xa49e0000  sh          $fp, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90c4) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E90CCu;
label_2e90cc:
    // 0x2e90cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e90d0:
    if (ctx->pc == 0x2E90D0u) {
        ctx->pc = 0x2E90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90CCu;
        // 0x2e90d0: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90D4u;
        goto label_2e90d4;
    }
    ctx->pc = 0x2E90CCu;
    {
        const bool branch_taken_0x2e90cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90CCu;
        // 0x2e90d0: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90cc) {
            ctx->pc = 0x2E90E4u;
            goto label_2e90e4;
        }
    }
    ctx->pc = 0x2E90D4u;
label_2e90d4:
    // 0x2e90d4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2e90d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2e90d8:
    // 0x2e90d8: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x2e90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e90dc:
    // 0x2e90dc: 0x1000ff5b  b           . + 4 + (-0xA5 << 2)
label_2e90e0:
    if (ctx->pc == 0x2E90E0u) {
        ctx->pc = 0x2E90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90DCu;
        // 0x2e90e0: 0xfc5e0000  sd          $fp, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90E4u;
        goto label_2e90e4;
    }
    ctx->pc = 0x2E90DCu;
    {
        const bool branch_taken_0x2e90dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90DCu;
        // 0x2e90e0: 0xfc5e0000  sd          $fp, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90dc) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E90E4u;
label_2e90e4:
    // 0x2e90e4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2e90e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2e90e8:
    // 0x2e90e8: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x2e90e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e90ec:
    // 0x2e90ec: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
label_2e90f0:
    if (ctx->pc == 0x2E90F0u) {
        ctx->pc = 0x2E90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90ECu;
        // 0x2e90f0: 0xac9e0000  sw          $fp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90F4u;
        goto label_2e90f4;
    }
    ctx->pc = 0x2E90ECu;
    {
        const bool branch_taken_0x2e90ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90ECu;
        // 0x2e90f0: 0xac9e0000  sw          $fp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90ec) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E90F4u;
label_2e90f4:
    // 0x2e90f4: 0x100001f6  b           . + 4 + (0x1F6 << 2)
label_2e90f8:
    if (ctx->pc == 0x2E90F8u) {
        ctx->pc = 0x2E90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90F4u;
        // 0x2e90f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90FCu;
        goto label_2e90fc;
    }
    ctx->pc = 0x2E90F4u;
    {
        const bool branch_taken_0x2e90f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90F4u;
        // 0x2e90f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90f4) {
            ctx->pc = 0x2E98D0u;
            goto label_2e98d0;
        }
    }
    ctx->pc = 0x2E90FCu;
label_2e90fc:
    // 0x2e90fc: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
label_2e9100:
    // 0x2e9100: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e9100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2e9104:
    // 0x2e9104: 0x24636758  addiu       $v1, $v1, 0x6758
    ctx->pc = 0x2e9104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26456));
label_2e9108:
    // 0x2e9108: 0x2442c421  addiu       $v0, $v0, -0x3BDF
    ctx->pc = 0x2e9108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951969));
label_2e910c:
    // 0x2e910c: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x2e910cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
label_2e9110:
    // 0x2e9110: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e9110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e9114:
    // 0x2e9114: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e9114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e9118:
    // 0x2e9118: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2e9118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e911c:
    // 0x2e911c: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x2e911cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
label_2e9120:
    // 0x2e9120: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e9120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9124:
    // 0x2e9124: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e9124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2e9128:
    // 0x2e9128: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x2e9128u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_2e912c:
    // 0x2e912c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e9130:
    // 0x2e9130: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_2e9134:
    if (ctx->pc == 0x2E9134u) {
        ctx->pc = 0x2E9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9130u;
        // 0x2e9134: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9138u;
        goto label_2e9138;
    }
    ctx->pc = 0x2E9130u;
    {
        const bool branch_taken_0x2e9130 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9130u;
        // 0x2e9134: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9130) {
            ctx->pc = 0x2E914Cu;
            goto label_2e914c;
        }
    }
    ctx->pc = 0x2E9138u;
label_2e9138:
    // 0x2e9138: 0xc0bb3d0  jal         func_2ECF40
label_2e913c:
    if (ctx->pc == 0x2E913Cu) {
        ctx->pc = 0x2E913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9138u;
        // 0x2e913c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9140u;
        goto label_2e9140;
    }
    ctx->pc = 0x2E9138u;
    SET_GPR_U32(ctx, 31, 0x2E9140u);
    ctx->pc = 0x2E913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9138u;
    // 0x2e913c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E9138u, 0x2E9140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9140u;
label_2e9140:
    // 0x2e9140: 0x144001e0  bnez        $v0, . + 4 + (0x1E0 << 2)
label_2e9144:
    if (ctx->pc == 0x2E9144u) {
        ctx->pc = 0x2E9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9140u;
        // 0x2e9144: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9148u;
        goto label_2e9148;
    }
    ctx->pc = 0x2E9140u;
    {
        const bool branch_taken_0x2e9140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9140u;
        // 0x2e9144: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9140) {
            ctx->pc = 0x2E98C4u;
            goto label_2e98c4;
        }
    }
    ctx->pc = 0x2E9148u;
label_2e9148:
    // 0x2e9148: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x2e9148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_2e914c:
    // 0x2e914c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_2e9150:
    if (ctx->pc == 0x2E9150u) {
        ctx->pc = 0x2E9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E914Cu;
        // 0x2e9150: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9154u;
        goto label_2e9154;
    }
    ctx->pc = 0x2E914Cu;
    {
        const bool branch_taken_0x2e914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E914Cu;
        // 0x2e9150: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e914c) {
            ctx->pc = 0x2E91CCu;
            goto label_2e91cc;
        }
    }
    ctx->pc = 0x2E9154u;
label_2e9154:
    // 0x2e9154: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e9154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e9158:
    // 0x2e9158: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e9158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2e915c:
    // 0x2e915c: 0x2445c421  addiu       $a1, $v0, -0x3BDF
    ctx->pc = 0x2e915cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951969));
label_2e9160:
    // 0x2e9160: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e9160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e9164:
    // 0x2e9164: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e9164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2e9168:
    // 0x2e9168: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2e9168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2e916c:
    // 0x2e916c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2e9170:
    // 0x2e9170: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2e9174:
    if (ctx->pc == 0x2E9174u) {
        ctx->pc = 0x2E9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9170u;
        // 0x2e9174: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9178u;
        goto label_2e9178;
    }
    ctx->pc = 0x2E9170u;
    {
        const bool branch_taken_0x2e9170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9170u;
        // 0x2e9174: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9170) {
            ctx->pc = 0x2E91CCu;
            goto label_2e91cc;
        }
    }
    ctx->pc = 0x2E9178u;
label_2e9178:
    // 0x2e9178: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e9178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e917c:
    // 0x2e917c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e9180:
    // 0x2e9180: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2e9180u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2e9184:
    // 0x2e9184: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e9184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e9188:
    // 0x2e9188: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2e918c:
    if (ctx->pc == 0x2E918Cu) {
        ctx->pc = 0x2E918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9188u;
        // 0x2e918c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9190u;
        goto label_2e9190;
    }
    ctx->pc = 0x2E9188u;
    {
        const bool branch_taken_0x2e9188 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9188u;
        // 0x2e918c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9188) {
            ctx->pc = 0x2E919Cu;
            goto label_2e919c;
        }
    }
    ctx->pc = 0x2E9190u;
label_2e9190:
    // 0x2e9190: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2e9190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2e9194:
    // 0x2e9194: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e9198:
    if (ctx->pc == 0x2E9198u) {
        ctx->pc = 0x2E9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9194u;
        // 0x2e9198: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E919Cu;
        goto label_2e919c;
    }
    ctx->pc = 0x2E9194u;
    {
        const bool branch_taken_0x2e9194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9194u;
        // 0x2e9198: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9194) {
            ctx->pc = 0x2E91ACu;
            goto label_2e91ac;
        }
    }
    ctx->pc = 0x2E919Cu;
label_2e919c:
    // 0x2e919c: 0xc0bb3d0  jal         func_2ECF40
label_2e91a0:
    if (ctx->pc == 0x2E91A0u) {
        ctx->pc = 0x2E91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E919Cu;
        // 0x2e91a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91A4u;
        goto label_2e91a4;
    }
    ctx->pc = 0x2E919Cu;
    SET_GPR_U32(ctx, 31, 0x2E91A4u);
    ctx->pc = 0x2E91A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E919Cu;
    // 0x2e91a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E919Cu, 0x2E91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91A4u;
label_2e91a4:
    // 0x2e91a4: 0x144001c7  bnez        $v0, . + 4 + (0x1C7 << 2)
label_2e91a8:
    if (ctx->pc == 0x2E91A8u) {
        ctx->pc = 0x2E91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91A4u;
        // 0x2e91a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91ACu;
        goto label_2e91ac;
    }
    ctx->pc = 0x2E91A4u;
    {
        const bool branch_taken_0x2e91a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91A4u;
        // 0x2e91a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91a4) {
            ctx->pc = 0x2E98C4u;
            goto label_2e98c4;
        }
    }
    ctx->pc = 0x2E91ACu;
label_2e91ac:
    // 0x2e91ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e91acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e91b0:
    // 0x2e91b0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2e91b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e91b4:
    // 0x2e91b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2e91b8:
    // 0x2e91b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e91b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e91bc:
    // 0x2e91bc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2e91bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2e91c0:
    // 0x2e91c0: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
label_2e91c4:
    if (ctx->pc == 0x2E91C4u) {
        ctx->pc = 0x2E91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91C0u;
        // 0x2e91c4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91C8u;
        goto label_2e91c8;
    }
    ctx->pc = 0x2E91C0u;
    {
        const bool branch_taken_0x2e91c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e91c0) {
            ctx->pc = 0x2E91C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E91C0u;
            // 0x2e91c4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9180;
        }
    }
    ctx->pc = 0x2E91C8u;
label_2e91c8:
    // 0x2e91c8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x2e91c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2e91cc:
    // 0x2e91cc: 0x5040ff1f  beql        $v0, $zero, . + 4 + (-0xE1 << 2)
label_2e91d0:
    if (ctx->pc == 0x2E91D0u) {
        ctx->pc = 0x2E91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91CCu;
        // 0x2e91d0: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91D4u;
        goto label_2e91d4;
    }
    ctx->pc = 0x2E91CCu;
    {
        const bool branch_taken_0x2e91cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e91cc) {
            ctx->pc = 0x2E91D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E91CCu;
            // 0x2e91d0: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E91D4u;
label_2e91d4:
    // 0x2e91d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2e91d8:
    // 0x2e91d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e91d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2e91dc:
    // 0x2e91dc: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2e91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
label_2e91e0:
    // 0x2e91e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e91e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e91e4:
    // 0x2e91e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e91e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e91e8:
    // 0x2e91e8: 0x800008  jr          $a0
label_2e91ec:
    if (ctx->pc == 0x2E91ECu) {
        ctx->pc = 0x2E91F0u;
        goto label_2e91f0;
    }
    ctx->pc = 0x2E91E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E91F0u: goto label_2e91f0;
            case 0x2E928Cu: goto label_2e928c;
            case 0x2E9390u: goto label_2e9390;
            case 0x2E9498u: goto label_2e9498;
            case 0x2E96F0u: goto label_2e96f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E91E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E91F0u;
label_2e91f0:
    // 0x2e91f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e91f4:
    // 0x2e91f4: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x2e91f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2e91f8:
    // 0x2e91f8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_2e91fc:
    if (ctx->pc == 0x2E91FCu) {
        ctx->pc = 0x2E91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91F8u;
        // 0x2e91fc: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9200u;
        goto label_2e9200;
    }
    ctx->pc = 0x2E91F8u;
    {
        const bool branch_taken_0x2e91f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91F8u;
        // 0x2e91fc: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91f8) {
            ctx->pc = 0x2E9264u;
            goto label_2e9264;
        }
    }
    ctx->pc = 0x2E9200u;
label_2e9200:
    // 0x2e9200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e9200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9204:
    // 0x2e9204: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2e9204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e9208:
    // 0x2e9208: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x2e9208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e920c:
    // 0x2e920c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2e9210:
    if (ctx->pc == 0x2E9210u) {
        ctx->pc = 0x2E9210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E920Cu;
        // 0x2e9210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9214u;
        goto label_2e9214;
    }
    ctx->pc = 0x2E920Cu;
    {
        const bool branch_taken_0x2e920c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E920Cu;
        // 0x2e9210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e920c) {
            ctx->pc = 0x2E9244u;
            goto label_2e9244;
        }
    }
    ctx->pc = 0x2E9214u;
label_2e9214:
    // 0x2e9214: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e9214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e9218:
    // 0x2e9218: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x2e9218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2e921c:
    // 0x2e921c: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x2e921cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2e9220:
    // 0x2e9220: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2e9220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2e9224:
    // 0x2e9224: 0xc0bb3d0  jal         func_2ECF40
label_2e9228:
    if (ctx->pc == 0x2E9228u) {
        ctx->pc = 0x2E9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9224u;
        // 0x2e9228: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E922Cu;
        goto label_2e922c;
    }
    ctx->pc = 0x2E9224u;
    SET_GPR_U32(ctx, 31, 0x2E922Cu);
    ctx->pc = 0x2E9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9224u;
    // 0x2e9228: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E9224u, 0x2E922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E922Cu;
label_2e922c:
    // 0x2e922c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_2e9230:
    if (ctx->pc == 0x2E9230u) {
        ctx->pc = 0x2E9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E922Cu;
        // 0x2e9230: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9234u;
        goto label_2e9234;
    }
    ctx->pc = 0x2E922Cu;
    {
        const bool branch_taken_0x2e922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e922c) {
            ctx->pc = 0x2E9230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E922Cu;
            // 0x2e9230: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9208;
        }
    }
    ctx->pc = 0x2E9234u;
label_2e9234:
    // 0x2e9234: 0x122001a2  beqz        $s1, . + 4 + (0x1A2 << 2)
label_2e9238:
    if (ctx->pc == 0x2E9238u) {
        ctx->pc = 0x2E9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9234u;
        // 0x2e9238: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E923Cu;
        goto label_2e923c;
    }
    ctx->pc = 0x2E9234u;
    {
        const bool branch_taken_0x2e9234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9234u;
        // 0x2e9238: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9234) {
            ctx->pc = 0x2E98C0u;
            goto label_2e98c0;
        }
    }
    ctx->pc = 0x2E923Cu;
label_2e923c:
    // 0x2e923c: 0x1000ff03  b           . + 4 + (-0xFD << 2)
label_2e9240:
    if (ctx->pc == 0x2E9240u) {
        ctx->pc = 0x2E9240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E923Cu;
        // 0x2e9240: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9244u;
        goto label_2e9244;
    }
    ctx->pc = 0x2E923Cu;
    {
        const bool branch_taken_0x2e923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E923Cu;
        // 0x2e9240: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e923c) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E9244u;
label_2e9244:
    // 0x2e9244: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e9244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e9248:
    // 0x2e9248: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x2e9248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2e924c:
    // 0x2e924c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e924cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2e9250:
    // 0x2e9250: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x2e9250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_2e9254:
    // 0x2e9254: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2e9254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2e9258:
    // 0x2e9258: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2e9258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2e925c:
    // 0x2e925c: 0x1000fefa  b           . + 4 + (-0x106 << 2)
label_2e9260:
    if (ctx->pc == 0x2E9260u) {
        ctx->pc = 0x2E9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E925Cu;
        // 0x2e9260: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9264u;
        goto label_2e9264;
    }
    ctx->pc = 0x2E925Cu;
    {
        const bool branch_taken_0x2e925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E925Cu;
        // 0x2e9260: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e925c) {
            ctx->pc = 0x2E8E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e48;
        }
    }
    ctx->pc = 0x2E9264u;
label_2e9264:
    // 0x2e9264: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2e9264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2e9268:
    // 0x2e9268: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e9268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e926c:
    // 0x2e926c: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x2e926cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e9270:
    // 0x2e9270: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9274:
    // 0x2e9274: 0xc0bac56  jal         func_2EB158
label_2e9278:
    if (ctx->pc == 0x2E9278u) {
        ctx->pc = 0x2E9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9274u;
        // 0x2e9278: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E927Cu;
        goto label_2e927c;
    }
    ctx->pc = 0x2E9274u;
    SET_GPR_U32(ctx, 31, 0x2E927Cu);
    ctx->pc = 0x2E9278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9274u;
    // 0x2e9278: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB158u, 0x2E9274u, 0x2E927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E927Cu;
label_2e927c:
    // 0x2e927c: 0x10400190  beqz        $v0, . + 4 + (0x190 << 2)
label_2e9280:
    if (ctx->pc == 0x2E9280u) {
        ctx->pc = 0x2E9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E927Cu;
        // 0x2e9280: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9284u;
        goto label_2e9284;
    }
    ctx->pc = 0x2E927Cu;
    {
        const bool branch_taken_0x2e927c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E927Cu;
        // 0x2e9280: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e927c) {
            ctx->pc = 0x2E98C0u;
            goto label_2e98c0;
        }
    }
    ctx->pc = 0x2E9284u;
label_2e9284:
    // 0x2e9284: 0x1000fef0  b           . + 4 + (-0x110 << 2)
label_2e9288:
    if (ctx->pc == 0x2E9288u) {
        ctx->pc = 0x2E9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9284u;
        // 0x2e9288: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E928Cu;
        goto label_2e928c;
    }
    ctx->pc = 0x2E9284u;
    {
        const bool branch_taken_0x2e9284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9284u;
        // 0x2e9288: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9284) {
            ctx->pc = 0x2E8E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e48;
        }
    }
    ctx->pc = 0x2E928Cu;
label_2e928c:
    // 0x2e928c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e928cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2e9290:
    // 0x2e9290: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x2e9290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2e9294:
    // 0x2e9294: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e9298:
    // 0x2e9298: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_2e929c:
    if (ctx->pc == 0x2E929Cu) {
        ctx->pc = 0x2E929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9298u;
        // 0x2e929c: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92A0u;
        goto label_2e92a0;
    }
    ctx->pc = 0x2E9298u;
    {
        const bool branch_taken_0x2e9298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9298u;
        // 0x2e929c: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9298) {
            ctx->pc = 0x2E9308u;
            goto label_2e9308;
        }
    }
    ctx->pc = 0x2E92A0u;
label_2e92a0:
    // 0x2e92a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e92a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e92a4:
    // 0x2e92a4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e92a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e92a8:
    // 0x2e92a8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2e92a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2e92ac:
    // 0x2e92ac: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2e92acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2e92b0:
    // 0x2e92b0: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2e92b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2e92b4:
    // 0x2e92b4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_2e92b8:
    if (ctx->pc == 0x2E92B8u) {
        ctx->pc = 0x2E92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92B4u;
        // 0x2e92b8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92BCu;
        goto label_2e92bc;
    }
    ctx->pc = 0x2E92B4u;
    {
        const bool branch_taken_0x2e92b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92B4u;
        // 0x2e92b8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92b4) {
            ctx->pc = 0x2E92F8u;
            goto label_2e92f8;
        }
    }
    ctx->pc = 0x2E92BCu;
label_2e92bc:
    // 0x2e92bc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2e92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e92c0:
    // 0x2e92c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e92c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e92c4:
    // 0x2e92c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e92c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e92c8:
    // 0x2e92c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e92cc:
    // 0x2e92cc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e92ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2e92d0:
    // 0x2e92d0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2e92d4:
    if (ctx->pc == 0x2E92D4u) {
        ctx->pc = 0x2E92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92D0u;
        // 0x2e92d4: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92D8u;
        goto label_2e92d8;
    }
    ctx->pc = 0x2E92D0u;
    {
        const bool branch_taken_0x2e92d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92D0u;
        // 0x2e92d4: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92d0) {
            ctx->pc = 0x2E92F8u;
            goto label_2e92f8;
        }
    }
    ctx->pc = 0x2E92D8u;
label_2e92d8:
    // 0x2e92d8: 0x5c60fff3  bgtzl       $v1, . + 4 + (-0xD << 2)
label_2e92dc:
    if (ctx->pc == 0x2E92DCu) {
        ctx->pc = 0x2E92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92D8u;
        // 0x2e92dc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92E0u;
        goto label_2e92e0;
    }
    ctx->pc = 0x2E92D8u;
    {
        const bool branch_taken_0x2e92d8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e92d8) {
            ctx->pc = 0x2E92DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E92D8u;
            // 0x2e92dc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E92A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e92a8;
        }
    }
    ctx->pc = 0x2E92E0u;
label_2e92e0:
    // 0x2e92e0: 0xc0bb3d0  jal         func_2ECF40
label_2e92e4:
    if (ctx->pc == 0x2E92E4u) {
        ctx->pc = 0x2E92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92E0u;
        // 0x2e92e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92E8u;
        goto label_2e92e8;
    }
    ctx->pc = 0x2E92E0u;
    SET_GPR_U32(ctx, 31, 0x2E92E8u);
    ctx->pc = 0x2E92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E92E0u;
    // 0x2e92e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E92E0u, 0x2E92E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E92E8u;
label_2e92e8:
    // 0x2e92e8: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
label_2e92ec:
    if (ctx->pc == 0x2E92ECu) {
        ctx->pc = 0x2E92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92E8u;
        // 0x2e92ec: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92F0u;
        goto label_2e92f0;
    }
    ctx->pc = 0x2E92E8u;
    {
        const bool branch_taken_0x2e92e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e92e8) {
            ctx->pc = 0x2E92ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E92E8u;
            // 0x2e92ec: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E92A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e92a8;
        }
    }
    ctx->pc = 0x2E92F0u;
label_2e92f0:
    // 0x2e92f0: 0x12000174  beqz        $s0, . + 4 + (0x174 << 2)
label_2e92f4:
    if (ctx->pc == 0x2E92F4u) {
        ctx->pc = 0x2E92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92F0u;
        // 0x2e92f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92F8u;
        goto label_2e92f8;
    }
    ctx->pc = 0x2E92F0u;
    {
        const bool branch_taken_0x2e92f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92F0u;
        // 0x2e92f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92f0) {
            ctx->pc = 0x2E98C4u;
            goto label_2e98c4;
        }
    }
    ctx->pc = 0x2E92F8u;
label_2e92f8:
    // 0x2e92f8: 0x12000174  beqz        $s0, . + 4 + (0x174 << 2)
label_2e92fc:
    if (ctx->pc == 0x2E92FCu) {
        ctx->pc = 0x2E92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92F8u;
        // 0x2e92fc: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9300u;
        goto label_2e9300;
    }
    ctx->pc = 0x2E92F8u;
    {
        const bool branch_taken_0x2e92f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92F8u;
        // 0x2e92fc: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92f8) {
            ctx->pc = 0x2E98CCu;
            goto label_2e98cc;
        }
    }
    ctx->pc = 0x2E9300u;
label_2e9300:
    // 0x2e9300: 0x1000fed2  b           . + 4 + (-0x12E << 2)
label_2e9304:
    if (ctx->pc == 0x2E9304u) {
        ctx->pc = 0x2E9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9300u;
        // 0x2e9304: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9308u;
        goto label_2e9308;
    }
    ctx->pc = 0x2E9300u;
    {
        const bool branch_taken_0x2e9300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9300u;
        // 0x2e9304: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9300) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E9308u;
label_2e9308:
    // 0x2e9308: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2e9308u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2e930c:
    // 0x2e930c: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x2e930cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e9310:
    // 0x2e9310: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2e9310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9314:
    // 0x2e9314: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e9314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e9318:
    // 0x2e9318: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2e9318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2e931c:
    // 0x2e931c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2e931cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2e9320:
    // 0x2e9320: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2e9320u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2e9324:
    // 0x2e9324: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_2e9328:
    if (ctx->pc == 0x2E9328u) {
        ctx->pc = 0x2E9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9324u;
        // 0x2e9328: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E932Cu;
        goto label_2e932c;
    }
    ctx->pc = 0x2E9324u;
    {
        const bool branch_taken_0x2e9324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9324) {
            ctx->pc = 0x2E9328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9324u;
            // 0x2e9328: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E937Cu;
            goto label_2e937c;
        }
    }
    ctx->pc = 0x2E932Cu;
label_2e932c:
    // 0x2e932c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e9330:
    // 0x2e9330: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2e9330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e9334:
    // 0x2e9334: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e9334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2e9338:
    // 0x2e9338: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e9338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e933c:
    // 0x2e933c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e933cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2e9340:
    // 0x2e9340: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2e9340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2e9344:
    // 0x2e9344: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2e9344u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2e9348:
    // 0x2e9348: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2e9348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_2e934c:
    // 0x2e934c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_2e9350:
    if (ctx->pc == 0x2E9350u) {
        ctx->pc = 0x2E9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E934Cu;
        // 0x2e9350: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9354u;
        goto label_2e9354;
    }
    ctx->pc = 0x2E934Cu;
    {
        const bool branch_taken_0x2e934c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E934Cu;
        // 0x2e9350: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e934c) {
            ctx->pc = 0x2E9378u;
            goto label_2e9378;
        }
    }
    ctx->pc = 0x2E9354u;
label_2e9354:
    // 0x2e9354: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e9354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e9358:
    // 0x2e9358: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_2e935c:
    if (ctx->pc == 0x2E935Cu) {
        ctx->pc = 0x2E935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9358u;
        // 0x2e935c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9360u;
        goto label_2e9360;
    }
    ctx->pc = 0x2E9358u;
    {
        const bool branch_taken_0x2e9358 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2e9358) {
            ctx->pc = 0x2E935Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9358u;
            // 0x2e935c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9318;
        }
    }
    ctx->pc = 0x2E9360u;
label_2e9360:
    // 0x2e9360: 0xc0bb3d0  jal         func_2ECF40
label_2e9364:
    if (ctx->pc == 0x2E9364u) {
        ctx->pc = 0x2E9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9360u;
        // 0x2e9364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9368u;
        goto label_2e9368;
    }
    ctx->pc = 0x2E9360u;
    SET_GPR_U32(ctx, 31, 0x2E9368u);
    ctx->pc = 0x2E9364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9360u;
    // 0x2e9364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E9360u, 0x2E9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9368u;
label_2e9368:
    // 0x2e9368: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_2e936c:
    if (ctx->pc == 0x2E936Cu) {
        ctx->pc = 0x2E936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9368u;
        // 0x2e936c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9370u;
        goto label_2e9370;
    }
    ctx->pc = 0x2E9368u;
    {
        const bool branch_taken_0x2e9368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9368) {
            ctx->pc = 0x2E936Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9368u;
            // 0x2e936c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9318;
        }
    }
    ctx->pc = 0x2E9370u;
label_2e9370:
    // 0x2e9370: 0x12300154  beq         $s1, $s0, . + 4 + (0x154 << 2)
label_2e9374:
    if (ctx->pc == 0x2E9374u) {
        ctx->pc = 0x2E9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9370u;
        // 0x2e9374: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9378u;
        goto label_2e9378;
    }
    ctx->pc = 0x2E9370u;
    {
        const bool branch_taken_0x2e9370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9370u;
        // 0x2e9374: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9370) {
            ctx->pc = 0x2E98C4u;
            goto label_2e98c4;
        }
    }
    ctx->pc = 0x2E9378u;
label_2e9378:
    // 0x2e9378: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x2e9378u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2e937c:
    // 0x2e937c: 0x12000153  beqz        $s0, . + 4 + (0x153 << 2)
label_2e9380:
    if (ctx->pc == 0x2E9380u) {
        ctx->pc = 0x2E9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E937Cu;
        // 0x2e9380: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9384u;
        goto label_2e9384;
    }
    ctx->pc = 0x2E937Cu;
    {
        const bool branch_taken_0x2e937c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E937Cu;
        // 0x2e9380: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e937c) {
            ctx->pc = 0x2E98CCu;
            goto label_2e98cc;
        }
    }
    ctx->pc = 0x2E9384u;
label_2e9384:
    // 0x2e9384: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2e9384u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e9388:
    // 0x2e9388: 0x1000feaf  b           . + 4 + (-0x151 << 2)
label_2e938c:
    if (ctx->pc == 0x2E938Cu) {
        ctx->pc = 0x2E938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9388u;
        // 0x2e938c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9390u;
        goto label_2e9390;
    }
    ctx->pc = 0x2E9388u;
    {
        const bool branch_taken_0x2e9388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9388u;
        // 0x2e938c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9388) {
            ctx->pc = 0x2E8E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e48;
        }
    }
    ctx->pc = 0x2E9390u;
label_2e9390:
    // 0x2e9390: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e9390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2e9394:
    // 0x2e9394: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x2e9394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2e9398:
    // 0x2e9398: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e939c:
    // 0x2e939c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_2e93a0:
    if (ctx->pc == 0x2E93A0u) {
        ctx->pc = 0x2E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E939Cu;
        // 0x2e93a0: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93A4u;
        goto label_2e93a4;
    }
    ctx->pc = 0x2E939Cu;
    {
        const bool branch_taken_0x2e939c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E939Cu;
        // 0x2e93a0: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e939c) {
            ctx->pc = 0x2E940Cu;
            goto label_2e940c;
        }
    }
    ctx->pc = 0x2E93A4u;
label_2e93a4:
    // 0x2e93a4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2e93a8:
    // 0x2e93a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e93a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e93ac:
    // 0x2e93ac: 0x2451c421  addiu       $s1, $v0, -0x3BDF
    ctx->pc = 0x2e93acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951969));
label_2e93b0:
    // 0x2e93b0: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x2e93b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2e93b4:
    // 0x2e93b4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e93b8:
    // 0x2e93b8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2e93b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e93bc:
    // 0x2e93bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2e93c0:
    // 0x2e93c0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e93c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e93c4:
    // 0x2e93c4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2e93c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2e93c8:
    // 0x2e93c8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_2e93cc:
    if (ctx->pc == 0x2E93CCu) {
        ctx->pc = 0x2E93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93C8u;
        // 0x2e93cc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93D0u;
        goto label_2e93d0;
    }
    ctx->pc = 0x2E93C8u;
    {
        const bool branch_taken_0x2e93c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93C8u;
        // 0x2e93cc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93c8) {
            ctx->pc = 0x2E9404u;
            goto label_2e9404;
        }
    }
    ctx->pc = 0x2E93D0u;
label_2e93d0:
    // 0x2e93d0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2e93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e93d4:
    // 0x2e93d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e93d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e93d8:
    // 0x2e93d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e93d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e93dc:
    // 0x2e93dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e93e0:
    // 0x2e93e0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e93e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2e93e4:
    // 0x2e93e4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_2e93e8:
    if (ctx->pc == 0x2E93E8u) {
        ctx->pc = 0x2E93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93E4u;
        // 0x2e93e8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93ECu;
        goto label_2e93ec;
    }
    ctx->pc = 0x2E93E4u;
    {
        const bool branch_taken_0x2e93e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93E4u;
        // 0x2e93e8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93e4) {
            ctx->pc = 0x2E9404u;
            goto label_2e9404;
        }
    }
    ctx->pc = 0x2E93ECu;
label_2e93ec:
    // 0x2e93ec: 0x5c60fff2  bgtzl       $v1, . + 4 + (-0xE << 2)
label_2e93f0:
    if (ctx->pc == 0x2E93F0u) {
        ctx->pc = 0x2E93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93ECu;
        // 0x2e93f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93F4u;
        goto label_2e93f4;
    }
    ctx->pc = 0x2E93ECu;
    {
        const bool branch_taken_0x2e93ec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e93ec) {
            ctx->pc = 0x2E93F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E93ECu;
            // 0x2e93f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E93B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e93b8;
        }
    }
    ctx->pc = 0x2E93F4u;
label_2e93f4:
    // 0x2e93f4: 0xc0bb3d0  jal         func_2ECF40
label_2e93f8:
    if (ctx->pc == 0x2E93F8u) {
        ctx->pc = 0x2E93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93F4u;
        // 0x2e93f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93FCu;
        goto label_2e93fc;
    }
    ctx->pc = 0x2E93F4u;
    SET_GPR_U32(ctx, 31, 0x2E93FCu);
    ctx->pc = 0x2E93F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93F4u;
    // 0x2e93f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E93F4u, 0x2E93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93FCu;
label_2e93fc:
    // 0x2e93fc: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
label_2e9400:
    if (ctx->pc == 0x2E9400u) {
        ctx->pc = 0x2E9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93FCu;
        // 0x2e9400: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9404u;
        goto label_2e9404;
    }
    ctx->pc = 0x2E93FCu;
    {
        const bool branch_taken_0x2e93fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93fc) {
            ctx->pc = 0x2E9400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E93FCu;
            // 0x2e9400: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E93B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e93b8;
        }
    }
    ctx->pc = 0x2E9404u;
label_2e9404:
    // 0x2e9404: 0x1000fe91  b           . + 4 + (-0x16F << 2)
label_2e9408:
    if (ctx->pc == 0x2E9408u) {
        ctx->pc = 0x2E9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9404u;
        // 0x2e9408: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E940Cu;
        goto label_2e940c;
    }
    ctx->pc = 0x2E9404u;
    {
        const bool branch_taken_0x2e9404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9404u;
        // 0x2e9408: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9404) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E940Cu;
label_2e940c:
    // 0x2e940c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2e940cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2e9410:
    // 0x2e9410: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e9410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2e9414:
    // 0x2e9414: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x2e9414u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e9418:
    // 0x2e9418: 0x2446c421  addiu       $a2, $v0, -0x3BDF
    ctx->pc = 0x2e9418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951969));
label_2e941c:
    // 0x2e941c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2e941cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2e9420:
    // 0x2e9420: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x2e9420u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2e9424:
    // 0x2e9424: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2e9424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9428:
    // 0x2e9428: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e9428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e942c:
    // 0x2e942c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2e942cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2e9430:
    // 0x2e9430: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2e9430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2e9434:
    // 0x2e9434: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e9434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9438:
    // 0x2e9438: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2e9438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2e943c:
    // 0x2e943c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_2e9440:
    if (ctx->pc == 0x2E9440u) {
        ctx->pc = 0x2E9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E943Cu;
        // 0x2e9440: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9444u;
        goto label_2e9444;
    }
    ctx->pc = 0x2E943Cu;
    {
        const bool branch_taken_0x2e943c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E943Cu;
        // 0x2e9440: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e943c) {
            ctx->pc = 0x2E9488u;
            goto label_2e9488;
        }
    }
    ctx->pc = 0x2E9444u;
label_2e9444:
    // 0x2e9444: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e9444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e9448:
    // 0x2e9448: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e9448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2e944c:
    // 0x2e944c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e9450:
    // 0x2e9450: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e9450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2e9454:
    // 0x2e9454: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2e9454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2e9458:
    // 0x2e9458: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2e9458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2e945c:
    // 0x2e945c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2e945cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_2e9460:
    // 0x2e9460: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2e9464:
    if (ctx->pc == 0x2E9464u) {
        ctx->pc = 0x2E9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9460u;
        // 0x2e9464: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9468u;
        goto label_2e9468;
    }
    ctx->pc = 0x2E9460u;
    {
        const bool branch_taken_0x2e9460 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9460u;
        // 0x2e9464: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9460) {
            ctx->pc = 0x2E9488u;
            goto label_2e9488;
        }
    }
    ctx->pc = 0x2E9468u;
label_2e9468:
    // 0x2e9468: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e9468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e946c:
    // 0x2e946c: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_2e9470:
    if (ctx->pc == 0x2E9470u) {
        ctx->pc = 0x2E9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E946Cu;
        // 0x2e9470: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9474u;
        goto label_2e9474;
    }
    ctx->pc = 0x2E946Cu;
    {
        const bool branch_taken_0x2e946c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2e946c) {
            ctx->pc = 0x2E9470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E946Cu;
            // 0x2e9470: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E942Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e942c;
        }
    }
    ctx->pc = 0x2E9474u;
label_2e9474:
    // 0x2e9474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e9478:
    // 0x2e9478: 0xc0bb3d0  jal         func_2ECF40
label_2e947c:
    if (ctx->pc == 0x2E947Cu) {
        ctx->pc = 0x2E947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9478u;
        // 0x2e947c: 0x7fa60270  sq          $a2, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9480u;
        goto label_2e9480;
    }
    ctx->pc = 0x2E9478u;
    SET_GPR_U32(ctx, 31, 0x2E9480u);
    ctx->pc = 0x2E947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9478u;
    // 0x2e947c: 0x7fa60270  sq          $a2, 0x270($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E9478u, 0x2E9480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9480u;
label_2e9480:
    // 0x2e9480: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_2e9484:
    if (ctx->pc == 0x2E9484u) {
        ctx->pc = 0x2E9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9480u;
        // 0x2e9484: 0x7ba60270  lq          $a2, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9488u;
        goto label_2e9488;
    }
    ctx->pc = 0x2E9480u;
    {
        const bool branch_taken_0x2e9480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9480u;
        // 0x2e9484: 0x7ba60270  lq          $a2, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9480) {
            ctx->pc = 0x2E9428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9428;
        }
    }
    ctx->pc = 0x2E9488u;
label_2e9488:
    // 0x2e9488: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x2e9488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2e948c:
    // 0x2e948c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2e948cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e9490:
    // 0x2e9490: 0x1000fe6e  b           . + 4 + (-0x192 << 2)
label_2e9494:
    if (ctx->pc == 0x2E9494u) {
        ctx->pc = 0x2E9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9490u;
        // 0x2e9494: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9498u;
        goto label_2e9498;
    }
    ctx->pc = 0x2E9490u;
    {
        const bool branch_taken_0x2e9490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9490u;
        // 0x2e9494: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9490) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E9498u;
label_2e9498:
    // 0x2e9498: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e9498u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2e949c:
    // 0x2e949c: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x2e949cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_2e94a0:
    // 0x2e94a0: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x2e94a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_2e94a4:
    // 0x2e94a4: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x2e94a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2e94a8:
    // 0x2e94a8: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x2e94a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_2e94ac:
    // 0x2e94ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e94acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2e94b0:
    // 0x2e94b0: 0x12800052  beqz        $s4, . + 4 + (0x52 << 2)
label_2e94b4:
    if (ctx->pc == 0x2E94B4u) {
        ctx->pc = 0x2E94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94B0u;
        // 0x2e94b4: 0x367302c0  ori         $s3, $s3, 0x2C0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94B8u;
        goto label_2e94b8;
    }
    ctx->pc = 0x2E94B0u;
    {
        const bool branch_taken_0x2e94b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94B0u;
        // 0x2e94b4: 0x367302c0  ori         $s3, $s3, 0x2C0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94b0) {
            ctx->pc = 0x2E95FCu;
            goto label_2e95fc;
        }
    }
    ctx->pc = 0x2E94B8u;
label_2e94b8:
    // 0x2e94b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e94bc:
    // 0x2e94bc: 0x0  nop
    ctx->pc = 0x2e94bcu;
    // NOP
label_2e94c0:
    // 0x2e94c0: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2e94c0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e94c4:
    // 0x2e94c4: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x2e94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_2e94c8:
    // 0x2e94c8: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x2e94c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_2e94cc:
    // 0x2e94cc: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_2e94d0:
    if (ctx->pc == 0x2E94D0u) {
        ctx->pc = 0x2E94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94CCu;
        // 0x2e94d0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94D4u;
        goto label_2e94d4;
    }
    ctx->pc = 0x2E94CCu;
    {
        const bool branch_taken_0x2e94cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94CCu;
        // 0x2e94d0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94cc) {
            ctx->pc = 0x2E95FCu;
            goto label_2e95fc;
        }
    }
    ctx->pc = 0x2E94D4u;
label_2e94d4:
    // 0x2e94d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e94d8:
    // 0x2e94d8: 0x2442c1f0  addiu       $v0, $v0, -0x3E10
    ctx->pc = 0x2e94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951408));
label_2e94dc:
    // 0x2e94dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e94dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e94e0:
    // 0x2e94e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e94e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e94e4:
    // 0x2e94e4: 0x800008  jr          $a0
label_2e94e8:
    if (ctx->pc == 0x2E94E8u) {
        ctx->pc = 0x2E94ECu;
        goto label_2e94ec;
    }
    ctx->pc = 0x2E94E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E94ECu: goto label_2e94ec;
            case 0x2E9518u: goto label_2e9518;
            case 0x2E9540u: goto label_2e9540;
            case 0x2E956Cu: goto label_2e956c;
            case 0x2E9584u: goto label_2e9584;
            case 0x2E9598u: goto label_2e9598;
            case 0x2E95FCu: goto label_2e95fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E94E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E94ECu;
label_2e94ec:
    // 0x2e94ec: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2e94ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2e94f0:
    // 0x2e94f0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2e94f4:
    if (ctx->pc == 0x2E94F4u) {
        ctx->pc = 0x2E94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94F0u;
        // 0x2e94f4: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94F8u;
        goto label_2e94f8;
    }
    ctx->pc = 0x2E94F0u;
    {
        const bool branch_taken_0x2e94f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94F0u;
        // 0x2e94f4: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94f0) {
            ctx->pc = 0x2E9508u;
            goto label_2e9508;
        }
    }
    ctx->pc = 0x2E94F8u;
label_2e94f8:
    // 0x2e94f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e94fc:
    // 0x2e94fc: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x2e94fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_2e9500:
    // 0x2e9500: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x2e9500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_2e9504:
    // 0x2e9504: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x2e9504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_2e9508:
    // 0x2e9508: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_2e950c:
    if (ctx->pc == 0x2E950Cu) {
        ctx->pc = 0x2E950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9508u;
        // 0x2e950c: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9510u;
        goto label_2e9510;
    }
    ctx->pc = 0x2E9508u;
    {
        const bool branch_taken_0x2e9508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9508u;
        // 0x2e950c: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9508) {
            ctx->pc = 0x2E95B4u;
            goto label_2e95b4;
        }
    }
    ctx->pc = 0x2E9510u;
label_2e9510:
    // 0x2e9510: 0x10000028  b           . + 4 + (0x28 << 2)
label_2e9514:
    if (ctx->pc == 0x2E9514u) {
        ctx->pc = 0x2E9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9510u;
        // 0x2e9514: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9518u;
        goto label_2e9518;
    }
    ctx->pc = 0x2E9510u;
    {
        const bool branch_taken_0x2e9510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9510u;
        // 0x2e9514: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9510) {
            ctx->pc = 0x2E95B4u;
            goto label_2e95b4;
        }
    }
    ctx->pc = 0x2E9518u;
label_2e9518:
    // 0x2e9518: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2e9518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2e951c:
    // 0x2e951c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2e9520:
    // 0x2e9520: 0x2442bfb0  addiu       $v0, $v0, -0x4050
    ctx->pc = 0x2e9520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950832));
label_2e9524:
    // 0x2e9524: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e9524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2e9528:
    // 0x2e9528: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e9528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e952c:
    // 0x2e952c: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x2e952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_2e9530:
    // 0x2e9530: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2e9530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2e9534:
    // 0x2e9534: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x2e9534u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_2e9538:
    // 0x2e9538: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2e953c:
    if (ctx->pc == 0x2E953Cu) {
        ctx->pc = 0x2E953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9538u;
        // 0x2e953c: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9540u;
        goto label_2e9540;
    }
    ctx->pc = 0x2E9538u;
    {
        const bool branch_taken_0x2e9538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9538u;
        // 0x2e953c: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9538) {
            ctx->pc = 0x2E95B8u;
            goto label_2e95b8;
        }
    }
    ctx->pc = 0x2E9540u;
label_2e9540:
    // 0x2e9540: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2e9540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2e9544:
    // 0x2e9544: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e9544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2e9548:
    // 0x2e9548: 0x2442bfb0  addiu       $v0, $v0, -0x4050
    ctx->pc = 0x2e9548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950832));
label_2e954c:
    // 0x2e954c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e954cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2e9550:
    // 0x2e9550: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e9550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e9554:
    // 0x2e9554: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2e9554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2e9558:
    // 0x2e9558: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2e9558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_2e955c:
    // 0x2e955c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_2e9560:
    if (ctx->pc == 0x2E9560u) {
        ctx->pc = 0x2E9560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E955Cu;
        // 0x2e9560: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9564u;
        goto label_2e9564;
    }
    ctx->pc = 0x2E955Cu;
    {
        const bool branch_taken_0x2e955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E955Cu;
        // 0x2e9560: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e955c) {
            ctx->pc = 0x2E95FCu;
            goto label_2e95fc;
        }
    }
    ctx->pc = 0x2E9564u;
label_2e9564:
    // 0x2e9564: 0x10000013  b           . + 4 + (0x13 << 2)
label_2e9568:
    if (ctx->pc == 0x2E9568u) {
        ctx->pc = 0x2E9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9564u;
        // 0x2e9568: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E956Cu;
        goto label_2e956c;
    }
    ctx->pc = 0x2E9564u;
    {
        const bool branch_taken_0x2e9564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9564u;
        // 0x2e9568: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9564) {
            ctx->pc = 0x2E95B4u;
            goto label_2e95b4;
        }
    }
    ctx->pc = 0x2E956Cu;
label_2e956c:
    // 0x2e956c: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2e956cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2e9570:
    // 0x2e9570: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x2e9570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_2e9574:
    // 0x2e9574: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_2e9578:
    if (ctx->pc == 0x2E9578u) {
        ctx->pc = 0x2E9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9574u;
        // 0x2e9578: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E957Cu;
        goto label_2e957c;
    }
    ctx->pc = 0x2E9574u;
    {
        const bool branch_taken_0x2e9574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9574u;
        // 0x2e9578: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9574) {
            ctx->pc = 0x2E95FCu;
            goto label_2e95fc;
        }
    }
    ctx->pc = 0x2E957Cu;
label_2e957c:
    // 0x2e957c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2e9580:
    if (ctx->pc == 0x2E9580u) {
        ctx->pc = 0x2E9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E957Cu;
        // 0x2e9580: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9584u;
        goto label_2e9584;
    }
    ctx->pc = 0x2E957Cu;
    {
        const bool branch_taken_0x2e957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E957Cu;
        // 0x2e9580: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e957c) {
            ctx->pc = 0x2E95B8u;
            goto label_2e95b8;
        }
    }
    ctx->pc = 0x2E9584u;
label_2e9584:
    // 0x2e9584: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x2e9584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_2e9588:
    // 0x2e9588: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2e958c:
    if (ctx->pc == 0x2E958Cu) {
        ctx->pc = 0x2E958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9588u;
        // 0x2e958c: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9590u;
        goto label_2e9590;
    }
    ctx->pc = 0x2E9588u;
    {
        const bool branch_taken_0x2e9588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9588u;
        // 0x2e958c: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9588) {
            ctx->pc = 0x2E95FCu;
            goto label_2e95fc;
        }
    }
    ctx->pc = 0x2E9590u;
label_2e9590:
    // 0x2e9590: 0x10000009  b           . + 4 + (0x9 << 2)
label_2e9594:
    if (ctx->pc == 0x2E9594u) {
        ctx->pc = 0x2E9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9590u;
        // 0x2e9594: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9598u;
        goto label_2e9598;
    }
    ctx->pc = 0x2E9590u;
    {
        const bool branch_taken_0x2e9590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9590u;
        // 0x2e9594: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9590) {
            ctx->pc = 0x2E95B8u;
            goto label_2e95b8;
        }
    }
    ctx->pc = 0x2E9598u;
label_2e9598:
    // 0x2e9598: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x2e9598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_2e959c:
    // 0x2e959c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2e95a0:
    if (ctx->pc == 0x2E95A0u) {
        ctx->pc = 0x2E95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E959Cu;
        // 0x2e95a0: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95A4u;
        goto label_2e95a4;
    }
    ctx->pc = 0x2E959Cu;
    {
        const bool branch_taken_0x2e959c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E959Cu;
        // 0x2e95a0: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e959c) {
            ctx->pc = 0x2E95FCu;
            goto label_2e95fc;
        }
    }
    ctx->pc = 0x2E95A4u;
label_2e95a4:
    // 0x2e95a4: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
label_2e95a8:
    if (ctx->pc == 0x2E95A8u) {
        ctx->pc = 0x2E95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95A4u;
        // 0x2e95a8: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95ACu;
        goto label_2e95ac;
    }
    ctx->pc = 0x2E95A4u;
    {
        const bool branch_taken_0x2e95a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95A4u;
        // 0x2e95a8: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95a4) {
            ctx->pc = 0x2E95FCu;
            goto label_2e95fc;
        }
    }
    ctx->pc = 0x2E95ACu;
label_2e95ac:
    // 0x2e95ac: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2e95acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e95b0:
    // 0x2e95b0: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x2e95b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
label_2e95b4:
    // 0x2e95b4: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x2e95b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2e95b8:
    // 0x2e95b8: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x2e95b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_2e95bc:
    // 0x2e95bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e95bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e95c0:
    // 0x2e95c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e95c4:
    // 0x2e95c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e95c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e95c8:
    // 0x2e95c8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_2e95cc:
    if (ctx->pc == 0x2E95CCu) {
        ctx->pc = 0x2E95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95C8u;
        // 0x2e95cc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95D0u;
        goto label_2e95d0;
    }
    ctx->pc = 0x2E95C8u;
    {
        const bool branch_taken_0x2e95c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95C8u;
        // 0x2e95cc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95c8) {
            ctx->pc = 0x2E95E0u;
            goto label_2e95e0;
        }
    }
    ctx->pc = 0x2E95D0u;
label_2e95d0:
    // 0x2e95d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e95d4:
    // 0x2e95d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e95d8:
    // 0x2e95d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e95dc:
    if (ctx->pc == 0x2E95DCu) {
        ctx->pc = 0x2E95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95D8u;
        // 0x2e95dc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95E0u;
        goto label_2e95e0;
    }
    ctx->pc = 0x2E95D8u;
    {
        const bool branch_taken_0x2e95d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95D8u;
        // 0x2e95dc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95d8) {
            ctx->pc = 0x2E95F0u;
            goto label_2e95f0;
        }
    }
    ctx->pc = 0x2E95E0u;
label_2e95e0:
    // 0x2e95e0: 0xc0bb3d0  jal         func_2ECF40
label_2e95e4:
    if (ctx->pc == 0x2E95E4u) {
        ctx->pc = 0x2E95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95E0u;
        // 0x2e95e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95E8u;
        goto label_2e95e8;
    }
    ctx->pc = 0x2E95E0u;
    SET_GPR_U32(ctx, 31, 0x2E95E8u);
    ctx->pc = 0x2E95E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95E0u;
    // 0x2e95e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E95E0u, 0x2E95E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95E8u;
label_2e95e8:
    // 0x2e95e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2e95ec:
    if (ctx->pc == 0x2E95ECu) {
        ctx->pc = 0x2E95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95E8u;
        // 0x2e95ec: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95F0u;
        goto label_2e95f0;
    }
    ctx->pc = 0x2E95E8u;
    {
        const bool branch_taken_0x2e95e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95E8u;
        // 0x2e95ec: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95e8) {
            ctx->pc = 0x2E9600u;
            goto label_2e9600;
        }
    }
    ctx->pc = 0x2E95F0u;
label_2e95f0:
    // 0x2e95f0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e95f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2e95f4:
    // 0x2e95f4: 0x5680ffb2  bnel        $s4, $zero, . + 4 + (-0x4E << 2)
label_2e95f8:
    if (ctx->pc == 0x2E95F8u) {
        ctx->pc = 0x2E95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95F4u;
        // 0x2e95f8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95FCu;
        goto label_2e95fc;
    }
    ctx->pc = 0x2E95F4u;
    {
        const bool branch_taken_0x2e95f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e95f4) {
            ctx->pc = 0x2E95F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E95F4u;
            // 0x2e95f8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E94C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e94c0;
        }
    }
    ctx->pc = 0x2E95FCu;
label_2e95fc:
    // 0x2e95fc: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x2e95fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_2e9600:
    // 0x2e9600: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e9604:
    if (ctx->pc == 0x2E9604u) {
        ctx->pc = 0x2E9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9600u;
        // 0x2e9604: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9608u;
        goto label_2e9608;
    }
    ctx->pc = 0x2E9600u;
    {
        const bool branch_taken_0x2e9600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9600u;
        // 0x2e9604: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9600) {
            ctx->pc = 0x2E9628u;
            goto label_2e9628;
        }
    }
    ctx->pc = 0x2E9608u;
label_2e9608:
    // 0x2e9608: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x2e9608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2e960c:
    // 0x2e960c: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_2e9610:
    if (ctx->pc == 0x2E9610u) {
        ctx->pc = 0x2E9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E960Cu;
        // 0x2e9610: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9614u;
        goto label_2e9614;
    }
    ctx->pc = 0x2E960Cu;
    {
        const bool branch_taken_0x2e960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E960Cu;
        // 0x2e9610: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e960c) {
            ctx->pc = 0x2E98D0u;
            goto label_2e98d0;
        }
    }
    ctx->pc = 0x2E9614u;
label_2e9614:
    // 0x2e9614: 0x8224ffff  lb          $a0, -0x1($s1)
    ctx->pc = 0x2e9614u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_2e9618:
    // 0x2e9618: 0xc0bb9dc  jal         func_2EE770
label_2e961c:
    if (ctx->pc == 0x2E961Cu) {
        ctx->pc = 0x2E961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9618u;
        // 0x2e961c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9620u;
        goto label_2e9620;
    }
    ctx->pc = 0x2E9618u;
    SET_GPR_U32(ctx, 31, 0x2E9620u);
    ctx->pc = 0x2E961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9618u;
    // 0x2e961c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE770u, 0x2E9618u, 0x2E9620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9620u;
label_2e9620:
    // 0x2e9620: 0x100000ab  b           . + 4 + (0xAB << 2)
label_2e9624:
    if (ctx->pc == 0x2E9624u) {
        ctx->pc = 0x2E9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9620u;
        // 0x2e9624: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9628u;
        goto label_2e9628;
    }
    ctx->pc = 0x2E9620u;
    {
        const bool branch_taken_0x2e9620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9620u;
        // 0x2e9624: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9620) {
            ctx->pc = 0x2E98D0u;
            goto label_2e98d0;
        }
    }
    ctx->pc = 0x2E9628u;
label_2e9628:
    // 0x2e9628: 0x8230ffff  lb          $s0, -0x1($s1)
    ctx->pc = 0x2e9628u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_2e962c:
    // 0x2e962c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2e962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2e9630:
    // 0x2e9630: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2e9634:
    if (ctx->pc == 0x2E9634u) {
        ctx->pc = 0x2E9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9630u;
        // 0x2e9634: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9638u;
        goto label_2e9638;
    }
    ctx->pc = 0x2E9630u;
    {
        const bool branch_taken_0x2e9630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9630u;
        // 0x2e9634: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9630) {
            ctx->pc = 0x2E9640u;
            goto label_2e9640;
        }
    }
    ctx->pc = 0x2E9638u;
label_2e9638:
    // 0x2e9638: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_2e963c:
    if (ctx->pc == 0x2E963Cu) {
        ctx->pc = 0x2E963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9638u;
        // 0x2e963c: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9640u;
        goto label_2e9640;
    }
    ctx->pc = 0x2E9638u;
    {
        const bool branch_taken_0x2e9638 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9638u;
        // 0x2e963c: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9638) {
            ctx->pc = 0x2E9654u;
            goto label_2e9654;
        }
    }
    ctx->pc = 0x2E9640u;
label_2e9640:
    // 0x2e9640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e9644:
    // 0x2e9644: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e9644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2e9648:
    // 0x2e9648: 0xc0bb9dc  jal         func_2EE770
label_2e964c:
    if (ctx->pc == 0x2E964Cu) {
        ctx->pc = 0x2E964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9648u;
        // 0x2e964c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9650u;
        goto label_2e9650;
    }
    ctx->pc = 0x2E9648u;
    SET_GPR_U32(ctx, 31, 0x2E9650u);
    ctx->pc = 0x2E964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9648u;
    // 0x2e964c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE770u, 0x2E9648u, 0x2E9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9650u;
label_2e9650:
    // 0x2e9650: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x2e9650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2e9654:
    // 0x2e9654: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_2e9658:
    if (ctx->pc == 0x2E9658u) {
        ctx->pc = 0x2E9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9654u;
        // 0x2e9658: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E965Cu;
        goto label_2e965c;
    }
    ctx->pc = 0x2E9654u;
    {
        const bool branch_taken_0x2e9654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9654u;
        // 0x2e9658: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9654) {
            ctx->pc = 0x2E96E0u;
            goto label_2e96e0;
        }
    }
    ctx->pc = 0x2E965Cu;
label_2e965c:
    // 0x2e965c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2e965cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e9660:
    // 0x2e9660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9664:
    // 0x2e9664: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x2e9664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_2e9668:
    // 0x2e9668: 0x60f809  jalr        $v1
label_2e966c:
    if (ctx->pc == 0x2E966Cu) {
        ctx->pc = 0x2E966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9668u;
        // 0x2e966c: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9670u;
        goto label_2e9670;
    }
    ctx->pc = 0x2E9668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E9670u);
        ctx->pc = 0x2E966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9668u;
        // 0x2e966c: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9668u, 0x2E9670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E9670u;
label_2e9670:
    // 0x2e9670: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e9670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9674:
    // 0x2e9674: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x2e9674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_2e9678:
    // 0x2e9678: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e967c:
    if (ctx->pc == 0x2E967Cu) {
        ctx->pc = 0x2E967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9678u;
        // 0x2e967c: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9680u;
        goto label_2e9680;
    }
    ctx->pc = 0x2E9678u;
    {
        const bool branch_taken_0x2e9678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9678u;
        // 0x2e967c: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9678) {
            ctx->pc = 0x2E9698u;
            goto label_2e9698;
        }
    }
    ctx->pc = 0x2E9680u;
label_2e9680:
    // 0x2e9680: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2e9680u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2e9684:
    // 0x2e9684: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e9684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2e9688:
    // 0x2e9688: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e9688u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2e968c:
    // 0x2e968c: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x2e968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e9690:
    // 0x2e9690: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e9694:
    if (ctx->pc == 0x2E9694u) {
        ctx->pc = 0x2E9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9690u;
        // 0x2e9694: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9698u;
        goto label_2e9698;
    }
    ctx->pc = 0x2E9690u;
    {
        const bool branch_taken_0x2e9690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9690u;
        // 0x2e9694: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9690) {
            ctx->pc = 0x2E96D8u;
            goto label_2e96d8;
        }
    }
    ctx->pc = 0x2E9698u;
label_2e9698:
    // 0x2e9698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e969c:
    if (ctx->pc == 0x2E969Cu) {
        ctx->pc = 0x2E969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9698u;
        // 0x2e969c: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96A0u;
        goto label_2e96a0;
    }
    ctx->pc = 0x2E9698u;
    {
        const bool branch_taken_0x2e9698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9698u;
        // 0x2e969c: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9698) {
            ctx->pc = 0x2E96B0u;
            goto label_2e96b0;
        }
    }
    ctx->pc = 0x2E96A0u;
label_2e96a0:
    // 0x2e96a0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2e96a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2e96a4:
    // 0x2e96a4: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x2e96a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e96a8:
    // 0x2e96a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e96ac:
    if (ctx->pc == 0x2E96ACu) {
        ctx->pc = 0x2E96ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96A8u;
        // 0x2e96ac: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96B0u;
        goto label_2e96b0;
    }
    ctx->pc = 0x2E96A8u;
    {
        const bool branch_taken_0x2e96a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96A8u;
        // 0x2e96ac: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96a8) {
            ctx->pc = 0x2E96D8u;
            goto label_2e96d8;
        }
    }
    ctx->pc = 0x2E96B0u;
label_2e96b0:
    // 0x2e96b0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2e96b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_2e96b4:
    // 0x2e96b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2e96b8:
    if (ctx->pc == 0x2E96B8u) {
        ctx->pc = 0x2E96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96B4u;
        // 0x2e96b8: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96BCu;
        goto label_2e96bc;
    }
    ctx->pc = 0x2E96B4u;
    {
        const bool branch_taken_0x2e96b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96B4u;
        // 0x2e96b8: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96b4) {
            ctx->pc = 0x2E96C8u;
            goto label_2e96c8;
        }
    }
    ctx->pc = 0x2E96BCu;
label_2e96bc:
    // 0x2e96bc: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x2e96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e96c0:
    // 0x2e96c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e96c4:
    if (ctx->pc == 0x2E96C4u) {
        ctx->pc = 0x2E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96C0u;
        // 0x2e96c4: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96C8u;
        goto label_2e96c8;
    }
    ctx->pc = 0x2E96C0u;
    {
        const bool branch_taken_0x2e96c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96C0u;
        // 0x2e96c4: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96c0) {
            ctx->pc = 0x2E96D8u;
            goto label_2e96d8;
        }
    }
    ctx->pc = 0x2E96C8u;
label_2e96c8:
    // 0x2e96c8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2e96c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_2e96cc:
    // 0x2e96cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e96ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2e96d0:
    // 0x2e96d0: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x2e96d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e96d4:
    // 0x2e96d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e96d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2e96d8:
    // 0x2e96d8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2e96d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2e96dc:
    // 0x2e96dc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2e96e0:
    // 0x2e96e0: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x2e96e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2e96e4:
    // 0x2e96e4: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x2e96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2e96e8:
    // 0x2e96e8: 0x1000fdd8  b           . + 4 + (-0x228 << 2)
label_2e96ec:
    if (ctx->pc == 0x2E96ECu) {
        ctx->pc = 0x2E96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96E8u;
        // 0x2e96ec: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96F0u;
        goto label_2e96f0;
    }
    ctx->pc = 0x2E96E8u;
    {
        const bool branch_taken_0x2e96e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96E8u;
        // 0x2e96ec: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96e8) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E96F0u;
label_2e96f0:
    // 0x2e96f0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e96f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2e96f4:
    // 0x2e96f4: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x2e96f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_2e96f8:
    // 0x2e96f8: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x2e96f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_2e96fc:
    // 0x2e96fc: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x2e96fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2e9700:
    // 0x2e9700: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x2e9700u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_2e9704:
    // 0x2e9704: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e9704u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2e9708:
    // 0x2e9708: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
label_2e970c:
    if (ctx->pc == 0x2E970Cu) {
        ctx->pc = 0x2E970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9708u;
        // 0x2e970c: 0x367303c0  ori         $s3, $s3, 0x3C0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9710u;
        goto label_2e9710;
    }
    ctx->pc = 0x2E9708u;
    {
        const bool branch_taken_0x2e9708 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9708u;
        // 0x2e970c: 0x367303c0  ori         $s3, $s3, 0x3C0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9708) {
            ctx->pc = 0x2E97D4u;
            goto label_2e97d4;
        }
    }
    ctx->pc = 0x2E9710u;
label_2e9710:
    // 0x2e9710: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e9710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e9714:
    // 0x2e9714: 0x0  nop
    ctx->pc = 0x2e9714u;
    // NOP
label_2e9718:
    // 0x2e9718: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2e9718u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e971c:
    // 0x2e971c: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x2e971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_2e9720:
    // 0x2e9720: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x2e9720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_2e9724:
    // 0x2e9724: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2e9728:
    if (ctx->pc == 0x2E9728u) {
        ctx->pc = 0x2E9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9724u;
        // 0x2e9728: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E972Cu;
        goto label_2e972c;
    }
    ctx->pc = 0x2E9724u;
    {
        const bool branch_taken_0x2e9724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9724u;
        // 0x2e9728: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9724) {
            ctx->pc = 0x2E97D4u;
            goto label_2e97d4;
        }
    }
    ctx->pc = 0x2E972Cu;
label_2e972c:
    // 0x2e972c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e972cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e9730:
    // 0x2e9730: 0x2442c330  addiu       $v0, $v0, -0x3CD0
    ctx->pc = 0x2e9730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951728));
label_2e9734:
    // 0x2e9734: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e9734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e9738:
    // 0x2e9738: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e9738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e973c:
    // 0x2e973c: 0x800008  jr          $a0
label_2e9740:
    if (ctx->pc == 0x2E9740u) {
        ctx->pc = 0x2E9744u;
        goto label_2e9744;
    }
    ctx->pc = 0x2E973Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E9744u: goto label_2e9744;
            case 0x2E9750u: goto label_2e9750;
            case 0x2E9764u: goto label_2e9764;
            case 0x2E9778u: goto label_2e9778;
            case 0x2E97D4u: goto label_2e97d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E973Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E9744u;
label_2e9744:
    // 0x2e9744: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x2e9744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_2e9748:
    // 0x2e9748: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e974c:
    if (ctx->pc == 0x2E974Cu) {
        ctx->pc = 0x2E974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9748u;
        // 0x2e974c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9750u;
        goto label_2e9750;
    }
    ctx->pc = 0x2E9748u;
    {
        const bool branch_taken_0x2e9748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9748u;
        // 0x2e974c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9748) {
            ctx->pc = 0x2E9790u;
            goto label_2e9790;
        }
    }
    ctx->pc = 0x2E9750u;
label_2e9750:
    // 0x2e9750: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x2e9750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_2e9754:
    // 0x2e9754: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2e9758:
    if (ctx->pc == 0x2E9758u) {
        ctx->pc = 0x2E9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9754u;
        // 0x2e9758: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E975Cu;
        goto label_2e975c;
    }
    ctx->pc = 0x2E9754u;
    {
        const bool branch_taken_0x2e9754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9754u;
        // 0x2e9758: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9754) {
            ctx->pc = 0x2E97D4u;
            goto label_2e97d4;
        }
    }
    ctx->pc = 0x2E975Cu;
label_2e975c:
    // 0x2e975c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e9760:
    if (ctx->pc == 0x2E9760u) {
        ctx->pc = 0x2E9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E975Cu;
        // 0x2e9760: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9764u;
        goto label_2e9764;
    }
    ctx->pc = 0x2E975Cu;
    {
        const bool branch_taken_0x2e975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E975Cu;
        // 0x2e9760: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e975c) {
            ctx->pc = 0x2E9790u;
            goto label_2e9790;
        }
    }
    ctx->pc = 0x2E9764u;
label_2e9764:
    // 0x2e9764: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x2e9764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_2e9768:
    // 0x2e9768: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2e976c:
    if (ctx->pc == 0x2E976Cu) {
        ctx->pc = 0x2E976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9768u;
        // 0x2e976c: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9770u;
        goto label_2e9770;
    }
    ctx->pc = 0x2E9768u;
    {
        const bool branch_taken_0x2e9768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9768u;
        // 0x2e976c: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9768) {
            ctx->pc = 0x2E97D4u;
            goto label_2e97d4;
        }
    }
    ctx->pc = 0x2E9770u;
label_2e9770:
    // 0x2e9770: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e9774:
    if (ctx->pc == 0x2E9774u) {
        ctx->pc = 0x2E9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9770u;
        // 0x2e9774: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9778u;
        goto label_2e9778;
    }
    ctx->pc = 0x2E9770u;
    {
        const bool branch_taken_0x2e9770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9770u;
        // 0x2e9774: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9770) {
            ctx->pc = 0x2E9790u;
            goto label_2e9790;
        }
    }
    ctx->pc = 0x2E9778u;
label_2e9778:
    // 0x2e9778: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x2e9778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
label_2e977c:
    // 0x2e977c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2e977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2e9780:
    // 0x2e9780: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_2e9784:
    if (ctx->pc == 0x2E9784u) {
        ctx->pc = 0x2E9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9780u;
        // 0x2e9784: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9788u;
        goto label_2e9788;
    }
    ctx->pc = 0x2E9780u;
    {
        const bool branch_taken_0x2e9780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9780u;
        // 0x2e9784: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9780) {
            ctx->pc = 0x2E97D4u;
            goto label_2e97d4;
        }
    }
    ctx->pc = 0x2E9788u;
label_2e9788:
    // 0x2e9788: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2e9788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2e978c:
    // 0x2e978c: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x2e978cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_2e9790:
    // 0x2e9790: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x2e9790u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_2e9794:
    // 0x2e9794: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e9794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e9798:
    // 0x2e9798: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e979c:
    // 0x2e979c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e97a0:
    // 0x2e97a0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_2e97a4:
    if (ctx->pc == 0x2E97A4u) {
        ctx->pc = 0x2E97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97A0u;
        // 0x2e97a4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97A8u;
        goto label_2e97a8;
    }
    ctx->pc = 0x2E97A0u;
    {
        const bool branch_taken_0x2e97a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97A0u;
        // 0x2e97a4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97a0) {
            ctx->pc = 0x2E97B8u;
            goto label_2e97b8;
        }
    }
    ctx->pc = 0x2E97A8u;
label_2e97a8:
    // 0x2e97a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e97a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e97ac:
    // 0x2e97ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e97acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e97b0:
    // 0x2e97b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e97b4:
    if (ctx->pc == 0x2E97B4u) {
        ctx->pc = 0x2E97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97B0u;
        // 0x2e97b4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97B8u;
        goto label_2e97b8;
    }
    ctx->pc = 0x2E97B0u;
    {
        const bool branch_taken_0x2e97b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97B0u;
        // 0x2e97b4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97b0) {
            ctx->pc = 0x2E97C8u;
            goto label_2e97c8;
        }
    }
    ctx->pc = 0x2E97B8u;
label_2e97b8:
    // 0x2e97b8: 0xc0bb3d0  jal         func_2ECF40
label_2e97bc:
    if (ctx->pc == 0x2E97BCu) {
        ctx->pc = 0x2E97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97B8u;
        // 0x2e97bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97C0u;
        goto label_2e97c0;
    }
    ctx->pc = 0x2E97B8u;
    SET_GPR_U32(ctx, 31, 0x2E97C0u);
    ctx->pc = 0x2E97BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E97B8u;
    // 0x2e97bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF40u, 0x2E97B8u, 0x2E97C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E97C0u;
label_2e97c0:
    // 0x2e97c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2e97c4:
    if (ctx->pc == 0x2E97C4u) {
        ctx->pc = 0x2E97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97C0u;
        // 0x2e97c4: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97C8u;
        goto label_2e97c8;
    }
    ctx->pc = 0x2E97C0u;
    {
        const bool branch_taken_0x2e97c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97C0u;
        // 0x2e97c4: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97c0) {
            ctx->pc = 0x2E97D8u;
            goto label_2e97d8;
        }
    }
    ctx->pc = 0x2E97C8u;
label_2e97c8:
    // 0x2e97c8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e97c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2e97cc:
    // 0x2e97cc: 0x5680ffd2  bnel        $s4, $zero, . + 4 + (-0x2E << 2)
label_2e97d0:
    if (ctx->pc == 0x2E97D0u) {
        ctx->pc = 0x2E97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97CCu;
        // 0x2e97d0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97D4u;
        goto label_2e97d4;
    }
    ctx->pc = 0x2E97CCu;
    {
        const bool branch_taken_0x2e97cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e97cc) {
            ctx->pc = 0x2E97D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E97CCu;
            // 0x2e97d0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9718;
        }
    }
    ctx->pc = 0x2E97D4u;
label_2e97d4:
    // 0x2e97d4: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x2e97d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_2e97d8:
    // 0x2e97d8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2e97dc:
    if (ctx->pc == 0x2E97DCu) {
        ctx->pc = 0x2E97DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97D8u;
        // 0x2e97dc: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97E0u;
        goto label_2e97e0;
    }
    ctx->pc = 0x2E97D8u;
    {
        const bool branch_taken_0x2e97d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97D8u;
        // 0x2e97dc: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97d8) {
            ctx->pc = 0x2E9854u;
            goto label_2e9854;
        }
    }
    ctx->pc = 0x2E97E0u;
label_2e97e0:
    // 0x2e97e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2e97e4:
    if (ctx->pc == 0x2E97E4u) {
        ctx->pc = 0x2E97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97E0u;
        // 0x2e97e4: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97E8u;
        goto label_2e97e8;
    }
    ctx->pc = 0x2E97E0u;
    {
        const bool branch_taken_0x2e97e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97E0u;
        // 0x2e97e4: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97e0) {
            ctx->pc = 0x2E981Cu;
            goto label_2e981c;
        }
    }
    ctx->pc = 0x2E97E8u;
label_2e97e8:
    // 0x2e97e8: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x2e97e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2e97ec:
    // 0x2e97ec: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2e97f0:
    if (ctx->pc == 0x2E97F0u) {
        ctx->pc = 0x2E97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97ECu;
        // 0x2e97f0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97F4u;
        goto label_2e97f4;
    }
    ctx->pc = 0x2E97ECu;
    {
        const bool branch_taken_0x2e97ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97ECu;
        // 0x2e97f0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97ec) {
            ctx->pc = 0x2E98D0u;
            goto label_2e98d0;
        }
    }
    ctx->pc = 0x2E97F4u;
label_2e97f4:
    // 0x2e97f4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e97f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2e97f8:
    // 0x2e97f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e97f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e97fc:
    // 0x2e97fc: 0xc0bb9dc  jal         func_2EE770
label_2e9800:
    if (ctx->pc == 0x2E9800u) {
        ctx->pc = 0x2E9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97FCu;
        // 0x2e9800: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9804u;
        goto label_2e9804;
    }
    ctx->pc = 0x2E97FCu;
    SET_GPR_U32(ctx, 31, 0x2E9804u);
    ctx->pc = 0x2E9800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E97FCu;
    // 0x2e9800: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE770u, 0x2E97FCu, 0x2E9804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9804u;
label_2e9804:
    // 0x2e9804: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e9804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2e9808:
    // 0x2e9808: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x2e9808u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2e980c:
    // 0x2e980c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2e9810:
    if (ctx->pc == 0x2E9810u) {
        ctx->pc = 0x2E9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E980Cu;
        // 0x2e9810: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9814u;
        goto label_2e9814;
    }
    ctx->pc = 0x2E980Cu;
    {
        const bool branch_taken_0x2e980c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E980Cu;
        // 0x2e9810: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e980c) {
            ctx->pc = 0x2E97F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e97f8;
        }
    }
    ctx->pc = 0x2E9814u;
label_2e9814:
    // 0x2e9814: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2e9818:
    if (ctx->pc == 0x2E9818u) {
        ctx->pc = 0x2E9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9814u;
        // 0x2e9818: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E981Cu;
        goto label_2e981c;
    }
    ctx->pc = 0x2E9814u;
    {
        const bool branch_taken_0x2e9814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9814u;
        // 0x2e9818: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9814) {
            ctx->pc = 0x2E98D0u;
            goto label_2e98d0;
        }
    }
    ctx->pc = 0x2E981Cu;
label_2e981c:
    // 0x2e981c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e981cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2e9820:
    // 0x2e9820: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2e9820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2e9824:
    // 0x2e9824: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x2e9824u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9828:
    // 0x2e9828: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_2e982c:
    if (ctx->pc == 0x2E982Cu) {
        ctx->pc = 0x2E982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9828u;
        // 0x2e982c: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9830u;
        goto label_2e9830;
    }
    ctx->pc = 0x2E9828u;
    {
        const bool branch_taken_0x2e9828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9828u;
        // 0x2e982c: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9828) {
            ctx->pc = 0x2E9848u;
            goto label_2e9848;
        }
    }
    ctx->pc = 0x2E9830u;
label_2e9830:
    // 0x2e9830: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2e9834:
    if (ctx->pc == 0x2E9834u) {
        ctx->pc = 0x2E9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9830u;
        // 0x2e9834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9838u;
        goto label_2e9838;
    }
    ctx->pc = 0x2E9830u;
    {
        const bool branch_taken_0x2e9830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9830u;
        // 0x2e9834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9830) {
            ctx->pc = 0x2E9848u;
            goto label_2e9848;
        }
    }
    ctx->pc = 0x2E9838u;
label_2e9838:
    // 0x2e9838: 0xc0bb9dc  jal         func_2EE770
label_2e983c:
    if (ctx->pc == 0x2E983Cu) {
        ctx->pc = 0x2E983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9838u;
        // 0x2e983c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9840u;
        goto label_2e9840;
    }
    ctx->pc = 0x2E9838u;
    SET_GPR_U32(ctx, 31, 0x2E9840u);
    ctx->pc = 0x2E983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9838u;
    // 0x2e983c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE770u, 0x2E9838u, 0x2E9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9840u;
label_2e9840:
    // 0x2e9840: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e9840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2e9844:
    // 0x2e9844: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x2e9844u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9848:
    // 0x2e9848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e984c:
    // 0x2e984c: 0xc0bb9dc  jal         func_2EE770
label_2e9850:
    if (ctx->pc == 0x2E9850u) {
        ctx->pc = 0x2E9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E984Cu;
        // 0x2e9850: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9854u;
        goto label_2e9854;
    }
    ctx->pc = 0x2E984Cu;
    SET_GPR_U32(ctx, 31, 0x2E9854u);
    ctx->pc = 0x2E9850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E984Cu;
    // 0x2e9850: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE770u, 0x2E984Cu, 0x2E9854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9854u;
label_2e9854:
    // 0x2e9854: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x2e9854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2e9858:
    // 0x2e9858: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2e985c:
    if (ctx->pc == 0x2E985Cu) {
        ctx->pc = 0x2E985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9858u;
        // 0x2e985c: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9860u;
        goto label_2e9860;
    }
    ctx->pc = 0x2E9858u;
    {
        const bool branch_taken_0x2e9858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9858u;
        // 0x2e985c: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9858) {
            ctx->pc = 0x2E98B0u;
            goto label_2e98b0;
        }
    }
    ctx->pc = 0x2E9860u;
label_2e9860:
    // 0x2e9860: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2e9860u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e9864:
    // 0x2e9864: 0xc0ba6fc  jal         func_2E9BF0
label_2e9868:
    if (ctx->pc == 0x2E9868u) {
        ctx->pc = 0x2E9868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9864u;
        // 0x2e9868: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E986Cu;
        goto label_2e986c;
    }
    ctx->pc = 0x2E9864u;
    SET_GPR_U32(ctx, 31, 0x2E986Cu);
    ctx->pc = 0x2E9868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9864u;
    // 0x2e9868: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9BF0u, 0x2E9864u, 0x2E986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E986Cu;
label_2e986c:
    // 0x2e986c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e986cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9870:
    // 0x2e9870: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2e9870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_2e9874:
    // 0x2e9874: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2e9878:
    if (ctx->pc == 0x2E9878u) {
        ctx->pc = 0x2E9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9874u;
        // 0x2e9878: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E987Cu;
        goto label_2e987c;
    }
    ctx->pc = 0x2E9874u;
    {
        const bool branch_taken_0x2e9874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9874) {
            ctx->pc = 0x2E9878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9874u;
            // 0x2e9878: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E988Cu;
            goto label_2e988c;
        }
    }
    ctx->pc = 0x2E987Cu;
label_2e987c:
    // 0x2e987c: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x2e987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_2e9880:
    // 0x2e9880: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e9884:
    if (ctx->pc == 0x2E9884u) {
        ctx->pc = 0x2E9888u;
        goto label_2e9888;
    }
    ctx->pc = 0x2E9880u;
    {
        const bool branch_taken_0x2e9880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9880) {
            ctx->pc = 0x2E9898u;
            goto label_2e9898;
        }
    }
    ctx->pc = 0x2E9888u;
label_2e9888:
    // 0x2e9888: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2e9888u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2e988c:
    // 0x2e988c: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x2e988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e9890:
    // 0x2e9890: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e9894:
    if (ctx->pc == 0x2E9894u) {
        ctx->pc = 0x2E9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9890u;
        // 0x2e9894: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9898u;
        goto label_2e9898;
    }
    ctx->pc = 0x2E9890u;
    {
        const bool branch_taken_0x2e9890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9890u;
        // 0x2e9894: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9890) {
            ctx->pc = 0x2E98A8u;
            goto label_2e98a8;
        }
    }
    ctx->pc = 0x2E9898u;
label_2e9898:
    // 0x2e9898: 0xc0b8e84  jal         func_2E3A10
label_2e989c:
    if (ctx->pc == 0x2E989Cu) {
        ctx->pc = 0x2E989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9898u;
        // 0x2e989c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98A0u;
        goto label_2e98a0;
    }
    ctx->pc = 0x2E9898u;
    SET_GPR_U32(ctx, 31, 0x2E98A0u);
    ctx->pc = 0x2E989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9898u;
    // 0x2e989c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2E9898u, 0x2E98A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E98A0u;
label_2e98a0:
    // 0x2e98a0: 0x8eb0fff8  lw          $s0, -0x8($s5)
    ctx->pc = 0x2e98a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2e98a4:
    // 0x2e98a4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2e98a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2e98a8:
    // 0x2e98a8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2e98a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2e98ac:
    // 0x2e98ac: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2e98acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2e98b0:
    // 0x2e98b0: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x2e98b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2e98b4:
    // 0x2e98b4: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x2e98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2e98b8:
    // 0x2e98b8: 0x1000fd64  b           . + 4 + (-0x29C << 2)
label_2e98bc:
    if (ctx->pc == 0x2E98BCu) {
        ctx->pc = 0x2E98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98B8u;
        // 0x2e98bc: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98C0u;
        goto label_2e98c0;
    }
    ctx->pc = 0x2E98B8u;
    {
        const bool branch_taken_0x2e98b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98B8u;
        // 0x2e98bc: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98b8) {
            ctx->pc = 0x2E8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e4c;
        }
    }
    ctx->pc = 0x2E98C0u;
label_2e98c0:
    // 0x2e98c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e98c4:
    // 0x2e98c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e98c8:
    if (ctx->pc == 0x2E98C8u) {
        ctx->pc = 0x2E98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98C4u;
        // 0x2e98c8: 0x2f7100b  movn        $v0, $s7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98CCu;
        goto label_2e98cc;
    }
    ctx->pc = 0x2E98C4u;
    {
        const bool branch_taken_0x2e98c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98C4u;
        // 0x2e98c8: 0x2f7100b  movn        $v0, $s7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98c4) {
            ctx->pc = 0x2E98D0u;
            goto label_2e98d0;
        }
    }
    ctx->pc = 0x2E98CCu;
label_2e98cc:
    // 0x2e98cc: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2e98ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e98d0:
    // 0x2e98d0: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x2e98d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_2e98d4:
    // 0x2e98d4: 0xdfbe0300  ld          $fp, 0x300($sp)
    ctx->pc = 0x2e98d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_2e98d8:
    // 0x2e98d8: 0xdfb702f0  ld          $s7, 0x2F0($sp)
    ctx->pc = 0x2e98d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 752)));
label_2e98dc:
    // 0x2e98dc: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x2e98dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
label_2e98e0:
    // 0x2e98e0: 0xdfb502d0  ld          $s5, 0x2D0($sp)
    ctx->pc = 0x2e98e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_2e98e4:
    // 0x2e98e4: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x2e98e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_2e98e8:
    // 0x2e98e8: 0xdfb302b0  ld          $s3, 0x2B0($sp)
    ctx->pc = 0x2e98e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_2e98ec:
    // 0x2e98ec: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x2e98ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_2e98f0:
    // 0x2e98f0: 0xdfb10290  ld          $s1, 0x290($sp)
    ctx->pc = 0x2e98f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_2e98f4:
    // 0x2e98f4: 0xdfb00280  ld          $s0, 0x280($sp)
    ctx->pc = 0x2e98f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_2e98f8:
    // 0x2e98f8: 0x3e00008  jr          $ra
label_2e98fc:
    if (ctx->pc == 0x2E98FCu) {
        ctx->pc = 0x2E98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98F8u;
        // 0x2e98fc: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9900u;
        goto label_fallthrough_0x2e98f8;
    }
    ctx->pc = 0x2E98F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98F8u;
        // 0x2e98fc: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E98F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e98f8:
    ctx->pc = 0x2E9900u;
}
